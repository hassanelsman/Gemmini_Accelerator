// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__162(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__162\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp520[3];
    WData/*95:0*/ __Vtemp521[3];
    WData/*95:0*/ __Vtemp523[3];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_0) 
            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid)) 
           | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_1) 
              & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo_io_enq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_1) 
           & (7U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txDataIdx)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_16 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full))) 
           & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap));
    VL_EXTEND_WI(95,32, __Vtemp520, (0xfffffff8U & 
                                     (((IData)(1U) 
                                       + (IData)((vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                  >> 3U))) 
                                      << 3U)));
    VL_EXTEND_WQ(95,64, __Vtemp521, vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr);
    VL_EXTEND_WQ(95,64, __Vtemp523, (((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                      ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[0U] 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? __Vtemp520[0U] : (((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                 ? (__Vtemp521[0U] 
                                    | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[0U])
                                 : __Vtemp523[0U]));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[1U] 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? __Vtemp520[1U] : (((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                 ? (__Vtemp521[1U] 
                                    | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[1U])
                                 : __Vtemp523[1U]));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[2U] 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? __Vtemp520[2U] : (((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                 ? (__Vtemp521[2U] 
                                    | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[2U])
                                 : __Vtemp523[2U]));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_11 
        = (((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                ? 2U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_6))
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_6));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__163(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__163\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8) 
                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__164(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__164\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp532[32];
    WData/*1023:0*/ __Vtemp533[32];
    WData/*1023:0*/ __Vtemp538[32];
    WData/*1023:0*/ __Vtemp539[32];
    WData/*1023:0*/ __Vtemp544[32];
    WData/*1023:0*/ __Vtemp545[32];
    WData/*1023:0*/ __Vtemp550[32];
    WData/*1023:0*/ __Vtemp551[32];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5))));
    __Vtemp532[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp532[1U] = 0U;
    __Vtemp532[2U] = 0U;
    __Vtemp532[3U] = 0U;
    __Vtemp532[4U] = 0U;
    __Vtemp532[5U] = 0U;
    __Vtemp532[6U] = 0U;
    __Vtemp532[7U] = 0U;
    __Vtemp532[8U] = 0U;
    __Vtemp532[9U] = 0U;
    __Vtemp532[0xaU] = 0U;
    __Vtemp532[0xbU] = 0U;
    __Vtemp532[0xcU] = 0U;
    __Vtemp532[0xdU] = 0U;
    __Vtemp532[0xeU] = 0U;
    __Vtemp532[0xfU] = 0U;
    __Vtemp532[0x10U] = 0U;
    __Vtemp532[0x11U] = 0U;
    __Vtemp532[0x12U] = 0U;
    __Vtemp532[0x13U] = 0U;
    __Vtemp532[0x14U] = 0U;
    __Vtemp532[0x15U] = 0U;
    __Vtemp532[0x16U] = 0U;
    __Vtemp532[0x17U] = 0U;
    __Vtemp532[0x18U] = 0U;
    __Vtemp532[0x19U] = 0U;
    __Vtemp532[0x1aU] = 0U;
    __Vtemp532[0x1bU] = 0U;
    __Vtemp532[0x1cU] = 0U;
    __Vtemp532[0x1dU] = 0U;
    __Vtemp532[0x1eU] = 0U;
    __Vtemp532[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp533, __Vtemp532);
    __Vtemp538[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp538[1U] = 0U;
    __Vtemp538[2U] = 0U;
    __Vtemp538[3U] = 0U;
    __Vtemp538[4U] = 0U;
    __Vtemp538[5U] = 0U;
    __Vtemp538[6U] = 0U;
    __Vtemp538[7U] = 0U;
    __Vtemp538[8U] = 0U;
    __Vtemp538[9U] = 0U;
    __Vtemp538[0xaU] = 0U;
    __Vtemp538[0xbU] = 0U;
    __Vtemp538[0xcU] = 0U;
    __Vtemp538[0xdU] = 0U;
    __Vtemp538[0xeU] = 0U;
    __Vtemp538[0xfU] = 0U;
    __Vtemp538[0x10U] = 0U;
    __Vtemp538[0x11U] = 0U;
    __Vtemp538[0x12U] = 0U;
    __Vtemp538[0x13U] = 0U;
    __Vtemp538[0x14U] = 0U;
    __Vtemp538[0x15U] = 0U;
    __Vtemp538[0x16U] = 0U;
    __Vtemp538[0x17U] = 0U;
    __Vtemp538[0x18U] = 0U;
    __Vtemp538[0x19U] = 0U;
    __Vtemp538[0x1aU] = 0U;
    __Vtemp538[0x1bU] = 0U;
    __Vtemp538[0x1cU] = 0U;
    __Vtemp538[0x1dU] = 0U;
    __Vtemp538[0x1eU] = 0U;
    __Vtemp538[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp539, __Vtemp538);
    __Vtemp544[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp544[1U] = 0U;
    __Vtemp544[2U] = 0U;
    __Vtemp544[3U] = 0U;
    __Vtemp544[4U] = 0U;
    __Vtemp544[5U] = 0U;
    __Vtemp544[6U] = 0U;
    __Vtemp544[7U] = 0U;
    __Vtemp544[8U] = 0U;
    __Vtemp544[9U] = 0U;
    __Vtemp544[0xaU] = 0U;
    __Vtemp544[0xbU] = 0U;
    __Vtemp544[0xcU] = 0U;
    __Vtemp544[0xdU] = 0U;
    __Vtemp544[0xeU] = 0U;
    __Vtemp544[0xfU] = 0U;
    __Vtemp544[0x10U] = 0U;
    __Vtemp544[0x11U] = 0U;
    __Vtemp544[0x12U] = 0U;
    __Vtemp544[0x13U] = 0U;
    __Vtemp544[0x14U] = 0U;
    __Vtemp544[0x15U] = 0U;
    __Vtemp544[0x16U] = 0U;
    __Vtemp544[0x17U] = 0U;
    __Vtemp544[0x18U] = 0U;
    __Vtemp544[0x19U] = 0U;
    __Vtemp544[0x1aU] = 0U;
    __Vtemp544[0x1bU] = 0U;
    __Vtemp544[0x1cU] = 0U;
    __Vtemp544[0x1dU] = 0U;
    __Vtemp544[0x1eU] = 0U;
    __Vtemp544[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp545, __Vtemp544);
    __Vtemp550[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp550[1U] = 0U;
    __Vtemp550[2U] = 0U;
    __Vtemp550[3U] = 0U;
    __Vtemp550[4U] = 0U;
    __Vtemp550[5U] = 0U;
    __Vtemp550[6U] = 0U;
    __Vtemp550[7U] = 0U;
    __Vtemp550[8U] = 0U;
    __Vtemp550[9U] = 0U;
    __Vtemp550[0xaU] = 0U;
    __Vtemp550[0xbU] = 0U;
    __Vtemp550[0xcU] = 0U;
    __Vtemp550[0xdU] = 0U;
    __Vtemp550[0xeU] = 0U;
    __Vtemp550[0xfU] = 0U;
    __Vtemp550[0x10U] = 0U;
    __Vtemp550[0x11U] = 0U;
    __Vtemp550[0x12U] = 0U;
    __Vtemp550[0x13U] = 0U;
    __Vtemp550[0x14U] = 0U;
    __Vtemp550[0x15U] = 0U;
    __Vtemp550[0x16U] = 0U;
    __Vtemp550[0x17U] = 0U;
    __Vtemp550[0x18U] = 0U;
    __Vtemp550[0x19U] = 0U;
    __Vtemp550[0x1aU] = 0U;
    __Vtemp550[0x1bU] = 0U;
    __Vtemp550[0x1cU] = 0U;
    __Vtemp550[0x1dU] = 0U;
    __Vtemp550[0x1eU] = 0U;
    __Vtemp550[0x1fU] = 0U;
    VL_EXTEND_WW(1024,1023, __Vtemp551, __Vtemp550);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp533[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp539[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp545[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp551[0U]))
                                                    ? 1U
                                                    : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__165(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__165\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((VL_ULL(7) & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                              >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((VL_ULL(7) 
                                          & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                             >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((VL_ULL(7) 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (VL_ULL(7) 
                                                            & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_6 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_1) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_1)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_10)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_in_d_valid 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_10)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_filter 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask))) 
            << 2U) | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                       << 1U) | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo_io_enq_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__166(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__166\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataWrap 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_16) 
           & (7U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataIdx)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_27 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? 5U : (((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)))
                     ? 4U : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                              & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                              ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                                  ? ((1U == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)
                                      ? 6U : ((0U == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)
                                               ? 3U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_11)))
                                  : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_11))
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_11))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? (0x7fffffffU & ((IData)(0xffU) 
                                    << ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                        << 3U))) : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes) 
                    | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                        ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                            ? (1U | (((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                       ? 1U : 4U) << 1U))
                            : 0U) : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
                                                 & (0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                ? (0x7fffffffU 
                                                   & ((IData)(0xfU) 
                                                      << 
                                                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                       << 2U)))
                                                : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__167(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__167\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp552[3];
    WData/*95:0*/ __Vtemp557[3];
    WData/*95:0*/ __Vtemp558[3];
    WData/*95:0*/ __Vtemp560[3];
    WData/*95:0*/ __Vtemp565[3];
    WData/*95:0*/ __Vtemp566[3];
    WData/*95:0*/ __Vtemp568[3];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_48 
        = ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
           & (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
               & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
               ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                   | (VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                   ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30)
                   : ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))
               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30)));
    VL_EXTEND_WI(95,32, __Vtemp552, (0xfffffff8U & 
                                     (((IData)(1U) 
                                       + (IData)((vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                  >> 3U))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[0U] 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[0U]
                : __Vtemp552[0U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[1U] 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[1U]
                : __Vtemp552[1U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[2U] 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[2U]
                : __Vtemp552[2U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[2U]);
    VL_EXTEND_WQ(95,64, __Vtemp557, (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len 
                                     - VL_ULL(1)));
    VL_EXTEND_WQ(95,64, __Vtemp558, vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len);
    VL_EXTEND_WQ(95,64, __Vtemp560, (((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                      ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[0U] 
        = (((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
            ? __Vtemp557[0U] : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                 ? (__Vtemp558[0U] 
                                    | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[0U])
                                 : __Vtemp560[0U]));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[1U] 
        = (((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
            ? __Vtemp557[1U] : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                 ? (__Vtemp558[1U] 
                                    | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[1U])
                                 : __Vtemp560[1U]));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[2U] 
        = (((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
            ? __Vtemp557[2U] : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                 ? (__Vtemp558[2U] 
                                    | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[2U])
                                 : __Vtemp560[2U]));
    __Vtemp565[0U] = (0xfffffffcU & ((IData)((VL_ULL(1) 
                                              + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                     << 2U));
    __Vtemp565[1U] = ((3U & ((IData)((VL_ULL(1) + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                             >> 0x1eU)) | (0xfffffffcU 
                                           & ((IData)(
                                                      ((VL_ULL(1) 
                                                        + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp565[2U] = (3U & ((IData)(((VL_ULL(1) + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                     >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WQ(66,64, __Vtemp566, vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr_size);
    VL_EXTEND_WQ(66,64, __Vtemp568, vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr_size);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
        = (VL_LT_W(3, __Vtemp565, __Vtemp566) ? (0xfffffffcU 
                                                 & ((IData)(
                                                            (VL_ULL(1) 
                                                             + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                                    << 2U))
            : __Vtemp568[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
        = (VL_LT_W(3, __Vtemp565, __Vtemp566) ? ((3U 
                                                  & ((IData)(
                                                             (VL_ULL(1) 
                                                              + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                                     >> 0x1eU)) 
                                                 | (0xfffffffcU 
                                                    & ((IData)(
                                                               ((VL_ULL(1) 
                                                                 + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                                                >> 0x20U)) 
                                                       << 2U)))
            : __Vtemp568[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U] 
        = (VL_LT_W(3, __Vtemp565, __Vtemp566) ? (3U 
                                                 & ((IData)(
                                                            ((VL_ULL(1) 
                                                              + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                                             >> 0x20U)) 
                                                    >> 0x1eU))
            : __Vtemp568[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__168(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__168\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))))))))));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__169(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__169\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp571[3];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_8 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_6) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_6)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked)
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__lockIdx)
            : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_in_d_valid)
                ? 1U : 4U));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_unready 
        = ((7U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_filter) 
                   >> 1U) | (3U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_filter) 
                                   >> 2U)))) | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask) 
                                                << 2U));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___GEN_28 
        = (((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataWrap) 
            & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap))
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_deq 
        = (((((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState)) 
              & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataWrap)) 
             & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full))) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__empty)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_32 
        = (((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                         ? 3U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_27)))
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_27));
    VL_EXTEND_WQ(95,64, __Vtemp571, (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len 
                                     - VL_ULL(1)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[0U] 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                | (VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[0U]
                : __Vtemp571[0U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[1U] 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                | (VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[1U]
                : __Vtemp571[1U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[2U] 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                | (VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[2U]
                : __Vtemp571[2U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__rsize 
        = ((0U == (((4U ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U]) 
                    | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U]) 
                   | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U]))
            ? 2U : ((0U == (((2U ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U]) 
                             | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U]) 
                            | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U]))
                     ? 1U : ((0U == (((1U ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U]) 
                                      | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U]) 
                                     | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U]))
                              ? 0U : 3U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__170(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__170\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_94 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U]) 
                                           + (1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 1U)))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 2U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 3U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 4U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 5U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 6U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 7U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 8U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 9U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0xaU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0xbU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0xcU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0xdU)))) 
                                        + (3U & ((1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0xeU)) 
                                                 + 
                                                 (1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0xfU))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__171(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__171\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_126 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                  >> 0x10U)) 
                                           + (1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 0x11U)))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 0x12U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0x13U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 0x14U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0x15U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0x16U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0x17U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                               >> 0x18U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0x19U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0x1aU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0x1bU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                   >> 0x1cU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0x1dU)))) 
                                        + (3U & ((1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                     >> 0x1eU)) 
                                                 + 
                                                 ((1U 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
                                                      >> 0x1fU)) 
                                                  + 
                                                  (1U 
                                                   & vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U]))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__172(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__172\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_158 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                  >> 1U)) 
                                           + (1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 2U)))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 3U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 4U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 5U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 6U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 7U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 8U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 9U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0xaU)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0xbU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0xcU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0xdU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0xeU)))) 
                                        + (3U & ((1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0xfU)) 
                                                 + 
                                                 (1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0x10U))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__173(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__173\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_190 
        = (0x1fU & ((0xfU & ((7U & ((3U & ((1U & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                  >> 0x11U)) 
                                           + (1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 0x12U)))) 
                                    + (3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 0x13U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0x14U)))))) 
                             + (7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 0x15U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0x16U)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0x17U)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0x18U)))))))) 
                    + (0xfU & ((7U & ((3U & ((1U & 
                                              (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                               >> 0x19U)) 
                                             + (1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0x1aU)))) 
                                      + (3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0x1bU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0x1cU)))))) 
                               + (7U & ((3U & ((1U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                   >> 0x1dU)) 
                                               + (1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0x1eU)))) 
                                        + (3U & ((1U 
                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
                                                     >> 0x1fU)) 
                                                 + 
                                                 ((1U 
                                                   & vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U]) 
                                                  + 
                                                  (1U 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U] 
                                                      >> 1U)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__174(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__174\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp579[3];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_6) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_8) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_8) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_8) 
                                  >> 1U)))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_out_valid 
        = (1U & ((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen))
                  ? (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty))
                  : ((3U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)) 
                     & ((2U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)) 
                        & ((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_in_d_valid))))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_4_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)) 
           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)) 
           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2 
        = (3U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_unready) 
                  >> 2U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_unready)));
    VL_EXTEND_WQ(95,64, __Vtemp579, (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len 
                                     - VL_ULL(1)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[0U] 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[0U]
                : __Vtemp579[0U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[1U] 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[1U]
                : __Vtemp579[1U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[2U] 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[2U]
                : __Vtemp579[2U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
            ? 3U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__rsize));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__175(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__175\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
        = ((0xfffffff8U & ((IData)((vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                    >> 3U)) << 3U)) 
           | ((1U == (0x7fU & ((0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_94) 
                                         + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_126))) 
                               + (0x3fU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_158) 
                                           + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___pow2size_T_190))))))
               ? (7U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr))
               : 0U));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dOrig));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dOrig));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_4_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_4_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__latch 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___beatsLeft_T_4 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft) 
                 - ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready) 
                    & ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
                        ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_10)
                        : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3)))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_mask_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_d_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready) 
           & ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
               ? (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2))
               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_0)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__176(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__176\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready) 
           & ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
               ? (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2) 
                     >> 1U)) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_1)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1 
        = ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2) 
               >> 1U)) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_readys_T_2)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes) 
                     | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                         ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                             ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size) 
                                      << 1U)) : 0U)
                         : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                       & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                       ? (0x7fffffffU 
                                          & ((IData)(0xffU) 
                                             << ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 << 3U)))
                                       : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                                >> 1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__177(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__177\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                 | (1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                 | (1U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
            ? (0xfffffff8U & ((IData)((vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                       >> 3U)) << 3U))
            : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address);
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___inflight_opcodes_T_2 
        = (0xfU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes) 
                    | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                        & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                        ? (0x7ffffU & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                         ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                  << 1U))
                                         : 0U) << ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   << 2U)))
                        : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
                                       & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                                      & (6U != (7U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U))))
                                      ? (0x7fffffffU 
                                         & ((IData)(0xfU) 
                                            << (4U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 8U))))
                                      : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__178(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__178\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___inflight_sizes_T_2 
        = (0xffU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes) 
                     | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                         ? (0xfffffU & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                          ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                   << 1U))
                                          : 0U) << 
                                        ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                         << 3U))) : 0U)) 
                    & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x15U))))
                           ? (0x7fffffffU & ((IData)(0xffU) 
                                             << (8U 
                                                 & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    >> 7U))))
                           : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___T_7 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_d_ready) 
            | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_d_ready) 
           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___T_7 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_enq_ready 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__179(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__179\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_1));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_0));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_5))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_89 
        = (((VL_ULL(0) == (VL_ULL(0x1ffff0000) & (QData)((IData)(
                                                                 (0x20000U 
                                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))) 
            | (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                   (0x10000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address)))))) 
           | (VL_ULL(0) == (VL_ULL(0x1f0000000) & (QData)((IData)(
                                                                  (0x80000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__180(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__180\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_398 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address))))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                        >> 2U))))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address 
                                     >> 2U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__181(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__181\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp585[5];
    WData/*159:0*/ __Vtemp586[5];
    WData/*159:0*/ __Vtemp592[5];
    WData/*159:0*/ __Vtemp593[5];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_1) 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? ((IData)(1U) << (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                             >> 4U)))
                  : 0U)));
    __Vtemp585[0U] = 0xfU;
    __Vtemp585[1U] = 0U;
    __Vtemp585[2U] = 0U;
    __Vtemp585[3U] = 0U;
    __Vtemp585[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp586, __Vtemp585, 
                  (0x3cU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_5 
        = (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1 
           & (~ (((QData)((IData)(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                     & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                                    & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                    ? __Vtemp586[1U]
                                    : 0U))) << 0x20U) 
                 | (QData)((IData)(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                     ? __Vtemp586[0U]
                                     : 0U))))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2 
        = (0xffffU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                       | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                           ? ((IData)(1U) << (0xfU 
                                              & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xaU)))
                           : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                         ? ((IData)(1U) 
                                            << (0xfU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 4U)))
                                         : 0U))));
    __Vtemp592[0U] = 0xfU;
    __Vtemp592[1U] = 0U;
    __Vtemp592[2U] = 0U;
    __Vtemp592[3U] = 0U;
    __Vtemp592[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp593, __Vtemp592, 
                  (0x3cU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp593[0U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp593[1U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp593[2U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp593[3U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? (0x7fffU & __Vtemp593[4U]) : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__182(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__182\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp599[5];
    WData/*159:0*/ __Vtemp600[5];
    WData/*255:0*/ __Vtemp605[8];
    WData/*255:0*/ __Vtemp606[8];
    WData/*255:0*/ __Vtemp611[8];
    WData/*255:0*/ __Vtemp612[8];
    WData/*2079:0*/ __Vtemp619[65];
    WData/*2079:0*/ __Vtemp620[65];
    IData/*31:0*/ __Vilp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)));
    __Vtemp599[0U] = 0xfU;
    __Vtemp599[1U] = 0U;
    __Vtemp599[2U] = 0U;
    __Vtemp599[3U] = 0U;
    __Vtemp599[4U] = 0U;
    VL_SHIFTL_WWI(143,143,7, __Vtemp600, __Vtemp599, 
                  (0x3cU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                            >> 2U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp600[0U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp600[1U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp600[2U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp600[3U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_23[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) 
            & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1)))
            ? (0x7fffU & __Vtemp600[4U]) : 0U);
    __Vtemp605[0U] = 1U;
    __Vtemp605[1U] = 0U;
    __Vtemp605[2U] = 0U;
    __Vtemp605[3U] = 0U;
    __Vtemp605[4U] = 0U;
    __Vtemp605[5U] = 0U;
    __Vtemp605[6U] = 0U;
    __Vtemp605[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp606, __Vtemp605, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
    __Vtemp611[0U] = 1U;
    __Vtemp611[1U] = 0U;
    __Vtemp611[2U] = 0U;
    __Vtemp611[3U] = 0U;
    __Vtemp611[4U] = 0U;
    __Vtemp611[5U] = 0U;
    __Vtemp611[6U] = 0U;
    __Vtemp611[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp612, __Vtemp611, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp606[0U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                                               ? __Vtemp612[0U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp606[1U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                                               ? __Vtemp612[1U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp606[2U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                                               ? __Vtemp612[2U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp606[3U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                                               ? __Vtemp612[3U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp606[4U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                                               ? __Vtemp612[4U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp606[5U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                                               ? __Vtemp612[5U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp606[6U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                                               ? __Vtemp612[6U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp606[7U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
                                               ? __Vtemp612[7U]
                                               : 0U)));
    __Vtemp619[0U] = 0xfU;
    __Vilp = 1U;
    while ((__Vilp <= 0x40U)) {
        __Vtemp619[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VL_SHIFTL_WWI(2063,2063,11, __Vtemp620, __Vtemp619, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[1U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[2U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[3U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[4U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[5U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[5U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[6U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[6U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[7U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[7U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[8U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[8U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[9U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[9U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xaU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xbU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xcU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xdU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xeU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xfU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x10U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x11U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x12U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x13U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x14U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x15U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x16U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x17U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x18U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x19U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x20U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x20U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x21U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x21U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x22U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x22U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x23U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x23U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x24U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x24U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x25U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x25U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x26U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x26U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x27U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x27U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x28U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x28U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x29U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x29U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x2aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x2aU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x2bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x2bU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x2cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x2cU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x2dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x2dU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x2eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x2eU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x2fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x2fU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x30U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x30U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x31U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x31U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x32U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x32U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x33U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x33U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x34U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x34U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x35U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x35U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x36U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x36U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x37U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x37U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x38U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x38U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x39U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x39U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x3aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x3aU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x3bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x3bU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x3cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x3cU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x3dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x3dU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x3eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x3eU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x3fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp620[0x3fU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x40U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))
            ? (0x7fffU & __Vtemp620[0x40U]) : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_a_ready 
        = (((0U == (0x10000000U & (0x10000000U ^ ((
                                                   vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   << 0x16U) 
                                                  | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                     >> 0xaU))))) 
            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_enq_ready)) 
           | ((0U == (0x10000000U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                      << 0x16U) | (
                                                   vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                   >> 0xaU)))) 
              & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_enq_ready)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__183(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__183\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_37 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1)
            ? (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       >> 4U)) : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_40 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_1)
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_in_d_bits_size)
            : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)
            : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_sink 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_36 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0)
            ? (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       >> 4U)) : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_39 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size)
            : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_45 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0)
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)
            : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
            ? ((((2U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))
                  ? 0xfU : 0U) << 4U) | ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))
                                          ? 0xfU : 0U))
            : ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_5) 
                 | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_5) 
                    & vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)) 
                << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_5) 
                            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_5) 
                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address))) 
                           << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_4) 
                                       | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_4) 
                                          & vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)) 
                                      << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_4) 
                                                  | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_4) 
                                                     & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address))) 
                                                 << 4U) 
                                                | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_3) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_3) 
                                                        & vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)) 
                                                    << 3U) 
                                                   | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_3) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_3) 
                                                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address))) 
                                                       << 2U) 
                                                      | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_2) 
                                                           | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_2) 
                                                              & vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)) 
                                                          << 1U) 
                                                         | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_2) 
                                                            | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_2) 
                                                               & (~ vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_address)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__184(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__184\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp626[5];
    WData/*159:0*/ __Vtemp627[5];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5))));
    VL_EXTEND_WI(131,4, __Vtemp626, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | (0xeU 
                                               & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  >> 0x14U)))
                                      : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp627, __Vtemp626, 
                  (0x3cU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                            >> 8U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes 
            | (((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp627[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp627[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U])) 
                  << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__185(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__185\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp633[5];
    WData/*159:0*/ __Vtemp634[5];
    WData/*255:0*/ __Vtemp639[8];
    WData/*255:0*/ __Vtemp640[8];
    WData/*2079:0*/ __Vtemp647[65];
    WData/*2079:0*/ __Vtemp648[65];
    WData/*255:0*/ __Vtemp656[8];
    WData/*255:0*/ __Vtemp657[8];
    WData/*255:0*/ __Vtemp662[8];
    WData/*255:0*/ __Vtemp663[8];
    IData/*31:0*/ __Vilp;
    // Body
    VL_EXTEND_WI(131,4, __Vtemp633, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (1U | (0xeU 
                                               & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                  >> 0xdU)))
                                      : 0U));
    VL_SHIFTL_WWI(131,131,7, __Vtemp634, __Vtemp633, 
                  (0x3cU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                            >> 8U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes 
            | (((QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                  ? __Vtemp634[1U] : 0U))) 
                << 0x20U) | (QData)((IData)((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                              & (0U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1)))
                                              ? __Vtemp634[0U]
                                              : 0U))))) 
           & (~ (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U])) 
                  << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U])))));
    __Vtemp639[0U] = 1U;
    __Vtemp639[1U] = 0U;
    __Vtemp639[2U] = 0U;
    __Vtemp639[3U] = 0U;
    __Vtemp639[4U] = 0U;
    __Vtemp639[5U] = 0U;
    __Vtemp639[6U] = 0U;
    __Vtemp639[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp640, __Vtemp639, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[0U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp640[0U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[1U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[1U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp640[1U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[2U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[2U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp640[2U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[3U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[3U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp640[3U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[4U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[4U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp640[4U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[5U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[5U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp640[5U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[6U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[6U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp640[6U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[7U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[7U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp640[7U] : 0U)));
    __Vtemp647[0U] = 0xfU;
    __Vilp = 1U;
    while ((__Vilp <= 0x40U)) {
        __Vtemp647[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VL_SHIFTL_WWI(2063,2063,11, __Vtemp648, __Vtemp647, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[1U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[1U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[2U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[2U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[3U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[3U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[4U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[4U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[5U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[5U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[6U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[6U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[7U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[7U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[8U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[8U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[9U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[9U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0xaU] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0xbU] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0xcU] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0xdU] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0xeU] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0xfU] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x10U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x10U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x11U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x11U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x12U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x12U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x13U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x13U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x14U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x14U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x15U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x15U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x16U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x16U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x17U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x17U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x18U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x18U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x19U] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x19U] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x1aU] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x1bU] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x1cU] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x1dU] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x1eU] : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU] 
        = (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                  ? __Vtemp648[0x1fU] : 0U)));
    __Vtemp656[0U] = 1U;
    __Vtemp656[1U] = 0U;
    __Vtemp656[2U] = 0U;
    __Vtemp656[3U] = 0U;
    __Vtemp656[4U] = 0U;
    __Vtemp656[5U] = 0U;
    __Vtemp656[6U] = 0U;
    __Vtemp656[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp657, __Vtemp656, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
    __Vtemp662[0U] = 1U;
    __Vtemp662[1U] = 0U;
    __Vtemp662[2U] = 0U;
    __Vtemp662[3U] = 0U;
    __Vtemp662[4U] = 0U;
    __Vtemp662[5U] = 0U;
    __Vtemp662[6U] = 0U;
    __Vtemp662[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp663, __Vtemp662, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp657[0U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                               ? __Vtemp663[0U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp657[1U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                               ? __Vtemp663[1U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp657[2U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                               ? __Vtemp663[2U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp657[3U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                               ? __Vtemp663[3U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp657[4U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                               ? __Vtemp663[4U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp657[5U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                               ? __Vtemp663[5U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp657[6U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                               ? __Vtemp663[6U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp657[7U] : 0U)) & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                               ? __Vtemp663[7U]
                                               : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__186(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__186\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*2079:0*/ __Vtemp670[65];
    WData/*2079:0*/ __Vtemp671[65];
    WData/*2079:0*/ __Vtemp677[65];
    WData/*2079:0*/ __Vtemp678[65];
    WData/*2079:0*/ __Vtemp689[65];
    WData/*2079:0*/ __Vtemp690[65];
    IData/*31:0*/ __Vilp;
    // Body
    __Vtemp670[0U] = 0xfU;
    __Vilp = 1U;
    while ((__Vilp <= 0x40U)) {
        __Vtemp670[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VL_SHIFTL_WWI(2063,2063,11, __Vtemp671, __Vtemp670, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[1U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[1U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[2U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[2U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[3U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[3U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[4U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[4U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[5U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[5U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[6U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[6U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[7U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[7U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[8U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[8U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[9U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[9U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xaU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xbU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xcU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xdU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xeU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0xfU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x10U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x11U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x12U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x13U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x14U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x15U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x16U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x17U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x18U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x19U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1aU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1bU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1cU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1dU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1eU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x1fU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x20U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x20U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x21U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x21U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x22U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x22U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x23U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x23U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x24U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x24U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x25U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x25U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x26U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x26U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x27U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x27U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x28U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x28U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x29U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x29U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x2aU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x2aU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x2bU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x2bU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x2cU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x2cU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x2dU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x2dU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x2eU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x2eU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x2fU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x2fU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x30U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x30U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x31U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x31U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x32U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x32U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x33U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x33U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x34U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x34U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x35U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x35U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x36U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x36U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x37U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x37U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x38U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x38U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x39U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x39U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x3aU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x3aU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x3bU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x3bU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x3cU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x3cU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x3dU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x3dU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x3eU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x3eU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x3fU] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? __Vtemp671[0x3fU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_23[0x40U] 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
            ? (0x7fffU & __Vtemp671[0x40U]) : 0U);
    VL_EXTEND_WI(2051,4, __Vtemp677, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(2051,2051,11, __Vtemp678, __Vtemp677, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xcU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xdU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xeU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xfU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x10U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x10U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x10U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x11U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x11U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x11U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x12U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x12U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x12U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x13U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x13U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x13U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x14U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x14U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x14U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x15U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x15U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x15U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x16U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x16U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x16U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x17U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x17U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x17U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x18U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x18U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x18U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x19U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x19U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x19U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1aU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1bU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1cU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1dU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1eU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp678[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1fU]));
    VL_EXTEND_WI(2050,3, __Vtemp689, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | (6U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag) 
                                                   << 1U)))
                                       : 0U));
    VL_SHIFTL_WWI(2050,2050,11, __Vtemp690, __Vtemp689, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[9U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xcU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xdU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xeU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0xfU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x10U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x11U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x12U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x13U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x14U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x14U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x14U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x14U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x15U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x15U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x15U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x15U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x16U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x16U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x16U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x16U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x17U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x17U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x17U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x17U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x18U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x18U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x18U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x18U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x19U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x19U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x19U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x19U]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1aU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x1aU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1aU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1bU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x1bU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1bU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1cU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x1cU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1cU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1dU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x1dU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1dU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1eU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x1eU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1eU]));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1fU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp690[0x1fU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_23[0x1fU]));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___GEN_0 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
            & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1))) 
           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full));
}
