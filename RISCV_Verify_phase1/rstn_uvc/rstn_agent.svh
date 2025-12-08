class rstn_agent extends uvm_agent;
	`uvm_component_utils(rstn_agent)

	uvm_sequencer #(rstn_seq_item) m_sequencer;
	rstn_monitor m_monitor;
	rst_driver m_driver;
	rstn_config m_config;

	function new(string name, uvm_component parent = null);
		super.new(name, parent);
	endfunction : new

	function void build_phase(uvm_phase phase);
		super.build_phase(phase);
		// Read the uVC configuration object from UVM config DB.
		if(!uvm_config_db #(rstn_config)::get(this,"","rstn_config", m_config)) begin
			`uvm_fatal(get_name(), "Cannot find the rstn configuration!")
		end
		// Store uVC configuration into UVM config DB used by the uVC.
		uvm_config_db #(rstn_config)::set(this,"m_driver","rstn_config", m_config);
		if(m_config.is_active == UVM_ACTIVE)begin
			m_sequencer = uvm_sequencer #(rstn_seq_item)::type_id::create("rstn_sequencer", this);
			m_driver = rst_driver::type_id::create("rstn_driver", this);
		end
		if(m_config.has_monitor == UVM_ACTIVE) begin
			m_monitor = rstn_monitor::type_id::create("rstn_monitor", this);
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
      	`uvm_info(get_name(),$formatf("RESET agent is alive"),UVM_LOW)
    endfunction : end_of_elaboration_phase
endclass : rstn_agent