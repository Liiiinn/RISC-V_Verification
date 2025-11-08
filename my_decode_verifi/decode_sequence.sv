// decode_sequence.sv - UVM sequences for decode stage testing
`ifndef DECODE_SEQUENCE_SV
`define DECODE_SEQUENCE_SV

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

// Base sequence
class decode_base_sequence extends uvm_sequence #(decode_item);
    
    `uvm_object_utils(decode_base_sequence)
    
    function new(string name = "decode_base_sequence");
        super.new(name);
    endfunction
    
endclass

// Random sequence - generates random instructions
class decode_random_sequence extends decode_base_sequence;
    
    `uvm_object_utils(decode_random_sequence)
    
    int num_transactions = 100;
    
    function new(string name = "decode_random_sequence");
        super.new(name);
    endfunction
    
    virtual task body();
        decode_item req;
        
        repeat (num_transactions) begin
            req = decode_item::type_id::create("req");
            
            start_item(req);
            if (!req.randomize()) begin
                `uvm_error("SEQ", "Failed to randomize decode_item")
            end
            finish_item(req);
        end
    endtask
    
endclass

// R-type instruction sequence
class decode_rtype_sequence extends decode_base_sequence;
    
    `uvm_object_utils(decode_rtype_sequence)
    
    function new(string name = "decode_rtype_sequence");
        super.new(name);
    endfunction
    
    virtual task body();
        decode_item req;
        
        // Test different R-type instructions
        //task6:
        logic [6:0] funct7_values[] = {7'b0000000, 7'b0100000};
        logic [2:0] funct3_values[] = {3'b000, 3'b001, 3'b010, 3'b011, 3'b100, 3'b101, 3'b110, 3'b111};
        
        foreach (funct7_values[i]) begin
            foreach (funct3_values[j]) begin
                req = decode_item::type_id::create("req");
                start_item(req);
                // task7: understand instruction components
                req.instruction.opcode = 7'b0110011; // R-type
                req.instruction.funct7 = funct7_values[i];
                req.instruction.funct3 = funct3_values[j];
                req.instruction.rs1 = $urandom_range(1, 31);
                req.instruction.rs2 = $urandom_range(1, 31);
                req.instruction.rd = $urandom_range(1, 31);
                req.pc = $urandom();
                req.write_en = 0; // No write for this test
                
                finish_item(req);
            end
        end
    endtask
    
endclass

// I-type instruction sequence
class decode_itype_sequence extends decode_base_sequence;
    
    `uvm_object_utils(decode_itype_sequence)
    
    function new(string name = "decode_itype_sequence");
        super.new(name);
    endfunction
    
    virtual task body();
        decode_item req;
        
        // Test different I-type instructions
        // I-type format: [imm[11:0]][rs1][funct3][rd][opcode]
        // Note: In instruction_type struct, imm[11:5] is stored in funct7, imm[4:0] in rs2
        logic [2:0] funct3_values[] = {3'b000, 3'b001, 3'b010, 3'b011, 3'b100, 3'b101, 3'b110, 3'b111};
        
        foreach (funct3_values[i]) begin
            req = decode_item::type_id::create("req");
            start_item(req);
              req.instruction.opcode = 7'b0010011; // I-type
            req.instruction.funct3 = funct3_values[i];
            // For I-type, funct7 and rs2 form the 12-bit immediate field
            // For shift instructions (funct3 == 3'b001 or 3'b101), only lower 5 bits are used
            if (funct3_values[i] == 3'b001 || funct3_values[i] == 3'b101) begin
                // Shift instructions: immediate[11:5] = {0, shamt_bit[5], 5'b0}, immediate[4:0] = shamt[4:0]
                req.instruction.funct7 = (funct3_values[i] == 3'b101) ? 
                                        {1'b0, $urandom_range(0,1), 5'b00000} :  // SRAI or SRLI
                                        7'b0000000;                               // SLLI
                req.instruction.rs2 = $urandom_range(0, 31); // shamt[4:0] - shift amount
            end else begin
                // Other I-type instructions: 12-bit signed immediate
                logic [11:0] immediate = $urandom();
                req.instruction.funct7 = immediate[11:5];  // immediate[11:5]
                req.instruction.rs2 = immediate[4:0];      // immediate[4:0]
            end
            req.instruction.rs1 = $urandom_range(1, 31);
            req.instruction.rd = $urandom_range(1, 31);
            req.pc = $urandom();
            req.write_en = 0;
            
            finish_item(req);
        end
    endtask
    
endclass

// Register file test sequence with randc
class decode_regfile_sequence extends decode_base_sequence;
    
    `uvm_object_utils(decode_regfile_sequence)
    
    // Use randc for cyclic random generation of register IDs
     randc logic [4:0] write_id with { write_id inside {[1:31]}; };
     randc logic [31:0] write_data;

    function new(string name = "decode_regfile_sequence");
        super.new(name);
    endfunction

    virtual task body();
        decode_item req;

        `uvm_info("REGFILE_SEQ", "Starting register file test with randc", UVM_MEDIUM)
        
        // First, write some values to registers using randc
        // randc ensures all values 1-31 are covered exactly once before repeating

        req = decode_item::type_id::create("req");
        start_item(req);
        
        // Randomize the register ID using randc constraint
        if (!(req.randomize() with { 
            req.write_en = 1;
            req.write_id = write_id;
            req.write_data = write_data;
            
        })) begin
            `uvm_error("REGFILE_SEQ", "Failed to randomize register ID")
        end
        
        
        req.write_id = reg_write_id;
        req.write_data = $urandom();
        req.instruction.opcode = 7'b0010011; // Use simple I-type (ADDI)
        req.instruction.funct3 = 3'b000;     // ADDI funct3
        req.instruction.funct7 = 7'b0000000; // immediate[11:5] = 0
        req.instruction.rs1 = 0;             // x0 as source
        req.instruction.rs2 = 0;             // immediate[4:0] = 0 (ADDI x0, 0)
        req.instruction.rd = reg_write_id;   // Write to random register
        req.pc = $urandom();
        
        `uvm_info("REGFILE_SEQ", $sformatf("Writing register x%0d with value 0x%h", 
                reg_write_id, req.write_data), UVM_HIGH)
        
        finish_item(req);
        
        #10; // Small delay to ensure write completes
        
        
        // ...existing code for read tests...
    endtask
    
endclass

// Branch instruction sequence
class decode_branch_sequence extends decode_base_sequence;
    
    `uvm_object_utils(decode_branch_sequence)
    
    function new(string name = "decode_branch_sequence");
        super.new(name);
    endfunction
    
    virtual task body();
        decode_item req;
        
        // Test different branch instructions
        logic [2:0] funct3_values[] = {3'b000, 3'b001, 3'b100, 3'b101, 3'b110, 3'b111};
        
        foreach (funct3_values[i]) begin
            req = decode_item::type_id::create("req");
            start_item(req);
            
            req.instruction.opcode = 7'b1100011; // Branch
            req.instruction.funct3 = funct3_values[i];
            req.instruction.funct7 = $urandom_range(0, 31); // Used for immediate[11:5]
            req.instruction.rs1 = $urandom_range(0, 31);
            req.instruction.rs2 = $urandom_range(0, 31);
            req.instruction.rd = $urandom_range(0, 31); // Used for immediate[4:1|11]
            req.pc = $urandom();
            req.write_en = 0;
            
            // Test with different branch prediction states
            req.branch_in.branch_taken_predict = $urandom_range(0, 1);
            req.branch_in.current_GHSR = $urandom_range(0, (1 << GSHARE_GHSR_WIDTH) - 1);
            req.branch_in.branch_btb_hit = $urandom_range(0, 1);
            req.branch_in.branch_btb_addr = $urandom();
            
            finish_item(req);
        end
    endtask
    
