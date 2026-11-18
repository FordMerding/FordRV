// WriteBack Unit
module WBU #(parameter ADDR_WIDTH = 32, parameter DATA_WIDTH = 32)
(
    input [DATA_WIDTH-1:0] exu_result,
    input [DATA_WIDTH-1:0] load_data,
    input [DATA_WIDTH-1:0] crs_data,
    input [ADDR_WIDTH-1:0] cur_PC,
    input [1:0] wb_sel,
    input pc_sel,

    output [DATA_WIDTH-1:0] reg_wdata,
    output [ADDR_WIDTH-1:0] next_PC
);
    wire [ADDR_WIDTH-1:0] pc_plus4 = cur_PC + 32'h4;

    assign reg_wdata = (wb_sel == 2'b01) ? load_data : (wb_sel == 2'b10) ? pc_plus4 : (wb_sel == 2'b11) ? crs_data : exu_result;
    assign next_PC = pc_sel ? (exu_result & ~32'h1) : pc_plus4;
endmodule
