// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VEXTERNAL_TOP.h for the primary calling header

#ifndef VERILATED_VEXTERNAL_TOP___024UNIT_H_
#define VERILATED_VEXTERNAL_TOP___024UNIT_H_  // guard

#include "verilated.h"


class VEXTERNAL_TOP__Syms;

class alignas(VL_CACHE_LINE_BYTES) VEXTERNAL_TOP___024unit final {
  public:

    // INTERNAL VARIABLES
    VEXTERNAL_TOP__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    VEXTERNAL_TOP___024unit();
    ~VEXTERNAL_TOP___024unit();
    void ctor(VEXTERNAL_TOP__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(VEXTERNAL_TOP___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
