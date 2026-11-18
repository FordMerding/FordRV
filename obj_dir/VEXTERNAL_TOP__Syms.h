// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VEXTERNAL_TOP__SYMS_H_
#define VERILATED_VEXTERNAL_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VEXTERNAL_TOP.h"

// INCLUDE MODULE CLASSES
#include "VEXTERNAL_TOP___024root.h"
#include "VEXTERNAL_TOP___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) VEXTERNAL_TOP__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VEXTERNAL_TOP* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VEXTERNAL_TOP___024root        TOP;
    VEXTERNAL_TOP___024unit        TOP____024unit;

    // CONSTRUCTORS
    VEXTERNAL_TOP__Syms(VerilatedContext* contextp, const char* namep, VEXTERNAL_TOP* modelp);
    ~VEXTERNAL_TOP__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
