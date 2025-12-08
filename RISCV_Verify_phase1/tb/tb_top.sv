module tb_top;

    // Include basic packages
    import uvm_pkg::*;
    `include "uvm_macros.svh"

    // Include optional packages
    import tb_pkg::*;

    
    import common::*;

    // uVC TB signal variables
    // Inputs
    logic tb_clk;
    logic tb_rstn;
    instruction_type tb_instruction;
    logic [31:0] tb_pc;
    logic tb_write_en;
    logic [4:0] tb_write_id;
    logic [31:0] tb_write_data;
    branch_predict_type tb_branch_in;
    // Outputs
    branch_predict_type tb_branch_out;
	logic [4:0] tb_reg_rd_id;
	logic [31:0] tb_pc_out;
	logic [31:0] tb_read_data1;
	logic [31:0] tb_read_data2;
	logic [31:0] tb_immediate_data;
	logic [31:0] tb_debug_reg[0:REGISTER_FILE_SIZE-1];
	control_type tb_control_signals;


    // Instantiation of CLOCK uVC interface signal
    clk_if  i_clk_if();
    assign tb_clk = i_clk_if.clk;

    // Instantiation of RESET uVC interface signal
    rstn_if  i_rstn_if(.clk(tb_clk));
    assign tb_rstn = i_rstn_if.rstn;

    // Instantiation of id input signal
    id_if  i_id_if(.clk(tb_clk),.rstn(tb_rstn));
    assign tb_instruction = i_id_if.instruction;
    assign tb_pc = i_id_if.pc;
    assign tb_write_en = i_id_if.write_en;
    assign tb_write_id = i_id_if.write_id;
    assign tb_write_data = i_id_if.write_data;
    assign tb_branch_in = i_id_if.branch_in;

    // Instantiation of id_out signal
    id_out_if  i_id_out_if(.clk(tb_clk),.rstn(tb_rstn));
    assign i_id_out_if.branch_out = tb_branch_out;
    assign i_id_out_if.reg_rd_id = tb_reg_rd_id;
    assign i_id_out_if.pc_out = tb_pc_out;
    assign i_id_out_if.read_data1 = tb_read_data1;
    assign i_id_out_if.read_data2 = tb_read_data2;
    assign i_id_out_if.immediate_data = tb_immediate_data;
    assign i_id_out_if.control_signals = tb_control_signals;
    assign i_id_out_if.debug_reg = tb_debug_reg;

    // Instantiation of
    decode_stage inst_decode_stage(/*AUTOINST*/
		// Outputs
		.branch_out		(tb_branch_out),
		.reg_rd_id		(tb_reg_rd_id), // Templated
		.pc_out		    (tb_pc_out),	 // Templated
		.read_data1		(tb_read_data1),	 // Templated
		.read_data2		(tb_read_data2),	 // Templated
		.immediate_data	(tb_immediate_data), // Templated
		.debug_reg		(tb_debug_reg),
		.control_signals	(tb_control_signals), // Templated
		
		// Inputs
		.clk			(tb_clk),
		.reset_n		(tb_rstn),
		.instruction    (tb_instruction), // Templated
		.pc			    (tb_pc),	 // Templated
		.write_en		(tb_write_en), // Templated
		.write_id		(tb_write_id),	 // Templated
		.write_data		(tb_write_data),	 // Templated
		.branch_in		(tb_branch_in)); // Templated

    // Initialize TB configuration
    initial begin
        // Create TB top configuration and store it into UVM config DB.
        top_config  m_top_config;
        m_top_config = new("m_top_config");
        uvm_config_db #(top_config)::set(null,"tb_top","top_config", m_top_config);
        // Save all virtual interface instances into configuration
        m_top_config.m_clk_config.m_vif = i_clk_if;
        m_top_config.m_rstn_config.m_vif = i_rstn_if;
        m_top_config.m_id_config.m_vif = i_id_if;
        m_top_config.i_id_out_config.m_vif = i_id_out_if;
    end

    // Start UVM test_base environment
    initial begin
        run_test("basic_test");
    end

endmodule
