`ifndef CPU_SEQ_ITEM_SVH
`define CPU_SEQ_ITEM_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"

class cpu_seq_item extends uvm_sequence_item;
    // Remove `uvm_object_utils here, will use `uvm_object_utils_begin later
    
    // ========================================================================
    // 基本执行信息
    // ========================================================================
    logic [31:0] pc;                 // 程序计数器
    logic [31:0] instruction;        // 指令编码
    longint      cycle;              // 周期计数
    
    // ========================================================================
    // 寄存器写入信息
    // ========================================================================
    bit          rd_we;              // 寄存器写使能
    logic [4:0]  rd_addr;            // 目标寄存器地址
    logic [31:0] rd_data;            // 目标寄存器数据
    
    // ========================================================================
    // 内存访问信息
    // ========================================================================
    bit          mem_read;           // 内存读标志
    bit          mem_write;          // 内存写标志
    logic [31:0] mem_addr;           // 内存地址
    logic [31:0] mem_wdata;          // 内存写数据
    logic [31:0] mem_rdata;          // 内存读数据
    
    // ========================================================================
    // 分支信息
    // ========================================================================
    bit          is_branch;          // 是否为分支指令
    bit          branch_taken;       // 分支是否跳转
    logic [31:0] branch_target;      // 分支目标地址
    
    // ========================================================================
    // 异常信息
    // ========================================================================
    bit          exception_occurred; // 异常发生标志
    logic [3:0]  exception_cause;    // 异常原因
    logic [31:0] exception_tval;     // 异常值（trap value）
    
    // ========================================================================
    // Coverage相关信息（从DUT采样）
    // ========================================================================
    logic [4:0]  alu_op;             // ALU操作类型（来自control_type）
    bit          alu_src;            // ALU源选择（立即数/寄存器）
    bit          hazard;             // 冒险检测标志
    bit          stall;              // 流水线停顿标志
    bit          PC_stall;           // PC停顿标志
    
    // ========================================================================
    // Constructor
    // ========================================================================
    function new(string name = "cpu_seq_item");
        super.new(name);
        
        // 初始化为0（避免X态）
        pc = 32'h0;
        instruction = 32'h0;
        cycle = 0;
        
        rd_we = 1'b0;
        rd_addr = 5'h0;
        rd_data = 32'h0;
        
        mem_read = 1'b0;
        mem_write = 1'b0;
        mem_addr = 32'h0;
        mem_wdata = 32'h0;
        mem_rdata = 32'h0;
        
        is_branch = 1'b0;
        branch_taken = 1'b0;
        branch_target = 32'h0;
        
        exception_occurred = 1'b0;
        exception_cause = 4'h0;
        exception_tval = 32'h0;
        
        alu_op = 5'h0;
        alu_src = 1'b0;
        hazard = 1'b0;
        stall = 1'b0;
        PC_stall = 1'b0;
    endfunction
    
    // ========================================================================
    // UVM Field Macros（用于打印、复制、比较）
    // ========================================================================
    `uvm_object_utils_begin(cpu_seq_item)
        // 基本信息
        `uvm_field_int(pc, UVM_ALL_ON | UVM_HEX)
        `uvm_field_int(instruction, UVM_ALL_ON | UVM_HEX)
        `uvm_field_int(cycle, UVM_ALL_ON | UVM_DEC)
        
        // 寄存器
        `uvm_field_int(rd_we, UVM_ALL_ON)
        `uvm_field_int(rd_addr, UVM_ALL_ON | UVM_DEC)
        `uvm_field_int(rd_data, UVM_ALL_ON | UVM_HEX)
        
        // 内存
        `uvm_field_int(mem_read, UVM_ALL_ON)
        `uvm_field_int(mem_write, UVM_ALL_ON)
        `uvm_field_int(mem_addr, UVM_ALL_ON | UVM_HEX)
        `uvm_field_int(mem_wdata, UVM_ALL_ON | UVM_HEX)
        `uvm_field_int(mem_rdata, UVM_ALL_ON | UVM_HEX)
        
        // 分支
        `uvm_field_int(is_branch, UVM_ALL_ON)
        `uvm_field_int(branch_taken, UVM_ALL_ON)
        `uvm_field_int(branch_target, UVM_ALL_ON | UVM_HEX)
        
        // 异常
        `uvm_field_int(exception_occurred, UVM_ALL_ON)
        `uvm_field_int(exception_cause, UVM_ALL_ON | UVM_HEX)
        `uvm_field_int(exception_tval, UVM_ALL_ON | UVM_HEX)
        
        // Coverage相关
        `uvm_field_int(alu_op, UVM_ALL_ON | UVM_HEX)
        `uvm_field_int(alu_src, UVM_ALL_ON)
        `uvm_field_int(hazard, UVM_ALL_ON)
        `uvm_field_int(stall, UVM_ALL_ON)
        `uvm_field_int(PC_stall, UVM_ALL_ON)
    `uvm_object_utils_end
    
    // ========================================================================
    // 辅助函数：将item转换为Spike格式的trace字符串
    // ========================================================================
    function string to_trace_string();
        string mnemonic;
        string trace_str;
        
        // 获取指令助记符
        mnemonic = cpu_get_mnemonic(instruction);
        
        // 主trace行：core   0: 0xPC (0xINSTR) MNEMONIC
        trace_str = $sformatf("core   0: 0x%08h (0x%08h) %s", pc, instruction, mnemonic);
        
        // 寄存器写入：3 0xPC (0xREG) xREG 0xVALUE
        if (rd_we && rd_addr != 0) begin
            trace_str = {trace_str, $sformatf("\n3 0x%08h (0x%02x) x%-2d 0x%08h", 
                                             pc, rd_addr, rd_addr, rd_data)};
        end
        
        return trace_str;
    endfunction
    
    // ========================================================================
    // 辅助函数：打印简短信息（调试用）
    // ========================================================================
    function string convert2string();
        string mnemonic = cpu_get_mnemonic(instruction);
        return $sformatf("[%0d] PC=0x%08h %s", cycle, pc, mnemonic);
    endfunction
    
    // ========================================================================
    // 辅助函数：判断指令类型
    // ========================================================================
    function bit is_load_instr();
        logic [6:0] opcode = instruction[6:0];
        return (opcode == 7'b0000011);  // LOAD
    endfunction
    
    function bit is_store_instr();
        logic [6:0] opcode = instruction[6:0];
        return (opcode == 7'b0100011);  // STORE
    endfunction
    
    function bit is_branch_instr();
        logic [6:0] opcode = instruction[6:0];
        return (opcode == 7'b1100011);  // BRANCH
    endfunction
    
    function bit is_jal_instr();
        logic [6:0] opcode = instruction[6:0];
        return (opcode == 7'b1101111);  // JAL
    endfunction
    
    function bit is_jalr_instr();
        logic [6:0] opcode = instruction[6:0];
        return (opcode == 7'b1100111);  // JALR
    endfunction
    
endclass

`endif