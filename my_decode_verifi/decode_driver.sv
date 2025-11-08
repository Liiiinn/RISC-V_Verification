// decode_driver.sv - UVM driver for decode stage
`ifndef DECODE_DRIVER_SV
`define DECODE_DRIVER_SV

import uvm_pkg::*;
`include "uvm_macros.svh"

class decode_driver extends uvm_driver #(decode_item);   
    `uvm_component_utils(decode_driver)
    decode_config m_config;
    
    function new(string name, uvm_component parent = null);
        super.new(name, parent);
        if (!uvm_config_db#(decode_config)::get(this, "", "decode_config", m_config)) begin
            `uvm_fatal(get_name(), "Could not get decode_config")
        end
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
    endfunction :build_phase
    
    virtual task run_phase(uvm_phase phase);
        decode_item req;       
        //Task 21: reset signals
        m_config.m_vif.instruction <= '0;
        m_config.m_vif.pc <= '0;
        m_config.m_vif.write_en <= '0;
        m_config.m_vif.write_id <= '0;
        m_config.m_vif.write_data <= '0;
        m_config.m_vif.branch_in <= '0;

        wait(m_config.m_vif.reset_n == 1);
        @(m_config.m_vif.driver_cb);

        forever begin
            // Task 22: get next transaction
            seq_item_port.get_next_item(req);
            `uvm_info(get_name(),$sformatf("Start decode interface transaction: instruction =%0d, pc=%0d, write_en=%0b, write_id=%0d, write_data=%0d, branch_in=%0b", req.instruction, req.pc, req.write_en, req.write_id, req.write_data, req.branch_in));
            @(m_config.m_vif.driver_cb);
             m_config.m_vif.instruction <= req.instruction;
             m_config.m_vif.pc <= req.pc;
             m_config.m_vif.write_en <= req.write_en;
             m_config.m_vif.write_id <= req.write_id;
             m_config.m_vif.write_data <= req.write_data;
             m_config.m_vif.branch_in <= req.branch_in;
             // Hold for one cycle
             //@(m_config.m_vif.driver_cb);
            seq_item_port.item_done();
        end

    endtask
    
    
endclass

`endif
