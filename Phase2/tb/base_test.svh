`ifndef BASE_TEST_SVH
`define BASE_TEST_SVH

// ============================================================================
// 基础测试类
// ============================================================================

class base_test extends uvm_test;
    `uvm_component_utils(base_test)
    
    // ===== 验证环境 =====
    top_env m_env;
    cpu_config m_config;
    
    function new(string name = "base_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // 创建配置对象
        m_config = cpu_config::type_id::create("m_config");
        
        // 从命令行获取配置参数
        configure_from_cmdline();
        
        // 从config_db获取虚拟接口
        if (!uvm_config_db#(virtual cpu_if)::get(this, "", "cpu_vif", m_config.vif)) begin
            `uvm_fatal(get_name(), "Cannot get cpu_vif from config_db!")
        end
        
        // 验证vif不为null
        if (m_config.vif == null) begin
            `uvm_fatal(get_name(), "Virtual interface (vif) is NULL!")
        end
        
        // 创建环境
        m_env = top_env::type_id::create("m_env", this);
        if (m_env == null) begin
            `uvm_fatal(get_name(), "Failed to create top_env!")
        end
        
        // 传递配置到环境和所有子组件
        uvm_config_db#(cpu_config)::set(this, "*", "cpu_config", m_config);
        
        `uvm_info(get_name(), "========================================", UVM_LOW)
        `uvm_info(get_name(), $sformatf("Test: %s", get_name()), UVM_LOW)
        `uvm_info(get_name(), $sformatf("ELF:  %s", m_config.test_elf_path), UVM_LOW)
        `uvm_info(get_name(), "========================================", UVM_LOW)
    endfunction
    
    // 从命令行获取配置
    virtual function void configure_from_cmdline();
        string elf_path, trace_path, spike_path, mem_path;
        int max_cyc;
        
        // +MEM_FILE=<path> (direct .mem file loading)
        if ($value$plusargs("MEM_FILE=%s", mem_path)) begin
            m_config.test_elf_path = mem_path;
            `uvm_info(get_name(), $sformatf("Using MEM file: %s", mem_path), UVM_MEDIUM)
        end
        // +TEST_ELF=<path> (original ELF file support)
        else if ($value$plusargs("TEST_ELF=%s", elf_path)) begin
            m_config.test_elf_path = elf_path;
            `uvm_info(get_name(), $sformatf("Using ELF: %s", elf_path), UVM_MEDIUM)
        end else begin
            // 如果未指定，检查默认值
            if (m_config.test_elf_path == "") begin
                `uvm_warning(get_name(), "MEM_FILE or TEST_ELF not specified! Use +MEM_FILE=<path> or +TEST_ELF=<path>")
            end else begin
                `uvm_info(get_name(), $sformatf("Using default file: %s", m_config.test_elf_path), UVM_MEDIUM)
            end
        end
        
        // +TRACE_LOG=<path>
        if ($value$plusargs("TRACE_LOG=%s", trace_path)) begin
            m_config.trace_log_path = trace_path;
        end
        
        // +SPIKE_LOG=<path>
        if ($value$plusargs("SPIKE_LOG=%s", spike_path)) begin
            m_config.spike_log_path = spike_path;
        end
        
        // +MAX_CYCLES=<num>
        if ($value$plusargs("MAX_CYCLES=%d", max_cyc)) begin
            m_config.max_cycles = max_cyc;
            `uvm_info(get_name(), $sformatf("Max cycles: %0d", max_cyc), UVM_MEDIUM)
        end
        
        // +VERBOSE
        if ($test$plusargs("VERBOSE")) begin
            m_config.verbose_logging = 1'b1;
            `uvm_info(get_name(), "Verbose logging enabled", UVM_MEDIUM)
        end
    endfunction
    
    virtual function void end_of_elaboration_phase(uvm_phase phase);
        super.end_of_elaboration_phase(phase);
        
        // 打印拓扑结构
        if (m_config.verbose_logging) begin
            uvm_top.print_topology();
        end
    endfunction
    
    virtual task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        
        `uvm_info(get_name(), "========== Test Started ==========", UVM_LOW)
        
        // 等待程序完成
        wait_for_program_completion();
        
        // 额外等待一些周期确保所有日志写完
        repeat (100) @(posedge m_config.vif.clk);
        
        `uvm_info(get_name(), "========== Test Completed ==========", UVM_LOW)
        
        phase.drop_objection(this);
    endtask
    
    // 等待程序完成
    virtual task wait_for_program_completion();
        fork
            begin
                // 方式1: 等待program_finished信号
                @(posedge m_config.vif.program_finished);
                `uvm_info(get_name(), "Program finished detected", UVM_MEDIUM)
            end
            begin
                // 方式2: 超时保护
                if (m_config.enable_timeout) begin
                    repeat (m_config.max_cycles) @(posedge m_config.vif.clk);
                    `uvm_error(get_name(), $sformatf("Timeout after %0d cycles!", m_config.max_cycles))
                end else begin
                    wait(0);  // 永远等待
                end
            end
        join_any
        disable fork;
    endtask
    
    virtual function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        
        `uvm_info(get_name(), "=== Test Summary ===", UVM_LOW)
        `uvm_info(get_name(), $sformatf("Total Cycles: %0d", m_config.vif.cycle_count), UVM_LOW)
        `uvm_info(get_name(), $sformatf("Instructions: %0d", m_config.vif.instr_count), UVM_LOW)
        
        if (m_config.vif.instr_count > 0) begin
            real cpi;
            cpi = real'(m_config.vif.cycle_count) / real'(m_config.vif.instr_count);
            `uvm_info(get_name(), $sformatf("CPI:          %.2f", cpi), UVM_LOW)
        end
    endfunction
    
