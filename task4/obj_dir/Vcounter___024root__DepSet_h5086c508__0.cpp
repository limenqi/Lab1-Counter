// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter.h for the primary calling header

#include "Vcounter__pch.h"
#include "Vcounter___024root.h"

void Vcounter___024root___eval_act(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_act\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vcounter___024root___nba_sequent__TOP__0(Vcounter___024root* vlSelf);

void Vcounter___024root___eval_nba(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_nba\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcounter___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcounter___024root___nba_sequent__TOP__0(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___nba_sequent__TOP__0\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__top__DOT__count;
    __Vdly__top__DOT__count = 0;
    // Body
    __Vdly__top__DOT__count = vlSelfRef.top__DOT__count;
    if (vlSelfRef.rst) {
        __Vdly__top__DOT__count = 0U;
    } else if (vlSelfRef.en) {
        __Vdly__top__DOT__count = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.top__DOT__count)));
    } else if ((1U & (~ (IData)(vlSelfRef.en)))) {
        __Vdly__top__DOT__count = (0xffU & ((IData)(vlSelfRef.top__DOT__count) 
                                            - (IData)(1U)));
    }
    vlSelfRef.top__DOT__count = __Vdly__top__DOT__count;
    vlSelfRef.top__DOT__myDecoder__DOT__result = 0U;
    vlSelfRef.top__DOT__myDecoder__DOT__result = ((0xfff00U 
                                                   & vlSelfRef.top__DOT__myDecoder__DOT__result) 
                                                  | (IData)(vlSelfRef.top__DOT__count));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xff0ffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf00U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                            >> 8U)) 
                            << 8U)));
    }
    if ((5U <= (0xfU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelfRef.top__DOT__myDecoder__DOT__result 
            = ((0xf0fffU & vlSelfRef.top__DOT__myDecoder__DOT__result) 
               | (0xf000U & (((IData)(3U) + (vlSelfRef.top__DOT__myDecoder__DOT__result 
                                             >> 0xcU)) 
                             << 0xcU)));
    }
    vlSelfRef.top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                  & VL_SHIFTL_III(20,20,32, vlSelfRef.top__DOT__myDecoder__DOT__result, 1U));
    vlSelfRef.bcd = (0xfffU & (vlSelfRef.top__DOT__myDecoder__DOT__result 
                               >> 8U));
}

void Vcounter___024root___eval_triggers__act(Vcounter___024root* vlSelf);

bool Vcounter___024root___eval_phase__act(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_phase__act\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcounter___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcounter___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcounter___024root___eval_phase__nba(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_phase__nba\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcounter___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter___024root___dump_triggers__nba(Vcounter___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter___024root___dump_triggers__act(Vcounter___024root* vlSelf);
#endif  // VL_DEBUG

void Vcounter___024root___eval(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcounter___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcounter___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcounter___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcounter___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcounter___024root___eval_debug_assertions(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_debug_assertions\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.en & 0xfeU)))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG
