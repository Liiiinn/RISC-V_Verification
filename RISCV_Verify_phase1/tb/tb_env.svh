//------------------------------------------------------------------------------
// tb_env class
//
// This class represents the environment of the TB (Test Bench) which is
// composed by the different agents and the scoreboard
// The environment is initialized by getting the TB configuration from the UVM
// database and then creating all the components
//
// The environment connects the monitor analysis ports of the agents to the
// scoreboard
//
//------------------------------------------------------------------------------
class tb_env extends uvm_env;
    `uvm_component_utils(tb_env)

    // TB configuration object with all setup for the TB environment
    top_config   m_top_config;
    // clock instance with clock uVC.
    clk_agent  m_clk_agent;
    // reset instance with reset uVC.
    rstn_agent  m_rstn_agent;
    // id instance with id uVC.
    id_agent m_id_agent;
    // id output instance with id output uVC.
    id_out_agent m_id_out_agent;
    // scoreboard scoreboard.
    id_scoreboard   m_id_scoreboard;

    //------------------------------------------------------------------------------
    // Creates and initializes an instance of this class using the normal
    // constructor arguments for uvm_component.
    //------------------------------------------------------------------------------
    function new (string name = "tb_env" , uvm_component parent = null);
        super.new(name,parent);
        // Get TOP TB configuration from UVM DB
        if ((uvm_config_db #(top_config)::get(null, "tb_top", "top_config", m_top_config))==0) begin
            `uvm_fatal(get_name(),"Cannot find <top_config> TB configuration!")
        end
    endfunction : new

    //------------------------------------------------------------------------------
    // Build all the components in the TB environment
    //------------------------------------------------------------------------------
    function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        // Build all TB VC's
        uvm_config_db #(clk_config)::set(this,"m_clk_agent*","config", m_top_config.m_clk_config);
        m_clk_agent = clk_agent::type_id::create("m_clk_agent",this);
        uvm_config_db #(rstn_config)::set(this,"m_rstn_agent*","config", m_top_config.m_rstn_config);
        m_rstn_agent = rstn_agent::type_id::create("m_rstn_agent",this);
        uvm_config_db #(id_out_config)::set(this,"m_id_out_agent*","config", m_top_config.m_id_out_config);
        m_id_out_agent = id_out_agent::type_id::create("m_id_out_agent",this);
        uvm_config_db #(id_config)::set(this,"m_id_agent*","config", m_top_config.m_id_config);
        m_id_agent = id_agent::type_id::create("m_id_agent",this);
        // Build scoreboard components
        m_id_scoreboard = id_scoreboard::type_id::create("m_id_scoreboard",this);
    endfunction : build_phase

    //------------------------------------------------------------------------------
    // This function is used to connection the uVC monitor analysis ports to the scoreboard
    //------------------------------------------------------------------------------
    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        // Making all connection all analysis ports to scoreboard
        m_rstn_agent.m_monitor.m_analysis_port.connect(m_scoreboard.m_rstn_ap);
        m_id_agent.m_monitor.m_analysis_port.connect(m_scoreboard.m_id_ap);
        m_id_out_agent.m_monitor.m_analysis_port.connect(m_scoreboard.m_id_out_ap);
    endfunction : connect_phase

endclass : tb_env
