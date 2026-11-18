// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VEXTERNAL_TOP.h for the primary calling header

#include "VEXTERNAL_TOP__pch.h"

VL_ATTR_COLD void VEXTERNAL_TOP___024root___stl_sequent__TOP__1(VEXTERNAL_TOP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEXTERNAL_TOP___024root___stl_sequent__TOP__1\n"); );
    VEXTERNAL_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y_B0;
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y_B0 = 0;
    CData/*0:0*/ EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_Y;
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_Y = 0;
    CData/*0:0*/ EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1;
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1 = 0;
    CData/*0:0*/ EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X0P5H7H_A0_Y;
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X0P5H7H_A0_Y = 0;
    CData/*0:0*/ EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X1P4H7L_Y_A0_INVX0P5H7H_A_Y_AOAI211X1P4H7L_B0_Y;
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X1P4H7L_Y_A0_INVX0P5H7H_A_Y_AOAI211X1P4H7L_B0_Y = 0;
    CData/*0:0*/ EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN;
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN = 0;
    CData/*0:0*/ EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X1P4H7L_Y_A_NOR2X0P5H7H_Y_B_AOI31X1P4H7L_Y_A2_OAI21X0P5H7H_Y__DOT__outA;
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X1P4H7L_Y_A_NOR2X0P5H7H_Y_B_AOI31X1P4H7L_Y_A2_OAI21X0P5H7H_Y__DOT__outA = 0;
    CData/*0:0*/ EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2BX0P7H7H_Y_AN_AOI21X0P5H7H_Y__DOT__OUT0;
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2BX0P7H7H_Y_AN_AOI21X0P5H7H_Y__DOT__OUT0 = 0;
    CData/*0:0*/ EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__A0_inv;
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__A0_inv = 0;
    CData/*0:0*/ EXTERNAL_TOP__DOT__cpu__DOT__next_PC_25___05FOAOI211X0P5H7H_Y__DOT__A0_inv;
    EXTERNAL_TOP__DOT__cpu__DOT__next_PC_25___05FOAOI211X0P5H7H_Y__DOT__A0_inv = 0;
    CData/*0:0*/ EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2X0P5H7H_Y_A_AO22X0P5H7H_Y__DOT__OUT1;
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2X0P5H7H_Y_A_AO22X0P5H7H_Y__DOT__OUT1 = 0;
    CData/*0:0*/ EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y__DOT__outA;
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y__DOT__outA = 0;
    CData/*0:0*/ EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y_B0_AOAI211X1P4H7L_Y__DOT__A0_inv;
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y_B0_AOAI211X1P4H7L_Y__DOT__A0_inv = 0;
    CData/*0:0*/ __VdfgRegularize_h6e95ff9d_0_153;
    __VdfgRegularize_h6e95ff9d_0_153 = 0;
    // Body
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_10__Y 
        = (1U ^ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y_C0_AOAI211X1P4H7L_C0__DOT__A0_inv) 
                 ^ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_18___05FAO221X0P5H7H_A0_Y_OAI211X0P7H7H_A0_Y_AOI221X0P5H7H_A1_Y_OA31X0P5H7H_A1_Y)));
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y__DOT__outA 
        = ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y_C0_AOAI211X1P4H7L_C0__DOT__A0_inv)) 
           & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_18___05FAO221X0P5H7H_A0_Y_OAI211X0P7H7H_A0_Y_AOI221X0P5H7H_A1_Y_OA31X0P5H7H_A1_Y));
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2X0P5H7H_Y_A_AO22X0P5H7H_Y__DOT__OUT1 
        = ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y_C0_INVX0P5H7H_Y_A_OAI21BX0P5H7H_Y__DOT__outA) 
           & ((~ (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_18___05FAO221X0P5H7H_A0_Y_OAI211X0P7H7H_A0_Y_AOI221X0P5H7H_A1_Y_OA31X0P5H7H_A1_Y) 
                   | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_18___05FAO221X0P5H7H_A0_Y_OAI211X0P7H7H_A0_Y_AOI221X0P5H7H_A1_Y_OAI21BX0P5H7H_A1_Y_INVX0P5H7H_A_Y)) 
                  & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y_C0))) 
              | ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_18___05FAO221X0P5H7H_A0_Y_OAI211X0P7H7H_A0_Y_AOI221X0P5H7H_A1_Y_OAI21BX0P5H7H_A1_Y_INVX0P5H7H_A_Y)) 
                 & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y_C0_AOAI211X1P4H7L_C0__DOT__A0_inv))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_32___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_31___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_51)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_18_ 
        = (1U & ((~ (((~ (((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_NAND3X0P5H7H_C_Y) 
                               & (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B_Y) 
                                   | (~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_18___05Freg_p__DOT__n0))) 
                                  & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_50___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y_OR2X0P5H7H_B_Y))))) 
                           & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_14___05FINVX0P5H7H_A_Y_OAI2XB1X0P5H7H_B0_Y_OAI21X0P5H7H_B0_Y_AND4X0P5H7H_A_Y)) 
                          | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_18___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y_A1) 
                             & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_18___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y_A0) 
                                & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y))))) 
                      & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_10__Y)) 
                         | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_OAI31X0P5H7H_A2_Y))) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))) 
                 | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_13___05FOAI211X0P7H7H_A0_Y_NOR3X0P5H7H_C_Y) 
                    & (vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_rdata 
                       >> 0x00000012U))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_A 
        = (((IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y__DOT__outA) 
            | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_18___05FAO221X0P5H7H_A0_Y_OAI211X0P7H7H_A0_Y_AOI221X0P5H7H_A1_Y_OAI21BX0P5H7H_A1_Y_INVX0P5H7H_A_Y)) 
           & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y_C0));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_19___05FOAOI211X0P5H7H_Y__DOT__A1_inv 
        = ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_18___05FAO221X0P5H7H_A0_Y_OAI211X0P7H7H_A0_Y_AOI221X0P5H7H_A1_Y_OAI21BX0P5H7H_A1_Y_INVX0P5H7H_A_Y) 
           | ((IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y__DOT__outA) 
              | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y_C0)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_20___05FAO22X0P5H7H_Y_B1_OAI2XB1X0P5H7H_Y__DOT__outA1 
        = ((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2X0P5H7H_Y_A_AO22X0P5H7H_Y__DOT__OUT0) 
               & (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2X0P5H7H_Y_A_AO22X0P5H7H_Y__DOT__OUT1))) 
           & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2X0P5H7H_Y_A_AO22X0P5H7H_Y__DOT__OUT0) 
              | (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2X0P5H7H_Y_A_AO22X0P5H7H_Y__DOT__OUT1)));
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X1P4H7L_Y_A_NOR2X0P5H7H_Y_B_AOI31X1P4H7L_Y_A2_OAI21X0P5H7H_Y__DOT__outA 
        = (1U & (~ (((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN_AOAI211X1P4H7L_Y__DOT__A0_inv) 
                         | (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XNOR2X0P5H7H_Y_1_A_OAI21X0P5H7H_Y_A1_AOI31X1P4H7L_Y_A2_NAND3BX0P5H7H_Y__DOT__Ax) 
                             & (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2X0P5H7H_Y_A_AO22X0P5H7H_Y__DOT__OUT1)) 
                            | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36)))) 
                     | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshPWskF9dXuXdEHMhuO6nHlgmg530wMphE3MABBz7h)) 
                    & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XNOR2X0P5H7H_Y_1_A_OAI21X0P5H7H_Y_B0_AOA211X0P5H7H_C0_Y))));
    __VdfgRegularize_h6e95ff9d_0_153 = ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XNOR2X0P5H7H_Y_1_A_OAI21X0P5H7H_Y_A1_AOI31X1P4H7L_Y_A2_NAND3BX0P5H7H_Y__DOT__Ax) 
                                        & ((IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2X0P5H7H_Y_A_AO22X0P5H7H_Y__DOT__OUT1) 
                                           | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_36)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_32___05Freg_p_QN_OR4X0P5H7H_C_Y 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_32___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_32___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__reg_file__02ewdata_19___05FAOAI211X0P5H7H_Y_A0_NAND3X0P5H7H_Y__C 
        = (1U & (~ ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_19___05FOAOI211X0P5H7H_Y__DOT__A1_inv)) 
                    | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_A))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_20_ 
        = (1U & ((~ (((~ (((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_AOAI211X0P5H7H_C0_Y) 
                               & (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B_Y) 
                                   | (~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_20___05Freg_p__DOT__n0))) 
                                  & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_52___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y_OR2X0P5H7H_B_Y))))) 
                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)) 
                          | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_20___05FMUX2X0P5H7H_Y_B) 
                             & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y)))) 
                      & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_20___05FAO22X0P5H7H_Y_B1_OAI2XB1X0P5H7H_Y__DOT__outA1) 
                         | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_OAI31X0P5H7H_A2_Y))) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))) 
                 | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_13___05FOAI211X0P7H7H_A0_Y_NOR3X0P5H7H_C_Y) 
                    & (vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_rdata 
                       >> 0x00000014U))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_23___05FAO22X0P5H7H_Y_B1_OAI2XB1X0P5H7H_Y__DOT__outA1 
        = (1U & ((~ ((IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X1P4H7L_Y_A_NOR2X0P5H7H_Y_B_AOI31X1P4H7L_Y_A2_OAI21X0P5H7H_Y__DOT__outA) 
                     & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XNOR2X0P5H7H_Y_1_A_OAI21X0P5H7H_Y_B0))) 
                 ^ (~ ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN_AOI21X1P4H7L_A1_B0)) 
                       & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XNOR2X0P5H7H_Y_1_B_NAND2X0P5H7H_Y_A)))));
    EXTERNAL_TOP__DOT__cpu__DOT__next_PC_25___05FOAOI211X0P5H7H_Y__DOT__A0_inv 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A0_AOA211X0P5H7H_C0_Y)) 
                 | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__B0_inv) 
                    & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__A1_inv) 
                       | (((IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X1P4H7L_Y_A_NOR2X0P5H7H_Y_B_AOI31X1P4H7L_Y_A2_OAI21X0P5H7H_Y__DOT__outA) 
                           & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN_AOI21X1P4H7L_A1_A0)) 
                          | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN_AOI21X1P4H7L_A1_B0))))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_11__Y 
        = ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN_AOAI211X1P4H7L_Y__DOT__A0_inv) 
           ^ (IData)(__VdfgRegularize_h6e95ff9d_0_153));
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XNOR2X0P5H7H_Y_1_A_OAI21X0P5H7H_Y_B0_AOA211X0P5H7H_C0_Y)) 
                 | ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshPWskF9dXuXdEHMhuO6nHlgmg530wMphE3MABBz7h)) 
                    & ((IData)(__VdfgRegularize_h6e95ff9d_0_153) 
                       | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN_AOAI211X1P4H7L_Y__DOT__A0_inv)))));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50 = (1U 
                                                 & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_33___05Freg_p__DOT__n0)) 
                                                    | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_32___05Freg_p_QN_OR4X0P5H7H_C_Y)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_19_ 
        = (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_10___05FAOAI211X0P5H7H_Y__DOT__B0_inv) 
            & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__reg_file__02ewdata_19___05FAOAI211X0P5H7H_Y_A0_NAND3X0P5H7H_Y__C) 
               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))) 
           | (((vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_rdata 
                >> 0x00000013U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)) 
              | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_10___05FAOAI211X0P5H7H_Y__DOT__B0_inv) 
                 & (((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_NAND3X0P5H7H_C_Y) 
                         & (((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_19___05Freg_p__DOT__n0)) 
                             | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B_Y)) 
                            & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y) 
                               | ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_51___05Freg_p__DOT__n0)) 
                                  | (~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B__DOT__Ax))))))) 
                     & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_14___05FINVX0P5H7H_A_Y_OAI2XB1X0P5H7H_B0_Y_OAI21X0P5H7H_B0_Y_AND4X0P5H7H_A_Y)) 
                    | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_19___05FOAOI211X0P5H7H_Y_C0_AOI21X0P5H7H_Y_A1) 
                       & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b21__05d_reg_p_QN_NOR3X0P5H7H_B_C) 
                          & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y)))))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_23_ 
        = (1U & ((~ (((~ (((~ (((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_55___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y_OR2X0P5H7H_B_Y)) 
                               & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_23___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)))) 
                           & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_14___05FINVX0P5H7H_A_Y_OAI2XB1X0P5H7H_B0_Y_OAI21X0P5H7H_B0_Y_AND4X0P5H7H_A_Y)) 
                          | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_23___05FAOI2BB1X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0) 
                             & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y)))) 
                      & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_23___05FAO22X0P5H7H_Y_B1_OAI2XB1X0P5H7H_Y__DOT__outA1) 
                         | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_OAI31X0P5H7H_A2_Y))) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))) 
                 | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_13___05FOAI211X0P7H7H_A0_Y_NOR3X0P5H7H_C_Y) 
                    & (vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_rdata 
                       >> 0x00000017U))));
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y_B0_AOAI211X1P4H7L_Y__DOT__A0_inv 
        = ((IData)(EXTERNAL_TOP__DOT__cpu__DOT__next_PC_25___05FOAOI211X0P5H7H_Y__DOT__A0_inv) 
           & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_B_OAI22X1P4H7L_Y__DOT__outA));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_21_ 
        = (((~ (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2)) 
            & (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_21___05FMUX2X0P5H7H_Y_B) 
                & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y)) 
               | (((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_AOAI211X0P5H7H_C0_Y) 
                       & (((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_21___05Freg_p__DOT__n0)) 
                           | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B_Y)) 
                          & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y) 
                             | ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_53___05Freg_p__DOT__n0)) 
                                | (~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B__DOT__Ax))))))) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)) 
                  | ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_OAI31X0P5H7H_A2_Y)) 
                     & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_11__Y))))) 
           | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_13___05FOAI211X0P7H7H_A0_Y_NOR3X0P5H7H_C_Y) 
              & (vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_rdata 
                 >> 0x00000015U)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_22___05FAOI2BB1X0P5H7H_Y__A1N 
        = (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XNOR2X0P5H7H_Y_1_A_OAI21X0P5H7H_Y_B0_AOA211X0P5H7H_C0_Y) 
            | (((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN_AOAI211X1P4H7L_Y__DOT__A0_inv)) 
                & (~ (IData)(__VdfgRegularize_h6e95ff9d_0_153))) 
               | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshPWskF9dXuXdEHMhuO6nHlgmg530wMphE3MABBz7h))) 
           & (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN));
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__A0_inv 
        = (((IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN) 
            & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN_AOI21X1P4H7L_A1_A0)) 
           | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN_AOI21X1P4H7L_A1_B0));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_35___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_34___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_50)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A 
        = ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0__DOT__B0_inv) 
           ^ (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y_B0_AOAI211X1P4H7L_Y__DOT__A0_inv));
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y_B0 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_27___05FMUX2X0P5H7H_A_Y_AO22X0P5H7H_B1_Y_AOI32X0P5H7H_A1_Y_OA21X0P5H7H_A1_Y)) 
                 | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y_B0_AOAI211X1P4H7L_Y__DOT__B0_inv) 
                    & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_NAND2X0P5H7H_Y_B)) 
                       | (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y_B0_AOAI211X1P4H7L_Y__DOT__A0_inv)))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_22_ 
        = (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_10___05FAOAI211X0P5H7H_Y__DOT__B0_inv) 
            & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_22___05FAOI2BB1X0P5H7H_Y__A1N) 
               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))) 
           | (((vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_rdata 
                >> 0x00000016U) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)) 
              | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_10___05FAOAI211X0P5H7H_Y__DOT__B0_inv) 
                 & (((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_AOAI211X0P5H7H_C0_Y) 
                         & (((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_22___05Freg_p__DOT__n0)) 
                             | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B_Y)) 
                            & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y) 
                               | ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_54___05Freg_p__DOT__n0)) 
                                  | (~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B__DOT__Ax))))))) 
                     & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_14___05FINVX0P5H7H_A_Y_OAI2XB1X0P5H7H_B0_Y_OAI21X0P5H7H_B0_Y_AND4X0P5H7H_A_Y)) 
                    | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b22__05d_reg_p_QN_OAI31X0P5H7H_B0_Y) 
                       & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b21__05d_reg_p_QN_NOR3X0P5H7H_B_Y_NAND2X0P5H7H_A_Y_NAND4BX0P5H7H_AN__DOT__Ax)) 
                          & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y)))))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_12__Y 
        = ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__A1_inv) 
           ^ (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__A0_inv));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37 = ((IData)(EXTERNAL_TOP__DOT__cpu__DOT__next_PC_25___05FOAOI211X0P5H7H_Y__DOT__A0_inv) 
                                                 & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A0_AOA211X0P5H7H_C0_Y) 
                                                    | ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__B0_inv)) 
                                                       | ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__A1_inv)) 
                                                          & (~ (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__A0_inv))))));
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_Y 
        = (1U & (((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_B_OAI22X1P4H7L_Y__DOT__outA)) 
                  & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0__DOT__B0_inv)) 
                 | ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y_B0_AOAI211X1P4H7L_Y__DOT__B0_inv)) 
                    | ((~ ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A0_AOA211X0P5H7H_C0_Y)) 
                           | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__B0_inv) 
                              & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__A1_inv) 
                                 | (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__A0_inv))))) 
                       & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0__DOT__B0_inv)))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_35___05Freg_p_QN_OR4X0P5H7H_C_Y 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_35___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_35___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_26_ 
        = (1U & ((~ (((~ (((~ (((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_58___05Freg_p__DOT__n0)) 
                                | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y_OR2X0P5H7H_B_Y)) 
                               & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_26___05Freg_p__DOT__n0)) 
                                  | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)))) 
                           & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)) 
                          | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_26___05FMUX2X0P5H7H_Y_B) 
                             & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y)))) 
                      & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A) 
                         | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_OAI31X0P5H7H_A2_Y))) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))) 
                 | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_13___05FOAI211X0P7H7H_A0_Y_NOR3X0P5H7H_C_Y) 
                    & (vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_rdata 
                       >> 0x0000001aU))));
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1 
        = (1U & (~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2BX0P7H7H_Y_B_OAI211X0P7H7H_Y__DOT__outA) 
                    & (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y__DOT__outA) 
                        & (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y_B0)) 
                       | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X1P4H7L_Y_A0_INVX0P5H7H_A_Y_AOAI211X1P4H7L_B0__DOT__C0_inv)))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_24_ 
        = (1U & ((~ (((~ (((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_NAND3X0P5H7H_C_1_Y) 
                               & (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B_Y) 
                                   | (~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_24___05Freg_p__DOT__n0))) 
                                  & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_56___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y_OR2X0P5H7H_B_Y))))) 
                           & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_14___05FINVX0P5H7H_A_Y_OAI2XB1X0P5H7H_B0_Y_OAI21X0P5H7H_B0_Y_AND4X0P5H7H_A_Y)) 
                          | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_24___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0) 
                             & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y)))) 
                      & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_12__Y)) 
                         | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_OAI31X0P5H7H_A2_Y))) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))) 
                 | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_13___05FOAI211X0P7H7H_A0_Y_NOR3X0P5H7H_C_Y) 
                    & (vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_rdata 
                       >> 0x00000018U))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_25_ 
        = (1U & ((~ ((~ (((~ (((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_57___05Freg_p__DOT__n0)) 
                               | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y_OR2X0P5H7H_B_Y)) 
                              & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_25___05Freg_p__DOT__n0)) 
                                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_16)))) 
                          & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_14___05FINVX0P5H7H_A_Y_OAI2XB1X0P5H7H_B0_Y_OAI21X0P5H7H_B0_Y_AND4X0P5H7H_A_Y)) 
                         | (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b25__05d_reg_p_QN_OAI21X0P5H7H_B0_Y) 
                             & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_28___05FMUX2X0P5H7H_Y_B_NOR2BX1H7H_Z_AN_NAND4BX0P5H7H_Y__DOT__Ax)) 
                                & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y))) 
                            | ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_OAI31X0P5H7H_A2_Y)) 
                               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37))))) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))) 
                 | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_13___05FOAI211X0P7H7H_A0_Y_NOR3X0P5H7H_C_Y) 
                    & (vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_rdata 
                       >> 0x00000019U))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_14__Y 
        = ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_27___05FMUX2X0P5H7H_A_Y_AO22X0P5H7H_B1_Y_AOI32X0P5H7H_A1_Y_OA21X0P5H7H_A1_Y) 
           ^ (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_Y));
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X1P4H7L_Y_A0_INVX0P5H7H_A_Y_AOAI211X1P4H7L_B0_Y 
        = (((~ (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_Y)) 
            & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y__DOT__outA)) 
           | (((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_27___05FMUX2X0P5H7H_A_Y_AO22X0P5H7H_B1_Y_AOI32X0P5H7H_A1_Y_OA21X0P5H7H_A1_Y)) 
               & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y__DOT__outA)) 
              | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X1P4H7L_Y_A0_INVX0P5H7H_A_Y_AOAI211X1P4H7L_B0__DOT__C0_inv)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49 = (1U 
                                                 & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_36___05Freg_p__DOT__n0)) 
                                                    | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_35___05Freg_p_QN_OR4X0P5H7H_C_Y)));
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X0P5H7H_A0_Y 
        = (1U & ((~ ((IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1) 
                     | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0__DOT__C0_inv))) 
                 | ((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0__DOT__B0_inv) 
                        | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0__DOT__C0_inv))) 
                    | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X0P5H7H_A0__DOT__C0_inv))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_27_ 
        = (1U & ((~ (((~ (((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_NAND3X0P5H7H_C_1_Y) 
                               & (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B_Y) 
                                   | (~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_27___05Freg_p__DOT__n0))) 
                                  & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_59___05Freg_p__DOT__n0)) 
                                     | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y_OR2X0P5H7H_B_Y))))) 
                           & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_14___05FINVX0P5H7H_A_Y_OAI2XB1X0P5H7H_B0_Y_OAI21X0P5H7H_B0_Y_AND4X0P5H7H_A_Y)) 
                          | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_27___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0) 
                             & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y)))) 
                      & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_14__Y)) 
                         | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_OAI31X0P5H7H_A2_Y))) 
                     | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_2))) 
                 | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_13___05FOAI211X0P7H7H_A0_Y_NOR3X0P5H7H_C_Y) 
                    & (vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_rdata 
                       >> 0x0000001bU))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_AND2X0P5H7H_Y_1__Y 
        = ((~ ((IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y_B0) 
               & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y__DOT__outA) 
                  & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X1P4H7L_Y_A0_INVX0P5H7H_A_Y_AOAI211X1P4H7L_B0__DOT__C0_inv)))) 
           & (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X1P4H7L_Y_A0_INVX0P5H7H_A_Y_AOAI211X1P4H7L_B0_Y));
    EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2BX0P7H7H_Y_AN_AOI21X0P5H7H_Y__DOT__OUT0 
        = ((IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X1P4H7L_Y_A0_INVX0P5H7H_A_Y_AOAI211X1P4H7L_B0_Y) 
           & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2BX0P7H7H_Y_B_OAI211X0P7H7H_Y__DOT__outA));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_38___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_37___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_49)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_30___05FMUX2X0P5H7H_Y__A 
        = (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0__DOT__C0_inv) 
            | ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X0P5H7H_A0__DOT__C0_inv)) 
               | ((IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1) 
                  & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0__DOT__B0_inv)))) 
           & (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X0P5H7H_A0_Y));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_28_ 
        = (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_10___05FAOAI211X0P5H7H_Y__DOT__B0_inv) 
            & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_AND2X0P5H7H_Y_1__Y) 
               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))) 
           | (((vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_rdata 
                >> 0x0000001cU) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)) 
              | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_10___05FAOAI211X0P5H7H_Y__DOT__B0_inv) 
                 & (((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_AOAI211X0P5H7H_C0_Y) 
                         & (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B_Y) 
                             | (~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_28___05Freg_p__DOT__n0))) 
                            & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_60___05Freg_p__DOT__n0)) 
                               | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y_OR2X0P5H7H_B_Y))))) 
                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)) 
                    | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_28___05FMUX2X0P5H7H_Y_B) 
                       & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y))))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_29___05FMUX2X0P5H7H_Y__A 
        = (1U & (~ ((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0__DOT__B0_inv) 
                        & (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2BX0P7H7H_Y_AN_AOI21X0P5H7H_Y__DOT__OUT0))) 
                    & ((IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2BX0P7H7H_Y_AN_AOI21X0P5H7H_Y__DOT__OUT0) 
                       | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0__DOT__B0_inv)))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_31___05FAOI2BB1X0P7H7L_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0 
        = ((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0_Y_AOAI211X0P5H7H_A0__DOT__C0_inv) 
               & (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_17_A0N_AOI21X0P5H7H_A1_Y) 
                   | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_30___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI211X0P7H7H_A1_Y_OAI221X0P5H7H_B0_Y)) 
                  & (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X0P5H7H_A0_Y)))) 
           & (((~ (((~ (IData)(EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2BX0P7H7H_Y_AN_AOI21X0P5H7H_Y__DOT__OUT0)) 
                    & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0__DOT__B0_inv)) 
                   | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0__DOT__C0_inv))) 
               & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0_Y_AOAI211X0P5H7H_A0__DOT__B0_inv)) 
              | (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0_Y_AOAI211X0P5H7H_A0__DOT__B0_inv) 
                  & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X0P5H7H_A0__DOT__C0_inv)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0_Y_AOAI211X0P5H7H_A0__DOT__C0_inv))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_38___05Freg_p_QN_OR4X0P5H7H_C_Y 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_38___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_38___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_30_ 
        = (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_10___05FAOAI211X0P5H7H_Y__DOT__B0_inv) 
            & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_OAI31X0P5H7H_A2_Y)) 
               & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_30___05FMUX2X0P5H7H_Y__A))) 
           | (((vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_rdata 
                >> 0x0000001eU) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11)) 
              | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_10___05FAOAI211X0P5H7H_Y__DOT__B0_inv) 
                 & (((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_AOAI211X0P5H7H_C0_Y) 
                         & (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B_Y) 
                             | (~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_30___05Freg_p__DOT__n0))) 
                            & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_62___05Freg_p__DOT__n0)) 
                               | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y_OR2X0P5H7H_B_Y))))) 
                     & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)) 
                    | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_30___05FMUX2X0P5H7H_Y_B) 
                       & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y))))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_29_ 
        = (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_10___05FAOAI211X0P5H7H_Y__DOT__B0_inv) 
            & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_29___05FMUX2X0P5H7H_Y__A) 
               & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_8))) 
           | (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_10___05FAOAI211X0P5H7H_Y__DOT__B0_inv) 
               & (((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_AOAI211X0P5H7H_C0_Y) 
                       & (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B_Y) 
                           | (~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_29___05Freg_p__DOT__n0))) 
                          & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_61___05Freg_p__DOT__n0)) 
                             | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y_OR2X0P5H7H_B_Y))))) 
                   & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_6)) 
                  | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_29___05FMUX2X0P5H7H_Y_B) 
                     & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y)))) 
              | ((vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_rdata 
                  >> 0x0000001dU) & (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_11))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_31_ 
        = (((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_10___05FAOAI211X0P5H7H_Y__DOT__B0_inv)) 
            | (((~ ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_NAND3X0P5H7H_C_Y) 
                    & (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B_Y) 
                        | (~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_31___05Freg_p__DOT__n0))) 
                       & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_63___05Freg_p__DOT__n0)) 
                          | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y_OR2X0P5H7H_B_Y))))) 
                & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__inst_r_14___05FINVX0P5H7H_A_Y_OAI2XB1X0P5H7H_B0_Y_OAI21X0P5H7H_B0_Y_AND4X0P5H7H_A_Y)) 
               | (((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_OAI31X0P5H7H_A2_Y)) 
                   & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_31___05FAOI2BB1X0P7H7L_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0)) 
                  | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_31___05FAOI2BB1X0P7H7L_Y_A1N) 
                     & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y))))) 
           & ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_4_) 
              | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_14___05FNAND3X0P5H7H_A_Y_AOI211X0P5H7H_A0__DOT__outA) 
                 | (((vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_rdata 
                      >> 0x0000001fU) & (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wmask_AOAI211X0P5H7H_Y__DOT__C0_inv)) 
                    | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_0___05FNAND3X0P5H7H_B_Y_OR4X0P5H7H_D_Y)))));
    vlSelfRef.EXTERNAL_TOP__DOT__io_lsu_addr = ((((
                                                   (((((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__next_PC_31___05FAOI2BB1X0P7H7L_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0) 
                                                       << 3U) 
                                                      | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_30___05FMUX2X0P5H7H_Y__A) 
                                                         << 2U)) 
                                                     | (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_29___05FMUX2X0P5H7H_Y__A) 
                                                         << 1U) 
                                                        | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_AND2X0P5H7H_Y_1__Y))) 
                                                    << 0x0000000cU) 
                                                   | (((((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_14__Y) 
                                                         << 3U) 
                                                        | (4U 
                                                           & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A)) 
                                                              << 2U))) 
                                                       | (((IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_37) 
                                                           << 1U) 
                                                          | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_12__Y))) 
                                                      << 8U)) 
                                                  | (((((2U 
                                                         & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_23___05FAO22X0P5H7H_Y_B1_OAI2XB1X0P5H7H_Y__DOT__outA1)) 
                                                            << 1U)) 
                                                        | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_22___05FAOI2BB1X0P5H7H_Y__A1N)) 
                                                       << 6U) 
                                                      | (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_11__Y) 
                                                          << 5U) 
                                                         | (0x00000010U 
                                                            & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_20___05FAO22X0P5H7H_Y_B1_OAI2XB1X0P5H7H_Y__DOT__outA1)) 
                                                               << 4U)))) 
                                                     | ((((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__reg_file__02ewdata_19___05FAOAI211X0P5H7H_Y_A0_NAND3X0P5H7H_Y__C) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_10__Y) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_9__Y) 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XOR2X0P5H7H_Y_2_A_AOAI211X0P5H7H_A0_Y_NAND2X0P5H7H_B_Y))))))) 
                                                 << 0x00000010U) 
                                                | (((((((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_15___05FMUX2X0P5H7H_Y__A) 
                                                        << 3U) 
                                                       | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_7__Y) 
                                                          << 2U)) 
                                                      | (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_6__Y) 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XOR2X0P5H7H_Y_1_B_NAND2X0P5H7H_Y_B_AOAI211X1P4H7L_A0_B0_XOR2X0P5H7H_A_Y))))) 
                                                     << 0x0000000cU) 
                                                    | (((((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_11___05FAOI2BB1X0P5H7H_Y__A1N) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__reg_file__02ewdata_10___05FAOAI211X0P5H7H_Y_A0_NAND3X0P5H7H_Y__C) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_4__Y) 
                                                            << 1U) 
                                                           | (1U 
                                                              & (~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_8___05FAO22X0P5H7H_Y_B1_OAI2XB1X0P5H7H_Y__DOT__outA1))))) 
                                                       << 8U)) 
                                                   | ((((((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_7___05FMUX2X0P5H7H_Y__A) 
                                                          << 3U) 
                                                         | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_3__Y) 
                                                            << 2U)) 
                                                        | (((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_2__Y) 
                                                            << 1U) 
                                                           | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__reg_file__02ewdata_4___05FAOI22X0P5H7H_Y_B1_AOI31X0P5H7H_Y__A2))) 
                                                       << 4U) 
                                                      | ((((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_1__Y) 
                                                           << 3U) 
                                                          | ((IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y__Y) 
                                                             << 2U)) 
                                                         | ((2U 
                                                             & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OA21X0P5H7H_Y_A0_OAOI211X0P5H7H_A0_Y_NOR3X0P5H7H_C_Y_XOR2X0P5H7H_A_Y)) 
                                                                << 1U)) 
                                                            | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wmask_AOAI211X0P5H7H_Y__DOT__B0_inv))))));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_40___05Freg_p_D_AND2X0P5H7H_Y_B_OAI21X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_39___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_38___05Freg_p_QN_OR4X0P5H7H_C_Y)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_40___05Freg_p_D_AND2X0P5H7H_Y_A 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_40___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_40___05Freg_p_D_AND2X0P5H7H_Y_B_OAI21X0P5H7H_Y__DOT__outA)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_42___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_41___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_40___05Freg_p_D_AND2X0P5H7H_Y_A)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_43___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_42___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_42___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_43___05Freg_p_D_NOR2BX1H7H_Z_AN 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_43___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_43___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_45___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_44___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_43___05Freg_p_D_NOR2BX1H7H_Z_AN)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_46___05Freg_p_D_NOR2X0P5H7H_Y_B_OA31X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_45___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_45___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48 = (1U 
                                                 & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_46___05Freg_p__DOT__n0)) 
                                                    | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_46___05Freg_p_D_NOR2X0P5H7H_Y_B_OA31X0P5H7H_Y__DOT__outA)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_48___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_47___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_48)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_48___05Freg_p_QN_OR4X0P5H7H_C_Y 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_48___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_48___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47 = (1U 
                                                 & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_49___05Freg_p__DOT__n0)) 
                                                    | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_48___05Freg_p_QN_OR4X0P5H7H_C_Y)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_51___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_50___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_47)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_51___05Freg_p_QN_OR4X0P5H7H_C_Y 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_51___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_51___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA)));
    vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46 = (1U 
                                                 & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_52___05Freg_p__DOT__n0)) 
                                                    | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_51___05Freg_p_QN_OR4X0P5H7H_C_Y)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_54___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_53___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.__VdfgRegularize_h6e95ff9d_0_46)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_54___05Freg_p_QN_OR4X0P5H7H_C_Y 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_54___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_54___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_56___05Freg_p_D_XOR2X0P5H7H_Y_B 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_55___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_54___05Freg_p_QN_OR4X0P5H7H_C_Y)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_57___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_56___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_56___05Freg_p_D_XOR2X0P5H7H_Y_B)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_58___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_57___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_57___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_58___05Freg_p_D_NOR2BX1H7H_Z_AN 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_58___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_58___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_60___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_59___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_58___05Freg_p_D_NOR2BX1H7H_Z_AN)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_60___05Freg_p_QN_OR4X0P5H7H_C_Y 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_60___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_60___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_62___05Freg_p_D_NOR2X0P5H7H_Y_B_OA21X0P5H7H_Y__DOT__outA 
        = (1U & ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_61___05Freg_p__DOT__n0)) 
                 | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_60___05Freg_p_QN_OR4X0P5H7H_C_Y)));
    vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_62___05Freg_p_D_NOR2X0P5H7H_Y_A 
        = (1U & (~ ((~ (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_62___05Freg_p__DOT__n0)) 
                    | (IData)(vlSelfRef.EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_62___05Freg_p_D_NOR2X0P5H7H_Y_B_OA21X0P5H7H_Y__DOT__outA))));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VEXTERNAL_TOP___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VEXTERNAL_TOP___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void VEXTERNAL_TOP___024root___stl_sequent__TOP__0(VEXTERNAL_TOP___024root* vlSelf);

