// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__135(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__135\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*2079:0*/ __Vtemp460[65];
    WData/*2079:0*/ __Vtemp461[65];
    IData/*31:0*/ __Vilp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18 
        = (1U & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full)) 
                  | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full))) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    __Vtemp460[0U] = 0xfU;
    __Vilp = 1U;
    while ((__Vilp <= 0x40U)) {
        __Vtemp460[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    VL_SHIFTL_WWI(2063,2063,11, __Vtemp461, __Vtemp460, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[1U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[1U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[2U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[2U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[3U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[3U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[4U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[4U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[5U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[5U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[6U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[6U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[7U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[7U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[8U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[8U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[9U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[9U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xaU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0xaU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xbU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0xbU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xcU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0xcU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xdU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0xdU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xeU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0xeU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xfU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0xfU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x10U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x10U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x11U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x11U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x12U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x12U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x13U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x13U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x14U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x14U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x15U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x15U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x16U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x16U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x17U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x17U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x18U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x18U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x19U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x19U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x1aU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x1bU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x1cU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x1dU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x1eU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x1fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x1fU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x20U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x20U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x21U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x21U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x22U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x22U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x23U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x23U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x24U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x24U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x25U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x25U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x26U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x26U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x27U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x27U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x28U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x28U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x29U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x29U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x2aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x2aU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x2bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x2bU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x2cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x2cU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x2dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x2dU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x2eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x2eU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x2fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x2fU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x30U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x30U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x31U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x31U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x32U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x32U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x33U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x33U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x34U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x34U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x35U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x35U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x36U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x36U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x37U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x37U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x38U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x38U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x39U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x39U] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x3aU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x3aU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x3bU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x3bU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x3cU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x3cU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x3dU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x3dU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x3eU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x3eU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x3fU] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? __Vtemp461[0x3fU] : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x40U] 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
            ? (0x7fffU & __Vtemp461[0x40U]) : 0U);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor_io_in_a_ready) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__136(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__136\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_20 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_398 
        = ((0xcU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
           & (VL_ULL(0) == (VL_ULL(0x1fffff000) & (QData)((IData)(
                                                                  (0x3000U 
                                                                   ^ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 2U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__137(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__137\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter1 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___GEN_30 
        = ((5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                         >> 0x15U))) ? 2U : ((4U == 
                                              (7U & 
                                               (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U)))
                                              ? 1U : 
                                             ((3U == 
                                               (7U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0x15U)))
                                                   ? 1U
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_30 
        = ((5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                         >> 0x15U))) ? 2U : ((4U == 
                                              (7U & 
                                               (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U)))
                                              ? 1U : 
                                             ((3U == 
                                               (7U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0x15U)))
                                                   ? 1U
                                                   : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__138(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__138\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___GEN_30 
        = ((5U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                         >> 0x15U))) ? 2U : ((4U == 
                                              (7U & 
                                               (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                >> 0x15U)))
                                              ? 1U : 
                                             ((3U == 
                                               (7U 
                                                & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                   >> 0x15U)))
                                               ? 1U
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                       >> 0x15U)))
                                                   ? 1U
                                                   : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
            ? 0xffU : (0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                 << 0x1fU) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                              >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
            ? 0xffU : (0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                 << 0x1fU) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                              >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param)
                  : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes) 
                   >> (4U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                             >> 8U))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving)) 
           & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                           >> 0x18U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_opcode)
                  : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_opcode)
                  : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__139(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__139\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 0xcU)) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xbU))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 0xcU)) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                  >> 0xbU)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                  >> 0xcU) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                 >> 0xbU))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                  >> 0xcU) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                              >> 0xbU)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 0xcU)) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xbU))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 0xcU)) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                  >> 0xbU)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                  >> 0xcU) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                 >> 0xbU))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                  >> 0xcU) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                              >> 0xbU)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 0xcU)) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                     >> 0xbU))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__140(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__140\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                     >> 0xcU)) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                  >> 0xbU)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                  >> 0xcU) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                 >> 0xbU))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                  >> 0xcU) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                              >> 0xbU)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (~ 
                                                      (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                       >> 0xcU))))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xcU)))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (~ 
                                                      (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                       >> 0xcU))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__141(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__141\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xcU)))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (~ 
                                                      (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                       >> 0xcU))))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               >> 0xeU))) | (1U & (
                                                   (((IData)(1U) 
                                                     << 
                                                     (3U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 0xeU))) 
                                                    >> 2U) 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xcU)))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving)) 
           & (3U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                           >> 0x18U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_size)
                  : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xeU)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__142(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__142\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*639:0*/ __Vtemp470[20];
    WData/*639:0*/ __Vtemp471[20];
    WData/*639:0*/ __Vtemp476[20];
    WData/*639:0*/ __Vtemp477[20];
    WData/*639:0*/ __Vtemp482[20];
    WData/*639:0*/ __Vtemp483[20];
    WData/*639:0*/ __Vtemp488[20];
    WData/*639:0*/ __Vtemp489[20];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                  ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_size)
                  : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xeU)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving)) 
           & (0U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                           >> 0x18U))));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__wrap_wrap_1 
        = (0x363U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txBaudCount));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_3 
        = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txBaudCount)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid_reg));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT___value_T_3 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__enq_ptr_value) 
           == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value));
    __Vtemp470[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp470[1U] = 0U;
    __Vtemp470[2U] = 0U;
    __Vtemp470[3U] = 0U;
    __Vtemp470[4U] = 0U;
    __Vtemp470[5U] = 0U;
    __Vtemp470[6U] = 0U;
    __Vtemp470[7U] = 0U;
    __Vtemp470[8U] = 0U;
    __Vtemp470[9U] = 0U;
    __Vtemp470[0xaU] = 0U;
    __Vtemp470[0xbU] = 0U;
    __Vtemp470[0xcU] = 0U;
    __Vtemp470[0xdU] = 0U;
    __Vtemp470[0xeU] = 0U;
    __Vtemp470[0xfU] = 0U;
    __Vtemp470[0x10U] = 0U;
    __Vtemp470[0x11U] = 0U;
    __Vtemp470[0x12U] = 0U;
    __Vtemp470[0x13U] = 0U;
    VL_EXTEND_WW(640,639, __Vtemp471, __Vtemp470);
    __Vtemp476[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp476[1U] = 0U;
    __Vtemp476[2U] = 0U;
    __Vtemp476[3U] = 0U;
    __Vtemp476[4U] = 0U;
    __Vtemp476[5U] = 0U;
    __Vtemp476[6U] = 0U;
    __Vtemp476[7U] = 0U;
    __Vtemp476[8U] = 0U;
    __Vtemp476[9U] = 0U;
    __Vtemp476[0xaU] = 0U;
    __Vtemp476[0xbU] = 0U;
    __Vtemp476[0xcU] = 0U;
    __Vtemp476[0xdU] = 0U;
    __Vtemp476[0xeU] = 0U;
    __Vtemp476[0xfU] = 0U;
    __Vtemp476[0x10U] = 0U;
    __Vtemp476[0x11U] = 0U;
    __Vtemp476[0x12U] = 0U;
    __Vtemp476[0x13U] = 0U;
    VL_EXTEND_WW(640,639, __Vtemp477, __Vtemp476);
    __Vtemp482[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp482[1U] = 0U;
    __Vtemp482[2U] = 0U;
    __Vtemp482[3U] = 0U;
    __Vtemp482[4U] = 0U;
    __Vtemp482[5U] = 0U;
    __Vtemp482[6U] = 0U;
    __Vtemp482[7U] = 0U;
    __Vtemp482[8U] = 0U;
    __Vtemp482[9U] = 0U;
    __Vtemp482[0xaU] = 0U;
    __Vtemp482[0xbU] = 0U;
    __Vtemp482[0xcU] = 0U;
    __Vtemp482[0xdU] = 0U;
    __Vtemp482[0xeU] = 0U;
    __Vtemp482[0xfU] = 0U;
    __Vtemp482[0x10U] = 0U;
    __Vtemp482[0x11U] = 0U;
    __Vtemp482[0x12U] = 0U;
    __Vtemp482[0x13U] = 0U;
    VL_EXTEND_WW(640,639, __Vtemp483, __Vtemp482);
    __Vtemp488[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp488[1U] = 0U;
    __Vtemp488[2U] = 0U;
    __Vtemp488[3U] = 0U;
    __Vtemp488[4U] = 0U;
    __Vtemp488[5U] = 0U;
    __Vtemp488[6U] = 0U;
    __Vtemp488[7U] = 0U;
    __Vtemp488[8U] = 0U;
    __Vtemp488[9U] = 0U;
    __Vtemp488[0xaU] = 0U;
    __Vtemp488[0xbU] = 0U;
    __Vtemp488[0xcU] = 0U;
    __Vtemp488[0xdU] = 0U;
    __Vtemp488[0xeU] = 0U;
    __Vtemp488[0xfU] = 0U;
    __Vtemp488[0x10U] = 0U;
    __Vtemp488[0x11U] = 0U;
    __Vtemp488[0x12U] = 0U;
    __Vtemp488[0x13U] = 0U;
    VL_EXTEND_WW(640,639, __Vtemp489, __Vtemp488);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp471[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp477[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp483[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp489[0U]))
                                                    ? 1U
                                                    : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__143(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__143\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___bundleOut_0_d_ready_T) 
                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
                                           ? ((VL_ULL(0) 
                                               == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                                               ? 0U
                                               : 6U)
                                           : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___bundleOut_0_a_valid_T) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)))
                                               ? 8U
                                               : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___io_serial_in_ready_T_3) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                                   ? 
                                                  (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                                                    | (VL_ULL(0) 
                                                       == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                                                    ? 7U
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_32))
                                                   : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_32)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__144(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__144\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*639:0*/ __Vtemp490[20];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___acknum_T_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18) 
           & (4U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___GEN_24 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18) 
           | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
              & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__wen 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18) 
           & (4U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___acknum_T_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum) 
                 - (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                          | (1U & (((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                   >> 3U))))));
    VL_SHIFTR_WWI(640,640,11, __Vtemp490, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp490[0U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp490[1U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp490[2U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp490[3U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp490[4U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp490[5U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp490[6U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp490[7U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp490[8U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp490[9U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp490[0xaU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp490[0xbU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp490[0xcU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp490[0xdU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp490[0xeU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp490[0xfU];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U] 
        = __Vtemp490[0x10U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U] 
        = __Vtemp490[0x11U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U] 
        = __Vtemp490[0x12U];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U] 
        = __Vtemp490[0x13U];
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x27U >= (0x3cU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                               >> 2U))) ? (VL_ULL(0xffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes 
                                              >> (0x3cU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                     >> 2U))))
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_1 
        = ((0x38U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                     << 3U)) | (7U & (~ (0x3fU & ((IData)(7U) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
           & (0U != (7U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__145(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__145\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*2079:0*/ __Vtemp492[65];
    WData/*2079:0*/ __Vtemp493[65];
    WData/*2079:0*/ __Vtemp504[65];
    WData/*2079:0*/ __Vtemp505[65];
    WData/*255:0*/ __Vtemp515[8];
    WData/*255:0*/ __Vtemp516[8];
    WData/*255:0*/ __Vtemp522[8];
    WData/*255:0*/ __Vtemp523[8];
    // Body
    VL_EXTEND_WI(2051,4, __Vtemp492, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(2051,2051,11, __Vtemp493, __Vtemp492, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[9U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xaU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xbU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xcU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xcU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xdU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xdU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xeU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xeU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xfU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xfU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x10U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x10U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x10U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x11U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x11U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x11U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x12U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x12U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x12U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x13U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x13U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp493[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x13U]));
    VL_EXTEND_WI(2050,3, __Vtemp504, (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                                       ? (1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                                                << 1U))
                                       : 0U));
    VL_SHIFTL_WWI(2050,2050,11, __Vtemp505, __Vtemp504, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[0U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[1U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[1U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[2U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[2U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[3U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[3U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[4U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[4U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[5U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[5U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[5U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[5U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[6U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[6U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[6U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[6U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[7U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[7U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[7U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[7U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[8U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[8U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[8U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[8U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[9U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[9U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[9U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[9U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xaU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xaU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[0xaU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xaU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xbU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xbU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[0xbU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xbU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xcU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xcU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[0xcU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xcU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xdU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xdU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[0xdU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xdU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xeU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xeU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[0xeU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xeU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xfU] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xfU] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[0xfU] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0xfU]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x10U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x10U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[0x10U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x10U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x11U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x11U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[0x11U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x11U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x12U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x12U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[0x12U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x12U]));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x13U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x13U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp505[0x13U] : 0U)) & (~ vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___GEN_23[0x13U]));
    __Vtemp515[0U] = 1U;
    __Vtemp515[1U] = 0U;
    __Vtemp515[2U] = 0U;
    __Vtemp515[3U] = 0U;
    __Vtemp515[4U] = 0U;
    __Vtemp515[5U] = 0U;
    __Vtemp515[6U] = 0U;
    __Vtemp515[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp516, __Vtemp515, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data));
    __Vtemp522[0U] = 1U;
    __Vtemp522[1U] = 0U;
    __Vtemp522[2U] = 0U;
    __Vtemp522[3U] = 0U;
    __Vtemp522[4U] = 0U;
    __Vtemp522[5U] = 0U;
    __Vtemp522[6U] = 0U;
    __Vtemp522[7U] = 0U;
    VL_SHIFTL_WWI(256,256,8, __Vtemp523, __Vtemp522, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[0U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp516[0U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                               ? __Vtemp523[0U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[1U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp516[1U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                               ? __Vtemp523[1U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[2U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp516[2U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                               ? __Vtemp523[2U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[3U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[3U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp516[3U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                               ? __Vtemp523[3U]
                                               : 0U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[4U] 
        = ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[4U] 
            | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))
                ? __Vtemp516[4U] : 0U)) & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                                               ? __Vtemp523[4U]
                                               : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__146(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__146\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                         >> 1U))) ? 2U : ((4U == (7U 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 1U : (
                                                   (3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                        >> 1U)))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                         >> 1U)))
                                                     ? 1U
                                                     : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__147(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__147\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30 
        = ((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
            ? 2U : ((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                     ? 1U : ((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                              ? 1U : ((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                       ? 1U : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__148(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__148\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__149(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__149\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0xeU))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor_io_in_d_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1 
        = (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag 
        = ((3U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size))
            ? 3U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag 
        = ((3U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size))
            ? 3U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1 
        = (7U & ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum) 
                                              - (IData)(1U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__150(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__150\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
           & (0U == (0x10000000U & (0x10000000U ^ (
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                    << 0x16U) 
                                                   | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                      >> 0xaU))))));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_client_out_a_valid) 
           & (0U == (0x10000000U & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                     << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                  >> 0xaU)))));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__151(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__151\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*639:0*/ __Vtemp534[20];
    WData/*639:0*/ __Vtemp535[20];
    WData/*639:0*/ __Vtemp540[20];
    WData/*639:0*/ __Vtemp541[20];
    WData/*639:0*/ __Vtemp546[20];
    WData/*639:0*/ __Vtemp547[20];
    WData/*639:0*/ __Vtemp552[20];
    WData/*639:0*/ __Vtemp553[20];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__adapter__DOT__idx;
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg 
        = vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg;
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18) 
           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__wen));
    __Vtemp534[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp534[1U] = 0U;
    __Vtemp534[2U] = 0U;
    __Vtemp534[3U] = 0U;
    __Vtemp534[4U] = 0U;
    __Vtemp534[5U] = 0U;
    __Vtemp534[6U] = 0U;
    __Vtemp534[7U] = 0U;
    __Vtemp534[8U] = 0U;
    __Vtemp534[9U] = 0U;
    __Vtemp534[0xaU] = 0U;
    __Vtemp534[0xbU] = 0U;
    __Vtemp534[0xcU] = 0U;
    __Vtemp534[0xdU] = 0U;
    __Vtemp534[0xeU] = 0U;
    __Vtemp534[0xfU] = 0U;
    __Vtemp534[0x10U] = 0U;
    __Vtemp534[0x11U] = 0U;
    __Vtemp534[0x12U] = 0U;
    __Vtemp534[0x13U] = 0U;
    VL_EXTEND_WW(640,639, __Vtemp535, __Vtemp534);
    __Vtemp540[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp540[1U] = 0U;
    __Vtemp540[2U] = 0U;
    __Vtemp540[3U] = 0U;
    __Vtemp540[4U] = 0U;
    __Vtemp540[5U] = 0U;
    __Vtemp540[6U] = 0U;
    __Vtemp540[7U] = 0U;
    __Vtemp540[8U] = 0U;
    __Vtemp540[9U] = 0U;
    __Vtemp540[0xaU] = 0U;
    __Vtemp540[0xbU] = 0U;
    __Vtemp540[0xcU] = 0U;
    __Vtemp540[0xdU] = 0U;
    __Vtemp540[0xeU] = 0U;
    __Vtemp540[0xfU] = 0U;
    __Vtemp540[0x10U] = 0U;
    __Vtemp540[0x11U] = 0U;
    __Vtemp540[0x12U] = 0U;
    __Vtemp540[0x13U] = 0U;
    VL_EXTEND_WW(640,639, __Vtemp541, __Vtemp540);
    __Vtemp546[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp546[1U] = 0U;
    __Vtemp546[2U] = 0U;
    __Vtemp546[3U] = 0U;
    __Vtemp546[4U] = 0U;
    __Vtemp546[5U] = 0U;
    __Vtemp546[6U] = 0U;
    __Vtemp546[7U] = 0U;
    __Vtemp546[8U] = 0U;
    __Vtemp546[9U] = 0U;
    __Vtemp546[0xaU] = 0U;
    __Vtemp546[0xbU] = 0U;
    __Vtemp546[0xcU] = 0U;
    __Vtemp546[0xdU] = 0U;
    __Vtemp546[0xeU] = 0U;
    __Vtemp546[0xfU] = 0U;
    __Vtemp546[0x10U] = 0U;
    __Vtemp546[0x11U] = 0U;
    __Vtemp546[0x12U] = 0U;
    __Vtemp546[0x13U] = 0U;
    VL_EXTEND_WW(640,639, __Vtemp547, __Vtemp546);
    __Vtemp552[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp552[1U] = 0U;
    __Vtemp552[2U] = 0U;
    __Vtemp552[3U] = 0U;
    __Vtemp552[4U] = 0U;
    __Vtemp552[5U] = 0U;
    __Vtemp552[6U] = 0U;
    __Vtemp552[7U] = 0U;
    __Vtemp552[8U] = 0U;
    __Vtemp552[9U] = 0U;
    __Vtemp552[0xaU] = 0U;
    __Vtemp552[0xbU] = 0U;
    __Vtemp552[0xcU] = 0U;
    __Vtemp552[0xdU] = 0U;
    __Vtemp552[0xeU] = 0U;
    __Vtemp552[0xfU] = 0U;
    __Vtemp552[0x10U] = 0U;
    __Vtemp552[0x11U] = 0U;
    __Vtemp552[0x12U] = 0U;
    __Vtemp552[0x13U] = 0U;
    VL_EXTEND_WW(640,639, __Vtemp553, __Vtemp552);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp535[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp541[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp547[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp553[0U]))
                                                    ? 1U
                                                    : 0U))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & (IData)((VL_ULL(7) & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                              >> 1U)))))
            ? 2U : ((4U == (7U & (IData)((VL_ULL(7) 
                                          & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                             >> 1U)))))
                     ? 1U : ((3U == (7U & (IData)((VL_ULL(7) 
                                                   & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                      >> 1U)))))
                              ? 1U : ((2U == (7U & (IData)(
                                                           (VL_ULL(7) 
                                                            & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 1U : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__152(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__152\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6 
        = ((1U | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_1) 
                  << 1U)) & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_1)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_valid 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid 
        = (1U & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__drop))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                & vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
            << 7U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                       << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                      & vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                  << 5U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                 & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                                             << 4U) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                    & vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                                << 3U) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                       & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))) 
                                                   << 2U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                       | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                          & vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)) 
                                                      << 1U) 
                                                     | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                        | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                           & (~ vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__153(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__153\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0x1fffff80U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                 >> 3U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                   & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                         >> 0xaU)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                 << 5U) 
                                                | (0x7ffffe0U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                       << 5U) 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                         >> 5U)))) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                       & (~ 
                                                          (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                           >> 0xaU)))) 
                                                   << 4U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                       << 3U) 
                                                      | (0x1fffff8U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                             << 3U) 
                                                            & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                               >> 7U)))) 
                                                     | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                             & (~ 
                                                                (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                 >> 0xaU)))) 
                                                         << 2U) 
                                                        | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                             << 1U) 
                                                            | (0x7ffffeU 
                                                               & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                   << 1U) 
                                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 9U)))) 
                                                           | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                 & (~ 
                                                                    (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 0xaU)))))))))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0x1fffff80U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                 >> 3U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                   & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                         >> 0xaU)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                 << 5U) 
                                                | (0x7ffffe0U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                       << 5U) 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                         >> 5U)))) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                       & (~ 
                                                          (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                           >> 0xaU)))) 
                                                   << 4U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                       << 3U) 
                                                      | (0x1fffff8U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                             << 3U) 
                                                            & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                               >> 7U)))) 
                                                     | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                             & (~ 
                                                                (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                 >> 0xaU)))) 
                                                         << 2U) 
                                                        | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                             << 1U) 
                                                            | (0x7ffffeU 
                                                               & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                   << 1U) 
                                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 9U)))) 
                                                           | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                 & (~ 
                                                                    (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 0xaU)))))))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__154(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__154\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask 
        = ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
             << 7U) | (0x1fffff80U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                       << 7U) & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                 >> 3U)))) 
           | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                   & (~ (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                         >> 0xaU)))) << 6U) | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                 << 5U) 
                                                | (0x7ffffe0U 
                                                   & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                       << 5U) 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                         >> 5U)))) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                       & (~ 
                                                          (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                           >> 0xaU)))) 
                                                   << 4U) 
                                                  | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                       << 3U) 
                                                      | (0x1fffff8U 
                                                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                             << 3U) 
                                                            & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                               >> 7U)))) 
                                                     | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                             & (~ 
                                                                (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                 >> 0xaU)))) 
                                                         << 2U) 
                                                        | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                             << 1U) 
                                                            | (0x7ffffeU 
                                                               & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                   << 1U) 
                                                                  & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 9U)))) 
                                                           | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                              | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                 & (~ 
                                                                    (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                                                     >> 0xaU)))))))))));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___inflight_sizes_T_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes_1) 
           & (~ ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
                   & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))) 
                  & (6U == (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                  >> 0x15U)))) ? (0x7fffffffU 
                                                  & ((IData)(0xffU) 
                                                     << 
                                                     (8U 
                                                      & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                         >> 7U))))
                  : 0U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__155(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__155\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
            >> 2U) & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source 
        = ((0xf0U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                       ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_source)
                       : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                          >> 0xaU)) << 4U)) | ((8U 
                                                & ((~ 
                                                    ((0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle)
                                                      : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aToggle_r))) 
                                                   << 3U)) 
                                               | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
        = (0x1fffffffU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                            ? vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_address
                            : ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                             >> 0xaU))) 
                          | (0x3fU & (~ (7U | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1) 
                                                 << 3U) 
                                                | (0x1fffU 
                                                   & ((IData)(0x3fU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_size)))) 
                                               | (7U 
                                                  & (~ 
                                                     (0x3ffU 
                                                      & ((IData)(7U) 
                                                         << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
        = (0x3ffffU & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                         ? vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_address
                         : ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                             << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                          >> 0xaU))) 
                       | (0x3fU & (~ (7U | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1) 
                                              << 3U) 
                                             | (0x1fffU 
                                                & ((IData)(0x3fU) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_size)))) 
                                            | (7U & 
                                               (~ (0x3ffU 
                                                   & ((IData)(7U) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source 
        = ((0xf0U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                       ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_source)
                       : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                          >> 0xaU)) << 4U)) | ((8U 
                                                & ((~ 
                                                    ((0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum))
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dToggle)
                                                      : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aToggle_r))) 
                                                   << 3U)) 
                                               | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__156(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__156\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp555[3];
    WData/*95:0*/ __Vtemp556[3];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_enq_ready) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_0_a_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_a_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_deq 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready_reg) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__empty)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_3 
        = ((1U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_1 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState)) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)) 
           & (0x363U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___idx_T_1 
        = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)));
    VL_EXTEND_WI(95,32, __Vtemp555, vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg);
    VL_SHIFTL_WWI(95,95,6, __Vtemp556, __Vtemp555, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                   << 5U));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[0U] 
        = __Vtemp556[0U];
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[1U] 
        = __Vtemp556[1U];
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[2U] 
        = (0x7fffffffU & __Vtemp556[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___io_serial_in_ready_T_3 
        = (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___bundleOut_0_a_valid_T 
        = (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___bundleOut_0_d_ready_T 
        = (8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___GEN_30 
        = ((5U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                    ? 1U : 4U)) ? 2U : ((4U == ((7U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                 ? 1U
                                                 : 4U))
                                         ? 1U : ((3U 
                                                  == 
                                                  ((7U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                    ? 1U
                                                    : 4U))
                                                  ? 1U
                                                  : 
                                                 ((2U 
                                                   == 
                                                   ((7U 
                                                     == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                     ? 1U
                                                     : 4U))
                                                   ? 1U
                                                   : 0U))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__157(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__157\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___T_6 
        = ((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
           & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_23 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data_io_deq_bits_MPORT_data)
            : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_24 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data_io_deq_bits_MPORT_data 
                       >> 0x20U)) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_40 
        = (3U & (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                  ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid) 
                     | ((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))
                  : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                      & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                      ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                          ? ((1U == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)
                              ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))
                          : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))
                      : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30 
        = (1U & (((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                  & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
                  ? ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx))
                  : (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
                      ? (IData)((vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                 >> 2U)) : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                             & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                             ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                                                 ? (IData)(
                                                           (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                            >> 2U))
                                                 : 
                                                ((IData)(1U) 
                                                 + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))
                                             : (((1U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                                 ? 
                                                ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)) 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))
                                                 : 
                                                ((~ 
                                                  ((0U 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                                   & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__158(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__158\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid 
        = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
           | (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_6 
        = (((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? 1U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_d_ready 
        = ((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
           | (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len 
        = (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[1U])) 
            << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_52[0U])));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8 
        = (0xfU & ((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6) 
                          >> 4U)) | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 2U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__159(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__159\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                     >> 2U)))));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                     >> 2U)) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                   >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3 
        = (1U & ((~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                     >> 2U)) & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                >> 1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                  >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                               >> 1U))));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5 
        = (1U & ((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                  >> 2U) & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                            >> 1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc 
        = (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                           >> 2U) & (~ (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                        >> 2U))))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__160(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__160\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*639:0*/ __Vtemp558[20];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1 
        = (1U & ((3U <= (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                 | (1U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                           >> 2U) & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                     >> 2U)))));
    VL_SHIFTR_WWI(640,640,11, __Vtemp558, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                   << 2U));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
        = __Vtemp558[0U];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[1U] 
        = __Vtemp558[1U];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[2U] 
        = __Vtemp558[2U];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[3U] 
        = __Vtemp558[3U];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[4U] 
        = __Vtemp558[4U];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[5U] 
        = __Vtemp558[5U];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[6U] 
        = __Vtemp558[6U];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[7U] 
        = __Vtemp558[7U];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[8U] 
        = __Vtemp558[8U];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[9U] 
        = __Vtemp558[9U];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xaU] 
        = __Vtemp558[0xaU];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xbU] 
        = __Vtemp558[0xbU];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xcU] 
        = __Vtemp558[0xcU];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xdU] 
        = __Vtemp558[0xdU];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xeU] 
        = __Vtemp558[0xeU];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0xfU] 
        = __Vtemp558[0xfU];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x10U] 
        = __Vtemp558[0x10U];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x11U] 
        = __Vtemp558[0x11U];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x12U] 
        = __Vtemp558[0x12U];
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0x13U] 
        = __Vtemp558[0x13U];
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
        = ((0x27U >= (0x3cU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                               >> 2U))) ? (VL_ULL(0xffffffffff) 
                                           & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_opcodes 
                                              >> (0x3cU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                                                     >> 2U))))
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___dFirst_size_T_1 
        = ((0x38U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                     << 3U)) | (7U & (~ (0x3fU & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___GEN_0 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat)) 
           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_10 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___sink_ACancel_earlyValid_T_3 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_0) 
            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid)) 
           | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_1) 
              & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid)));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid 
        = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
            << 1U) | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__161(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__161\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp559[3];
    WData/*95:0*/ __Vtemp560[3];
    WData/*95:0*/ __Vtemp562[3];
    // Body
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo_io_enq_valid 
        = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_1) 
           & (7U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txDataIdx)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_16 
        = (((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full))) 
           & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap));
    VL_EXTEND_WI(95,32, __Vtemp559, (0xfffffff8U & 
                                     (((IData)(1U) 
                                       + (IData)((vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                  >> 3U))) 
                                      << 3U)));
    VL_EXTEND_WQ(95,64, __Vtemp560, vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr);
    VL_EXTEND_WQ(95,64, __Vtemp562, (((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                      ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[0U] 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? __Vtemp559[0U] : (((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                 ? (__Vtemp560[0U] 
                                    | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[0U])
                                 : __Vtemp562[0U]));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[1U] 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? __Vtemp559[1U] : (((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                 ? (__Vtemp560[1U] 
                                    | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[1U])
                                 : __Vtemp562[1U]));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[2U] 
        = (((4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? __Vtemp559[2U] : (((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                 ? (__Vtemp560[2U] 
                                    | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[2U])
                                 : __Vtemp562[2U]));
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
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_6) 
                                  >> 4U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8) 
                                     >> 2U)))) << 1U) 
              | (1U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8) 
                        >> 3U) | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___dFirst_size_T_8) 
                                  >> 1U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__162(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__162\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2))));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__163(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__163\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*639:0*/ __Vtemp571[20];
    WData/*639:0*/ __Vtemp572[20];
    WData/*639:0*/ __Vtemp577[20];
    WData/*639:0*/ __Vtemp578[20];
    WData/*639:0*/ __Vtemp583[20];
    WData/*639:0*/ __Vtemp584[20];
    WData/*639:0*/ __Vtemp589[20];
    WData/*639:0*/ __Vtemp590[20];
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4))));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_1) 
           | (3U & ((((IData)(1U) << (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                     >> 1U) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5))));
    __Vtemp571[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp571[1U] = 0U;
    __Vtemp571[2U] = 0U;
    __Vtemp571[3U] = 0U;
    __Vtemp571[4U] = 0U;
    __Vtemp571[5U] = 0U;
    __Vtemp571[6U] = 0U;
    __Vtemp571[7U] = 0U;
    __Vtemp571[8U] = 0U;
    __Vtemp571[9U] = 0U;
    __Vtemp571[0xaU] = 0U;
    __Vtemp571[0xbU] = 0U;
    __Vtemp571[0xcU] = 0U;
    __Vtemp571[0xdU] = 0U;
    __Vtemp571[0xeU] = 0U;
    __Vtemp571[0xfU] = 0U;
    __Vtemp571[0x10U] = 0U;
    __Vtemp571[0x11U] = 0U;
    __Vtemp571[0x12U] = 0U;
    __Vtemp571[0x13U] = 0U;
    VL_EXTEND_WW(640,639, __Vtemp572, __Vtemp571);
    __Vtemp577[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp577[1U] = 0U;
    __Vtemp577[2U] = 0U;
    __Vtemp577[3U] = 0U;
    __Vtemp577[4U] = 0U;
    __Vtemp577[5U] = 0U;
    __Vtemp577[6U] = 0U;
    __Vtemp577[7U] = 0U;
    __Vtemp577[8U] = 0U;
    __Vtemp577[9U] = 0U;
    __Vtemp577[0xaU] = 0U;
    __Vtemp577[0xbU] = 0U;
    __Vtemp577[0xcU] = 0U;
    __Vtemp577[0xdU] = 0U;
    __Vtemp577[0xeU] = 0U;
    __Vtemp577[0xfU] = 0U;
    __Vtemp577[0x10U] = 0U;
    __Vtemp577[0x11U] = 0U;
    __Vtemp577[0x12U] = 0U;
    __Vtemp577[0x13U] = 0U;
    VL_EXTEND_WW(640,639, __Vtemp578, __Vtemp577);
    __Vtemp583[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp583[1U] = 0U;
    __Vtemp583[2U] = 0U;
    __Vtemp583[3U] = 0U;
    __Vtemp583[4U] = 0U;
    __Vtemp583[5U] = 0U;
    __Vtemp583[6U] = 0U;
    __Vtemp583[7U] = 0U;
    __Vtemp583[8U] = 0U;
    __Vtemp583[9U] = 0U;
    __Vtemp583[0xaU] = 0U;
    __Vtemp583[0xbU] = 0U;
    __Vtemp583[0xcU] = 0U;
    __Vtemp583[0xdU] = 0U;
    __Vtemp583[0xeU] = 0U;
    __Vtemp583[0xfU] = 0U;
    __Vtemp583[0x10U] = 0U;
    __Vtemp583[0x11U] = 0U;
    __Vtemp583[0x12U] = 0U;
    __Vtemp583[0x13U] = 0U;
    VL_EXTEND_WW(640,639, __Vtemp584, __Vtemp583);
    __Vtemp589[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                            >> 1U));
    __Vtemp589[1U] = 0U;
    __Vtemp589[2U] = 0U;
    __Vtemp589[3U] = 0U;
    __Vtemp589[4U] = 0U;
    __Vtemp589[5U] = 0U;
    __Vtemp589[6U] = 0U;
    __Vtemp589[7U] = 0U;
    __Vtemp589[8U] = 0U;
    __Vtemp589[9U] = 0U;
    __Vtemp589[0xaU] = 0U;
    __Vtemp589[0xbU] = 0U;
    __Vtemp589[0xcU] = 0U;
    __Vtemp589[0xdU] = 0U;
    __Vtemp589[0xeU] = 0U;
    __Vtemp589[0xfU] = 0U;
    __Vtemp589[0x10U] = 0U;
    __Vtemp589[0x11U] = 0U;
    __Vtemp589[0x12U] = 0U;
    __Vtemp589[0x13U] = 0U;
    VL_EXTEND_WW(640,639, __Vtemp590, __Vtemp589);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46 
        = ((5U == (7U & __Vtemp572[0U])) ? 2U : ((4U 
                                                  == 
                                                  (7U 
                                                   & __Vtemp578[0U]))
                                                  ? 1U
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp584[0U]))
                                                   ? 1U
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (7U 
                                                     & __Vtemp590[0U]))
                                                    ? 1U
                                                    : 0U))));
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
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__164(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__164\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__165(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__165\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp591[3];
    // Body
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
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_48 
        = ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
           & (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
               & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
               ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                   | (VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                   ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30)
                   : ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)))
               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30)));
    VL_EXTEND_WI(95,32, __Vtemp591, (0xfffffff8U & 
                                     (((IData)(1U) 
                                       + (IData)((vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                  >> 3U))) 
                                      << 3U)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[0U] 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[0U]
                : __Vtemp591[0U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[1U] 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[1U]
                : __Vtemp591[1U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[2U] 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[2U]
                : __Vtemp591[2U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_26[2U]);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__166(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__166\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp596[3];
    WData/*95:0*/ __Vtemp597[3];
    WData/*95:0*/ __Vtemp599[3];
    WData/*95:0*/ __Vtemp604[3];
    WData/*95:0*/ __Vtemp605[3];
    WData/*95:0*/ __Vtemp607[3];
    // Body
    VL_EXTEND_WQ(95,64, __Vtemp596, (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len 
                                     - VL_ULL(1)));
    VL_EXTEND_WQ(95,64, __Vtemp597, vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len);
    VL_EXTEND_WQ(95,64, __Vtemp599, (((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                      & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                      ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[0U] 
        = (((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
            ? __Vtemp596[0U] : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                 ? (__Vtemp597[0U] 
                                    | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[0U])
                                 : __Vtemp599[0U]));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[1U] 
        = (((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
            ? __Vtemp596[1U] : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                 ? (__Vtemp597[1U] 
                                    | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[1U])
                                 : __Vtemp599[1U]));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[2U] 
        = (((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg))
            ? __Vtemp596[2U] : (((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                 & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                                 ? (__Vtemp597[2U] 
                                    | vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___addr_T_2[2U])
                                 : __Vtemp599[2U]));
    __Vtemp604[0U] = (0xfffffffcU & ((IData)((VL_ULL(1) 
                                              + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                     << 2U));
    __Vtemp604[1U] = ((3U & ((IData)((VL_ULL(1) + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                             >> 0x1eU)) | (0xfffffffcU 
                                           & ((IData)(
                                                      ((VL_ULL(1) 
                                                        + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                                       >> 0x20U)) 
                                              << 2U)));
    __Vtemp604[2U] = (3U & ((IData)(((VL_ULL(1) + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                     >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WQ(66,64, __Vtemp605, vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr_size);
    VL_EXTEND_WQ(66,64, __Vtemp607, vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr_size);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[0U] 
        = (VL_LT_W(3, __Vtemp604, __Vtemp605) ? (0xfffffffcU 
                                                 & ((IData)(
                                                            (VL_ULL(1) 
                                                             + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                                    << 2U))
            : __Vtemp607[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[1U] 
        = (VL_LT_W(3, __Vtemp604, __Vtemp605) ? ((3U 
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
            : __Vtemp607[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__raw_size[2U] 
        = (VL_LT_W(3, __Vtemp604, __Vtemp605) ? (3U 
                                                 & ((IData)(
                                                            ((VL_ULL(1) 
                                                              + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                                             >> 0x20U)) 
                                                    >> 0x1eU))
            : __Vtemp607[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size 
        = ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size)
            : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig));
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
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__167(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__167\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
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
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__168(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__168\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp610[3];
    // Body
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
    VL_EXTEND_WQ(95,64, __Vtemp610, (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len 
                                     - VL_ULL(1)));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[0U] 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                | (VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[0U]
                : __Vtemp610[0U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[1U] 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                | (VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[1U]
                : __Vtemp610[1U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_43[2U] 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                | (VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[2U]
                : __Vtemp610[2U]) : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_31[2U]);
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

VL_INLINE_OPT void VTestHarness::_sequent__TOP__169(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__169\n"); );
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

VL_INLINE_OPT void VTestHarness::_sequent__TOP__170(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__170\n"); );
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

VL_INLINE_OPT void VTestHarness::_sequent__TOP__171(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__171\n"); );
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
