`ifndef TB_ENV_SVH
`define TB_ENV_SVH

import uvm_pkg::*;
`include "uvm_macros.svh"
import common::*;

class tb_env extends uvm_env;
    `uvm_component_utils(tb_env)
    
    // ===== Agents =====
    rstn_agent m_rstn_agent;
    id_agent m_id_agent;
    id_out_agent m_id_out_agent;
    exe_agent m_exe_agent;  // ✅ 新增 EXE agent
    
    // ===== Reference Model & Scoreboard =====
    // 可以选择保留原来的 ID-only 验证组件，或者完全切换到 ID+EXE
    // 这里提供两种方案：
    
    // 方案 1: 只使用 ID+EXE 联合验证 (推荐)
    id_exe_ref_model m_ref_model;
    id_exe_scoreboard m_scoreboard;
    
    // 方案 2: 同时保留 ID-only 验证 (可选，用于对比)
    // id_ref_model m_id_ref_model;
    // id_scoreboard m_id_scoreboard;
    
    function new(string name = "tb_env", uvm_component parent = null);
        super.new(name, parent);
    endfunction
    
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);
        
        `uvm_info(get_name(), "Building environment...", UVM_LOW)
        
        // ===== Build agents =====
        m_rstn_agent = rstn_agent::type_id::create("m_rstn_agent", this);
        m_id_agent = id_agent::type_id::create("m_id_agent", this);
        m_id_out_agent = id_out_agent::type_id::create("m_id_out_agent", this);
        m_exe_agent = exe_agent::type_id::create("m_exe_agent", this);  // ✅ 新增
        
        // ===== Build reference model & scoreboard =====
        m_ref_model = id_exe_ref_model::type_id::create("m_ref_model", this);
        m_scoreboard = id_exe_scoreboard::type_id::create("m_scoreboard", this);
        
        `uvm_info(get_name(), "Environment build complete", UVM_LOW)
    endfunction
    
    virtual function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);
        
        `uvm_info(get_name(), "Connecting environment...", UVM_LOW)
        
        // ===== Connect reset signal =====
        m_rstn_agent.m_monitor.m_analysis_port.connect(m_ref_model.m_rstn_ap);
        m_rstn_agent.m_monitor.m_analysis_port.connect(m_scoreboard.m_rstn_ap);
        
        // ===== Connect ID stage =====
        // ID inputs to reference model
        m_id_agent.m_monitor.m_analysis_port.connect(m_ref_model.m_id_ap);
        m_id_agent.m_monitor.m_analysis_port.connect(m_scoreboard.m_id_in_ap);

        // ID outputs: DUT actual vs. reference model expected
        m_id_out_agent.m_monitor.m_analysis_port.connect(m_scoreboard.m_act_id_ap);
        m_ref_model.m_exp_id_out_ap.connect(m_scoreboard.m_exp_id_ap);
        
        // ===== Connect EXE stage =====
        // EXE outputs: DUT actual vs. reference model expected
        m_exe_agent.m_monitor.m_analysis_port.connect(m_scoreboard.m_act_exe_ap);
        m_ref_model.m_exp_exe_out_ap.connect(m_scoreboard.m_exp_exe_ap);
        
        `uvm_info(get_name(), "Environment connection complete", UVM_LOW)
        `uvm_info(get_name(), "Data flow:", UVM_LOW)
        `uvm_info(get_name(), "  RSTN Monitor -> Ref Model & Scoreboard", UVM_LOW)
        `uvm_info(get_name(), "  ID Monitor -> Ref Model", UVM_LOW)
        `uvm_info(get_name(), "  ID Out Monitor -> Scoreboard (actual)", UVM_LOW)
        `uvm_info(get_name(), "  Ref Model -> Scoreboard (expected ID & EXE)", UVM_LOW)
        `uvm_info(get_name(), "  EXE Monitor -> Scoreboard (actual)", UVM_LOW)
    endfunction
    
    virtual function void end_of_elaboration_phase(uvm_phase phase);
        super.end_of_elaboration_phase(phase);
        
        `uvm_info(get_name(), "Environment topology:", UVM_LOW)
        uvm_top.print_topology();
    endfunction
endclass

`endif