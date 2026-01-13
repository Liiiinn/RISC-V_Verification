`ifndef CPU_IF_SV
`define CPU_IF_SV

import common::*;

interface cpu_if(input logic clk, input logic rstn);
    
    // ===== 指令存储器接口 =====
    logic [31:0] imem_addr;
    logic [31:0] imem_rdata;
    
    // ===== 数据存储器接口 =====
    logic [31:0] dmem_addr;
    logic [31:0] dmem_wdata;
    logic [31:0] dmem_rdata;
    logic dmem_we;
    logic [3:0] dmem_be;
    
    // ===== CPU调试信号（通过层次化路径连接）=====
    logic [31:0] debug_pc;
    logic [31:0] debug_instruction;
    logic [31:0] debug_reg_file[0:31];  // 32个寄存器
    
    // 流水线控制信号
    logic debug_stall;
    logic debug_flush;
    logic debug_is_bj;        // Branch/Jump
    logic debug_exception;
    
    // ===== 性能计数器 =====
    int unsigned cycle_count;
    int unsigned instr_retired_count;
    
    // Monitor clocking block
    clocking monitor_cb @(posedge clk);
        default input #1ns;
        input imem_addr, imem_rdata;
        input dmem_addr, dmem_wdata, dmem_rdata, dmem_we, dmem_be;
        input debug_pc, debug_instruction, debug_reg_file;
        input debug_stall, debug_flush, debug_is_bj, debug_exception;
    endclocking
    
    modport monitor_mp(
        clocking monitor_cb,
        input clk, rstn,
        input cycle_count, instr_retired_count
    );
    
    // 性能计数器逻辑
    always_ff @(posedge clk or negedge rstn) begin
        if (!rstn) begin
            cycle_count <= 0;
            instr_retired_count <= 0;
        end else begin
            cycle_count <= cycle_count + 1;
            // 检测有效指令提交（PC变化且非stall/flush）
            if (!debug_stall && !debug_flush && debug_pc != 0) begin
                instr_retired_count <= instr_retired_count + 1;
            end
        end
    end
    
endinterface : cpu_if

`endif