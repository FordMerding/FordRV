// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VEXTERNAL_TOP__pch.h"

//============================================================
// Constructors

VEXTERNAL_TOP::VEXTERNAL_TOP(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VEXTERNAL_TOP__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , cpuClock{vlSymsp->TOP.cpuClock}
    , __PVT____024unit{vlSymsp->TOP.__PVT____024unit}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VEXTERNAL_TOP::VEXTERNAL_TOP(const char* _vcname__)
    : VEXTERNAL_TOP(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VEXTERNAL_TOP::~VEXTERNAL_TOP() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VEXTERNAL_TOP___024root___eval_debug_assertions(VEXTERNAL_TOP___024root* vlSelf);
#endif  // VL_DEBUG
void VEXTERNAL_TOP___024root___eval_static(VEXTERNAL_TOP___024root* vlSelf);
void VEXTERNAL_TOP___024root___eval_initial(VEXTERNAL_TOP___024root* vlSelf);
void VEXTERNAL_TOP___024root___eval_settle(VEXTERNAL_TOP___024root* vlSelf);
void VEXTERNAL_TOP___024root___eval(VEXTERNAL_TOP___024root* vlSelf);

void VEXTERNAL_TOP::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VEXTERNAL_TOP::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VEXTERNAL_TOP___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VEXTERNAL_TOP___024root___eval_static(&(vlSymsp->TOP));
        VEXTERNAL_TOP___024root___eval_initial(&(vlSymsp->TOP));
        VEXTERNAL_TOP___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VEXTERNAL_TOP___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VEXTERNAL_TOP::eventsPending() { return false; }

uint64_t VEXTERNAL_TOP::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VEXTERNAL_TOP::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VEXTERNAL_TOP___024root___eval_final(VEXTERNAL_TOP___024root* vlSelf);

VL_ATTR_COLD void VEXTERNAL_TOP::final() {
    contextp()->executingFinal(true);
    VEXTERNAL_TOP___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VEXTERNAL_TOP::hierName() const { return vlSymsp->name(); }
const char* VEXTERNAL_TOP::modelName() const { return "VEXTERNAL_TOP"; }
unsigned VEXTERNAL_TOP::threads() const { return 1; }
void VEXTERNAL_TOP::prepareClone() const { contextp()->prepareClone(); }
void VEXTERNAL_TOP::atClone() const {
    contextp()->threadPoolpOnClone();
}
