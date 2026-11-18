module CSR(
    input clk,
    input rst,
    input [11:0] addr,
    output reg [31:0] rdata
);
    reg [63:0] mclock;
    always @(*) begin
        case(addr)
            12'hf11: rdata = 32'h79737978;
            12'hf12: rdata = 32'hF07DC0DE;
            12'hb00: rdata = mclock[31: 0];
            12'hb80: rdata = mclock[63:32];
            default: rdata = 32'h00000000;
        endcase 
    end

    always @(posedge clk or posedge rst) begin
        if(rst) mclock <= 64'b0;
        else mclock <= mclock + 64'b1;
    end
endmodule
