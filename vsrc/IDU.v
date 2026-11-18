// Instruction Decode Unit
module IDU #(DATA_WIDTH = 32)
(
    input [DATA_WIDTH-1:0] inst,
    input [DATA_WIDTH-1:0] reg_rdata1,
    input [DATA_WIDTH-1:0] reg_rdata2,
    
    output is_ebreak,

    output reg_we,
    output [4:0] reg_rd, 
    output [4:0] reg_rs1,
    output [4:0] reg_rs2,
    
    output [DATA_WIDTH-1:0] A,
    output [DATA_WIDTH-1:0] B,

    output mem_we,
    output mem_byte,
    output is_load,

    output [1:0] wb_sel,
    output pc_sel,

    output [11:0] csr_addr
);
    wire [6:0] opcode = inst[6:0];
    wire [2:0] funct_3 = inst[14:12];
    wire [6:0] funct_7 = inst[31:25];
    wire [11:0] funct_12 = inst[31:20];

    wire [4:0] rd = inst[11:7];
    wire [4:0] rs1 = inst[19:15];
    wire [4:0] rs2 = inst[24:20];

    wire [31:0] imm_I = {{20{inst[31]}}, inst[31:20]};
    wire [31:0] imm_S = {{20{inst[31]}}, inst[31:25], inst[11:7]};
    wire [31:0] imm_U = {inst[31:12], 12'h0};

    wire is_lui    = (opcode == 7'h37); 
    wire is_addi   = (opcode == 7'h13) & (funct_3 == 3'h0);
    wire is_jalr   = (opcode == 7'h67) & (funct_3 == 3'h0);
    wire is_add    = (opcode == 7'h33) & (funct_3 == 3'h0) & (funct_7 == 7'h0);
    wire is_lw     = (opcode == 7'h03) & (funct_3 == 3'h2);
    wire is_lbu    = (opcode == 7'h03) & (funct_3 == 3'h4);
    wire is_sb     = (opcode == 7'h23) & (funct_3 == 3'h0);
    wire is_sw     = (opcode == 7'h23) & (funct_3 == 3'h2);
    wire is_csrrs  = (opcode == 7'h73) & (funct_3 == 3'h2);
    
    assign is_ebreak = (opcode == 7'h73) & (funct_3 == 3'h0) & (funct_12 == 12'h1) && (rs1 == 5'h0) && (rd == 5'h0);

    assign is_load = is_lw | is_lbu;
    assign reg_we = (is_lui | is_addi | is_jalr | is_add | is_lw | is_lbu | is_csrrs);
    assign reg_rd = rd;
    assign reg_rs1 = rs1;
    assign reg_rs2 = rs2;

    assign A = is_lui ? 32'h0 : reg_rdata1;
    assign B = (is_add ? reg_rdata2 : (is_sb | is_sw) ? imm_S : is_lui ? imm_U : imm_I);

    assign mem_we = (is_sw | is_sb);
    assign mem_byte = (is_lbu | is_sb);

    assign wb_sel = ((is_lw | is_lbu)) ? 2'b01 :  is_jalr ? 2'b10 : is_csrrs ? 2'b11 : 2'b00;

    assign pc_sel = is_jalr;

    assign csr_addr = funct_12;
endmodule
