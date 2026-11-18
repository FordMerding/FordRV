// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEXTERNAL_TOP.h for the primary calling header

#include "VEXTERNAL_TOP__pch.h"

void VEXTERNAL_TOP___024root___ctor_var_reset(VEXTERNAL_TOP___024root* vlSelf);

VEXTERNAL_TOP___024root::VEXTERNAL_TOP___024root(VEXTERNAL_TOP__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    VEXTERNAL_TOP___024root___ctor_var_reset(this);
}

void VEXTERNAL_TOP___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VEXTERNAL_TOP___024root::~VEXTERNAL_TOP___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
