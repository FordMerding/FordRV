// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VEXTERNAL_TOP__DPI_H_
#define VERILATED_VEXTERNAL_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at vsrc/EXTERNAL.v:3:30
    extern void dut_ebreak(int code);
    // DPI import at vsrc/EXTERNAL.v:4:30
    extern void dut_executed(int status);
    // DPI import at vsrc/EXTERNAL.v:1:29
    extern int pmem_read(int addr);
    // DPI import at vsrc/EXTERNAL.v:2:30
    extern void pmem_write(int data, int addr, int wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
