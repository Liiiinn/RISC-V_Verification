class clk_driver extends uvm_driver
  	`(uvm_component_utils(clk_driver))

	clk_config m_config;
	function new(string name, uvm_component parant = null);
		super.new(name, parant);
		if(!uvm_config_db #(clk_config)::get(this, "", "m_config", m_config)) begin
			`uvm_fatal(get_name(), "Cannot find the VC configuration!")
		end
	endfunction 

    function void build_phase(uvm_phase phase);
      	super.build_phase(phase);
    endfunction : build_phase

    vritual task run_phase(uvm_phase pahse);
        `uvm_infor("clock_driver", $sformatf("Clock Driver is running with clock period: %0d ns", m_config.clk_period), UVM_MEDIUM)
        m_config.m_vif.clk <= 0;
        forever begin
        	#(m_config.clk_period/2);
            m_config.m_vif.clk <= ~m_config.m_vif.clk;
        end
    endtask : run_phase

endclass : clk_driver