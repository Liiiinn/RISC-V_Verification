// decode_sequence.sv - UVM sequences for decode stage testing
`ifndef ID_SEQ_SVH
`define ID_SEQ_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

// Base sequence
class id_seq_base_sequence extends uvm_sequence #(id_seq_item);
    
    `uvm_object_utils(id_seq_base_sequence)

    function new(string name = "id_seq_base_sequence");
        super.new(name);
    endfunction
    
endclass

// Random sequence - generates random instructions
class id_seq_random_sequence extends id_seq_base_sequence;

    `uvm_object_utils(id_seq_random_sequence)
    rand instruction_type instruction;
    rand int unsigned write_en;
    randc logic [31:0] write_data;
    rand branch_predict_type branch_in;
    rand logic [31:0] pc;
    randc logic [4:0] reg_id;
    int unsigned num_transactions = 100;
    function new(string name = "id_seq_random_sequence");
        super.new(name);
    endfunction
    constraint write_en_c {
        write_en dist{
            0 :/ 3,
            1 :/ 1
        };
    }
    constraint branch_in_c{
        branch_in.branch_taken_predict dist{
            0 :/ 3,
            1 :/ 1
        };
        branch_in.current_GHSR == 0;
        branch_in.branch_btb_hit == 0;
        branch_in.branch_btb_addr == 0;
    }

    constraint instruction_c {
        instruction.rs1 inside {[0:31]};
        instruction.rs2 inside {[0:31]};
        instruction.rd inside {[0:31]};
        instruction.funct3 inside {[0:7]};
        instruction.funct7 inside {[0:127]};
        instruction.opcode inside {7'b0110011, 7'b0010011, 7'b0000011, 7'b1100111, 7'b0100011, 7'b1100011, 7'b0110111, 7'b0010111, 7'b1101111};
    }

    virtual task body();
        id_seq_item req;
        //? repeat or not?
        repeat (num_transactions) begin
             if (!this.randomize()) begin
              `uvm_fatal(get_name(), "Sequence randomization failed")
            end

            req = id_seq_item::type_id::create("req");
            start_item(req);
            req.pc = this.pc;
            req.instruction = this.instruction;
            req.write_en = this.write_en;
            req.write_data = this.write_data;
            req.branch_in = this.branch_in;

            finish_item(req);
            //  get_response(rsp, req.get_transaction_id());

            #100;
        end
    endtask
    
endclass



`endif
