// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTestHarness.h for the primary calling header

#ifndef _VTESTHARNESS___024UNIT_H_
#define _VTESTHARNESS___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "VTestHarness__Dpi.h"

//==========

class VTestHarness__Syms;

//----------

VL_MODULE(VTestHarness___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VTestHarness__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VTestHarness___024unit);  ///< Copying not allowed
  public:
    VTestHarness___024unit(const char* name = "TOP");
    ~VTestHarness___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VTestHarness__Syms* symsp, bool first);
    void __Vdpiimwrap_jtag_tick_TOP____024unit(CData/*0:0*/(&  jtag_TCK), CData/*0:0*/(&  jtag_TMS), CData/*0:0*/(&  jtag_TDI), CData/*0:0*/(&  jtag_TRSTn), const CData/*0:0*/ jtag_TDO, IData/*31:0*/(&  jtag_tick__Vfuncrtn));
    void __Vdpiimwrap_memory_init_TOP____024unit(const QData/*63:0*/ mem_size, const QData/*63:0*/ word_size, const QData/*63:0*/ line_size, const QData/*63:0*/ id_bits, const QData/*63:0*/ clock_hz, QData/*63:0*/(&  memory_init__Vfuncrtn));
    void __Vdpiimwrap_memory_tick_TOP____024unit(const QData/*63:0*/ channel, const CData/*0:0*/ reset, const CData/*0:0*/ ar_valid, CData/*0:0*/(&  ar_ready), const IData/*31:0*/ ar_addr, const IData/*31:0*/ ar_id, const IData/*31:0*/ ar_size, const IData/*31:0*/ ar_len, const CData/*0:0*/ aw_valid, CData/*0:0*/(&  aw_ready), const IData/*31:0*/ aw_addr, const IData/*31:0*/ aw_id, const IData/*31:0*/ aw_size, const IData/*31:0*/ aw_len, const CData/*0:0*/ w_valid, CData/*0:0*/(&  w_ready), const IData/*31:0*/ w_strb, const QData/*63:0*/ w_data, const CData/*0:0*/ w_last, CData/*0:0*/(&  r_valid), const CData/*0:0*/ r_ready, IData/*31:0*/(&  r_id), IData/*31:0*/(&  r_resp), QData/*63:0*/(&  r_data), CData/*0:0*/(&  r_last), CData/*0:0*/(&  b_valid), const CData/*0:0*/ b_ready, IData/*31:0*/(&  b_id), IData/*31:0*/(&  b_resp));
    void __Vdpiimwrap_serial_tick_TOP____024unit(const CData/*0:0*/ serial_out_valid, CData/*0:0*/(&  serial_out_ready), const IData/*31:0*/ serial_out_bits, CData/*0:0*/(&  serial_in_valid), const CData/*0:0*/ serial_in_ready, IData/*31:0*/(&  serial_in_bits), IData/*31:0*/(&  serial_tick__Vfuncrtn));
    void __Vdpiimwrap_uart_init_TOP____024unit(const std::string(&  filename), const IData/*31:0*/ uartno);
    void __Vdpiimwrap_uart_tick_TOP____024unit(const CData/*0:0*/ serial_out_valid, CData/*0:0*/(&  serial_out_ready), const CData/*7:0*/ serial_out_bits, CData/*0:0*/(&  serial_in_valid), const CData/*0:0*/ serial_in_ready, CData/*7:0*/(&  serial_in_bits));
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
