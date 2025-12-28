//seq_item 就是一个transaction，像写id_seq_item 一样把id输出的信号都放进去，以便监控
//不用单独写个transaction了
// decode_item.sv - UVM sequence item for decode stage testing
`ifndef ID_OUT_SEQ_ITEM_SVH
`define ID_OUT_SEQ_ITEM_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

class id_out_seq_item extends uvm_sequence_item; 
    
    // ID阶段输出信号（只有输出，没有rand）
    // branch_predict_type branch_out;
    logic branch_out;
    logic [4:0] reg_rd_id;
    logic [31:0] pc_out;
    logic [31:0] read_data1;
    logic [31:0] read_data2;
    logic [31:0] immediate_data;
    control_type control_signals;
    logic [31:0] debug_reg[0:REGISTER_FILE_SIZE-1];
    
    // UVM宏
    `uvm_object_utils_begin(id_out_seq_item)
        `uvm_field_int(branch_out, UVM_ALL_ON|UVM_HEX)
        `uvm_field_int(reg_rd_id, UVM_ALL_ON|UVM_DEC)
        `uvm_field_int(pc_out, UVM_ALL_ON|UVM_HEX)
        `uvm_field_int(read_data1, UVM_ALL_ON|UVM_HEX)
        `uvm_field_int(read_data2, UVM_ALL_ON|UVM_HEX)
        `uvm_field_int(immediate_data, UVM_ALL_ON|UVM_HEX)
        `uvm_field_int(control_signals, UVM_ALL_ON|UVM_HEX)
        `uvm_field_sarray_int(debug_reg, UVM_ALL_ON|UVM_HEX)
    `uvm_object_utils_end
    
    function new(string name = "id_out_seq_item");
        super.new(name);
    endfunction
    
endclass : id_out_seq_item

`endif
