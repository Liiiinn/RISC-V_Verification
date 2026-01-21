`ifndef TOP_ENV_SVH
`define TOP_ENV_SVH

class top_env extends uvm_env;
    `uvm_component_utils(top_env)
    
    // ===== 配置 =====
    cpu_config m_config;
    
    // ===== UVC组件 =====
    cpu_agent m_agent;
    cpu_coverage m_coverage;
    
    function new(string name = "top_env", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // 获取配置
        if (!uvm_config_db#(cpu_config)::get(this, "", "cpu_config", m_config)) begin
            `uvm_fatal(get_name(), "Cannot get cpu_config from config_db!")
        end

        if (!m_config.check_config()) begin
        `uvm_fatal(get_name(), "CPU config validation failed!")
        end
        
        // 创建agent
        m_agent = cpu_agent::type_id::create("m_agent", this);
        if (m_agent == null) begin
        `uvm_fatal(get_name(), "Failed to create cpu_agent!")
        end
        
        // 创建coverage（如果启用）
        if (m_config.enable_coverage) begin
            m_coverage = cpu_coverage::type_id::create("m_coverage", this);
            if (m_coverage == null) begin
                `uvm_warning(get_name(), "Failed to create cpu_coverage")
            end else begin
                `uvm_info(get_name(), "Coverage collection enabled", UVM_MEDIUM)
            end
        end
        
        // 传递配置给子组件
        uvm_config_db#(cpu_config)::set(this, "*", "cpu_config", m_config);
        
        `uvm_info(get_name(), "CPU verification environment built", UVM_MEDIUM)
    endfunction
    
    virtual function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        
        // 连接 Monitor → Coverage
        if (m_coverage != null) begin
            m_agent.m_monitor.analysis_port.connect(m_coverage.analysis_export);
            `uvm_info(get_name(), "Connected monitor analysis_port to coverage", UVM_MEDIUM)
        end
    endfunction
    
    virtual function void end_of_elaboration_phase(uvm_phase phase);
        super.end_of_elaboration_phase(phase);
        
        `uvm_info(get_name(), "=== CPU Environment Configuration ===", UVM_LOW)
        `uvm_info(get_name(), $sformatf("Test ELF:        %s", m_config.test_elf_path), UVM_LOW)
        `uvm_info(get_name(), $sformatf("Trace Log:       %s", m_config.trace_log_path), UVM_LOW)
        `uvm_info(get_name(), $sformatf("Spike Log:       %s", m_config.spike_log_path), UVM_LOW)
        `uvm_info(get_name(), $sformatf("Trace Enabled:   %0d", m_config.enable_trace_logging), UVM_LOW)
        `uvm_info(get_name(), $sformatf("Coverage:        %0d", m_config.enable_coverage), UVM_LOW)
        `uvm_info(get_name(), $sformatf("Max Cycles:      %0d", m_config.max_cycles), UVM_LOW)
    endfunction
    
endclass

`endif
