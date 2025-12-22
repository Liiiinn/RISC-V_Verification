import uvm_pkg::*;
`include "uvm_macros.svh"

class rst_driver extends uvm_driver #(rstn_seq_item);
    `uvm_component_utils(rst_driver)
	rstn_config m_config; // clarification should before utils
	

	function new(string name, uvm_component parent = null);
		super.new(name, parent);
		if(!uvm_config_db #(rstn_config)::get(this,"","config", m_config)) begin
			`uvm_fatal(get_name(), "Cannot find the rstn configuration!")
		end
	endfunction 

	function void build_phase(uvm_phase phase);
		super.build_phase(phase);
	endfunction : build_phase

	virtual task run_phase(uvm_phase phase);
		rstn_seq_item seq_item;

		m_config.m_vif.rstn <= 1'b1;
        `uvm_info(get_name(), "RSTN driver initialized to 1", UVM_FULL)

		forever begin
			seq_item_port.get_next_item(seq_item);
        	`uvm_info(get_name(), $sformatf("Received reset sequence: delay=%0d, length=%0d, value=%0d", seq_item.rstn_delay, seq_item.rstn_length, seq_item.rstn_value), UVM_FULL)
			
			// for(int nn=0; nn< seq_item.rstn_delay; nn++) begin
			// 	@(posedge m_config.m_vif.clk);
			// end
			// if(seq_item.rstn_delay > 0) begin
			// 	@(posedge m_config.m_vif.clk);
			// end
			// m_config.m_vif.rstn <= 0;
			// `uvm_info(get_name(), "Activating RSTN", UVM_FULL)
			// for(int mm=0; mm< seq_item.rstn_length; mm++) begin
			// 	@(posedge m_config.m_vif.clk);
			// end
			// m_config.m_vif.rstn <= 1;
			// `uvm_info(get_name(), "Deactivating RSTN", UVM_FULL)
			// seq_item_port.put(seq_item);

			repeat(seq_item.rstn_delay) @(posedge m_config.m_vif.clk);
			m_config.m_vif.rstn <= seq_item.rstn_value;

			repeat(seq_item.rstn_length) @(posedge m_config.m_vif.clk);
			seq_item_port.item_done();
			`uvm_info(get_name(), "Reset sequence completed", UVM_LOW)
		end
	endtask :run_phase


endclass : rst_driver