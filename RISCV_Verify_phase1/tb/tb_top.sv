`timescale 1ns/1ps

module tb_top;
    // Include basic packages
    import uvm_pkg::*;
    import tb_pkg::*;
    `include "uvm_macros.svh"

    // Include optional packages
     
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
    // assign i_id_out_if.debug_reg = tb_debug_reg;

    // Instantiation
    decode_stage inst_decode_stage(/*AUTOINST*/
		// Outputs
		.branch_out		(tb_branch_out),
		.reg_rd_id		(tb_reg_rd_id), // Templated
		.pc_out		    (tb_pc_out),	 // Templated
		.read_data1		(tb_read_data1),	 // Templated
		.read_data2		(tb_read_data2),	 // Templated
		.immediate_data	(tb_immediate_data), // Templated
		// .debug_reg		(tb_debug_reg),
		.control_signals	(tb_control_signals), // Templated
		
		// Inputs
		.clk			(tb_clk),
		.reset_n		(tb_rstn),
		.instruction    (tb_instruction), // Templated
		.pc			    (tb_pc),	 // Templated
		.write_en		(tb_write_en), // Templated
		.write_id		(tb_write_id),	 // Templated
		.write_data		(tb_write_data),	 // Templated
		.branch_in		(tb_branch_in) // Templated
    );

    // Clock generation - Traditional approach
    initial begin
        $display("[TB_TOP @ %0t] === CLOCK GENERATION TEST START ===", $time);
        $display("[TB_TOP @ %0t] Initializing clock to 0", $time);
        i_clk_if.clk = 1'b0;
        $display("[TB_TOP @ %0t] Clock initialized, value = %0b", $time, i_clk_if.clk);
    end
    
    // Separate always block for clock generation (most reliable method)
    integer clk_cycle = 0;
    always begin
        #5;
        i_clk_if.clk = 1'b0;
        if (clk_cycle < 10) $display("[TB_TOP @ %0t] clk = 0", $time);
        
        #5;
        i_clk_if.clk = 1'b1;
        clk_cycle++;
        if (clk_cycle <= 10) $display("[TB_TOP @ %0t] clk = 1 (cycle %0d)", $time, clk_cycle);
    end
    
    // Simple clock monitor
    integer clk_edges;
    initial begin
        clk_edges = 0;
        forever begin
            @(i_clk_if.clk);
            clk_edges++;
            if (clk_edges <= 10)
                $display("[TB_TOP @ %0t] Clock edge #%0d, clk=%0b", $time, clk_edges, i_clk_if.clk);
        end
    end

    // Monitor clock toggles for debug (DISABLED - may interfere with clock generation)
    // initial begin
    //     int clk_count = 0;
    //     forever begin
    //         @(i_clk_if.clk);  // 检测任何变化（上升或下降）
    //         clk_count++;
    //         if (clk_count <= 10)
    //             $display("[TB_TOP @ %0t ps = %0.1f ns] Clock toggle #%0d, clk=%0b", $time, $time/1000.0, clk_count, i_clk_if.clk);
    //     end
    // end

    // Initialize TB configuration
    initial begin
        // Create TB top configuration and store it into UVM config DB.
        top_config  m_top_config;
        m_top_config = new("m_top_config");
        i_rstn_if.rstn = 1; 
        uvm_config_db #(top_config)::set(null,"tb_top","top_config", m_top_config);
        // Save all virtual interface instances into configuration
        m_top_config.m_clk_config.m_if = i_clk_if;
        m_top_config.m_rstn_config.m_vif = i_rstn_if;
        m_top_config.m_id_config.m_vif = i_id_if;
        m_top_config.m_id_out_config.m_vif = i_id_out_if;
    end

    // Start UVM test_base environment
    initial begin
        run_test("basic_test");
    end

    initial begin
        #100000; // 100us timeout
        $display("================================");
        $display("ERROR: Simulation timeout!");
        $display("================================");
        $fatal(1, "Test did not complete in time");
    end

    // Monitor tb_clk signal and print every 10 cycles
    // initial begin
    //     int clk_cnt = 0;
    //     forever begin
    //         @(posedge tb_clk);
    //         clk_cnt++;

    //         if (clk_cnt % 10 == 0) begin
    //             $display("[%0t][TB_CLK_MON] Observed %0d posedges of tb_clk",
    //                     $time, clk_cnt);
    //         end
    //     end
    // end

    int clk_count = 0;
    always @(posedge tb_clk) begin
        clk_count++;
        if (clk_count % 100 == 0)
            $display("[%0t] Clock count = %0d, rstn = %0b", $time, clk_count, tb_rstn);
    end

endmodule
