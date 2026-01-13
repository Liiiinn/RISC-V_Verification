`ifndef CPU_SEQ_ITEM_SVH
`define CPU_SEQ_ITEM_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

class cpu_seq_item extends uvm_sequence_item;
    
    // 指令执行信息
    logic [31:0] pc;
    logic [31:0] instruction;
    
    // 指令类型（译码后）
    opcode_t opcode;
    logic [2:0] funct3;
    logic [6:0] funct7;
    
    // 操作数
    logic [4:0] rs1, rs2, rd;
    logic [31:0] rs1_data, rs2_data;
    logic [31:0] imm;
    
    // 执行结果
    logic [31:0] alu_result;
    logic [31:0] reg_wdata;  // 写回寄存器的数据
    bit reg_write;
    
    // 内存访问
    bit mem_access;
    bit mem_write;
    logic [31:0] mem_addr;
    logic [31:0] mem_data;
    logic [3:0] mem_be;
    
    // 分支信息
    bit is_branch;
    bit branch_taken;
    logic [31:0] branch_target;
    
    // 时间戳
    time timestamp;
    
    `uvm_object_utils_begin(cpu_seq_item)
        `uvm_field_int(pc, UVM_ALL_ON|UVM_HEX)
        `uvm_field_int(instruction, UVM_ALL_ON|UVM_HEX)
        `uvm_field_int(opcode, UVM_ALL_ON)
        `uvm_field_int(rs1, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(rs2, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(rd, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(alu_result, UVM_ALL_ON|UVM_HEX)
        `uvm_field_int(mem_access, UVM_ALL_ON)
        `uvm_field_int(is_branch, UVM_ALL_ON)
    `uvm_object_utils_end
    
    function new(string name = "cpu_seq_item");
        super.new(name);
    endfunction
    
    // 指令名称获取
    function string get_instruction_name();
        case (opcode)
            OP_REG: begin
                case ({funct7, funct3})
                    {7'b0000000, 3'b000}: return "ADD";
                    {7'b0100000, 3'b000}: return "SUB";
                    {7'b0000000, 3'b111}: return "AND";
                    {7'b0000000, 3'b110}: return "OR";
                    {7'b0000000, 3'b100}: return "XOR";
                    {7'b0000000, 3'b001}: return "SLL";
                    {7'b0000000, 3'b101}: return "SRL";
                    {7'b0100000, 3'b101}: return "SRA";
                    {7'b0000000, 3'b010}: return "SLT";
                    {7'b0000000, 3'b011}: return "SLTU";
                    default: return "R-TYPE";
                endcase
            end
            OP_IMM: begin
                case (funct3)
                    3'b000: return "ADDI";
                    3'b111: return "ANDI";
                    3'b110: return "ORI";
                    3'b100: return "XORI";
                    3'b001: return "SLLI";
                    3'b101: return (funct7[5]) ? "SRAI" : "SRLI";
                    3'b010: return "SLTI";
                    3'b011: return "SLTIU";
                    default: return "I-TYPE(ALU)";
                endcase
            end
            OP_LOAD: return "LOAD";
            OP_STORE: return "STORE";
            OP_BRANCH: begin
                case (funct3)
                    3'b000: return "BEQ";
                    3'b001: return "BNE";
                    3'b100: return "BLT";
                    3'b101: return "BGE";
                    3'b110: return "BLTU";
                    3'b111: return "BGEU";
                    default: return "BRANCH";
                endcase
            end
            OP_JAL: return "JAL";
            OP_JALR: return "JALR";
            OP_LUI: return "LUI";
            OP_AUIPC: return "AUIPC";
            default: return "UNKNOWN";
        endcase
    endfunction
    
    // 解码指令
    function void decode_instruction();
        opcode = opcode_t'(instruction[6:0]);
        rd = instruction[11:7];
        funct3 = instruction[14:12];
        rs1 = instruction[19:15];
        rs2 = instruction[24:20];
        funct7 = instruction[31:25];
        
        // 解析立即数（根据指令类型）
        case (opcode)
            OP_IMM, OP_LOAD, OP_JALR: 
                imm = {{20{instruction[31]}}, instruction[31:20]};  // I-type
            OP_STORE: 
                imm = {{20{instruction[31]}}, instruction[31:25], instruction[11:7]};  // S-type
            OP_BRANCH: 
                imm = {{19{instruction[31]}}, instruction[31], instruction[7], 
                       instruction[30:25], instruction[11:8], 1'b0};  // B-type
            OP_LUI, OP_AUIPC: 
                imm = {instruction[31:12], 12'b0};  // U-type
            OP_JAL: 
                imm = {{11{instruction[31]}}, instruction[31], instruction[19:12], 
                       instruction[20], instruction[30:21], 1'b0};  // J-type
            default: imm = 0;
        endcase
    endfunction
    
endclass : cpu_seq_item

`endif