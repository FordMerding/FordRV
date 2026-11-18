TOPNAME ?= SimTop
INC_PATH ?=
PROGRAM ?=
ARCH ?= minirv-ysyxsoc
NXDC_FILES ?=

ifeq ($(ARCH),minirv-npc)

TOPNAME := EXTERNAL_TOP
NXDC_FILES := constr/EXTERNAL_TOP.nxdc

CPPFLAGS += -DMINIRV_NPC
VERILATOR_CFLAGS += -DMINIRV_NPC

else

TOPNAME := SimTop
NXDC_FILES := constr/SimTop.nxdc

CPPFLAGS += -DMINIRV_YSYXSOC
VERILATOR_CFLAGS += -DMINIRV_YSYXSOC

endif

INC_PATH += ../ysyxSoC/perip/uart16550/rtl/
INC_PATH += ../ysyxSoC/perip/spi/rtl/

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --build -cc \
                    -O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

CXXFLAGS += $(shell sdl2-config --cflags)
LDFLAGS += $(shell sdl2-config --libs)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)

$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

VSRCS += $(shell find $(abspath ../ysyxSoC/perip) \
	-name "*.v" -o -name "*.sv")

VSRCS += ../ysyxSoC/ready-to-run/minirv/ElaborateTop.v

include $(NVBOARD_HOME)/scripts/nvboard.mk

INCFLAGS = $(addprefix -I, $(INC_PATH))

CXXFLAGS += $(INCFLAGS)
CXXFLAGS += -DTOP_NAME="\"V$(TOPNAME)\""

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) \
		$(INCFLAGS) \
		$^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) \
		$(addprefix -CFLAGS , $(CPPFLAGS)) \
		$(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) \
		--exe \
		-o $(abspath $(BIN)) \
		--timescale "1ns/1ns" \
		--no-timing \
		-D__VERILOG__ \
		-Dfunctional \
		-DPDK_BEHAV \
		-D__UART_TO_CONSOLE__ \
		--trace-fst

all: default

run: $(BIN)
	@$^ $(PROGRAM)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: default all clean run