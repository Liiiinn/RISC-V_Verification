`uvm_analysis_imp_decl(_scoreboard_reset)
`uvm_analysis_imp_decl(_scoreboard_id)

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

class scoreboard extends uvm_component;
  `uvm_component_utils(scoreboard)
  uvm_analysis_imp_scoreboard_reset #(rstn_seq_item,scoreboard) m_rstn_ap;
  uvm_analysis_imp_scoreboard_id #(id_seq_item,scoreboard) m_id_ap;

  instruction_type instruction ;
  bit rstn_value;
  int unsigned pc;
  int unsigned write_en;
  int unsigned [4:0] write_id;
  int unsigned [31:0] write_data;
  int unsigned branch_in;


  covergroup id_covergroup;
    reset: coverpoint rstn_value {
        bins reset = {0};
        bins run = {1};
    };
    opcode: coverpoint input_instruction_opcode {
        bins R_type = {7'b0110011};
        bins I_type = {7'b0010011, 7'b0000011, 7'b1100111};
        bins S_type = {7'b0100011};
        bins B_type = {7'b1100011};
        bins U_type = {7'b0110111, 7'b0010111};
        bins J_type = {7'b1101111};
    };
    write_enable: coverpoint write_en{

        bins write = {1};
        bins no_write = {0};

    }
    branch_in : coverpoint branch_taken{
        bins taken = {1};
        bins not_taken = {0};
    };

    //加上write_en 和write id 的cross coverpoint？
    //还有很多没加的





  endgroup 

  function new(string name = "scoreboard", uvm_component parent = null);
    super.new(name, parent);
    id_covergroup = new();    
  endfunction: new

  function void build_phase(uvm_phase phase)
   super.build_phase(phase);
   m_rstn_ap = new("m_rstn_ap", this);
   m_id_ap = new("m_id_ap", this);

  endfunction : build_phase

  virtual function void connect_phase(uvm_phase phase);
    super.connect_phase(phase);
  endfunction : connect_phase;

  virtual function void write_scoreboard_reset(rstn_seq_item ietm);
    `uvm_info(get_name(), $sformatf("RESET_MONITOR: \n%s", ietm.sprint()), UVM_HIGH);
     // add start up value;
// 待补充
     write_en = 0;
     write_id = 0;
     instruction = 32'b0;
    endfunction : write_scoreboard_reset
     

  virtual function void write_scoreboard_id(id_seq_item item);
    `uvm_info(get_name(), $sformatf("ID_MONITOR: \n%s", item.sprint()), UVM_HIGH);
     // add start up value;
//待补充
     write_en = item.monitor_cb.write_en;
     write_id = item.monitor_cb.write_id;
     write_data = item.monitor_cb.write_data;
     branch_in = item.monitor_cb.branch_in;
     instruction = item.monitor_cb.instruction;
     pc = item.monitor_cb.pc;
 endfunction : write_scoreboard_id
// 待补充