VL_ATTR_COLD bool VEXTERNAL_TOP___024root___eval_phase__stl(VEXTERNAL_TOP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEXTERNAL_TOP___024root___eval_phase__stl\n"); );
    VEXTERNAL_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VEXTERNAL_TOP___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = VEXTERNAL_TOP___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                VEXTERNAL_TOP___024root___stl_sequent__TOP__0(vlSelf);
                VEXTERNAL_TOP___024root___stl_sequent__TOP__1(vlSelf);
            }
        }
    }
    return (__VstlExecute);
}

bool VEXTERNAL_TOP___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VEXTERNAL_TOP___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEXTERNAL_TOP___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(VEXTERNAL_TOP___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( cpuClock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( reset)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool VEXTERNAL_TOP___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void VEXTERNAL_TOP___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEXTERNAL_TOP___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(VEXTERNAL_TOP___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(edge clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(edge EXTERNAL_TOP.cpu.is_executed_ICGX0P5H7H_E.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshIpo8Nv8VbOZ0pYupShSe644DkDxawxsSK7sfvQvN.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshbS8uOSJtJehVFiLKN7VVHLEt8g2A7yzvAZvyCyVd.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshbpRWYGiBRxsyRuI6zH8uEzAOKSZaxsQ8q7YjYX8N.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshdXWKxpyMwxEhTNAnma53vo1BwAju0YxMyi47gOxc.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____Vhsh4PKPz18sedlpXBZbXDkzFTwBodLjovWBwKkvcuWN.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 7U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 7 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshNrbJtYm20MY4nvca68QpbFGWf3hhh4ABv8XUAINy.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 8U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 8 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshpxHeCD996AEAAulKeuwetXz4EW6uoQpuFyyMAK9r.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 9U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 9 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshvexrkXsQ3bB3KMa6ycZNyJLRgpOF6zdgherAehVC.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 10 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____Vhsh20EBM1h0mb0S0AF9Bx5hGJ8r188gpxhTh8L7Dj0l.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 11 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshAamlNR0pmn2l8yXYYi1IxDqEWyjOCzBTQjUiWuno.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 12 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshajwJYhYXnWgYMRaOyIJHfeWdAiWaFeAEQ7a3xOi9.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 13 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshDgZFBa1J23qfNi0OiJ7jeKbAtPDkMwwbo99CtjJX.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 14 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshvfxwU7BQJboLuI3BPoczMwUu5SiZflYWJBBYLM4w.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000000fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 15 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____Vhsh5keQqRAZJtt8ailoclpNkPUYRHTtUkHEnjPz77oz.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000010U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 16 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____Vhsh9QxMrDJBVEMSNKaFYKieBaW7DvHw88tU6OZOuMZq.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000011U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 17 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshpdGtZC4cEXhQmQiqwD9jLxzIH7mNtH3xpJ6k5WZY.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000012U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 18 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshYA7gXejw37Bac9coiM2stJ32zAd5NL3pLuF8AQnL.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000013U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 19 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____Vhsh8AGLVOwhq2v1ot6Pi6EkineBl0hSYmkHM94UyqBg.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000014U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 20 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshQfmzvRbJ8BTSBsVMhfLB9KYUKEQ97Pveea3MnLsJ.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000015U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 21 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshyaFrlyAKhsS3fYWqyhY2K9YiVUMrAecEWGVaOXHr.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000016U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 22 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshMCQ8gAyatUxEAiZBgXaNTkhfros4CTgw4LR8iRe2.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000017U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 23 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshUdKuWENcHqhbWlpA2izaDxwxGpWNt8AKnOZK7Ww1.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000018U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 24 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____Vhsht1bRmg7bxoZTKYi3ioMLwApB0xsAtaymPfaxwGGJ.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000019U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 25 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____Vhshqa64kmPmjDrUjJ8RgA4YLfPekpFRkvtX1i52zglQ.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 26 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____Vhshj63OKwkFchjQ1YpwYBOruAxEs80jBfgGNQo1KqzO.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 27 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____Vhsh60eWFwuhLcPpjgr1QyQlFra13QsZr0XOhBmWrUCf.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 28 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshpGXUXAKLfuSTW5Fk8eA8AHJA6OpHSWgZEf4Et5bZ.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 29 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____Vhshgb70RMjZG5dqBDYfAweEutJY1JWqQ6FkT8LuJYwh.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 30 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshMiN7Bnf7Ns65NA4REqTrNCwM3M09E9ZGBBN62Dlg.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000001fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 31 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_____VhshsbKjJ4iq44DIj5ETjrr3LAHVW1htQK4bL8CwoIjo.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000020U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 32 is active: @(edge EXTERNAL_TOP.cpu.is_ebreak_$_AND__Y_B_$_AND__Y_A_$_NOR__Y_A_$_ORNOT__Y_B_$_AND__A_Y_ICGX0P5H7H_E.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000021U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 33 is active: @(edge EXTERNAL_TOP.cpu.io_ifu_addr[1]_reg_p_CK_ICGX0P5H7H_ECK.NOTIFIER)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000022U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 34 is active: @(posedge clock)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000023U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 35 is active: @(posedge ((~ EXTERNAL_TOP.cpu.io_lsu_respValid_NAND2BX0P5H7H_B_Y_OA31X0P5H7H_B0_Y) & ((~ (EXTERNAL_TOP.cpu.inst_r_24__OAI21X0P5H7H_B0_Y_NAND3X0P5H7H_B_Y | ((~ EXTERNAL_TOP.cpu.inst_r_23__OAI2XB1X0P5H7H_B0_Y_OA31X0P5H7H_B0_Y_AND4X0P5H7R_D_Y) | ((~ EXTERNAL_TOP.cpu.reg_file.mem_1[1]_1__NAND3X0P5H7H_A_Y_AOAI211X0P5H7H_A0.B0_inv) | ((TABLE_hcfc66381_0[{EXTERNAL_TOP.cpu.inst_r_19__reg_p.n0, {(~ EXTERNAL_TOP.cpu.inst_r_20__INVX0P5H7H_A_Y_AOI21X0P5H7H_B0.OUT0), EXTERNAL_TOP.io_ifu_rdata[19]}}]) | (EXTERNAL_TOP.cpu.inst_r_16__OAI2XB1X0P5H7H_B0_Y_OAI211X0P7H7H_B0_1_Y | ((TABLE_hcfc66381_0[{EXTERNAL_TOP.cpu.inst_r_9__reg_p.n0, {(~ EXTERNAL_TOP.cpu.inst_r_20__INVX0P5H7H_A_Y_AOI21X0P5H7H_B0.OUT0), EXTERNAL_TOP.io_ifu_rdata[9]}}]) | (EXTERNAL_TOP.cpu.inst_r_8__MUXI2X0P5H7H_B_Y_NAND2X0P5H7H_B_Y | ((~ EXTERNAL_TOP.cpu.inst_r_28__OAI21BX0P5H7H_B0N_Y_AOI22X0P5H7H_A0_Y_AND4X0P5H7H_D_Y) | EXTERNAL_TOP.cpu.inst_r_11__MUXI2X0P5H7H_B_Y_NAND2BX0P5H7H_B_Y))))))))) & EXTERNAL_TOP.cpu.idu.inst_0__NAND3X0P5H7H_B_Y_NOR2X0P5H7H_B_Y_AND4X0P5H7H_D_Y)))\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000024U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 36 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[9]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000025U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 37 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[8]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000026U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 38 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[7]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000027U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 39 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[6]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000028U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 40 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[5]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000029U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 41 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[4]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 42 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[3]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 43 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[31]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 44 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[30]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 45 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[2]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 46 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[29]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000002fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 47 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[28]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000030U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 48 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[27]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000031U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 49 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[26]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000032U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 50 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[25]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000033U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 51 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[24]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000034U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 52 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[23]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000035U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 53 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[22]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000036U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 54 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[21]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000037U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 55 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[20]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000038U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 56 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[1]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x00000039U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 57 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[19]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003aU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 58 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[18]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003bU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 59 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[17]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003cU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 60 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[16]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003dU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 61 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[15]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003eU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 62 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[14]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 0x0000003fU)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 63 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[13]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[12]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 65 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[11]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 66 is active: @(posedge EXTERNAL_TOP.cpu.reg_file.mem_1[10]_0__reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 67 is active: @(posedge reset)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 68 is active: @(posedge EXTERNAL_TOP.cpu.io_ifu_addr[10]_reg_p.clk)\n");
    }
    if ((1U & (IData)((triggers[1U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 69 is active: @(posedge (clock & EXTERNAL_TOP.cpu.io_ifu_addr[1]_reg_p_CK_ICGX0P5H7H_ECK.P0001))\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VEXTERNAL_TOP___024root___ctor_var_reset(VEXTERNAL_TOP___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VEXTERNAL_TOP___024root___ctor_var_reset\n"); );
    VEXTERNAL_TOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5452235342940299466ull);
    vlSelf->cpuClock = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2333604847743921139ull);
    vlSelf->reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9928399931838511862ull);
    vlSelf->EXTERNAL_TOP__DOT__io_ifu_respValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1582192656310349706ull);
    vlSelf->EXTERNAL_TOP__DOT__io_lsu_respValid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10465878242913759523ull);
    vlSelf->EXTERNAL_TOP__DOT__io_lsu_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15963878496041334833ull);
    vlSelf->EXTERNAL_TOP__DOT__io_lsu_wen = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 592876201922802078ull);
    vlSelf->EXTERNAL_TOP__DOT__io_lsu_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1983565845755599131ull);
    vlSelf->EXTERNAL_TOP__DOT__io_ifu_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9322046563826313511ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_0___05Freg_p_D = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4958992286018625946ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_10___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1866681579081698661ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_11___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 411441009125448213ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_12___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8235699657901166885ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_13___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9803543278336969695ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_14___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15483315446664479319ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_14___05Freg_p_QN_OR4X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16124658544196757920ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_15___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4754093609127528686ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_16___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1072414414675854196ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_17___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6541500327672142531ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_17___05Freg_p_QN_OR4X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8626992509542506168ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_18___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14095076783385332142ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_19___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12444316580270473842ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_1___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16133167909120727474ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_20___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3225546378653249557ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_20___05Freg_p_QN_OR4X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16519112909588392395ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_21___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14765899517301773702ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_22___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16298101858533244774ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_23___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9208542603340966071ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_23___05Freg_p_QN_OR4X0P5H7H_B_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3413818066201378668ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_24___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4466323532541674745ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_25___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13090469155638711886ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_26___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9415462567620390679ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_26___05Freg_p_QN_OR4X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 651743149134863698ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_27___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16605908630579601462ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_28___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18156747555827219148ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_29___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14582864730695423833ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_29___05Freg_p_QN_OR4X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10464156247201341398ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_2___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2289579040386503713ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_30___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12447910943027483923ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_31___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17376051906314095837ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_32___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5885640060610318069ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_32___05Freg_p_QN_OR4X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9030728524898947175ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_33___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17384330766062744094ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_34___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3916431410908142371ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_35___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8645737014357598973ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_35___05Freg_p_QN_OR4X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2735327881720906466ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_36___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1858808732143717301ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_37___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9543484556746738900ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_38___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4094602952491106899ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_38___05Freg_p_QN_OR4X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6936300074437324200ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_39___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9553602381944398574ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_3___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2889735549314500009ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_3___05Freg_p_QN_NOR2X0P5H7H_B_Y_NAND4BBX0P5H7H_D_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1861291016965257398ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_40___05Freg_p_D_AND2X0P5H7H_Y_A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11443208828107987114ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_40___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3351015279846758753ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_41___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8743768135284272917ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_42___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16684396029149646569ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_43___05Freg_p_D_NOR2BX1H7H_Z_AN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7920655454563922524ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_43___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17258625124432236317ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_44___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16821372607014525171ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_45___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1677036656284924230ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_46___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14664434219918138398ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_47___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4746026279650345148ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_48___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15347765853073822226ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_48___05Freg_p_QN_OR4X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9218572827753065683ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_49___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 175167851914373417ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_4___05Freg_p_D_XOR2X0P5H7H_Y_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15801455914561062115ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_4___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15390071971160011844ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_50___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16053554585803515902ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_51___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15270675797417887662ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_51___05Freg_p_QN_OR4X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7543790167655807773ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_52___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5451561385958033372ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_53___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4131904030399294839ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_54___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4652945354321822500ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_54___05Freg_p_QN_OR4X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9004162254227056797ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_55___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9135430878193163776ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_56___05Freg_p_D_XOR2X0P5H7H_Y_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10707228073358571722ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_56___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7186077168675654969ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_57___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7722289313983412435ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_58___05Freg_p_D_NOR2BX1H7H_Z_AN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16683075000927087416ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_58___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11109333257092034867ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_59___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 374306153358311869ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_5___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11170538805173080042ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_60___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3744187001883322673ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_60___05Freg_p_QN_OR4X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 640980322593001842ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_61___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 948548774378510215ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_62___05Freg_p_D_NOR2X0P5H7H_Y_A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13283225926016616379ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_62___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12192027698247026195ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_63___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6355453066901934869ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_6___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18133449638597248999ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_7___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10036158910342906120ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_8___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7921621168875584093ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_9___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9251343322831230764ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_9___05Freg_p_QN_OR3X0P5H7H_B_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4216909961416716413ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_0_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13748643727704435683ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_0___05FAND4X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17029745298011076651ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_0___05FNAND3X0P5H7H_B_Y_NOR2X0P5H7H_B_Y_AND4X0P5H7H_D_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2673331027398674231ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_0___05FNAND3X0P5H7H_B_Y_OR4X0P5H7H_D_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3621272502363764816ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_12_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1759218747202456860ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_13_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2339335348173169789ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_14_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7826202032812992090ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_15_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10627337997529044957ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_18_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4862874099679992943ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_24_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12768919567845679789ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_28_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13034847847602990896ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_29_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16858003241558242181ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_2_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15419685679019355835ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3623107859329640993ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_AOAI211X0P5H7H_C0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 309835637233778556ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_NAND3X0P5H7H_C_1_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15544264207897904715ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_NAND3X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4487272511601050934ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_31_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1285097379742576829ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_3_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8950229432328257068ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_4_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3725279234779053734ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_5_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14564209797511286218ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6275003601538080163ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_NOR3X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2710208259306226794ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_6___05FNAND2X0P5H7H_B_Y_OAI31X0P5H7H_A2_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3285273593990679257ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_11___05FMUXI2X0P5H7H_B_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6286096775976282325ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_11___05FMUXI2X0P5H7H_B_Y_NAND2BX0P5H7H_B_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10121376023543584716ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_13___05FOAI211X0P7H7H_A0_Y_NOR3X0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3350940733180514002ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_14___05FINVX0P5H7H_A_Y_OAI2XB1X0P5H7H_B0_Y_OAI21X0P5H7H_B0_Y_AND4X0P5H7H_A_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10590335752474246192ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_16___05FOAI2XB1X0P5H7H_B0_Y_OAI211X0P7H7H_B0_1_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5057796408795006907ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_16___05FOAI2XB1X0P5H7H_B0_Y_OAI211X0P7H7H_B0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 520859698050690128ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_16___05FOAI2XB1X0P5H7H_B0_Y_OAI211X1P4H7L_B0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12117762439701209029ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_17___05FINVX0P5H7H_A_Y_OAI2XB1X0P5H7H_B0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13786443580601662857ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_17___05FOAI2XB1X0P5H7H_B0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12992610209541318548ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_21___05FAOAI211X1P4H7R_B0_A0_NAND3X0P5H7H_C_1_Y_AOI21X1P4H7L_A0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3032609018349480189ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_23___05FOAI2XB1X0P5H7H_B0_Y_OA31X0P5H7H_B0_Y_AND4X0P5H7R_D_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16277928089398040501ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND3X0P5H7H_B_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15183720575231195162ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4994018411198623392ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11104402098707010326ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10480804568536568223ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05FMUXI2X0P5H7H_B_Y_OR4X0P5H7H_D_Y_OR2X0P5H7H_B_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3239522829230350715ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_28___05FOAI21BX0P5H7H_B0N_Y_AOI22X0P5H7H_A0_B1_OAI211X0P7H7H_C0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 113448607333063928ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_28___05FOAI21BX0P5H7H_B0N_Y_AOI22X0P5H7H_A0_Y_AND4X0P5H7H_D_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4649900933132503718ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_30___05FOAI21BX0P5H7H_B0N_Y_OAI211X0P7H7H_B0_Y_OAOI211X0P5H7H_B0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7701757729077761198ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_4___05FOAI211X0P7H7H_A0_Y_OA31X0P5H7H_A2_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14882715582764588549ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_6___05FAOI21BX0P5H7H_A0_Y_NOR3X0P5H7H_A_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14484413237987650045ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_6___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_C_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 73248776138406382ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_7___05FMUXI2X0P5H7H_B_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 33820921887901749ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_8___05FMUXI2X0P5H7H_B_Y_NAND2X0P5H7H_B_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6114340760741765070ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b21__05d_reg_p_QN_NOR3X0P5H7H_B_C = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4972283208083285565ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b22__05d_reg_p_QN_OAI31X0P5H7H_B0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5019252825574268862ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b25__05d_reg_p_QN_OAI21X0P5H7H_B0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8617320038989153728ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18165928751737355191ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A0_AOA211X0P5H7H_C0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2764170826519580187ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_NAND2X0P5H7H_Y_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14816815139077023884ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_2_A_NAND2X0P5H7H_Y_B_AO211X0P5H7H_Y_B0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13022454777894693094ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_3_A_NAND2X0P5H7H_Y_B_OAI211X0P7H7H_Y_A1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8090996383005175941ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_4_A_NAND2X0P5H7H_Y_B_NAND3X0P5H7H_Y_A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8467347604915618580ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_A_XNOR3X0P5H7H_Y_C_NAND2X0P5H7H_Y_B_AOI31X1H7L_A2_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13188999578440768642ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN_AOI21X1P4H7L_A1_A0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3752045666536464582ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN_AOI21X1P4H7L_A1_B0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6735318305365844150ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12395173055531337961ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y_C0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13694434764263642479ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XNOR2X0P5H7H_Y_1_A_OAI21X0P5H7H_Y_B0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2811062659625529133ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XNOR2X0P5H7H_Y_1_A_OAI21X0P5H7H_Y_B0_AOA211X0P5H7H_C0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10503846551872979053ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XNOR2X0P5H7H_Y_1_B_NAND2X0P5H7H_Y_A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13625288418709869326ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XOR2X0P5H7H_Y_1_B_NAND2X0P5H7H_Y_B_AOAI211X1P4H7L_A0_B0_XOR2X0P5H7H_A_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6940962813706607740ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XOR2X0P5H7H_Y_2_A_AOAI211X0P5H7H_A0_B0_INVX0P5H7H_A_Y_AOI31X1P4H7L_A0_A2_NAND3BX1P4H7L_Y_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3502585538055425172ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XOR2X0P5H7H_Y_2_A_AOAI211X0P5H7H_A0_B0_INVX0P5H7H_A_Y_AOI31X1P4H7L_A0_A2_NAND3BX1P4H7L_Y_B_AOA211X0P5H7H_C0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16254270648015301014ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XOR2X0P5H7H_Y_2_A_AOAI211X0P5H7H_A0_B0_INVX0P5H7H_A_Y_AOI31X1P4H7L_A0_Y_XNOR2X0P5H7H_B_A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16854622592243413799ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XOR2X0P5H7H_Y_2_A_AOAI211X0P5H7H_A0_Y_NAND2X0P5H7H_B_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1020138152476815601ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_respValid_NAND2BX0P5H7H_B_Y_OA31X0P5H7H_B0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 567566962921063337ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_AOI31X0P5H7H_Y_A0_AOI31X0P5H7H_A0_Y_AOAI211X0P5H7H_A1_B0_AO211X0P5H7H_B0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12019045424447195782ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_AOI31X0P5H7H_Y_A0_AOI31X0P5H7H_A0_Y_AOAI211X0P5H7H_A1_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13679225900103316971ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OA21X0P5H7H_Y_A0_OAOI211X0P5H7H_A0_Y_NOR3X0P5H7H_C_Y_XOR2X0P5H7H_A_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12655887711475095036ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI21X0P5H7H_Y_1_A0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8038754390549384282ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_11_A0N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5176353224228293188ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_13_A0N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16594235358596185838ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_15_A0N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2963134938500484537ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4252177705926614463ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_17_A0N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11556327750337696702ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_17_A0N_AOA211X0P5H7H_Y_C0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1765749318673960499ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_17_A0N_AOI21X0P5H7H_A1_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2404423923074497268ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_1_A0N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17697859676452165940ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_1_A0N_AO22X0P5H7H_B1_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9213434128280303763ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_1_A0N_AOA211X0P5H7H_Y_C0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3190857359831732495ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_3_A0N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11882005253873621120ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_3_A0N_AOA211X0P5H7H_Y_C0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 418602048422584729ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_5_A0N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8769337830647236541ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_6_A0N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2282668279647266230ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_6_A0N_AOA211X0P5H7H_Y_C0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18394349603044089517ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_7_A0N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16414741537750936773ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_7_A0N_AOA211X0P5H7H_Y_C0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12921129770789832551ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_9_A0N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 714868397350397797ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_2_A0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2761321132020493985ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_2_A2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9561182869659127176ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_3_A0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12968771351056212267ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_3_A0_OA31X0P5H7H_A1_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14687048799615247417ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_3_A2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14184340874854919039ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_A2_AOA211X0P5H7H_Y_C0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12134622150276916294ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_B0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9937285569266474037ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_15___05FMUX2X0P5H7H_Y_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2761963385987930490ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_17___05FMUXI2X0P5H7H_Y_A = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11439068029949620753ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_18___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y_A0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12261568981921675355ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_18___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y_A1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6975651693713817705ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_19___05FOAOI211X0P5H7H_Y_C0_AOI21X0P5H7H_Y_A1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7404663136617549571ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_20___05FMUX2X0P5H7H_Y_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15769748067788552074ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_21___05FMUX2X0P5H7H_Y_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8057444629133071186ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_26___05FMUX2X0P5H7H_Y_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14701610857578381909ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_28___05FMUX2X0P5H7H_Y_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 544902092063201351ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_29___05FMUX2X0P5H7H_Y_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3845877504104977722ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_2___05F__024_MUX___05FY_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8363921917595242500ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_30___05FMUX2X0P5H7H_Y_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8450455150497275236ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_31___05FAOI2BB1X0P7H7L_Y_A1N = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5171657741550185052ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_4___05FMUX2X0P5H7H_Y_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14106207200820781930ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_7___05FMUX2X0P5H7H_Y_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6968062307386831991ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_9___05FMUX2X0P5H7H_Y_B = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10758275016854910871ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d___Vhshcsw6FMp9mPG5DB6yEFFixIYumqJGMjCC4ZFA66c1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10244465240947769061ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_1___05FNOR3BX0P5H7H_AN_Y_AOAI211X0P5H7H_B0_Y_AOAI211X0P5H7H_A0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3953866575257196188ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_1___VhshyN9b60bE09wmSKOFViwOXAeFJOdNp7ci3OXy9cPA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 240626807628069268ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_9___05FAOI32X0P5H7H_A0_Y_AND4X0P5H7H_D_Y_AOI21X1P4H7L_B0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9669374529479275377ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d___Vhsh5IVGXQSV6bFwkSJjwExGlQBpvKbWqTTy1Ep0KBs8 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2350168351459119702ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_13___05FMUX4X0P5H7H_A_Y_OAI211X0P7H7H_A1_Y_AOI211X0P5H7H_A1_Y_AOA211X0P5H7H_C0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9220652650672434687ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_24___05FMUX4X0P5H7H_A_Y_OA211X0P5H7H_A1_C0_AOA211X0P5H7H_Y_C0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14854458105151338702ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshutMesIE3SCQYSp1ZZA9bnBkAhFGKiwcMsz2OBxqN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 890748913176622824ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh719n2m3zXoYBcqgMdO6IJpAXAVGP3Ru3Uo8zGJYn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3902352026372144624ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhshm7Aw7lgXwBlYmTcPAWyYQrbNu1Pbg27SA7bXzZce = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18395015574254330111ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_12___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI221X0P5H7H_A1_Y_OAI211X0P7H7H_A1_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 913383694184263146ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshgbMq4NGVZzOhxSw2fK3fs8ZVooaYpirO7BbFIRQH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10445056413157769363ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshyNAUmzKBVmQqMADy1S8x54WNBAfqRoSxIFrpSFR0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11134628721077855197ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshlMaXW64ItmS6ODfB9QLGWB2hrvhUylOu7PrZwu2Q = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15817188483038531389ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshBm7YEA2e2TKV4kiNxFMs6S17AURPLQJUCw1LDSvp = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15178270479995910926ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh7kXV7JA9X4AR7alySX75AbLIbQjbjdNalVRMpcJ9 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9381542219540181513ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshPWskF9dXuXdEHMhuO6nHlgmg530wMphE3MABBz7h = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16651744219023450948ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshDxoRRs869KyOC8dOren6d9OuQQFVoPcFLYD8KuvR = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4382066338577010907ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_22___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI221X0P5H7H_A0_Y_OAI211X0P7H7H_A1_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2930273809685684706ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh49eEGBcYpXf4YbPD73ZBn6DAVZn8FwbqhOrnB3hh = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7769937390572761992ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_23___05FOA31X0P5H7H_A0_Y_OAI211X0P7H7H_C0_Y_NAND4X0P5H7H_C_Y_OA31X0P5H7H_B0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 171303295409752320ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhshv4zPAb9Z1JreGAolTZJEHaM6mP0Wo5QxTA5oxZx6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 674867877055316349ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_26___05FMUX2X0P5H7H_A_Y_AOI221X0P5H7H_A1_Y_OAI211X0P7H7H_B0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13451937612893031302ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_26___05FMUX2X0P5H7H_A_Y_AOI221X0P5H7H_A1_Y_OAI211X0P7H7H_B0_Y_AOA211X0P5H7H_C0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15240190885276623312ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_27___05FMUX2X0P5H7H_A_Y_AO22X0P5H7H_B1_Y_AOI32X0P5H7H_A1_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2250690946476018680ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_27___05FMUX2X0P5H7H_A_Y_AO22X0P5H7H_B1_Y_AOI32X0P5H7H_A1_Y_OA21X0P5H7H_A1_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8929986777446514929ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshJLiCAK2OHBmT5Y1Ko1jc48qKZyBxZs7sFuX3QynZ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3565843775400885842ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshEtZAGrWC3FiYNhs4T9gl8KVXfyXBZuBYBnSruWdt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7956064675371840219ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_30___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI211X0P7H7H_A1_Y_OAI221X0P5H7H_B0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13892735908653108058ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshzTFHrBf4pw5Qx90KVMvDVZs56vUbIBqPOhkQS1yH = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15544553300978404788ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_3___05FOAI21X0P5H7H_A0_Y_AOI2BB1X0P5H7H_B0_Y_AOAI211X0P5H7H_B0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11588827341752069721ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_4___Vhsh3FMdve4gZAfnqEATwwbpOSpFYdMdDZaAaXSenDq0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6376472180163094111ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_4___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OA221X0P5H7H_A1_Y_AOI221X1H7L_B1_Y_AND2X0P5H7H_A_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16309121519071442337ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_5___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI221X0P5H7H_A0_Y_OAI211X0P7H7H_A1_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3191195859196088220ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_6___VhshdIqI7cfZI8fRAZgwdwOoVLZh3Degw3A4QmTI3rA6 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14934610727836144308ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_7___VhshPPCEK3G941PDQODlS14QJEof7pjMzkPLB6akNWSc = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15990310952184588595ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_7___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI221X0P5H7H_A1_Y_AOI31X0P5H7H_B0_Y_AO211X0P5H7H_C0_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 722823898477313965ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_8___VhshYyrhgbaG50EE4ZBzIFU7QU1x1qJKZcbTSH5UgLFd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8149516122222764223ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_13___05FMUX2X0P5H7H_A_Y_AOAI211X0P5H7H_A1_Y_AOI21X0P5H7H_B0_Y_OA31X0P5H7H_A2_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11217695531862948770ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_16___05FMUX4X0P5H7H_A_Y_OAI211X0P7H7H_A1_C0_AOA211X0P5H7H_Y_C0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2039395101443806999ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_25___05FMUX4X0P5H7H_A_Y_OAI211X0P7H7H_A1_C0_AOA211X0P5H7H_Y_C0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11333504599429924962ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_18___05FAO221X0P5H7H_A0_Y_OAI211X0P7H7H_A0_Y_AOI221X0P5H7H_A1_Y_OA31X0P5H7H_A1_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17357013858963814197ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_18___05FAO221X0P5H7H_A0_Y_OAI211X0P7H7H_A0_Y_AOI221X0P5H7H_A1_Y_OAI21BX0P5H7H_A1_Y_INVX0P5H7H_A_Y = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15870675516998537535ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_0_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12535996336002537890ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_10_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6135080632450650263ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_11_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1051816827976363905ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_12_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9492598172558350041ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_13_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6631060355887268982ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_14_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16040831182949872870ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_15_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14507565312260887465ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_16_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6529349948166453164ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_17_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11816544184828128503ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_18_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3397771372208176342ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_19_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 197256840790944772ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_1_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18127733868394599360ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_20_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17105853762791681009ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_21_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8766051575958738938ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_22_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8554088208846484859ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_23_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9040264880780547064ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_24_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17398260356439203176ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_25_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12802964978452084463ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_26_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5894159386013585244ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_27_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15591091785500470958ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_28_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13998044736999150410ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_29_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1703253524188631773ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_2_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1607920078069746874ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_30_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11386293196188316326ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_31_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8516768708481825232ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_3_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17258668367890487995ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_4_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11151720295070281987ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_5_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13245126278084208426ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_6_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2433213362372998684ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_7_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3314897335368083578ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_8_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13045080424222840730ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_9_ = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 239725877102875464ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__state_0___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4801997783097038811ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__state_1___05Freg_p_QN = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 228135284016341001ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_AND2X0P5H7H_Y_1__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_1__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_10__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_11__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_12__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_14__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_2__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_3__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__io_lsu_addr_INVX0P5H7H_Y_3_A_NAND2X0P5H7H_Y_B_OAI211X0P7H7H_Y_A1_AOI22X0P5H7H_Y__A1 = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_4__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_6__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_7__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_addr_INVX0P5H7H_Y_9__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__io_lsu_addr_XNOR2X0P5H7H_Y_B_NAND2BX0P5H7H_Y_B_NAND2X0P5H7H_Y_A_AOI22X0P5H7H_Y__A0 = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_wdata_AND2X0P5H7H_Y__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellout__io_lsu_wdata_AOI22X0P5H7H_Y__Y = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__io_lsu_wdata_AOI31X0P5H7H_Y_A0_AOI31X0P5H7H_A0_Y_AOAI211X0P5H7H_A1_B0_AO211X0P5H7H_B0__A1 = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__io_lsu_wdata_OAI21X0P5H7H_Y_1_B0_NAND2X0P5H7H_Y__A = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_11___05FAOI2BB1X0P5H7H_Y__A1N = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_15___05FMUX2X0P5H7H_Y__A = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_22___05FAOI2BB1X0P5H7H_Y__A1N = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_29___05FMUX2X0P5H7H_Y__A = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_30___05FMUX2X0P5H7H_Y__A = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__next_PC_7___05FMUX2X0P5H7H_Y__A = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__reg_file__02emem_1__05b2__05d_6___VhshKbBZ7lpOicZCao1QQwNt8iB6ColDgLBifLLARAQ5__A1 = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__reg_file__02ewdata_10___05FAOAI211X0P5H7H_Y_A0_NAND3X0P5H7H_Y__C = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__reg_file__02ewdata_19___05FAOAI211X0P5H7H_Y_A0_NAND3X0P5H7H_Y__C = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT____Vcellinp__reg_file__02ewdata_4___05FAOI22X0P5H7H_Y_B1_AOI31X0P5H7H_Y__A2 = 0;
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16562645518548338947ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2884455204207071768ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7204289946750826958ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13842555341316305513ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2132700983312804042ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3895389874633422744ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4642604367859623157ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11210508942957388773ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16698064071622312990ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15642483533275425184ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1192144618609929762ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9562516724225842703ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13039659706599083496ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9637183610528447326ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10610476452938267744ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2311073565895927091ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3559695003565554326ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8387479377233457155ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8883536940140930144ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17926829159203313800ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17491390880234869576ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5518717211187327647ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6590165020176151631ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11225191579062235163ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6622956366156576144ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10518888387749637744ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4158719609747268556ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15083997116363154564ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9114595931692665137ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18345721943899632462ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15314509068760275469ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4218541374562905240ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10339970670138530644ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3925640670081541767ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9381154871817210999ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2881901212057737429ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12761678421423825072ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14527070058089740735ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12652787732427325692ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3083357691063174009ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8897205774675584847ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2010825136069558931ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14824820647905561939ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8941677441937996491ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14792795106556085752ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16600033115306387124ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4736087637074031255ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5215506376744643216ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10689637789938932667ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3840533503105907741ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7670712569135719313ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5010515499979510963ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14102508144754181776ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9323379840528502646ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14418922508299438328ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1522656806984124537ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3602133240118615931ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1795804073575272470ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9840968410671763255ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16064033278014078889ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11400101006572759073ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11310685317719350977ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2831315996477184408ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15214486647298585225ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13251456339898923113ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11174945749922444580ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2132368774407369367ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3290192541971778426ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7704477348612541668ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6580291715625737410ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17264256671667203712ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2923349423904623836ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4688368800479830700ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14025716210108313201ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12248106908027511699ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7607892131140728512ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17394762638110420382ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10971308784368068149ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4972757212614826532ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15649016371351390260ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16416098528043715964ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7141829604304824521ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13869835610746047864ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13469888358963991216ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14410964017349908639ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18275636446053056085ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4303804142357840649ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15058734700156071156ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6789721070486526550ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13272707155486939394ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14108059439125271814ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14118300564327509648ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16961513353672166181ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14960338770416343280ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16397390489708908114ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3203442811088569705ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9813032503111480877ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8823091778893738337ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4402446436025774563ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10234413859559231949ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 79099018835594986ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15755652806446343395ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15483018581649376956ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18281086620687214831ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15719096537594828411ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13471803377516350341ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12370652457659245645ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8114422424213700146ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6105074100581736236ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3300247452973652581ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5537983261738785863ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16347423441160106205ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13815525540379063274ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1347724545845023280ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2081433683333656507ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3735053801309090840ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15179410640002439310ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12746004437825374062ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16929830594240510819ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13352082636154039009ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18297772637896582585ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7230740875128366909ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12582108717295320576ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5719359047768774223ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14257922627542123621ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5677720369217505888ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15247060306994096089ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12683052810788041959ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11016900836213742780ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16741239238953408424ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11353787797378147197ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5670368768796688333ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11995912494618474864ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2077032133939035156ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17567559247845733473ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2980649485438509173ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4874338671083537975ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7167743367741042674ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3087079354434837909ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16338546767077246018ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1220384056216332166ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15878620893639305056ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3513864494752686127ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14835986322877743593ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15671328387153291296ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14396002188714370105ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10984660966101311812ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17364627594603448156ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 83298760094963101ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2432284906191842093ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15004042903379121756ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13712439609581730941ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3285752939730342008ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12049470516049773397ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7725641712197250293ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5634502563431018347ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4768588554531339410ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7747298716012308391ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11571284169651272905ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3390211509596084776ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17669969547762516298ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14439100426436736703ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16972274920438544537ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 856004096624137996ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1328141789064714105ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10215576643030082472ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4220175084592584356ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18164533756172036440ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8664094297977057264ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17315855437223992694ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4505315344219518290ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3525085884818950133ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7245888427873862927ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10586949054402047412ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6558784897770488942ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6530587195271764324ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4943351603475047204ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13643754962721038531ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13996604243476192984ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5866210880156037081ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18241641538704453478ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9528438941891165760ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16229800073314892469ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5102084871832884987ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6113953335767728423ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7703328406659773794ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1482842227448442132ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11093475018323593947ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1247460301615312625ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5779795450458199566ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1862502543260618624ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4305330848726445101ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8757784314561063399ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 861327433938479114ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9235863405410392800ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8485966229500716148ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15921499150761460800ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15131269548178785099ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17735178567897363978ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2713839469754753836ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6560915905213060840ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2419440371043429331ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17436108800455519625ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4915088944613997588ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7533102887266885015ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12669731924781100052ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8989517845028378884ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12084437639032825823ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16434653203392656037ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16489601194634600522ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3418314346237456885ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7677178658731140196ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16572049320217504178ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2702025223099272794ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9922275139752567687ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15472584542797064609ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13185504381815456656ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11346286885455016158ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5086432825665039982ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15580859615834413844ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13623738331732003097ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17225418332649366016ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4981634971354091537ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7612784906480283130ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13114254150551194173ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2377643495454088605ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 657568364815249086ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10247494435776289271ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17749436925101724515ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8382345083571306706ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14522467825641444120ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15097880665298311941ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9479898750549595922ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15967285696143834252ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13608598214020991543ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12020543512164976096ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14680088005590489652ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5120994274193478926ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10356561526974449636ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7385640959166078792ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8711487587021152442ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 358744078732598776ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8537861192122763826ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5857212603258969364ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10897591331526542028ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9935912030124323726ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8564518255012042637ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18067499326481978845ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3351469101723343488ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18081094674740857034ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10128331758178705240ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16892772460013276436ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13311220481754877369ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1092417918034191488ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1075164626317446356ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14861747679932619083ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 689182468594466381ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3760830044492996115ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8543031679533929813ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4762721047689504514ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8181129906401494435ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17904640063959359561ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15913102347830995677ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4514354545348661222ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12702794757536444621ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7256235076558194068ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5531295651200985281ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5334499802961246040ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12292216993661698602ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7340288827590814271ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7384596808195760211ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12871420993272928204ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16183991601432304226ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13609136231368221621ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12858478769068058989ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3933652327251810850ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17860803814942911862ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2277533878556212428ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2190185932854593849ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4242168598049119190ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5173139301510917795ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7508142652830876861ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 625446798945595857ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5296207652711553562ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11408589128615341720ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 491546909522157129ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 776260340493149314ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1049106832244469237ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15379858465179941576ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12335661585024070324ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11357103522988394019ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 514140060591214106ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17158919095607442095ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3647123182180627563ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8658983772844238326ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9364876151810612415ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9611720550200766089ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16248718515759652181ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6248422241889547508ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17626166031868036113ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5950195380751958613ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16431260793584042541ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7240278102756583333ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18191592325041943794ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10649328755949736549ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17172424860170361932ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12728774470938803807ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5214642048205642484ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12197741231434472318ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 912654190816800691ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14086751437626469798ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6013678294557819411ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14803849073018827340ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8757239878599545411ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14324950518944558000ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2976185682508690169ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2975805826333440389ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7548432867109130643ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2672292502482212971ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8105859244747515968ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5711619937482461407ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9126186891268537193ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3476055820610609460ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3991829495489224110ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7369283151869244153ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9796567658338466501ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16246247076330719266ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4871315034927687697ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5227126784486576571ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13874298540452868960ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 443583756161062806ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10753410225673240994ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1553624026688068996ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9206631440074196056ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9547706407866523447ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15307066125358203357ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2074588161600769746ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2911755336486496838ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7942966009080723268ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9523237624814934471ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 880801157762010186ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11657929132199870540ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15450536655513573046ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4462339386805491862ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17950268194412101117ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12479326575617582158ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 36220479665303876ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7517861730499794958ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6185488041598825711ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12134274727122732444ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14092195141185874193ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11370303161359149248ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12473227413203184706ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10595807736916361138ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5463738338733879566ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1649024105557430218ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10993061758631300387ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16584102101286604386ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2814801925270857948ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8033678460581609009ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17396897098436525993ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15222356255074419286ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10003547849613901890ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17743818380991541318ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5240741513726457506ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14942940476864868125ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17360151390026321336ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7075762289674470018ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10548841568763781178ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14201443209221723440ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1156437597806282572ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13347446359565316402ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2579964270075697213ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5693601803236512696ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1829090645758005187ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13914286648613244982ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9176012140017741999ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8856565218794443657ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5062318790665648118ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13974293940178620295ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7931536528037865129ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18255351462261827142ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16416828740550162205ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9564446150536150387ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12209590543897429554ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1406100020586315415ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16581272983812503985ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18403672103602269662ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9081464713145181818ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17713824379373475444ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12921307785237223489ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3664797144884856368ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7722281102103024662ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9402782961607652547ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3414277406079639629ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12509143397627570978ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11528190638466680627ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2850814743071428867ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8169657146215907856ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12760736423605887315ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6377823869192908522ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18359379737718030949ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5510377564597928805ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3276805523246746088ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9860845741889757592ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1370010097776601964ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4699944563632592220ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1836668561003288404ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14725302680479977518ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3782523943839259577ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6645093289967075256ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10016572652844101892ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10382360134948743070ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1171562454367631362ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13723417082119364287ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6427370246906953743ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17174587451576893882ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15784858907865481145ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13021240730557496124ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18412537087019597909ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4023985057969500471ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13638665539795085274ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6372166652788015274ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9019437396471574012ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6238294051115751285ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 567728543886668780ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1162303885742565389ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2958174320424501301ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13053244761128843057ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2095814352269352393ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8520131822951580307ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14244316303851672709ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8780060971987362552ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2914985930960350103ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6882422558140631412ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10998086967990919343ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1371786231742576956ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15394598464202894838ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 602970903374076392ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1289794313076168499ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14704470212627467541ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1776588152968958779ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14418799991266832414ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18043963136455717612ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17170093161810860816ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14110843370135276894ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10180887358216009876ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18179709716744164049ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 468183213277212199ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6931265485444520127ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8102650148735108513ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17318086361603880855ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4739103442038540816ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18258576289844322082ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10456878312609003777ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9963042544345162112ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16584589082483995005ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12826352374961940575ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 98998309235820160ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14820097038264463858ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14061961494366899503ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13186629291309518314ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12171337194625836794ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10279965061063513717ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14647286948831011203ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 111627592621507003ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17244268654968779541ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4335398898996603281ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3878208071970539102ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13728241468698741609ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8424293909860941631ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15383853117489775721ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11905111726845747448ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13574428745128427974ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10212930370132438152ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12260046989388615566ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18018247602274269491ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10135350854932722538ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2623276892344557942ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14814607574965326925ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6256458371133804480ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8336931473662992453ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2925700354217000298ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 922975584198536301ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7496787219081635913ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14043738331279086202ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17801009654955626081ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6708915271655047470ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14202188448522252218ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1054086602026183404ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17313131038773655889ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12254369412617451526ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16133005394691905024ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15338623253561107913ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3243729812538676844ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6843029026593010985ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9025818358743521147ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2496690892956482473ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5388330988023496678ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18174397682217376338ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 247682755789942985ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7584811085034728081ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16036130374518628475ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1299660210956016525ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7601924977109623938ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1232251481157171759ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17482109045509074550ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 441717596639117231ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1068845328242636838ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12488933727365179919ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4544596199459566853ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17751662321434173030ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1987108008512344693ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4002663141514035741ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15120081004265804142ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18016877551208102026ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14158846521847440265ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5782922140789006763ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3809817509748916244ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14285474283910298177ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13139928020227998022ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12761526543957958816ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15225328778971277964ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16817449134206862425ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17231917132745183681ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1541648225074739896ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7947216089722312423ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9783126916048209370ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2057595834413803461ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14807969893748816452ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6740414159840657455ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14478373858007596402ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11094625600422305558ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11247800873364348975ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13265862188174991555ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9226977166853782821ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11980971603573728390ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5605943345773690418ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10789725622828530613ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2524566620905161144ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12030551838730515312ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16068981117696566728ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17510534364427321091ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13415960845602518659ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 874226780197134911ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11891675674986820053ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13043244671521112364ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13711255441598007791ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5786307655661036824ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4837972698813020006ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11767981239270028587ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6672948513875478612ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4720714567432623064ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15303486854720997779ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10580144751534182978ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 336245810734917452ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11007432146921805129ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9230843418519926429ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12452683326979241844ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16617780750724653717ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14541727696964774067ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 26932695471873758ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17041854818143597979ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4719397146174170650ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3222292244042209209ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5535403275248671483ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8716957835376752151ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17398390670646382113ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17167980352420885362ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2378228667335304900ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5387719201155974396ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9688008959059402791ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4377333625491655615ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5361269014048618823ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4661965613508414174ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 501716576691485047ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2252392670265519003ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4875559535818436251ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14211287817625088535ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10701200152987661288ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1237671459236604489ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14045429518152178696ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4305955361444009099ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3508343967500211768ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6675612543767385759ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5766954538073144709ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16760897831252729698ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15736019087045087820ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14492579059119275668ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13307042298683843671ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6544347771865610176ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6439266744050413158ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8281557938577182148ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12649303234353842683ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11620936829157624263ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10930376640305182556ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16878612460592645695ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17448921834556719844ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6094893143185645116ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17587422593326939318ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14086107917745016752ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10002319656209632949ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4578898142801573066ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4174971272340931945ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1501704701280280161ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13531526142197813349ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3664069729417748043ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10539646136983902935ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5130655184123975425ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15630722637407770716ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9354271310477105536ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6381177764883220349ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15319041691934867264ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6406693534292857848ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12892770428101282953ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13153833594327917912ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2286591575629493139ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11446856725656753940ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1081229075486292779ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16854976490312825024ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 684920952801853089ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2551473142542755920ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6501863334719570588ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9451549268484817914ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7893178288247462308ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3502470172686322840ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8847987822409372458ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16017710727232305043ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2545861531872070227ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18412936367669941505ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5443957328851697751ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9661928817708322760ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14619600311192227773ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13548592832677493320ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16053757169149878530ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7019950626947785146ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16777197371818071975ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2926630044398980323ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10643936476892467210ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5194615067639251433ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3564972300551584106ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2181900287648990893ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6986756587542697030ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14974987731280820357ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6046616576166720755ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3560927260365527539ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6052146780561035466ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8201603449840777963ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4162038879451390146ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18047862868469616781ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15590399643381993150ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9544396518810395379ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7278201281326998744ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 555819323250097402ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17379020815645032704ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4307739258093064823ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14559381636903683790ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9774693739788837238ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16955345355839825595ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10887112774250804478ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16679790082585801287ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15509628385148715970ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3951506902899795168ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12254453947509889620ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2924385307262379972ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2381054228603403886ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12644141619828353477ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12453194841081201970ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17471481814604506201ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12616185987766721592ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10903958029488574566ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4456732354422977701ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1164662345764294024ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14130918232203584516ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4665830605010498877ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16682554175265867082ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9416630122032203488ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12631838305181295363ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 422359538152901082ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 974937208688778963ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11311355423434309150ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2904308361585263130ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5609809335545555733ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18411978238183188388ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17095357709205583455ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1103195144480903400ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14657809618077096414ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13227350435920968821ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15496496510805644669ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9595402030151319446ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10005524163196152950ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17596269446369439981ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16346588493397066770ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5133428614464665310ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6534946317681662046ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13839823783300657850ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14396280106957789760ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11323524736998589247ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5014625878321970702ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7234480926510670142ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14414997429597099290ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14834585102457815227ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3685922971936974506ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6302316262431390943ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4584506461442619431ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1086718953538726747ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6707366261341151838ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12625818182215118589ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7432586867539150057ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4431240315611333982ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17125516314215083194ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1913982995809356179ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8653593345468214503ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7684606808569905580ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13868494420559230211ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8537473418218320620ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17277598012007166583ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14057249432052297292ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16212283883352514483ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9695392023212730007ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2880791856855484178ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17419085524475734211ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17562774022424838634ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4569201428425299881ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6195369182744710098ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7229071964838677087ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8263923045939699335ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2560284974936781184ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14475822928612200452ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6920831755966536880ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6698023176928027771ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9514432637134054230ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 174479761268217110ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7760625486297329284ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8913116182311707304ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17885151562546364087ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15442594624258625317ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15380372306828503413ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10919101572496128311ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8113969424870787047ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4056069511867380878ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12024160299928103760ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18419993153383581748ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17365274571333167565ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4819341748012249438ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5567407884026484944ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 937124481848921595ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1224481276611025329ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11802943636855563566ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6224567218210012518ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15277581057492073007ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15321588115920922298ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5623234617808149128ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12469915555775702873ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11022044425381849105ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15918830723936784403ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16566826794821692272ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8291601128110437649ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1366175084889926263ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 102902942857065955ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11145514902118758788ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14009939367977275074ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7168659033622376779ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10397765550367811719ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 314140144899784827ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16794889477593756946ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16463829956876746141ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11825583553269219686ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6098385674284207430ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16828329598304035311ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16345922066914109884ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6072723528898388135ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6465475484788409266ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2665339084353136861ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9779887420830884451ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12827495682478391840ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4658042558673545249ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4012761605462596855ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16759977651443288125ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8464235190746436446ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12567864872761974548ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15202096583124840515ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8574978693977581290ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14061491748429208635ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17024996191209905920ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4656939522136899382ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10254979241844898502ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3460018984454765230ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8702627738786450731ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9086990169720829188ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10222052196278630356ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16458539515893931157ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3564079976495765393ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2909347650338684967ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9202911432326224909ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 626876524232848679ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7198760150056931698ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1526436890264523466ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11775381620017721000ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 219812456938000607ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4595077237406116517ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11819930198035094487ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4805517381734238506ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 684796113034276861ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4059333664974500148ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11530395427863447441ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7494923965815222944ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13616504047910209876ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12142740654511824983ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12523486380878991202ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13168554341538484535ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15829501099175635611ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6925061708895378574ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3635342694955991656ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1004471616354556120ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6277239694561978308ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14036106734806119065ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12692796117489272327ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4717806374815744009ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18229893669662674447ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12822768811381279718ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4802613665000388758ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14025795504382916582ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9830634548099764135ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3732382165335004719ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6478402826390544105ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4621880722320275848ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6635345509898289030ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16895181607121816530ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2501786839173910560ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15266170636078802453ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7714220091909451035ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1799639836337257401ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 372446518445876515ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7809721150109689206ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10955052691618754651ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2984651318151706043ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6646366047946770860ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13200787024274001310ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9904549023347865095ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9227688899045964075ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8784613265133955220ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3107115445082772479ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16998099306792567780ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 378112526862739404ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1104661468042957419ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14749800392887347713ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8911136220782441635ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12980381981375939115ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6519793289913190477ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9960243137961629702ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1414116052618380285ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17346551352128547746ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12821047173983396170ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1959044464812293264ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9404942172449487600ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12955283261931153530ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16968778787987345473ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3370112962244396540ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2953159501989753823ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14902004896462049495ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2685804199930779163ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16618519273771084032ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10162049273419026421ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17698726528770682683ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13734856899219442984ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10389465301470089738ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3059222656882324321ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5441942367802210911ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15391349280310706263ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6106384547790478008ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1401750627650328210ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1265889485589985651ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15376506485751342249ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16085482362967668929ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17554232870050963639ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9831976061102901438ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3434906894461733325ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 824856247518799415ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9476130881434303342ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16298298696711296044ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16900333988157058127ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7655934867950025294ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18285764040643491425ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17324233163087207644ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5324877568891530918ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9152008682500787316ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10962949396450468274ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17930368213171809744ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1752488070128133809ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4805674474272988220ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1360293408317695140ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6063994557248953596ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16722721238815307331ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13879153831956579251ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2209885012849691154ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4071638749375027104ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5094186013478976759ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 801565357528488338ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9875759501053584436ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9091897556507541880ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7893604355270927180ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8486215461992985373ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1954820704856578429ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18038251950867737100ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4004267809018739005ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3671236318546946224ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4640246177304764554ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15337430188671145012ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5122685489563936941ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18322705984462169379ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6963048592379984042ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16905993932568911792ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13576980578558581201ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17443957413599540024ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1712888479700993240ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7514916067297357390ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4698572591572777978ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2807482648388052415ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12082729348053821624ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7576613998550987182ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17226666665547872308ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17075256011269975837ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10201208226940269635ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10825262967281338700ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14530249450753130978ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5965677967988774563ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 381167334304967858ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10444777742617564336ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 31236213903643180ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6733006705017137741ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14901553287382093629ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5337104133795901543ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9743321082910792158ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1189731883643877518ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7396714844060421005ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9205052591213327717ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11767851947522273317ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1376983045264398350ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9312383944259077939ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13088551443319432057ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1239176146971408020ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6746896405790262842ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13633461502655596384ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14897976457633405173ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17004817234082175374ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3528382278147149747ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13609613724570364479ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2169009524962056318ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5161918650739090831ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14072736404396228628ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7808766612346769117ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4891500456134369010ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2020771361139816267ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 224650309573143113ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11980344413311262058ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1861719921812074373ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5748557339557596298ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1990048030689386409ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4148729359273296510ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10626128858655329207ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7989218806733016371ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7363776930969615928ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10973720527030887341ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10766472586197193740ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11155810551337234804ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1780059823060218378ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11582921190582916190ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1613785463293240725ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2116840605590254431ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13844391894647664834ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2818137039093136631ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8521644841256708589ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15643345302745423021ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8466041164493285802ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3845423013071850934ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3762269073863824868ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 55075314906808439ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9456291702081727062ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8931777834975694717ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5921435485136321072ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3683290852667815795ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6228215188101619073ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17285933806456422507ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13708691734556718426ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2392866795197874641ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11971183854358401852ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13630405428761977018ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11523890147203540689ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9265888595272277716ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 648414951737800845ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 42964547141224003ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18351053694612593536ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12304278348888494233ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17052392184843918777ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5189525063471757976ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8581083227865141699ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3168565359907674784ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10534486005802018570ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17027086785391565637ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13037476117914643551ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17548560812701175262ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14148046507039862811ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10240850278768588035ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12956953820873433742ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 648346840267558744ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 99456604986651801ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1037730264295897934ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9971813365064767750ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13707577139541747688ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3544492828338314725ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10941559475048281550ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14775788940311591248ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5384962209130310649ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12468837079346957044ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1047221222377192428ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7108247895298076523ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17575174343708327323ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8640918448738359567ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14974632068931953485ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9232893546232841848ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_0___05Freg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 638314575719011705ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13202624814808278508ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18010937835868730239ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3819904014314313365ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10155936164259253422ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7484303391191544811ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10849154334149915917ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14883775858560911511ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16962763215824281355ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5645645408794842598ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13738679696852816943ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6146225090429674741ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6150153294666828359ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17734750162108206194ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10241587136548754026ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1598340254751080955ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13436183837841634364ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1012291181206608256ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14747968267225447320ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12764962347377192923ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7682572097640633491ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18196591026326098507ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10246930125695585267ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11634990826557611664ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10231090124404720995ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11213518807779290728ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4770839337587407825ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7755707588726190626ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12888590188059637664ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 873485348022868509ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11155574130576901220ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7713952512633550862ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3099756430641913842ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2518164774721217578ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__state_1___05Freg_p_D_OAI21X0P5H7H_Y_B0_OAI211X0P7H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3369602717578539443ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OA21X0P5H7H_Y_B0_NAND3X0P5H7H_Y_C_OAI211X0P7H7H_Y_A1_OAI211X0P7H7H_Y_A1_OAI211X0P7H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4717996791020301976ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_AOI31X0P5H7H_Y_A0_AOI31X0P5H7H_A0_Y_AOAI211X0P5H7H_A1_B0_AOI21X0P5H7H_Y_A0_OAI211X0P7H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4441515196201934681ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_AOI22X0P5H7H_Y_A1_AOI211X0P5H7H_Y_A1_AOI31X0P5H7H_Y_A1_OAI211X0P7H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12222798812061520371ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2BX0P7H7H_Y_B_OAI211X0P7H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12400375338752034170ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_3_A_NAND2X0P5H7H_Y_B_OAI211X0P7H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14608448094441417042ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14948583981096188809ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_18___05FOAI21X0P5H7H_A0_Y_OAI211X0P7H7H_C0__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11357845553831165930ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wmask_OAI21X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9271606758323505018ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XOR2X0P5H7H_Y_2_A_AOAI211X0P5H7H_A0_B0_INVX0P5H7H_A_Y_AOI31X1P4H7L_A0_Y_XNOR2X0P5H7H_B_A_OAI21X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4997050846361807881ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XOR2X0P5H7H_Y_1_B_NAND2X0P5H7H_Y_B_AOAI211X1P4H7L_A0_B0_XOR2X0P5H7H_A_B_OAI21X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12825567271102479518ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_40___05Freg_p_D_AND2X0P5H7H_Y_B_OAI21X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11367420838184594271ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_11___05Freg_p_D_AND2X0P5H7H_Y_B_OAI21X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7863202164709748687ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d___VhshnSeLPqflfQWAkjlKaCVt301NOzUnA9UihzSLHlJu__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16325848381361984621ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_3___05FAOI21X0P5H7H_A0_Y_OAI2BB1X0P5H7H_B0_Y_NAND4X0P5H7H_D_B_OAI211X0P7H7H_Y_A1_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3256889980242786761ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_8___05FAOI2BB1X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12300174161611410863ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_6___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17784585234715637531ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_5___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1877193311025053594ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_3___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12458335885458285801ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_31___05FAOI2BB1X0P7H7L_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12266637264460012382ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_27___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10873657789604487016ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_24___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 802557452937223165ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_23___05FAOI2BB1X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3483421384778686422ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_16___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15445529464440253377ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_14___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13625912441280711057ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_13___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17148471927704629544ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_12___05FAOI21X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4187465557542541921ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_11___05FAOI2BB1X0P5H7H_Y_B0_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16388585183830582228ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_10___05FOAOI211X0P5H7H_Y_C0_AOI21X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15565522182289609893ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_20___05FINVX0P5H7H_A_Y_AOI21X0P5H7H_B0__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11650503311609780227ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_21___05FAOI22X0P5H7H_A0_Y_OAI211X0P7H7H_C0_Y_OAI211X0P7H7H_B0_A0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5632649693971006077ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_2___VhshwmbykxTq8X3xAj8LjR5P0lSL4BOAkPuoa4SBSRHX__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7697673651055317401ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d___VhshOSi8PTDGfBoFRUsQrXFSr1rCroovXIlEdLsQEjcC__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14532366250342038870ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d___Vhsh3nN1aTy5YD5iTWRGekIfhdl58pBrJb2swbZmE6NN__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1199068019689259609ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d___VhshanyvJm0tBVYm4OOqIHwE8EUbw2NXn3RsMgt9AuVe__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10374870166400252002ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d___VhshGBVtOx1iM7kjdNzwYsZDFfyQ6UghBvGHuRhi6eO5__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 883452287820254364ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d___VhshdrrguBjmABLGu1Bw7UwzKOLDuvVCfBEs6SJGVKGo__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 461326888992229705ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d___Vhsh9ApJGVqWc4iTmKlRMbKr51eGnN8k4LUVNQuy8ysX__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13123920001978605584ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d___VhshP1jhPWGuyTAYIBB3HIyxLP02T9hc4kVi2JhOfwFv__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14438590496445328449ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d___VhshPmKTSzjfGp9mFbalO0ircCp9ejxWFAlAGOzedH1p__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15702369590329168059ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d___Vhsh6Ie6NBvp7Bz4A37WWvXK9emBCgW30KXuHPekZXp5__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17507709206381757563ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d___VhshK4GBY7Aeho8SL5DSsAlBlpA2AM5XBiEBR2xt1lCx__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16470626059349375283ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d___Vhshcv0famsq3fhF9y1VIAD6XWwy4mZhUIy3mLvliI9Q__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5234932257524065033ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_8___VhshpA6O8d5ffOsmx7dGPGOHE11Av0Mxg9xKpNTR63Dz__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17816442785336931382ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_8___VhshykPkzYmVfXXjn1XuW9hYmgV9RfAn6qDGAV7EwFgj__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12211286205817907362ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_8___VhshRIJxCgPlYwPmhgG2AbDGOYi38B70vXDipwOle5GA__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2446700579165715361ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_7___VhshJRGevh6SYOqkNzWilLMBtJ3Lc8V191rvaK3HPz2q__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10973127199630273739ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_7___Vhshhyt9TCKXJsPY3UNbU7TbcR1QZcxadMsaTT4VtCna__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6277595904730974720ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_7___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI221X0P5H7H_A1_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7598531281114105791ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_6___VhshrPPd23DzSezBPaPL1uzoAjPLgw2MTRLq6cygPbzp__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8212988300804760384ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_6___Vhsh6STW20HkpTi5AjXu3KCC5r5s7UyBwsNCaPIcF4sf__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13888743921064602324ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_6___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI221X0P5H7H_A0_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18289096661129769566ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_5___Vhsh7ySLsM75PwONUiTWeJ8VArNwgvWNriLoniVmeUAw__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 531949367082286550ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_5___VhsheU239FJRqIQBFKi7AjKk3KCEcaNTldeBjxeNWmbS__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 904675899015777547ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_5___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI221X0P5H7H_A0_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1036214940484951646ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_4___VhshKi6L9sj7up4JE9ySKkbSB9tvzIaqrq76j4QA3T59__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10345362046894896853ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_3___05FMUX2X0P5H7H_A_Y_AOI221X0P5H7H_A1_Y_OAI211X0P7H7H_B0_A1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6274593434817490661ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh3G7A6Cw38aneYdbYgNp21X1OIKoRqJziogNmpDMF__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6527198698114069766ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_31___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OA221X0P5H7H_A0_B1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 175095030242652613ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshtGuQjfSEoBBXHuAn8IH4SJhF2OtGTYnJBdNs3tqa__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3122665739368772119ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshDGvRGFQTeO6Bp1geAcE2hRtCILJdBj3elUVu4q2s__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16938877703740558193ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh9BI4JwwBg2ZHsWwqkjZU81EFuDl1uEgM84ZaCPA9__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4767336685884775202ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshXKNRA6QFZIZbn4d7y7gQBz9LihAdRtSnoDmVXORd__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15793721289219828292ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshvJfgNJCFUwJ29wEg1gJtDBXSfqyhzGeFYv9PULhx__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12913082963422382ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh05T3ejJzzAv3LEMWYj4kizceOLUiomFndjKpaDOe__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14201356568274757319ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_29___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI221X0P5H7H_A1_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12825289890540120896ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh28eRtpPC67BkMqDqA3uZcfrwxr4QuImpNpkSRUSu__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7259083270671530889ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhshrf1omlmeARY2wZ62lm2RxG7qNjt18qBibmY8QhAH__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17482969103841084558ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhshoe08dEOYA93rV9snEtBPHdoLATHyQ32eHV8jAsQI__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2441769821077391151ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh6orf3nreZ1neHL4RBPNSnocIAW8CfnC2ElGJGKzk__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4768863561482669103ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh8zuaMclVNenlbFFVPJFnjHAf5yGtuYcbOuIhm0IR__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8584257198734252735ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshNwG4juCVpVYrKcAibWBbxMdnyPCAn7ANEh6Ygp1f__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16540179268367142619ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshR8e99iw3e8vYzIf2fyC9LQ2qABugea0ZnA7ACjuV__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9912342994410512400ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh6gVYdJBgsU3T8LDtm0C5vV19Sf8iKJ5kVBstaYcW__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14963366015942272369ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhsheEciUpXpBdsO5vn28NTrmTSAbBNXo1HjPr0q1WUh__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 726457918715947924ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshUsxBROlWwBIbBGBjU40arozEMMB1VAzzrOgycgIS__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12749836172319873711ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshpHAEQNNtTShkhAz73miKhhKIbpaeRhWb4Bkg0dTS__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6017496709817231220ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh51oY7LHXZLe4mOzUGq3MYTPRlredMAb1woeOK8dx__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 437797521999665344ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_23___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OA221X0P5H7H_A0_B1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12065216723292402634ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshIGOnDP6hTCwHjQnDdiPOAzox98lr4dF4aVifpB3y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11912455525718160193ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshPtBQhYdkYQLAPpsS8BLxAK0jVB7tYvT6MZHDzLvO__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9759318629094270163ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_22___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI221X0P5H7H_A0_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1878637597929482929ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshUCyIeKxy300OL9q02B4evUON87Sy9dDmcLXibKtC__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16356148903347688574ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshMuTAED6JAjFWbkh3oSgmKsP47TBYHYMR3O3Po3Gj__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15762176704179858015ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhshk1GGBRcSrMKuhCf3A1mueC3NpkqeRDT7HzxuljvX__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5284322577459819294ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshO2kngmJDIaAwULftVqmBJD2nc7KAiR27CNiUPZzq__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5168148652667538184ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhshzm2SlmuVqC3t023d6BUwhSArBiBg4nU1sf6HLUrc__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14491162981926140613ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_19___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OA221X0P5H7H_A0_B1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3890601154779550478ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshV2hL5WDXSI76Wqh73mGNkxAUchR1uw9GB6oN437L__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13810130825928012863ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh1EomFAJkhCgw0XW2K4DRrI95IgtN7LIfLf0JYt6Z__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6471622561517132689ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshDkBUXFoBJyw0vTrsPkin3rUkIZa90u5dIpmLNLm3__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5980794812431053936ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshAgwDEca3BcfQj76oEGkzUBgcWmNOGQaGDnUihgxb__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9335381803594610920ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshPudsJkh9dyBgfzaojF0FR5dnLw71OMWS92xyPwWZ__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8803968424692915669ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_17___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OA221X0P5H7H_A0_B1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8132470754511969118ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshlGA60bAJADG6g08xyBlywGFp0kt1JmXPzg89PpOy__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18178484572816835154ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshkPdg4wBseTjdcehr6TCi9rtQCzxLqQRaoCVCwFVB__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10484871218110442427ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshoGAKGjPQ1USKQq3K72QRrBefVlufDWjxxukOe73u__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17932433522061411672ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshPKU8zH7ZEQSEtaTAbeYDGEzBG1WSrOlEU97rOQFJ__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12787330337543308858ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhshf4OAp3Yac0AYauToBEdBYCukAlBZqOnrk4kiDHrL__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3819219549164442006ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_14___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI221X0P5H7H_A0_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12841291684577529366ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshLceITmFbi6OAjrEPc5AqS2TskMpvjJrvL1V4nu4N__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4085457897179426170ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshmZz24s7r6iRHdlvnFN6NgRTPMn1CHIHGuH8owI1h__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 540823101102552234ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_12___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI221X0P5H7H_A1_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12242751458755037174ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh1VuQHhoW2A4DKAWS381uJLn1EgOTOBFAFsAUIz5M__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4698474519997820723ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshAxRRhcROlsYYu0XcRuZOAbARYtBYhVswLH61kfyw__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16789198925404824792ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_11___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI221X0P5H7H_A1_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14763323993294368969ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshOUA1JeDhkek1rpSCDK6IOp5BlUnEsNtot0fFQj6f__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16247172486818621626ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshGczMHIx7qYHgBR2IBnvN5gzyr8uAFfRrvMw3jib9__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14306224161916528547ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh80J63EReZBEhS94DSoluJSwwMKOqQl31lVOx35it__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12895882363811215211ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh8G88Vq4SjD0BNAg7afBvJ8cTCcSkn3k9Au4U8aT7__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15625270103875017426ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshdR8T32tFAGoo45R3eey3f1apK5iSOn0rBisOjTPe__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4789054729296578454ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_10___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI221X0P5H7H_A1_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11370134294091366063ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d___VhshvVqeRCA6GBE7SSA4P2wL7uwEUK6eq8PYqvGU9eFF__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11749278331565066749ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d___VhshL1OXPGS6jCa24qTVrFEWkDJTjRTYQGwvbIeTaI2B__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7836167155383571481ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d___VhshiLRQrnb60N7JaDhxqTItsqHtjq2JAfCfWyABx5e4__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12329488832988409400ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d___VhshsKDGkxgeFc9FmfEbIJyt3HOk3AB2FHzB9Erav3wB__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6294715719336674558ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d___VhshGpSynFda3Z9Y8fGVNiu3HFhg0rVuAA1sQg6vNpz6__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8657777502641524226ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d___VhshGlxWUjBfaC8U4y32A5vdXKMpHml8c0zxDmRKlYt4__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9557640636758465407ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d___VhshxevgervItGDsoikfh37txm6JdDFAFIgFLvQ2UlOv__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14812853270348961358ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d___VhshyC9xUZJoQlVD8s9hOlP7QNoTgp6A6JjRPOsBoPBj__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18293516680026727535ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d___Vhshoa1bB2BtDnZGX64cd4u4A2vU35PCyJ6R1aHtZYdJ__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15462318903302433150ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_3___05FOAI21X0P5H7H_A0_Y_AOI2BB1X0P5H7H_B0__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9096403137211741866ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d___VhshqR4lSPkQ90c68DqLdqWXknHwjFiqdKRHV5TMoLrh__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18218587859347073465ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_9___VhshmB0OGXxH4HT7VGnOXtSLKtMNHtUwXe1HgI8Hc32F__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4555140424171818499ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_9___VhshFGdkWVAnW5HlbHJGBBPJT8in37vAxr2lpXKs7i1S__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13649884762950011023ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_9___05FAOI32X0P5H7H_A0_Y_AND4X0P5H7H_D_B_OAI211X0P7H7H_Y_A0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16212329983613799074ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_9___05FAOI32X0P5H7H_A0_B1_AO221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1740346160257208277ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d___Vhsht1deCGeZk8ath9YFpZQm6hNBgryW3rDVQVI2NEhX__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12908332854014456829ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_21___05FOAI21X0P5H7H_A0_Y_AOI2BB1X0P5H7H_B0__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14461606459977124172ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d___VhsheO8pCUkwQKhrfwARAEE0XIJqUXO8p4hYLZrDSyBl__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16692381511781284938ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_18___05FOAI21X0P5H7H_A0_Y_AOI2BB1X0P5H7H_B0__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17099978661860623573ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d___Vhsh1YksY6Yh7C2qWU6AFtTAdMZmZkqTGzFot7zML0AX__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4127838488045529510ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d___Vhshp6dWbGa8tj0K25UzVjaUWYrXVeuVLUYKtHnHSDA2__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7589199960032382070ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d___VhshSu6NwCpFKkNraqLcUvNlwcBxUDVXswNfzArKBuzQ__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12524351764929984545ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_A2_AOA211X0P5H7H_Y_C0_OA221X0P5H7H_Y_B1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17534671083839326675ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_A2_AOA211X0P5H7H_Y_C0_OA221X0P5H7H_Y_A0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15536518247029803980ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_A0_AOI221X0P5H7H_Y_A1_AO221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3422161594343687538ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_3_A2_AOI21X0P5H7H_Y_B0_OAI211X0P7H7H_Y_C0_OAI211X0P7H7H_Y_A0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16653014159259828542ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_3_A2_AOI21X0P5H7H_Y_B0_OAI211X0P7H7H_Y_A0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 838385077666527993ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_3_A2_AOI21X0P5H7H_Y_A1_AO221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1872254557857063958ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_3_A0_OA221X0P5H7H_Y_A1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11208802123308167162ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_2_A2_AOI21X0P5H7H_Y_B0_OAI211X0P7H7H_Y_C0_OAI211X0P7H7H_Y_A0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17021019104621356512ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_2_A2_AOI21X0P5H7H_Y_B0_OAI211X0P7H7H_Y_A0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6188073716637496080ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_2_A0_OA211X0P5H7H_Y_C0_OAI211X0P7H7H_Y_A0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10053476325177797975ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_2_A0_OA211X0P5H7H_Y_A1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5991848929124667986ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_1_A1_OAOI211X0P5H7H_Y_C0_OAI221X0P5H7H_Y_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18191845479978944740ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_1_A1_OAOI211X0P5H7H_Y_C0_OAI221X0P5H7H_Y_A0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14908146049750243146ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_1_A1_OAOI211X0P5H7H_Y_A1_AO221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11781221165403607531ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_1_A0_AOI221X0P5H7H_Y_A1_AO221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4812106106235942114ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_9_A0N_AOI32X0P5H7H_Y_B1_OA221X0P5H7H_Y_B1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7514504476295802158ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_9_A0N_AOI32X0P5H7H_Y_B1_OA221X0P5H7H_Y_A0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1576072521958087182ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_9_A0N_AOI32X0P5H7H_Y_B0_OAI211X0P7H7H_Y_A0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4033890467113773632ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_7_A0N_AOA211X0P5H7H_Y_C0_OAI211X0P7H7H_Y_C0_OAI211X0P7H7H_Y_A1_AO221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11711788377576079015ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_7_A0N_AOA211X0P5H7H_Y_C0_OAI211X0P7H7H_Y_A1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7453068297306755163ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_7_A0N_AOA211X0P5H7H_Y_B0_OAI211X0P7H7H_Y_A0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18090283426194659792ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_7_A0N_AOA211X0P5H7H_Y_A1_AO221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6185446548934630064ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_6_A0N_AOA211X0P5H7H_Y_C0_OAI211X0P7H7H_Y_C0_OAI211X0P7H7H_Y_A0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10985344868924354865ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_6_A0N_AOA211X0P5H7H_Y_C0_OAI211X0P7H7H_Y_A1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7069647065427354005ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_6_A0N_AOA211X0P5H7H_Y_B0_OAI211X0P7H7H_Y_A0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9193371446492910697ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_5_A0N_OA31X0P5H7H_Y_B0_OAI211X0P7H7H_Y_A1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17225807120800840395ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_3_A0N_AOA211X0P5H7H_Y_C0_OAI211X0P7H7H_Y_A1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12341967343535028193ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_3_A0N_AOA211X0P5H7H_Y_B0_OAI211X0P7H7H_Y_A0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15635486529834521494ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_3_A0N_AOA211X0P5H7H_Y_A1_AO221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1911151647040771076ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_1_A0N_AOA211X0P5H7H_Y_C0_OAI211X0P7H7H_Y_C0_OAI211X0P7H7H_Y_A1_AO221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16337386673486650944ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_1_A0N_AOA211X0P5H7H_Y_C0_OAI211X0P7H7H_Y_A1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6868236832112334171ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_1_A0N_AOA211X0P5H7H_Y_B0_OAI211X0P7H7H_Y_A0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3675392726024665871ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_1_A0N_AOA211X0P5H7H_Y_A1_AO221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8848286359327291848ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_17_A0N_AOA211X0P5H7H_Y_C0_OAI211X0P7H7H_Y_A1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4442888145989229477ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_17_A0N_AOA211X0P5H7H_Y_B0_OAI211X0P7H7H_Y_A0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16571001787247296653ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_OA31X0P5H7H_Y_B0_OAI211X0P7H7H_Y_A1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1185883263198911729ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_15_A0N_AOI22X0P5H7H_Y_B0_AOA211X0P5H7H_Y_A1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6684858871223282916ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_15_A0N_AOI22X0P5H7H_Y_A1_OAI211X0P7H7H_Y_A0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 235994411622014334ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_15_A0N_AOI22X0P5H7H_Y_A0_OA221X0P5H7H_Y_B1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16946415711133655350ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_15_A0N_AOI22X0P5H7H_Y_A0_OA221X0P5H7H_Y_A0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12483986224290217188ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_13_A0N_AOI22X0P5H7H_Y_B1_OAI211X0P7H7H_Y_A1_AO221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5485419548302373748ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_13_A0N_AOI22X0P5H7H_Y_B0_OA221X0P5H7H_Y_B1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6730238063266841727ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_13_A0N_AOI22X0P5H7H_Y_B0_OA221X0P5H7H_Y_A0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9386047710783299639ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_13_A0N_AOI22X0P5H7H_Y_A1_OAI211X0P7H7H_Y_A0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10942342945588607309ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_13_A0N_AOI22X0P5H7H_Y_A0_OA31X0P5H7H_Y_A2_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14612783079342100067ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_11_A0N_AOI22X0P5H7H_Y_B0_OA221X0P5H7H_Y_C0_OAI211X0P7H7H_Y_A0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13709628354895642066ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_11_A0N_AOI22X0P5H7H_Y_B0_OA221X0P5H7H_Y_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 184460254861196925ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_11_A0N_AOI22X0P5H7H_Y_B0_OA221X0P5H7H_Y_A1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14143826452949371080ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI21X0P5H7H_Y_1_A0_OAI21X0P5H7H_Y_B0_OAI211X0P7H7H_Y_A1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3186605790568004102ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI21X0P5H7H_Y_1_A0_OAI21X0P5H7H_Y_A1_OAI221X0P5H7H_Y_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5138302671836710792ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI21X0P5H7H_Y_1_A0_OAI21X0P5H7H_Y_A1_OAI221X0P5H7H_Y_A0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1363551986148380354ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OA22X1H7L_Y_A1_OAI221X0P5H7H_Y_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3110119811236675777ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OA22X1H7L_Y_A1_OAI221X0P5H7H_Y_A1_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12216379123955056478ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_AOI2BB1X1P4H7L_Y_A0N_AOI211X0P5H7H_Y_B0_AOI211X0P5H7H_Y_B0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1577733314664548818ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_AOI21X1P4H7L_Y_B0_AOI21X0P5H7H_Y_B0_OAI221X0P5H7H_Y_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 47137428538572346ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_AOI21X1P4H7L_Y_B0_AOI21X0P5H7H_Y_B0_OAI221X0P5H7H_Y_A0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9774622127588830175ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_AOI21X1P4H7L_Y_B0_AOI21X0P5H7H_Y_A1_AOI22X0P5H7H_Y_B0_AOI221X0P5H7H_Y_C0_AOI2BB1X0P5H7H_Y__DOT__B0_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5954951732160480220ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__state_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13629311254247608395ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__state_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18006716149271765100ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__state_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1832620861644788762ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b9__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1948409550677819717ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b8__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3982768982346978951ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b7__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16990709113138438776ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b6__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16503586333643672387ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b5__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18107202908731239163ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b4__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6395750357690982207ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b3__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2478751128706549808ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b30__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3213214485880488087ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b2__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16727173371638300721ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b29__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10570082952201848770ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b28__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7491770021187778168ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b27__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17020232024883627779ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b26__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6309890537640051115ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b25__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4331560643385129608ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b24__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14624570503748472692ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b23__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11279334803859577595ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b22__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3471161505975206875ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b21__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17657882384881655860ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b20__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1209193800413062445ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b1__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5334752958214760435ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b19__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11305903820123099146ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b18__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16951079807298808210ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b17__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1545328621775451025ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b16__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17957867742866054619ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b15__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1381969059670791816ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b14__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13187759162286586121ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b13__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12689994886775639500ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b12__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7949757623395963150ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b11__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4588418676614353859ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b10__05d_reg_p__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9791586340527126510ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b10__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14614864533346805722ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_9___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1715173165111701041ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_8___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10830758304632013147ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_7___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14506096268059974032ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_6___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6864345358583483009ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_63___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1812339094005204428ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_62___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12855677349746202759ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_61___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3108854790288792140ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_60___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12325596732224933855ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_5___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5460843595489944740ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_59___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9540412502707519837ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_58___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 68763602513204924ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_57___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7974809287282198985ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_56___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11325933402066079468ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_55___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7347018511408031033ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_54___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16894094776146367278ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_53___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5509298654727986128ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_52___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6778501112405886768ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_51___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16469428566433309510ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_50___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8575995324577527508ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_4___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13672941045990329362ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_49___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1207184316949578980ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_48___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16143442113334700059ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_47___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17146128080845978678ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_46___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6974965841441555950ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_45___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15385554434627309099ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_44___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 423942197250661281ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_43___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10381074513622401720ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_42___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1009212868990126458ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_41___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8535535598693724997ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_40___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6330232349761646404ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_3___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8327441310573825793ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_39___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9413012764615293648ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_38___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12786647731520863130ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_37___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9240575947792004526ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_36___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14327236232578313617ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_35___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15215925146754019917ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_34___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16970267904573204078ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_33___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3058107450542942222ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_32___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5354167377777692702ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_31___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12379092464367711013ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_30___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17144238387592119618ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_2___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3322543218519942238ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_29___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13109578297203316447ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_28___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10770903103229859582ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_27___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13073386305002115389ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_26___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9729046638175417922ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_25___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14456704962059950519ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_24___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14612117943513679518ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_23___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 629606643740571730ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_22___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2282704546787618709ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_21___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2720835420651065021ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_20___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8423412066723787572ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_1___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16230227719370918487ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_19___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6954161841111430254ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_18___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7685076718499252070ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_17___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12798070750540043777ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_16___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17428865829992533930ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_15___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18179706771191434503ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_14___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10192916184154363013ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_13___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1751150104464868285ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_12___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11701893243503847139ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_11___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17857877068923285652ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_10___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9298166367353778978ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10971439919628366981ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_2___05FAOI21X0P5H7H_Y_A0_AOAI211X0P5H7H_Y__DOT__A1_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2333675629970281210ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_10___05FAOAI211X0P5H7H_Y__DOT__B0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7264140038596035138ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_3___05FAOI22X0P5H7H_A0_Y_AOAI211X0P5H7H_A0__DOT__Y_row1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16179883595567545158ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_2___05FAOI22X0P5H7H_A0_Y_OAO211X0P5H7H_B0_Y_NAND4X1P4H7R_D_A_AOAI211X0P5H7H_Y__DOT__B0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13249366152786617712ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_5___VhshxRTBhF4BbxjmvNEBCaGQA7T7N2AgTBQaqDnQCugb__DOT__A0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9321245928082697480ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh3fYVYhpxzk35dPCetV1OhNTWTJDs5faBRDekZTF1__DOT__A1_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11782910355556052051ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___VhshDRdmjZABMY36kJErlWCqghCjk0BzylenhQH7v43B__DOT__B0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2737393367675769128ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_15___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI211X0P7H7H_A1_Y_AOAI211X0P5H7H_B0__DOT__A0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12089800673303521581ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_15___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OAI211X0P7H7H_A1_Y_AOAI211X0P5H7H_B0__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3567741522016701181ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_1___VhshOuN007GK3IG5e7HUIThwPJJMhV4QEbz7vGJZYKNx__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5379768209358182311ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_1___05FNAND3X0P5H7H_A_Y_AOAI211X0P5H7H_A0__DOT__B0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11646582177500094146ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_28___05FMUX4X0P5H7H_A_Y_OAOI211X0P5H7H_A1_C0_OAI211X0P7H7H_Y_B0_AOAI211X0P5H7H_Y__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1526063120464017734ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_28___05FMUX4X0P5H7H_A_Y_OAOI211X0P5H7H_A1_C0_OAI211X0P7H7H_Y_B0_AOAI211X0P5H7H_Y__DOT__A1_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8461473031883121311ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wmask_AOAI211X0P5H7H_Y__DOT__B0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 167505890977108463ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wmask_AOAI211X0P5H7H_Y__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16693585092891305110ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_9_A0N_AOI32X0P5H7H_Y_A1_AOAI211X0P5H7H_Y__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3170138816813123779ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_17_A0N_AOA211X0P5H7H_Y_B0_OAI211X0P7H7H_Y_C0_AOAI211X0P5H7H_Y__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16629769357122203651ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0_Y_AOAI211X0P5H7H_A0__DOT__B0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3160319263503806087ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0_Y_AOAI211X0P5H7H_A0__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8966015056523883404ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0__DOT__B0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17641449652340271324ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI2BB1X0P5H7H_Y_16_A0N_AOI21X0P5H7H_A1_Y_OR2X0P5H7H_B_Y_AOAI211X0P5H7H_C0__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12679718449877337220ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OA22X1H7L_Y_B1_AOAI211X0P5H7H_Y__DOT__A0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15099053972878134538ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OA22X1H7L_Y_B1_AOAI211X0P5H7H_Y__DOT__B0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9040255864563126000ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OA22X1H7L_Y_A0_AOI21X0P5H7H_Y_B0_AOAI211X0P5H7H_Y__DOT__A0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14210179108075803183ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OA22X1H7L_Y_A0_AOI21X0P5H7H_Y_B0_AOAI211X0P5H7H_Y__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9523197671087534255ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_AOI31X0P5H7H_Y_A0_AOI31X0P5H7H_A0_Y_AOAI211X0P5H7H_A1__DOT__B0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3646626073113505317ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_AOI2BB1X1P4H7L_Y_B0_AOI211X0P5H7H_Y_C0_AOAI211X0P5H7H_Y__DOT__B0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11583964447300280067ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_AOI2BB1X1P4H7L_Y_A1N_AOAI211X0P5H7H_Y__DOT__B0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7349014096652714694ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XNOR2X0P5H7H_Y_1_B_NAND2X0P5H7H_Y_A_AOAI211X0P5H7H_Y__DOT__Y_row1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16848244746111984953ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X0P5H7H_A0__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1159911366983766569ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__B0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10875591533268458645ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0_A1_AOAI211X0P5H7H_Y__DOT__A1_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8896357459145213494ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_AOAI211X0P5H7H_C0__DOT__A0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1359056460845207183ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_30___05FAND4X0P5H7H_B_Y_AOAI211X0P5H7H_C0__DOT__A1_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17191264743040980015ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XNOR2X0P5H7H_Y_1_A_OAI21X0P5H7H_Y_A1_AOI31X1P4H7L_Y_A2_NAND3BX0P5H7H_Y__DOT__Ax = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7814622692153955054ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_AOI21X1P4H7L_Y_A1_AOA211X0P5H7H_Y_A0_OAI211X0P7H7H_Y_C0_AO211X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15988704918271735058ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_13___05FMUX4X0P5H7H_A_Y_OAI211X0P7H7H_A1_Y_AOI211X0P5H7H_A1_Y_AO221X0P5H7H_C0__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14512733076791837189ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_4___05FOAI211X0P7H7H_A0_Y_OA31X0P5H7H_A2__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8179957519170319638ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_60___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3016544327490610788ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_58___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7453338397734727908ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_57___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 558536355158834239ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_54___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15953751122059266297ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_51___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5146939304829707016ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_48___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10618001878697051010ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_46___05Freg_p_D_NOR2X0P5H7H_Y_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12213255980452464866ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_45___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10561042888263502705ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_43___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6904323312838445560ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_42___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5274386179243363979ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_38___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10862690649817043135ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_35___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17978106957082852467ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_32___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11928410906907528714ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_29___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3625509201070688884ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_26___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2278983219478710134ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_20___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10719196183302206353ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_17___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7050272098918992040ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_14___05Freg_p_D_NOR2BX1H7H_Z_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13154033306809879709ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_12___05Freg_p_D_NOR2X0P5H7H_Y_B_OA31X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9307627717829044613ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_AOI31X0P5H7H_Y_A0_AOI31X0P5H7H_A0__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6544202278183658858ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d___Vhshq08cU3Lvvr0pCm9UE5UrrVd39DGvBCfCHAiExhBm__DOT__Y_row2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11730882059085652857ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_1___05FOAOI211X0P5H7H_Y__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12912275141989252778ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d___Vhsh5qrarS8k5MkyZE61sUJBSdEAsib0WsrN2tDNFjbR__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9738341216481566575ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_23___05FMUX2X0P5H7H_A_Y_AOI22X0P5H7H_B0_Y_OA221X0P5H7H_A0_Y_AOI211X0P5H7H_A0_B0_OAOI211X0P5H7H_Y__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13405293336688533062ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_28___05FMUX4X0P5H7H_A_Y_OAOI211X0P5H7H_A1__DOT__A0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12384382608842782841ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_28___05FMUX4X0P5H7H_A_Y_OAOI211X0P5H7H_A1__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9440736361736742778ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_19___05FOAOI211X0P5H7H_Y__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13059830406968506827ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_19___05FOAOI211X0P5H7H_Y__DOT__A1_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13162442920038583579ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_10___05FOAOI211X0P5H7H_Y__DOT__A0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15972015935524917431ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_10___05FOAOI211X0P5H7H_Y__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14570437249583714068ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_10___05FOAOI211X0P5H7H_Y__DOT__A1_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6772640158983691800ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_OAI31X0P5H7H_Y_1_A1_OAOI211X0P5H7H_Y__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9463197253379592849ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_A_XNOR3X0P5H7H_Y_C_NAND2X0P5H7H_Y_B_AOI31X1H7L_A2_B0_OAOI211X0P5H7H_Y__DOT__A1_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12450510164185158633ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_30___05FOAI21BX0P5H7H_B0N_Y_OAI211X0P7H7H_B0_Y_OAOI211X0P5H7H_B0__DOT__A0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15447496690625937760ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_30___05FOAI21BX0P5H7H_B0N_Y_OAI211X0P7H7H_B0_Y_OAOI211X0P5H7H_B0__DOT__A1_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5244821453569235027ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_executed_ICGX0P5H7H_E__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12363302753395205597ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_executed_ICGX0P5H7H_E__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 49406192171415144ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshIpo8Nv8VbOZ0pYupShSe644DkDxawxsSK7sfvQvN__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17707287468088204753ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshIpo8Nv8VbOZ0pYupShSe644DkDxawxsSK7sfvQvN__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13852249722818276363ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshIpo8Nv8VbOZ0pYupShSe644DkDxawxsSK7sfvQvN__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6501339891877171116ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshbS8uOSJtJehVFiLKN7VVHLEt8g2A7yzvAZvyCyVd__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11068150539231151826ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshbS8uOSJtJehVFiLKN7VVHLEt8g2A7yzvAZvyCyVd__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9751928512044460352ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshbS8uOSJtJehVFiLKN7VVHLEt8g2A7yzvAZvyCyVd__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18395614737039517535ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshbpRWYGiBRxsyRuI6zH8uEzAOKSZaxsQ8q7YjYX8N__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4982812441795441990ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshbpRWYGiBRxsyRuI6zH8uEzAOKSZaxsQ8q7YjYX8N__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8974306283516099251ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshbpRWYGiBRxsyRuI6zH8uEzAOKSZaxsQ8q7YjYX8N__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 919432313120213404ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshdXWKxpyMwxEhTNAnma53vo1BwAju0YxMyi47gOxc__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7423638189270006223ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshdXWKxpyMwxEhTNAnma53vo1BwAju0YxMyi47gOxc__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16929127506637641016ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshdXWKxpyMwxEhTNAnma53vo1BwAju0YxMyi47gOxc__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2934605026934368771ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh4PKPz18sedlpXBZbXDkzFTwBodLjovWBwKkvcuWN__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11379700920528888146ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh4PKPz18sedlpXBZbXDkzFTwBodLjovWBwKkvcuWN__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8804946703486546645ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh4PKPz18sedlpXBZbXDkzFTwBodLjovWBwKkvcuWN__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13534161442501377950ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshNrbJtYm20MY4nvca68QpbFGWf3hhh4ABv8XUAINy__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11128272806915221667ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshNrbJtYm20MY4nvca68QpbFGWf3hhh4ABv8XUAINy__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13406173430350196063ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshNrbJtYm20MY4nvca68QpbFGWf3hhh4ABv8XUAINy__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9170061086158977936ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshpxHeCD996AEAAulKeuwetXz4EW6uoQpuFyyMAK9r__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1444890817535765078ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshpxHeCD996AEAAulKeuwetXz4EW6uoQpuFyyMAK9r__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17872711888311975775ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshpxHeCD996AEAAulKeuwetXz4EW6uoQpuFyyMAK9r__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8974322466111740137ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshvexrkXsQ3bB3KMa6ycZNyJLRgpOF6zdgherAehVC__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1018176908932127022ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshvexrkXsQ3bB3KMa6ycZNyJLRgpOF6zdgherAehVC__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6694128286292964197ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshvexrkXsQ3bB3KMa6ycZNyJLRgpOF6zdgherAehVC__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5602020767264355281ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh20EBM1h0mb0S0AF9Bx5hGJ8r188gpxhTh8L7Dj0l__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2453581535664100250ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh20EBM1h0mb0S0AF9Bx5hGJ8r188gpxhTh8L7Dj0l__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15316736666605650735ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh20EBM1h0mb0S0AF9Bx5hGJ8r188gpxhTh8L7Dj0l__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9380497147763868429ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshAamlNR0pmn2l8yXYYi1IxDqEWyjOCzBTQjUiWuno__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11043614782610070738ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshAamlNR0pmn2l8yXYYi1IxDqEWyjOCzBTQjUiWuno__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1748135478807059930ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshAamlNR0pmn2l8yXYYi1IxDqEWyjOCzBTQjUiWuno__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12447105971209188908ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshajwJYhYXnWgYMRaOyIJHfeWdAiWaFeAEQ7a3xOi9__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15972981771057033545ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshajwJYhYXnWgYMRaOyIJHfeWdAiWaFeAEQ7a3xOi9__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11338533024637487961ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshajwJYhYXnWgYMRaOyIJHfeWdAiWaFeAEQ7a3xOi9__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4632476891021174186ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshDgZFBa1J23qfNi0OiJ7jeKbAtPDkMwwbo99CtjJX__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18080918009546898418ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshDgZFBa1J23qfNi0OiJ7jeKbAtPDkMwwbo99CtjJX__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13563075016032827497ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshDgZFBa1J23qfNi0OiJ7jeKbAtPDkMwwbo99CtjJX__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11753615374844660679ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshvfxwU7BQJboLuI3BPoczMwUu5SiZflYWJBBYLM4w__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17290196001145568771ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshvfxwU7BQJboLuI3BPoczMwUu5SiZflYWJBBYLM4w__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4159236459305482187ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshvfxwU7BQJboLuI3BPoczMwUu5SiZflYWJBBYLM4w__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13407419909753082534ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh5keQqRAZJtt8ailoclpNkPUYRHTtUkHEnjPz77oz__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11701114024959812879ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh5keQqRAZJtt8ailoclpNkPUYRHTtUkHEnjPz77oz__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14793751219496044127ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh5keQqRAZJtt8ailoclpNkPUYRHTtUkHEnjPz77oz__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16004213151246780643ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh9QxMrDJBVEMSNKaFYKieBaW7DvHw88tU6OZOuMZq__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13025677124718722922ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh9QxMrDJBVEMSNKaFYKieBaW7DvHw88tU6OZOuMZq__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17123309521036748767ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh9QxMrDJBVEMSNKaFYKieBaW7DvHw88tU6OZOuMZq__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1082041104346036615ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshpdGtZC4cEXhQmQiqwD9jLxzIH7mNtH3xpJ6k5WZY__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16958896226715581333ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshpdGtZC4cEXhQmQiqwD9jLxzIH7mNtH3xpJ6k5WZY__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16623861915887155517ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshpdGtZC4cEXhQmQiqwD9jLxzIH7mNtH3xpJ6k5WZY__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8618918509568428563ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshYA7gXejw37Bac9coiM2stJ32zAd5NL3pLuF8AQnL__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5350681262297667953ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshYA7gXejw37Bac9coiM2stJ32zAd5NL3pLuF8AQnL__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14539316220182923626ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshYA7gXejw37Bac9coiM2stJ32zAd5NL3pLuF8AQnL__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1420718512561736980ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh8AGLVOwhq2v1ot6Pi6EkineBl0hSYmkHM94UyqBg__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17372165785952246705ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh8AGLVOwhq2v1ot6Pi6EkineBl0hSYmkHM94UyqBg__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8460786316383415342ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh8AGLVOwhq2v1ot6Pi6EkineBl0hSYmkHM94UyqBg__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1633224372110424484ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshQfmzvRbJ8BTSBsVMhfLB9KYUKEQ97Pveea3MnLsJ__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13697606138539972643ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshQfmzvRbJ8BTSBsVMhfLB9KYUKEQ97Pveea3MnLsJ__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17845732345757370515ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshQfmzvRbJ8BTSBsVMhfLB9KYUKEQ97Pveea3MnLsJ__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12405627008012593151ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshyaFrlyAKhsS3fYWqyhY2K9YiVUMrAecEWGVaOXHr__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1437284646900388419ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshyaFrlyAKhsS3fYWqyhY2K9YiVUMrAecEWGVaOXHr__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2322221685727524647ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshyaFrlyAKhsS3fYWqyhY2K9YiVUMrAecEWGVaOXHr__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 340416887753200797ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshMCQ8gAyatUxEAiZBgXaNTkhfros4CTgw4LR8iRe2__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8885471162960342189ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshMCQ8gAyatUxEAiZBgXaNTkhfros4CTgw4LR8iRe2__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6705905182013259552ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshMCQ8gAyatUxEAiZBgXaNTkhfros4CTgw4LR8iRe2__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 107758362370874377ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshUdKuWENcHqhbWlpA2izaDxwxGpWNt8AKnOZK7Ww1__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3044077048740125814ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshUdKuWENcHqhbWlpA2izaDxwxGpWNt8AKnOZK7Ww1__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6693961955591782149ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshUdKuWENcHqhbWlpA2izaDxwxGpWNt8AKnOZK7Ww1__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12581761289079894793ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsht1bRmg7bxoZTKYi3ioMLwApB0xsAtaymPfaxwGGJ__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12688226038952059470ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsht1bRmg7bxoZTKYi3ioMLwApB0xsAtaymPfaxwGGJ__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7249134095998127163ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsht1bRmg7bxoZTKYi3ioMLwApB0xsAtaymPfaxwGGJ__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5519621319559582836ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhshqa64kmPmjDrUjJ8RgA4YLfPekpFRkvtX1i52zglQ__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 814456139085779060ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhshqa64kmPmjDrUjJ8RgA4YLfPekpFRkvtX1i52zglQ__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1705721634352661340ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhshqa64kmPmjDrUjJ8RgA4YLfPekpFRkvtX1i52zglQ__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2414383238181405627ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhshj63OKwkFchjQ1YpwYBOruAxEs80jBfgGNQo1KqzO__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13922957168141189521ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhshj63OKwkFchjQ1YpwYBOruAxEs80jBfgGNQo1KqzO__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3752036153289003996ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhshj63OKwkFchjQ1YpwYBOruAxEs80jBfgGNQo1KqzO__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17374908528932219510ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh60eWFwuhLcPpjgr1QyQlFra13QsZr0XOhBmWrUCf__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15687289260012564157ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh60eWFwuhLcPpjgr1QyQlFra13QsZr0XOhBmWrUCf__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1541190274736763278ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh60eWFwuhLcPpjgr1QyQlFra13QsZr0XOhBmWrUCf__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2765933608498968781ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshpGXUXAKLfuSTW5Fk8eA8AHJA6OpHSWgZEf4Et5bZ__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4615558276608982675ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshpGXUXAKLfuSTW5Fk8eA8AHJA6OpHSWgZEf4Et5bZ__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12557599018697023950ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshpGXUXAKLfuSTW5Fk8eA8AHJA6OpHSWgZEf4Et5bZ__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9407054801494594716ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhshgb70RMjZG5dqBDYfAweEutJY1JWqQ6FkT8LuJYwh__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9964949395797278247ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhshgb70RMjZG5dqBDYfAweEutJY1JWqQ6FkT8LuJYwh__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6427106075100227437ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhshgb70RMjZG5dqBDYfAweEutJY1JWqQ6FkT8LuJYwh__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1273711334183187911ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshMiN7Bnf7Ns65NA4REqTrNCwM3M09E9ZGBBN62Dlg__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8702339485312738856ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshMiN7Bnf7Ns65NA4REqTrNCwM3M09E9ZGBBN62Dlg__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10286703397011718353ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshMiN7Bnf7Ns65NA4REqTrNCwM3M09E9ZGBBN62Dlg__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14522588504602388039ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshsbKjJ4iq44DIj5ETjrr3LAHVW1htQK4bL8CwoIjo__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9233966894695727371ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshsbKjJ4iq44DIj5ETjrr3LAHVW1htQK4bL8CwoIjo__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17554663771019885570ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshsbKjJ4iq44DIj5ETjrr3LAHVW1htQK4bL8CwoIjo__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12478988793412343144ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B___024_AND___05FY_A___024_NOR___05FY_A___024_ORNOT___05FY_B___024_AND___05FA_Y_ICGX0P5H7H_E__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6043911822189510478ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B___024_AND___05FY_A___024_NOR___05FY_A___024_ORNOT___05FY_B___024_AND___05FA_Y_ICGX0P5H7H_E__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6391328956614341280ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B___024_AND___05FY_A___024_NOR___05FY_A___024_ORNOT___05FY_B___024_AND___05FA_Y_ICGX0P5H7H_E__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15122656704761025656ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b1__05d_reg_p_CK_ICGX0P5H7H_ECK__DOT__dly_E = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11654378099539880ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b1__05d_reg_p_CK_ICGX0P5H7H_ECK__DOT__P0001 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3949482677671171459ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b1__05d_reg_p_CK_ICGX0P5H7H_ECK__DOT__NOTIFIER = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12799612301340649166ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NAND2X0P5H7H_Y_A_AO22X0P5H7H_Y__DOT__OUT0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16538850678394860340ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_4_A_NAND2X0P5H7H_Y_A_OAI2BB1X0P5H7H_Y_B0_NOR2BX1H7H_Z__DOT__Ax = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13183690656127375384ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__idu__02einst_14___05FNAND3X0P5H7H_A_Y_AOI211X0P5H7H_A0__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2705079202240329885ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_8___05FAO22X0P5H7H_Y_B1_OAI2XB1X0P5H7H_Y__DOT__outA1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9966572769123008507ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_23___05FAO22X0P5H7H_Y_B1_OAI2XB1X0P5H7H_Y__DOT__outA1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10795309204613729679ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_20___05FAO22X0P5H7H_Y_B1_OAI2XB1X0P5H7H_Y__DOT__outA1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13005401732483671205ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02ewdata_0___05FAOI21X0P5H7H_Y_A1_OAI2XB1X0P5H7H_Y__DOT__outA1 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7557917524859549734ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_4_A_NAND2X0P5H7H_Y_B_NAND3X0P5H7H_Y_B_NAND2BX0P5H7H_Y__DOT__Ax = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13239789968507495075ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__next_PC_28___05FMUX2X0P5H7H_Y_B_NOR2BX1H7H_Z_AN_NAND4BX0P5H7H_Y__DOT__Ax = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15302992095961499297ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b21__05d_reg_p_QN_NOR3X0P5H7H_B_Y_NAND2X0P5H7H_A_Y_NAND4BX0P5H7H_AN__DOT__Ax = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3824445731075608438ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_24___05FOAI21X0P5H7H_B0_Y_NAND4BX0P5H7H_B__DOT__Ax = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6173411411919096428ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XOR2X0P5H7H_Y_1_B_NAND2X0P5H7H_Y_A_AOAI211X1P4H7L_C0__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6816056984857934957ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_XOR2X0P5H7H_Y_1_B_NAND2X0P5H7H_Y_A_AOAI211X1P4H7L_C0__DOT__A1_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7731318654139399388ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y_C0_AOAI211X1P4H7L_C0__DOT__A0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3106627898548675256ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_AN_AOAI211X1P4H7L_Y__DOT__A0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15561542782148225681ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2BX1H7H_Z_1_B_AOI211X0P5H7H_Y_A1_AOAI211X1P4H7L_Y_A0_INVX0P5H7H_A_Y_AOAI211X1P4H7L_B0__DOT__C0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11696580311022171353ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_4_A_NAND2X0P5H7H_Y_B_NAND3X0P5H7H_Y_A_AOAI211X1P4H7L_B0__DOT__A0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11379023005285855618ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_2_A_NAND2X0P5H7H_Y_B_AO211X0P5H7H_Y_B0_AOAI211X1P4H7L_C0__DOT__A1_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15580438036047697862ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_A_AOAI211X1P4H7L_B0__DOT__B0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16982509543541598903ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_AND2X0P5H7H_Y_1_B_OAI211X0P7H7H_Y_B0_AOAI211X1P4H7L_Y__DOT__B0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1454367397891230536ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_3___05FAOI22X0P5H7H_A0_Y_AOAI211X0P5H7H_A1_Y_NOR3BX0P5H7H_B__DOT__AN_bar = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1156399165289662039ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_NOR2X0P5H7H_Y_1_B_AOI211X0P5H7H_Y_C0_INVX0P5H7H_Y_A_OAI21BX0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16311630008812042298ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__state_3___05Freg_p_D_OAI22X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9350538125641158411ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__state_2___05Freg_p_D_OAI22X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14031732938162743607ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__state_0___05Freg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6636861749019935828ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b31__05d_reg_p__DOT__n0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12016046761326788571ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__csr__02emclock_62___05Freg_p_D_NOR2X0P5H7H_Y_B_OA21X0P5H7H_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 184616433244991812ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_wdata_AOI31X0P5H7H_Y_A1_AOAI211X1P4H7R_Y__DOT__A1_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18113998287558747125ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__io_lsu_addr_INVX0P5H7H_Y_13_A_XOR2X0P5H7H_Y_B_OAI22X1P4H7L_Y__DOT__outA = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9496128104548103878ull);
    vlSelf->EXTERNAL_TOP__DOT__cpu__DOT__inst_r_21___05FAOAI211X1P4H7R_B0__DOT__A0_inv = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17806553338528308880ull);
    vlSelf->__VdfgRegularize_h6e95ff9d_0_0 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_1 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_2 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_3 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_4 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_5 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_6 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_7 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_8 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_9 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_10 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_11 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_12 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_13 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_14 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_16 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_19 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_20 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_21 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_25 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_26 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_27 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_28 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_29 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_30 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_31 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_32 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_33 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_34 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_35 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_36 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_37 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_39 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_42 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_45 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_46 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_47 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_48 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_49 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_50 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_51 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_52 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_53 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_54 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_55 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_56 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_57 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_58 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_66 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_70 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_77 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_81 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_82 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_83 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_84 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_85 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_86 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_87 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_88 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_89 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_90 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_91 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_92 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_100 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_101 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_102 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_103 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_104 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_105 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_106 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_107 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_108 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_109 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_110 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_111 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_112 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_113 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_114 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_115 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_116 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_117 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_118 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_119 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_121 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_122 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_123 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_124 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_125 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_126 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_131 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_132 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_133 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_134 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_135 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_136 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_137 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_138 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_139 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_140 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_141 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_142 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_143 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_144 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_145 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_146 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_147 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_150 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_155 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_157 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_158 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_160 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_162 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_165 = 0;
    vlSelf->__VdfgRegularize_h6e95ff9d_0_168 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__cpuClock__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clock__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_executed_ICGX0P5H7H_E__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshIpo8Nv8VbOZ0pYupShSe644DkDxawxsSK7sfvQvN__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshbS8uOSJtJehVFiLKN7VVHLEt8g2A7yzvAZvyCyVd__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshbpRWYGiBRxsyRuI6zH8uEzAOKSZaxsQ8q7YjYX8N__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshdXWKxpyMwxEhTNAnma53vo1BwAju0YxMyi47gOxc__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh4PKPz18sedlpXBZbXDkzFTwBodLjovWBwKkvcuWN__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshNrbJtYm20MY4nvca68QpbFGWf3hhh4ABv8XUAINy__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshpxHeCD996AEAAulKeuwetXz4EW6uoQpuFyyMAK9r__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshvexrkXsQ3bB3KMa6ycZNyJLRgpOF6zdgherAehVC__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh20EBM1h0mb0S0AF9Bx5hGJ8r188gpxhTh8L7Dj0l__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshAamlNR0pmn2l8yXYYi1IxDqEWyjOCzBTQjUiWuno__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshajwJYhYXnWgYMRaOyIJHfeWdAiWaFeAEQ7a3xOi9__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshDgZFBa1J23qfNi0OiJ7jeKbAtPDkMwwbo99CtjJX__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshvfxwU7BQJboLuI3BPoczMwUu5SiZflYWJBBYLM4w__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh5keQqRAZJtt8ailoclpNkPUYRHTtUkHEnjPz77oz__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh9QxMrDJBVEMSNKaFYKieBaW7DvHw88tU6OZOuMZq__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshpdGtZC4cEXhQmQiqwD9jLxzIH7mNtH3xpJ6k5WZY__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshYA7gXejw37Bac9coiM2stJ32zAd5NL3pLuF8AQnL__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh8AGLVOwhq2v1ot6Pi6EkineBl0hSYmkHM94UyqBg__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshQfmzvRbJ8BTSBsVMhfLB9KYUKEQ97Pveea3MnLsJ__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshyaFrlyAKhsS3fYWqyhY2K9YiVUMrAecEWGVaOXHr__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshMCQ8gAyatUxEAiZBgXaNTkhfros4CTgw4LR8iRe2__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshUdKuWENcHqhbWlpA2izaDxwxGpWNt8AKnOZK7Ww1__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsht1bRmg7bxoZTKYi3ioMLwApB0xsAtaymPfaxwGGJ__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhshqa64kmPmjDrUjJ8RgA4YLfPekpFRkvtX1i52zglQ__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhshj63OKwkFchjQ1YpwYBOruAxEs80jBfgGNQo1KqzO__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhsh60eWFwuhLcPpjgr1QyQlFra13QsZr0XOhBmWrUCf__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshpGXUXAKLfuSTW5Fk8eA8AHJA6OpHSWgZEf4Et5bZ__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____Vhshgb70RMjZG5dqBDYfAweEutJY1JWqQ6FkT8LuJYwh__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshMiN7Bnf7Ns65NA4REqTrNCwM3M09E9ZGBBN62Dlg__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B_____VhshsbKjJ4iq44DIj5ETjrr3LAHVW1htQK4bL8CwoIjo__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__is_ebreak___024_AND___05FY_B___024_AND___05FY_A___024_NOR___05FY_A___024_ORNOT___05FY_B___024_AND___05FA_Y_ICGX0P5H7H_E__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b1__05d_reg_p_CK_ICGX0P5H7H_ECK__DOT__NOTIFIER__0 = 0;
    vlSelf->__Vtrigprevexpr_he902c3fc__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b9__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b8__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b7__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b6__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b5__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b4__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b3__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b31__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b30__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b2__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b29__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b28__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b27__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b26__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b25__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b24__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b23__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b22__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b21__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b20__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b1__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b19__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b18__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b17__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b16__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b15__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b14__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b13__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b12__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b11__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__reg_file__02emem_1__05b10__05d_0___05Freg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__reset__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__EXTERNAL_TOP__DOT__cpu__DOT__io_ifu_addr__05b10__05d_reg_p__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr_h0c7a140e__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
