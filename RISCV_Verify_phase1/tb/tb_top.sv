`timescale 1ns/1ps

import uvm_pkg::*;
`include "uvm_macros.svh"
`include "clk_if.sv"
`include "exe_if.sv"
import tb_pkg::*;
import common::*;


module tb_top;
    // ===== Clock and Reset =====
    logic clk;
    logic rstn;
    
    // ===== Interfaces =====
    clk_if clk_if_inst();
    rstn_if rstn_if_inst(clk);
    id_if id_if_inst(clk, rstn);
    id_out_if id_out_if_inst(clk, rstn);
    exe_if exe_if_inst(clk, rstn);  // �?新增 EXE interface

    // ===== Clock generation =====
    initial begin
        clk = 0;
        forever #5 clk = ~clk;  // 100MHz clock
    end
// ===== DUT Instantiation =====
    // 注意：这里需要根据您的实�?DUT 模块进行连接
    // 假设您的 DUT 包含 ID stage �?EXE stage
    
    // ID/EXE pipeline register signals
    logic [31:0]         id_exe_read_data1;
    logic [31:0]         id_exe_read_data2;
    logic [31:0]         id_exe_immediate_data;
    logic [4:0]          id_exe_reg_rd_id;
    control_type         id_exe_control_signals;
    logic [31:0]         id_exe_pc;
    branch_predict_type  id_exe_branch_predict;

    // Forwarding signals (default: no forwarding)
    logic [1:0]          fwd_sel_rs1;
    logic [1:0]          fwd_sel_rs2;
    logic [31:0]         fwd_data_ex_mem;
    logic [31:0]         fwd_data_mem_wb;
    
    // ID Stage (您现有的 DUT)
    decode_stage u_id_stage (
        .clk                (clk),
        .reset_n            (rstn),
        
        // Inputs from IF stage
        .instruction        (id_if_inst.instruction),
        .pc                 (id_if_inst.pc),
        .branch_in          (id_if_inst.branch_in),
        
        // Writeback inputs
        .write_en           (id_if_inst.write_en),
        .write_id           (id_if_inst.write_id),
        .write_data         (id_if_inst.write_data),
        
        // Outputs to EXE stage (ID/EXE pipeline register)
        .read_data1         (id_exe_read_data1),
        .read_data2         (id_exe_read_data2),
        .immediate_data     (id_exe_immediate_data),
        .reg_rd_id          (id_exe_reg_rd_id),
        .control_signals    (id_exe_control_signals),
        .pc_out             (id_exe_pc),
        .branch_out         (id_exe_branch_predict)
    );
    
    // EXE Stage (需要添加或确保已存�?
    execute_stage u_exe_stage (
        .clk                (clk),
        .reset_n                  (rstn),
        
        // Inputs from ID/EXE pipeline register
        .data1                    (id_exe_read_data1),
        .data2                    (id_exe_read_data2),
        .pc                       (id_exe_pc),
        .immediate_data           (id_exe_immediate_data),
        .control_in               (id_exe_control_signals),
        .branch_predict           (id_exe_branch_predict),
        .fwd_sel_rs1              (fwd_sel_rs1),
        .fwd_sel_rs2              (fwd_sel_rs2),
        .fwd_data_ex_mem          (fwd_data_ex_mem),
        .fwd_data_mem_wb          (fwd_data_mem_wb),
        
        // Outputs from execute_stage
        .control_out              (exe_if_inst.control_out),
        .rd_data                  (exe_if_inst.rd_data),
        .branch_target_pc         (exe_if_inst.branch_target_pc),
        .branch_flush             (exe_if_inst.branch_flush),
        .memory_data              (exe_if_inst.memory_data),
        .memory_addr              (exe_if_inst.memory_addr),
        .ex2if_branch_valid       (exe_if_inst.ex2if_branch_valid),
        .ex2if_branch_taken       (exe_if_inst.ex2if_branch_taken),
        .ex2if_branch_addr        (exe_if_inst.ex2if_branch_addr),
        .ex2if_branch_target_addr (exe_if_inst.ex2if_branch_target_addr),
        .ex2if_branch_update_GHSR (exe_if_inst.ex2if_branch_update_GHSR),
        .ex2if_GHSR_restore       (exe_if_inst.ex2if_GHSR_restore),
        .muldiv_ready             (exe_if_inst.muldiv_ready),
        .exception                (exe_if_inst.exception)
    );
    // ===== Connect interfaces to DUT =====
    assign clk_if_inst.clk = clk;
        // ID stage connections (保持不变)
    assign rstn = rstn_if_inst.rstn;
    
    // Connect ID output interface
    assign id_out_if_inst.read_data1 = id_exe_read_data1;
    assign id_out_if_inst.read_data2 = id_exe_read_data2;
    assign id_out_if_inst.immediate_data = id_exe_immediate_data;
    assign id_out_if_inst.reg_rd_id = id_exe_reg_rd_id;
    assign id_out_if_inst.control_signals = id_exe_control_signals;
    assign id_out_if_inst.pc_out = id_exe_pc;
    assign id_out_if_inst.branch_out = id_exe_branch_predict;
    
    // �?Connect EXE interface (inputs from ID/EXE pipeline register)
    assign exe_if_inst.data1 = id_exe_read_data1;
    assign exe_if_inst.data2 = id_exe_read_data2;
    assign exe_if_inst.immediate_data = id_exe_immediate_data;
    assign exe_if_inst.pc = id_exe_pc;
    assign exe_if_inst.control_in = id_exe_control_signals;
    assign exe_if_inst.branch_predict = id_exe_branch_predict;
    assign exe_if_inst.fwd_sel_rs1 = fwd_sel_rs1;
    assign exe_if_inst.fwd_sel_rs2 = fwd_sel_rs2;
    assign exe_if_inst.fwd_data_ex_mem = fwd_data_ex_mem;
    assign exe_if_inst.fwd_data_mem_wb = fwd_data_mem_wb;

    // Default forwarding
    assign fwd_sel_rs1 = 2'b00;
    assign fwd_sel_rs2 = 2'b00;
    assign fwd_data_ex_mem = 32'h0;
    assign fwd_data_mem_wb = 32'h0;
    
    // EXE outputs already connected above in exe_stage instantiation
    
    // ===== UVM Configuration =====
    initial begin
        top_config top_cfg;

        // Bind clk interface
        top_cfg = new("top_cfg");
        top_cfg.m_clk_config.m_if = clk_if_inst;
        top_cfg.m_rstn_config.m_vif = rstn_if_inst;
        top_cfg.m_id_config.m_vif = id_if_inst;
        top_cfg.m_id_out_config.m_vif = id_out_if_inst;

        uvm_config_db#(top_config)::set(null, "tb_top", "top_config", top_cfg);
        uvm_config_db#(rstn_config)::set(null, "*", "config", top_cfg.m_rstn_config);
        uvm_config_db#(id_config)::set(null, "*", "config", top_cfg.m_id_config);
        uvm_config_db#(id_out_config)::set(null, "*", "config", top_cfg.m_id_out_config);

        // Set interfaces in config_db
        uvm_config_db#(virtual rstn_if)::set(null, "*", "vif", rstn_if_inst);
        uvm_config_db#(virtual id_if)::set(null, "*", "vif", id_if_inst);
        uvm_config_db#(virtual id_out_if)::set(null, "*", "vif", id_out_if_inst);
        uvm_config_db#(virtual exe_if)::set(null, "*", "vif", exe_if_inst);  // �?新增
        
        // Run test
        run_test();
    end
    
    // ===== Waveform dump =====
    initial begin
        $dumpfile("wave.vcd");
        $dumpvars(0, tb_top);
    end
    
    // ===== Timeout watchdog =====
    initial begin
        #100us;
        `uvm_fatal("TIMEOUT", "Test timeout after 100us")
        $finish;
    end
    
endmodule







