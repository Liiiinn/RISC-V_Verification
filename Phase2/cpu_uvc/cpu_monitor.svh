`ifndef CPU_MONITOR_SVH
`define CPU_MONITOR_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"

class cpu_monitor extends uvm_monitor;
    `uvm_component_utils(cpu_monitor)
    
    // ===== 配置和接口 =====
    cpu_config m_config;
    virtual cpu_if vif;
    
    // ===== 分析端口（唯一输出）=====
    uvm_analysis_port #(cpu_seq_item) analysis_port;
    
    // ===== 统计信息 =====
    longint transaction_count;
    longint stall_cycles;        // 
    
    function new(string name = "cpu_monitor", uvm_component parent = null);
        super.new(name, parent);
        transaction_count = 0;
        stall_cycles = 0;
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        if (!uvm_config_db#(cpu_config)::get(this, "", "cpu_config", m_config)) begin
            `uvm_fatal(get_name(), "Cannot get cpu_config!")
        end
        
        if (m_config.vif == null) begin
            `uvm_fatal(get_name(), "Virtual interface in config is NULL!")
        end
        
        vif = m_config.vif;
        analysis_port = new("analysis_port", this);
        
        `uvm_info(get_name(), "Monitor build phase completed", UVM_HIGH)
    endfunction
    
    // ========================================================================
    // Run Phase - 监控DUT执行（唯一采集点）
    // ========================================================================
    virtual task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        // 等待复位完成
        @(posedge vif.rstn);
        `uvm_info(get_name(), "Monitor started, waiting for instructions...", UVM_MEDIUM)
        
        fork
            // 主监控循环
            monitor_execution();
            
            // 超时监控
            timeout_monitor();
        join_any
        disable fork;
        
        phase.drop_objection(this);
    endtask
    
    // ========================================================================
    // 监控DUT执行（核心功能）
    // ========================================================================
    virtual task monitor_execution();
        cpu_seq_item item;
        logic [31:0] prev_pc;
        logic [31:0] prev_instr;
        
        prev_pc = 32'hFFFFFFFF;  // 初始化为无效值
        prev_instr = 32'h0;
        
        forever begin
            @(posedge vif.clk);
            
            //  统计流水线停顿
            if (!vif.debug_retired) begin
                stall_cycles++;
            end
            
            // 检测指令提交
            if (vif.debug_retired && !vif.debug_flush) begin
                
                // 避免重复采集
                if (vif.debug_pc != prev_pc || vif.debug_instruction != prev_instr) begin
                    
                    // 创建transaction item
                    item = cpu_seq_item::type_id::create("item");
                    
                    //  采集基本信息
                    item.pc = vif.debug_pc;
                    item.instruction = vif.debug_instruction;
                    item.cycle = vif.cycle_count;
                    
                    // 寄存器写入
                    item.rd_we = vif.debug_rd_we;
                    item.rd_addr = vif.debug_rd_addr;
                    item.rd_data = vif.debug_rd_data;
                    
                    // 内存访问
                    item.mem_read = vif.debug_mem_read;
                    item.mem_write = vif.debug_mem_write;
                    item.mem_addr = vif.debug_mem_addr;
                    item.mem_wdata = vif.debug_mem_wdata;
                    item.mem_rdata = vif.debug_mem_rdata;
                    
                    // 分支信息
                    item.is_branch = vif.debug_is_branch;
                    item.branch_taken = vif.debug_branch_taken;
                    item.branch_target = vif.debug_branch_target;
                    
                    // ：PC跳跃检测
                    if (transaction_count > 0 && prev_pc != 32'hFFFFFFFF) begin
                        if ((vif.debug_pc != prev_pc + 4) && 
                            !item.is_branch && 
                            !item.exception_occurred) begin
                            `uvm_warning(get_name(), 
                                $sformatf("Unexpected PC jump: 0x%08h -> 0x%08h", 
                                         prev_pc, vif.debug_pc))
                        end
                    end
                    
                    //  发送到所有订阅者
                    analysis_port.write(item);
                    
                    transaction_count++;
                    prev_pc = vif.debug_pc;
                    prev_instr = vif.debug_instruction;
                    
                    //  改进：定期打印进度
                    if (m_config.verbose_logging) begin
                        if (transaction_count % 1000 == 0) begin
                            real cpi = real'(vif.cycle_count) / real'(transaction_count);
                            `uvm_info(get_name(), 
                                $sformatf("Progress: %0d instructions, %0d cycles, CPI=%.2f", 
                                         transaction_count, vif.cycle_count, cpi), UVM_MEDIUM)
                        end
                    end
                end
            end
            
            // 程序结束检测
            if (vif.program_finished) begin
                `uvm_info(get_name(), 
                    $sformatf("✓ Program finished at cycle %0d, captured %0d transactions", 
                             vif.cycle_count, transaction_count), UVM_LOW)
                break;
            end
        end
    endtask
    
    // ========================================================================
    // 超时监控
    // ========================================================================
    virtual task timeout_monitor();
        if (m_config.enable_timeout) begin
            repeat (m_config.max_cycles) @(posedge vif.clk);
            `uvm_error(get_name(), 
                $sformatf("Monitor timeout after %0d cycles! Captured %0d transactions.", 
                         m_config.max_cycles, transaction_count))
        end
    endtask
    
    // ========================================================================
    // Report Phase
    // ========================================================================
    virtual function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        
        `uvm_info(get_name(), "==========================================", UVM_LOW)
        `uvm_info(get_name(), "    Monitor Statistics", UVM_LOW)
        `uvm_info(get_name(), "==========================================", UVM_LOW)
        `uvm_info(get_name(), $sformatf("Transactions captured: %0d", transaction_count), UVM_LOW)
        `uvm_info(get_name(), $sformatf("Total cycles:          %0d", vif.cycle_count), UVM_LOW)
        `uvm_info(get_name(), $sformatf("Stall cycles:          %0d", stall_cycles), UVM_LOW)
        
        if (transaction_count > 0 && vif.cycle_count > 0) begin
            real cpi = real'(vif.cycle_count) / real'(transaction_count);
            real ipc = real'(transaction_count) / real'(vif.cycle_count);
            real stall_rate = 100.0 * real'(stall_cycles) / real'(vif.cycle_count);
            
            `uvm_info(get_name(), $sformatf("CPI:                   %.3f", cpi), UVM_LOW)
            `uvm_info(get_name(), $sformatf("IPC:                   %.3f", ipc), UVM_LOW)
            `uvm_info(get_name(), $sformatf("Stall rate:            %.1f%%", stall_rate), UVM_LOW)
        end
        
        `uvm_info(get_name(), "==========================================", UVM_LOW)
    endfunction
    
endclass

`endif