// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon__Syms.h"
#include "Vcommon___024root.h"

void Vcommon___024root___ctor_var_reset(Vcommon___024root* vlSelf);

Vcommon___024root::Vcommon___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcommon___024root___ctor_var_reset(this);
}

void Vcommon___024root::__Vconfigure(Vcommon__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcommon___024root::~Vcommon___024root() {
}
