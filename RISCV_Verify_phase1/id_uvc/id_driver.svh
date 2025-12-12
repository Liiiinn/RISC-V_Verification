// decode_driver.sv - UVM driver for decode stage
`ifndef ID_DRIVER_SVH
`define ID_DRIVER_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"

class id_driver extends uvm_driver #(id_seq_item);   
    `uvm_component_utils(id_driver)
    id_config m_config;
    
    function new(string name, uvm_component parent = null);
        super.new(name, parent);
        if (!uvm_config_db#(id_config)::get(this, "", "decode_config", m_config)) begin
            `uvm_fatal(get_name(), "Could not get decode_config")
        end
    endfunction

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
    endfunction :build_phase
    
    virtual task run_phase(uvm_phase phase);
        id_seq_item req_item;       
        //Task 21: reset signals
        m_config.m_vif.driver_cb.instruction <= '0;
        m_config.m_vif.driver_cb.pc <= '0;
        m_config.m_vif.driver_cb.write_en <= 0;
        m_config.m_vif.driver_cb.write_id <= '0;
        m_config.m_vif.driver_cb.write_data <= '0;
        m_config.m_vif.driver_cb.branch_in <= 0;

        wait(m_config.m_vif.rstn == 1);
        // @(m_config.m_vif.driver_cb);

        forever begin
            // Task 22: get next transaction
            seq_item_port.get_next_item(req_item);
            `uvm_info(get_name(),$sformatf("Start decode interface transaction: instruction =%0d, pc=%0d, write_en=%0b, write_id=%0d, write_data=%0d, branch_in=%0b", req_item.instruction, req_item.pc, req_item.write_en, req_item.write_id, req_item.write_data, req_item.branch_in),UVM_HIGH);
            @(m_config.m_vif.driver_cb);
             m_config.m_vif.driver_cb.instruction <= req_item.instruction;
             m_config.m_vif.driver_cb.pc <= req_item.pc;
             m_config.m_vif.driver_cb.write_en <= req_item.write_en;
             m_config.m_vif.driver_cb.write_id <= req_item.write_id;
             m_config.m_vif.driver_cb.write_data <= req_item.write_data;
             m_config.m_vif.driver_cb.branch_in <= req_item.branch_in;
             // Hold for one cycle
             //@(m_config.m_vif.driver_cb);
            seq_item_port.item_done();
        end

    endtask
    
    
endclass

`endif