endclass

// Jump instruction sequence
class decode_jump_sequence extends decode_base_sequence;
    
    `uvm_object_utils(decode_jump_sequence)
    
    function new(string name = "decode_jump_sequence");
        super.new(name);
    endfunction
    
    virtual task body();
        decode_item req;
        
        // Test JAL
        req = decode_item::type_id::create("req");
        start_item(req);
        
        req.instruction.opcode = 7'b1101111; // JAL
        req.instruction.rd = $urandom_range(1, 31);
        // Immediate is encoded in funct7, rs2, rs1, funct3
        req.instruction.funct7 = $urandom_range(0, 127);
        req.instruction.rs2 = $urandom_range(0, 31);
        req.instruction.rs1 = $urandom_range(0, 31);
        req.instruction.funct3 = $urandom_range(0, 7);
        req.pc = $urandom();
        req.write_en = 0;
        
        finish_item(req);
        
        // Test JALR
        req = decode_item::type_id::create("req");
        start_item(req);
        
        req.instruction.opcode = 7'b1100111; // JALR
        req.instruction.funct3 = 3'b000;
        req.instruction.rs1 = $urandom_range(0, 31);
        req.instruction.rd = $urandom_range(1, 31);
        req.instruction.funct7 = $urandom_range(0, 127); // Immediate[11:5]
        req.instruction.rs2 = $urandom_range(0, 31); // Immediate[4:0]
        req.pc = $urandom();
        req.write_en = 0;
        
        finish_item(req);
    endtask
    
endclass

// Load/Store sequence
class decode_loadstore_sequence extends decode_base_sequence;
    
    `uvm_object_utils(decode_loadstore_sequence)
    
    function new(string name = "decode_loadstore_sequence");
        super.new(name);
    endfunction
    
    virtual task body();
        decode_item req;
        
        // Test Load instructions
        logic [2:0] load_funct3[] = {3'b000, 3'b001, 3'b010, 3'b100, 3'b101};
        foreach (load_funct3[i]) begin
            req = decode_item::type_id::create("req");
            start_item(req);
            
            req.instruction.opcode = 7'b0000011; // Load
            req.instruction.funct3 = load_funct3[i];
            req.instruction.rs1 = $urandom_range(0, 31);
            req.instruction.rd = $urandom_range(1, 31);
            req.instruction.funct7 = $urandom_range(0, 127); // Immediate[11:5]
            req.instruction.rs2 = $urandom_range(0, 31); // Immediate[4:0]
            req.pc = $urandom();
            req.write_en = 0;
            
            finish_item(req);
        end
        
        // Test Store instructions
        logic [2:0] store_funct3[] = {3'b000, 3'b001, 3'b010};
        foreach (store_funct3[i]) begin
            req = decode_item::type_id::create("req");
            start_item(req);
            
            req.instruction.opcode = 7'b0100011; // Store
            req.instruction.funct3 = store_funct3[i];
            req.instruction.rs1 = $urandom_range(0, 31);
            req.instruction.rs2 = $urandom_range(0, 31);
            req.instruction.funct7 = $urandom_range(0, 127); // Immediate[11:5]
            req.instruction.rd = $urandom_range(0, 31); // Immediate[4:0]
            req.pc = $urandom();
            req.write_en = 0;
            
            finish_item(req);
        end
    endtask
    
endclass

`endif
