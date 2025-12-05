//------------------------------------------------------------------------------
// class parity_test
//
// See more detailed information in base_test
//------------------------------------------------------------------------------
import uvm_pkg::*;
`include "uvm_macros.svh"
import tb_pkg::*; // Import the testbench package
import common::*; // Import common definitions

class id_test extends base_test;
    `uvm_component_utils(id_test)

    //------------------------------------------------------------------------------
    // FUNCTION: new
    // Creates and constructs the sequence.
    //------------------------------------------------------------------------------
    function new (string name = "test",uvm_component parent = null);
        super.new(name,parent);
    endfunction : new

    //------------------------------------------------------------------------------
    // FUNCTION: build_phase
    // Function to build the class within UVM build phase.
    //------------------------------------------------------------------------------
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
    endfunction : build_phase

    //------------------------------------------------------------------------------
    // FUNCTION: run_phase
    // Start UVM test in running phase.
    //------------------------------------------------------------------------------
    virtual task run_phase(uvm_phase phase);
        // Set number data transactions
        no_of_data = 80;
        // Run the test as defined in base test
        super.run_phase(phase);
    endtask : run_phase

endclass : id_test
