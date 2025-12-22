import uvm_pkg::*;
`include "uvm_macros.svh"

class clk_driver extends uvm_driver;
  	`uvm_component_utils(clk_driver)

	clk_config m_config;
	function new(string name = "clk_dirver", uvm_component parant = null);
		super.new(name, parant);
	endfunction 

    function void build_phase(uvm_phase phase);
      	super.build_phase(phase);
		if(!uvm_config_db #(clk_config)::get(this, "", "m_config", m_config)) begin
			`uvm_fatal(get_name(), "Cannot find the VC configuration!")
		end
    endfunction : build_phase

    virtual task run_phase(uvm_phase phase);
        `uvm_info(get_name(), $sformatf("Clock Driver is running with clock period: %0d ns", m_config.clk_period), UVM_MEDIUM)
        phase.raise_objection(this);
		m_config.m_if.clk <= 0;

		// ✅ 添加调试信息
    	`uvm_info(get_name(), "Clock driver starting to toggle clock", UVM_LOW)

        forever begin
        	#(m_config.clk_period/2);
            m_config.m_if.clk <= ~m_config.m_if.clk;

			// ✅ 添加调试信息（每 10 个时钟周期打印一次）
        	if ($time % (m_config.clk_period * 10) == 0)
            `uvm_info(get_name(), $sformatf("Clock toggling at time %0t", $time), UVM_DEBUG)
        end
    endtask : run_phase

endclass : clk_driver