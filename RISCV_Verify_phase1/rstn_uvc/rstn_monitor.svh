class rstn_monitor extends uvm_monitor;
	`uvm_component_utils(rstn_monitor)
	rstn_config m_config;
	uvm_analysis_port #(rstn_seq_item) m_analysis_port;

	function new(string name , uvm_component parent = null);
		super.new(name, parent);
		m_analysis_port = new("m_analysis_port", this);
		if(!uvm_config_db #(rstn_config)::get(this,"","config", m_config)) begin
			`uvm_fatal(get_name(), "Cannot find the rstn configuration!")
		end
		// m_analysis_port = new("m_analysis_port", this);
	endfunction : new

	function void build_phase(uvm_phase phase);
		super.build_phase(phase);
	endfunction : build_phase

	task run_phase(uvm_phase phase);
		rstn_seq_item seq_item;
		int unsigned clocks;
		logic rstn;

		forever begin
			rstn = m_config.m_vif.rstn;
			@(negedge m_config.m_vif.clk);
			while(rstn == m_config.m_vif.rstn) begin
				@(negedge m_config.m_vif.clk);
				clocks++;
			end
			seq_item = rstn_seq_item::type_id::create("seq_item");
			seq_item.rstn_value = m_config.m_vif.rstn;
			seq_item.clks = clocks;
			m_analysis_port.write(seq_item);
			clocks = 1;
		end
		endtask : run_phase
endclass : rstn_monitor