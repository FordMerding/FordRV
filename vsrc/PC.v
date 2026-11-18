module PC #(parameter ADDR_WIDTH = 32, parameter DEFAULT_VALUE = 32'h3000_0000)
(
    input clk, 
    input rst, 
    input [ADDR_WIDTH-1:0] next_PC,
    output reg [ADDR_WIDTH-1:0] cur_PC,

    input commit
);
    always @(posedge clk or posedge rst) begin
        if(rst) cur_PC <= DEFAULT_VALUE;
        else if(commit) cur_PC <= next_PC;
    end
endmodule
