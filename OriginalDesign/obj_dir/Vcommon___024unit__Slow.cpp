// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon__Syms.h"
#include "Vcommon___024unit.h"

void Vcommon___024unit___ctor_var_reset(Vcommon___024unit* vlSelf);

Vcommon___024unit::Vcommon___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vcommon___024unit___ctor_var_reset(this);
}

void Vcommon___024unit::__Vconfigure(Vcommon__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vcommon___024unit::~Vcommon___024unit() {
}
