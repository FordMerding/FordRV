// Execution Unit
module ysyx_FORDMERDING_ALU#(parameter DATA_WIDTH = 32)
(
    input [DATA_WIDTH-1:0] A,
    input [DATA_WIDTH-1:0] B,
    output [DATA_WIDTH-1:0] S
);
    assign S = A + B;
endmodule
