// decode_scoreboard.sv - UVM scoreboard for decode stage
`ifndef DECODE_SCOREBOARD_SV
`define DECODE_SCOREBOARD_SV

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

class decode_scoreboard extends uvm_scoreboard;
    
    `uvm_component_utils(decode_scoreboard)
    
    uvm_analysis_imp #(decode_item, decode_scoreboard) analysis_imp;
    
    // Reference model storage
    logic [31:0] ref_register_file[0:REGISTER_FILE_SIZE-1];
    
    // Statistics
    int total_transactions;
    int passed_transactions;
    int failed_transactions;
    
    function new(string name = "decode_scoreboard", uvm_component parent);
        super.new(name, parent);
        analysis_imp = new("analysis_imp", this);
        
        // Initialize register file
        for (int i = 0; i < REGISTER_FILE_SIZE; i++) begin
            ref_register_file[i] = 0;
        end
    endfunction
    
    virtual function void write(decode_item item);
        total_transactions++;
        
        `uvm_info("SCOREBOARD", $sformatf("Checking transaction %0d", total_transactions), UVM_MEDIUM)
        
        if (check_transaction(item)) begin
            passed_transactions++;
            `uvm_info("SCOREBOARD", "Transaction PASSED", UVM_MEDIUM)
        end else begin
            failed_transactions++;
            `uvm_error("SCOREBOARD", "Transaction FAILED")
        end
        
        // Update reference register file
        update_reference_model(item);
    endfunction
    
    virtual function bit check_transaction(decode_item item);
        bit result = 1;
        control_type expected_control;
        logic [31:0] expected_immediate;
        
        // Check PC pass-through
        if (item.pc_out != item.pc) begin
            `uvm_error("SCOREBOARD", $sformatf("PC mismatch: Expected %h, Got %h", item.pc, item.pc_out))
            result = 0;
        end
        
        // Check branch pass-through
        if (item.branch_out != item.branch_in) begin
            `uvm_error("SCOREBOARD", "Branch predict mismatch")
            result = 0;
        end
        
        // Check register destination
        if (item.reg_rd_id != item.instruction.rd) begin
            `uvm_error("SCOREBOARD", $sformatf("RD mismatch: Expected %0d, Got %0d", item.instruction.rd, item.reg_rd_id))
            result = 0;
        end
        
        // Check register file reads
        if (item.read_data1 != ref_register_file[item.instruction.rs1]) begin
            `uvm_error("SCOREBOARD", $sformatf("Read data1 mismatch: Expected %h, Got %h", ref_register_file[item.instruction.rs1], item.read_data1))
            result = 0;
        end
        
        if (item.read_data2 != ref_register_file[item.instruction.rs2]) begin
            `uvm_error("SCOREBOARD", $sformatf("Read data2 mismatch: Expected %h, Got %h", ref_register_file[item.instruction.rs2], item.read_data2))
            result = 0;
        end
        
        // Check immediate extension
        expected_control = predict_control_signals(item.instruction);
        expected_immediate = immediate_extension(item.instruction, expected_control.encoding);
        
        if (item.immediate_data != expected_immediate) begin
            `uvm_error("SCOREBOARD", $sformatf("Immediate mismatch: Expected %h, Got %h", expected_immediate, item.immediate_data))
            result = 0;
        end
        
        // Check control signals
        if (!compare_control_signals(item.control_signals, expected_control)) begin
            `uvm_error("SCOREBOARD", "Control signals mismatch")
            result = 0;
        end
        
        return result;
    endfunction
    
    virtual function void update_reference_model(decode_item item);
        // Update register file if write is enabled
        if (item.write_en && item.write_id != 0) begin // x0 is always 0
            ref_register_file[item.write_id] = item.write_data;
            `uvm_info("SCOREBOARD", $sformatf("Updated register x%0d = %h", item.write_id, item.write_data), UVM_HIGH)
        end
    endfunction
    
    virtual function control_type predict_control_signals(instruction_type instr);
        control_type ctrl;
        
        // Initialize to default values
        ctrl = '0;
        
        case (instr.opcode)
            7'b0110011: begin // R-type
                ctrl.encoding = R_TYPE;
                ctrl.reg_write = 1;
                ctrl.alu_src = 0; // Use register
                
                case ({instr.funct7, instr.funct3})
                    {7'b0000000, 3'b000}: ctrl.alu_op = ALU_ADD;
                    {7'b0100000, 3'b000}: ctrl.alu_op = ALU_SUB;
                    {7'b0000000, 3'b001}: ctrl.alu_op = ALU_SLL;
                    {7'b0000000, 3'b010}: ctrl.alu_op = ALU_SLT;
                    {7'b0000000, 3'b011}: ctrl.alu_op = ALU_SLTU;
                    {7'b0000000, 3'b100}: ctrl.alu_op = ALU_XOR;
                    {7'b0000000, 3'b101}: ctrl.alu_op = ALU_SRL;
                    {7'b0100000, 3'b101}: ctrl.alu_op = ALU_SRA;
                    {7'b0000000, 3'b110}: ctrl.alu_op = ALU_OR;
                    {7'b0000000, 3'b111}: ctrl.alu_op = ALU_AND;
                    default: ctrl.alu_op = ALU_ADD;
                endcase
            end
            
            7'b0010011: begin // I-type
                ctrl.encoding = I_TYPE;
                ctrl.reg_write = 1;
                ctrl.alu_src = 1; // Use immediate
                
                case (instr.funct3)
                    3'b000: ctrl.alu_op = ALU_ADD; // ADDI
                    3'b001: ctrl.alu_op = ALU_SLL; // SLLI
                    3'b010: ctrl.alu_op = ALU_SLT; // SLTI
                    3'b011: ctrl.alu_op = ALU_SLTU; // SLTIU
                    3'b100: ctrl.alu_op = ALU_XOR; // XORI
                    3'b101: ctrl.alu_op = (instr.funct7[5]) ? ALU_SRA : ALU_SRL; // SRAI/SRLI
                    3'b110: ctrl.alu_op = ALU_OR; // ORI
                    3'b111: ctrl.alu_op = ALU_AND; // ANDI
                endcase
            end
            
            7'b0000011: begin // Load
                ctrl.encoding = I_TYPE;
                ctrl.mem_read = 1;
                ctrl.reg_write = 1;
                ctrl.mem_to_reg = 1;
                ctrl.alu_src = 1;
                ctrl.alu_op = ALU_ADD;
            end
            
            7'b0100011: begin // Store
                ctrl.encoding = S_TYPE;
                ctrl.mem_write = 1;
                ctrl.alu_src = 1;
                ctrl.alu_op = ALU_ADD;
            end
            
            7'b1100011: begin // Branch
                ctrl.encoding = B_TYPE;
                ctrl.is_branch = 1;
                ctrl.alu_src = 0;
                ctrl.alu_op = ALU_SUB;
            end
            
            7'b1101111: begin // JAL
                ctrl.encoding = J_TYPE;
                ctrl.is_jump = 1;
                ctrl.reg_write = 1;
                ctrl.alu_op = ALU_ADD;
            end
            
            7'b1100111: begin // JALR
                ctrl.encoding = I_TYPE;
                ctrl.is_jumpr = 1;
                ctrl.reg_write = 1;
                ctrl.alu_src = 1;
                ctrl.alu_op = ALU_ADD;
            end
            
            7'b0110111: begin // LUI
                ctrl.encoding = U_TYPE;
                ctrl.is_lui = 1;
                ctrl.reg_write = 1;
                ctrl.alu_op = ALU_PASS;
            end
            
            7'b0010111: begin // AUIPC
                ctrl.encoding = U_TYPE;
                ctrl.is_auipc = 1;
                ctrl.reg_write = 1;
                ctrl.alu_op = ALU_ADD;
            end
            
            default: begin
                ctrl = '0;
            end
        endcase
        
        ctrl.rs1_id = instr.rs1;
        ctrl.rs2_id = instr.rs2;
        ctrl.funct3 = instr.funct3;
        
        return ctrl;
    endfunction
    
    virtual function bit compare_control_signals(control_type actual, control_type expected);
        // Compare important control signal fields
        return (actual.alu_op == expected.alu_op) &&
               (actual.encoding == expected.encoding) &&
               (actual.reg_write == expected.reg_write) &&
               (actual.mem_read == expected.mem_read) &&
               (actual.mem_write == expected.mem_write) &&
               (actual.alu_src == expected.alu_src) &&
               (actual.is_branch == expected.is_branch) &&
               (actual.is_jump == expected.is_jump) &&
               (actual.is_jumpr == expected.is_jumpr) &&
               (actual.is_lui == expected.is_lui) &&
               (actual.is_auipc == expected.is_auipc);
    endfunction
    
    virtual function void report_phase(uvm_phase phase);
        super.report_phase(phase);
        
        `uvm_info("SCOREBOARD", "=== FINAL REPORT ===", UVM_NONE)
        `uvm_info("SCOREBOARD", $sformatf("Total transactions: %0d", total_transactions), UVM_NONE)
        `uvm_info("SCOREBOARD", $sformatf("Passed: %0d", passed_transactions), UVM_NONE)
        `uvm_info("SCOREBOARD", $sformatf("Failed: %0d", failed_transactions), UVM_NONE)
        
        if (failed_transactions == 0) begin
            `uvm_info("SCOREBOARD", "*** ALL TESTS PASSED ***", UVM_NONE)
        end else begin
            `uvm_error("SCOREBOARD", "*** SOME TESTS FAILED ***")
        end
    endfunction
    
endclass

`endif
