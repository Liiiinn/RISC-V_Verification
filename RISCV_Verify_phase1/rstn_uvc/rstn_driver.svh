import uvm_pkg::*;
`include "uvm_macros.svh"

class rst_driver extends uvm_driver #(rstn_seq_item);
    `uvm_component_utils(rst_driver)
	rstn_config m_config; // clarification should before utils
	

	function new(string name, uvm_component parent = null);
		super.new(name, parent);
		// if(!uvm_config_db #(rstn_config)::get(this,"","config", m_config)) begin
		// 	`uvm_fatal(get_name(), "Cannot find the rstn configuration!")
		// end
	endfunction 

	function void build_phase(uvm_phase phase);
		super.build_phase(phase);

		if(!uvm_config_db#(rstn_config)::get(this, "", "rstn_config", m_config)) begin
            `uvm_fatal(get_name(), "Cannot find the rstn configuration!")
        end
        
        `uvm_info(get_name(), "RSTN driver built successfully", UVM_MEDIUM)
	endfunction : build_phase

	virtual task run_phase(uvm_phase phase);
		rstn_seq_item seq_item;

		m_config.m_vif.rstn <= 1'b1;
        `uvm_info(get_name(), "RSTN driver initialized to 1", UVM_FULL)

		forever begin
			seq_item_port.get_next_item(seq_item);
        	`uvm_info(get_name(), $sformatf("Received reset sequence: delay=%0d, length=%0d, value=%0d",
				seq_item.rstn_delay, seq_item.rstn_length, seq_item.rstn_value), UVM_LOW)
			
			// Wait for specified delay
			repeat(seq_item.rstn_delay) @(posedge m_config.m_vif.clk);
			
			// Assert reset (rstn = 0)
			m_config.m_vif.rstn <= 1'b0;
			`uvm_info(get_name(), "Reset asserted (rstn=0)", UVM_LOW)
			
			// Hold reset for specified length
			repeat(seq_item.rstn_length) @(posedge m_config.m_vif.clk);
			
			// Deassert reset (rstn = 1)
			m_config.m_vif.rstn <= 1'b1;
			`uvm_info(get_name(), "Reset deasserted (rstn=1)", UVM_LOW)
			
			seq_item_port.item_done();
			`uvm_info(get_name(), "Reset sequence completed", UVM_LOW)
		end
	endtask :run_phase


endclass : rst_driver