// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEXTERNAL_TOP.h for the primary calling header

#include "VEXTERNAL_TOP__pch.h"

extern "C" int pmem_read(int addr);

void VEXTERNAL_TOP___024unit____Vdpiimwrap_pmem_read_TOP____024unit(IData/*31:0*/ addr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VEXTERNAL_TOP___024unit____Vdpiimwrap_pmem_read_TOP____024unit\n"); );
    // Body
    int addr__Vcvt;
    addr__Vcvt = addr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(addr__Vcvt);
    pmem_read__Vfuncrtn = (pmem_read__Vfuncrtn__Vcvt);
}

extern "C" void pmem_write(int data, int addr, int wmask);

void VEXTERNAL_TOP___024unit____Vdpiimwrap_pmem_write_TOP____024unit(IData/*31:0*/ data, IData/*31:0*/ addr, IData/*31:0*/ wmask) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VEXTERNAL_TOP___024unit____Vdpiimwrap_pmem_write_TOP____024unit\n"); );
    // Body
    int data__Vcvt;
    data__Vcvt = data;
    int addr__Vcvt;
    addr__Vcvt = addr;
    int wmask__Vcvt;
    wmask__Vcvt = wmask;
    pmem_write(data__Vcvt, addr__Vcvt, wmask__Vcvt);
}

extern "C" void dut_ebreak(int code);

void VEXTERNAL_TOP___024unit____Vdpiimwrap_dut_ebreak_TOP____024unit(IData/*31:0*/ code) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VEXTERNAL_TOP___024unit____Vdpiimwrap_dut_ebreak_TOP____024unit\n"); );
    // Body
    int code__Vcvt;
    code__Vcvt = code;
    dut_ebreak(code__Vcvt);
}
