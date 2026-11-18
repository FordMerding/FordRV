module ysyx_FORDMERDING #(parameter ADDR_WIDTH = 32, DATA_WIDTH = 32)
(
    input clock,
    input reset,

    output [ADDR_WIDTH-1:0] io_ifu_addr,
    input [DATA_WIDTH-1:0] io_ifu_rdata,

    output [ADDR_WIDTH-1:0] io_lsu_addr,
    output [DATA_WIDTH-1:0] io_lsu_wdata,
    output [3:0] io_lsu_wmask,
    output io_lsu_wen,
    output [1:0] io_lsu_size, 
    input [DATA_WIDTH-1:0] io_lsu_rdata,

    input io_ifu_respValid,
    input io_lsu_respValid,
    output io_ifu_reqValid,
    output io_lsu_reqValid
);
    reg [DATA_WIDTH-1:0] inst_r;
    wire [DATA_WIDTH-1:0] inst = inst_r;

    wire [ADDR_WIDTH-1:0] cur_PC;
    wire [ADDR_WIDTH-1:0] next_PC;

    wire [DATA_WIDTH-1:0] reg_rdata1;
    wire [DATA_WIDTH-1:0] reg_rdata2;
    wire [DATA_WIDTH-1:0] reg_wdata;
    wire [DATA_WIDTH-1:0] S;
    wire [DATA_WIDTH-1:0] csr_rdata;

    wire [11:0] csr_addr_id;
    wire [4:0]  reg_rd_id;
    wire [4:0]  reg_rs1;
    wire [4:0]  reg_rs2;
    wire [1:0]  wb_sel_id;
    wire [DATA_WIDTH-1:0] A_id, B_id;

    wire is_load_id;
    wire reg_we_id;
    wire mem_we_id;
    wire mem_byte_id;
    wire pc_sel_id;
    wire is_idu_ebreak_id;

    reg [DATA_WIDTH-1:0] A_ex, B_ex;
    reg [1:0]  wb_sel_ex;
    reg [11:0] csr_addr_ex;
    reg [4:0]  reg_rd_ex;
    reg        is_load_ex, reg_we_ex, mem_we_ex, mem_byte_ex, pc_sel_ex, is_ebreak_ex;

    localparam S_IReq  = 3'h0;
    localparam S_IWait = 3'h1;
    localparam S_ID    = 3'h2;
    localparam S_EX    = 3'h3;
    localparam S_DReq  = 3'h4;
    localparam S_DWait = 3'h5;

    reg [2:0] state;
    wire is_mem_op_ex = is_load_ex | mem_we_ex;

    wire commit = (state == S_EX && !is_mem_op_ex) | (state == S_DWait && io_lsu_respValid);

    assign io_ifu_reqValid = (state == S_IReq) && !reset;
    assign io_lsu_reqValid = (state == S_DReq) && !reset;

    wire is_executed = commit;

    always @(posedge clock) begin
        if (state == S_IWait && io_ifu_respValid)
            inst_r <= io_ifu_rdata;
    end

    always @(posedge clock) begin
        if (state == S_ID) begin
            A_ex         <= A_id;
            B_ex         <= B_id;
            wb_sel_ex    <= wb_sel_id;
            csr_addr_ex  <= csr_addr_id;
            reg_rd_ex    <= reg_rd_id;
            is_load_ex   <= is_load_id;
            reg_we_ex    <= reg_we_id;
            mem_we_ex    <= mem_we_id;
            mem_byte_ex  <= mem_byte_id;
            pc_sel_ex    <= pc_sel_id;
            is_ebreak_ex <= is_idu_ebreak_id;
        end
    end

    always @(posedge clock or posedge reset) begin
        if(reset) begin 
            state <= S_IReq;
        end else begin
            case(state)
                S_IReq : if(io_ifu_reqValid) state <= S_IWait; 
                S_IWait: if(io_ifu_respValid) state <= S_ID;
                S_ID   : state <= S_EX;
                S_EX   : state <= is_mem_op_ex ? S_DReq : S_IReq;
                S_DReq : if(io_lsu_reqValid) state <= S_DWait;
                S_DWait: if(io_lsu_respValid) state <= S_IReq;
                default: state <= S_IReq;
            endcase
        end
    end

    assign io_ifu_addr = cur_PC;

    assign io_lsu_addr  = S;
    assign io_lsu_wdata = mem_byte_ex ? {4{reg_rdata2[7:0]}} : reg_rdata2;
    assign io_lsu_wen   = mem_we_ex & io_lsu_reqValid;

    wire [1:0] byte_idx = io_lsu_addr[1:0];
    wire [3:0] byte_sel = { byte_idx == 2'h3,  byte_idx == 2'h2,  byte_idx == 2'h1,  byte_idx == 2'h0 };
    wire [4:0] shift_bits = {byte_idx, 3'h0};
    assign io_lsu_wmask = mem_byte_ex ? byte_sel : 4'b1111;
    wire [31:0] rmask = { {8{byte_sel[3]}},  {8{byte_sel[2]}},  {8{byte_sel[1]}},  {8{byte_sel[0]}} };
    wire [DATA_WIDTH-1:0] load_data = mem_byte_ex ? ((io_lsu_rdata & rmask) >> shift_bits) : io_lsu_rdata;

    wire is_ebreak = is_ebreak_ex & commit;
    wire [DATA_WIDTH-1:0] exit_code = reg_file.mem[10];
    assign io_lsu_size = (mem_byte_ex ? 2'b00 : 2'b10);

    IDU idu(.inst(inst), .reg_rdata1(reg_rdata1), .reg_rdata2(reg_rdata2), 
        .is_ebreak(is_idu_ebreak_id), .reg_we(reg_we_id), .reg_rd(reg_rd_id),
        .reg_rs1(reg_rs1), .reg_rs2(reg_rs2), .A(A_id), .B(B_id),
        .mem_we(mem_we_id), .mem_byte(mem_byte_id),
        .wb_sel(wb_sel_id), .pc_sel(pc_sel_id), .is_load(is_load_id), .csr_addr(csr_addr_id));

    CSR csr(.clk(clock), .rst(reset), .addr(csr_addr_ex), .rdata(csr_rdata));
    ysyx_FORDMERDING_ALU exu(.A(A_ex), .B(B_ex), .S(S));
    WBU wbu(.exu_result(S), .load_data(load_data), .cur_PC(cur_PC), .wb_sel(wb_sel_ex), 
        .pc_sel(pc_sel_ex), .reg_wdata(reg_wdata), .next_PC(next_PC), .crs_data(csr_rdata));

    PC pc(.clk(clock), .rst(reset), .cur_PC(cur_PC), .next_PC(next_PC), .commit(commit));
    
    REG_FILE reg_file(.clk(clock), .we(reg_we_ex & commit), .waddr(reg_rd_ex), .wdata(reg_wdata), 
        .raddr1(reg_rs1), .raddr2(reg_rs2), .rdata1(reg_rdata1), .rdata2(reg_rdata2));
endmodule