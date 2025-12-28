// decode_item.sv - UVM sequence item for decode stage testing
`ifndef ID_SEQ_ITEM_SVH
`define ID_SEQ_ITEM_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;
typedef enum logic [2:0] {
    Instr_R_type = 3'b000,
    Instr_I_type = 3'b001,
    Instr_I_L_type = 3'b010,
    Instr_S_type = 3'b011,
    Instr_B_type = 3'b100,
    Instr_U_type = 3'b101,
    Instr_J_type = 3'b110,
    Instr_I_J_type = 3'b111
} instr_type;

class id_seq_item extends uvm_sequence_item; 
    // Output signals (will be captured by monitor)
    // branch_predict_type branch_out;
    // logic [4:0] reg_rd_id;
    // logic [31:0] pc_out;
    // logic [31:0] read_data1;
    // logic [31:0] read_data2;
    // logic [31:0] immediate_data;
    // control_type control_signals;
    // logic [31:0] debug_reg[0:REGISTER_FILE_SIZE-1];    // Input signals (will be driven by driver)
    rand instruction_type instruction;
    rand int unsigned write_en;
    rand logic [4:0] write_id;
    randc logic [31:0] write_data;
    rand branch_predict_type branch_in;
    rand logic [31:0] pc;
    randc logic [4:0] reg_id;
    randc logic [2:0] funct3;
    randc logic [6:0] funct7;
    randc logic [19:0] imm_20bit;
    randc instr_type my_instr;

    constraint instr_type_distribution {
        instruction dist {
            Instr_R_type   := 25,
            Instr_I_type   := 25,
            Instr_S_type   := 15,
            Instr_B_type   := 15,
            Instr_U_type   := 10,
            Instr_J_type   := 10
        };
    }
    constraint reg_id_constraint {
        reg_id inside {[1:31]};
    }

   constraint branch_constraint {
        branch_in dist {1'b0 := 50, 1'b1 := 50};
        branch_in.current_GHSR == 0;
        branch_in.branch_btb_hit == 0;
        branch_in.branch_btb_addr == 0;
    }
   constraint reg_id_constraint {
    reg_id inside {[1:31]};
  }
   constraint instruction_constraints{
        //Instr_R_type instruction constraints
        (my_instr == Instr_R_type)-> {
            instruction.opcode == 7'b0110011;
            instruction.funct3 == funct3;
            instruction.funct7 inside {7'b0000000, 7'b0100000};
            instruction.rd == reg_id;
            instruction.rs1 == reg_id;
            instruction.rs2 == reg_id;
            (instruction.funct3 == 3'b001 || instruction.funct3 == 3'b101)-> {
                instruction.funct7 inside {7'b0000000, 7'b0100000};  
            }
            (!(instruction.funct3 == 3'b001 || instruction.funct3 == 3'b101))->{
                instruction.funct7 == 7'b0000000;
            }
        }
        //Instr_I_type instruction constraints
        (my_instr == Instr_I_type)-> {
            instruction.opcode == 7'b0010011;
            instruction.funct3 == funct3;
            instruction.rd == reg_id;
            instruction.rs1 == reg_id;
            if(instruction.funct3 == 3'b101) {
                instruction.funct7 inside {7'b0000000, 7'b0100000};
            }
            else if(instruction.funct3 == 3'b001) instruction.funct7 == 7'b0000000;
            else instruction.funct7 == funct7;
        }
        //L type (I_type instr but with different opcode)
        (my_instr == Instr_I_L_type)-> {
            instruction.opcode == 7'b0000011;
            instruction.funct3 inside {3'b000,3'b001,3'b010};// LB,LH,LW
            instruction.rd == reg_id;
            instruction.rs1 == reg_id;
            instruction[31:20] == imm_20bit[11:0];
        }
        // Instr_I_J_type (JALR)
        (my_instr == Instr_I_J_type)-> {
            instruction.opcode == 7'b1100111;
            instruction.funct3 == 3'b000; // JALR
            instruction.rd == reg_id;
            instruction.rs1 == reg_id;
            instruction[31:20] == imm_20bit[11:0];
        }
        //Instr_S_type instruction constraints
        (my_instr == Instr_S_type)-> {
            instruction.opcode == 7'b0100011;
            instruction.funct3 inside {3'b000,3'b001,3'b010};// SB,SH,SW
            instruction.rs1 == reg_id;
            instruction.rs2 == reg_id;
            instruction[31:25] == imm_20bit[6:0];
            instruction[11:7] == imm_20bit[4:0];
        }
        //Instr_B_type instruction constraints
        (my_instr == Instr_B_type)-> {
            instruction.opcode == 7'b1100011;
            instruction.funct3 inside {3'b000,3'b001,3'b100,3'b101,3'b110,3'b111};// BEQ,BNE,BLT,BGE,BLTU,BGEU
            instruction.rs1 == reg_id;
            instruction.rs2 == reg_id;
            instruction[31] inside {1'b0,1'b1};        // imm[12]
            instruction[30:25] == imm_20bit[5:0]; // imm[10:5]
            instruction[11:8] == imm_20bit[3:0]; // imm[4:1]
            instruction[7] inside {1'b0,1'b1};  // imm[11]
        }
        //Instr_U_type instruction constraints
        (my_instr == Instr_U_type)-> {
            instruction.opcode inside {7'b0110111,7'b0010111};// LUI,AUIPC
            instruction.rd == reg_id;
            instruction[31:12] == imm_20bit;
        }
        (my_instr == Instr_J_type)-> {
            instruction.opcode == 7'b1101111;// JAL
            instruction.rd == reg_id;
            instruction[31] inside {1'b0,1'b1};        // imm[20]
            instruction[30:21] == imm_20bit[9:0]; // imm[10:1]
            instruction[20] inside {1'b0,1'b1};        // imm[11]
            instruction[19:12] == imm_20bit[7:0]; // imm[19:12]

        }
    }

    constraint pc_constraint {
        pc[1:0] == 2'b00;
        pc inside {[32'h0000_0000:32'h0000_FFFC]};
    }

    constraint write_id_constraint {
        write_id inside {[0:31]};
    }


    //task 18: complete UVM macros :instruction, pc, write_en, write_id, write_data,
    // branch_in, branch_out, reg_rd_id, pc_out, read_data1, read_data2, immediate_data, control_signals
        `uvm_object_utils_begin(id_seq_item)
        `uvm_field_int(instruction, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(pc, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(write_en, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(write_id, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(write_data, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(branch_in, UVM_ALL_ON|UVM_DEC)
        // `uvm_field_int(branch_out, UVM_ALL_ON|UVM_DEC)
       // `uvm_field_int(reg_rd_id, UVM_ALL_ON|UVM_DEC)
        // `uvm_field_int(pc_out, UVM_ALL_ON|UVM_DEC)
       // `uvm_field_int(read_data1, UVM_ALL_ON|UVM_DEC)
       // `uvm_field_int(read_data2, UVM_ALL_ON|UVM_DEC)
       // `uvm_field_int(immediate_data, UVM_ALL_ON|UVM_DEC)
        // `uvm_field_int(control_signals, UVM_ALL_ON|UVM_DEC)
        // `uvm_field_array_int(debug_reg, UVM_ALL_ON|UVM_DEC)
        `uvm_object_utils_end
    
    function new(string name = "decode_item");
        super.new(name);
    endfunction

    
endclass : id_seq_item

`endif
