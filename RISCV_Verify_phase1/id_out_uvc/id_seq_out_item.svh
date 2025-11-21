//seq_item 就是一个transaction，像写id_seq_item 一样把id输出的信号都放进去，以便监控
//不用单独写个transaction了
// decode_item.sv - UVM sequence item for decode stage testing
`ifndef ID_SEQ_OUT_ITEM_SVH
`define ID_SEQ_OUT_ITEM_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

class id_seq_out_item extends uvm_sequence_item; 
   // Output signals (will be captured by monitor)
    branch_predict_type branch_out;
    logic [4:0] reg_rd_id;
    logic [31:0] pc_out;
    logic [31:0] read_data1;
    logic [31:0] read_data2;
    logic [31:0] immediate_data;
    control_type control_signals;
    logic [31:0] debug_reg[0:REGISTER_FILE_SIZE-1];    // Input signals (will be driven by driver)

    // branch_in, branch_out, reg_rd_id, pc_out, read_data1, read_data2, immediate_data, control_signals
        `uvm_object_utils_begin(id_seq_out_item)
        `uvm_field_int(branch_out, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(pc_out, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(read_data1, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(read_data2, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(reg_rd_id, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(immediate_data, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(control_signals, UVM_ALL_ON|UVM_DEC)
        `uvm_field_array_int(debug_reg, UVM_ALL_ON|UVM_DEC)
        `uvm_object_utils_end
    
    function new(string name = "decode_item");
        super.new(name);
    endfunction

    
endclass : id_seq_item

`endif
