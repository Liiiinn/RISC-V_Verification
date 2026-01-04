// id_seq_item.svh - sequence item for decode stage
`ifndef ID_SEQ_ITEM_SVH
`define ID_SEQ_ITEM_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

typedef enum logic [2:0] {
    Instr_R_type   = 3'b000,
    Instr_I_type   = 3'b001,
    Instr_I_L_type = 3'b010,
    Instr_S_type   = 3'b011,
    Instr_B_type   = 3'b100,
    Instr_U_type   = 3'b101,
    Instr_J_type   = 3'b110,
    Instr_I_J_type = 3'b111
} instr_type;

class id_seq_item extends uvm_sequence_item;
    `uvm_object_utils(id_seq_item)

    // ===== DUT inputs =====
    rand instruction_type    instruction;
    rand instr_type          my_instr;
    rand logic [31:0]        pc;
    rand branch_predict_type branch_in;
    rand logic               write_en;
    rand logic [4:0]         write_id;
    rand logic [31:0]        write_data;

    rand logic [4:0]  reg_id;
    rand logic [19:0] imm_20bit;

    // ===== Global constraints =====

    constraint instr_type_dist {
        my_instr dist {
            Instr_R_type   := 25,
            Instr_I_type   := 25,
            Instr_I_L_type := 10,
            Instr_S_type   := 15,
            Instr_B_type   := 15,
            Instr_U_type   := 5,
            Instr_J_type   := 5
        };
    }

    constraint pc_c {
        pc[1:0] == 2'b00;
        pc inside {[32'h0000_0000:32'h0000_FFFC]};
    }

    constraint writeback_c {
        write_en dist {0 := 3, 1 := 1};
        write_id inside {[1:31]};
    }

    constraint branch_in_c {
        branch_in.branch_taken_predict dist {0 := 3, 1 := 1};
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
        (my_instr == Instr_R_type) -> {
            instruction.opcode == 7'b0110011;
            instruction.funct3 inside {[0:7]};
            instruction.funct7 inside {7'b0000000, 7'b0100000, 7'b0000001};
            instruction.rd  == write_id;
            instruction.rs1 == reg_id;
            instruction.rs2 == reg_id;
            write_en == 1;
        }

        // I-type ALU
        (my_instr == Instr_I_type) -> {
            instruction.opcode == 7'b0010011;
            instruction.funct3 inside {[0:7]};
            instruction.rd  == write_id;
            instruction.rs1 == reg_id;
            instruction[31:20] == imm_20bit[11:0];
            write_en == 1;
        }

        // Load
        (my_instr == Instr_I_L_type) -> {
            instruction.opcode == 7'b0000011;
            instruction.funct3 inside {3'b000,3'b001,3'b010};
            instruction.rd  == write_id;
            instruction.rs1 == reg_id;
            instruction[31:20] == imm_20bit[11:0];
            write_en == 1;
        }

        // Store
        (my_instr == Instr_S_type) -> {
            instruction.opcode == 7'b0100011;
            instruction.funct3 inside {3'b000,3'b001,3'b010};
            instruction.rs1 == reg_id;
            instruction.rs2 == reg_id;
            instruction[31:25] == imm_20bit[6:0];
            instruction[11:7]  == imm_20bit[4:0];
            write_en == 0;
            write_id == 0;
        }

        // Branch
        (my_instr == Instr_B_type) -> {
            instruction.opcode == 7'b1100011;
            instruction.funct3 inside {
                3'b000,3'b001,3'b100,
                3'b101,3'b110,3'b111
            };
            instruction.rs1 == reg_id;
            instruction.rs2 == reg_id;
            instruction[31]    == imm_20bit[12];
            instruction[30:25] == imm_20bit[5:0];
            instruction[11:8]  == imm_20bit[3:0];
            instruction[7]     == imm_20bit[11];
            write_en == 0;
            write_id == 0;
        }

        // U-type
        (my_instr == Instr_U_type) -> {
            instruction.opcode inside {7'b0110111,7'b0010111};
            instruction.rd == write_id;
            instruction[31:12] == imm_20bit;
            write_en == 1;
        }

        // J-type
        (my_instr == Instr_J_type) -> {
            instruction.opcode == 7'b1101111;
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
