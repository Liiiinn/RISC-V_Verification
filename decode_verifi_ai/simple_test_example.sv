// simple_test_example.sv - 简单的测试示例
// 这个文件展示了如何创建一个最基本的decode stage测试

`timescale 1ns / 1ps

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

// 简单的测试项
class simple_decode_item extends uvm_sequence_item;
    
    // 输入信号
    rand instruction_type instruction;
    rand logic [31:0] pc;
    
    // 约束：只测试简单的ADDI指令
    constraint simple_instr {
        instruction.opcode == 7'b0010011; // I-type
        instruction.funct3 == 3'b000;     // ADDI
        instruction.rs1 inside {[1:5]};   // 简单的源寄存器
        instruction.rd inside {[1:5]};    // 简单的目标寄存器
    }
    
    `uvm_object_utils_begin(simple_decode_item)
        `uvm_field_int(instruction, UVM_ALL_ON)
        `uvm_field_int(pc, UVM_ALL_ON)
    `uvm_object_utils_end
    
    function new(string name = "simple_decode_item");
        super.new(name);
    endfunction
    
endclass

// 简单的测试序列
class simple_decode_sequence extends uvm_sequence #(simple_decode_item);
    
    `uvm_object_utils(simple_decode_sequence)
    
    function new(string name = "simple_decode_sequence");
        super.new(name);
    endfunction
    
    virtual task body();
        simple_decode_item req;
        
        // 生成10个简单的ADDI指令测试
        repeat (10) begin
            req = simple_decode_item::type_id::create("req");
            
            start_item(req);
            if (!req.randomize()) begin
                `uvm_error("SEQ", "Failed to randomize")
            end
            
            // 打印生成的指令信息
            `uvm_info("SEQ", $sformatf("Generated ADDI instruction: rs1=%0d, rd=%0d, pc=0x%h", 
                     req.instruction.rs1, req.instruction.rd, req.pc), UVM_MEDIUM)
            
            finish_item(req);
        end
    endtask
    
endclass

// 简单的测试
class simple_decode_test extends uvm_test;
    
    `uvm_component_utils(simple_decode_test)
    
    function new(string name = "simple_decode_test", uvm_component parent);
        super.new(name, parent);
    endfunction
    
    virtual task run_phase(uvm_phase phase);
        simple_decode_sequence seq;
        
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Starting simple decode test", UVM_MEDIUM)
        
        seq = simple_decode_sequence::type_id::create("seq");
        seq.start(null); // 这里简化了，实际应该连接到sequencer
        
        #100; // 等待一些时间
        
        `uvm_info("TEST", "Simple decode test completed", UVM_MEDIUM)
        
        phase.drop_objection(this);
    endtask
    
endclass
