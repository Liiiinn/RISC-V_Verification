// cpu_config.svh - CPU UVC配置类

`ifndef CPU_CONFIG_SVH
`define CPU_CONFIG_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"

class cpu_config extends uvm_object;
    `uvm_object_utils(cpu_config)
    
    // ===== 虚拟接口 =====
    virtual cpu_if vif;
    
    // ===== 测试配置 =====
    string test_elf_path;              // ELF文件路径（从riscv-dv生成）
    string trace_log_path;             // DUT trace日志输出路径
    string spike_log_path;             // Spike参考日志路径（已由riscv-dv生成）
    string riscv_dv_output_dir;        // riscv-dv输出目录（用于批量测试）
    
    // ===== riscv-dv批量测试配置 =====
    int unsigned test_index;           // 当前测试编号（0-99）
    int unsigned total_tests;          // 总测试数量（默认1）
    bit batch_mode;                    // 批量测试模式（>1个测试）
    string test_name_prefix;           // 测试名前缀（如"rv32i"）
    
    // ===== 功能使能 =====
    bit enable_trace_logging;          // 是否记录trace日志
    bit enable_coverage;               // 是否收集覆盖率
    bit enable_assertions;             // 是否使能断言检查
    bit enable_timeout;                // 是否使能超时检测
    
    // ===== 超时配置 =====
    int unsigned max_cycles;           // 最大仿真周期数（默认1000000）
    int unsigned max_instructions;     // 最大指令数（默认100000）
    int unsigned max_stall_cycles;     // 最大连续停顿周期数（默认1000）
    bit timeout_on_no_progress;        // 无进度时超时（多个周期无新指令）
    
    // ===== 程序结束检测 =====
    bit [31:0] finish_instruction;     // 结束指令（默认EBREAK: 0x00100073）
    bit [31:0] finish_pc;              // 结束PC地址（0表示不使用）
    bit auto_detect_finish;            // 自动检测结束（无效PC）
    
    // ===== 日志详细程度 =====
    bit verbose_logging;               // 详细日志模式
    bit log_register_changes;          // 记录寄存器变化
    bit log_memory_accesses;           // 记录内存访问
    bit log_to_file;                   // 是否输出到文件
    bit log_to_console;                // 是否输出到控制台
    bit print_execution_trace;         // 打印执行trace（每条指令）
    bit print_statistics_on_finish;    // 程序结束时打印统计
    
    // ===== DUT路径（用于层次化采样）=====
    string dut_instance_path;          // DUT实例路径（如 "cpu_tb_top.dut"）
    bit enable_hierarchical_sampling;  // 使能层次化采样
    
    // ===== 离线验证和比对配置 =====
    bit enable_offline_comparison;     // 使能离线日志比对
    string comparison_script_path;     // Python比对脚本路径
    string comparison_output_path;     // 比对结果输出路径
    
    // ===== UVM Agent配置 =====
    uvm_active_passive_enum is_active; // Agent模式（默认ACTIVE）
    bit has_driver;                    // 是否有driver（用于加载ELF）
    bit has_monitor;                   // 是否有monitor（用于trace采集）
    bit has_coverage;                  // 是否有coverage collector
    
    function new(string name = "cpu_config");
        super.new(name);
        
        // 默认路径
        test_elf_path = "test.elf";
        trace_log_path = "logs/dut_trace.log";
        spike_log_path = "logs/spike_trace.log";
        riscv_dv_output_dir = "logs/riscv_dv_gen";
        
        // riscv-dv批量测试配置
        test_index = 0;
        total_tests = 1;
        batch_mode = 1'b0;
        test_name_prefix = "rv32i";
        
        // 功能使能
        enable_trace_logging = 1'b1;
        enable_coverage = 1'b1;
        enable_assertions = 1'b1;
        enable_timeout = 1'b1;
        
        // 超时配置
        max_cycles = 10_000;            // 10000周期
        max_instructions = 100_000;        // 100000指令
        max_stall_cycles = 1_000;          // 1K周期
        timeout_on_no_progress = 1'b1;
        
        // 程序结束检测
        finish_instruction = 32'h00100073;  // EBREAK
        finish_pc = 32'h0;
        auto_detect_finish = 1'b1;
        
        // 日志配置
        verbose_logging = 1'b0;            // 非详细模式（加快仿真）
        log_register_changes = 1'b1;       // 记录寄存器（与Spike对标）
        log_memory_accesses = 1'b1;        // 记录内存（与Spike对标）
        log_to_file = 1'b1;
        log_to_console = 1'b0;             // 不输出到控制台（加快仿真）
        print_execution_trace = 1'b0;      // 不打印每条指令（加快仿真）
        print_statistics_on_finish = 1'b1;
        
        // DUT采样配置
        dut_instance_path = "cpu_tb_top.dut";
        enable_hierarchical_sampling = 1'b1;
        
        // 离线验证配置
        enable_offline_comparison = 1'b1;
        comparison_script_path = "scripts/compare_logs.py";
        comparison_output_path = "logs/compare_report.txt";
        
        // UVM Agent配置
        is_active = UVM_ACTIVE;            // 需要driver加载ELF
        has_driver = 1'b1;                 // 有driver用于程序加载
        has_monitor = 1'b1;                // 有monitor用于trace采集
        has_coverage = 1'b1;               // 有coverage collector
    endfunction
    
    `uvm_object_utils_begin(cpu_config)
        `uvm_field_string(test_elf_path, UVM_ALL_ON)
        `uvm_field_string(trace_log_path, UVM_ALL_ON)
        `uvm_field_string(spike_log_path, UVM_ALL_ON)
        `uvm_field_string(riscv_dv_output_dir, UVM_ALL_ON)
        
        `uvm_field_int(test_index, UVM_ALL_ON | UVM_DEC)
        `uvm_field_int(total_tests, UVM_ALL_ON | UVM_DEC)
        `uvm_field_int(batch_mode, UVM_ALL_ON)
        `uvm_field_string(test_name_prefix, UVM_ALL_ON)
        
        `uvm_field_int(enable_trace_logging, UVM_ALL_ON)
        `uvm_field_int(enable_coverage, UVM_ALL_ON)
        `uvm_field_int(enable_timeout, UVM_ALL_ON)
        
        `uvm_field_int(max_cycles, UVM_ALL_ON | UVM_DEC)
        `uvm_field_int(max_instructions, UVM_ALL_ON | UVM_DEC)
        `uvm_field_int(max_stall_cycles, UVM_ALL_ON | UVM_DEC)
        
        `uvm_field_int(verbose_logging, UVM_ALL_ON)
        `uvm_field_int(log_register_changes, UVM_ALL_ON)
        `uvm_field_int(log_memory_accesses, UVM_ALL_ON)
        `uvm_field_int(log_to_file, UVM_ALL_ON)
    `uvm_object_utils_end
    
    // ============================================================================
    // 辅助方法 - 用于riscv-dv批量测试
    // ============================================================================
    
    // 自动根据test_index设置路径（用于riscv-dv批量测试）
    function void setup_for_riscv_dv_test(int unsigned index);
        string test_name;
        
        test_index = index;
        test_name = $sformatf("%s_%0d", test_name_prefix, index);
        
        test_elf_path = $sformatf("%s/elf/%s.elf", riscv_dv_output_dir, test_name);
        spike_log_path = $sformatf("%s/spike_log/%s.log", riscv_dv_output_dir, test_name);
        trace_log_path = $sformatf("logs/dut_trace_%s.log", test_name);
        comparison_output_path = $sformatf("logs/compare_%s.txt", test_name);
        
        batch_mode = (total_tests > 1) ? 1'b1 : 1'b0;
    endfunction
    
    // 打印配置信息（用于调试和验证）
    function void print_configuration();
        `uvm_info("CPU_CONFIG", "========== CPU Verification Configuration ==========", UVM_LOW)
        `uvm_info("CPU_CONFIG", $sformatf("Test ELF:          %s", test_elf_path), UVM_LOW)
        `uvm_info("CPU_CONFIG", $sformatf("DUT Trace Log:     %s", trace_log_path), UVM_LOW)
        `uvm_info("CPU_CONFIG", $sformatf("Spike Trace Log:   %s", spike_log_path), UVM_LOW)
        `uvm_info("CPU_CONFIG", $sformatf("Trace Logging:     %s", enable_trace_logging ? "ENABLED" : "DISABLED"), UVM_LOW)
        `uvm_info("CPU_CONFIG", $sformatf("Coverage:          %s", enable_coverage ? "ENABLED" : "DISABLED"), UVM_LOW)
        `uvm_info("CPU_CONFIG", $sformatf("Max Cycles:        %0d", max_cycles), UVM_LOW)
        `uvm_info("CPU_CONFIG", $sformatf("Max Instructions:  %0d", max_instructions), UVM_LOW)
        `uvm_info("CPU_CONFIG", $sformatf("Finish Instr:      0x%08h", finish_instruction), UVM_LOW)
        
        if (batch_mode) begin
            `uvm_info("CPU_CONFIG", $sformatf("Batch Mode:        Test %0d/%0d", test_index + 1, total_tests), UVM_LOW)
        end
        
        `uvm_info("CPU_CONFIG", "====================================================", UVM_LOW)
    endfunction
    
    // 获取当前测试名称
    function string get_test_name();
        if (batch_mode) begin
            return $sformatf("%s_%0d", test_name_prefix, test_index);
        end else begin
            return "single_test";
        end
    endfunction
    
    // 配置验证方法
    function bit check_config();
        bit valid = 1'b1;
        
        // 检查虚拟接口
        if (vif == null) begin
            `uvm_error("CPU_CONFIG", "Virtual interface (vif) is NULL!")
            valid = 1'b0;
        end
        
        // 检查ELF路径
        if (test_elf_path == "") begin
            `uvm_warning("CPU_CONFIG", "test_elf_path is empty!")
        end
        
        // 检查超时配置
        if (max_cycles == 0 && max_instructions == 0) begin
            `uvm_warning("CPU_CONFIG", "Both max_cycles and max_instructions are 0, no timeout protection!")
        end
        
        return valid;
    endfunction
    
endclass

`endif