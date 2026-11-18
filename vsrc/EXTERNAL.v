import "DPI-C" function int pmem_read(input int addr);
import "DPI-C" function void pmem_write(input int data,input int addr,input int wmask);
// import "DPI-C" function void dut_ebreak(input int code);
// import "DPI-C" function void dut_executed(input int status);

module EXTERNAL_TOP #(parameter ADDR_WIDTH = 32, parameter DATA_WIDTH = 32)
(
    input clock,
    input cpuClock,
    input reset
);  
    wire io_ifu_reqValid;
    reg io_ifu_respValid;
    wire io_lsu_reqValid;
    wire io_lsu_respValid;


    wire [ADDR_WIDTH-1:0] io_lsu_addr;
    wire [DATA_WIDTH-1:0] io_lsu_wdata;
    wire [3:0] io_lsu_wmask;
    wire io_lsu_wen;
    wire [1:0] io_lsu_size; 
    wire [DATA_WIDTH-1:0] io_lsu_rdata;


    wire [ADDR_WIDTH-1:0] io_ifu_addr;
    reg [DATA_WIDTH-1:0] io_ifu_rdata;

    initial begin
        rand_COUNT = 4'h1;
        io_ifu_respValid = 1'h0;
        count = 32'h0;
        is_working = 1'h0;
    end

    reg [3:0] rand_COUNT;

    reg [DATA_WIDTH-1:0] count;
    reg is_working;

    always @(posedge clock) begin
            if(io_ifu_reqValid) begin 
                io_ifu_rdata <= pmem_read(io_ifu_addr);
                is_working <= 1;
                // rand_COUNT <= {rand_COUNT[2] ^ rand_COUNT[0], rand_COUNT[3:1]};
            end
            if(is_working) count <= count + 32'b1;
            else count <= 0;
            io_ifu_respValid <= io_ifu_reqValid;
            // if(count >= {28'b0, rand_COUNT}) begin
            //     // is_working <= 0;
            // end
            // else begin
            //     io_ifu_respValid <= 0;
            // end
        end

    wire [31:0] exit_code;
    wire is_ebreak;

    ysyx_FORDMERDING cpu(.clock(clock), .reset(reset), .io_ifu_addr(io_ifu_addr),
        .io_ifu_rdata(io_ifu_rdata), .io_lsu_addr(io_lsu_addr), .io_lsu_wdata(io_lsu_wdata), 
        .io_lsu_wmask(io_lsu_wmask), .io_lsu_wen(io_lsu_wen), .io_lsu_rdata(io_lsu_rdata),
        .io_ifu_respValid(io_ifu_respValid), .io_ifu_reqValid(io_ifu_reqValid), .io_lsu_respValid(io_lsu_respValid), 
        .io_lsu_reqValid(io_lsu_reqValid), .io_lsu_size(io_lsu_size));

    // always @(posedge is_ebreak) begin
    //     dut_ebreak(exit_code);
    // end

    RAM ram(.clk(clock), .addr(io_lsu_addr), .byte_en(io_lsu_wmask), .wdata(io_lsu_wdata), .we(io_lsu_wen), 
        .rdata(io_lsu_rdata), .reqValid(io_lsu_reqValid), .respValid(io_lsu_respValid));
    
endmodule

module RAM #(parameter ADDR_WIDTH = 32, DATA_WIDTH = 32, BYTES = DATA_WIDTH/8)
(
    input we,
    input clk, 
    input reqValid,
    output reg respValid,
    input [ADDR_WIDTH-1:0] addr, 
    input [BYTES-1:0] byte_en,
    input [DATA_WIDTH-1:0] wdata,
    output reg [DATA_WIDTH-1:0] rdata
);

    always @(posedge clk) begin
        rdata <= (!we & reqValid) ? pmem_read(addr) : 32'h0;
        if(we & reqValid) begin
            pmem_write(addr, wdata, {28'h0, byte_en});
        end 
        respValid <= reqValid;
    end

endmodule
