// id_seq.svh - UVM sequences for decode stage testing
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

// Random decode sequence
class id_seq_random_sequence extends id_seq_base_sequence;
    `uvm_object_utils(id_seq_random_sequence)

    int unsigned num_transactions = 100;

    function new(string name = "id_seq_random_sequence");
        super.new(name);
    endfunction

    virtual task body();
        id_seq_item req;

        repeat (num_transactions) begin
            req = id_seq_item::type_id::create("req");
            start_item(req);

            if (!req.randomize()) begin
                `uvm_fatal(get_name(), "id_seq_item randomization failed")
            end

            finish_item(req);
        end
    endtask
endclass

`endif
