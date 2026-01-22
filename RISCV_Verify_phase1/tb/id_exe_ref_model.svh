`ifndef ID_EXE_REF_MODEL_SVH
`define ID_EXE_REF_MODEL_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

// 声明多个 analysis_imp 类型
`uvm_analysis_imp_decl(_id)
`uvm_analysis_imp_decl(_rstn)

class id_exe_ref_model extends uvm_component;
    `uvm_component_utils(id_exe_ref_model)
    
    // ===== Analysis imports =====
    uvm_analysis_imp_rstn#(rstn_seq_item, id_exe_ref_model) m_rstn_ap;
    uvm_analysis_imp_id#(id_seq_item, id_exe_ref_model) m_id_ap;
    
    // ===== Analysis ports (outputs) =====
    uvm_analysis_port#(id_out_seq_item) m_exp_id_out_ap;
    uvm_analysis_port#(exe_seq_item) m_exp_exe_out_ap;
  // ===== Internal state =====
    logic [31:0] register_file [32];
    logic        in_reset;
    logic [GSHARE_GHSR_WIDTH:0] GHSR_checkpoint;

    // Mul/Div model state (latency-based)
    bit          muldiv_busy;
    bit          muldiv_hold_start;
    int unsigned muldiv_cycles_left;
    alu_op_type  muldiv_op;
    logic [31:0] muldiv_result;
    logic [31:0] muldiv_operand1;
    logic [31:0] muldiv_operand2;

    localparam int MUL_LATENCY = (XLEN_WIDTH + 7) / 8;
    localparam int DIV_LATENCY = XLEN_WIDTH + 1;
    
    // ===== Statistics =====
    int id_trans_count = 0;
    int exe_trans_count = 0;
    
    function new(string name = "id_exe_ref_model", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        m_rstn_ap = new("m_rstn_ap", this);
        m_id_ap = new("m_id_ap", this);
        m_exp_id_out_ap = new("m_exp_id_out_ap", this);
        m_exp_exe_out_ap = new("m_exp_exe_out_ap", this);
        
        // Initialize register file (x0 = 0)
        foreach(register_file[i]) begin
            register_file[i] = (i == 0) ? 32'h0 : 32'hDEADBEEF;
        end
        
        in_reset = 1;
        GHSR_checkpoint = '0;
        muldiv_busy = 0;
        muldiv_hold_start = 0;
        muldiv_cycles_left = 0;
        muldiv_op = ALU_ADD;
        muldiv_result = 32'h0;
        muldiv_operand1 = 32'h0;
        muldiv_operand2 = 32'h0;
    endfunction
    
    // ===== Write functions =====
    virtual function void write_rstn(rstn_seq_item t);
        in_reset = !t.rstn_value;
        
        if (in_reset) begin
            `uvm_info(get_name(), "Reset asserted - clearing state", UVM_MEDIUM)
            // Reset register file except x0
            foreach(register_file[i]) begin
                if (i != 0) register_file[i] = 32'h0;
            end
            GHSR_checkpoint = '0;
            muldiv_busy = 0;
            muldiv_hold_start = 0;
            muldiv_cycles_left = 0;
            muldiv_op = ALU_ADD;
            muldiv_result = 32'h0;
            muldiv_operand1 = 32'h0;
            muldiv_operand2 = 32'h0;
        end else begin
            `uvm_info(get_name(), "Reset deasserted", UVM_MEDIUM)
        end
    endfunction
    
    virtual function void write_id(id_seq_item t);
        id_out_seq_item id_out;
        exe_seq_item exe_out;
        if (in_reset) return;
        
        id_trans_count++;
        
        // ===== Step 1: Process writeback (update register file) =====
        if (t.write_en && t.write_id != 0) begin
            register_file[t.write_id] = t.write_data;
            `uvm_info(get_name(), $sformatf(
                "Writeback: x%0d = 0x%08h", t.write_id, t.write_data), UVM_HIGH)
        end
        
        // ===== Step 2: Decode instruction and generate ID outputs =====
        id_out = id_out_seq_item::type_id::create("id_out");
        decode_instruction(t, id_out);
        
        // Send expected ID outputs
        m_exp_id_out_ap.write(id_out);
        
        // ===== Step 3: Execute instruction and generate EXE outputs =====
        exe_out = exe_seq_item::type_id::create("exe_out");
        execute_instruction(id_out, exe_out);
        
        // Send expected EXE outputs
        m_exp_exe_out_ap.write(exe_out);
        
        exe_trans_count++;
    endfunction
    
    // ===== ID Stage: Decode instruction =====
    virtual function void decode_instruction(id_seq_item id_in, output id_out_seq_item id_out);
        instruction_type tr;
        logic [6:0] opcode;
        logic [2:0] funct3;
        logic [6:0] funct7;
        logic [31:0] instr_bits;

        tr = id_in.instruction;
        opcode = tr.opcode;
        funct3 = tr.funct3;
        funct7 = tr.funct7;
        instr_bits = {tr.funct7, tr.rs2, tr.rs1, tr.funct3, tr.rd, tr.opcode};

        // Initialize outputs
        id_out.read_data1 = 32'h0;
        id_out.read_data2 = 32'h0;
        id_out.immediate_data = 32'h0;
        id_out.pc_out = id_in.pc;
        id_out.branch_out = id_in.branch_in;
        id_out.reg_rd_id = tr.rd;

        id_out.control_signals.reg_write = 0;
        id_out.control_signals.mem_to_reg = 0;
        id_out.control_signals.mem_write = 0;
        id_out.control_signals.mem_read = 0;
        id_out.control_signals.alu_src = 0;
        id_out.control_signals.is_branch = 0;
        id_out.control_signals.is_jump = 0;
        id_out.control_signals.is_jumpr = 0;
        id_out.control_signals.is_lui = 0;
        id_out.control_signals.is_auipc = 0;
        id_out.control_signals.is_mul = 0;
        id_out.control_signals.alu_op = ALU_ADD;
        id_out.control_signals.encoding = R_TYPE;
        id_out.control_signals.funct3 = 0;
        id_out.control_signals.rs1_id = 0;
        id_out.control_signals.rs2_id = 0;

        case (opcode)
            7'b0110011: begin // R-type
                id_out.control_signals.rs1_id = tr.rs1;
                id_out.control_signals.rs2_id = tr.rs2;
                id_out.control_signals.funct3 = tr.funct3;
                id_out.control_signals.reg_write = 1'b1;
                id_out.control_signals.encoding = R_TYPE;
                if (funct7 == 7'b0000000) begin
                    case (funct3)
                        3'b000: id_out.control_signals.alu_op = ALU_ADD;
                        3'b001: id_out.control_signals.alu_op = ALU_SLL;
                        3'b010: id_out.control_signals.alu_op = ALU_SLT;
                        3'b011: id_out.control_signals.alu_op = ALU_SLTU;
                        3'b100: id_out.control_signals.alu_op = ALU_XOR;
                        3'b101: id_out.control_signals.alu_op = ALU_SRL;
                        3'b110: id_out.control_signals.alu_op = ALU_OR;
                        3'b111: id_out.control_signals.alu_op = ALU_AND;
                    endcase
                end
                if (funct7 == 7'b0000001) begin
                    case (funct3)
                        3'b000: begin id_out.control_signals.alu_op = ALU_MUL;  id_out.control_signals.is_mul = 1'b1; end
                        3'b001: begin id_out.control_signals.alu_op = ALU_MULH; id_out.control_signals.is_mul = 1'b1; end
                        3'b100: begin id_out.control_signals.alu_op = ALU_DIV;  id_out.control_signals.is_mul = 1'b1; end
                        3'b101: begin id_out.control_signals.alu_op = ALU_DIVU; id_out.control_signals.is_mul = 1'b1; end
                        3'b110: begin id_out.control_signals.alu_op = ALU_REM;  id_out.control_signals.is_mul = 1'b1; end
                        3'b111: begin id_out.control_signals.alu_op = ALU_REMU; id_out.control_signals.is_mul = 1'b1; end
                    endcase
                end
                if (funct7 == 7'b0100000) begin
                    case (funct3)
                        3'b000: id_out.control_signals.alu_op = ALU_SUB;
                        3'b101: id_out.control_signals.alu_op = ALU_SRA;
                        default: id_out.control_signals.alu_op = ALU_ADD;
                    endcase
                end
            end
            7'b0010011: begin // I-type
                id_out.immediate_data = { {20{tr[31]}}, tr[31:20] };
                id_out.control_signals.reg_write = 1'b1;
                id_out.control_signals.encoding = I_TYPE;
                id_out.control_signals.alu_src = 1'b1;
                id_out.control_signals.funct3 = tr.funct3;
                id_out.control_signals.rs1_id = tr.rs1;
                id_out.control_signals.rs2_id = instr_bits[24:20];
                case (funct3)
                    3'b000: id_out.control_signals.alu_op = ALU_ADD;
                    3'b011: id_out.control_signals.alu_op = ALU_SLTU;
                    3'b010: id_out.control_signals.alu_op = ALU_SLT;
                    3'b100: id_out.control_signals.alu_op = ALU_XOR;
                    3'b110: id_out.control_signals.alu_op = ALU_OR;
                    3'b111: id_out.control_signals.alu_op = ALU_AND;
                    3'b001: id_out.control_signals.alu_op = (funct7 == 7'b0000000) ? ALU_SLL : ALU_ADD;
                    3'b101: id_out.control_signals.alu_op = (funct7 == 7'b0100000) ? ALU_SRA :
                                                            ((funct7 == 7'b0000000) ? ALU_SRL : ALU_ADD);
                endcase
            end
            7'b0000011: begin // Load
                id_out.immediate_data = { {20{tr[31]}}, tr[31:20] };
                id_out.control_signals.encoding  = I_TYPE;
                id_out.control_signals.reg_write = 1'b1;
                id_out.control_signals.alu_src   = 1'b1;
                id_out.control_signals.mem_read  = 1'b1;
                id_out.control_signals.mem_to_reg= 1'b1;
                id_out.control_signals.funct3 = tr.funct3;
                id_out.control_signals.rs1_id = tr.rs1;
                id_out.control_signals.rs2_id = instr_bits[24:20];
                id_out.control_signals.alu_op = ALU_ADD;
            end
            7'b1100011: begin // Branch
                id_out.immediate_data = { {19{tr[31]}}, tr[31], tr[7], tr[30:25], tr[11:8], 1'b0 };
                id_out.control_signals.encoding = B_TYPE;
                id_out.control_signals.is_branch = 1'b1;
                id_out.control_signals.funct3 = tr.funct3;
                id_out.control_signals.rs1_id = tr.rs1;
                id_out.control_signals.rs2_id = instr_bits[24:20];
                id_out.control_signals.alu_op = ALU_SUB;
            end
            7'b1101111: begin // J-type
                id_out.immediate_data = { {11{tr[31]}}, tr[31], tr[19:12], tr[20], tr[30:21], 1'b0 };
                id_out.control_signals.alu_op = ALU_ADD;
                id_out.control_signals.encoding = J_TYPE;
                id_out.control_signals.is_jump = 1'b1;
                id_out.control_signals.reg_write = 1'b1;
                id_out.control_signals.rs1_id = instr_bits[19:15];
                id_out.control_signals.rs2_id = instr_bits[24:20];
                id_out.control_signals.funct3 = instr_bits[14:12];
            end
            7'b1100111: begin // I-type jalr
                id_out.immediate_data = { {20{tr[31]}}, tr[31:20] };
                id_out.control_signals.alu_op = ALU_ADD;
                id_out.control_signals.encoding = I_TYPE;
                id_out.control_signals.is_jumpr = 1'b1;
                id_out.control_signals.reg_write = 1'b1;
                id_out.control_signals.funct3 = tr.funct3;
                id_out.control_signals.rs1_id = tr.rs1;
                id_out.control_signals.rs2_id = instr_bits[24:20];
            end
            7'b0100011: begin // S-type store
                id_out.immediate_data = { {20{tr[31]}}, tr[31:25], tr[11:7] };
                id_out.control_signals.encoding = S_TYPE;
                id_out.control_signals.mem_write = 1'b1;
                id_out.control_signals.alu_src = 1'b1;
                id_out.control_signals.funct3 = tr.funct3;
                id_out.control_signals.rs1_id = tr.rs1;
                id_out.control_signals.rs2_id = tr.rs2;
                id_out.control_signals.alu_op = ALU_ADD;
            end
            7'b0110111: begin // U-type lui
                id_out.immediate_data = { tr[31:12], 12'b0 };
                id_out.control_signals.alu_op  = ALU_PASS;
                id_out.control_signals.encoding = U_TYPE;
                id_out.control_signals.reg_write = 1'b1;
                id_out.control_signals.alu_src = 1'b1;
                id_out.control_signals.is_lui = 1'b1;
                id_out.control_signals.rs1_id = instr_bits[19:15];
                id_out.control_signals.rs2_id = instr_bits[24:20];
                id_out.control_signals.funct3 = instr_bits[14:12];
            end
            7'b0010111: begin // U-type auipc
                id_out.immediate_data = { tr[31:12], 12'b0 };
                id_out.control_signals.alu_op = ALU_ADD;
                id_out.control_signals.encoding = U_TYPE;
                id_out.control_signals.reg_write = 1'b1;
                id_out.control_signals.alu_src = 1'b1;
                id_out.control_signals.is_auipc = 1'b1;
                id_out.control_signals.rs1_id = instr_bits[19:15];
                id_out.control_signals.rs2_id = instr_bits[24:20];
                id_out.control_signals.funct3 = instr_bits[14:12];
            end
            default: begin
                `uvm_error(get_name(), $sformatf("Unknown opcode: 0x%02h", opcode))
            end
        endcase

        // Read register file with writeback bypass
        if (tr.rs1 == 0) begin
            id_out.read_data1 = 32'b0;
        end else if (id_in.write_en && (tr.rs1 == id_in.write_id)) begin
            id_out.read_data1 = id_in.write_data;
        end else begin
            id_out.read_data1 = register_file[tr.rs1];
        end

        if (tr.rs2 == 0) begin
            id_out.read_data2 = 32'b0;
        end else if (id_in.write_en && (tr.rs2 == id_in.write_id)) begin
            id_out.read_data2 = id_in.write_data;
        end else begin
            id_out.read_data2 = register_file[tr.rs2];
        end

        `uvm_info(get_name(), $sformatf(
            "ID Decode: PC=0x%08h, opcode=0x%02h, rs1=%0d(0x%08h), rs2=%0d(0x%08h), rd=%0d, imm=0x%08h",
            id_in.pc, opcode, tr.rs1, id_out.read_data1, tr.rs2, id_out.read_data2, tr.rd, id_out.immediate_data),
            UVM_HIGH)
    endfunction
    
    // ===== EXE Stage: Execute instruction =====
    virtual function void execute_instruction(id_out_seq_item id_out, output exe_seq_item exe_out);
        logic [31:0] rs1_after_fwd;
        logic [31:0] rs2_after_fwd;
        logic [31:0] alu_left;
        logic [31:0] alu_right;
        logic [31:0] alu_data;
        logic [31:0] mem_addr;
        logic [31:0] store_data;
        logic [31:0] branch_target_pc;
        logic [31:0] j_next_pc;
        logic        branch_taken;
        logic        branch_flush;
        logic        update_GHSR;
        logic [GSHARE_GHSR_WIDTH-1:0] GHSR_restore;
        logic [31:0] muldiv_result_local;
        logic        muldiv_ready_local;
        logic        exception_local;
        
        // Copy inputs
        exe_out.data1 = id_out.read_data1;
        exe_out.data2 = id_out.read_data2;
        exe_out.immediate_data = id_out.immediate_data;
        exe_out.pc = id_out.pc_out;
        exe_out.control_in = id_out.control_signals;
        exe_out.branch_predict = id_out.branch_out;
        exe_out.fwd_sel_rs1 = 2'b00;
        exe_out.fwd_sel_rs2 = 2'b00;
        exe_out.fwd_data_ex_mem = 32'h0;
        exe_out.fwd_data_mem_wb = 32'h0;
        
        // Forwarding (default: no forward)
        rs1_after_fwd = (exe_out.fwd_sel_rs1 == 2'b01) ? exe_out.fwd_data_mem_wb :
                        (exe_out.fwd_sel_rs1 == 2'b10) ? exe_out.fwd_data_ex_mem :
                                                          exe_out.data1;
        rs2_after_fwd = (exe_out.fwd_sel_rs2 == 2'b01) ? exe_out.fwd_data_mem_wb :
                        (exe_out.fwd_sel_rs2 == 2'b10) ? exe_out.fwd_data_ex_mem :
                                                          exe_out.data2;
        
        // ALU operand selection
        alu_left = rs1_after_fwd;
        alu_right = exe_out.control_in.alu_src ? exe_out.immediate_data : rs2_after_fwd;
        
        // Compute ALU result
        compute_alu(exe_out.control_in.alu_op, alu_left, alu_right, alu_data);
        
        // BJU: branch/jump + predictor interaction
        compute_bju(exe_out.control_in, exe_out.branch_predict, rs1_after_fwd, rs2_after_fwd,
                    exe_out.pc, exe_out.immediate_data,
                    branch_taken, branch_target_pc, j_next_pc,
                    branch_flush, update_GHSR, GHSR_restore);
        
        // LSU: address + store data
        mem_addr = rs1_after_fwd + exe_out.immediate_data;
        compute_lsu_store_data(exe_out.control_in, rs2_after_fwd, mem_addr, store_data);
        
        // Mul/Div model (latency-based)
        tick_muldiv(exe_out.control_in, rs1_after_fwd, rs2_after_fwd,
                    muldiv_ready_local, muldiv_result_local);
        exception_local = (exe_out.control_in.is_mul &&
                           (exe_out.control_in.alu_op == ALU_DIV ||
                            exe_out.control_in.alu_op == ALU_DIVU ||
                            exe_out.control_in.alu_op == ALU_REM ||
                            exe_out.control_in.alu_op == ALU_REMU) &&
                           (rs2_after_fwd == 0));
        
        // Outputs (match execute_stage)
        exe_out.control_out = exe_out.control_in;
        exe_out.exception = exception_local;
        exe_out.branch_target_pc = branch_target_pc;
        exe_out.branch_flush = branch_flush;
        exe_out.memory_addr = mem_addr;
        exe_out.memory_data = store_data;
        exe_out.muldiv_ready = muldiv_ready_local;
        
        exe_out.ex2if_branch_valid = exe_out.control_in.is_branch ||
                                     exe_out.control_in.is_jump   ||
                                     exe_out.control_in.is_jumpr;
        exe_out.ex2if_branch_taken = branch_taken;
        exe_out.ex2if_branch_addr  = exe_out.pc;
        exe_out.ex2if_branch_target_addr = branch_target_pc;
        exe_out.ex2if_branch_update_GHSR = update_GHSR;
        exe_out.ex2if_GHSR_restore = GHSR_restore;
        
        if (exe_out.control_in.is_jump || exe_out.control_in.is_jumpr) begin
            exe_out.rd_data = j_next_pc;
        end else if (exe_out.control_in.mem_read || exe_out.control_in.mem_write) begin
            exe_out.rd_data = mem_addr;
        end else if (exe_out.control_in.is_mul) begin
            exe_out.rd_data = muldiv_result_local;
        end else begin
            exe_out.rd_data = alu_data;
        end
        
        `uvm_info(get_name(), $sformatf(
            "EXE Execute: PC=0x%08h, ALU: 0x%08h %s 0x%08h = 0x%08h, rd_data=0x%08h",
            exe_out.pc, alu_left, exe_out.control_in.alu_op.name(), 
            alu_right, alu_data, exe_out.rd_data),
            UVM_HIGH)
    endfunction
    
    // ===== ALU computation =====
    virtual function void compute_alu(alu_op_type op, logic [31:0] left, logic [31:0] right, output logic [31:0] result);
        logic signed [31:0] left_s, right_s;
        left_s = signed'(left);
        right_s = signed'(right);
        case (op)
            ALU_ADD:     result = left + right;
            ALU_SUB:     result = left - right;
            ALU_SLT:     result = {{31{1'b0}}, (left_s < right_s)};
            ALU_SLTU:    result = {{31{1'b0}}, (left < right)};
            ALU_XOR:     result = left ^ right;
            ALU_OR:      result = left | right;
            ALU_AND:     result = left & right;
            ALU_SLL:     result = left << right[4:0];
            ALU_SRL:     result = left >> right[4:0];
            ALU_SRA:     result = left_s >>> right[4:0];
            ALU_PASS:    result = right;
            default:     result = 32'h0;
        endcase
    endfunction

    virtual function void compute_bju(
        input control_type ctrl,
        input branch_predict_type bp,
        input logic [31:0] left_operand,
        input logic [31:0] right_operand,
        input logic [31:0] pc,
        input logic [31:0] immediate_data,
        output logic branch_taken,
        output logic [31:0] branch_target_pc,
        output logic [31:0] j_next_pc,
        output logic branch_flush,
        output logic update_GHSR,
        output logic [GSHARE_GHSR_WIDTH-1:0] GHSR_restore
    );
        logic [31:0] pc_plus_4;
        logic [31:0] pc_plus_imm;
        logic [31:0] rs1_plus_imm;
        logic        is_rs1_eq_rs2;
        logic        is_rs1_lt_rs2;
        logic        is_sign_rs1_lt_rs2;
        logic        is_bj;
        logic        is_branch_taken_diff;
        logic        btb_addr_right;

        pc_plus_4 = pc + 32'(4);
        pc_plus_imm = pc + immediate_data;
        rs1_plus_imm = left_operand + immediate_data;
        j_next_pc = pc_plus_4;
        is_bj = ctrl.is_branch || ctrl.is_jump || ctrl.is_jumpr;

        is_rs1_eq_rs2 = (left_operand == right_operand);
        is_rs1_lt_rs2 = (left_operand < right_operand);
        is_sign_rs1_lt_rs2 = (signed'(left_operand) < signed'(right_operand));

        if (ctrl.is_branch) begin
            case (ctrl.funct3)
                F3_BEQ:  branch_taken = is_rs1_eq_rs2;
                F3_BNE:  branch_taken = ~is_rs1_eq_rs2;
                F3_BLT:  branch_taken = is_sign_rs1_lt_rs2;
                F3_BGE:  branch_taken = ~is_sign_rs1_lt_rs2;
                F3_BLTU: branch_taken = is_rs1_lt_rs2;
                F3_BGEU: branch_taken = ~is_rs1_lt_rs2;
                default: branch_taken = 1'b0;
            endcase
            branch_target_pc = branch_taken ? pc_plus_imm : pc_plus_4;
        end else if (ctrl.is_jump) begin
            branch_taken = 1'b1;
            branch_target_pc = pc_plus_imm;
        end else if (ctrl.is_jumpr) begin
            branch_taken = 1'b1;
            branch_target_pc = rs1_plus_imm & {{31{1'b1}}, 1'b0};
        end else begin
            branch_taken = 1'b0;
            branch_target_pc = pc_plus_4;
        end

        is_branch_taken_diff = branch_taken ^ bp.branch_taken_predict;
        btb_addr_right = (bp.branch_btb_addr == branch_target_pc);
        update_GHSR = is_bj && (~bp.branch_btb_hit || is_branch_taken_diff);
        branch_flush = is_bj &&
                       (is_branch_taken_diff ||
                        (bp.branch_btb_hit && bp.branch_taken_predict && ~btb_addr_right));
        GHSR_restore = (GHSR_checkpoint[GSHARE_GHSR_WIDTH]) ?
                        GHSR_checkpoint[GSHARE_GHSR_WIDTH-1:0] :
                        bp.current_GHSR[GSHARE_GHSR_WIDTH-1:0];

        // Sequential update for next cycle
        if (is_bj) begin
            if (GHSR_checkpoint[GSHARE_GHSR_WIDTH] == 1'b0) begin
                GHSR_checkpoint = {1'b1, bp.current_GHSR[GSHARE_GHSR_WIDTH-2:0], branch_taken};
            end else begin
                GHSR_checkpoint = {1'b1, GHSR_checkpoint[GSHARE_GHSR_WIDTH-2:0], branch_taken};
            end
        end
    endfunction

    virtual function void compute_lsu_store_data(
        input control_type ctrl,
        input logic [31:0] right_operand,
        input logic [31:0] mem_addr,
        output logic [31:0] store_data
    );
        case (ctrl.funct3[1:0])
            F3_SB: store_data = right_operand[7:0]  << (8 * mem_addr[1:0]);
            F3_SH: store_data = right_operand[15:0] << (8 * mem_addr[1:0]);
            F3_SW: store_data = right_operand;
            default: store_data = right_operand;
        endcase
    endfunction

    virtual function logic [31:0] compute_muldiv_result(
        input alu_op_type op,
        input logic [31:0] op1,
        input logic [31:0] op2
    );
        logic signed [31:0] op1_s;
        logic signed [31:0] op2_s;
        logic signed [63:0] mul_s;
        logic [63:0] mul_u;
        op1_s = signed'(op1);
        op2_s = signed'(op2);
        case (op)
            ALU_MUL: begin
                mul_s = op1_s * op2_s;
                compute_muldiv_result = mul_s[31:0];
            end
            ALU_MULH: begin
                mul_s = op1_s * op2_s;
                compute_muldiv_result = mul_s[63:32];
            end
            ALU_DIV:  compute_muldiv_result = (op2_s != 0) ? (op1_s / op2_s) : 32'hFFFFFFFF;
            ALU_DIVU: compute_muldiv_result = (op2 != 0) ? (op1 / op2) : 32'hFFFFFFFF;
            ALU_REM:  compute_muldiv_result = (op2_s != 0) ? (op1_s % op2_s) : op1;
            ALU_REMU: compute_muldiv_result = (op2 != 0) ? (op1 % op2) : op1;
            default:  compute_muldiv_result = 32'h0;
        endcase
    endfunction

    virtual function void tick_muldiv(
        input control_type ctrl,
        input logic [31:0] op1,
        input logic [31:0] op2,
        output logic ready,
        output logic [31:0] result
    );
        bit is_mulop;
        bit is_divop;
        bit finished_this_cycle;

        is_mulop = (ctrl.alu_op == ALU_MUL || ctrl.alu_op == ALU_MULH);
        is_divop = (ctrl.alu_op == ALU_DIV || ctrl.alu_op == ALU_DIVU ||
                    ctrl.alu_op == ALU_REM || ctrl.alu_op == ALU_REMU);

        finished_this_cycle = 0;

        if (muldiv_busy && (muldiv_cycles_left > 0)) begin
            muldiv_cycles_left--;
            if (muldiv_cycles_left == 0) begin
                muldiv_busy = 0;
                finished_this_cycle = 1;
            end
        end
        if (muldiv_hold_start) begin
            muldiv_hold_start = 0;
        end
        if (finished_this_cycle) begin
            muldiv_hold_start = 1;
        end

        if (ctrl.is_mul && !muldiv_busy && !muldiv_hold_start) begin
            muldiv_op = ctrl.alu_op;
            muldiv_operand1 = op1;
            muldiv_operand2 = op2;
            muldiv_result = compute_muldiv_result(ctrl.alu_op, op1, op2);
            if (is_mulop) begin
                muldiv_cycles_left = MUL_LATENCY;
            end else if (is_divop) begin
                muldiv_cycles_left = DIV_LATENCY;
            end else begin
                muldiv_cycles_left = 0;
            end
            muldiv_busy = (muldiv_cycles_left != 0);
        end

        if (!ctrl.is_mul) begin
            ready = 1'b1;
            result = 32'h0;
        end else begin
            ready = muldiv_busy ? 1'b0 : 1'b1;
            result = muldiv_result;
        end
    endfunction
    
    virtual function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        
        `uvm_info(get_name(), "========================================", UVM_LOW)
        `uvm_info(get_name(), "     Reference Model Report", UVM_LOW)
        `uvm_info(get_name(), "========================================", UVM_LOW)
        `uvm_info(get_name(), $sformatf("ID transactions:  %0d", id_trans_count), UVM_LOW)
        `uvm_info(get_name(), $sformatf("EXE transactions: %0d", exe_trans_count), UVM_LOW)
        `uvm_info(get_name(), "========================================", UVM_LOW)
    endfunction
    
endclass

`endif
