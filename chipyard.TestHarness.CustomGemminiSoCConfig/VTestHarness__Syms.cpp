// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VTestHarness__Syms.h"
#include "VTestHarness.h"
#include "VTestHarness___024unit.h"



// FUNCTIONS
VTestHarness__Syms::VTestHarness__Syms(VTestHarness* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP____024unit(Verilated::catName(topp->name(), "$unit"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP____024unit.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_TestHarness.configure(this, name(), "TestHarness", "TestHarness", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__bootROMDomainWrapper__bootrom__monitor.configure(this, name(), "TestHarness.chiptop.system.bootROMDomainWrapper.bootrom.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__clint__monitor.configure(this, name(), "TestHarness.chiptop.system.clint.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmInner__dmInner.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmInner.dmInner", "dmInner", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmInner__dmInner__monitor.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmInner.dmInner.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmInner__dmInner__monitor_1.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmInner.dmInner.monitor_1", "monitor_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__asource__monitor.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmOuter.asource.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmOuter__monitor.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmOuter.dmOuter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiBypass__bar__monitor.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmOuter.dmiBypass.bar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiBypass__error.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmOuter.dmiBypass.error", "error", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiBypass__error__monitor.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmOuter.dmiBypass.error.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiXbar.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmOuter.dmiXbar", "dmiXbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__debug_1__dmOuter__dmiXbar__monitor.configure(this, name(), "TestHarness.chiptop.system.debug_1.dmOuter.dmiXbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__domain__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.domain.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__domain__serdesser__monitor.configure(this, name(), "TestHarness.chiptop.system.domain.serdesser.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__dtm.configure(this, name(), "TestHarness.chiptop.system.dtm", "dtm", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__dtm__dmiAccessChain.configure(this, name(), "TestHarness.chiptop.system.dtm.dmiAccessChain", "dmiAccessChain", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__dtm__dtmInfoChain.configure(this, name(), "TestHarness.chiptop.system.dtm.dtmInfoChain", "dtmInfoChain", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__dtm__tapIO_bypassChain.configure(this, name(), "TestHarness.chiptop.system.dtm.tapIO_bypassChain", "tapIO_bypassChain", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__dtm__tapIO_controllerInternal__irChain.configure(this, name(), "TestHarness.chiptop.system.dtm.tapIO_controllerInternal.irChain", "irChain", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__dtm__tapIO_idcodeChain.configure(this, name(), "TestHarness.chiptop.system.dtm.tapIO_idcodeChain", "tapIO_idcodeChain", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__plicDomainWrapper__plic.configure(this, name(), "TestHarness.chiptop.system.plicDomainWrapper.plic", "plic", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__plicDomainWrapper__plic__monitor.configure(this, name(), "TestHarness.chiptop.system.plicDomainWrapper.plic.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__prci_ctrl_domain__tileClockGater__monitor.configure(this, name(), "TestHarness.chiptop.system.prci_ctrl_domain.tileClockGater.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__prci_ctrl_domain__tileResetSetter__monitor.configure(this, name(), "TestHarness.chiptop.system.prci_ctrl_domain.tileResetSetter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__atomics.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.atomics", "atomics", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__atomics__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.atomics.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_bootrom__fragmenter.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_bootrom.fragmenter", "fragmenter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_bootrom__fragmenter__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_bootrom.fragmenter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_clint__fragmenter.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter", "fragmenter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_clint__fragmenter__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_debug__fragmenter.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter", "fragmenter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_debug__fragmenter__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_l2_ctrl__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_l2_ctrl.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_l2_ctrl__fragmenter.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_l2_ctrl.fragmenter", "fragmenter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_l2_ctrl__fragmenter__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_l2_ctrl.fragmenter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_plic__fragmenter.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter", "fragmenter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_plic__fragmenter__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_plic.fragmenter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_slave_named_clockgater__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_slave_named_clockgater.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_slave_named_clockgater__fragmenter.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_slave_named_clockgater.fragmenter", "fragmenter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_slave_named_clockgater__fragmenter__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_slave_named_clockgater.fragmenter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_slave_named_tileresetsetter__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_slave_named_tileresetsetter.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_slave_named_tileresetsetter__fragmenter.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_slave_named_tileresetsetter.fragmenter", "fragmenter", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__coupler_to_slave_named_tileresetsetter__fragmenter__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.coupler_to_slave_named_tileresetsetter.fragmenter.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__fixer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.fixer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__in_xbar.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.in_xbar", "in_xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__in_xbar__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__in_xbar__monitor_1.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor_1", "monitor_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__out_xbar.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.out_xbar", "out_xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__out_xbar__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.out_xbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__wrapped_error_device__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_cbus__wrapped_error_device__error__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_cbus.wrapped_error_device.error.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_fbus__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_fbus.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_fbus__coupler_from_port_named_serial_tl_ctrl__buffer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_fbus.coupler_from_port_named_serial_tl_ctrl.buffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__InclusiveCache_inner_TLBuffer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.InclusiveCache_inner_TLBuffer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__binder__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.binder.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__cork.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.cork", "cork", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__cork__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.cork.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__cork__pool.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.cork.pool", "pool", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2", "l2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0", "mods_0", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_0.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_0", "abc_mshrs_0", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_1.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_1", "abc_mshrs_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_2.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_2", "abc_mshrs_2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_3.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_3", "abc_mshrs_3", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_4.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_4", "abc_mshrs_4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_5.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_5", "abc_mshrs_5", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_6.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_6", "abc_mshrs_6", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_7.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_7", "abc_mshrs_7", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_8.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_8", "abc_mshrs_8", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__abc_mshrs_9.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.abc_mshrs_9", "abc_mshrs_9", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__bc_mshr.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.bc_mshr", "bc_mshr", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__c_mshr.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.c_mshr", "c_mshr", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__directory.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.directory", "directory", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__requests.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.requests", "requests", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__sinkA__putbuffer.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.sinkA.putbuffer", "putbuffer", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__sinkC.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.sinkC", "sinkC", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__sinkC__putbuffer.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.sinkC.putbuffer", "putbuffer", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__sinkD.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.sinkD", "sinkD", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__sourceB.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.sourceB", "sourceB", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__sourceC.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.sourceC", "sourceC", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__mods_0__sourceD.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.mods_0.sourceD", "sourceD", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_l2_wrapper__l2__monitor_1.configure(this, name(), "TestHarness.chiptop.system.subsystem_l2_wrapper.l2.monitor_1", "monitor_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_mbus__coupler_to_memory_controller_port_named_axi4__axi4yank.configure(this, name(), "TestHarness.chiptop.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.axi4yank", "axi4yank", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_mbus__coupler_to_memory_controller_port_named_axi4__tl2axi4.configure(this, name(), "TestHarness.chiptop.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4", "tl2axi4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_mbus__coupler_to_memory_controller_port_named_axi4__tl2axi4__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_mbus.coupler_to_memory_controller_port_named_axi4.tl2axi4.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_mbus__coupler_to_port_named_serial_tl_mem__shrinker__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_mbus.coupler_to_port_named_serial_tl_mem.shrinker.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_mbus__fixer__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_mbus.fixer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_mbus__picker__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_mbus.picker.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_mbus__picker__monitor_1.configure(this, name(), "TestHarness.chiptop.system.subsystem_mbus.picker.monitor_1", "monitor_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_mbus__subsystem_mbus_xbar.configure(this, name(), "TestHarness.chiptop.system.subsystem_mbus.subsystem_mbus_xbar", "subsystem_mbus_xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_mbus__subsystem_mbus_xbar__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_mbus.subsystem_mbus_xbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__atomics.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.atomics", "atomics", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__atomics__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.atomics.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_TestHarness__chiptop__system__subsystem_pbus__buffer_1__monitor.configure(this, name(), "TestHarness.chiptop.system.subsystem_pbus.buffer_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    VTestHarness__Syms_1(topp);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
