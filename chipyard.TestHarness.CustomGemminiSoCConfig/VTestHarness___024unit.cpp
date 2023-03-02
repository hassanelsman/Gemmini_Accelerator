// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness___024unit.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

//==========

VL_INLINE_OPT void VTestHarness___024unit::__Vdpiimwrap_memory_init_TOP____024unit(const QData/*63:0*/ mem_size, const QData/*63:0*/ word_size, const QData/*63:0*/ line_size, const QData/*63:0*/ id_bits, const QData/*63:0*/ clock_hz, QData/*63:0*/(&  memory_init__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit::__Vdpiimwrap_memory_init_TOP____024unit\n"); );
    // Body
    long long mem_size__Vcvt;
    mem_size__Vcvt = mem_size;
    long long word_size__Vcvt;
    word_size__Vcvt = word_size;
    long long line_size__Vcvt;
    line_size__Vcvt = line_size;
    long long id_bits__Vcvt;
    id_bits__Vcvt = id_bits;
    long long clock_hz__Vcvt;
    clock_hz__Vcvt = clock_hz;
    void* memory_init__Vfuncrtn__Vcvt;
    memory_init__Vfuncrtn__Vcvt = memory_init(mem_size__Vcvt, word_size__Vcvt, line_size__Vcvt, id_bits__Vcvt, clock_hz__Vcvt);
    memory_init__Vfuncrtn = VL_CVT_VP_Q(memory_init__Vfuncrtn__Vcvt);
}

VL_INLINE_OPT void VTestHarness___024unit::__Vdpiimwrap_memory_tick_TOP____024unit(const QData/*63:0*/ channel, const CData/*0:0*/ reset, const CData/*0:0*/ ar_valid, CData/*0:0*/(&  ar_ready), const IData/*31:0*/ ar_addr, const IData/*31:0*/ ar_id, const IData/*31:0*/ ar_size, const IData/*31:0*/ ar_len, const CData/*0:0*/ aw_valid, CData/*0:0*/(&  aw_ready), const IData/*31:0*/ aw_addr, const IData/*31:0*/ aw_id, const IData/*31:0*/ aw_size, const IData/*31:0*/ aw_len, const CData/*0:0*/ w_valid, CData/*0:0*/(&  w_ready), const IData/*31:0*/ w_strb, const QData/*63:0*/ w_data, const CData/*0:0*/ w_last, CData/*0:0*/(&  r_valid), const CData/*0:0*/ r_ready, IData/*31:0*/(&  r_id), IData/*31:0*/(&  r_resp), QData/*63:0*/(&  r_data), CData/*0:0*/(&  r_last), CData/*0:0*/(&  b_valid), const CData/*0:0*/ b_ready, IData/*31:0*/(&  b_id), IData/*31:0*/(&  b_resp)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit::__Vdpiimwrap_memory_tick_TOP____024unit\n"); );
    // Body
    void* channel__Vcvt;
    channel__Vcvt = VL_CVT_Q_VP(channel);
    svBit reset__Vcvt;
    reset__Vcvt = reset;
    svBit ar_valid__Vcvt;
    ar_valid__Vcvt = ar_valid;
    svBit ar_ready__Vcvt;
    int ar_addr__Vcvt;
    ar_addr__Vcvt = ar_addr;
    int ar_id__Vcvt;
    ar_id__Vcvt = ar_id;
    int ar_size__Vcvt;
    ar_size__Vcvt = ar_size;
    int ar_len__Vcvt;
    ar_len__Vcvt = ar_len;
    svBit aw_valid__Vcvt;
    aw_valid__Vcvt = aw_valid;
    svBit aw_ready__Vcvt;
    int aw_addr__Vcvt;
    aw_addr__Vcvt = aw_addr;
    int aw_id__Vcvt;
    aw_id__Vcvt = aw_id;
    int aw_size__Vcvt;
    aw_size__Vcvt = aw_size;
    int aw_len__Vcvt;
    aw_len__Vcvt = aw_len;
    svBit w_valid__Vcvt;
    w_valid__Vcvt = w_valid;
    svBit w_ready__Vcvt;
    int w_strb__Vcvt;
    w_strb__Vcvt = w_strb;
    long long w_data__Vcvt;
    w_data__Vcvt = w_data;
    svBit w_last__Vcvt;
    w_last__Vcvt = w_last;
    svBit r_valid__Vcvt;
    svBit r_ready__Vcvt;
    r_ready__Vcvt = r_ready;
    int r_id__Vcvt;
    int r_resp__Vcvt;
    long long r_data__Vcvt;
    svBit r_last__Vcvt;
    svBit b_valid__Vcvt;
    svBit b_ready__Vcvt;
    b_ready__Vcvt = b_ready;
    int b_id__Vcvt;
    int b_resp__Vcvt;
    memory_tick(channel__Vcvt, reset__Vcvt, ar_valid__Vcvt, &ar_ready__Vcvt, ar_addr__Vcvt, ar_id__Vcvt, ar_size__Vcvt, ar_len__Vcvt, aw_valid__Vcvt, &aw_ready__Vcvt, aw_addr__Vcvt, aw_id__Vcvt, aw_size__Vcvt, aw_len__Vcvt, w_valid__Vcvt, &w_ready__Vcvt, w_strb__Vcvt, w_data__Vcvt, w_last__Vcvt, &r_valid__Vcvt, r_ready__Vcvt, &r_id__Vcvt, &r_resp__Vcvt, &r_data__Vcvt, &r_last__Vcvt, &b_valid__Vcvt, b_ready__Vcvt, &b_id__Vcvt, &b_resp__Vcvt);
    ar_ready = (1U & ar_ready__Vcvt);
    aw_ready = (1U & aw_ready__Vcvt);
    w_ready = (1U & w_ready__Vcvt);
    r_valid = (1U & r_valid__Vcvt);
    r_id = r_id__Vcvt;
    r_resp = r_resp__Vcvt;
    r_data = r_data__Vcvt;
    r_last = (1U & r_last__Vcvt);
    b_valid = (1U & b_valid__Vcvt);
    b_id = b_id__Vcvt;
    b_resp = b_resp__Vcvt;
}

VL_INLINE_OPT void VTestHarness___024unit::__Vdpiimwrap_jtag_tick_TOP____024unit(CData/*0:0*/(&  jtag_TCK), CData/*0:0*/(&  jtag_TMS), CData/*0:0*/(&  jtag_TDI), CData/*0:0*/(&  jtag_TRSTn), const CData/*0:0*/ jtag_TDO, IData/*31:0*/(&  jtag_tick__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit::__Vdpiimwrap_jtag_tick_TOP____024unit\n"); );
    // Body
    svBit jtag_TCK__Vcvt;
    svBit jtag_TMS__Vcvt;
    svBit jtag_TDI__Vcvt;
    svBit jtag_TRSTn__Vcvt;
    svBit jtag_TDO__Vcvt;
    jtag_TDO__Vcvt = jtag_TDO;
    int jtag_tick__Vfuncrtn__Vcvt;
    jtag_tick__Vfuncrtn__Vcvt = jtag_tick(&jtag_TCK__Vcvt, &jtag_TMS__Vcvt, &jtag_TDI__Vcvt, &jtag_TRSTn__Vcvt, jtag_TDO__Vcvt);
    jtag_TCK = (1U & jtag_TCK__Vcvt);
    jtag_TMS = (1U & jtag_TMS__Vcvt);
    jtag_TDI = (1U & jtag_TDI__Vcvt);
    jtag_TRSTn = (1U & jtag_TRSTn__Vcvt);
    jtag_tick__Vfuncrtn = jtag_tick__Vfuncrtn__Vcvt;
}

VL_INLINE_OPT void VTestHarness___024unit::__Vdpiimwrap_serial_tick_TOP____024unit(const CData/*0:0*/ serial_out_valid, CData/*0:0*/(&  serial_out_ready), const IData/*31:0*/ serial_out_bits, CData/*0:0*/(&  serial_in_valid), const CData/*0:0*/ serial_in_ready, IData/*31:0*/(&  serial_in_bits), IData/*31:0*/(&  serial_tick__Vfuncrtn)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit::__Vdpiimwrap_serial_tick_TOP____024unit\n"); );
    // Body
    svBit serial_out_valid__Vcvt;
    serial_out_valid__Vcvt = serial_out_valid;
    svBit serial_out_ready__Vcvt;
    int serial_out_bits__Vcvt;
    serial_out_bits__Vcvt = serial_out_bits;
    svBit serial_in_valid__Vcvt;
    svBit serial_in_ready__Vcvt;
    serial_in_ready__Vcvt = serial_in_ready;
    int serial_in_bits__Vcvt;
    int serial_tick__Vfuncrtn__Vcvt;
    serial_tick__Vfuncrtn__Vcvt = serial_tick(serial_out_valid__Vcvt, &serial_out_ready__Vcvt, serial_out_bits__Vcvt, &serial_in_valid__Vcvt, serial_in_ready__Vcvt, &serial_in_bits__Vcvt);
    serial_out_ready = (1U & serial_out_ready__Vcvt);
    serial_in_valid = (1U & serial_in_valid__Vcvt);
    serial_in_bits = serial_in_bits__Vcvt;
    serial_tick__Vfuncrtn = serial_tick__Vfuncrtn__Vcvt;
}

VL_INLINE_OPT void VTestHarness___024unit::__Vdpiimwrap_uart_init_TOP____024unit(const std::string(&  filename), const IData/*31:0*/ uartno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit::__Vdpiimwrap_uart_init_TOP____024unit\n"); );
    // Body
    const char* filename__Vcvt;
    filename__Vcvt = filename.c_str();
    int uartno__Vcvt;
    uartno__Vcvt = uartno;
    uart_init(filename__Vcvt, uartno__Vcvt);
}

VL_INLINE_OPT void VTestHarness___024unit::__Vdpiimwrap_uart_tick_TOP____024unit(const CData/*0:0*/ serial_out_valid, CData/*0:0*/(&  serial_out_ready), const CData/*7:0*/ serial_out_bits, CData/*0:0*/(&  serial_in_valid), const CData/*0:0*/ serial_in_ready, CData/*7:0*/(&  serial_in_bits)) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VTestHarness___024unit::__Vdpiimwrap_uart_tick_TOP____024unit\n"); );
    // Body
    svBit serial_out_valid__Vcvt;
    serial_out_valid__Vcvt = serial_out_valid;
    svBit serial_out_ready__Vcvt;
    char serial_out_bits__Vcvt;
    serial_out_bits__Vcvt = serial_out_bits;
    svBit serial_in_valid__Vcvt;
    svBit serial_in_ready__Vcvt;
    serial_in_ready__Vcvt = serial_in_ready;
    char serial_in_bits__Vcvt;
    uart_tick(serial_out_valid__Vcvt, &serial_out_ready__Vcvt, serial_out_bits__Vcvt, &serial_in_valid__Vcvt, serial_in_ready__Vcvt, &serial_in_bits__Vcvt);
    serial_out_ready = (1U & serial_out_ready__Vcvt);
    serial_in_valid = (1U & serial_in_valid__Vcvt);
    serial_in_bits = (0xffU & serial_in_bits__Vcvt);
}
