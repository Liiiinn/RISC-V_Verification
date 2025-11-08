// decode_sequence.sv - UVM sequences for decode stage testing
`ifndef DECODE_SEQUENCE_SV
`define DECODE_SEQUENCE_SV

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

// Base sequence
class decode_base_sequence extends uvm_sequence #(decode_item);
    
    `uvm_object_utils(decode_base_sequence)
    
    function new(string name = "decode_base_sequence");
        super.new(name);
    endfunction
    
endclass

// Random sequence - generates random instructions
class decode_random_sequence extends decode_base_sequence;
    
    `uvm_object_utils(decode_random_sequence)
    rand instruction_type instruction;
    rand int unsigned write_en;
    randc logic [31:0] write_data;
    rand logic branch_in;
    rand logic [31:0] pc;
    randc logic [4:0] reg_id;
    int unsigned num_transactions = 100;
    function new(string name = "decode_random_sequence");
        super.new(name);
    endfunction
    constraint write_en_c {
        write_en dist{
            0 /= 3,
            1 /= 1
        }
    }
    constraint branch_in_c{
        branch_in dist{
            0 /= 3,
            1 /= 1
        }
    }

    virtual task body();
        decode_item req;
        //? repeat or not?
        repeat (num_transactions) begin
            req = decode_item::type_id::create("req");
            
            start_item(req);
            if (!req.randomize() with{
                req.pc == local::pc;
                req.instruction == local::instruction;
                req.write_en == local::write_en;
                req.write_data == local::write_data;
                req.branch_in == local::branch_in;
            }) `uvm_fatal(get_name(), "Randomization failed");
            finish_item(req);
          //  get_response(rsp, req.get_transaction_id());

            #100;
        end
    endtask
    
endclass



`endif
