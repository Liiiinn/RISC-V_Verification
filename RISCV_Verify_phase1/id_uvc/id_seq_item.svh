// id_seq_item.svh - sequence item for decode stage
`ifndef ID_SEQ_ITEM_SVH
`define ID_SEQ_ITEM_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

typedef enum logic [6:0] {
    Instr_R_type   = 7'b0110011,
    Instr_I_type   = 7'b0010011,
    Instr_I_L_type = 7'b0000011,
    Instr_S_type   = 7'b0100011,
    Instr_B_type   = 7'b1100011,
    Instr_U_type1   = 7'b0110111,
    Instr_U_type2   = 7'b0010111,
    Instr_J_type   = 7'b1101111,
    Instr_I_J_type = 7'b1100111
} instr_type;

class id_seq_item extends uvm_sequence_item;
    `uvm_object_utils(id_seq_item)

    // ===== DUT inputs =====
    rand instruction_type    instruction;
    // rand instr_type          my_instr;
    rand logic [31:0]        pc;
    rand branch_predict_type branch_in;
    rand logic               write_en;
    rand logic [4:0]         write_id;
    rand logic [31:0]        write_data;

    // randc logic [4:0]  reg_id;
    rand logic [19:0] imm_20bit;

    // ===== Global constraints =====

    constraint instr_type_dist {
        instruction.opcode dist {
            Instr_R_type   := 25,
            Instr_I_type   := 20,
            Instr_I_L_type := 10,
            Instr_S_type   := 10,
            Instr_B_type   := 10,
            Instr_U_type1  := 5,
            Instr_U_type2  := 5,
            Instr_J_type   := 8,
            Instr_I_J_type := 7
        };
    }

    constraint pc_c {
        pc[1:0] == 2'b00;
        pc inside {[32'h0000_0000:32'h0000_FFFC]};
    }

    // constraint writeback_c {
    //     write_en dist {0 := 3, 1 := 1};
    //     write_id inside {[0:31]};
    // }
    constraint writeback_c{
        write_en dist {1 := 1, 0 := 1};
        write_id inside {[0:31]};
    }

    constraint branch_in_c {
        branch_in.branch_taken_predict dist {0 := 1, 1 := 1};
        branch_in.branch_btb_hit dist {0 := 7, 1 := 3};

        if (branch_in.branch_btb_hit) {
            branch_in.branch_btb_addr[1:0] == 2'b00;
            branch_in.branch_btb_addr inside {[32'h0000_0000:32'h0000_FFFC]};
        } else {
            branch_in.branch_btb_addr == 0;
        }
    }

    // ===== Instruction semantic constraints =====

    constraint instruction_c {

        // R-type
        (instruction.opcode == Instr_R_type) -> {
            // instruction.opcode == 7'b0110011;
            // instruction.funct3 inside {3'b000,3'b001,3'b010,3'b011,3'b100,3'b101,3'b110,3'b111};
            instruction.funct7 dist {
                7'b0000000 := 8, 
                7'b0100000 := 2,
                7'b0000001 := 6
            };
            instruction.rd  == inside {[1:31]};
            instruction.rs1 inside {[1:31]:/31};
            instruction.rs2 inside {[1:31]:/31};
            // instruction.rs2 == reg_id;
            write_en == 1;
            (instruction.funct7 == 7'b0000000) ->{
                instruction.funct3 inside {3'b000,3'b001,3'b010,3'b011,3'b100,3'b101,3'b110,3'b111};
            }
            (instruction.funct7 == 7'b0100000) ->{
                instruction.funct3 dist {3'b000,3'b101};
            }
            (instruction.funct7 == 7'b0000001) ->{
                instruction.funct3 dist {3'b000,3'b001,3'b100,3'b101,3'b110,3'b111};
            }
        }

        // I-type ALU
        (instruction.opcode == Instr_I_type) -> {
            // instruction.opcode == 7'b0010011;
            instruction.funct3 inside {[0:7]};
            instruction.rd  == write_id;
            instruction.rs1 inside {[1:31]};
            instruction[31:20] == imm_20bit[11:0];
            write_en == 1;
        }

        // Load
        (instruction.opcode == Instr_I_L_type) -> {
            // instruction.opcode == 7'b0000011;
            instruction.funct3 inside {3'b000,3'b001,3'b010};
            instruction.rd  == write_id;
            instruction.rs1 inside {[1:31]};
            instruction[31:20] == imm_20bit[11:0];
            write_en == 1;
        }

        // I-type JALR
        (instruction.opcode == Instr_I_J_type) -> {
            // instruction.opcode == 7'b1100111;
            instruction.funct3 == 3'b000;
            instruction.rd  == write_id;
            instruction.rs1 inside {[1:31]};
            instruction[31:20] == imm_20bit[11:0];
            write_en == 1;
        }

        // Store
        (instruction.opcode == Instr_S_type) -> {
            // instruction.opcode == 7'b0100011;
            instruction.funct3 inside {3'b000,3'b001,3'b010};
            instruction.rs1 inside {[1:31]};
            instruction.rs2 inside {[1:31]};
            instruction[31:25] == imm_20bit[6:0];
            instruction[11:7]  == imm_20bit[4:0];
            write_en == 0;
            write_id == 0;
        }

        // Branch
        (instruction.opcode == Instr_B_type) -> {
            // instruction.opcode == 7'b1100011;
            instruction.funct3 inside {
                3'b000,3'b001,3'b100,
                3'b101,3'b110,3'b111
            };
            instruction.rs1 inside {[1:31]};
            instruction.rs2 inside {[1:31]};
            instruction[31]    == imm_20bit[12];
            instruction[30:25] == imm_20bit[5:0];
            instruction[11:8]  == imm_20bit[3:0];
            instruction[7]     == imm_20bit[11];
            write_en == 0;
            write_id == 0;
        }

        // U-type
        (instruction.opcode == Instr_U_type1 || instruction.opcode == Instr_U_type2) -> {
            // instruction.opcode dist {7'b0110111:=5,7'b0010111:=5};
            instruction.rd == write_id;
            instruction[31:12] == imm_20bit;
            write_en == 1;
        }

        // J-type
        (instruction.opcode == Instr_J_type) -> {
            // instruction.opcode == 7'b1101111;
            instruction.rd == write_id;
            instruction[31]    == imm_20bit[19];
            instruction[30:21] == imm_20bit[9:0];
            instruction[20]    == imm_20bit[10];
            instruction[19:12] == imm_20bit[18:11];
            write_en == 1;
        }
    }

    function new(string name = "id_seq_item");
        super.new(name);
    endfunction
endclass

`endif
