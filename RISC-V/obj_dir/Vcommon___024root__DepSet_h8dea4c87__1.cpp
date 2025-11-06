// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___sequent__TOP__6(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___sequent__TOP__6\n"); );
    // Body
    if (vlSelf->rstn_cpu) {
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v623 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x26fU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x26fU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x26fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x26fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x26fU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v624 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x270U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x270U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x270U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x270U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x270U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v625 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x271U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x271U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x271U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x271U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x271U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v626 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x272U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x272U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x272U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x272U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x272U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v627 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x273U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x273U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x273U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x273U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x273U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v628 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x274U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x274U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x274U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x274U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x274U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v629 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x275U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x275U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x275U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x275U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x275U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v630 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x276U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x276U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x276U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x276U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x276U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v631 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x277U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x277U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x277U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x277U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x277U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v632 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x278U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x278U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x278U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x278U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x278U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v633 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x279U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x279U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x279U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x279U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x279U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v634 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x27aU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x27aU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x27aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x27aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x27aU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v635 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x27bU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x27bU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x27bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x27bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x27bU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v636 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x27cU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x27cU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x27cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x27cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x27cU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v637 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x27dU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x27dU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x27dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x27dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x27dU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v638 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x27eU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x27eU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x27eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x27eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x27eU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v639 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x27fU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x27fU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x27fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x27fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x27fU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v640 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x280U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x280U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x280U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x280U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x280U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v641 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x281U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x281U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x281U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x281U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x281U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v642 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x282U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x282U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x282U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x282U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x282U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v643 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x283U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x283U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x283U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x283U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x283U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v644 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x284U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x284U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x284U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x284U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x284U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v645 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x285U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x285U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x285U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x285U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x285U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v646 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x286U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x286U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x286U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x286U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x286U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v647 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x287U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x287U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x287U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x287U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x287U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v648 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x288U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x288U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x288U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x288U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x288U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v649 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x289U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x289U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x289U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x289U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x289U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v650 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x28aU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x28aU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x28aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x28aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x28aU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v651 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x28bU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x28bU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x28bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x28bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x28bU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v652 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x28cU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x28cU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x28cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x28cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x28cU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v653 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x28dU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x28dU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x28dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x28dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x28dU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v654 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x28eU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x28eU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x28eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x28eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x28eU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v655 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x28fU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x28fU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x28fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x28fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x28fU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v656 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x290U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x290U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x290U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x290U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x290U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v657 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x291U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x291U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x291U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x291U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x291U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v658 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x292U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x292U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x292U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x292U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x292U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v659 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x293U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x293U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x293U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x293U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x293U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v660 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x294U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x294U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x294U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x294U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x294U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v661 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x295U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x295U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x295U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x295U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x295U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v662 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x296U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x296U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x296U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x296U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x296U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v663 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x297U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x297U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x297U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x297U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x297U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v664 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x298U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x298U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x298U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x298U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x298U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v665 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x299U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x299U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x299U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x299U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x299U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v666 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x29aU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x29aU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x29aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x29aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x29aU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v667 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x29bU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x29bU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x29bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x29bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x29bU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v668 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x29cU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x29cU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x29cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x29cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x29cU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v669 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x29dU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x29dU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x29dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x29dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x29dU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v670 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x29eU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x29eU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x29eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x29eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x29eU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v671 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x29fU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x29fU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x29fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x29fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x29fU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v672 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2a0U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a0U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2a0U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v673 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2a1U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a1U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2a1U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v674 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2a2U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a2U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2a2U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v675 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2a3U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a3U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2a3U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v676 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2a4U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a4U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2a4U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v677 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2a5U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a5U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2a5U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v678 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2a6U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a6U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2a6U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v679 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2a7U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a7U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2a7U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v680 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2a8U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a8U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2a8U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v681 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2a9U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2a9U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2a9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2a9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2a9U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v682 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2aaU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2aaU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2aaU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2aaU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2aaU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v683 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2abU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2abU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2abU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2abU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2abU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v684 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2acU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2acU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2acU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2acU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2acU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v685 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2adU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2adU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2adU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2adU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2adU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v686 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2aeU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2aeU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2aeU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2aeU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2aeU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v687 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2afU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2afU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2afU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2afU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2afU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v688 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2b0U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b0U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2b0U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v689 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2b1U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b1U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2b1U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v690 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2b2U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b2U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2b2U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v691 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2b3U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b3U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2b3U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v692 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2b4U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b4U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2b4U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v693 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2b5U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b5U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2b5U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v694 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2b6U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b6U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2b6U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v695 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2b7U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b7U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2b7U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v696 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2b8U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b8U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2b8U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v697 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2b9U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2b9U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2b9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2b9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2b9U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v698 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2baU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2baU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2baU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2baU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2baU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v699 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2bbU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2bbU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2bbU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2bbU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2bbU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v700 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2bcU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2bcU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2bcU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2bcU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2bcU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v701 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2bdU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2bdU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2bdU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2bdU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2bdU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v702 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2beU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2beU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2beU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2beU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2beU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v703 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2bfU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2bfU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2bfU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2bfU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2bfU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v704 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2c0U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c0U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2c0U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v705 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2c1U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c1U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2c1U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v706 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2c2U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c2U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2c2U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v707 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2c3U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c3U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2c3U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v708 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2c4U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c4U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2c4U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v709 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2c5U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c5U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2c5U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v710 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2c6U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c6U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2c6U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v711 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2c7U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c7U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2c7U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v712 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2c8U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c8U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2c8U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v713 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2c9U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2c9U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2c9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2c9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2c9U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v714 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2caU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2caU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2caU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2caU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2caU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v715 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2cbU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2cbU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2cbU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2cbU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2cbU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v716 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2ccU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2ccU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2ccU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2ccU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2ccU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v717 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2cdU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2cdU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2cdU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2cdU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2cdU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v718 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2ceU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2ceU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2ceU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2ceU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2ceU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v719 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2cfU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2cfU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2cfU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2cfU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2cfU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v720 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2d0U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d0U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2d0U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v721 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2d1U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d1U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2d1U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v722 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2d2U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d2U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2d2U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v723 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2d3U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d3U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2d3U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v724 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2d4U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d4U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2d4U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v725 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2d5U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d5U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2d5U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v726 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2d6U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d6U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2d6U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v727 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2d7U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d7U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2d7U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v728 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2d8U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d8U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2d8U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v729 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2d9U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2d9U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2d9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2d9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2d9U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v730 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2daU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2daU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2daU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2daU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2daU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v731 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2dbU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2dbU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2dbU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2dbU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2dbU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v732 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2dcU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2dcU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2dcU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2dcU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2dcU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v733 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2ddU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2ddU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2ddU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2ddU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2ddU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v734 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2deU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2deU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2deU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2deU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2deU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v735 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2dfU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2dfU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2dfU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2dfU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2dfU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v736 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2e0U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e0U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2e0U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v737 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2e1U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e1U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2e1U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v738 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2e2U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e2U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2e2U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v739 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2e3U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e3U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2e3U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v740 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2e4U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e4U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2e4U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v741 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2e5U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e5U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2e5U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v742 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2e6U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e6U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2e6U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v743 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2e7U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e7U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2e7U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v744 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2e8U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e8U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2e8U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v745 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2e9U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2e9U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2e9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2e9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2e9U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v746 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2eaU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2eaU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2eaU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2eaU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2eaU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v747 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2ebU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2ebU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2ebU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2ebU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2ebU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v748 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2ecU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2ecU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2ecU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2ecU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2ecU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v749 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2edU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2edU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2edU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2edU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2edU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v750 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2eeU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2eeU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2eeU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2eeU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2eeU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v751 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2efU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2efU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2efU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2efU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2efU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v752 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2f0U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f0U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2f0U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v753 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2f1U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f1U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2f1U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v754 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2f2U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f2U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2f2U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v755 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2f3U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f3U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2f3U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v756 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2f4U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f4U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2f4U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v757 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2f5U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f5U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2f5U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v758 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2f6U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f6U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2f6U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v759 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2f7U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f7U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2f7U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v760 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2f8U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f8U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2f8U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v761 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2f9U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2f9U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2f9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2f9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2f9U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v762 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2faU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2faU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2faU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2faU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2faU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v763 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2fbU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2fbU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2fbU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2fbU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2fbU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v764 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2fcU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2fcU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2fcU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2fcU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2fcU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v765 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2fdU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2fdU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2fdU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2fdU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2fdU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v766 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2feU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2feU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2feU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2feU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2feU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v767 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x2ffU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2ffU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x2ffU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2ffU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2ffU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v768 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x300U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x300U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x300U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x300U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x300U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v769 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x301U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x301U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x301U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x301U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x301U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v770 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x302U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x302U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x302U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x302U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x302U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v771 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x303U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x303U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x303U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x303U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x303U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v772 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x304U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x304U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x304U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x304U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x304U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v773 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x305U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x305U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x305U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x305U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x305U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v774 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x306U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x306U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x306U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x306U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x306U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v775 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x307U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x307U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x307U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x307U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x307U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v776 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x308U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x308U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x308U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x308U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x308U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v777 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x309U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x309U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x309U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x309U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x309U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v778 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x30aU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x30aU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x30aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x30aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x30aU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v779 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x30bU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x30bU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x30bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x30bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x30bU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v780 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x30cU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x30cU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x30cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x30cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x30cU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v781 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x30dU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x30dU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x30dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x30dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x30dU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v782 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x30eU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x30eU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x30eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x30eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x30eU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v783 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x30fU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x30fU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x30fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x30fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x30fU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v784 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x310U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x310U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x310U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x310U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x310U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v785 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x311U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x311U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x311U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x311U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x311U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v786 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x312U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x312U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x312U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x312U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x312U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v787 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x313U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x313U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x313U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x313U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x313U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v788 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x314U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x314U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x314U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x314U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x314U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v789 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x315U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x315U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x315U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x315U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x315U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v790 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x316U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x316U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x316U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x316U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x316U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v791 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x317U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x317U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x317U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x317U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x317U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v792 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x318U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x318U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x318U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x318U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x318U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v793 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x319U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x319U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x319U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x319U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x319U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v794 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x31aU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x31aU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x31aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x31aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x31aU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v795 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x31bU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x31bU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x31bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x31bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x31bU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v796 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x31cU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x31cU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x31cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x31cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x31cU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v797 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x31dU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x31dU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x31dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x31dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x31dU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v798 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x31eU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x31eU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x31eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x31eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x31eU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v799 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x31fU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x31fU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x31fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x31fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x31fU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v800 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x320U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x320U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x320U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x320U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x320U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v801 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x321U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x321U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x321U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x321U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x321U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v802 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x322U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x322U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x322U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x322U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x322U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v803 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x323U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x323U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x323U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x323U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x323U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v804 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x324U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x324U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x324U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x324U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x324U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v805 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x325U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x325U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x325U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x325U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x325U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v806 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x326U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x326U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x326U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x326U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x326U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v807 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x327U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x327U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x327U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x327U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x327U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v808 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x328U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x328U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x328U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x328U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x328U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v809 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x329U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x329U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x329U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x329U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x329U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v810 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x32aU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x32aU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x32aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x32aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x32aU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v811 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x32bU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x32bU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x32bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x32bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x32bU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v812 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x32cU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x32cU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x32cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x32cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x32cU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v813 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x32dU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x32dU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x32dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x32dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x32dU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v814 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x32eU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x32eU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x32eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x32eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x32eU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v815 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x32fU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x32fU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x32fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x32fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x32fU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v816 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x330U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x330U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x330U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x330U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x330U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v817 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x331U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x331U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x331U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x331U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x331U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v818 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x332U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x332U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x332U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x332U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x332U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v819 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x333U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x333U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x333U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x333U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x333U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v820 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x334U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x334U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x334U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x334U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x334U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v821 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x335U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x335U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x335U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x335U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x335U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v822 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x336U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x336U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x336U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x336U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x336U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v823 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x337U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x337U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x337U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x337U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x337U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v824 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x338U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x338U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x338U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x338U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x338U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v825 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x339U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x339U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x339U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x339U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x339U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v826 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x33aU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x33aU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x33aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x33aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x33aU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v827 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x33bU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x33bU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x33bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x33bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x33bU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v828 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x33cU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x33cU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x33cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x33cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x33cU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v829 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x33dU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x33dU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x33dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x33dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x33dU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v830 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x33eU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x33eU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x33eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x33eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x33eU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v831 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x33fU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x33fU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x33fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x33fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x33fU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v832 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x340U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x340U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x340U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x340U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x340U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v833 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x341U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x341U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x341U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x341U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x341U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v834 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x342U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x342U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x342U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x342U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x342U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v835 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x343U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x343U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x343U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x343U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x343U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v836 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x344U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x344U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x344U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x344U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x344U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v837 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x345U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x345U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x345U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x345U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x345U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v838 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x346U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x346U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x346U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x346U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x346U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v839 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x347U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x347U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x347U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x347U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x347U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v840 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x348U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x348U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x348U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x348U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x348U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v841 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x349U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x349U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x349U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x349U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x349U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v842 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x34aU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x34aU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x34aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x34aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x34aU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v843 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x34bU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x34bU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x34bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x34bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x34bU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v844 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x34cU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x34cU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x34cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x34cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x34cU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v845 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x34dU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x34dU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x34dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x34dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x34dU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v846 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x34eU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x34eU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x34eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x34eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x34eU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v847 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x34fU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x34fU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x34fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x34fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x34fU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v848 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x350U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x350U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x350U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x350U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x350U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v849 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x351U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x351U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x351U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x351U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x351U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v850 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x352U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x352U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x352U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x352U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x352U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v851 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x353U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x353U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x353U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x353U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x353U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v852 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x354U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x354U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x354U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x354U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x354U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v853 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x355U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x355U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x355U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x355U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x355U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v854 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x356U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x356U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x356U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x356U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x356U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v855 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x357U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x357U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x357U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x357U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x357U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v856 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x358U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x358U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x358U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x358U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x358U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v857 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x359U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x359U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x359U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x359U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x359U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v858 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x35aU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x35aU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x35aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x35aU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v859 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x35bU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x35bU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x35bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x35bU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v860 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x35cU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x35cU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x35cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x35cU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v861 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x35dU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x35dU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x35dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x35dU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v862 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x35eU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x35eU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x35eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x35eU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v863 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x35fU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x35fU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x35fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x35fU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v864 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x360U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x360U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x360U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x360U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x360U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v865 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x361U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x361U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x361U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x361U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x361U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v866 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x362U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x362U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x362U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x362U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x362U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v867 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x363U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x363U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x363U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x363U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x363U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v868 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x364U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x364U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x364U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x364U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x364U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v869 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x365U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x365U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x365U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x365U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x365U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v870 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x366U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x366U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x366U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x366U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x366U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v871 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x367U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x367U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x367U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x367U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x367U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v872 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x368U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x368U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x368U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x368U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x368U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v873 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x369U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x369U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x369U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x369U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x369U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v874 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x36aU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x36aU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x36aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x36aU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v875 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x36bU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x36bU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x36bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x36bU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v876 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x36cU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x36cU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x36cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x36cU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v877 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x36dU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x36dU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x36dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x36dU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v878 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x36eU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x36eU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x36eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x36eU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v879 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x36fU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x36fU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x36fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x36fU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v880 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x370U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x370U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x370U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x370U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x370U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v881 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x371U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x371U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x371U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x371U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x371U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v882 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x372U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x372U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x372U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x372U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x372U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v883 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x373U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x373U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x373U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x373U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x373U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v884 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x374U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x374U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x374U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x374U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x374U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v885 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x375U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x375U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x375U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x375U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x375U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v886 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x376U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x376U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x376U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x376U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x376U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v887 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x377U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x377U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x377U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x377U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x377U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v888 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x378U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x378U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x378U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x378U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x378U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v889 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x379U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x379U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x379U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x379U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x379U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v890 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x37aU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x37aU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x37aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x37aU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v891 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x37bU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x37bU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x37bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x37bU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v892 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x37cU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x37cU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x37cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x37cU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v893 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x37dU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x37dU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x37dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x37dU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v894 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x37eU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x37eU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x37eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x37eU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v895 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x37fU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x37fU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x37fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x37fU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v896 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x380U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x380U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x380U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x380U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x380U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v897 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x381U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x381U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x381U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x381U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x381U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v898 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x382U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x382U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x382U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x382U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x382U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v899 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x383U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x383U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x383U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x383U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x383U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v900 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x384U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x384U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x384U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x384U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x384U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v901 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x385U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x385U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x385U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x385U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x385U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v902 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x386U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x386U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x386U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x386U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x386U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v903 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x387U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x387U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x387U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x387U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x387U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v904 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x388U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x388U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x388U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x388U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x388U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v905 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x389U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x389U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x389U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x389U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x389U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v906 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x38aU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x38aU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x38aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x38aU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v907 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x38bU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x38bU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x38bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x38bU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v908 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x38cU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x38cU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x38cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x38cU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v909 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x38dU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x38dU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x38dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x38dU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v910 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x38eU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x38eU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x38eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x38eU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v911 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x38fU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x38fU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x38fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x38fU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v912 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x390U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x390U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x390U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x390U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x390U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v913 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x391U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x391U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x391U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x391U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x391U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v914 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x392U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x392U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x392U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x392U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x392U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v915 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x393U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x393U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x393U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x393U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x393U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v916 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x394U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x394U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x394U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x394U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x394U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v917 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x395U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x395U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x395U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x395U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x395U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v918 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x396U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x396U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x396U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x396U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x396U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v919 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x397U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x397U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x397U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x397U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x397U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v920 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x398U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x398U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x398U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x398U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x398U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v921 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x399U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x399U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x399U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x399U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x399U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v922 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x39aU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x39aU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x39aU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x39aU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v923 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x39bU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x39bU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x39bU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x39bU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v924 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x39cU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x39cU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x39cU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x39cU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v925 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x39dU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x39dU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x39dU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x39dU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v926 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x39eU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x39eU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x39eU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x39eU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v927 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x39fU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x39fU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x39fU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x39fU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v928 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3a0U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a0U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a0U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v929 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3a1U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a1U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a1U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v930 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3a2U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a2U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a2U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v931 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3a3U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a3U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a3U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v932 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3a4U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a4U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a4U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v933 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3a5U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a5U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a5U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v934 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3a6U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a6U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a6U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v935 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3a7U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a7U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a7U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v936 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3a8U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a8U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a8U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v937 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3a9U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a9U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a9U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v938 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3aaU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3aaU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3aaU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3aaU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3aaU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v939 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3abU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3abU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3abU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3abU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3abU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v940 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3acU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3acU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3acU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3acU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3acU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v941 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3adU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3adU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3adU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3adU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3adU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v942 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3aeU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3aeU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3aeU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3aeU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3aeU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v943 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3afU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3afU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3afU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3afU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3afU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v944 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3b0U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b0U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b0U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v945 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3b1U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b1U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b1U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v946 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3b2U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b2U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b2U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v947 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3b3U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b3U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b3U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v948 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3b4U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b4U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b4U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v949 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3b5U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b5U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b5U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v950 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3b6U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b6U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b6U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v951 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3b7U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b7U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b7U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v952 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3b8U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b8U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b8U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v953 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3b9U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b9U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b9U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v954 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3baU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3baU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3baU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3baU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3baU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v955 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3bbU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3bbU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3bbU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3bbU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3bbU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v956 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3bcU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3bcU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3bcU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3bcU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3bcU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v957 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3bdU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3bdU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3bdU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3bdU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3bdU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v958 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3beU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3beU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3beU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3beU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3beU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v959 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3bfU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3bfU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3bfU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3bfU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3bfU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v960 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3c0U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c0U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c0U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v961 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3c1U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c1U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c1U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v962 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3c2U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c2U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c2U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v963 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3c3U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c3U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c3U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v964 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3c4U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c4U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c4U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v965 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3c5U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c5U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c5U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v966 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3c6U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c6U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c6U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v967 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3c7U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c7U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c7U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v968 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3c8U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c8U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c8U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v969 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3c9U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c9U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c9U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v970 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3caU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3caU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3caU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3caU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3caU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v971 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3cbU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3cbU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3cbU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3cbU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3cbU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v972 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3ccU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3ccU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3ccU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3ccU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3ccU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v973 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3cdU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3cdU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3cdU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3cdU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3cdU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v974 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3ceU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3ceU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3ceU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3ceU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3ceU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v975 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3cfU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3cfU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3cfU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3cfU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3cfU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v976 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3d0U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d0U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d0U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v977 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3d1U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d1U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d1U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v978 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3d2U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d2U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d2U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d2U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v979 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3d3U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d3U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d3U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d3U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v980 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3d4U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d4U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d4U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d4U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v981 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3d5U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d5U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d5U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d5U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v982 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3d6U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d6U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d6U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d6U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v983 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3d7U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d7U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d7U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d7U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v984 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3d8U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d8U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d8U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d8U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v985 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3d9U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d9U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d9U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d9U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v986 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3daU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3daU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3daU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3daU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3daU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v987 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3dbU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3dbU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3dbU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3dbU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3dbU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v988 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3dcU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3dcU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3dcU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3dcU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3dcU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v989 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3ddU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3ddU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3ddU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3ddU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3ddU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v990 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3deU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3deU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3deU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3deU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3deU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v991 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3dfU == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3dfU]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3dfU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3dfU]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3dfU]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v992 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3e0U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3e0U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3e0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3e0U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3e0U]);
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v993 
            = (((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_bj) 
                & (0x3e1U == (IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3e1U]) ? ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3e1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3e1U]) ? ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3e1U]);
    } else {
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v623 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v624 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v625 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v626 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v627 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v628 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v629 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v630 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v631 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v632 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v633 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v634 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v635 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v636 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v637 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v638 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v639 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v640 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v641 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v642 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v643 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v644 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v645 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v646 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v647 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v648 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v649 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v650 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v651 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v652 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v653 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v654 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v655 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v656 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v657 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v658 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v659 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v660 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v661 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v662 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v663 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v664 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v665 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v666 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v667 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v668 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v669 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v670 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v671 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v672 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v673 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v674 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v675 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v676 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v677 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v678 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v679 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v680 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v681 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v682 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v683 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v684 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v685 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v686 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v687 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v688 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v689 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v690 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v691 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v692 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v693 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v694 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v695 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v696 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v697 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v698 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v699 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v700 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v701 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v702 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v703 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v704 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v705 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v706 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v707 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v708 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v709 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v710 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v711 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v712 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v713 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v714 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v715 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v716 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v717 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v718 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v719 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v720 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v721 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v722 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v723 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v724 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v725 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v726 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v727 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v728 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v729 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v730 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v731 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v732 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v733 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v734 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v735 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v736 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v737 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v738 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v739 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v740 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v741 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v742 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v743 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v744 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v745 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v746 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v747 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v748 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v749 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v750 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v751 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v752 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v753 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v754 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v755 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v756 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v757 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v758 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v759 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v760 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v761 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v762 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v763 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v764 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v765 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v766 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v767 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v768 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v769 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v770 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v771 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v772 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v773 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v774 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v775 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v776 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v777 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v778 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v779 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v780 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v781 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v782 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v783 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v784 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v785 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v786 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v787 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v788 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v789 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v790 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v791 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v792 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v793 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v794 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v795 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v796 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v797 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v798 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v799 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v800 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v801 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v802 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v803 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v804 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v805 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v806 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v807 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v808 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v809 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v810 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v811 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v812 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v813 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v814 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v815 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v816 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v817 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v818 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v819 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v820 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v821 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v822 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v823 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v824 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v825 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v826 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v827 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v828 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v829 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v830 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v831 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v832 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v833 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v834 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v835 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v836 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v837 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v838 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v839 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v840 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v841 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v842 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v843 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v844 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v845 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v846 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v847 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v848 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v849 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v850 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v851 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v852 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v853 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v854 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v855 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v856 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v857 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v858 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v859 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v860 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v861 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v862 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v863 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v864 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v865 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v866 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v867 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v868 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v869 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v870 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v871 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v872 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v873 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v874 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v875 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v876 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v877 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v878 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v879 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v880 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v881 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v882 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v883 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v884 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v885 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v886 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v887 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v888 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v889 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v890 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v891 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v892 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v893 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v894 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v895 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v896 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v897 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v898 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v899 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v900 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v901 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v902 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v903 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v904 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v905 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v906 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v907 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v908 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v909 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v910 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v911 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v912 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v913 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v914 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v915 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v916 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v917 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v918 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v919 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v920 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v921 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v922 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v923 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v924 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v925 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v926 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v927 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v928 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v929 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v930 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v931 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v932 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v933 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v934 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v935 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v936 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v937 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v938 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v939 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v940 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v941 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v942 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v943 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v944 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v945 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v946 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v947 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v948 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v949 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v950 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v951 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v952 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v953 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v954 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v955 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v956 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v957 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v958 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v959 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v960 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v961 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v962 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v963 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v964 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v965 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v966 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v967 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v968 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v969 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v970 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v971 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v972 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v973 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v974 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v975 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v976 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v977 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v978 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v979 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v980 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v981 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v982 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v983 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v984 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v985 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v986 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v987 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v988 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v989 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v990 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v991 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v992 = 2U;
        vlSelf->__Vdlyvval__top_with_uart__DOT__inst_cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v993 = 2U;
    }
}
