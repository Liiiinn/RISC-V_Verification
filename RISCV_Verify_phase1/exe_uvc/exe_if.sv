`ifndef EXE_IF_SV
`define EXE_IF_SV

import common::*;

interface exe_if(input logic clk, input logic rstn);
    
    // ===== Inputs to execute_stage =====
    logic [31:0]         data1;
    logic [31:0]         data2;
    logic [31:0]         immediate_data;
    logic [31:0]         pc;
    control_type         control_in;
    branch_predict_type  branch_predict;

    logic [1:0]          fwd_sel_rs1;
    logic [1:0]          fwd_sel_rs2;
    logic [31:0]         fwd_data_ex_mem;
    logic [31:0]         fwd_data_mem_wb;
    
    // ===== Outputs from execute_stage =====
    control_type         control_out;
    logic                exception;
    logic [31:0]         rd_data;
    logic [31:0]         branch_target_pc;
    logic                branch_flush;
    logic [31:0]         memory_data;
    logic [31:0]         memory_addr;
    logic                muldiv_ready;

    // To IF stage
    logic                ex2if_branch_valid;
    logic                ex2if_branch_taken;
    logic [31:0]         ex2if_branch_addr;
    logic [31:0]         ex2if_branch_target_addr;
    logic                ex2if_branch_update_GHSR;
    logic [GSHARE_GHSR_WIDTH-1:0] ex2if_GHSR_restore;
    
    // Clocking block for monitor
    clocking monitor_cb @(posedge clk);
        input data1;
        input data2;
        input immediate_data;
        input pc;
        input control_in;
        input branch_predict;
        input fwd_sel_rs1;
        input fwd_sel_rs2;
        input fwd_data_ex_mem;
        input fwd_data_mem_wb;

        input control_out;
        input exception;
        input rd_data;
        input branch_target_pc;
        input branch_flush;
        input memory_data;
        input memory_addr;
        input muldiv_ready;

        input ex2if_branch_valid;
        input ex2if_branch_taken;
        input ex2if_branch_addr;
        input ex2if_branch_target_addr;
        input ex2if_branch_update_GHSR;
        input ex2if_GHSR_restore;
    endclocking
    
    modport monitor_mp(
        clocking monitor_cb,
        input clk,
        input rstn
    );
    
endinterface

`endif
