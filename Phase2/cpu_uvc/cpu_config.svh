`ifndef CPU_CONFIG_SVH
`define CPU_CONFIG_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"

class cpu_config extends uvm_object;
    
    `uvm_component_utils(cpu_config)
    
    virtual cpu_if m_vif;
    
    uvm_active_passive_enum is_active = UVM_PASSIVE;  // CPU monitor是被动的
    uvm_active_passive_enum has_monitor = UVM_ACTIVE;
    
    // 监控配置
    bit collect_coverage = 1;
    bit verbose_monitor = 0;  // 详细监控信息
    
    function new(string name = "cpu_config");
        super.new(name);
    endfunction
    
endclass : cpu_config

`endif