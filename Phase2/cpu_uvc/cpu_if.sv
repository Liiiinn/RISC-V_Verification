`ifndef CPU_IF_SV
`define CPU_IF_SV

import common::*;
// 包含所有辅助函数（内存访问、指令检测、反汇编、调试输出）
`include "cpu_if_helper.svh"

interface cpu_if(input logic clk, input logic rstn);
    
    // ============================================================================
    // 离线验证接口 - 用于跨环境（WSL2 Spike + Windows UVM）验证
    // 策略：使用DUT现有端口 + 层次化路径访问内部信号
    // ============================================================================
    
    // ===== 测试程序加载接口（连接到DUT的write_xxx端口）=====
    logic [31:0] write_address;        // 程序加载地址
    logic [7:0]  write_data;           // 程序数据（按字节）
    logic        write_enable;         // 加载使能
    
    // ===== DUT直接输出的调试信号（从端口连接）=====
    logic debug_flush;                 // 流水线刷新（DUT端口）
    logic debug_is_bj;                 // 分支/跳转指令（DUT端口）
    logic debug_exception;             // 异常标志（DUT端口）
    logic [31:0] debug_reg[0:31];      // 32个通用寄存器（DUT端口）
    logic [31:0] ram_debug[32];        // 数据内存调试访问（DUT端口 - DATA_RAM_DEPTH/4 = 128/4 = 32）
    
    // ===== 通过层次化路径采样的内部信号 =====
    // 这些信号从DUT内部读取，无需修改DUT端口
    
    // PC和指令信号（层次化采样）
    logic [31:0] debug_pc;             // 当前PC（从fetch_stage采样）
    logic [31:0] debug_instruction;    // 当前指令（从IF/ID采样）
    logic [31:0] debug_next_pc;        // 下一个PC
    
    // 分支信号（层次化采样）
    logic        debug_branch_taken;   // 分支是否跳转（从execute_stage采样）
    logic [31:0] debug_branch_target;  // 分支目标地址（从execute_stage采样）
    
    // 流水线寄存器（层次化采样）
    logic [31:0] debug_if_id_pc;       // IF/ID流水线寄存器PC
    logic [31:0] debug_if_id_instruction; // IF/ID流水线寄存器指令
    logic [31:0] debug_id_ex_pc;       // ID/EX流水线寄存器PC
    logic [31:0] debug_ex_mem_pc;      // EX/MEM流水线寄存器PC
    logic [31:0] debug_mem_wb_pc;      // MEM/WB流水线寄存器PC
    
    // 流水线控制信号（层次化采样）
    logic debug_stall;                 // 流水线停顿
    logic debug_PC_stall;              // PC停顿
    logic debug_hazard;                // 数据冒险检测
    
    // 内存访问信号（层次化采样）
    logic        debug_mem_read;       // 内存读标志
    logic        debug_mem_write;      // 内存写标志
    logic [31:0] debug_mem_addr;       // 内存访问地址
    logic [31:0] debug_mem_wdata;      // 内存写数据
    logic [31:0] debug_mem_rdata;      // 内存读数据
    
    // 寄存器写回信号（层次化采样）
    logic [4:0]  debug_rd_addr;        // 目标寄存器地址
    logic [31:0] debug_rd_data;        // 目标寄存器数据
    logic        debug_rd_we;          // 寄存器写使能
    
    // 压缩指令支持
    logic [31:0] debug_original_instr; // 原始指令（对于压缩指令是16位，高位为0）
    logic        debug_is_compressed;  // 是否为压缩指令
    
    // 派生信号（在接口内部计算）
    logic debug_valid;                 // 指令有效信号
    logic debug_retired;               // 指令提交标志
    
    // ===== 程序结束检测 =====
    logic        program_finished;     // 程序完成标志
    logic [31:0] finish_pc;            // 结束PC地址（可配置）
    logic [31:0] finish_instruction;   // 结束指令码（如EBREAK: 0x00100073）
    logic [15:0] no_retire_count;      // 连续无retire的周期计数
    
    // ===== 性能计数器（自动维护）=====
    longint unsigned cycle_count;      // 总周期数
    longint unsigned instr_count;      // 总指令数
    longint unsigned branch_count;     // 分支指令数
    longint unsigned load_count;       // Load指令数
    longint unsigned store_count;      // Store指令数
    longint unsigned exception_count;  // 异常计数
    
    // ===== 配置参数（通过config_db设置）=====
    string test_elf_path;              // 测试ELF文件路径
    string trace_log_path;             // Trace日志输出路径
    bit    enable_trace;               // 是否使能trace记录
    bit    enable_coverage;            // 是否使能覆盖率收集
    
    // ===== 层次化路径字符串（用于testbench中动态赋值）=====
    // 这些路径在testbench中设置，指向DUT内部信号
    string dut_path;                   // DUT实例路径（如 "cpu_tb_top.dut"）
    
    // ============================================================================
    // Clocking Blocks
    // ============================================================================
    
    // Driver clocking block (用于程序加载)
    clocking driver_cb @(posedge clk);
        default input #1ns output #1ns;
        output write_address, write_data, write_enable;
    endclocking
    
    // Monitor clocking block (用于trace记录)
    clocking monitor_cb @(posedge clk);
        default input #1ns;
        // DUT端口信号
        input debug_flush, debug_is_bj, debug_exception;
        input debug_reg, ram_debug;
        // 层次化采样信号
        input debug_pc, debug_instruction, debug_next_pc;
        input debug_branch_taken, debug_branch_target;
        input debug_if_id_pc, debug_if_id_instruction;
        input debug_id_ex_pc, debug_ex_mem_pc, debug_mem_wb_pc;
        input debug_stall, debug_PC_stall, debug_hazard;
        input debug_mem_read, debug_mem_write;
        input debug_mem_addr, debug_mem_wdata, debug_mem_rdata;
        input debug_rd_addr, debug_rd_data, debug_rd_we;
        input debug_valid, debug_retired;
        // Remove internal generated signals from clocking block
        // program_finished, cycle_count, etc. are accessed directly
    endclocking
    
    // ============================================================================
    // Modports
    // ============================================================================
    
    modport driver_mp(
        clocking driver_cb,
        input clk, rstn,
        output test_elf_path, dut_path
    );
    
    modport monitor_mp(
        clocking monitor_cb,
        input clk, rstn,
        input cycle_count, instr_count,
        input branch_count, load_count, store_count, exception_count,
        input trace_log_path, enable_trace, enable_coverage
    );
    
    // ============================================================================
    // 派生信号计算逻辑
    // ============================================================================
    
    // 指令有效信号 = PC有效 且 非刷新 且 非停顿
    assign debug_valid = (debug_pc != 32'h0) && !debug_flush && !debug_stall;
    
    // 指令提交信号 = 有效指令提交到WB阶段
    // 判断条件：有寄存器写回 或 有内存写入 或 是分支/跳转指令且PC有变化
    assign debug_retired = debug_valid && (debug_rd_we || debug_mem_write || debug_is_bj);
    
    // ============================================================================
    // 自动计数器逻辑
    // ============================================================================
    
    // 周期计数（每个时钟周期递增）
    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) begin
            cycle_count <= 0;
        end else begin
            cycle_count <= cycle_count + 1;
        end
    end
    
    // 指令计数（只计算已提交的有效指令）
    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) begin
            instr_count <= 0;
        end else begin
            if (debug_retired) begin
                instr_count <= instr_count + 1;
            end
        end
    end
    
    // 分支指令计数
    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) begin
            branch_count <= 0;
        end else begin
            if (debug_is_bj && debug_retired) begin
                branch_count <= branch_count + 1;
            end
        end
    end
    
    // Load/Store指令计数
    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) begin
            load_count <= 0;
            store_count <= 0;
        end else begin
            if (debug_mem_read && debug_retired) begin
                load_count <= load_count + 1;
            end
            if (debug_mem_write && debug_retired) begin
                store_count <= store_count + 1;
            end
        end
    end
    
    // 异常计数
    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) begin
            exception_count <= 0;
        end else begin
            if (debug_exception) begin
                exception_count <= exception_count + 1;
            end
        end
    end
    
    // ============================================================================
    // 程序结束检测逻辑
    // ============================================================================
    
    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) begin
            program_finished <= 1'b0;
            no_retire_count <= 16'h0;
        end else begin
            // 检测方式1: EBREAK指令 (0x00100073) - DUT可能不支持，但保留检测
            if (debug_instruction == 32'h00100073 && debug_valid && debug_retired) begin
                program_finished <= 1'b1;
            end
            // 检测方式2: 特定结束地址
            else if (finish_pc != 32'h0 && debug_pc == finish_pc && debug_valid) begin
                program_finished <= 1'b1;
            end
            // 检测方式3: 无效PC（可能表示程序出错或结束）
            // 避免初始化阶段误判，需要等足够周期后再检测
            else if ((debug_pc == 32'hFFFFFFFF) && (cycle_count > 100)) begin
                program_finished <= 1'b1;
            end
            // 检测方式4: 连续100个周期无指令retired（程序可能卡死或结束）
            else if (debug_retired && cycle_count > 10) begin
                no_retire_count <= 16'h0;
            end else if (cycle_count > 10 && no_retire_count < 16'hFFFF) begin
                no_retire_count <= no_retire_count + 1;
                if (no_retire_count >= 100) begin
                    program_finished <= 1'b1;
                end
            end
        end
    end
    
    // ============================================================================
    // 初始化
    // ============================================================================
    
    initial begin
        // 默认配置参数
        test_elf_path = "test.elf";
        trace_log_path = "logs/dut_trace.log";
        enable_trace = 1'b1;
        enable_coverage = 1'b1;
        finish_pc = 32'h0;  // 0表示不使用PC检测结束，仅用EBREAK检测
        finish_instruction = 32'h00100073;  // EBREAK
        // program_finished is set by always_ff, don't initialize here
        dut_path = "cpu_tb_top.dut";  // 默认DUT实例路径
        
        // Counters are initialized by always_ff reset logic, don't initialize here
    end
    
endinterface : cpu_if

`endif // CPU_IF_SV