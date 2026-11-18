module REG_FILE #(parameter ADDR_WIDTH = 5, parameter DATA_WIDTH = 32)
(
    input clk, 
    input we, 
    input [ADDR_WIDTH-1:0] waddr, 
    input [ADDR_WIDTH-1:0] raddr1, 
    input [ADDR_WIDTH-1:0] raddr2, 
    input [DATA_WIDTH-1:0] wdata,
    output [DATA_WIDTH-1:0] rdata1, 
    output [DATA_WIDTH-1:0] rdata2
);
    reg [DATA_WIDTH-1:0] mem [0:(1<<ADDR_WIDTH)-1];

    always @(posedge clk) begin
        if(we & waddr != 0) mem[waddr] <= wdata;
    end

    assign rdata1 = mem[raddr1];
    assign rdata2 = mem[raddr2];
    
endmodule
