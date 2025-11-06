// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcommon__Syms.h"
#include "Vcommon.h"
#include "Vcommon___024root.h"
#include "Vcommon___024unit.h"

// FUNCTIONS
Vcommon__Syms::~Vcommon__Syms()
{
}

Vcommon__Syms::Vcommon__Syms(VerilatedContext* contextp, const char* namep,Vcommon* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