endclass

// ============================================================================
// Google riscv-dv专用测试
// ============================================================================

class cpu_riscv_dv_test extends base_test;
    `uvm_component_utils(cpu_riscv_dv_test)
    
    function new(string name = "cpu_riscv_dv_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // riscv-dv特定配置
        m_config.enable_trace_logging = 1'b1;
        m_config.log_register_changes = 1'b1;
        m_config.log_memory_accesses = 1'b1;
        m_config.verbose_logging = 1'b0;
        
        `uvm_info(get_name(), "Configured for Google riscv-dv", UVM_MEDIUM)
    endfunction
    
endclass

// ============================================================================
// 快速Smoke测试
// ============================================================================

class cpu_smoke_test extends base_test;
    `uvm_component_utils(cpu_smoke_test)
    
    function new(string name = "cpu_smoke_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // Smoke测试配置：快速验证基本功能
        m_config.max_cycles = 10000;  // 较短的超时
        m_config.enable_coverage = 1'b0;  // 不收集覆盖率
        m_config.verbose_logging = 1'b1;  // 详细日志
        
        `uvm_info(get_name(), "Configured for smoke test", UVM_MEDIUM)
    endfunction
    
endclass

// ============================================================================
// 调试测试（打印所有内部状态）
// ============================================================================

class cpu_debug_test extends base_test;
    `uvm_component_utils(cpu_debug_test)
    
    function new(string name = "cpu_debug_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        // 调试配置：记录所有细节
        m_config.verbose_logging = 1'b1;
        m_config.log_register_changes = 1'b1;
        m_config.log_memory_accesses = 1'b1;
        m_config.max_cycles = 100000;
        
        `uvm_info(get_name(), "Configured for debug mode", UVM_MEDIUM)
    endfunction
    
    virtual task run_phase(uvm_phase phase);
        fork
            super.run_phase(phase);
            
            // 打印每个周期的状态（调试模式）
            // NOTE: cpu_print_execution_state is in interface scope, not accessible here
            // Use logger component instead for runtime printing
            begin
                forever begin
                    @(posedge m_config.vif.clk);
                    // Monitor will log execution via logger component
                end
            end
        join_any
        disable fork;
    endtask
    
endclass

`endif
