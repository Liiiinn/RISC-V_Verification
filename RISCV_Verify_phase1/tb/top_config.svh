class top_config extends uvm_object;
	`uvm_object_params_utils(top_config)

 	//clock_configuration instance for clock agent 
 	clk_config m_clk_config;
 	rstn_config m_rstn_config;
 	id_config m_id_config;
 	id_out_config m_id_out_config;
	

 	function new(string name = "top_config");
		super.new(name);
 	  	m_clk_config = new("m_clk_config");
 	  	m_clk_config.is_active = 1;
 	  	m_clk_config.clk_period = 10;

 	  	m_reset_config = new("m_reset_config");
 	  	m_reset_config.is_active = 1;
 	  	m_reset_config.has_monitor = 1;

 	  	m_id_config = new("m_id_config");
 	  	m_id_config.is_active = 1;
 	  	m_id_config.has_monitor = 1;

 	  	m_id_out_config = new("m_id_out_config");
 	    m_id_out_config.is_active = 0;   // passive agent
 	    m_id_out_config.has_monitor = 1;

 	endfunction : new

endclass : top_config



