import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

`uvm_analysis_imp_decl(_scoreboard_rstn) //extent to uvm_analysis_imp_scoreboard_rstn #(T, IMP)
`uvm_analysis_imp_decl(_scoreboard_id)
`uvm_analysis_imp_decl(_scoreboard_exp_id_out)
`uvm_analysis_imp_decl(_scoreboard_act_id_out)

class id_scoreboard extends uvm_component;
    `uvm_component_utils(id_scoreboard)
    uvm_analysis_imp_scoreboard_rstn #(rstn_seq_item,id_scoreboard) m_rstn_ap;
    uvm_analysis_imp_scoreboard_id #(id_seq_item,id_scoreboard) m_act_id_ap;
    uvm_analysis_imp_scoreboard_exp_id_out #(id_out_seq_item,id_scoreboard) m_exp_id_out_ap;  // from reference model
    uvm_analysis_imp_scoreboard_act_id_out #(id_out_seq_item,id_scoreboard) m_act_id_out_ap;  // from DUT monitor

    virtual clk_if vif;
    clk_config m_clk_config;
    
    // Queues to store transactions
    // Write_* functions will push_back transactions into these queues
    // Compare task will pop_front transactions from these queues for comparison
    id_out_seq_item exp_out_q[$];
    id_out_seq_item act_out_q[$];
    id_seq_item act_in_q[$];
    rstn_seq_item rstn_q[$];

    // input variables bound to coverage
    bit reset_n;
    instruction_type instr;
    bit write_en;
    bit [31:0]write_data;
    bit [4:0]write_id;
    bit branch_in;
    bit [31:0]pc;
        // details inside instruction_type
    bit opcode;
    bit [2:0] funct3;
    bit [6:0] funct7;
    bit [4:0] rd;
    bit [4:0] rs1;
    bit [4:0] rs2;

    // output variables bound to coverage
    bit[4:0] reg_rd_id;
    bit[31:0] immediate_data,read_data1,read_data2;
    control_type control_signals;
    bit branch_out;
    bit [31:0] pc_out;



    covergroup id_in_covergroup @(posedge vif.clk);
        reset_cp: coverpoint reset_n {
            bins reset = {0};
            bins run = {1};
        };
        write_enable_cp: coverpoint write_en{
            bins write = {1};
            bins no_write = {0};
        };
        write_data_cp: coverpoint write_data{
            // Idea: 可能还需要考虑特殊数据
            bins data_0 = {0};
            bins data_pos = {[1:$]};
            bins data_neg = {[-1:-2147483648]};
        };
        write_id_cp : coverpoint write_id{
            bins id_0 = {0};
            bins id_legal[] = {[1:31]};
        };
        // instruction fields coverage
        opcode_cp: coverpoint opcode {
            bins R_type = {7'b0110011};
            bins I_type = {7'b0010011, 7'b0000011, 7'b1100111};
            bins S_type = {7'b0100011};
            bins B_type = {7'b1100011};
            bins U_type = {7'b0110111, 7'b0010111};
            bins J_type = {7'b1101111};
        };
        funct3_cp : coverpoint funct3{
            bins funct3_000 = {3'b000};
            bins funct3_001 = {3'b001};
            bins funct3_010 = {3'b010};
            bins funct3_011 = {3'b011};
            bins funct3_100 = {3'b100};
            bins funct3_101 = {3'b101};
            bins funct3_110 = {3'b110};
            bins funct3_111 = {3'b111};
        };
        funct7_cp : coverpoint funct7{
            bins funct7_0000000 = {7'b0000000};
            bins funct7_0100000 = {7'b0100000};
            bins funct7_0000001 = {7'b0000001};
        };
        rd_cp : coverpoint rd{
            bins rd_0 = {0};
            bins rd_id[] = {[1:31]};
        };
        rs1_cp : coverpoint rs1{
            bins rs1_0 = {0};
            bins rs1_id[] = {[1:31]};
        };
        rs2_cp : coverpoint rs2{
            bins rs2_0 = {0};
            bins rs2_id[] = {[1:31]};
        };
    endgroup: id_in_covergroup

    covergroup id_out_covergroup @(posedge vif.clk);
        // deocde ouput coverage:
        im_cp : coverpoint immediate_data{
            // Idea: 可能还需要考虑mul和div的溢出
            bins imm_0 = {0};
            bins imm_pos = {[1:$]};
            bins imm_neg = {[-1:-2147483648]};
        };
        reg_rd_id_cp : coverpoint reg_rd_id{
            bins rd_0 = {0};
            bins rd_id[] = {[1:31]};
        };
        read_data1_cp : coverpoint read_data1{
            bins data1_0 = {0};
            bins data1_pos = {[1:$]};
            bins data1_neg = {[-1:-2147483648]};
        };
        read_data2_cp : coverpoint read_data2{
            bins data2_0 = {0};
            bins data2_pos = {[1:$]};
            bins data2_neg = {[-1:-2147483648]};
        };
        // control signals covergroup
        alu_cp : coverpoint control_signals.alu_op{
            bins alu_op_ADD = {ALU_ADD};
            bins alu_op_SUB = {ALU_SUB};
            bins alu_op_SLL = {ALU_SLL};
            bins alu_op_SLT = {ALU_SLT};
            bins alu_op_SLTU = {ALU_SLTU};
            bins alu_op_XOR = {ALU_XOR};
            bins alu_op_OR = {ALU_OR};
            bins alu_op_AND = {ALU_AND};
            bins alu_op_SRL = {ALU_SRL};
            bins alu_op_SRA = {ALU_SRA};
            bins alu_op_MUL = {ALU_MUL};
            bins alu_op_DIV = {ALU_DIV};
            bins alu_op_DIVU = {ALU_DIVU};
            bins alu_op_REM = {ALU_REM};
            bins alu_op_REMU = {ALU_REMU};
            bins alu_op_PASS = {ALU_PASS};
            bins alu_op_MULH = {ALU_MULH};
        };
        alu_src_cp : coverpoint control_signals.alu_src{
            bins alu_src_0 = {0};
            bins alu_src_1 = {1};
        };
        mem_read_cp : coverpoint control_signals.mem_read{
            bins mem_read_0 = {0};
            bins mem_read_1 = {1};
        };
        mem_write_cp : coverpoint control_signals.mem_write{
            bins mem_write_0 = {0};
            bins mem_write_1 = {1};
        };
        reg_write_cp : coverpoint control_signals.reg_write{
            bins reg_write_0 = {0};
            bins reg_write_1 = {1};
        };
        mem_to_reg_cp : coverpoint control_signals.mem_to_reg{
            bins mem_to_reg_0 = {0};
            bins mem_to_reg_1 = {1};
        };
        branch_cp : coverpoint control_signals.is_branch{
            bins is_branch_0 = {0};
            bins is_branch_1 = {1};
        };
        jump_cp : coverpoint control_signals.is_jump{
            bins is_jump_0 = {0};
            bins is_jump_1 = {1};
        };
        jumpr_cp : coverpoint control_signals.is_jumpr{
            bins is_jumpr_0 = {0};
            bins is_jumpr_1 = {1};
        };
        lui_cp : coverpoint control_signals.is_lui{
            bins is_lui_0 = {0};
            bins is_lui_1 = {1};
        };
        auipc_cp : coverpoint control_signals.is_auipc{
            bins is_auipc_0 = {0};
            bins is_auipc_1 = {1};
        };
        mul_cp: coverpoint control_signals.is_mul{
            bins is_mul_0 = {0};
            bins is_mul_1 = {1};
        };
    endgroup: id_out_covergroup

    covergroup cross_covergroup @(posedge vif.clk);
        write_cross: cross (write_en, write_id);
        // 待补充
    endgroup: cross_covergroup



    function new(string name = "id_scoreboard", uvm_component parent = null);
        super.new(name,parent);
        m_rstn_ap = new("m_rstn_ap", this);
        m_exp_id_out_ap = new("m_exp_id_out_ap", this);
        m_act_id_out_ap = new("m_act_id_out_ap", this);
        m_act_id_ap = new("m_act_id_ap",this);
        id_in_covergroup = new();
        id_out_covergroup = new();
        cross_covergroup = new();
    endfunction 

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(clk_config)::get(this, "", "m_clk_config", m_clk_config))
            `uvm_fatal("NOCONFIG", "No clk_config found for scoreboard");
        vif = m_clk_config.m_if;
        if (vif == null) 
            `uvm_fatal("NOVIF", "Scoreboard: vif is NULL!");
    endfunction

    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
    endfunction

    // monitor DUT reset transaction
    function void write_scoreboard_rstn(rstn_seq_item t);
        `uvm_info(get_name(), $sformatf("Received reset transaction:\n%s", t.sprint()), UVM_HIGH);
        rstn_q.push_back(t);
    endfunction

    // monitor DUT inputs transaction
    function void write_scoreboard_id(id_seq_item t); 
        `uvm_info(get_name(), $sformat("Received DUT inputs transanction :\n%s", t.sprint()), UVM_HIGH);
        act_in_q.push_back(t);
    endfunction

    // receive expected transaction from reference model
    function void write_scoreboard_exp_id_out(id_out_seq_item t);
        `uvm_info(get_name(), $sformatf("Received expected transaction: \n%s", t.sprint()), UVM_HIGH);
        exp_out_q.push_back(t);
    endfunction 

    // receive actual transaction from  DUT monitor
    function void write_scoreboard_act_id_out(id_out_seq_item t);
        `uvm_info(get_name(), $sformatf("Received actual transaction: \n%s", t.sprint()), UVM_HIGH);
        act_out_q.push_back(t);
    endfunction



    task compare();
        forever begin
            if(exp_out_q.size()>0 && act_out_q.size() >0) begin
                id_seq_out_item exp_item,act_item;
                exp_item = exp_out_q.pop_front();
                act_item = act_out_q.pop_front();

                // Pass-through signals comparison
                if (act_item.pc_out == exp_item.pc)
                    `uvm_info(get_name(), $sformatf("PC passthrough OK: %0h", act_item.pc_out), UVM_HIGH);
                else
                    `uvm_error(get_name(), $sformatf("PC mismatch! Expected: %0h, Got: %0h", exp_item.pc, act_item.pc_out), UVM_HIGH);
                if (act_item.branch_out == exp_item.branch_in)
                    `uvm_info(get_name(), $sformatf("branch_in passthrough OK: %0b", act_item.branch_out), UVM_HIGH);
                else
                    `uvm_error(get_name(), $sformatf("branch_in mismatch! Expected: %0b, Got: %0b", exp_item.branch_in, act_item.branch_out), UVM_HIGH);

                // Input signals comparison?
                if(exp_item.instr == act_item.instr) begin
                    `uvm_info(get_name(), $sformatf("Instruction match: 0x%0h", exp_item.instr), UVM_HIGH);
                    id_in_covergroup.opcode.sample();//trigger opcode coverage sampling
                end
                else
                    `uvm_error(get_name(), $sformatf("Instruction mismatch! Expected: 0x%0h, Got: 0x%0h", exp_item.instr, act_item.instr), UVM_HIGH);
                if(exp_item.reg_rd_id == act_item.reg_rd_id)
                    `uvm_info(get_name(), $sformatf("reg_rd_id match: %0d", exp_item.reg_rd_id), UVM_HIGH);
                else
                    `uvm_error(get_name(), $sformatf("reg_rd_id mismatch! Expected: %0d, Got: %0d", exp_item.reg_rd_id, act_item.reg_rd_id), UVM_HIGH);
                if(exp_item.read_data1 == act_item.read_data1)
                    `uvm_info(get_name(), $sformatf("read_data1 match: %0d", exp_item.read_data1), UVM_HIGH);
                else
                    `uvm_error(get_name(), $sformatf("read_data1 mismatch! Expected: %0d, Got: %0d", exp_item.read_data1, act_item.read_data1), UVM_HIGH);
                if(exp_item.read_data2 == act_item.read_data2)
                    `uvm_info(get_name(), $sformatf("read_data2 match: %0d", exp_item.read_data2), UVM_HIGH);
                else
                    `uvm_error(get_name(), $sformatf("read_data2 mismatch! Expected: %0d, Got: %0d", exp_item.read_data2, act_item.read_data2), UVM_HIGH);
                if(exp_item.control_signals == act_item.control_signals)
                    `uvm_info(get_name(), $sformatf("Control signals match: %0d", exp_item.control_signals), UVM_HIGH);
                else
                    `uvm_error(get_name(), $sformatf("Control signals mismatch! Expected: %0d, Got: %0d", exp_item.control_signals, act_item.control_signals), UVM_HIGH);
                if(exp_item.immediate_data == act_item.immediate_data)
                    `uvm_info(get_name(), $sformatf("Immediate match: %0d", exp_item.immediate_data), UVM_HIGH);
                else
                    `uvm_error(get_name(), $sformatf("Immediate mismatch! Expected: %0d, Got: %0d", exp_item.immediate_data, act_item.immediate_data), UVM_HIGH);
                // trigger coverage sampling
                control_signals = act_item.control_signals;
                reg_rd_id = act_item.reg_rd_id;
                immediate_data = act_item.immediate_data;
                read_data1 = act_item.read_data1;
                read_data2 = act_item.read_data2;
                branch_out = act_item.branch_out;
                pc_out = act_item.pc_out;
                id_in_covergroup.sample() ;     
                id_out_covergroup.sample();
                cross_covergroup.sample();
            end
            else begin
                @(posedge vif.clk); // wait for some time before checking again
            end
        end
        forever begin
            if(act_in_q.size() > 0) begin
                id_seq_item act_in_item;
                act_in_item = act_in_q.pop_front();
                opcode = act_in_item.instruction.opcode;
                funct3 = act_in_item.instruction.funct3;
                funct7 = act_in_item.instruction.funct7;
                write_en = act_in_item.write_en;
                write_data = act_in_item.write_data;
                write_id = act_in_item.write_id;
                branch_in = act_in_item.branch_in;
                pc = act_in_item.pc;
                id_in_covergroup.sample();
                id_out_covergroup.sample();
                cross_covergroup.sample();
            end
            else begin
                @(posedge vif.clk); // wait for some time before checking again
            end
        end
    endtask


    virtual task run_phase(uvm_phase phase);
        phase.raise_objection(this);
        fork
            compare();
        join_none
        phase.drop_objection(this);
    endtask
    //outputs 
    virtual function void check_phase(uvm_phase phase);
        super.check_phase(phase);
    
        $display("*****************************************************");
        if (id_in_covergroup.get_coverage() == 100.0) begin
            $display("INPUT COVERAGE (100.0%%) PASSED....");
        end
        else begin
            $display("INPUT COVERAGE FAILED!!!!!!!!!!!!!!!!!");
            $display("Coverage = %0f", id_in_covergroup.get_coverage());
        end
        if (id_out_covergroup.get_coverage() == 100.0) begin
            $display("OUTPUT COVERAGE (100.0%%) PASSED....");
        end
        else begin
            $display("OUTPUT COVERAGE FAILED!!!!!!!!!!!!!!!!!");
            $display("Coverage = %0f", id_out_covergroup.get_coverage());
        end
        if (cross_covergroup.get_coverage() == 100.0) begin
            $display("CROSS COVERAGE (100.0%%) PASSED....");
        end
        else begin
            $display("CROSS COVERAGE FAILED!!!!!!!!!!!!!!!!!");
            $display("Coverage = %0f", cross_covergroup.get_coverage());
        end
        $display("*****************************************************");
        if (id_in_covergroup.get_coverage() == 100.0 && id_out_covergroup.get_coverage() == 100.0 && cross_covergroup..get_coverage() == 100.0) begin
            $display("FUNCTIONAL COVERAGE (100.0%%) PASSED....");
        end
        else begin
            $display("FUNCTIONAL COVERAGE FAILED!!!!!!!!!!!!!!!!!");
            $display("SEE DETAILS UPON");
        end
        $display("*****************************************************");

    endfunction
endclass : id_scoreboard


