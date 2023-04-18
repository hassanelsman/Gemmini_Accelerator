// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__63(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__63\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0 = 0U;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14331:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14334: Assertion failed in %NTestHarness.ram.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 14334, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14342:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0)) 
                                     | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14355:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0) 
                                      | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14358: Assertion failed in %NTestHarness.ram.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 14358, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14366:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                     | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_0) 
                                        | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__earlyWinner_1)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14379:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                       | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                   | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_10))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14382: Assertion failed in %NTestHarness.ram.xbar\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 14382, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14390:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_in_d_valid) 
                                         | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid))) 
                                     | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT___T_10))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__64(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__64\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0 = 0U;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:24535:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)) 
                                   | (0xffU == (0xffU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask)
                                                    : 
                                                   ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                       >> 1U))))))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:24538: Assertion failed in %NTestHarness.ram.fragmenter_1\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 24538, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:24546:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)) 
                                     | (0xffU == (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask)
                                                      : 
                                                     ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                       << 0x1fU) 
                                                      | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                         >> 1U))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:312 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
    vlTOPp->__Vdly__TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1 
        = vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:21896:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                      >> 2U))) & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:21899: Assertion failed in %NTestHarness.ram.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 21899, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:21907:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                     | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                        >> 2U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:309 assert (!repeater.io.full || !aHasData)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:21919:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                   | (0xffU == (0xffU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                    : 
                                                   ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                     << 0x1fU) 
                                                    | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                       >> 1U))))))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:21922: Assertion failed in %NTestHarness.ram.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 21922, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:21930:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                     | (0xffU == (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                                      ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                      : 
                                                     ((vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[1U] 
                                                       << 0x1fU) 
                                                      | (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                                         >> 1U))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:312 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__65(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__65\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp243[5];
    WData/*159:0*/ __Vtemp244[5];
    WData/*159:0*/ __Vtemp245[5];
    WData/*159:0*/ __Vtemp246[5];
    WData/*639:0*/ __Vtemp251[20];
    WData/*639:0*/ __Vtemp252[20];
    WData/*639:0*/ __Vtemp257[20];
    WData/*639:0*/ __Vtemp258[20];
    WData/*639:0*/ __Vtemp263[20];
    WData/*639:0*/ __Vtemp264[20];
    WData/*639:0*/ __Vtemp269[20];
    WData/*639:0*/ __Vtemp270[20];
    WData/*639:0*/ __Vtemp275[20];
    WData/*639:0*/ __Vtemp276[20];
    WData/*639:0*/ __Vtemp281[20];
    WData/*639:0*/ __Vtemp282[20];
    WData/*639:0*/ __Vtemp287[20];
    WData/*639:0*/ __Vtemp288[20];
    WData/*639:0*/ __Vtemp293[20];
    WData/*639:0*/ __Vtemp294[20];
    WData/*639:0*/ __Vtemp297[20];
    WData/*639:0*/ __Vtemp300[20];
    WData/*639:0*/ __Vtemp301[20];
    WData/*639:0*/ __Vtemp304[20];
    WData/*639:0*/ __Vtemp307[20];
    WData/*639:0*/ __Vtemp308[20];
    WData/*255:0*/ __Vtemp309[8];
    WData/*255:0*/ __Vtemp310[8];
    WData/*255:0*/ __Vtemp315[8];
    WData/*255:0*/ __Vtemp316[8];
    WData/*255:0*/ __Vtemp321[8];
    WData/*255:0*/ __Vtemp322[8];
    WData/*255:0*/ __Vtemp327[8];
    WData/*255:0*/ __Vtemp328[8];
    WData/*255:0*/ __Vtemp333[8];
    WData/*255:0*/ __Vtemp334[8];
    WData/*255:0*/ __Vtemp339[8];
    WData/*255:0*/ __Vtemp340[8];
    WData/*159:0*/ __Vtemp345[5];
    WData/*159:0*/ __Vtemp346[5];
    WData/*639:0*/ __Vtemp349[20];
    WData/*639:0*/ __Vtemp352[20];
    WData/*639:0*/ __Vtemp353[20];
    WData/*639:0*/ __Vtemp356[20];
    WData/*639:0*/ __Vtemp359[20];
    WData/*639:0*/ __Vtemp360[20];
    // Body
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14895:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14898: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 14898, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14906:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14919:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14922: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 14922, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14930:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14943:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14946: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 14946, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14954:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14967:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14970: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 14970, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14978:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14991:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:14994: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 14994, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15002:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15015:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15018: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15018, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15026:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15039:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15042: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15042, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15050:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15063:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15066: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15066, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15074:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15087:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15090: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15090, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15098:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15111:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15114: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15114, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15122:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15135:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15138: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15138, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15146:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15159:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15162: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15162, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15170:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15183:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15186: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15186, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15194:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15207:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15210: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15210, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15218:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15231:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15234: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15234, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15242:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15255:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15258: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15258, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15266:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15279:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15282: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15282, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15290:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15303:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15306: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15306, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15314:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15327:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0x3ffff000U & (0x10000000U 
                                                ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15330: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15330, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15338:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0x3ffff000U & (0x10000000U 
                                                  ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15351:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15354: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15354, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15362:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15375:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15378: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15378, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15386:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15399:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15402: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15402, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15410:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15423:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15426: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15426, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15434:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15447:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15450: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15450, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15458:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15471:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                             & (0U == (0x3ffff000U 
                                       & (0x10000000U 
                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15474: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15474, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15482:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               & (0U == (0x3ffff000U 
                                         & (0x10000000U 
                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15495:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15498: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15498, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15506:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15519:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15522: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15522, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15530:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15543:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15546: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15546, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15554:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15567:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15570: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15570, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15578:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15591:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                             & (0U == (0x3ffff000U 
                                       & (0x10000000U 
                                          ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15594: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15594, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15602:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((0x9fU >= (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                               & (0U == (0x3ffff000U 
                                         & (0x10000000U 
                                            ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15615:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15618: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15618, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15626:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15639:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15642: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15642, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15650:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15663:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15666: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15666, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15674:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15687:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15690: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15690, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15698:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15711:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15714: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15714, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15722:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15735:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15738: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15738, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15746:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15759:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15762: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15762, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15770:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15783:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15786: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15786, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15794:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (4U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15807:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15810: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15810, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15818:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15831:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15834: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15834, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15842:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15855:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15858: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15858, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15866:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15879:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15882: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15882, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15890:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15903:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15906: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15906, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15914:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15927:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15930: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15930, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15938:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15951:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15954: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15954, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15962:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15975:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15978: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 15978, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15986:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:15999:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16002: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16002, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16010:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16023:11
done_reset        
    ) {
        if (VL_UNLIKELY(((1U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16026: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16026, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16034:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (1U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16047:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16050: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16050, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16058:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16071:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16074: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16074, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16082:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16095:11
done_reset        
    ) {
        if (VL_UNLIKELY(((6U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                         & ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16098: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16098, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16106:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (6U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16119:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16122: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16122, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16130:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16143:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16146: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16146, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16154:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16167:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16170: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16170, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16178:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16191:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16194: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16194, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16202:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16215:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16218: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16218, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16226:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16239:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16242: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16242, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16250:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16263:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16266: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16266, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16274:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16287:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16290: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16290, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16298:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16311:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16314: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16314, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16322:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16335:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16338: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16338, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16346:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16359:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16362: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16362, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16370:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16383:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16386: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16386, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16394:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16407:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16410: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16410, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16418:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16431:11
done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16434: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16434, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16442:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16455:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16458: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16458, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16466:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16479:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16482: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16482, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16490:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16503:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16506: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16506, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16514:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16527:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16530: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16530, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16538:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16551:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16554: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16554, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16562:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16575:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16578: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16578, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16586:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16599:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16602: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16602, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16610:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16623:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16626: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16626, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16634:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16647:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16650: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16650, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16658:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16671:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16674: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16674, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16682:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16695:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16698: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16698, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16706:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16719:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16722: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16722, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16730:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16743:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16746: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16746, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16754:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16767:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16770: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16770, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16778:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16791:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16794: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16794, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16802:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16815:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16818: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16818, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16826:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16839:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16842: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16842, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16850:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is denied (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16896:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16899: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16899, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16907:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16920:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16923: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16923, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16931:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_param) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16944:11
done_reset        
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16947: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16947, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16955:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16968:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16971: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16971, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16979:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16992:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                          != vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:16995: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 16995, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17003:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_address 
                            != vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17016:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17019: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17019, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17027:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17040:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17043: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17043, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17051:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17064:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17067: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17067, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17075:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17088:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17091: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17091, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17099:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17112:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17115: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17115, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17123:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17136:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17139: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17139, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17147:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17160:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp243, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((__Vtemp243[0U] & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                           & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17163: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17163, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17171:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp244, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_done) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & __Vtemp244[0U]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17184:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp245, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((~ (__Vtemp245[0U] | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                               & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                                  == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17187: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17187, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17195:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp246, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (__Vtemp246[0U] | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17208:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                   ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                            ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
                             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30)))))) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17211: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17211, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17219:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                              ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30)))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                       ? 4U : ((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                                ? 5U
                                                : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17232:11
done_reset        
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17235: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17235, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17243:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__aFrag)) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17256:11
done_reset        
    ) {
        __Vtemp251[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp251[1U] = 0U;
        __Vtemp251[2U] = 0U;
        __Vtemp251[3U] = 0U;
        __Vtemp251[4U] = 0U;
        __Vtemp251[5U] = 0U;
        __Vtemp251[6U] = 0U;
        __Vtemp251[7U] = 0U;
        __Vtemp251[8U] = 0U;
        __Vtemp251[9U] = 0U;
        __Vtemp251[0xaU] = 0U;
        __Vtemp251[0xbU] = 0U;
        __Vtemp251[0xcU] = 0U;
        __Vtemp251[0xdU] = 0U;
        __Vtemp251[0xeU] = 0U;
        __Vtemp251[0xfU] = 0U;
        __Vtemp251[0x10U] = 0U;
        __Vtemp251[0x11U] = 0U;
        __Vtemp251[0x12U] = 0U;
        __Vtemp251[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp252, __Vtemp251);
        __Vtemp257[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp257[1U] = 0U;
        __Vtemp257[2U] = 0U;
        __Vtemp257[3U] = 0U;
        __Vtemp257[4U] = 0U;
        __Vtemp257[5U] = 0U;
        __Vtemp257[6U] = 0U;
        __Vtemp257[7U] = 0U;
        __Vtemp257[8U] = 0U;
        __Vtemp257[9U] = 0U;
        __Vtemp257[0xaU] = 0U;
        __Vtemp257[0xbU] = 0U;
        __Vtemp257[0xcU] = 0U;
        __Vtemp257[0xdU] = 0U;
        __Vtemp257[0xeU] = 0U;
        __Vtemp257[0xfU] = 0U;
        __Vtemp257[0x10U] = 0U;
        __Vtemp257[0x11U] = 0U;
        __Vtemp257[0x12U] = 0U;
        __Vtemp257[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp258, __Vtemp257);
        __Vtemp263[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp263[1U] = 0U;
        __Vtemp263[2U] = 0U;
        __Vtemp263[3U] = 0U;
        __Vtemp263[4U] = 0U;
        __Vtemp263[5U] = 0U;
        __Vtemp263[6U] = 0U;
        __Vtemp263[7U] = 0U;
        __Vtemp263[8U] = 0U;
        __Vtemp263[9U] = 0U;
        __Vtemp263[0xaU] = 0U;
        __Vtemp263[0xbU] = 0U;
        __Vtemp263[0xcU] = 0U;
        __Vtemp263[0xdU] = 0U;
        __Vtemp263[0xeU] = 0U;
        __Vtemp263[0xfU] = 0U;
        __Vtemp263[0x10U] = 0U;
        __Vtemp263[0x11U] = 0U;
        __Vtemp263[0x12U] = 0U;
        __Vtemp263[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp264, __Vtemp263);
        __Vtemp269[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp269[1U] = 0U;
        __Vtemp269[2U] = 0U;
        __Vtemp269[3U] = 0U;
        __Vtemp269[4U] = 0U;
        __Vtemp269[5U] = 0U;
        __Vtemp269[6U] = 0U;
        __Vtemp269[7U] = 0U;
        __Vtemp269[8U] = 0U;
        __Vtemp269[9U] = 0U;
        __Vtemp269[0xaU] = 0U;
        __Vtemp269[0xbU] = 0U;
        __Vtemp269[0xcU] = 0U;
        __Vtemp269[0xdU] = 0U;
        __Vtemp269[0xeU] = 0U;
        __Vtemp269[0xfU] = 0U;
        __Vtemp269[0x10U] = 0U;
        __Vtemp269[0x11U] = 0U;
        __Vtemp269[0x12U] = 0U;
        __Vtemp269[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp270, __Vtemp269);
        if (VL_UNLIKELY(((~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              == ((7U == (7U & __Vtemp252[0U]))
                                   ? 4U : ((6U == (7U 
                                                   & __Vtemp258[0U]))
                                            ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                             | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & __Vtemp264[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp270[0U]))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46)))))) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17259: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17259, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17267:11
verbose&&done_reset        
    ) {
        __Vtemp275[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp275[1U] = 0U;
        __Vtemp275[2U] = 0U;
        __Vtemp275[3U] = 0U;
        __Vtemp275[4U] = 0U;
        __Vtemp275[5U] = 0U;
        __Vtemp275[6U] = 0U;
        __Vtemp275[7U] = 0U;
        __Vtemp275[8U] = 0U;
        __Vtemp275[9U] = 0U;
        __Vtemp275[0xaU] = 0U;
        __Vtemp275[0xbU] = 0U;
        __Vtemp275[0xcU] = 0U;
        __Vtemp275[0xdU] = 0U;
        __Vtemp275[0xeU] = 0U;
        __Vtemp275[0xfU] = 0U;
        __Vtemp275[0x10U] = 0U;
        __Vtemp275[0x11U] = 0U;
        __Vtemp275[0x12U] = 0U;
        __Vtemp275[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp276, __Vtemp275);
        __Vtemp281[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp281[1U] = 0U;
        __Vtemp281[2U] = 0U;
        __Vtemp281[3U] = 0U;
        __Vtemp281[4U] = 0U;
        __Vtemp281[5U] = 0U;
        __Vtemp281[6U] = 0U;
        __Vtemp281[7U] = 0U;
        __Vtemp281[8U] = 0U;
        __Vtemp281[9U] = 0U;
        __Vtemp281[0xaU] = 0U;
        __Vtemp281[0xbU] = 0U;
        __Vtemp281[0xcU] = 0U;
        __Vtemp281[0xdU] = 0U;
        __Vtemp281[0xeU] = 0U;
        __Vtemp281[0xfU] = 0U;
        __Vtemp281[0x10U] = 0U;
        __Vtemp281[0x11U] = 0U;
        __Vtemp281[0x12U] = 0U;
        __Vtemp281[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp282, __Vtemp281);
        __Vtemp287[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp287[1U] = 0U;
        __Vtemp287[2U] = 0U;
        __Vtemp287[3U] = 0U;
        __Vtemp287[4U] = 0U;
        __Vtemp287[5U] = 0U;
        __Vtemp287[6U] = 0U;
        __Vtemp287[7U] = 0U;
        __Vtemp287[8U] = 0U;
        __Vtemp287[9U] = 0U;
        __Vtemp287[0xaU] = 0U;
        __Vtemp287[0xbU] = 0U;
        __Vtemp287[0xcU] = 0U;
        __Vtemp287[0xdU] = 0U;
        __Vtemp287[0xeU] = 0U;
        __Vtemp287[0xfU] = 0U;
        __Vtemp287[0x10U] = 0U;
        __Vtemp287[0x11U] = 0U;
        __Vtemp287[0x12U] = 0U;
        __Vtemp287[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp288, __Vtemp287);
        __Vtemp293[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp293[1U] = 0U;
        __Vtemp293[2U] = 0U;
        __Vtemp293[3U] = 0U;
        __Vtemp293[4U] = 0U;
        __Vtemp293[5U] = 0U;
        __Vtemp293[6U] = 0U;
        __Vtemp293[7U] = 0U;
        __Vtemp293[8U] = 0U;
        __Vtemp293[9U] = 0U;
        __Vtemp293[0xaU] = 0U;
        __Vtemp293[0xbU] = 0U;
        __Vtemp293[0xcU] = 0U;
        __Vtemp293[0xdU] = 0U;
        __Vtemp293[0xeU] = 0U;
        __Vtemp293[0xfU] = 0U;
        __Vtemp293[0x10U] = 0U;
        __Vtemp293[0x11U] = 0U;
        __Vtemp293[0x12U] = 0U;
        __Vtemp293[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp294, __Vtemp293);
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & __Vtemp276[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp282[0U]))
                                              ? 4U : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46)))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == (7U & 
                                              __Vtemp288[0U]))
                                       ? 4U : ((6U 
                                                == 
                                                (7U 
                                                 & __Vtemp294[0U]))
                                                ? 5U
                                                : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17280:11
done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp297, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp300[0U] = (7U & (__Vtemp297[0U] >> 1U));
        __Vtemp300[1U] = 0U;
        __Vtemp300[2U] = 0U;
        __Vtemp300[3U] = 0U;
        __Vtemp300[4U] = 0U;
        __Vtemp300[5U] = 0U;
        __Vtemp300[6U] = 0U;
        __Vtemp300[7U] = 0U;
        __Vtemp300[8U] = 0U;
        __Vtemp300[9U] = 0U;
        __Vtemp300[0xaU] = 0U;
        __Vtemp300[0xbU] = 0U;
        __Vtemp300[0xcU] = 0U;
        __Vtemp300[0xdU] = 0U;
        __Vtemp300[0xeU] = 0U;
        __Vtemp300[0xfU] = 0U;
        __Vtemp300[0x10U] = 0U;
        __Vtemp300[0x11U] = 0U;
        __Vtemp300[0x12U] = 0U;
        __Vtemp300[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp301, __Vtemp300);
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0xfU & __Vtemp301[0U])) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                      == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17283: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17283, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17291:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp304, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp307[0U] = (7U & (__Vtemp304[0U] >> 1U));
        __Vtemp307[1U] = 0U;
        __Vtemp307[2U] = 0U;
        __Vtemp307[3U] = 0U;
        __Vtemp307[4U] = 0U;
        __Vtemp307[5U] = 0U;
        __Vtemp307[6U] = 0U;
        __Vtemp307[7U] = 0U;
        __Vtemp307[8U] = 0U;
        __Vtemp307[9U] = 0U;
        __Vtemp307[0xaU] = 0U;
        __Vtemp307[0xbU] = 0U;
        __Vtemp307[0xcU] = 0U;
        __Vtemp307[0xdU] = 0U;
        __Vtemp307[0xeU] = 0U;
        __Vtemp307[0xfU] = 0U;
        __Vtemp307[0x10U] = 0U;
        __Vtemp307[0x11U] = 0U;
        __Vtemp307[0x12U] = 0U;
        __Vtemp307[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp308, __Vtemp307);
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                    == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xfU & __Vtemp308[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17304:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready)) 
                             | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full)))) 
                         & (((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                               & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17307: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17307, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17315:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                            & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source) 
                               == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_d_ready)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__full))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17326:11
done_reset        
    ) {
        __Vtemp309[0U] = 1U;
        __Vtemp309[1U] = 0U;
        __Vtemp309[2U] = 0U;
        __Vtemp309[3U] = 0U;
        __Vtemp309[4U] = 0U;
        __Vtemp309[5U] = 0U;
        __Vtemp309[6U] = 0U;
        __Vtemp309[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp310, __Vtemp309, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        __Vtemp315[0U] = 1U;
        __Vtemp315[1U] = 0U;
        __Vtemp315[2U] = 0U;
        __Vtemp315[3U] = 0U;
        __Vtemp315[4U] = 0U;
        __Vtemp315[5U] = 0U;
        __Vtemp315[6U] = 0U;
        __Vtemp315[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp316, __Vtemp315, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp321[0U] = 1U;
        __Vtemp321[1U] = 0U;
        __Vtemp321[2U] = 0U;
        __Vtemp321[3U] = 0U;
        __Vtemp321[4U] = 0U;
        __Vtemp321[5U] = 0U;
        __Vtemp321[6U] = 0U;
        __Vtemp321[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp322, __Vtemp321, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((1U & ((~ ((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp310[0U]
                                                 : 0U) 
                                               ^ ((
                                                   ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp316[0U]
                                                   : 0U)) 
                                              | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp310[1U]
                                                   : 0U) 
                                                 ^ 
                                                 ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp316[1U]
                                                   : 0U))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 __Vtemp310[2U]
                                                  : 0U) 
                                                ^ (
                                                   (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp316[2U]
                                                    : 0U))) 
                                            | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                 ? 
                                                __Vtemp310[3U]
                                                 : 0U) 
                                               ^ ((
                                                   ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp316[3U]
                                                   : 0U))) 
                                           | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                ? __Vtemp310[4U]
                                                : 0U) 
                                              ^ (((
                                                   (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                  & (6U 
                                                     != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                  ? 
                                                 __Vtemp316[4U]
                                                  : 0U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp322[0U]
                                                       : 0U) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp322[1U]
                                                         : 0U)) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp322[2U]
                                                        : 0U)) 
                                                   | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                       & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                       ? 
                                                      __Vtemp322[3U]
                                                       : 0U)) 
                                                  | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                      ? 
                                                     __Vtemp322[4U]
                                                      : 0U))))))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17329: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17329, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17337:11
verbose&&done_reset        
    ) {
        __Vtemp327[0U] = 1U;
        __Vtemp327[1U] = 0U;
        __Vtemp327[2U] = 0U;
        __Vtemp327[3U] = 0U;
        __Vtemp327[4U] = 0U;
        __Vtemp327[5U] = 0U;
        __Vtemp327[6U] = 0U;
        __Vtemp327[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp328, __Vtemp327, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        __Vtemp333[0U] = 1U;
        __Vtemp333[1U] = 0U;
        __Vtemp333[2U] = 0U;
        __Vtemp333[3U] = 0U;
        __Vtemp333[4U] = 0U;
        __Vtemp333[5U] = 0U;
        __Vtemp333[6U] = 0U;
        __Vtemp333[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp334, __Vtemp333, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        __Vtemp339[0U] = 1U;
        __Vtemp339[1U] = 0U;
        __Vtemp339[2U] = 0U;
        __Vtemp339[3U] = 0U;
        __Vtemp339[4U] = 0U;
        __Vtemp339[5U] = 0U;
        __Vtemp339[6U] = 0U;
        __Vtemp339[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp340, __Vtemp339, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_auto_out_a_bits_source));
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ ((0U != ((((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp328[0U]
                                                   : 0U) 
                                                 ^ 
                                                 ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp334[0U]
                                                   : 0U)) 
                                                | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                     ? 
                                                    __Vtemp328[1U]
                                                     : 0U) 
                                                   ^ 
                                                   ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                      & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                     & (6U 
                                                        != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                     ? 
                                                    __Vtemp334[1U]
                                                     : 0U))) 
                                               | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                    ? 
                                                   __Vtemp328[2U]
                                                    : 0U) 
                                                  ^ 
                                                  ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp334[2U]
                                                    : 0U))) 
                                              | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  __Vtemp328[3U]
                                                   : 0U) 
                                                 ^ 
                                                 ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                    & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                   & (6U 
                                                      != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                   ? 
                                                  __Vtemp334[3U]
                                                   : 0U))) 
                                             | ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                  & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                  ? 
                                                 __Vtemp328[4U]
                                                  : 0U) 
                                                ^ (
                                                   (((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                     & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))) 
                                                    & (6U 
                                                       != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                                    ? 
                                                   __Vtemp334[4U]
                                                    : 0U)))) 
                                     | (~ (IData)((0U 
                                                   != 
                                                   (((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp340[0U]
                                                         : 0U) 
                                                       | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                           ? 
                                                          __Vtemp340[1U]
                                                           : 0U)) 
                                                      | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                          & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                          ? 
                                                         __Vtemp340[2U]
                                                          : 0U)) 
                                                     | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                         & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                         ? 
                                                        __Vtemp340[3U]
                                                         : 0U)) 
                                                    | (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                                        & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))
                                                        ? 
                                                       __Vtemp340[4U]
                                                        : 0U))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17350:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17353: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17353, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17361:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != 
                                                  ((((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                                                      | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[1U]) 
                                                     | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[2U]) 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[3U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight[4U])))) 
                                      | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                     | (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog 
                                        < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17374:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp345, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY(((~ __Vtemp345[0U]) & ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                                                & (6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17377: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17377, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17385:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp346, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ __Vtemp346[0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17398:11
done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp349, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp352[0U] = (7U & (__Vtemp349[0U] >> 1U));
        __Vtemp352[1U] = 0U;
        __Vtemp352[2U] = 0U;
        __Vtemp352[3U] = 0U;
        __Vtemp352[4U] = 0U;
        __Vtemp352[5U] = 0U;
        __Vtemp352[6U] = 0U;
        __Vtemp352[7U] = 0U;
        __Vtemp352[8U] = 0U;
        __Vtemp352[9U] = 0U;
        __Vtemp352[0xaU] = 0U;
        __Vtemp352[0xbU] = 0U;
        __Vtemp352[0xcU] = 0U;
        __Vtemp352[0xdU] = 0U;
        __Vtemp352[0xeU] = 0U;
        __Vtemp352[0xfU] = 0U;
        __Vtemp352[0x10U] = 0U;
        __Vtemp352[0x11U] = 0U;
        __Vtemp352[0x12U] = 0U;
        __Vtemp352[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp353, __Vtemp352);
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0xfU & __Vtemp353[0U])) 
                         & ((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17401: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17401, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17409:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp356, vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 2U));
        __Vtemp359[0U] = (7U & (__Vtemp356[0U] >> 1U));
        __Vtemp359[1U] = 0U;
        __Vtemp359[2U] = 0U;
        __Vtemp359[3U] = 0U;
        __Vtemp359[4U] = 0U;
        __Vtemp359[5U] = 0U;
        __Vtemp359[6U] = 0U;
        __Vtemp359[7U] = 0U;
        __Vtemp359[8U] = 0U;
        __Vtemp359[9U] = 0U;
        __Vtemp359[0xaU] = 0U;
        __Vtemp359[0xbU] = 0U;
        __Vtemp359[0xcU] = 0U;
        __Vtemp359[0xdU] = 0U;
        __Vtemp359[0xeU] = 0U;
        __Vtemp359[0xfU] = 0U;
        __Vtemp359[0x10U] = 0U;
        __Vtemp359[0x11U] = 0U;
        __Vtemp359[0x12U] = 0U;
        __Vtemp359[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp360, __Vtemp359);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xfU & __Vtemp360[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17422:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17425: Assertion failed in %NTestHarness.ram.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 17425, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:17433:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != 
                                                  ((((vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
                                                      | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[1U]) 
                                                     | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[2U]) 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[3U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1[4U])))) 
                                      | (0U == vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                     | (vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1 
                                        < vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:45)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__66(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__66\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp361[5];
    WData/*159:0*/ __Vtemp362[5];
    WData/*159:0*/ __Vtemp363[5];
    WData/*159:0*/ __Vtemp364[5];
    WData/*639:0*/ __Vtemp369[20];
    WData/*639:0*/ __Vtemp370[20];
    WData/*639:0*/ __Vtemp375[20];
    WData/*639:0*/ __Vtemp376[20];
    WData/*639:0*/ __Vtemp381[20];
    WData/*639:0*/ __Vtemp382[20];
    WData/*639:0*/ __Vtemp387[20];
    WData/*639:0*/ __Vtemp388[20];
    WData/*639:0*/ __Vtemp393[20];
    WData/*639:0*/ __Vtemp394[20];
    WData/*639:0*/ __Vtemp399[20];
    WData/*639:0*/ __Vtemp400[20];
    WData/*639:0*/ __Vtemp405[20];
    WData/*639:0*/ __Vtemp406[20];
    WData/*639:0*/ __Vtemp411[20];
    WData/*639:0*/ __Vtemp412[20];
    WData/*639:0*/ __Vtemp415[20];
    WData/*639:0*/ __Vtemp418[20];
    WData/*639:0*/ __Vtemp419[20];
    WData/*639:0*/ __Vtemp422[20];
    WData/*639:0*/ __Vtemp425[20];
    WData/*639:0*/ __Vtemp426[20];
    // Body
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9129:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9132: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9132, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9140:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9153:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9156: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9156, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9164:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9177:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9180: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9180, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9188:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9201:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9204: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9204, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9212:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9225:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9228: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9228, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9236:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9249:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9252: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9252, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9260:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9273:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9276: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9276, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9284:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9297:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                          & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9300: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9300, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9308:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9321:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9324: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9324, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9332:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9345:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9348: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9348, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9356:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9369:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9372: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9372, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9380:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9393:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9396: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9396, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9404:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U > (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9417:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9420: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9420, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9428:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9441:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9444: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9444, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9452:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (2U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9465:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                        : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9468: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9468, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9476:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                          : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9489:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9492: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9492, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9500:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0xffU & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9513:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                          & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9516: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9516, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9524:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9537:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9540: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9540, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9548:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9561:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0x70000U & (0x20000U 
                                             ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9564: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9564, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9572:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (0x70000U & (0x20000U 
                                               ^ vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9585:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9588: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9588, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9596:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9609:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9612: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9612, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9620:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9633:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                        : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9636: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9636, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9644:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                          : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9657:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9660: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9660, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9668:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9681:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                          & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9684: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9684, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9692:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9705:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9708: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9708, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9716:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9729:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9732: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9732, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9740:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9753:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9756: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9756, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9764:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9777:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                        : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9780: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9780, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9788:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                          : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9801:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9804: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9804, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9812:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9825:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9828: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9828, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9836:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9849:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9852: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9852, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9860:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9873:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9876: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9876, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9884:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9897:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                        ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                        : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                           >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9900: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9900, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9908:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                          : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                             >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9921:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9924: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9924, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9932:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9945:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9948: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9948, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9956:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9969:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9972: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9972, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9980:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9993:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:9996: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 9996, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10004:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10017:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10020: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10020, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10028:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (4U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10041:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10044: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10044, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10052:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10065:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10068: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10068, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10076:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10089:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10092: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10092, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10100:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10113:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10116: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10116, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10124:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10137:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10140: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10140, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10148:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (3U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10161:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10164: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10164, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10172:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10185:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10188: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10188, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10196:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                         & (~ (IData)(vlTOPp->reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10209:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10212: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10212, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10220:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10233:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                       & (~ (0x3fU 
                                             & ((IData)(7U) 
                                                << 
                                                (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10236: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10236, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10244:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0U != (7U & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                                         & (~ (0x3fU 
                                               & ((IData)(7U) 
                                                  << 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10257:11
done_reset        
    ) {
        if (VL_UNLIKELY(((1U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                          >> 0x12U)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10260: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10260, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10268:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (1U < (7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                         ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                         : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                            >> 0x12U))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10281:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10284: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10284, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10292:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10305:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                           ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                           : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                              >> 9U)) & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                          & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                                         & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10308: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10308, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10316:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                             ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                             : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[0U] 
                                >> 9U))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10340:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source)) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10343: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10343, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10351:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (0x9fU < (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10430:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__opcode)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10433: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10433, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10441:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10454:11
done_reset        
    ) {
        if (VL_UNLIKELY((((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                  ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                  : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                     >> 0x12U))) != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10457: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10457, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10465:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                    ? (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                    : (vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT___io_out_bits_T[3U] 
                                       >> 0x12U))) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10478:11
done_reset        
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10481: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10481, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10489:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10502:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10505: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10505, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10513:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10526:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                          != vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__address) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10529: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10529, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10537:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_address 
                            != vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10572:11
done_reset        
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size_1)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10575: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10575, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10583:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10596:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                          != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source_1)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10599: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10599, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10607:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                            != (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10642:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp361, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY((__Vtemp361[0U] & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                                           & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10645: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10645, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10653:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp362, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & __Vtemp362[0U]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10666:11
done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp363, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY(((~ (__Vtemp363[0U] | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10669: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10669, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10677:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(160,160,8, __Vtemp364, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source));
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                           & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ (__Vtemp364[0U] | ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10690:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                      ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30)))) 
                             | (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30)))))) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10693: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10693, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10701:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                        ? 4U : ((6U 
                                                 == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30)))) 
                               | (1U == ((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                          ? 4U : ((6U 
                                                   == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_bits_opcode))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10714:11
done_reset        
    ) {
        if (VL_UNLIKELY((((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                          != (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                             & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10717: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10717, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10725:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                           & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                            != (3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10738:11
done_reset        
    ) {
        __Vtemp369[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp369[1U] = 0U;
        __Vtemp369[2U] = 0U;
        __Vtemp369[3U] = 0U;
        __Vtemp369[4U] = 0U;
        __Vtemp369[5U] = 0U;
        __Vtemp369[6U] = 0U;
        __Vtemp369[7U] = 0U;
        __Vtemp369[8U] = 0U;
        __Vtemp369[9U] = 0U;
        __Vtemp369[0xaU] = 0U;
        __Vtemp369[0xbU] = 0U;
        __Vtemp369[0xcU] = 0U;
        __Vtemp369[0xdU] = 0U;
        __Vtemp369[0xeU] = 0U;
        __Vtemp369[0xfU] = 0U;
        __Vtemp369[0x10U] = 0U;
        __Vtemp369[0x11U] = 0U;
        __Vtemp369[0x12U] = 0U;
        __Vtemp369[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp370, __Vtemp369);
        __Vtemp375[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp375[1U] = 0U;
        __Vtemp375[2U] = 0U;
        __Vtemp375[3U] = 0U;
        __Vtemp375[4U] = 0U;
        __Vtemp375[5U] = 0U;
        __Vtemp375[6U] = 0U;
        __Vtemp375[7U] = 0U;
        __Vtemp375[8U] = 0U;
        __Vtemp375[9U] = 0U;
        __Vtemp375[0xaU] = 0U;
        __Vtemp375[0xbU] = 0U;
        __Vtemp375[0xcU] = 0U;
        __Vtemp375[0xdU] = 0U;
        __Vtemp375[0xeU] = 0U;
        __Vtemp375[0xfU] = 0U;
        __Vtemp375[0x10U] = 0U;
        __Vtemp375[0x11U] = 0U;
        __Vtemp375[0x12U] = 0U;
        __Vtemp375[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp376, __Vtemp375);
        __Vtemp381[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp381[1U] = 0U;
        __Vtemp381[2U] = 0U;
        __Vtemp381[3U] = 0U;
        __Vtemp381[4U] = 0U;
        __Vtemp381[5U] = 0U;
        __Vtemp381[6U] = 0U;
        __Vtemp381[7U] = 0U;
        __Vtemp381[8U] = 0U;
        __Vtemp381[9U] = 0U;
        __Vtemp381[0xaU] = 0U;
        __Vtemp381[0xbU] = 0U;
        __Vtemp381[0xcU] = 0U;
        __Vtemp381[0xdU] = 0U;
        __Vtemp381[0xeU] = 0U;
        __Vtemp381[0xfU] = 0U;
        __Vtemp381[0x10U] = 0U;
        __Vtemp381[0x11U] = 0U;
        __Vtemp381[0x12U] = 0U;
        __Vtemp381[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp382, __Vtemp381);
        __Vtemp387[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp387[1U] = 0U;
        __Vtemp387[2U] = 0U;
        __Vtemp387[3U] = 0U;
        __Vtemp387[4U] = 0U;
        __Vtemp387[5U] = 0U;
        __Vtemp387[6U] = 0U;
        __Vtemp387[7U] = 0U;
        __Vtemp387[8U] = 0U;
        __Vtemp387[9U] = 0U;
        __Vtemp387[0xaU] = 0U;
        __Vtemp387[0xbU] = 0U;
        __Vtemp387[0xcU] = 0U;
        __Vtemp387[0xdU] = 0U;
        __Vtemp387[0xeU] = 0U;
        __Vtemp387[0xfU] = 0U;
        __Vtemp387[0x10U] = 0U;
        __Vtemp387[0x11U] = 0U;
        __Vtemp387[0x12U] = 0U;
        __Vtemp387[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp388, __Vtemp387);
        if (VL_UNLIKELY(((~ ((1U == ((7U == (7U & __Vtemp370[0U]))
                                      ? 4U : ((6U == 
                                               (7U 
                                                & __Vtemp376[0U]))
                                               ? 4U
                                               : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46)))) 
                             | (1U == ((7U == (7U & 
                                               __Vtemp382[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp388[0U]))
                                                 ? 5U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46)))))) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10741: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10741, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10749:11
verbose&&done_reset        
    ) {
        __Vtemp393[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp393[1U] = 0U;
        __Vtemp393[2U] = 0U;
        __Vtemp393[3U] = 0U;
        __Vtemp393[4U] = 0U;
        __Vtemp393[5U] = 0U;
        __Vtemp393[6U] = 0U;
        __Vtemp393[7U] = 0U;
        __Vtemp393[8U] = 0U;
        __Vtemp393[9U] = 0U;
        __Vtemp393[0xaU] = 0U;
        __Vtemp393[0xbU] = 0U;
        __Vtemp393[0xcU] = 0U;
        __Vtemp393[0xdU] = 0U;
        __Vtemp393[0xeU] = 0U;
        __Vtemp393[0xfU] = 0U;
        __Vtemp393[0x10U] = 0U;
        __Vtemp393[0x11U] = 0U;
        __Vtemp393[0x12U] = 0U;
        __Vtemp393[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp394, __Vtemp393);
        __Vtemp399[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp399[1U] = 0U;
        __Vtemp399[2U] = 0U;
        __Vtemp399[3U] = 0U;
        __Vtemp399[4U] = 0U;
        __Vtemp399[5U] = 0U;
        __Vtemp399[6U] = 0U;
        __Vtemp399[7U] = 0U;
        __Vtemp399[8U] = 0U;
        __Vtemp399[9U] = 0U;
        __Vtemp399[0xaU] = 0U;
        __Vtemp399[0xbU] = 0U;
        __Vtemp399[0xcU] = 0U;
        __Vtemp399[0xdU] = 0U;
        __Vtemp399[0xeU] = 0U;
        __Vtemp399[0xfU] = 0U;
        __Vtemp399[0x10U] = 0U;
        __Vtemp399[0x11U] = 0U;
        __Vtemp399[0x12U] = 0U;
        __Vtemp399[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp400, __Vtemp399);
        __Vtemp405[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp405[1U] = 0U;
        __Vtemp405[2U] = 0U;
        __Vtemp405[3U] = 0U;
        __Vtemp405[4U] = 0U;
        __Vtemp405[5U] = 0U;
        __Vtemp405[6U] = 0U;
        __Vtemp405[7U] = 0U;
        __Vtemp405[8U] = 0U;
        __Vtemp405[9U] = 0U;
        __Vtemp405[0xaU] = 0U;
        __Vtemp405[0xbU] = 0U;
        __Vtemp405[0xcU] = 0U;
        __Vtemp405[0xdU] = 0U;
        __Vtemp405[0xeU] = 0U;
        __Vtemp405[0xfU] = 0U;
        __Vtemp405[0x10U] = 0U;
        __Vtemp405[0x11U] = 0U;
        __Vtemp405[0x12U] = 0U;
        __Vtemp405[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp406, __Vtemp405);
        __Vtemp411[0U] = (7U & (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                >> 1U));
        __Vtemp411[1U] = 0U;
        __Vtemp411[2U] = 0U;
        __Vtemp411[3U] = 0U;
        __Vtemp411[4U] = 0U;
        __Vtemp411[5U] = 0U;
        __Vtemp411[6U] = 0U;
        __Vtemp411[7U] = 0U;
        __Vtemp411[8U] = 0U;
        __Vtemp411[9U] = 0U;
        __Vtemp411[0xaU] = 0U;
        __Vtemp411[0xbU] = 0U;
        __Vtemp411[0xcU] = 0U;
        __Vtemp411[0xdU] = 0U;
        __Vtemp411[0xeU] = 0U;
        __Vtemp411[0xfU] = 0U;
        __Vtemp411[0x10U] = 0U;
        __Vtemp411[0x11U] = 0U;
        __Vtemp411[0x12U] = 0U;
        __Vtemp411[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp412, __Vtemp411);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((1U == ((7U == (7U & 
                                               __Vtemp394[0U]))
                                        ? 4U : ((6U 
                                                 == 
                                                 (7U 
                                                  & __Vtemp400[0U]))
                                                 ? 4U
                                                 : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46)))) 
                               | (1U == ((7U == (7U 
                                                 & __Vtemp406[0U]))
                                          ? 4U : ((6U 
                                                   == 
                                                   (7U 
                                                    & __Vtemp412[0U]))
                                                   ? 5U
                                                   : (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10762:11
done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp415, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp418[0U] = (7U & (__Vtemp415[0U] >> 1U));
        __Vtemp418[1U] = 0U;
        __Vtemp418[2U] = 0U;
        __Vtemp418[3U] = 0U;
        __Vtemp418[4U] = 0U;
        __Vtemp418[5U] = 0U;
        __Vtemp418[6U] = 0U;
        __Vtemp418[7U] = 0U;
        __Vtemp418[8U] = 0U;
        __Vtemp418[9U] = 0U;
        __Vtemp418[0xaU] = 0U;
        __Vtemp418[0xbU] = 0U;
        __Vtemp418[0xcU] = 0U;
        __Vtemp418[0xdU] = 0U;
        __Vtemp418[0xeU] = 0U;
        __Vtemp418[0xfU] = 0U;
        __Vtemp418[0x10U] = 0U;
        __Vtemp418[0x11U] = 0U;
        __Vtemp418[0x12U] = 0U;
        __Vtemp418[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp419, __Vtemp418);
        if (VL_UNLIKELY((((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                          != (0xfU & __Vtemp419[0U])) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                             & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10765: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10765, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10773:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(640,640,11, __Vtemp422, vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp425[0U] = (7U & (__Vtemp422[0U] >> 1U));
        __Vtemp425[1U] = 0U;
        __Vtemp425[2U] = 0U;
        __Vtemp425[3U] = 0U;
        __Vtemp425[4U] = 0U;
        __Vtemp425[5U] = 0U;
        __Vtemp425[6U] = 0U;
        __Vtemp425[7U] = 0U;
        __Vtemp425[8U] = 0U;
        __Vtemp425[9U] = 0U;
        __Vtemp425[0xaU] = 0U;
        __Vtemp425[0xbU] = 0U;
        __Vtemp425[0xcU] = 0U;
        __Vtemp425[0xdU] = 0U;
        __Vtemp425[0xeU] = 0U;
        __Vtemp425[0xfU] = 0U;
        __Vtemp425[0x10U] = 0U;
        __Vtemp425[0x11U] = 0U;
        __Vtemp425[0x12U] = 0U;
        __Vtemp425[0x13U] = 0U;
        VL_EXTEND_WW(640,639, __Vtemp426, __Vtemp425);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                           & (~ ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))))) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & ((3U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)) 
                            != (0xfU & __Vtemp426[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10786:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready)) 
                             | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready))) 
                         & (((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid)) 
                            & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10789: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10789, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10797:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1))) 
                           & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater_io_deq_valid)) 
                          & (~ (IData)(vlTOPp->reset))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready)) 
                               | (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar_auto_out_1_d_ready)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10808:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != 
                                                ((((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U]) 
                                                 | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U])))) 
                                    | (0U == vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                               & (~ (IData)(vlTOPp->reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10811: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v", 10811, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.harness.v:10819:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != 
                                                  ((((vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[0U] 
                                                      | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[1U]) 
                                                     | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[2U]) 
                                                    | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[3U]) 
                                                   | vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight[4U])))) 
                                      | (0U == vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                     | (vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog 
                                        < vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:464:12)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}
