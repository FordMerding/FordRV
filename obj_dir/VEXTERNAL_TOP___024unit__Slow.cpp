// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEXTERNAL_TOP.h for the primary calling header

#include "VEXTERNAL_TOP__pch.h"


VEXTERNAL_TOP___024unit::VEXTERNAL_TOP___024unit() = default;
VEXTERNAL_TOP___024unit::~VEXTERNAL_TOP___024unit() = default;

void VEXTERNAL_TOP___024unit::ctor(VEXTERNAL_TOP__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
}

void VEXTERNAL_TOP___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void VEXTERNAL_TOP___024unit::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
