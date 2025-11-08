`timescale 1ns / 1ps

import common::*;


module control_unit(
    input clk,
    input reset_n,
    input instruction_type instruction, 
    output control_type control
);
// OPCODE DECODE 
    localparam [6:0] OP_LUI     = 7'b011_0111 ;  // 0x37
    localparam [6:0] OP_AUIPC   = 7'b001_0111 ;  // 0x17
    localparam [6:0] OP_JAL     = 7'b110_1111 ;  // 0x6F
    localparam [6:0] OP_JALR    = 7'b110_0111 ;  // 0x67
    localparam [6:0] OP_BRANCH  = 7'b110_0011 ;  // 0x63
    localparam [6:0] OP_LOAD    = 7'b000_0011 ;  // 0x03
    localparam [6:0] OP_STORE   = 7'b010_0011 ;  // 0x23
    localparam [6:0] OP_ALU     = 7'b011_0011 ;  // 0x33
    localparam [6:0] OP_ALUI    = 7'b001_0011 ;  // 0x13
   
// R-type (funct7, funct3, opcode)
localparam logic [16:0] ADD_INSTRUCTION   = {7'b0000000, 3'b000, 7'b0110011};
localparam logic [16:0] SUB_INSTRUCTION   = {7'b0100000, 3'b000, 7'b0110011};
localparam logic [16:0] AND_INSTRUCTION   = {7'b0000000, 3'b111, 7'b0110011};
localparam logic [16:0] OR_INSTRUCTION    = {7'b0000000, 3'b110, 7'b0110011};
localparam logic [16:0] XOR_INSTRUCTION   = {7'b0000000, 3'b100, 7'b0110011};
localparam logic [16:0] SLL_INSTRUCTION   = {7'b0000000, 3'b001, 7'b0110011};
localparam logic [16:0] SRL_INSTRUCTION   = {7'b0000000, 3'b101, 7'b0110011};
localparam logic [16:0] SRA_INSTRUCTION   = {7'b0100000, 3'b101, 7'b0110011};
localparam logic [16:0] SLT_INSTRUCTION   = {7'b0000000, 3'b010, 7'b0110011};
localparam logic [16:0] SLTU_INSTRUCTION  = {7'b0000000, 3'b011, 7'b0110011};
localparam logic [16:0] MUL_INSTRUCTION   = {7'b0000001, 3'b000, 7'b0110011};
localparam logic [16:0] DIV_INSTRUCTION   = {7'b0000001, 3'b100, 7'b0110011};
localparam logic [16:0] DIVU_INSTRUCTION  = {7'b0000001, 3'b101, 7'b0110011};
localparam logic [16:0] REM_INSTRUCTION   = {7'b0000001, 3'b110, 7'b0110011};
localparam logic [16:0] REMU_INSTRUCTION  = {7'b0000001, 3'b111, 7'b0110011};
localparam logic [16:0] MULH_INSTRUCTION  = {7'b0000001, 3'b001, 7'b0110011};
// 普通 I-type ALU (funct3, opcode)
localparam logic [9:0]  ADDI_INSTRUCTION  = {3'b000, 7'b0010011};
localparam logic [9:0]  ANDI_INSTRUCTION  = {3'b111, 7'b0010011};
localparam logic [9:0]  ORI_INSTRUCTION   = {3'b110, 7'b0010011};
localparam logic [9:0]  XORI_INSTRUCTION  = {3'b100, 7'b0010011};
localparam logic [9:0]  SLTI_INSTRUCTION  = {3'b010, 7'b0010011};
localparam logic [9:0]  SLTIU_INSTRUCTION = {3'b011, 7'b0010011};

// I-type 移位指令 (funct7, funct3, opcode)
localparam logic [16:0] SLLI_INSTRUCTION  = {7'b0000000, 3'b001, 7'b0010011};
localparam logic [16:0] SRLI_INSTRUCTION  = {7'b0000000, 3'b101, 7'b0010011};
localparam logic [16:0] SRAI_INSTRUCTION  = {7'b0100000, 3'b101, 7'b0010011};
// Load (funct3, opcode)
localparam logic [9:0] LB_INSTRUCTION  = {3'b000, 7'b0000011};
localparam logic [9:0] LH_INSTRUCTION  = {3'b001, 7'b0000011};
localparam logic [9:0] LW_INSTRUCTION  = {3'b010, 7'b0000011};
localparam logic [9:0] LBU_INSTRUCTION = {3'b100, 7'b0000011};
localparam logic [9:0] LHU_INSTRUCTION = {3'b101, 7'b0000011};
// Store (funct3, opcode)
localparam logic [9:0] SB_INSTRUCTION = {3'b000, 7'b0100011};
localparam logic [9:0] SH_INSTRUCTION = {3'b001, 7'b0100011};
localparam logic [9:0] SW_INSTRUCTION = {3'b010, 7'b0100011};
// Branch (funct3, opcode)
localparam logic [9:0] BEQ_INSTRUCTION  = {3'b000, 7'b1100011};
localparam logic [9:0] BNE_INSTRUCTION  = {3'b001, 7'b1100011};
localparam logic [9:0] BLT_INSTRUCTION  = {3'b100, 7'b1100011};
localparam logic [9:0] BGE_INSTRUCTION  = {3'b101, 7'b1100011};
localparam logic [9:0] BLTU_INSTRUCTION = {3'b110, 7'b1100011};
localparam logic [9:0] BGEU_INSTRUCTION = {3'b111, 7'b1100011};
// JAL (仅 opcode)
localparam logic [6:0] JAL_INSTRUCTION   = 7'b1101111;

// JALR (funct3=000, opcode=1100111) -> 10 bits
localparam logic [9:0] JALR_INSTRUCTION = {3'b000, 7'b1100111};

// U-type
localparam logic [6:0] LUI_INSTRUCTION   = 7'b0110111;
localparam logic [6:0] AUIPC_INSTRUCTION = 7'b0010111;
    
    
    always_comb begin
        control = '0;
        control.funct3 = instruction.funct3;
        control.rs1_id = instruction.rs1;
        control.rs2_id = instruction.rs2;
       
       
        
        case (instruction.opcode)
            OP_ALU: begin
                control.encoding = R_TYPE;
                control.reg_write = 1'b1; 
                
            end
            
            OP_LOAD: begin
                control.encoding = I_TYPE;
                control.reg_write = 1'b1;
                control.alu_src = 1'b1;                
                control.mem_read = 1'b1;                
                control.mem_to_reg = 1'b1;                 
            end
            
            OP_ALUI: begin
                control.encoding = I_TYPE;
                control.reg_write = 1'b1;
                control.alu_src = 1'b1;              
            end
            
            OP_STORE: begin
                control.encoding = S_TYPE;
                control.alu_src = 1'b1;
                control.mem_write = 1'b1;                  
            end
            
            OP_BRANCH: begin
                control.encoding = B_TYPE;
                control.is_branch = 1'b1;            
            end

            OP_JAL: begin
                control.encoding = J_TYPE;
                control.reg_write = 1'b1;
                control.is_jump = 1'b1;            
            end	  

            OP_JALR: begin
                control.encoding = I_TYPE;
                control.reg_write = 1'b1;
                control.is_jumpr = 1'b1;            
            end

            OP_AUIPC: begin
                control.encoding = U_TYPE;
                control.reg_write = 1'b1;
                control.alu_src = 1'b1;
                control.is_auipc = 1'b1;
	    end

            OP_LUI: begin
                control.encoding = U_TYPE;
                control.reg_write = 1'b1;
                control.alu_src = 1'b1;                            
                control.is_lui = 1'b1;                            
            end

	  default:
	    control = '0;
	  	  
        endcase
        
        control.alu_op = ALU_ADD;

    // ============== R-type & Shift I-type (17 bits) ==============
    if ({instruction.funct7, instruction.funct3, instruction.opcode} == ADD_INSTRUCTION) begin
        control.alu_op = ALU_ADD;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == SUB_INSTRUCTION) begin
        control.alu_op = ALU_SUB;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == AND_INSTRUCTION) begin
        control.alu_op = ALU_AND;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == OR_INSTRUCTION) begin
        control.alu_op = ALU_OR;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == XOR_INSTRUCTION) begin
        control.alu_op = ALU_XOR;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == SLL_INSTRUCTION) begin
        control.alu_op = ALU_SLL;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == SRL_INSTRUCTION) begin
        control.alu_op = ALU_SRL;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == SRA_INSTRUCTION) begin
        control.alu_op = ALU_SRA;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == SLT_INSTRUCTION) begin
        control.alu_op = ALU_SLT;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == SLTU_INSTRUCTION) begin
        control.alu_op = ALU_SLTU;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == MUL_INSTRUCTION) begin
        control.alu_op = ALU_MUL;
        control.is_mul = 1'b1; 
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == DIV_INSTRUCTION) begin
        control.alu_op = ALU_DIV;
        control.is_mul = 1'b1;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == DIVU_INSTRUCTION) begin
        control.alu_op = ALU_DIVU;
        control.is_mul = 1'b1;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == REM_INSTRUCTION) begin
        control.alu_op = ALU_REM;
        control.is_mul = 1'b1;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == REMU_INSTRUCTION) begin
        control.alu_op = ALU_REMU;
        control.is_mul = 1'b1;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == MULH_INSTRUCTION) begin
        control.alu_op = ALU_MULH;
        control.is_mul = 1'b1;
    end
    // Shift I-type
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == SLLI_INSTRUCTION) begin
        control.alu_op = ALU_SLL;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == SRLI_INSTRUCTION) begin
        control.alu_op = ALU_SRL;
    end
    else if ({instruction.funct7, instruction.funct3, instruction.opcode} == SRAI_INSTRUCTION) begin
        control.alu_op = ALU_SRA;
    end

    // ============== I-type (普通算术逻辑，10 bits) ==============
    else if ({instruction.funct3, instruction.opcode} == ADDI_INSTRUCTION) begin
        control.alu_op = ALU_ADD;
    end
    else if ({instruction.funct3, instruction.opcode} == ANDI_INSTRUCTION) begin
        control.alu_op = ALU_AND;
    end
    else if ({instruction.funct3, instruction.opcode} == ORI_INSTRUCTION) begin
        control.alu_op = ALU_OR;
    end
    else if ({instruction.funct3, instruction.opcode} == XORI_INSTRUCTION) begin
        control.alu_op = ALU_XOR;
    end
    else if ({instruction.funct3, instruction.opcode} == SLTI_INSTRUCTION) begin
        control.alu_op = ALU_SLT;
    end
    else if ({instruction.funct3, instruction.opcode} == SLTIU_INSTRUCTION) begin
        control.alu_op = ALU_SLTU;
    end

    // ============== Load / Store (10 bits) ==============
    else if ({instruction.funct3, instruction.opcode} == LW_INSTRUCTION) begin
        control.alu_op = ALU_ADD; // address = base + offset
    end
    else if ({instruction.funct3, instruction.opcode} == LB_INSTRUCTION ||
             {instruction.funct3, instruction.opcode} == LH_INSTRUCTION ||
             {instruction.funct3, instruction.opcode} == LBU_INSTRUCTION||
             {instruction.funct3, instruction.opcode} == LHU_INSTRUCTION) begin
        control.alu_op = ALU_ADD; 
    end
    else if ({instruction.funct3, instruction.opcode} == SW_INSTRUCTION) begin
        control.alu_op = ALU_ADD;
    end
    else if ({instruction.funct3, instruction.opcode} == SB_INSTRUCTION ||
             {instruction.funct3, instruction.opcode} == SH_INSTRUCTION) begin
        control.alu_op = ALU_ADD;
    end

    // ============== Branch (10 bits) ==============
    else if ({instruction.funct3, instruction.opcode} == BEQ_INSTRUCTION) begin
        control.alu_op = ALU_SUB; // 用减法比较 zero
    end
    else if ({instruction.funct3, instruction.opcode} == BNE_INSTRUCTION ||
             {instruction.funct3, instruction.opcode} == BLT_INSTRUCTION ||
             {instruction.funct3, instruction.opcode} == BGE_INSTRUCTION ||
             {instruction.funct3, instruction.opcode} == BLTU_INSTRUCTION||
             {instruction.funct3, instruction.opcode} == BGEU_INSTRUCTION) begin
        control.alu_op = ALU_SUB; 
    end

    // ============== Jump / U-type ==============
    else if (instruction.opcode == JAL_INSTRUCTION) begin
        // PC + offset，常映射为 ALU_ADD（不过通常直接在取PC处加）
        control.alu_op = ALU_ADD; 
    end
    else if ({instruction.funct3, instruction.opcode} == JALR_INSTRUCTION) begin
        // rs1 + offset -> 也可视为 ALU_ADD
        control.alu_op = ALU_ADD;
    end
    else if (instruction.opcode == LUI_INSTRUCTION) begin
        // LUI: rd = imm << 12; 可在 ALU 中做 ALU_PASS_IMM 或简单用 ALU_PASS
        control.alu_op = ALU_PASS; 
    end
    else if (instruction.opcode == AUIPC_INSTRUCTION) begin
        // AUIPC: rd = PC + (imm << 12)，可当成 ALU_ADD
        control.alu_op = ALU_ADD;
    end
       
end

    
endmodule
