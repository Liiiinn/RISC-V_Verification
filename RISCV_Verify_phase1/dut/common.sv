package common;
`define NOP_CONTROL {ALU_PASS, I_TYPE, 5'b0, 5'b0, 3'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0, 1'b0}

   localparam int XLEN_WIDTH = 32;
   localparam [31:0] INSTRUCTION_NOP = 32'h00000013;
   localparam [31:0] PC_INIT         = 32'h00000000;

   localparam REGISTER_FILE_SIZE = 32;

   
   // data_ram_depth
   localparam int  DATA_RAM_DEPTH = 128;

   localparam [2:0] F3_ADDX  = 3'b000 ;
   localparam [2:0] F3_SUB   = 3'b000 ;
   localparam [2:0] F3_SLTX  = 3'b010 ;
   localparam [2:0] F3_SLTUX = 3'b011 ;
   localparam [2:0] F3_XORX  = 3'b100 ;
   localparam [2:0] F3_ORX   = 3'b110 ;
   localparam [2:0] F3_ANDX  = 3'b111 ;
   localparam [2:0] F3_SLLX  = 3'b001 ;
   localparam [2:0] F3_SRXX  = 3'b101 ;

   localparam [2:0] F3_JALR = 3'b000 ;
   localparam [2:0] F3_BEQ  = 3'b000 ;
   localparam [2:0] F3_BNE  = 3'b001 ;
   localparam [2:0] F3_BLT  = 3'b100 ;
   localparam [2:0] F3_BGE  = 3'b101 ;  
   localparam [2:0] F3_BLTU = 3'b110 ;
   localparam [2:0] F3_BGEU = 3'b111 ;

   localparam [2:0] F3_LB   = 3'b000 ;
   localparam [2:0] F3_LH   = 3'b001 ;
   localparam [2:0] F3_LW   = 3'b010 ;
   localparam [2:0] F3_LBU  = 3'b100 ;
   localparam [2:0] F3_LHU  = 3'b101 ;
   localparam [2:0] F3_SB   = 3'b000 ;
   localparam [2:0] F3_SH   = 3'b001 ;
   localparam [2:0] F3_SW   = 3'b010 ;


   localparam int GSHARE_GHSR_WIDTH = 10;
   localparam int GSHARE_PHT_SIZE = 1024;
   localparam int GSHARE_PHT_WIDTH = 10; // max ( log2(GSHARE_ENTRY_SIZE) , GSHARE_BHSR_WIDTH)

   localparam int   BTB_ENTRY_NUM = 512;


   
    typedef enum logic [4:0] 
    {
        ALU_ADD  = 5'b00000 , 
        ALU_SUB  = 5'b00001 , 
        ALU_SLT  = 5'b00100 , 
        ALU_SLTU = 5'b00110 , 
        ALU_XOR  = 5'b01000 , 
        ALU_OR   = 5'b01100 , 
        ALU_AND  = 5'b01110 , 
        ALU_SLL  = 5'b00010 , 
        ALU_SRL  = 5'b01010 , 
        ALU_SRA  = 5'b01011 , 
        ALU_MUL  = 5'b00011 , 
        ALU_DIV  = 5'b00101 , 
        ALU_DIVU = 5'b00111 , 
        ALU_REM  = 5'b01001 ,
        ALU_REMU = 5'b01101 ,
        ALU_PASS = 5'b01111 ,
        ALU_MULH = 5'b10000 
    } alu_op_type;

    typedef enum logic [2:0]
    {
        R_TYPE,
        I_TYPE,
        S_TYPE,
        B_TYPE,
        U_TYPE,
        J_TYPE
    } encoding_type;
    
    
    typedef struct packed
    {
        alu_op_type alu_op;
        encoding_type encoding;
        logic [4:0] rs1_id;
        logic [4:0] rs2_id;
        logic [2:0] funct3;
        logic alu_src;
        logic mem_read;
        logic mem_write;
        logic reg_write;
        logic mem_to_reg;
        logic is_branch;
        logic is_jump;
        logic is_jumpr;
        logic is_lui;
        logic is_auipc;
        logic is_mul;
    } control_type;
    
    typedef struct packed
    {
       logic                  	        branch_taken_predict;
       logic [GSHARE_GHSR_WIDTH-1:0] 	current_GHSR        ;
       logic 				branch_btb_hit      ;
       logic [XLEN_WIDTH-1:0] 		branch_btb_addr     ;

    } branch_predict_type;

   
    typedef struct packed
    {
        logic [6:0] funct7;
        logic [4:0] rs2;
        logic [4:0] rs1;
        logic [2:0] funct3;
        logic [4:0] rd;
        logic [6:0] opcode;
    } instruction_type;
    
        
    typedef struct  packed
    {
       logic [31:0]               pc;
       branch_predict_type        branch_predict;       
       instruction_type           instruction;
    } if_id_type;
    
    
    typedef struct packed
    {
        logic [4:0] reg_rd_id;
        logic [31:0] pc;
        logic [31:0] data1;
        logic [31:0] data2;
        logic [31:0] immediate_data;
        control_type control;
        branch_predict_type branch_predict;
    } id_ex_type;
    

    typedef struct packed
    {
        logic [4:0] reg_rd_id;       
        control_type control;
        logic [31:0] alu_data;
        logic [31:0] memory_data;

    } ex_mem_type;
    
    
    typedef struct packed
    {
       
        logic [4:0] reg_rd_id;
        logic [31:0] memory_data;
        logic [31:0] alu_data;
        control_type control;
    } mem_wb_type;


       typedef struct packed
    {
       logic 	      detect;
       logic 	      id_ex_harzard_control;
       logic 	      pc_harzard_control;
       logic 	      id_nop_harzard_control;
       
    } hazard_control_type;

    function [31:0] immediate_extension(instruction_type instruction, encoding_type inst_encoding);
        case (inst_encoding)
            // I-type 立即�? (12-bit sign-extended)
            I_TYPE: immediate_extension = { {20{instruction[31]}}, instruction[31:20] };
            
            // S-type 立即�? (store, 12-bit sign-extended)
            S_TYPE: immediate_extension = { {20{instruction[31]}}, instruction[31:25], instruction[11:7] };
            
            // B-type 立即�? (branch, 13-bit sign-extended, 左移 1 �?)
            B_TYPE: immediate_extension = { {19{instruction[31]}}, instruction[31], instruction[7], instruction[30:25], instruction[11:8], 1'b0 };
            
            // U-type 立即�? (upper immediate, 32-bit 左移 12 �?)
            U_TYPE: immediate_extension = { instruction[31:12], 12'b0 };
            
            // J-type 立即�? (jump, 21-bit sign-extended, 左移 1 �?)
            J_TYPE: immediate_extension = { {11{instruction[31]}}, instruction[31], instruction[19:12], instruction[20], instruction[30:21], 1'b0 };
            
            // 默认情况（防�? latch�?
            default: immediate_extension = 32'b0;
        endcase
    endfunction

    function logic if_branch_taken (logic [1:0] biomd);
        case(biomd)
            2'b11 : if_branch_taken = 1;
            2'b10 : if_branch_taken = 1;
            2'b01 : if_branch_taken = 0;
            2'b00 : if_branch_taken = 0;
        endcase

    endfunction // if_branch_taken

    function [GSHARE_PHT_WIDTH-1:0] gshare_hash(
        input logic [GSHARE_GHSR_WIDTH-1:0] GHSR,
        input logic [XLEN_WIDTH-1 :0] branch_pc
    );
        gshare_hash = GHSR ^ branch_pc[GSHARE_PHT_WIDTH+1:2]; //drop low 2 bit
    endfunction
 

   
endpackage
