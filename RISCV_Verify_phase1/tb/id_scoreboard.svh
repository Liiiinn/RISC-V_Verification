import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

`uvm_analysis_imp_decl(_scoreboard_rstn) //extent to uvm_analysis_imp_scoreboard_rstn #(T, IMP)
`uvm_analysis_imp_decl(_scoreboard_id)
`uvm_analysis_imp_decl(_scoreboard_exp_id_out)
`uvm_analysis_imp_decl(_scoreboard_act_id_out)

class id_scoreboard extends uvm_component;
    `uvm_component_utils(id_scoreboard);
    uvm_analysis_imp_scoreboard_rstn #(rstn_seq_item,id_scoreboard) m_rstn_ap;
    uvm_analysis_imp_scoreboard_id #(id_seq_item,id_scoreboard) m_act_id_ap;
    uvm_analysis_imp_scoreboard_exp_id_out #(id_out_seq_item,id_scoreboard) m_exp_id_out_ap;  // from reference model
    uvm_analysis_imp_scoreboard_act_id_out #(id_out_seq_item,id_scoreboard) m_act_id_out_ap;  // from DUT monitor

    virtual clk_if vif;
    id_seq_item input_history_q[$];
    clk_config m_clk_config;
    
    // Queues to store transactions
    // Write_* functions will push_back transactions into these queues
    // Compare task will pop_front transactions from these queues for comparison
    rstn_seq_item rstn_q[$];
    id_seq_item act_in_q[$];
    id_out_seq_item exp_out_q[$];
    id_out_seq_item act_out_q[$];

    // reset variable bound to coverage
    bit reset_n;

    // input variables bound to coverage
    bit write_en;
    logic signed [31:0]write_data;
    bit [4:0]write_id;
    bit branch_in;
    bit [31:0]pc;
        // details inside instruction_type
    bit [6:0] opcode;
    bit [2:0] funct3;
    bit [6:0] funct7;
    bit [4:0] rd;
    bit [4:0] rs1;
    bit [4:0] rs2;

    // output variables bound to coverage
    bit[4:0] reg_rd_id;
    logic signed [31:0] immediate_data,read_data1,read_data2;
    control_type control_signals;
    bit branch_out;
    bit [31:0] pc_out;
    uvm_event end_of_stimulus_ev;


    covergroup id_rstn_covergroup;
        reset_cp: coverpoint reset_n{
            bins reset = {0};
            bins run = {1};
        }
    endgroup

    covergroup id_in_covergroup;
        write_enable_cp: coverpoint write_en{
            bins write = {1};
            bins no_write = {0};
        }
        write_data_cp: coverpoint write_data{
            // Idea: 可能还需要考虑特殊数据
            bins data_0 = {0};
            bins data_pos = {[1:$]};
            bins data_neg = {[-2147483648:-1]};
        }
        write_id_cp : coverpoint write_id{
            bins id_0 = {0};
            bins id_legal[] = {[1:31]};
        }
        // instruction fields coverage
        opcode_cp: coverpoint opcode {
            bins R_type = {7'b0110011};
            bins I_type = {7'b0010011, 7'b0000011, 7'b1100111};
            bins S_type = {7'b0100011};
            bins B_type = {7'b1100011};
            bins U_type = {7'b0110111, 7'b0010111};
            bins J_type = {7'b1101111};
            bins illegal = default;
        }
        funct3_cp : coverpoint funct3{
            bins funct3_000 = {3'b000};
            bins funct3_001 = {3'b001};
            bins funct3_010 = {3'b010};
            bins funct3_011 = {3'b011};
            bins funct3_100 = {3'b100};
            bins funct3_101 = {3'b101};
            bins funct3_110 = {3'b110};
            bins funct3_111 = {3'b111};
        }
        funct7_cp : coverpoint funct7{
            bins funct7_0000000 = {7'b0000000};
            bins funct7_0100000 = {7'b0100000};
            bins funct7_0000001 = {7'b0000001};
        }
        rd_cp : coverpoint rd{
            bins rd_0 = {0};
            bins rd_id[] = {[1:31]};
        }
        rs1_cp : coverpoint rs1{
            bins rs1_0 = {0};
            bins rs1_id[] = {[1:31]};
        }
        rs2_cp : coverpoint rs2{
            bins rs2_0 = {0};
            bins rs2_id[] = {[1:31]};
        }
    endgroup: id_in_covergroup

    covergroup id_out_covergroup;
        // deocde ouput coverage:
        im_cp : coverpoint immediate_data{
            // Idea: 可能还需要考虑mul和div的溢出
            bins imm_0 = {0};
            bins imm_pos = {[1:$]};
            bins imm_neg = {[-2147483648:-1]};
        }
        reg_rd_id_cp : coverpoint reg_rd_id{
            bins rd_0 = {0};
            bins rd_id[] = {[1:31]};
        }
        read_data1_cp : coverpoint read_data1{
            bins data1_0 = {0};
            bins data1_pos = {[1:$]};
            bins data1_neg = {[-2147483648:-1]};
        }
        read_data2_cp : coverpoint read_data2{
            bins data2_0 = {0};
            bins data2_pos = {[1:$]};
            bins data2_neg = {[-2147483648:-1]};
        }
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
        }
        alu_src_cp : coverpoint control_signals.alu_src{
            bins alu_src_0 = {0};
            bins alu_src_1 = {1};
        }
        mem_read_cp : coverpoint control_signals.mem_read{
            bins mem_read_0 = {0};
            bins mem_read_1 = {1};
        }
        mem_write_cp : coverpoint control_signals.mem_write{
            bins mem_write_0 = {0};
            bins mem_write_1 = {1};
        }
        reg_write_cp : coverpoint control_signals.reg_write{
            bins reg_write_0 = {0};
            bins reg_write_1 = {1};
        }
        mem_to_reg_cp : coverpoint control_signals.mem_to_reg{
            bins mem_to_reg_0 = {0};
            bins mem_to_reg_1 = {1};
        }
        branch_cp : coverpoint control_signals.is_branch{
            bins is_branch_0 = {0};
            bins is_branch_1 = {1};
        }
        jump_cp : coverpoint control_signals.is_jump{
            bins is_jump_0 = {0};
            bins is_jump_1 = {1};
        }
        jumpr_cp : coverpoint control_signals.is_jumpr{
            bins is_jumpr_0 = {0};
            bins is_jumpr_1 = {1};
        }
        lui_cp : coverpoint control_signals.is_lui{
            bins is_lui_0 = {0};
            bins is_lui_1 = {1};
        }
        auipc_cp : coverpoint control_signals.is_auipc{
            bins is_auipc_0 = {0};
            bins is_auipc_1 = {1};
        }
        mul_cp: coverpoint control_signals.is_mul{
            bins is_mul_0 = {0};
            bins is_mul_1 = {1};
        }
    endgroup: id_out_covergroup

    covergroup cross_covergroup;
        write_cross         : cross write_en, write_id;
        opcode_funct3_cross : cross opcode, funct3;
        opcode_funct7_cross : cross opcode, funct7;
        branch_opcode_cross : cross opcode, branch_in;
        write_reg_cross     : cross write_en, write_id;
    endgroup: cross_covergroup



    function new(string name = "id_scoreboard", uvm_component parent = null);
        super.new(name,parent);
        m_rstn_ap = new("m_rstn_ap", this);
        m_exp_id_out_ap = new("m_exp_id_out_ap", this);
        m_act_id_out_ap = new("m_act_id_out_ap", this);
        m_act_id_ap = new("m_act_id_ap",this);
        id_rstn_covergroup = new();
        id_in_covergroup = new();
        id_out_covergroup = new();
        cross_covergroup = new();
    endfunction 

    function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        if (!uvm_config_db#(clk_config)::get(this, "", "config", m_clk_config))
            `uvm_fatal("NOCONFIG", "No clk_config found for scoreboard");
        
        vif = m_clk_config.m_if;
        if (vif == null) 
            `uvm_fatal("NOVIF", "Scoreboard: vif is NULL!");
        
        if (!uvm_config_db#(uvm_event)::get(this, "", "end_of_stimulus_ev", end_of_stimulus_ev)) begin
            `uvm_fatal("NOEVENT", "Scoreboard: end_of_stimulus_ev not set ");
        end
    endfunction

    function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
    endfunction

    // monitor DUT reset transaction
    function void write_scoreboard_rstn(rstn_seq_item t);
        `uvm_info(get_name(), $sformatf("Received reset transaction:\n%s", t.sprint()), UVM_HIGH);
        rstn_q.push_back(t);

        // ===== 采样reset覆盖 =====
        reset_n = t.rstn_value;
        id_rstn_covergroup.sample();
    endfunction

    // monitor DUT inputs transaction
    function void write_scoreboard_id(id_seq_item t); 
        `uvm_info(get_name(), $sformatf("Received DUT inputs transanction :\n%s", t.sprint()), UVM_HIGH);
        act_in_q.push_back(t);

        input_history_q.push_back(t);

        // ===== 采样输入覆盖 =====
        opcode      = t.instruction.opcode;
        funct3      = t.instruction.funct3;
        funct7      = t.instruction.funct7;
        rd          = t.instruction.rd;
        rs1         = t.instruction.rs1;
        rs2         = t.instruction.rs2;
        write_en    = t.write_en;
        write_data  = t.write_data;
        write_id    = t.write_id;
        branch_in   = t.branch_in;
        pc          = t.pc;

        id_in_covergroup.sample();
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

        // ===== 采样输出覆盖 =====
        reg_rd_id      = t.reg_rd_id;
        immediate_data = t.immediate_data;
        read_data1     = t.read_data1;
        read_data2     = t.read_data2;
        control_signals = t.control_signals;
        branch_out     = t.branch_out;
        pc_out         = t.pc_out;

        id_out_covergroup.sample();
    endfunction

    // 比较控制信号的函数
    function void compare_control_signals(control_type exp, control_type act, string prefix = "");
        bit has_mismatch = 0;
        string mismatch_details = "";
        
        // 逐个字段比较
        if (exp.alu_op !== act.alu_op) begin
            mismatch_details = {mismatch_details, 
                $sformatf("\n  [MISMATCH] alu_op: Expected=%s, Got=%s", 
                    exp.alu_op.name(), act.alu_op.name())};
            has_mismatch = 1;
        end
        
        if (exp.encoding !== act.encoding) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] encoding: Expected=%s, Got=%s",
                    exp.encoding.name(), act.encoding.name())};
            has_mismatch = 1;
        end
        
        if (exp.rs1_id !== act.rs1_id) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] rs1_id: Expected=%0d, Got=%0d",
                    exp.rs1_id, act.rs1_id)};
            has_mismatch = 1;
        end
        
        if (exp.rs2_id !== act.rs2_id) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] rs2_id: Expected=%0d, Got=%0d",
                    exp.rs2_id, act.rs2_id)};
            has_mismatch = 1;
        end
        
        if (exp.funct3 !== act.funct3) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] funct3: Expected=0b%03b, Got=0b%03b",
                    exp.funct3, act.funct3)};
            has_mismatch = 1;
        end
        
        if (exp.alu_src !== act.alu_src) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] alu_src: Expected=%0b, Got=%0b",
                    exp.alu_src, act.alu_src)};
            has_mismatch = 1;
        end
        
        if (exp.mem_read !== act.mem_read) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] mem_read: Expected=%0b, Got=%0b",
                    exp.mem_read, act.mem_read)};
            has_mismatch = 1;
        end
        
        if (exp.mem_write !== act.mem_write) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] mem_write: Expected=%0b, Got=%0b",
                    exp.mem_write, act.mem_write)};
            has_mismatch = 1;
        end
        
        if (exp.reg_write !== act.reg_write) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] reg_write: Expected=%0b, Got=%0b",
                    exp.reg_write, act.reg_write)};
            has_mismatch = 1;
        end
        
        if (exp.mem_to_reg !== act.mem_to_reg) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] mem_to_reg: Expected=%0b, Got=%0b",
                    exp.mem_to_reg, act.mem_to_reg)};
            has_mismatch = 1;
        end
        
        if (exp.is_branch !== act.is_branch) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] is_branch: Expected=%0b, Got=%0b",
                    exp.is_branch, act.is_branch)};
            has_mismatch = 1;
        end
        
        if (exp.is_jump !== act.is_jump) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] is_jump: Expected=%0b, Got=%0b",
                    exp.is_jump, act.is_jump)};
            has_mismatch = 1;
        end
        
        if (exp.is_jumpr !== act.is_jumpr) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] is_jumpr: Expected=%0b, Got=%0b",
                    exp.is_jumpr, act.is_jumpr)};
            has_mismatch = 1;
        end
        
        if (exp.is_lui !== act.is_lui) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] is_lui: Expected=%0b, Got=%0b",
                    exp.is_lui, act.is_lui)};
            has_mismatch = 1;
        end
        
        if (exp.is_auipc !== act.is_auipc) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] is_auipc: Expected=%0b, Got=%0b",
                    exp.is_auipc, act.is_auipc)};
            has_mismatch = 1;
        end
        
        if (exp.is_mul !== act.is_mul) begin
            mismatch_details = {mismatch_details,
                $sformatf("\n  [MISMATCH] is_mul: Expected=%0b, Got=%0b",
                    exp.is_mul, act.is_mul)};
            has_mismatch = 1;
        end
        
        // 如果有不匹配，打印详细信息
        if (has_mismatch) begin
            `uvm_error(get_name(), 
                $sformatf("%sControl signals mismatch:%s", prefix, mismatch_details))
        end else begin
            `uvm_info(get_name(), 
                $sformatf("%sControl signals match", prefix), UVM_HIGH)
        end
    endfunction


    task compare();
        // 运行时常量（可调整）
        localparam int QUEUE_WARN_DEPTH = 256; // 若队列过长，打印警告（方便定位丢包或不同步）
        forever begin
            // 1) 先处理 reset 事件（如果 reset 事件进队列，则优先处理）
            if (rstn_q.size() > 0) begin
                rstn_seq_item r_item = rstn_q.pop_front();
                if (r_item.rstn_value == 1'b0) begin
                    // 在 reset 期间清空所有队列，避免过时事务导致误报
                    exp_out_q.delete();
                    act_out_q.delete();
                    act_in_q.delete();
                    `uvm_info(get_name(), $sformatf("Reset asserted: queues flushed"), UVM_LOW);
                    // 等待一个时钟周期让系统稳定（可选）
                    @(posedge vif.clk);
                    continue;
                end
                // 如果是 deassertion，也可以记录信息（按需）
                `uvm_info(get_name(), $sformatf("Reset deasserted (value=%0b)", r_item.rstn_value), UVM_LOW);
            end

            // 2) 队列长度异常报警（帮助 debug 不匹配）
            if (exp_out_q.size() > QUEUE_WARN_DEPTH) begin
                `uvm_warning(get_name(), $sformatf("exp_out_q very deep: %0d", exp_out_q.size()));
            end
            if (act_out_q.size() > QUEUE_WARN_DEPTH) begin
                `uvm_warning(get_name(), $sformatf("act_out_q very deep: %0d", act_out_q.size()));
            end

            // 3) 当两侧都有输出可比时，逐对比 FIFO（基本假设：ref 与 DUT 输出顺序一致）
            if (exp_out_q.size() > 0 && act_out_q.size() > 0) begin
                id_out_seq_item exp_item = exp_out_q.pop_front();
                id_out_seq_item act_item = act_out_q.pop_front();

                id_seq_item input_item;
                logic [31:0] instruction_32bit;
                if (input_history_q.size() > 0) begin
                    input_item = input_history_q.pop_front();
                    // 重建 32-bit 指令
                    instruction_32bit = {
                        input_item.instruction.funct7,
                        input_item.instruction.rs2,
                        input_item.instruction.rs1,
                        input_item.instruction.funct3,
                        input_item.instruction.rd,
                        input_item.instruction.opcode
                    };
                end

                // ---- pass-through signals ----
                if (act_item.pc_out !== exp_item.pc_out) begin
                    `uvm_error(get_name(),
                        $sformatf("PC mismatch! Expected: 0x%0h, Got: 0x%0h (exp.pc, act.pc_out)",
                                exp_item.pc_out, act_item.pc_out));
                end
                else begin
                    `uvm_info(get_name(), $sformatf("PC passthrough OK: 0x%0h", act_item.pc_out), UVM_LOW);
                end

                if (act_item.branch_out !== exp_item.branch_out) begin
                    `uvm_error(get_name(),
                        $sformatf("branch_out mismatch! Expected: %0b, Got: %0b (exp.branch_out, act.branch_out)",
                                exp_item.branch_out, act_item.branch_out));
                end
                else begin
                    `uvm_info(get_name(), $sformatf("branch passthrough OK: %0b", act_item.branch_out), UVM_LOW);
                end

                // ---- main decode outputs comparison ----
                // instruction (如果 id_out 包含 instr 字段)
                // if ($isunknown(exp_item.instr) || $isunknown(act_item.instr)) begin
                //     `uvm_warning(get_name(), $sformatf("instr contains X/Z: exp=0x%0h act=0x%0h", exp_item.instr, act_item.instr));
                // end
                // if (exp_item.instr !== act_item.instr) begin
                //     `uvm_error(get_name(),
                //         $sformatf("Instruction mismatch! Expected: 0x%0h, Got: 0x%0h",
                //                 exp_item.instr, act_item.instr));
                // end

                // reg rd id
                if (exp_item.reg_rd_id !== act_item.reg_rd_id) begin
                    `uvm_error(get_name(),
                        $sformatf("reg_rd_id mismatch! Expected: %0d, Got: %0d",
                                exp_item.reg_rd_id, act_item.reg_rd_id));
                end

                // read data 1/2
                if (exp_item.read_data1 !== act_item.read_data1) begin
                    if($isunknown(exp_item.read_data1))begin
                        `uvm_warning(get_name(), $sformatf("read_data1 contains X/Z: exp=%0d act=%0d", exp_item.read_data1, act_item.read_data1));
                    end
                else begin
                    `uvm_error(get_name(),
                        $sformatf("read_data1 mismatch! Expected: %0d, Got: %0d",
                                exp_item.read_data1, act_item.read_data1));
                  end
                end
                if (exp_item.read_data2 !== act_item.read_data2) begin
                    if($isunknown(exp_item.read_data2))begin
                        `uvm_warning(get_name(), $sformatf("read_data2 contains X/Z: exp=%0d act=%0d", exp_item.read_data2, act_item.read_data2));
                    end
                else begin
                    `uvm_error(get_name(),
                        $sformatf("read_data2 mismatch! Expected: %0d, Got: %0d",
                                exp_item.read_data2, act_item.read_data2));
                  end
                end

                // control signals
                // compare_control_signals(exp_item.control_signals, act_item.control_signals, "    ");

                
                if (exp_item.control_signals !== act_item.control_signals) begin
                    `uvm_error(get_name(),
                        $sformatf("Control signals mismatch! \n Expected: %p, \n Got: %p, \n instruction: 0x%0b",
                                exp_item.control_signals, act_item.control_signals,instruction_32bit));
                end

                // immediate
                if (exp_item.immediate_data !== act_item.immediate_data) begin
                    `uvm_error(get_name(),
                        $sformatf("Immediate mismatch! Expected: %0d, Got: %0d",
                                exp_item.immediate_data, act_item.immediate_data));
                end
            end
            else begin
                // // exit condition
                // if($root.uvm_test_top.phase_done) begin
                //     `uvm_info(get_name(), "Scoreboard comparison task ending as phase is done", UVM_MEDIUM);
                //     break;
                // end
                // 如果任一队列为空，等一个时钟再继续检查
                @(posedge vif.clk);
            end
        end
    endtask


    virtual task run_phase(uvm_phase phase);
        `uvm_info(get_name(), "Scoreboard starting comparison task", UVM_MEDIUM)
        fork 
            compare();
        join_none  // Launch in background, don't wait
    endtask
    
    virtual function void check_phase(uvm_phase phase);
        super.check_phase(phase);
    
        $display("*****************************************************");
        if (id_rstn_covergroup.get_coverage() == 100.0) begin
            $display("RESET COVERAGE (100.0%%) PASSED....");
        end
        else begin
            $display("RESET COVERAGE FAILED!!!!!!!!!!!!!!!!!");
            $display("Coverage = %0f", id_rstn_covergroup.get_coverage());
        end
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
        if (id_in_covergroup.get_coverage() == 100.0 && id_out_covergroup.get_coverage() == 100.0 
                && cross_covergroup.get_coverage() == 100.0 && id_rstn_covergroup.get_coverage() == 100.0) begin
            $display("FUNCTIONAL COVERAGE (100.0%%) PASSED....");
        end
        else begin
            $display("FUNCTIONAL COVERAGE FAILED!!!!!!!!!!!!!!!!!");
            $display("SEE DETAILS UPON");
        end
        $display("*****************************************************");

    endfunction
endclass : id_scoreboard
