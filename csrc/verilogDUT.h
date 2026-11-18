#include "verilated.h"

// #include "svdpi.h"
// #include "VSimTop__Dpi.h"

#ifdef MINIRV_NPC

#include "VEXTERNAL_TOP.h"
#include "VEXTERNAL_TOP___024root.h"
// void nvboard_bind_all_pins(VEXTERNAL_TOP* top);
VEXTERNAL_TOP* top;
uint32_t dut_DEFAULT_PC = 0x80000000; 

#else

#include "VSimTop.h"
#include "VSimTop___024root.h"
void nvboard_bind_all_pins(VSimTop* top);
uint32_t dut_DEFAULT_PC = 0x30000000; 
VSimTop* top;
#endif

#include <stdio.h>
#include <chrono>

#define CPU_FREQ_MHZ 280

constexpr uint32_t dut_MEMORY_SIZE = (1<<25);

uint32_t dut_cpu_mult = 1;
uint32_t dut_FLSH[dut_MEMORY_SIZE];
int dut_UART_ready = 0;
int dut_UART_valid = 0;
int dut_EXIT_CODE = 0;
uint32_t dut_steps = 0;
uint32_t dut_executed_inst = 0; 
bool dut_is_executed = 0;
bool dut_is_VGA = false, dut_is_ebreak = false;
uint32_t dut_VGA_x = 0, dut_VGA_y = 0;
uint32_t dut_VGA_col = 0;

unsigned long long get_time(){
    auto now = dut_steps / CPU_FREQ_MHZ;
    return now;
}

extern "C" void dut_executed(int status){
    if(status != dut_is_executed && status == 1) dut_executed_inst ++;
    dut_is_executed = status;
}

extern "C" void dut_ebreak(int code){
    dut_is_ebreak = true;
    dut_EXIT_CODE = code;
    printf("DUT EBREAK AT %d\n", dut_steps);
    if(code == 0) printf("DUT HIT GOOD TRAP\n");
    else printf("DUT HIT BAD TRAP\n");
}

extern "C" void flash_read(int32_t addr, int32_t *data) {
    // printf("%x\n", addr);
    // assert(0); 
    *data = dut_FLSH[addr/4];
    // if (addr == 0x10000004) {  // read UART status
    //     dut_UART_ready = (rand() & 0x7) == 0 ? 1 : 0;
    //     dut_UART_valid = 1;
    //     *data = dut_UART_ready; // ready probability is 12.5%
    // } else if(addr == 0x20000000) {
    //     *data = get_time() & 0xFFFFFFFF;
    // } else if(addr == 0x20000004) {
    //     *data = get_time() >> 32;
    // }
    // else *data = dut_FLSH[addr];
    // printf("flash_read out: %x\n", dut_FLSH[addr]);
}

extern "C" int pmem_read(int addr){
    // printf("write: %x, %x, %x\n", addr, data, wmask);
    // printf("r%x", addr);
    uint32_t uaddr = (uint32_t)addr;
    // if (uaddr == 0x10000004) {  // read UART status
    //     dut_UART_ready = 1;
    //     // dut_UART_ready = (rand() & 0x7) == 0 ? 1 : 0;
    //     return dut_UART_ready; // ready probability is 12.5%
    // }

    if(uaddr < dut_DEFAULT_PC || (uaddr - dut_DEFAULT_PC) >= dut_MEMORY_SIZE * 4) return 0;
    return dut_FLSH[(uaddr-dut_DEFAULT_PC)/4];
}

extern "C" void pmem_write(int addr, int data, int wmask){
    // printf("write: %x, %x, %x\n", addr, data, wmask);
    uint32_t uaddr = (uint32_t)addr;
    // if (uaddr == 0x10000000) {  // write to UART
    //     fputc(data & 0xff, stderr);   // defined in stdio.h
    //     return;
    // }

    if(uaddr < dut_DEFAULT_PC || (uaddr - dut_DEFAULT_PC) >= dut_MEMORY_SIZE * 4) return;

    uint32_t current = dut_FLSH[(uaddr-dut_DEFAULT_PC)/4];
    for(int i = 0; i < 4; i++){
        if((wmask >> i) & 1){
            uint32_t mask = 0xFFU << (i*8);
            current = (current & ~ mask) | (data & mask);
        }
    }
    dut_FLSH[(uaddr-dut_DEFAULT_PC)/4] = current;
}

void dut_step(bool IS_RESET = false){
    top->clock = 0;
    for(int i = 0; i < dut_cpu_mult; i++){
        top->cpuClock = 0;
        top->eval();
        dut_steps++;
        top->cpuClock = 1; 
        top->eval();
    }

    top->clock = 1;
    for(int i = 0; i < dut_cpu_mult; i++){
        top->cpuClock = 0;
        top->eval();
        dut_steps++;
        top->cpuClock = 1; 
        top->eval();
    }
    // if(!IS_RESET) dut_steps ++;
}

void dut_reset(int n){
    top->reset = 1;
    while(n--){
        dut_step(true);
    }
    top->reset = 0;
    top->eval();
}
