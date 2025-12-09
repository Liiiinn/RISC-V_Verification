`timescale 1ns/1ps

package tb_pkg;
    import common::*;
    import uvm_pkg::*;
    `include "uvm_macros.svh"
    `include "clk_config.svh"
    `include "clk_driver.svh"
    `include "clk_agent.svh"

    `include "rstn_config.svh"
    `include "rstn_seq_item.svh"
    `include "rstn_driver.svh"
    `include "rstn_monitor.svh"
    `include "rstn_seq.svh"
    `include "rstn_agent.svh"

    `include "id_config.svh"
    `include "id_seq_item.svh"  
    `include "id_monitor.svh"
    `include "id_driver.svh"
    `include "id_seq.svh" 
    `include "id_agent.svh" 

    `include "id_out_config.svh"
    `include "id_out_seq_item.svh"
    `include "id_out_monitor.svh"
    `include "id_out_agent.svh"

    `include "id_ref_model.svh" 
    `include "id_scoreboard.svh"  
    `include "top_config.svh"
    `include "tb_env.svh" 
    `include "base_test.svh" 
    `include "id_test.svh" 
   

endpackage : tb_pkg