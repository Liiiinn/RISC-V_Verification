class id_agent extends uvm_agent;
	`uvm_component_utils(id_agent)
	uvm_sequencer #(id_seq_item) m_sequencer;
	id_monitor m_monitor;
	id_driver m_driver;
	id_config m_config;

	function new(string name, uvm_component parent = null);
		super.new(name, parent);
	endfunction : new

	function void build_phase(uvm_phase phase);
		super.build_phase(phase);
		if(!uvm_config_db #(id_config)::get(this,"","config", m_config)) begin
			`uvm_fatal(get_name(), "Cannot find the id configuration!")
		end
		uvm_config_db #(id_config)::set(this,"m_driver","m_config", m_config);
		if(m_config.is_active == UVM_ACTIVE)begin
			m_sequencer = uvm_sequencer #(id_seq_item)::type_id::create("id_sequencer", this);
			m_driver = id_driver::type_id::create("id_driver", this);
		end
		if(m_config.has_monitor) begin
			m_monitor = id_monitor::type_id::create("id_monitor",this);
		end

	endfunction : build_phase

	function void connect_phase(uvm_phase phase);
		super.connect_phase(phase);
		if(m_config.is_active == UVM_ACTIVE) begin
			m_driver.seq_item_port.connect(m_sequencer.seq_item_export);
		end
	endfunction : connect_phase

	function void end_of_elaboration_phase(uvm_phase phase);
		super.end_of_elaboration_phase(phase);
	endfunction : end_of_elaboration_phase
endclass : id_agent