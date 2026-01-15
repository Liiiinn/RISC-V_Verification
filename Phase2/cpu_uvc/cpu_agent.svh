`ifndef CPU_AGENT_SVH
`define CPU_AGENT_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"

class cpu_agent extends uvm_agent;
    
    `uvm_component_utils(cpu_agent)
    
    // ===== 配置对象 =====
    cpu_config m_config;
    
    // ===== UVM组件 =====
    cpu_driver m_driver;               // Driver用于加载ELF程序
    cpu_monitor m_monitor;             // Monitor用于采集执行trace
    cpu_logger m_logger;               // Logger用于记录trace到文件
    // 注意：不需要sequencer，因为只有一次性的ELF加载任务
    
    // ===== 分析端口（从monitor导出）=====
    uvm_analysis_port #(cpu_seq_item) analysis_port;
    
    // ===== 构造函数 =====
    function new(string name = "cpu_agent", uvm_component parent = null);
        super.new(name, parent);
    endfunction : new
    
    // ===== Build Phase =====
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        `uvm_info(get_name(), "Building CPU agent...", UVM_HIGH)
        
        // 获取配置
        if (!uvm_config_db#(cpu_config)::get(this, "", "cpu_config", m_config)) begin
            `uvm_fatal(get_name(), "Cannot get cpu_config from config_db!")
        end
        
        // 验证配置
        if (!m_config.check_config()) begin
            `uvm_fatal(get_name(), "CPU configuration check failed!")
        end
        
        // 检查虚拟接口
        if (m_config.vif == null) begin
            `uvm_fatal(get_name(), "Virtual interface in cpu_config is NULL!")
        end
        
        // 创建driver（用于加载ELF程序）
        if (m_config.is_active == UVM_ACTIVE && m_config.has_driver) begin
            m_driver = cpu_driver::type_id::create("m_driver", this);
            uvm_config_db#(cpu_config)::set(this, "m_driver", "cpu_config", m_config);
            `uvm_info(get_name(), "CPU driver created (for ELF loading)", UVM_MEDIUM)
        end
        
        // 创建monitor（用于trace采集）
        if (m_config.has_monitor && m_config.enable_trace_logging) begin
            m_monitor = cpu_monitor::type_id::create("m_monitor", this);
            uvm_config_db#(cpu_config)::set(this, "m_monitor", "cpu_config", m_config);
            `uvm_info(get_name(), "CPU monitor created (for trace collection)", UVM_MEDIUM)
        end else begin
            `uvm_warning(get_name(), "CPU monitor is disabled!")
        end
        
        // 创建logger（用于trace文件记录）
        if (m_config.enable_trace_logging && m_config.log_to_file) begin
            m_logger = cpu_logger::type_id::create("m_logger", this);
            uvm_config_db#(cpu_config)::set(this, "m_logger", "cpu_config", m_config);
            `uvm_info(get_name(), "CPU logger created (for trace logging)", UVM_MEDIUM)
        end
        
        // 创建分析端口
        analysis_port = new("analysis_port", this);
        
        `uvm_info(get_name(), "CPU agent built successfully (passive mode)", UVM_MEDIUM)
    endfunction : build_phase
    
    // ===== Connect Phase =====
    virtual function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        
        // 连接monitor的分析端口到agent的分析端口
        if (m_monitor != null) begin
            m_monitor.analysis_port.connect(analysis_port);
            `uvm_info(get_name(), "Monitor analysis port connected to agent analysis port", UVM_HIGH)
            
            // 连接monitor到logger（用于trace文件记录）
            if (m_logger != null) begin
                m_monitor.analysis_port.connect(m_logger.analysis_export);
                `uvm_info(get_name(), "Monitor connected to logger for trace recording", UVM_HIGH)
            end
        end
    endfunction : connect_phase
    
    // ===== End of Elaboration Phase =====
    virtual function void end_of_elaboration_phase(uvm_phase phase);
        super.end_of_elaboration_phase(phase);
        
        `uvm_info(get_name(), "========================================", UVM_LOW)
        `uvm_info(get_name(), "    CPU Agent Configuration", UVM_LOW)
        `uvm_info(get_name(), "========================================", UVM_LOW)
        `uvm_info(get_name(), $sformatf("Agent Mode:       %s", 
                 (m_config.is_active == UVM_ACTIVE) ? "ACTIVE" : "PASSIVE"), UVM_LOW)
        `uvm_info(get_name(), $sformatf("Has Driver:       %0d", 
                 (m_driver != null)), UVM_LOW)
        `uvm_info(get_name(), $sformatf("Has Monitor:      %0d", 
                 (m_monitor != null)), UVM_LOW)
        `uvm_info(get_name(), $sformatf("Has Logger:       %0d", 
                 (m_logger != null)), UVM_LOW)
        `uvm_info(get_name(), $sformatf("Trace Logging:    %0d", 
                 m_config.enable_trace_logging), UVM_LOW)
        `uvm_info(get_name(), $sformatf("Coverage:         %0d", 
                 m_config.enable_coverage), UVM_LOW)
        `uvm_info(get_name(), $sformatf("Batch Mode:       %0d (Test %0d/%0d)", 
                 m_config.batch_mode, m_config.test_index + 1, m_config.total_tests), UVM_LOW)
        `uvm_info(get_name(), "========================================", UVM_LOW)
    endfunction : end_of_elaboration_phase
    
    // ===== Run Phase =====
    virtual task run_phase(uvm_phase phase);
        super.run_phase(phase);
        
        `uvm_info(get_name(), "CPU agent is running", UVM_HIGH)
        `uvm_info(get_name(), "  - Driver: Loading ELF program to DUT", UVM_HIGH)
        `uvm_info(get_name(), "  - Monitor: Collecting execution trace", UVM_HIGH)
        `uvm_info(get_name(), "  - Logger: Recording trace to file", UVM_HIGH)
        
        // driver在run_phase中自动加载ELF
        // monitor在run_phase中自动采集trace
        // logger在run_phase中自动记录trace到文件
    endtask : run_phase
    
    // ===== Report Phase =====
    virtual function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        
        `uvm_info(get_name(), "========== CPU Agent Summary ==========", UVM_LOW)
        
        if (m_driver != null) begin
            `uvm_info(get_name(), "✓ ELF loading completed", UVM_LOW)
        end
        
        if (m_monitor != null) begin
            `uvm_info(get_name(), "✓ Trace collection completed", UVM_LOW)
        end
        
        if (m_logger != null) begin
            `uvm_info(get_name(), $sformatf("✓ Trace logged to: %s", m_config.trace_log_path), UVM_LOW)
        end
        
        `uvm_info(get_name(), "========================================", UVM_LOW)
    endfunction : report_phase
    
    // ===== 辅助函数：获取组件引用 =====
    function cpu_driver get_driver();
        return m_driver;
    endfunction : get_driver
    
    function cpu_monitor get_monitor();
        return m_monitor;
    endfunction : get_monitor
    
    function cpu_logger get_logger();
        return m_logger;
    endfunction : get_logger
    
    // ===== 辅助函数：检查agent状态 =====
    function bit is_active_agent();
        return (m_config.is_active == UVM_ACTIVE);
    endfunction : is_active_agent
    
    function bit has_driver();
        return (m_driver != null);
    endfunction : has_driver
    
    function bit has_monitor();
        return (m_monitor != null);
    endfunction : has_monitor
    
endclass : cpu_agent

`endif