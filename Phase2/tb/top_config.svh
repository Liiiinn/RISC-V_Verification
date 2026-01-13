`ifndef TOP_CONFIG_SVH
`define TOP_CONFIG_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"

class top_config extends uvm_object;
    
    `uvm_object_utils(top_config)
    
    // ===== 复用Phase1的配置 =====
    clk_config m_clk_config;
    rstn_config m_rstn_config;
    
    // ===== Phase2新增的配置 =====
    cpu_config m_cpu_config;
    mem_config m_imem_config;  // 指令存储器配置
    mem_config m_dmem_config;  // 数据存储器配置
    
    // 测试相关配置
    int num_instructions;      // 执行的指令数量
    bit enable_coverage;       // 是否启用覆盖率收集
    bit enable_scoreboard;     // 是否启用记分板
    
    function new(string name = "top_config");
        super.new(name);
        
        // 创建配置对象
        m_clk_config = clk_config::type_id::create("m_clk_config");
        m_rstn_config = rstn_config::type_id::create("m_rstn_config");
        m_cpu_config = cpu_config::type_id::create("m_cpu_config");
        m_imem_config = mem_config::type_id::create("m_imem_config");
        m_dmem_config = mem_config::type_id::create("m_dmem_config");
        
        // ===== Clock配置 =====
        m_clk_config.clk_period = 10;  // 10ns = 100MHz
        m_clk_config.is_active = UVM_ACTIVE;
        
        // ===== Reset配置 =====
        m_rstn_config.is_active = UVM_ACTIVE;
        m_rstn_config.has_monitor = UVM_ACTIVE;
        
        // ===== CPU Monitor配置（被动监视）=====
        m_cpu_config.is_active = UVM_PASSIVE;
        m_cpu_config.has_monitor = UVM_ACTIVE;
        
        // ===== 内存配置（主动驱动）=====
        m_imem_config.is_active = UVM_ACTIVE;
        m_imem_config.has_monitor = UVM_ACTIVE;
        m_imem_config.mem_type = "IMEM";
        
        m_dmem_config.is_active = UVM_ACTIVE;
        m_dmem_config.has_monitor = UVM_ACTIVE;
        m_dmem_config.mem_type = "DMEM";
        
        // ===== 测试配置 =====
        num_instructions = 100;
        enable_coverage = 1;
        enable_scoreboard = 1;
    endfunction
    
endclass : top_config

`endif