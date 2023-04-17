// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__72(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__72\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__init_done_sticky 
        = vlTOPp->TestHarness__DOT__SimJTAG__DOT__init_done_sticky;
    vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__tickCounterReg 
        = vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg;
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[8U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[8U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[9U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[9U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xaU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xbU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xcU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xdU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xeU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xfU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x10U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x11U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x12U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x13U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x14U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x15U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x16U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x17U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x18U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x19U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU]);
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackCount = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_7) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackCount 
                = vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_5;
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_opcodes 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___inflight_opcodes_T_2);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_opcodes_T_2);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_opcodes 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___inflight_opcodes_T_2);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[8U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[8U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[9U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[9U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xaU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xbU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xcU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xdU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xeU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0xfU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x10U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x10U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x11U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x11U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x12U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x12U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x13U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x13U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x14U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x14U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x15U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x15U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x16U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x16U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x17U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x17U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x18U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x18U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x19U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x19U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1aU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1bU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1cU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1dU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1eU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_opcodes_T_2[0x1fU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[8U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[8U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[9U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[9U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xaU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xbU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xcU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xdU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xeU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0xfU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x10U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x10U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x11U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x11U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x12U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x12U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x13U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x13U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x14U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x14U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x15U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x15U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x16U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x16U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x17U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x17U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x18U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x18U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x19U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x19U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1aU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1bU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1cU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1dU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1eU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_opcodes_T_2[0x1fU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[8U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[8U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[9U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[9U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xaU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0xaU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xbU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0xbU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xcU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0xcU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xdU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0xdU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xeU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0xeU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0xfU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0xfU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x10U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x10U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x11U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x11U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x12U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x12U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x13U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x13U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x14U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x14U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x15U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x15U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x16U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x16U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x17U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x17U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x18U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x18U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x19U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x19U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1aU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x1aU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1bU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x1bU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1cU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x1cU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1dU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x1dU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1eU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x1eU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0x1fU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_opcodes_T_2[0x1fU]);
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___inflight_opcodes_T_2));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___inflight_opcodes_T_2));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txDataIdx = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_1) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txDataIdx 
                = vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_1;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__73(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__73\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataIdx = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_16) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataIdx 
                = vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_9;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__deq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_deq) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__deq_ptr_value 
                = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT___value_T_3;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxState = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState))) {
            if (((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap) 
                 & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__empty)))) {
                vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxState = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState))) {
                if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudWrap) {
                    vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxState = 2U;
                }
            } else {
                if ((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState))) {
                    vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxState 
                        = vlTOPp->TestHarness__DOT__uart_sim_0__DOT___GEN_28;
                }
            }
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_mask;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__74(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__74\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__75(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__75\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            >> 1U))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                >> 8U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            >> 2U))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                >> 0x10U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            >> 3U))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram__v0 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                >> 0x18U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            >> 4U))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                >> 0x20U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            >> 5U))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                >> 0x28U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__76(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__76\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            >> 6U))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                >> 0x30U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_en) 
          & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem_RW0_wmode)) 
         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data) 
            >> 7U))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram__v0 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                >> 0x38U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram__v0 
            = (0x1ffU & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                         >> 3U));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)))) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount 
                = ((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__wrap_wrap_3)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_7));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4 = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_4_ready) 
             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty)))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_first_4)
                          ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? 0U : (~ (0x3ffffU & 
                                         (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                          >> 3U))))
                          : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter1_4)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__77(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__77\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_enq;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__78(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__78\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo_io_enq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0 
            = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txData;
        vlTOPp->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0 
            = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__enq_ptr_value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid_reg))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0 
            = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_bits_reg;
        vlTOPp->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0 
            = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__enq_ptr_value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__79(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__79\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1)));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending 
        = ((~ (IData)(vlTOPp->reset)) & ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___T) 
                                             & (3U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount)))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___GEN_3)));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1 = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_in_1_ready) 
             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_in_d_valid))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_first_1)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter1_1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__80(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__80\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___T_7) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum))) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dOrig 
                = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst_size;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__lockIdx = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___T) {
            if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked)))) {
                vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__lockIdx 
                    = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_in_d_valid)
                        ? 1U : 4U);
            }
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                ? 1U : 4U);
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 1U
                                                    : 0U)) 
                                               & (~ 
                                                  ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                                    : 0U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__81(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__81\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    CData/*0:0*/ __Vfunc_serial_tick__1__serial_out_ready;
    CData/*0:0*/ __Vfunc_serial_tick__1__serial_in_valid;
    IData/*31:0*/ __Vfunc_serial_tick__1__Vfuncout;
    IData/*31:0*/ __Vfunc_serial_tick__1__serial_in_bits;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? ((VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)
                ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_40)
                : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_40));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
        = (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[1U])) 
            << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_51[0U])));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask = 3U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__latch) 
             & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_valid)))) {
            vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask 
                = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_mask_T) 
                   | (2U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___readys_mask_T) 
                            << 1U)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                ? (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0)))
                : VL_ULL(0));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid = 0U;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready = 0U;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit = 0U;
        vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg = 0U;
        vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg = 0U;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg = 0U;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit_reg = 0U;
    } else {
        vlSymsp->TOP____024unit.__Vdpiimwrap_serial_tick_TOP____024unit(
                                                                        (5U 
                                                                         == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)), __Vfunc_serial_tick__1__serial_out_ready, 
                                                                        ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                                                                          ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1
                                                                          : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0), __Vfunc_serial_tick__1__serial_in_valid, 
                                                                        ((((0U 
                                                                            == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                                                           | (1U 
                                                                              == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))) 
                                                                          | (2U 
                                                                             == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))) 
                                                                         | (6U 
                                                                            == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))), __Vfunc_serial_tick__1__serial_in_bits, __Vfunc_serial_tick__1__Vfuncout);
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready 
            = __Vfunc_serial_tick__1__serial_out_ready;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid 
            = __Vfunc_serial_tick__1__serial_in_valid;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits 
            = __Vfunc_serial_tick__1__serial_in_bits;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit 
            = __Vfunc_serial_tick__1__Vfuncout;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg 
            = vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready;
        vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg 
            = vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid;
        vlTOPp->__Vdly__TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg 
            = vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits;
        vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit_reg 
            = (1U & vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__82(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__82\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dToggle;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = (((QData)((IData)(((0xff000000U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                   ? (IData)(
                                                             (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                              >> 0x38U))
                                                   : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_7)) 
                                                 << 0x18U)) 
                                 | ((0xff0000U & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                    ? (IData)(
                                                              (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                               >> 0x30U))
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_6)) 
                                                  << 0x10U)) 
                                    | ((0xff00U & (
                                                   ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                     ? (IData)(
                                                               (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                                >> 0x28U))
                                                     : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_5)) 
                                                   << 8U)) 
                                       | (0xffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                    ? (IData)(
                                                              (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                               >> 0x20U))
                                                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_4)))))))) 
                << 0x20U) | (QData)((IData)(((0xff000000U 
                                              & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                   ? (IData)(
                                                             (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                              >> 0x18U))
                                                   : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_3)) 
                                                 << 0x18U)) 
                                             | ((0xff0000U 
                                                 & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                      ? (IData)(
                                                                (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                                 >> 0x10U))
                                                      : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_2)) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                         ? (IData)(
                                                                   (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                                                    >> 8U))
                                                         : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_1)) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG)
                                                          ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata)
                                                          : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_0)))))))));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__83(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__83\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___T_7) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dOrig 
                = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dFirst_size;
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_1 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_1 
                = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_0 = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))) {
            vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_0 
                = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aToggle_r 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving 
        = ((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___GEN_11));
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_param 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_opcode 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_source 
            = (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                       >> 0xaU));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__84(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__84\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                     >> 9U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = (0xfU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                        << 0x1eU) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                     >> 2U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                     >> 1U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                       >> 0xeU));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])) 
                << 0x36U) | (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U])) 
                              << 0x16U) | ((QData)((IData)(
                                                           vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U])) 
                                           >> 0xaU)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__85(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__85\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser_auto_manager_in_d_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xaU));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_address 
            = (0x1fffffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                            >> 0xaU)));
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U])) 
                << 0x36U) | (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U])) 
                              << 0x16U) | ((QData)((IData)(
                                                           vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U])) 
                                           >> 0xaU)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_size 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xeU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_opcode 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_address 
            = (0x3ffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                            << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                         >> 0xaU)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__86(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__86\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_source 
            = (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                       >> 0xaU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_size 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xeU));
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value)));
        }
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source;
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight 
        = (1U & ((~ (IData)(vlTOPp->reset)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight) 
                                                | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                                                    & (0U 
                                                       == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                                    : 0U)) 
                                               & (~ 
                                                  ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != 
                                                       (7U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0x15U))))
                                                    ? 
                                                   (3U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (1U 
                                                        & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                           >> 0xaU))))
                                                    : 0U)))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__87(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__87\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
        vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                      ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                      : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                         >> 9U)));
        vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 1U;
        vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    }
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
                = (1U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1)));
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                = vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_1 
                = vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_2 
                = vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
        if ((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_3 
                = vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__90(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__90\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TCK;
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TMS;
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TDI;
    CData/*0:0*/ __Vfunc_jtag_tick__0__jtag_TRSTn;
    IData/*31:0*/ __Vfunc_jtag_tick__0__Vfuncout;
    // Body
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->TestHarness__DOT__SimJTAG__DOT__r_reset))) {
        vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit = 0U;
        vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK 
            = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK)));
        vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__tickCounterReg = 3U;
        vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__init_done_sticky = 0U;
    } else {
        vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__init_done_sticky 
            = (1U & ((~ (IData)(vlTOPp->reset)) | (IData)(vlTOPp->TestHarness__DOT__SimJTAG__DOT__init_done_sticky)));
        if ((vlTOPp->TestHarness__DOT__plusarg_reader__DOT__myplus 
             & (IData)(vlTOPp->TestHarness__DOT__SimJTAG__DOT__init_done_sticky))) {
            if ((0U == vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg)) {
                vlSymsp->TOP____024unit.__Vdpiimwrap_jtag_tick_TOP____024unit(__Vfunc_jtag_tick__0__jtag_TCK, __Vfunc_jtag_tick__0__jtag_TMS, __Vfunc_jtag_tick__0__jtag_TDI, __Vfunc_jtag_tick__0__jtag_TRSTn, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_controllerInternal__DOT__tdoReg), __Vfunc_jtag_tick__0__Vfuncout);
                vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK 
                    = __Vfunc_jtag_tick__0__jtag_TCK;
                vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS 
                    = __Vfunc_jtag_tick__0__jtag_TMS;
                vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI 
                    = __Vfunc_jtag_tick__0__jtag_TDI;
                vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit 
                    = __Vfunc_jtag_tick__0__Vfuncout;
            }
            vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__tickCounterReg 
                = vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterNxt;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__91(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__91\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0] = 0U;
    }
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxState 
        = vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__rxState;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__92(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__92\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__93(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__93\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__ram__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1;
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[8U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[8U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[9U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[9U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xaU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xbU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xcU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xdU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xeU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0xfU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x10U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x11U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x11U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x12U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x12U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x13U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x13U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x14U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x14U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x15U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x15U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x16U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x16U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x17U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x17U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x18U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x18U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x19U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x19U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1aU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1bU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1cU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1dU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1eU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes[0x1fU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_2[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done)
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___watchdog_T_3));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__94(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__94\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter1_1));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
            [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__95(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__95\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value;
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_5));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_2));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__96(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__96\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink
            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
            [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_address;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode 
            = ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                ? 1U : 4U);
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__97(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__97\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__98(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__98\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__99(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__99\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value;
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask 
            = (0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                         << 0x1fU) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                      >> 1U)));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1;
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask 
            = (0xffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                         << 0x1fU) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                      >> 1U)));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_5[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[8U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[8U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[9U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[9U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xaU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xbU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xcU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xdU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xeU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xfU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x10U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x11U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x11U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x12U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x12U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x13U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x13U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x14U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x14U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x15U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x15U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x16U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x16U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x17U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x17U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x18U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x18U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x19U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x19U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1aU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1bU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1cU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1dU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1eU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x1fU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[8U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[9U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[9U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xaU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xbU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xcU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xdU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xeU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xfU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x10U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x11U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x11U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x12U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x12U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x13U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x13U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x14U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x14U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x15U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x15U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x16U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x16U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x17U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x17U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x18U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x18U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x19U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x19U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1aU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1bU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1cU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1dU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1eU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x1fU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___inflight_T_2[7U]);
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done)
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___watchdog_T_3));
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__100(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__100\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_2)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1_2));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___watchdog_T_1));
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__101(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__101\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_T_2[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[1U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[2U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[3U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[4U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[5U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[6U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[6U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[7U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[8U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[8U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[9U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[9U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xaU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xbU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xcU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xdU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xeU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0xfU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x10U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x11U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x11U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x12U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x12U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x13U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x13U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x14U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x14U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x15U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x15U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x16U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x16U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x17U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x17U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x18U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x18U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x19U] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x19U]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1aU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1bU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1cU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1dU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1eU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU]);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes[0x1fU] 
        = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU]);
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___watchdog_T_1));
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter1_1));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__102(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__102\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size_1 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt 
            = (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                     >> 9U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__param 
            = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                      ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                      : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                         >> 0x12U)));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___inflight_sizes_T_2);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___inflight_T_2));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1 
                = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_1)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter1_1));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__103(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__103\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_1)
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size)) 
                                          >> 3U))) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source_1 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       >> 4U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__opcode 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__param 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xeU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source 
            = (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                       >> 0xaU));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__104(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__104\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__address 
            = (0x3ffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                            << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                         >> 0xaU)));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_2);
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_1 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___inflight_T_5));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___inflight_sizes_T_5);
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___inflight_T_2));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T)
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___watchdog_T_3));
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__105(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__105\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_param;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_sink;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor_io_in_d_bits_source;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_1)
                          ? ((0x800000U & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0xeU))) 
                                                   >> 3U))))
                          : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__106(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__106\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xeU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source 
            = (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                       >> 0xaU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__address 
            = (0x1fffffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                            >> 0xaU)));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_2);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_1 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_T_5));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->reset) ? VL_ULL(0) : vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_sizes_T_5);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___inflight_T_2));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->reset) ? 0U : ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T)
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_3));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___watchdog_T_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__107(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__107\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor_io_in_d_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__108(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__108\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source_1 
            = (0xfU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       >> 4U));
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_1)
                          ? ((0x800000U & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                        >> 0xeU))) 
                                                   >> 3U))))
                          : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__opcode 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__param 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__size 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xeU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source 
            = (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                       >> 0xaU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__address 
            = (0x1fffffffU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                               << 0x16U) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[2U] 
                                            >> 0xaU)));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__109(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__109\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes_1 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___inflight_sizes_T_5));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes 
        = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___inflight_sizes_T_2));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->reset) ? 0U : (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
                                           | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T))
                                           ? 0U : vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___watchdog_T_1));
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_2)
                              ? ((0x200000U & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xeU))) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__110(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__110\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode_1 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x15U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param_1 
            = (3U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size_1 
            = (0xfU & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                       >> 0xeU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source_1 
            = (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0xaU));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__sink 
            = (0xfU & ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                        << 0x1eU) | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                     >> 2U)));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__denied 
            = (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                     >> 1U));
    }
    vlTOPp->TestHarness__DOT__SimJTAG__DOT__init_done_sticky 
        = vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__init_done_sticky;
    vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg 
        = vlTOPp->__Vdly__TestHarness__DOT__SimJTAG__DOT__tickCounterReg;
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[1U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[1U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[2U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[2U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[3U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[3U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[4U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[4U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[5U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[5U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[6U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[6U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[7U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[7U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[8U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[8U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[9U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[9U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xaU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xaU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xbU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xbU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xcU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xcU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xdU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xdU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xeU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xeU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0xfU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0xfU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x10U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x10U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x11U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x11U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x12U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x12U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x13U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x13U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x14U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x14U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x15U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x15U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x16U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x16U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x17U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x17U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x18U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x18U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x19U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x19U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1aU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1aU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1bU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1bU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1cU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1cU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1dU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1dU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1eU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1eU];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_sizes_T_5[0x1fU] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1[0x1fU];
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_5 
        = (3U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackCount)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_1 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txDataIdx)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__111(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__111\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_9 
        = (7U & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxDataIdx)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT___value_T_3 
        = (0x7fU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__deq_ptr_value)));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__wrap_wrap_3 
        = (0x363U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount));
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT___wrap_value_T_7 
        = (0x3ffU & ((IData)(1U) + (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxBaudCount)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter1_4 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_first_4 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4));
    if (vlTOPp->reset) {
        vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txState = 0U;
    } else {
        if ((0U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState))) {
            if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackWrap) {
                vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txState = 1U;
            }
        } else {
            if ((1U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState))) {
                if (((IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___T_3) 
                     & (0x363U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txBaudCount)))) {
                    vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txState = 2U;
                }
            } else {
                vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txState 
                    = ((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState))
                        ? (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___GEN_12)
                        : (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT___GEN_14));
            }
        }
    }
    if ((0U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState))) {
        if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackWrap) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txData = 0U;
        }
    } else {
        if ((1U != (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState))) {
            if ((2U == (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState))) {
                if ((1U & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__full)))) {
                    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txData 
                        = vlTOPp->TestHarness__DOT__uart_sim_0__DOT___txData_T_1;
                }
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT___value_T_1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__enq_ptr_value = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__do_enq) {
            vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__enq_ptr_value 
                = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT___value_T_1;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__112(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__112\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    CData/*0:0*/ __Vtask_uart_tick__5__serial_out_ready;
    CData/*0:0*/ __Vtask_uart_tick__5__serial_in_valid;
    CData/*7:0*/ __Vtask_uart_tick__5__serial_in_bits;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid = 0U;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready = 0U;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fuartno = 0U;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid_reg = 0U;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_bits_reg = 0U;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready_reg = 0U;
    } else {
        vlSymsp->TOP____024unit.__Vdpiimwrap_uart_tick_TOP____024unit(
                                                                      (1U 
                                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__empty))), __Vtask_uart_tick__5__serial_out_ready, 
                                                                      vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram
                                                                      [vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__deq_ptr_value], __Vtask_uart_tick__5__serial_in_valid, 
                                                                      (1U 
                                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__rxfifo__DOT__full))), __Vtask_uart_tick__5__serial_in_bits);
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready 
            = __Vtask_uart_tick__5__serial_out_ready;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid 
            = __Vtask_uart_tick__5__serial_in_valid;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_bits 
            = __Vtask_uart_tick__5__serial_in_bits;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready_reg 
            = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fout_ready;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid_reg 
            = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_valid;
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_bits_reg 
            = vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fin_bits;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___T) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount 
                = vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT___wrap_value_T_1;
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__113(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__113\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1;
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___T) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb_io_out_bits_last)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___GEN_56));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_1)
                              ? (((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                   ? 0U : 4U) ? 0U : 
                                 (~ (0xffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                                  >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter1_1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__114(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__114\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr_size 
        = ((QData)((IData)((0xfffffff8U & (((IData)(1U) 
                                            + (IData)(
                                                      (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                       >> 3U))) 
                                           << 3U)))) 
           - vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1));
    vlTOPp->io_success = ((IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit_reg) 
                          | (1U == vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit));
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_23
                : vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg)
            : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_23);
    vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1 
        = (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
            ? ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                ? vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg
                : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_24)
            : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_24);
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__adapter__DOT__idx 
        = (((8U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)))
            ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_48)
            : (((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                & (IData)(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg))
                ? (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx) 
                    | (VL_ULL(0) == vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len))
                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30)
                    : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___idx_T_1))
                : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___GEN_30)));
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:2159:11
done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___T_6) 
                            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)) 
                           & (1U != vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)) 
                          & (0U != vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:2162: Assertion failed in %NTestHarness.ram.adapter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 2162, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:2170:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT___T_6) 
                            & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)) 
                           & (1U != vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)) 
                          & (0U != vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd)) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: Bad TSI command\n    at SerialAdapter.scala:230 assert(false.B, \"Bad TSI command\")\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__115(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__115\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dToggle = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___T_7) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__acknum))) {
                vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dToggle 
                    = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                             >> 3U));
            }
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum = 0U;
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__gennum 
                = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1;
        }
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied[vlTOPp->__Vdlyvdim0__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__116(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__116\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_1 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                >> 8U)));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_0 
            = (0xffU & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_3 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                >> 0x18U)));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_2 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                >> 0x10U)));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_5 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                >> 0x28U)));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_4 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                >> 0x20U)));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_7 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                >> 0x38U)));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_6 
            = (0xffU & (IData)((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
                                >> 0x30U)));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft 
        = ((IData)(vlTOPp->reset) ? 0U : (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__latch)
                                                 ? 
                                                (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                                    ? 
                                                   (~ 
                                                    (0x3ffU 
                                                     & (((IData)(0x3fU) 
                                                         << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_bits_size)) 
                                                        >> 3U)))
                                                    : 0U)
                                                   : 0U) 
                                                 | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)
                                                     ? 
                                                    (~ 
                                                     (0x3ffU 
                                                      & (((IData)(0x3fU) 
                                                          << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_in_d_bits_size)) 
                                                         >> 3U)))
                                                     : 0U))
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___beatsLeft_T_4))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__117(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__117\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum = 0U;
    } else {
        if (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid))) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__gennum 
                = vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__old_gennum1;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT___T_7) {
            if ((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__acknum))) {
                vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__dToggle 
                    = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                             >> 3U));
            }
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___GEN_24));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                                >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter1_1)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_1)
                              ? ((0x200000U & vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                                 >> 0xeU))) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat)))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___GEN_0)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__118(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__118\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt 
            = (1U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                     >> 9U));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___T) {
            vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount 
                = vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___wrap_value_T_1;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__119(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__119\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
         & ((IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx) 
            != (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__widx_widx_gray_io_q)))) {
        vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
            = ((7U == (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index))
                ? vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_7
                : ((6U == (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index))
                    ? vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_6
                    : ((5U == (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index))
                        ? vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_5
                        : ((4U == (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index))
                            ? vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_4
                            : ((3U == (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index))
                                ? vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_3
                                : ((2U == (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index))
                                    ? vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_2
                                    : ((1U == (IData)(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index))
                                        ? vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_1
                                        : vlTOPp->TestHarness__DOT__bits_out_queue__DOT__source__DOT__mem_0)))))));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__121(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__121\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__122(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__122\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterNxt 
        = ((0U == vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg)
            ? 3U : (vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg 
                    - (IData)(1U)));
    vlTOPp->TestHarness__DOT__SimJTAG__DOT__r_reset 
        = vlTOPp->reset;
    vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txState 
        = vlTOPp->__Vdly__TestHarness__DOT__uart_sim_0__DOT__txState;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0) {
        vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram[vlTOPp->__Vdlyvdim0__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__uart_sim_0__DOT__txfifo__DOT__ram__v0;
    }
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[0U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[0U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[1U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[1U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[2U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[2U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[3U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[3U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[4U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[4U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[5U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[5U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[6U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[6U];
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___inflight_T_5[7U] 
        = vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1[7U];
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__123(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__123\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)));
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read 
            = (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data));
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter1));
        }
    }
    if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT___T_18) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size 
            = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter1));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__124(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__124\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_2 
        = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2) 
                     - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_2 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1)));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source
        [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ptr_match 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value) 
           == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first)
                              ? (((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                   ? 0U : 4U) ? 0U : 
                                 (~ (0xffffffU & (((IData)(0xfffU) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter_auto_out_a_bits_size)) 
                                                  >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__125(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__125\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0_RW0_rdata 
        = (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram
                            [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0])) 
            << 0x38U) | (((QData)((IData)(((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram
                                            [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0] 
                                            << 0x18U) 
                                           | ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram
                                               [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0] 
                                               << 0x10U) 
                                              | ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram
                                                  [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0] 
                                                  << 8U) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram
                                                 [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0]))))) 
                          << 0x18U) | (QData)((IData)(
                                                      ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram
                                                        [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0] 
                                                        << 0x10U) 
                                                       | ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram
                                                           [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0] 
                                                           << 8U) 
                                                          | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram
                                                          [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]))))));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match) 
           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty 
        = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ptr_match) 
           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__126(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__126\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___watchdog_T_3 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1_2 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_2 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter1));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter1));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter1_1 
        = (1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_1 
        = (1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter1));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__127(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__127\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first)) 
                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter1));
        }
    }
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & ((~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready) 
                                              & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid)) 
                                             & (0U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___GEN_0)));
    if (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___T) 
         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__old_gennum1)))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param 
            = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                     >> 0x12U));
    }
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter_1));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___watchdog_T_1 
        = ((IData)(1U) + vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog);
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter1_1 
        = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1) 
                 - (IData)(1U)));
    vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_1 
        = (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter_1));
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter 
                = (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first)
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor_io_in_d_bits_size)) 
                                          >> 3U))) : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter1)));
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter 
                = ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first)
                    ? 0U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_counter1));
        }
    }
}
