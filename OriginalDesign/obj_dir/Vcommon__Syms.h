// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCOMMON__SYMS_H_
#define VERILATED_VCOMMON__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcommon.h"

// INCLUDE MODULE CLASSES
#include "Vcommon___024root.h"
#include "Vcommon___024unit.h"

// SYMS CLASS (contains all model state)
class Vcommon__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcommon* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcommon___024root              TOP;

    // CONSTRUCTORS
    Vcommon__Syms(VerilatedContext* contextp, const char* namep, Vcommon* modelp);
    ~Vcommon__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
