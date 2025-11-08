// decode_item.sv - UVM sequence item for decode stage testing
`ifndef DECODE_ITEM_SV
`define DECODE_ITEM_SV

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

class decode_item extends uvm_sequence_item;
    // Input signals
    rand instruction_type instruction;
    rand logic [31:0] pc;
    rand logic write_en;
    rand logic [4:0] write_id;
    rand logic [31:0] write_data;
    rand branch_predict_type branch_in;
    
    // Output signals (will be captured by monitor)
    branch_predict_type branch_out;
    logic [4:0] reg_rd_id;
    logic [31:0] pc_out;
    logic [31:0] read_data1;
    logic [31:0] read_data2;
    logic [31:0] immediate_data;
    control_type control_signals;
    logic [31:0] debug_reg[0:REGISTER_FILE_SIZE-1];
    
    // Constraints
    constraint valid_instruction {
        // Valid RISC-V opcodes
        instruction.opcode inside {
            7'b0110011, // R-type
            7'b0010011, // I-type
            7'b0000011, // Load
            7'b0100011, // Store
            7'b1100011, // Branch
            7'b1101111, // JAL
            7'b1100111, // JALR
            7'b0110111, // LUI
            7'b0010111  // AUIPC
        };
        
        // Valid register addresses
        instruction.rs1 inside {[0:31]};
        instruction.rs2 inside {[0:31]};
        instruction.rd inside {[0:31]};
        write_id inside {[0:31]};
    }
    
    constraint valid_funct3 {
        // Valid funct3 values based on opcode
        if (instruction.opcode == 7'b0110011 || instruction.opcode == 7'b0010011) {
            instruction.funct3 inside {3'b000, 3'b001, 3'b010, 3'b011, 3'b100, 3'b101, 3'b110, 3'b111};
        }
    }
    
    // UVM macros
    `uvm_object_utils_begin(decode_item)
        `uvm_field_int(instruction, UVM_ALL_ON)
        `uvm_field_int(pc, UVM_ALL_ON)
        `uvm_field_int(write_en, UVM_ALL_ON)
        `uvm_field_int(write_id, UVM_ALL_ON)
        `uvm_field_int(write_data, UVM_ALL_ON)
        `uvm_field_int(branch_in, UVM_ALL_ON)
        `uvm_field_int(branch_out, UVM_ALL_ON)
        `uvm_field_int(reg_rd_id, UVM_ALL_ON)
        `uvm_field_int(pc_out, UVM_ALL_ON)
        `uvm_field_int(read_data1, UVM_ALL_ON)
        `uvm_field_int(read_data2, UVM_ALL_ON)
        `uvm_field_int(immediate_data, UVM_ALL_ON)
        `uvm_field_int(control_signals, UVM_ALL_ON)
    `uvm_object_utils_end
    
    function new(string name = "decode_item");
        super.new(name);
    endfunction
    
endclass

`endif
