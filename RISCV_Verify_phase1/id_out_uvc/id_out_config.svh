`ifndef ID_OUT_CONFIG_SVH
`define ID_OUT_CONFIG_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"

class id_out_config extends uvm_object;
    
    // config parameters
    bit has_monitor = 1;
    
    virtual id_out_vif m_vif;
    
    `uvm_object_utils_begin(id_out_config)
        `uvm_field_int(has_monitor, UVM_ALL_ON|UVM_DEC)
    `uvm_object_utils_end
    
    function new(string name = "id_out_config");
        super.new(name);
    endfunction
    
endclass : id_out_config

`endif