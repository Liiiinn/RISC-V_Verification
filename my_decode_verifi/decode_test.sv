// decode_test.sv - UVM tests for decode stage
`ifndef DECODE_TEST_SV
`define DECODE_TEST_SV

import uvm_pkg::*;
`include "uvm_macros.svh"

// Base test class
class decode_base_test extends uvm_test;
    
    `uvm_component_utils(decode_base_test)
    
    decode_env env;
    
    function new(string name = "decode_base_test", uvm_component parent);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        env = decode_env::type_id::create("env", this);
        
        // Set default sequence
        uvm_config_db#(uvm_object_wrapper)::set(this, "env.agent.sequencer.main_phase", 
                                               "default_sequence", decode_random_sequence::type_id::get());
    endfunction
    
    virtual function void end_of_elaboration_phase(uvm_phase phase);
        super.end_of_elaboration_phase(phase);
        uvm_top.print_topology();
    endfunction
    
endclass

// Random test
class decode_random_test extends decode_base_test;
    
    `uvm_component_utils(decode_random_test)
    
    function new(string name = "decode_random_test", uvm_component parent);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        uvm_config_db#(uvm_object_wrapper)::set(this, "env.agent.sequencer.main_phase", 
                                               "default_sequence", decode_random_sequence::type_id::get());
    endfunction
    
endclass

// R-type instruction test
class decode_rtype_test extends decode_base_test;
    
    `uvm_component_utils(decode_rtype_test)
    
    function new(string name = "decode_rtype_test", uvm_component parent);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        uvm_config_db#(uvm_object_wrapper)::set(this, "env.agent.sequencer.main_phase", 
                                               "default_sequence", decode_rtype_sequence::type_id::get());
    endfunction
    
endclass

// I-type instruction test
class decode_itype_test extends decode_base_test;
    
    `uvm_component_utils(decode_itype_test)
    
    function new(string name = "decode_itype_test", uvm_component parent);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        uvm_config_db#(uvm_object_wrapper)::set(this, "env.agent.sequencer.main_phase", 
                                               "default_sequence", decode_itype_sequence::type_id::get());
    endfunction
    
endclass

// Register file test
class decode_regfile_test extends decode_base_test;
    
    `uvm_component_utils(decode_regfile_test)
    
    function new(string name = "decode_regfile_test", uvm_component parent);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        uvm_config_db#(uvm_object_wrapper)::set(this, "env.agent.sequencer.main_phase", 
                                               "default_sequence", decode_regfile_sequence::type_id::get());
    endfunction
    
endclass

// Branch instruction test
class decode_branch_test extends decode_base_test;
    
    `uvm_component_utils(decode_branch_test)
    
    function new(string name = "decode_branch_test", uvm_component parent);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        uvm_config_db#(uvm_object_wrapper)::set(this, "env.agent.sequencer.main_phase", 
                                               "default_sequence", decode_branch_sequence::type_id::get());
    endfunction
    
endclass

// Jump instruction test
class decode_jump_test extends decode_base_test;
    
    `uvm_component_utils(decode_jump_test)
    
    function new(string name = "decode_jump_test", uvm_component parent);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        uvm_config_db#(uvm_object_wrapper)::set(this, "env.agent.sequencer.main_phase", 
                                               "default_sequence", decode_jump_sequence::type_id::get());
    endfunction
    
endclass

// Load/Store test
class decode_loadstore_test extends decode_base_test;
    
    `uvm_component_utils(decode_loadstore_test)
    
    function new(string name = "decode_loadstore_test", uvm_component parent);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        uvm_config_db#(uvm_object_wrapper)::set(this, "env.agent.sequencer.main_phase", 
                                               "default_sequence", decode_loadstore_sequence::type_id::get());
    endfunction
    
endclass

// Comprehensive test that runs multiple sequences
class decode_comprehensive_test extends decode_base_test;
    
    `uvm_component_utils(decode_comprehensive_test)
    
    function new(string name = "decode_comprehensive_test", uvm_component parent);
        super.new(name, parent);
    endfunction
    
    virtual task run_phase(uvm_phase phase);
       // task 1 Declare sequence handles: itype_seq, regfile_seq, branch_seq, jump_seq, loadstore_seq, random_seq
        decode_rtype_sequence rtype_seq;

        
        phase.raise_objection(this);
        
        `uvm_info("TEST", "Starting comprehensive test", UVM_MEDIUM)
        
        // Run register file test first to set up register values
        regfile_seq = decode_regfile_sequence::type_id::create("regfile_seq");
        regfile_seq.start(env.agent.sequencer);
        //task2: 
        // Run R-type tests

        
        // Run I-type tests

        
        // Run branch tests

        
        // Run jump tests

        
        // Run load/store tests

        
        // Run some random tests at the end
        random_seq = decode_random_sequence::type_id::create("random_seq");
        random_seq.num_transactions = 200;
        random_seq.start(env.agent.sequencer);
        
        #100; // Final delay
        
        `uvm_info("TEST", "Comprehensive test completed", UVM_MEDIUM)
        
        phase.drop_objection(this);
    endtask
    
endclass

`endif
