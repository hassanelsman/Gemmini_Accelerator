// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT QData VTestHarness::_change_request(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_change_request\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VTestHarness::_change_request_1(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_change_request_1\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->TestHarness__DOT__chiptop__DOT___T ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT___T)
         | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset)
         | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset)
         | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset)
         | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_implicit_clock_reset_catcher_io_sync_reset ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_implicit_clock_reset_catcher_io_sync_reset)
         | (vlTOPp->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain_reset ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain_reset)
         | (vlTOPp->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset));
    VL_DEBUG_IF( if(__req && ((vlTOPp->TestHarness__DOT__chiptop__DOT___T ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT___T))) VL_DBG_MSGF("        CHANGE: /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:464418: TestHarness.chiptop._T\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset))) VL_DBG_MSGF("        CHANGE: /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:427975: TestHarness.chiptop.system.debug_1.dmOuter.asource.bundleOut_0_a_source.source_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset))) VL_DBG_MSGF("        CHANGE: /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:436797: TestHarness.chiptop.system.debug_1.dmInner.dmiXing.bundleOut_0_a_sink.sink_valid_0_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset))) VL_DBG_MSGF("        CHANGE: /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:457858: TestHarness.chiptop.system.resetSynchronizer.bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_implicit_clock_reset_catcher_io_sync_reset ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_implicit_clock_reset_catcher_io_sync_reset))) VL_DBG_MSGF("        CHANGE: /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:457870: TestHarness.chiptop.system.resetSynchronizer.bundleOut_0_member_allClocks_implicit_clock_reset_catcher_io_sync_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain_reset ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain_reset))) VL_DBG_MSGF("        CHANGE: /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:427886: TestHarness.chiptop.system_debug_systemjtag_reset_catcher.io_sync_reset_chain.output_chain_reset\n"); );
    VL_DEBUG_IF( if(__req && ((vlTOPp->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset ^ vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset))) VL_DBG_MSGF("        CHANGE: /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:427886: TestHarness.chiptop.debug_reset_syncd_debug_reset_sync.output_chain_reset\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT___T 
        = vlTOPp->TestHarness__DOT__chiptop__DOT___T;
    vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__source_valid_0_reset;
    vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__sink_valid_0_reset;
    vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset;
    vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_implicit_clock_reset_catcher_io_sync_reset 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_implicit_clock_reset_catcher_io_sync_reset;
    vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain_reset 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain_reset;
    vlTOPp->__Vchglast__TOP__TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset 
        = vlTOPp->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset;
    return __req;
}

#ifdef VL_DEBUG
void VTestHarness::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
