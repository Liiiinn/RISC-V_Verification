// decode_interface.sv - Interface for decode stage
`ifndef id_INTERFACE_SV
`define id_INTERFACE_SV

import common::*;

interface id_if(input logic clk, input logic rstn);
    
    //Input signals
    instruction_type instruction;
    logic [31:0] pc;
    logic write_en;
    logic [4:0] write_id;
    logic [31:0] write_data;
    branch_predict_type branch_in;

    // //Output signals
    branch_predict_type branch_out;
    logic [4:0] reg_rd_id;
    logic [31:0] pc_out;
    logic [31:0] read_data1;
    logic [31:0] read_data2;
    logic [31:0] immediate_data;
    control_type control_signals;
    // logic [31:0] debug_reg[0:REGISTER_FILE_SIZE-1];
    
    // Driver clocking block
    clocking driver_cb @(posedge clk);
        // default input #1 output #1;
        // output instruction;
        output pc;
        output write_en;
        output write_id;
        output write_data;
        output branch_in;
    endclocking
    
    // Monitor clocking block
    clocking monitor_cb @(posedge clk);
        // default input #1 output #1;
        input instruction;
        input pc;
        input write_en;
        input write_id;
        input write_data;
        input branch_in;
        input branch_out;
        input reg_rd_id;
        input pc_out;
        input read_data1;
        input read_data2;
        input immediate_data;
        input control_signals;
        // input debug_reg; // Not needed
    endclocking
    
    modport driver_mp(clocking driver_cb, input clk, input rstn);
    modport monitor_mp(clocking monitor_cb, input clk, input rstn);
    modport dut_mp(
        input clk, input rstn,
        input instruction, input pc, input write_en, 
        input write_id, input write_data, input branch_in,
        output branch_out, output reg_rd_id, output pc_out,
        output read_data1, output read_data2, output immediate_data,
        output control_signals, output debug_reg
    );
    
endinterface : id_if

`endif
