`ifndef CPU_MONITOR_SVH
`define CPU_MONITOR_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

class cpu_monitor extends uvm_monitor;
    
    `uvm_component_utils(cpu_monitor)
    
    cpu_config m_config;
    uvm_analysis_port #(cpu_seq_item) analysis_port;
    
    // 统计信息
    int instr_count;
    int branch_count;
    int load_count;
    int store_count;
    int alu_count;
    
    function new(string name = "cpu_monitor", uvm_component parent = null);
        super.new(name, parent);
        analysis_port = new("analysis_port", this);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        if (!uvm_config_db#(cpu_config)::get(this, "", "cpu_config", m_config)) begin
            `uvm_fatal(get_name(), "Cannot get cpu_config!")
        end
        
        instr_count = 0;
        branch_count = 0;
        load_count = 0;
        store_count = 0;
        alu_count = 0;
        
        `uvm_info(get_name(), "CPU monitor built", UVM_MEDIUM)
    endfunction
    
    virtual task run_phase(uvm_phase phase);
        cpu_seq_item item;
        logic [31:0] prev_pc = 32'hFFFFFFFF;
        
        `uvm_info(get_name(), "CPU monitor starting", UVM_LOW)
        
        forever begin
            wait(m_config.m_vif.rstn);
            
            while(m_config.m_vif.rstn) begin
                @(m_config.m_vif.monitor_cb);
                
                item = cpu_seq_item::type_id::create("item");
                item.timestamp = $time;
                
                // 采样PC和指令
                item.pc = m_config.m_vif.monitor_cb.debug_pc;
                item.instruction = m_config.m_vif.monitor_cb.debug_instruction;
                
                // 检测有效指令执行
                if (item.pc != prev_pc && 
                    !m_config.m_vif.monitor_cb.debug_stall && 
                    !m_config.m_vif.monitor_cb.debug_flush &&
                    item.pc != 0) begin
                    
                    // 解码指令
                    item.decode_instruction();
                    
                    instr_count++;
                    
                    // 采样寄存器数据
                    if (item.rs1 != 0) 
                        item.rs1_data = m_config.m_vif.monitor_cb.debug_reg_file[item.rs1];
                    if (item.rs2 != 0) 
                        item.rs2_data = m_config.m_vif.monitor_cb.debug_reg_file[item.rs2];
                    
                    // 采样内存访问
                    if (m_config.m_vif.monitor_cb.dmem_we) begin
                        item.mem_access = 1;
                        item.mem_write = 1;
                        item.mem_addr = m_config.m_vif.monitor_cb.dmem_addr;
                        item.mem_data = m_config.m_vif.monitor_cb.dmem_wdata;
                        item.mem_be = m_config.m_vif.monitor_cb.dmem_be;
                        store_count++;
                    end else if (item.opcode == OP_LOAD) begin
                        item.mem_access = 1;
                        item.mem_write = 0;
                        item.mem_addr = m_config.m_vif.monitor_cb.dmem_addr;
                        item.mem_data = m_config.m_vif.monitor_cb.dmem_rdata;
                        load_count++;
                    end
                    
                    // 采样分支信息
                    if (m_config.m_vif.monitor_cb.debug_is_bj) begin
                        item.is_branch = 1;
                        item.branch_taken = (item.pc != prev_pc + 4);
                        branch_count++;
                    end
                    
                    // 统计ALU指令
                    if (item.opcode == OP_REG || item.opcode == OP_IMM) begin
                        alu_count++;
                    end
                    
                    if (m_config.verbose_monitor) begin
                        `uvm_info(get_name(), 
                                 $sformatf("[%0t] PC=0x%08h, %s, #%0d", 
                                          $time, item.pc, item.get_instruction_name(), 
                                          instr_count), 
                                 UVM_MEDIUM)
                    end
                    
                    // 发送到分析端口
                    analysis_port.write(item);
                    
                    prev_pc = item.pc;
                end
            end
            
            `uvm_info(get_name(), "Reset detected", UVM_HIGH)
            prev_pc = 32'hFFFFFFFF;
        end
    endtask
    
    virtual function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        
        `uvm_info(get_name(), "===========================================", UVM_NONE)
        `uvm_info(get_name(), "       CPU MONITOR STATISTICS", UVM_NONE)
        `uvm_info(get_name(), "===========================================", UVM_NONE)
        `uvm_info(get_name(), $sformatf("Total Instructions: %0d", instr_count), UVM_NONE)
        `uvm_info(get_name(), $sformatf("  ALU Instructions: %0d", alu_count), UVM_NONE)
        `uvm_info(get_name(), $sformatf("  Branches:         %0d", branch_count), UVM_NONE)
        `uvm_info(get_name(), $sformatf("  Loads:            %0d", load_count), UVM_NONE)
        `uvm_info(get_name(), $sformatf("  Stores:           %0d", store_count), UVM_NONE)
        `uvm_info(get_name(), $sformatf("Total Cycles:       %0d", m_config.m_vif.cycle_count), UVM_NONE)
        if (instr_count > 0) begin
            real cpi = real'(m_config.m_vif.cycle_count) / real'(instr_count);
            `uvm_info(get_name(), $sformatf("CPI:                %.2f", cpi), UVM_NONE)
        end
        `uvm_info(get_name(), "===========================================", UVM_NONE)
    endfunction
    
endclass : cpu_monitor

`endif