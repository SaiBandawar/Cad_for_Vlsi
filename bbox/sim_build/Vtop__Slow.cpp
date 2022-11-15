// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vtop) {
    Vtop__Syms* __restrict vlSymsp = __VlSymsp = new Vtop__Syms(this, name());
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vtop::__Vconfigure(Vtop__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-9);
    Verilated::timeprecision(-12);
}

Vtop::~Vtop() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void Vtop::_initial__TOP__1(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_initial__TOP__1\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkbbox__DOT__CAN_FIRE_ma_inputs = 1U;
    vlTOPp->mkbbox__DOT__WILL_FIRE_ma_inputs = 1U;
    vlTOPp->mkbbox__DOT__CAN_FIRE_RL_rl_compute = 1U;
    vlTOPp->mkbbox__DOT__WILL_FIRE_RL_rl_compute = 1U;
    vlTOPp->mkbbox__DOT__rg_input[0U] = 0xaaaaaaaaU;
    vlTOPp->mkbbox__DOT__rg_input[1U] = 0xaaaaaaaaU;
    vlTOPp->mkbbox__DOT__rg_input[2U] = 0xaaaaaaaaU;
    vlTOPp->mkbbox__DOT__rg_input[3U] = 0xaaaaaaaaU;
    vlTOPp->mkbbox__DOT__rg_input[4U] = 0xaaaaaaaaU;
    vlTOPp->mkbbox__DOT__rg_input_EN = 1U;
}

void Vtop::_settle__TOP__3(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_settle__TOP__3\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp3[4];
    WData/*127:0*/ __Vtemp4[4];
    WData/*127:0*/ __Vtemp5[4];
    WData/*127:0*/ __Vtemp6[4];
    WData/*127:0*/ __Vtemp7[4];
    WData/*127:0*/ __Vtemp8[4];
    WData/*127:0*/ __Vtemp9[4];
    WData/*127:0*/ __Vtemp10[4];
    WData/*127:0*/ __Vtemp11[4];
    WData/*127:0*/ __Vtemp12[4];
    WData/*127:0*/ __Vtemp13[4];
    WData/*127:0*/ __Vtemp14[4];
    WData/*127:0*/ __Vtemp15[4];
    WData/*127:0*/ __Vtemp16[4];
    WData/*127:0*/ __Vtemp17[4];
    WData/*127:0*/ __Vtemp18[4];
    WData/*127:0*/ __Vtemp19[4];
    WData/*127:0*/ __Vtemp20[4];
    WData/*127:0*/ __Vtemp21[4];
    WData/*127:0*/ __Vtemp22[4];
    WData/*127:0*/ __Vtemp23[4];
    WData/*127:0*/ __Vtemp24[4];
    WData/*127:0*/ __Vtemp25[4];
    WData/*127:0*/ __Vtemp26[4];
    WData/*127:0*/ __Vtemp27[4];
    WData/*127:0*/ __Vtemp28[4];
    WData/*127:0*/ __Vtemp29[4];
    WData/*127:0*/ __Vtemp30[4];
    WData/*127:0*/ __Vtemp31[4];
    WData/*127:0*/ __Vtemp32[4];
    WData/*127:0*/ __Vtemp33[4];
    WData/*127:0*/ __Vtemp34[4];
    WData/*127:0*/ __Vtemp35[4];
    WData/*127:0*/ __Vtemp36[4];
    WData/*127:0*/ __Vtemp37[4];
    WData/*127:0*/ __Vtemp38[4];
    WData/*127:0*/ __Vtemp39[4];
    WData/*127:0*/ __Vtemp40[4];
    WData/*127:0*/ __Vtemp41[4];
    WData/*127:0*/ __Vtemp42[4];
    WData/*127:0*/ __Vtemp43[4];
    WData/*127:0*/ __Vtemp44[4];
    WData/*127:0*/ __Vtemp45[4];
    WData/*127:0*/ __Vtemp46[4];
    WData/*127:0*/ __Vtemp47[4];
    WData/*127:0*/ __Vtemp48[4];
    WData/*127:0*/ __Vtemp49[4];
    WData/*127:0*/ __Vtemp50[4];
    WData/*127:0*/ __Vtemp51[4];
    WData/*127:0*/ __Vtemp52[4];
    WData/*127:0*/ __Vtemp53[4];
    WData/*127:0*/ __Vtemp54[4];
    WData/*127:0*/ __Vtemp55[4];
    WData/*127:0*/ __Vtemp56[4];
    WData/*127:0*/ __Vtemp57[4];
    WData/*127:0*/ __Vtemp58[4];
    WData/*127:0*/ __Vtemp59[4];
    WData/*127:0*/ __Vtemp60[4];
    WData/*127:0*/ __Vtemp61[4];
    WData/*127:0*/ __Vtemp62[4];
    WData/*127:0*/ __Vtemp63[4];
    WData/*127:0*/ __Vtemp64[4];
    WData/*127:0*/ __Vtemp65[4];
    WData/*127:0*/ __Vtemp66[4];
    WData/*127:0*/ __Vtemp67[4];
    WData/*127:0*/ __Vtemp68[4];
    WData/*127:0*/ __Vtemp69[4];
    WData/*127:0*/ __Vtemp70[4];
    WData/*127:0*/ __Vtemp71[4];
    WData/*127:0*/ __Vtemp72[4];
    WData/*127:0*/ __Vtemp73[4];
    WData/*127:0*/ __Vtemp74[4];
    WData/*127:0*/ __Vtemp75[4];
    WData/*127:0*/ __Vtemp76[4];
    WData/*127:0*/ __Vtemp77[4];
    WData/*127:0*/ __Vtemp78[4];
    WData/*127:0*/ __Vtemp79[4];
    WData/*127:0*/ __Vtemp80[4];
    WData/*127:0*/ __Vtemp81[4];
    WData/*127:0*/ __Vtemp82[4];
    WData/*127:0*/ __Vtemp83[4];
    WData/*127:0*/ __Vtemp84[4];
    WData/*127:0*/ __Vtemp85[4];
    WData/*127:0*/ __Vtemp86[4];
    WData/*127:0*/ __Vtemp87[4];
    WData/*127:0*/ __Vtemp88[4];
    WData/*127:0*/ __Vtemp89[4];
    WData/*127:0*/ __Vtemp90[4];
    WData/*127:0*/ __Vtemp91[4];
    WData/*127:0*/ __Vtemp92[4];
    WData/*127:0*/ __Vtemp93[4];
    WData/*127:0*/ __Vtemp94[4];
    WData/*127:0*/ __Vtemp95[4];
    WData/*127:0*/ __Vtemp96[4];
    WData/*127:0*/ __Vtemp97[4];
    WData/*127:0*/ __Vtemp98[4];
    WData/*127:0*/ __Vtemp99[4];
    WData/*127:0*/ __Vtemp100[4];
    WData/*127:0*/ __Vtemp101[4];
    WData/*127:0*/ __Vtemp102[4];
    WData/*127:0*/ __Vtemp103[4];
    WData/*127:0*/ __Vtemp104[4];
    WData/*127:0*/ __Vtemp105[4];
    WData/*127:0*/ __Vtemp106[4];
    WData/*127:0*/ __Vtemp107[4];
    WData/*127:0*/ __Vtemp108[4];
    WData/*127:0*/ __Vtemp109[4];
    WData/*127:0*/ __Vtemp110[4];
    WData/*127:0*/ __Vtemp111[4];
    WData/*127:0*/ __Vtemp112[4];
    WData/*127:0*/ __Vtemp113[4];
    WData/*127:0*/ __Vtemp114[4];
    WData/*127:0*/ __Vtemp115[4];
    WData/*127:0*/ __Vtemp116[4];
    WData/*127:0*/ __Vtemp117[4];
    WData/*127:0*/ __Vtemp118[4];
    WData/*127:0*/ __Vtemp119[4];
    WData/*127:0*/ __Vtemp120[4];
    WData/*127:0*/ __Vtemp121[4];
    WData/*127:0*/ __Vtemp122[4];
    WData/*127:0*/ __Vtemp123[4];
    WData/*127:0*/ __Vtemp124[4];
    WData/*127:0*/ __Vtemp125[4];
    WData/*127:0*/ __Vtemp126[4];
    WData/*127:0*/ __Vtemp127[4];
    WData/*127:0*/ __Vtemp128[4];
    WData/*127:0*/ __Vtemp129[4];
    WData/*127:0*/ __Vtemp130[4];
    WData/*127:0*/ __Vtemp131[4];
    WData/*127:0*/ __Vtemp132[4];
    WData/*127:0*/ __Vtemp133[4];
    WData/*127:0*/ __Vtemp134[4];
    WData/*127:0*/ __Vtemp135[4];
    WData/*127:0*/ __Vtemp136[4];
    WData/*127:0*/ __Vtemp137[4];
    WData/*127:0*/ __Vtemp138[4];
    WData/*127:0*/ __Vtemp139[4];
    WData/*127:0*/ __Vtemp140[4];
    WData/*127:0*/ __Vtemp141[4];
    WData/*127:0*/ __Vtemp142[4];
    WData/*127:0*/ __Vtemp143[4];
    WData/*127:0*/ __Vtemp144[4];
    WData/*127:0*/ __Vtemp145[4];
    WData/*127:0*/ __Vtemp146[4];
    WData/*127:0*/ __Vtemp147[4];
    WData/*127:0*/ __Vtemp148[4];
    WData/*127:0*/ __Vtemp149[4];
    WData/*127:0*/ __Vtemp150[4];
    WData/*127:0*/ __Vtemp151[4];
    WData/*127:0*/ __Vtemp152[4];
    WData/*127:0*/ __Vtemp153[4];
    WData/*127:0*/ __Vtemp154[4];
    WData/*127:0*/ __Vtemp155[4];
    WData/*127:0*/ __Vtemp156[4];
    WData/*127:0*/ __Vtemp157[4];
    WData/*127:0*/ __Vtemp158[4];
    WData/*127:0*/ __Vtemp159[4];
    WData/*127:0*/ __Vtemp160[4];
    WData/*127:0*/ __Vtemp161[4];
    WData/*127:0*/ __Vtemp162[4];
    WData/*127:0*/ __Vtemp163[4];
    WData/*127:0*/ __Vtemp164[4];
    WData/*127:0*/ __Vtemp165[4];
    WData/*127:0*/ __Vtemp166[4];
    WData/*127:0*/ __Vtemp167[4];
    WData/*127:0*/ __Vtemp168[4];
    WData/*127:0*/ __Vtemp169[4];
    WData/*127:0*/ __Vtemp170[4];
    WData/*127:0*/ __Vtemp171[4];
    WData/*127:0*/ __Vtemp172[4];
    WData/*127:0*/ __Vtemp173[4];
    WData/*127:0*/ __Vtemp174[4];
    WData/*127:0*/ __Vtemp175[4];
    WData/*127:0*/ __Vtemp176[4];
    WData/*127:0*/ __Vtemp177[4];
    WData/*127:0*/ __Vtemp178[4];
    WData/*127:0*/ __Vtemp179[4];
    WData/*127:0*/ __Vtemp180[4];
    WData/*127:0*/ __Vtemp181[4];
    WData/*127:0*/ __Vtemp182[4];
    WData/*127:0*/ __Vtemp183[4];
    WData/*127:0*/ __Vtemp184[4];
    WData/*127:0*/ __Vtemp185[4];
    WData/*127:0*/ __Vtemp186[4];
    WData/*127:0*/ __Vtemp187[4];
    WData/*127:0*/ __Vtemp188[4];
    WData/*127:0*/ __Vtemp189[4];
    WData/*127:0*/ __Vtemp190[4];
    WData/*127:0*/ __Vtemp191[4];
    WData/*127:0*/ __Vtemp192[4];
    WData/*127:0*/ __Vtemp193[4];
    WData/*127:0*/ __Vtemp194[4];
    WData/*127:0*/ __Vtemp195[4];
    WData/*127:0*/ __Vtemp196[4];
    WData/*127:0*/ __Vtemp197[4];
    WData/*127:0*/ __Vtemp198[4];
    WData/*127:0*/ __Vtemp199[4];
    WData/*127:0*/ __Vtemp200[4];
    WData/*127:0*/ __Vtemp201[4];
    WData/*127:0*/ __Vtemp202[4];
    WData/*127:0*/ __Vtemp203[4];
    WData/*127:0*/ __Vtemp204[4];
    WData/*127:0*/ __Vtemp205[4];
    WData/*127:0*/ __Vtemp206[4];
    WData/*127:0*/ __Vtemp207[4];
    WData/*127:0*/ __Vtemp208[4];
    WData/*127:0*/ __Vtemp209[4];
    WData/*127:0*/ __Vtemp210[4];
    WData/*127:0*/ __Vtemp211[4];
    WData/*127:0*/ __Vtemp212[4];
    WData/*127:0*/ __Vtemp213[4];
    WData/*127:0*/ __Vtemp214[4];
    WData/*127:0*/ __Vtemp215[4];
    WData/*127:0*/ __Vtemp216[4];
    WData/*127:0*/ __Vtemp217[4];
    WData/*127:0*/ __Vtemp218[4];
    WData/*127:0*/ __Vtemp219[4];
    WData/*127:0*/ __Vtemp220[4];
    WData/*127:0*/ __Vtemp221[4];
    WData/*127:0*/ __Vtemp222[4];
    WData/*127:0*/ __Vtemp223[4];
    WData/*127:0*/ __Vtemp224[4];
    WData/*127:0*/ __Vtemp225[4];
    WData/*127:0*/ __Vtemp226[4];
    WData/*127:0*/ __Vtemp227[4];
    WData/*127:0*/ __Vtemp228[4];
    WData/*127:0*/ __Vtemp229[4];
    WData/*127:0*/ __Vtemp230[4];
    WData/*127:0*/ __Vtemp231[4];
    WData/*127:0*/ __Vtemp232[4];
    WData/*127:0*/ __Vtemp233[4];
    WData/*127:0*/ __Vtemp234[4];
    WData/*127:0*/ __Vtemp235[4];
    WData/*127:0*/ __Vtemp236[4];
    WData/*127:0*/ __Vtemp237[4];
    WData/*127:0*/ __Vtemp238[4];
    WData/*127:0*/ __Vtemp239[4];
    WData/*127:0*/ __Vtemp240[4];
    WData/*127:0*/ __Vtemp241[4];
    WData/*127:0*/ __Vtemp242[4];
    WData/*127:0*/ __Vtemp243[4];
    WData/*127:0*/ __Vtemp244[4];
    WData/*127:0*/ __Vtemp245[4];
    WData/*127:0*/ __Vtemp246[4];
    WData/*127:0*/ __Vtemp247[4];
    WData/*127:0*/ __Vtemp248[4];
    WData/*127:0*/ __Vtemp249[4];
    WData/*127:0*/ __Vtemp250[4];
    WData/*127:0*/ __Vtemp251[4];
    WData/*127:0*/ __Vtemp252[4];
    WData/*127:0*/ __Vtemp253[4];
    WData/*127:0*/ __Vtemp254[4];
    WData/*127:0*/ __Vtemp255[4];
    WData/*127:0*/ __Vtemp256[4];
    WData/*127:0*/ __Vtemp257[4];
    WData/*127:0*/ __Vtemp258[4];
    WData/*127:0*/ __Vtemp259[4];
    WData/*127:0*/ __Vtemp260[4];
    WData/*127:0*/ __Vtemp261[4];
    WData/*127:0*/ __Vtemp262[4];
    WData/*127:0*/ __Vtemp263[4];
    WData/*127:0*/ __Vtemp264[4];
    WData/*127:0*/ __Vtemp265[4];
    WData/*127:0*/ __Vtemp266[4];
    WData/*127:0*/ __Vtemp267[4];
    WData/*127:0*/ __Vtemp268[4];
    WData/*127:0*/ __Vtemp269[4];
    WData/*127:0*/ __Vtemp270[4];
    WData/*127:0*/ __Vtemp271[4];
    WData/*127:0*/ __Vtemp272[4];
    WData/*127:0*/ __Vtemp273[4];
    WData/*127:0*/ __Vtemp274[4];
    WData/*127:0*/ __Vtemp275[4];
    WData/*127:0*/ __Vtemp276[4];
    WData/*127:0*/ __Vtemp277[4];
    WData/*127:0*/ __Vtemp278[4];
    WData/*127:0*/ __Vtemp279[4];
    WData/*127:0*/ __Vtemp280[4];
    WData/*127:0*/ __Vtemp281[4];
    WData/*127:0*/ __Vtemp282[4];
    WData/*127:0*/ __Vtemp283[4];
    WData/*127:0*/ __Vtemp284[4];
    WData/*127:0*/ __Vtemp285[4];
    WData/*127:0*/ __Vtemp286[4];
    WData/*127:0*/ __Vtemp287[4];
    WData/*127:0*/ __Vtemp288[4];
    WData/*127:0*/ __Vtemp289[4];
    WData/*127:0*/ __Vtemp290[4];
    WData/*127:0*/ __Vtemp291[4];
    WData/*127:0*/ __Vtemp292[4];
    WData/*127:0*/ __Vtemp293[4];
    WData/*127:0*/ __Vtemp294[4];
    WData/*127:0*/ __Vtemp295[4];
    WData/*127:0*/ __Vtemp296[4];
    WData/*127:0*/ __Vtemp297[4];
    WData/*127:0*/ __Vtemp298[4];
    WData/*127:0*/ __Vtemp299[4];
    WData/*127:0*/ __Vtemp300[4];
    WData/*127:0*/ __Vtemp301[4];
    WData/*127:0*/ __Vtemp302[4];
    WData/*127:0*/ __Vtemp303[4];
    WData/*127:0*/ __Vtemp304[4];
    WData/*127:0*/ __Vtemp305[4];
    WData/*127:0*/ __Vtemp306[4];
    WData/*127:0*/ __Vtemp307[4];
    WData/*127:0*/ __Vtemp308[4];
    WData/*127:0*/ __Vtemp309[4];
    WData/*127:0*/ __Vtemp310[4];
    WData/*127:0*/ __Vtemp311[4];
    WData/*127:0*/ __Vtemp312[4];
    WData/*127:0*/ __Vtemp313[4];
    WData/*127:0*/ __Vtemp314[4];
    WData/*127:0*/ __Vtemp315[4];
    WData/*127:0*/ __Vtemp316[4];
    WData/*127:0*/ __Vtemp317[4];
    WData/*127:0*/ __Vtemp318[4];
    WData/*127:0*/ __Vtemp319[4];
    WData/*127:0*/ __Vtemp320[4];
    WData/*127:0*/ __Vtemp321[4];
    WData/*127:0*/ __Vtemp322[4];
    WData/*127:0*/ __Vtemp323[4];
    WData/*127:0*/ __Vtemp324[4];
    WData/*127:0*/ __Vtemp325[4];
    WData/*127:0*/ __Vtemp326[4];
    WData/*127:0*/ __Vtemp327[4];
    WData/*127:0*/ __Vtemp328[4];
    WData/*127:0*/ __Vtemp329[4];
    WData/*127:0*/ __Vtemp330[4];
    WData/*127:0*/ __Vtemp331[4];
    WData/*127:0*/ __Vtemp332[4];
    WData/*127:0*/ __Vtemp333[4];
    WData/*127:0*/ __Vtemp334[4];
    WData/*127:0*/ __Vtemp335[4];
    WData/*127:0*/ __Vtemp336[4];
    WData/*127:0*/ __Vtemp337[4];
    WData/*127:0*/ __Vtemp338[4];
    WData/*127:0*/ __Vtemp339[4];
    WData/*127:0*/ __Vtemp340[4];
    WData/*127:0*/ __Vtemp341[4];
    WData/*127:0*/ __Vtemp342[4];
    WData/*127:0*/ __Vtemp343[4];
    WData/*127:0*/ __Vtemp344[4];
    WData/*127:0*/ __Vtemp345[4];
    WData/*127:0*/ __Vtemp346[4];
    WData/*127:0*/ __Vtemp347[4];
    WData/*127:0*/ __Vtemp348[4];
    WData/*127:0*/ __Vtemp349[4];
    WData/*127:0*/ __Vtemp350[4];
    WData/*127:0*/ __Vtemp351[4];
    WData/*127:0*/ __Vtemp352[4];
    WData/*127:0*/ __Vtemp353[4];
    WData/*127:0*/ __Vtemp354[4];
    WData/*127:0*/ __Vtemp355[4];
    WData/*127:0*/ __Vtemp356[4];
    WData/*127:0*/ __Vtemp357[4];
    WData/*127:0*/ __Vtemp358[4];
    WData/*127:0*/ __Vtemp359[4];
    WData/*127:0*/ __Vtemp360[4];
    WData/*127:0*/ __Vtemp361[4];
    WData/*127:0*/ __Vtemp362[4];
    WData/*127:0*/ __Vtemp363[4];
    WData/*127:0*/ __Vtemp364[4];
    WData/*127:0*/ __Vtemp365[4];
    WData/*127:0*/ __Vtemp366[4];
    WData/*127:0*/ __Vtemp367[4];
    WData/*127:0*/ __Vtemp368[4];
    WData/*127:0*/ __Vtemp369[4];
    WData/*127:0*/ __Vtemp370[4];
    WData/*127:0*/ __Vtemp371[4];
    WData/*127:0*/ __Vtemp372[4];
    WData/*127:0*/ __Vtemp373[4];
    WData/*127:0*/ __Vtemp374[4];
    WData/*127:0*/ __Vtemp375[4];
    WData/*127:0*/ __Vtemp376[4];
    WData/*127:0*/ __Vtemp377[4];
    WData/*127:0*/ __Vtemp378[4];
    WData/*127:0*/ __Vtemp379[4];
    WData/*127:0*/ __Vtemp380[4];
    WData/*127:0*/ __Vtemp381[4];
    WData/*127:0*/ __Vtemp382[4];
    WData/*127:0*/ __Vtemp383[4];
    WData/*127:0*/ __Vtemp384[4];
    WData/*127:0*/ __Vtemp385[4];
    WData/*127:0*/ __Vtemp386[4];
    WData/*127:0*/ __Vtemp387[4];
    WData/*127:0*/ __Vtemp388[4];
    WData/*127:0*/ __Vtemp389[4];
    WData/*127:0*/ __Vtemp390[4];
    WData/*127:0*/ __Vtemp391[4];
    WData/*127:0*/ __Vtemp392[4];
    WData/*127:0*/ __Vtemp393[4];
    WData/*127:0*/ __Vtemp394[4];
    WData/*127:0*/ __Vtemp395[4];
    WData/*127:0*/ __Vtemp396[4];
    WData/*127:0*/ __Vtemp397[4];
    WData/*127:0*/ __Vtemp398[4];
    WData/*127:0*/ __Vtemp399[4];
    WData/*127:0*/ __Vtemp400[4];
    WData/*127:0*/ __Vtemp401[4];
    WData/*127:0*/ __Vtemp402[4];
    WData/*127:0*/ __Vtemp403[4];
    WData/*127:0*/ __Vtemp404[4];
    WData/*127:0*/ __Vtemp405[4];
    WData/*127:0*/ __Vtemp406[4];
    WData/*127:0*/ __Vtemp407[4];
    WData/*127:0*/ __Vtemp408[4];
    WData/*127:0*/ __Vtemp409[4];
    WData/*127:0*/ __Vtemp410[4];
    WData/*127:0*/ __Vtemp411[4];
    WData/*127:0*/ __Vtemp412[4];
    WData/*127:0*/ __Vtemp413[4];
    WData/*127:0*/ __Vtemp414[4];
    WData/*127:0*/ __Vtemp415[4];
    WData/*127:0*/ __Vtemp416[4];
    WData/*127:0*/ __Vtemp417[4];
    WData/*127:0*/ __Vtemp418[4];
    WData/*127:0*/ __Vtemp419[4];
    WData/*127:0*/ __Vtemp420[4];
    WData/*127:0*/ __Vtemp421[4];
    WData/*127:0*/ __Vtemp422[4];
    WData/*127:0*/ __Vtemp423[4];
    WData/*127:0*/ __Vtemp424[4];
    WData/*127:0*/ __Vtemp425[4];
    WData/*127:0*/ __Vtemp426[4];
    WData/*127:0*/ __Vtemp427[4];
    WData/*127:0*/ __Vtemp428[4];
    WData/*127:0*/ __Vtemp429[4];
    WData/*127:0*/ __Vtemp430[4];
    WData/*127:0*/ __Vtemp431[4];
    WData/*127:0*/ __Vtemp432[4];
    WData/*127:0*/ __Vtemp433[4];
    WData/*127:0*/ __Vtemp434[4];
    WData/*127:0*/ __Vtemp435[4];
    WData/*127:0*/ __Vtemp436[4];
    WData/*127:0*/ __Vtemp437[4];
    WData/*127:0*/ __Vtemp438[4];
    WData/*127:0*/ __Vtemp439[4];
    WData/*127:0*/ __Vtemp440[4];
    WData/*127:0*/ __Vtemp441[4];
    WData/*127:0*/ __Vtemp442[4];
    WData/*127:0*/ __Vtemp443[4];
    WData/*127:0*/ __Vtemp444[4];
    WData/*127:0*/ __Vtemp445[4];
    WData/*127:0*/ __Vtemp446[4];
    WData/*127:0*/ __Vtemp447[4];
    WData/*127:0*/ __Vtemp448[4];
    WData/*127:0*/ __Vtemp449[4];
    WData/*127:0*/ __Vtemp450[4];
    WData/*127:0*/ __Vtemp451[4];
    WData/*127:0*/ __Vtemp452[4];
    WData/*127:0*/ __Vtemp453[4];
    WData/*127:0*/ __Vtemp454[4];
    WData/*127:0*/ __Vtemp455[4];
    WData/*127:0*/ __Vtemp456[4];
    WData/*127:0*/ __Vtemp457[4];
    WData/*127:0*/ __Vtemp458[4];
    WData/*127:0*/ __Vtemp459[4];
    WData/*127:0*/ __Vtemp460[4];
    WData/*127:0*/ __Vtemp461[4];
    WData/*127:0*/ __Vtemp462[4];
    WData/*127:0*/ __Vtemp463[4];
    WData/*127:0*/ __Vtemp464[4];
    WData/*127:0*/ __Vtemp465[4];
    WData/*127:0*/ __Vtemp466[4];
    WData/*127:0*/ __Vtemp467[4];
    WData/*127:0*/ __Vtemp468[4];
    WData/*127:0*/ __Vtemp469[4];
    WData/*127:0*/ __Vtemp470[4];
    WData/*127:0*/ __Vtemp471[4];
    WData/*127:0*/ __Vtemp472[4];
    WData/*127:0*/ __Vtemp473[4];
    WData/*127:0*/ __Vtemp474[4];
    WData/*127:0*/ __Vtemp475[4];
    WData/*127:0*/ __Vtemp476[4];
    WData/*127:0*/ __Vtemp477[4];
    WData/*127:0*/ __Vtemp478[4];
    WData/*127:0*/ __Vtemp479[4];
    WData/*127:0*/ __Vtemp480[4];
    WData/*127:0*/ __Vtemp481[4];
    WData/*127:0*/ __Vtemp482[4];
    WData/*127:0*/ __Vtemp483[4];
    WData/*127:0*/ __Vtemp484[4];
    WData/*127:0*/ __Vtemp485[4];
    WData/*127:0*/ __Vtemp486[4];
    WData/*127:0*/ __Vtemp487[4];
    WData/*127:0*/ __Vtemp488[4];
    WData/*127:0*/ __Vtemp489[4];
    WData/*127:0*/ __Vtemp490[4];
    WData/*127:0*/ __Vtemp491[4];
    WData/*127:0*/ __Vtemp492[4];
    WData/*127:0*/ __Vtemp493[4];
    WData/*127:0*/ __Vtemp494[4];
    WData/*127:0*/ __Vtemp495[4];
    WData/*127:0*/ __Vtemp496[4];
    WData/*127:0*/ __Vtemp497[4];
    WData/*127:0*/ __Vtemp498[4];
    WData/*127:0*/ __Vtemp499[4];
    WData/*127:0*/ __Vtemp500[4];
    WData/*127:0*/ __Vtemp501[4];
    WData/*127:0*/ __Vtemp502[4];
    WData/*127:0*/ __Vtemp503[4];
    WData/*127:0*/ __Vtemp504[4];
    WData/*127:0*/ __Vtemp505[4];
    WData/*127:0*/ __Vtemp506[4];
    WData/*127:0*/ __Vtemp507[4];
    WData/*127:0*/ __Vtemp508[4];
    WData/*127:0*/ __Vtemp509[4];
    WData/*127:0*/ __Vtemp510[4];
    WData/*127:0*/ __Vtemp511[4];
    WData/*127:0*/ __Vtemp512[4];
    WData/*127:0*/ __Vtemp513[4];
    WData/*127:0*/ __Vtemp514[4];
    WData/*127:0*/ __Vtemp515[4];
    WData/*127:0*/ __Vtemp516[4];
    WData/*127:0*/ __Vtemp517[4];
    WData/*127:0*/ __Vtemp518[4];
    WData/*127:0*/ __Vtemp519[4];
    WData/*127:0*/ __Vtemp520[4];
    WData/*127:0*/ __Vtemp521[4];
    WData/*127:0*/ __Vtemp522[4];
    WData/*127:0*/ __Vtemp523[4];
    WData/*127:0*/ __Vtemp524[4];
    WData/*127:0*/ __Vtemp525[4];
    WData/*127:0*/ __Vtemp526[4];
    WData/*127:0*/ __Vtemp527[4];
    WData/*127:0*/ __Vtemp528[4];
    WData/*127:0*/ __Vtemp529[4];
    WData/*127:0*/ __Vtemp530[4];
    WData/*127:0*/ __Vtemp531[4];
    WData/*127:0*/ __Vtemp532[4];
    WData/*127:0*/ __Vtemp533[4];
    WData/*127:0*/ __Vtemp534[4];
    WData/*127:0*/ __Vtemp535[4];
    WData/*127:0*/ __Vtemp536[4];
    WData/*127:0*/ __Vtemp537[4];
    WData/*127:0*/ __Vtemp538[4];
    WData/*127:0*/ __Vtemp539[4];
    WData/*127:0*/ __Vtemp540[4];
    WData/*127:0*/ __Vtemp541[4];
    WData/*127:0*/ __Vtemp542[4];
    WData/*127:0*/ __Vtemp543[4];
    WData/*127:0*/ __Vtemp544[4];
    WData/*127:0*/ __Vtemp545[4];
    WData/*127:0*/ __Vtemp546[4];
    WData/*127:0*/ __Vtemp547[4];
    WData/*127:0*/ __Vtemp548[4];
    WData/*127:0*/ __Vtemp549[4];
    WData/*127:0*/ __Vtemp550[4];
    WData/*127:0*/ __Vtemp551[4];
    WData/*127:0*/ __Vtemp552[4];
    WData/*127:0*/ __Vtemp553[4];
    WData/*127:0*/ __Vtemp554[4];
    WData/*127:0*/ __Vtemp555[4];
    WData/*127:0*/ __Vtemp556[4];
    WData/*127:0*/ __Vtemp557[4];
    WData/*127:0*/ __Vtemp558[4];
    WData/*127:0*/ __Vtemp559[4];
    WData/*127:0*/ __Vtemp560[4];
    WData/*127:0*/ __Vtemp561[4];
    WData/*127:0*/ __Vtemp562[4];
    WData/*127:0*/ __Vtemp563[4];
    WData/*127:0*/ __Vtemp564[4];
    WData/*127:0*/ __Vtemp565[4];
    WData/*127:0*/ __Vtemp566[4];
    WData/*127:0*/ __Vtemp567[4];
    WData/*127:0*/ __Vtemp568[4];
    WData/*127:0*/ __Vtemp569[4];
    WData/*127:0*/ __Vtemp570[4];
    WData/*127:0*/ __Vtemp571[4];
    WData/*127:0*/ __Vtemp572[4];
    WData/*127:0*/ __Vtemp573[4];
    WData/*127:0*/ __Vtemp574[4];
    WData/*127:0*/ __Vtemp575[4];
    WData/*95:0*/ __Vtemp576[3];
    // Body
    vlTOPp->mkbbox__DOT__CLK = vlTOPp->CLK;
    vlTOPp->mkbbox__DOT__RST_N = vlTOPp->RST_N;
    vlTOPp->mkbbox__DOT__instr = vlTOPp->instr;
    vlTOPp->mkbbox__DOT__rs1 = vlTOPp->rs1;
    vlTOPp->mkbbox__DOT__rs2 = vlTOPp->rs2;
    vlTOPp->mkbbox__DOT__rg_input_D_IN[0U] = (IData)(vlTOPp->rs2);
    vlTOPp->mkbbox__DOT__rg_input_D_IN[1U] = (IData)(
                                                     (vlTOPp->rs2 
                                                      >> 0x20U));
    vlTOPp->mkbbox__DOT__rg_input_D_IN[2U] = (IData)(vlTOPp->rs1);
    vlTOPp->mkbbox__DOT__rg_input_D_IN[3U] = (IData)(
                                                     (vlTOPp->rs1 
                                                      >> 0x20U));
    vlTOPp->mkbbox__DOT__rg_input_D_IN[4U] = vlTOPp->instr;
    vlTOPp->mkbbox__DOT__y___05Fh10581 = ((QData)((IData)(
                                                          (0xffU 
                                                           & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                               << 8U) 
                                                              | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                 >> 0x18U))))) 
                                          << 0x38U);
    vlTOPp->mkbbox__DOT__a___05Fh3877 = (QData)((IData)(
                                                        (0x3fU 
                                                         & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                            >> 0x14U))));
    vlTOPp->mkbbox__DOT__y___05Fh10584 = ((QData)((IData)(
                                                          (0xffU 
                                                           & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                               << 8U) 
                                                              | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                 >> 0x18U))))) 
                                          << 0x30U);
    vlTOPp->mkbbox__DOT__y___05Fh10587 = ((QData)((IData)(
                                                          (0xffU 
                                                           & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                               << 8U) 
                                                              | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                 >> 0x18U))))) 
                                          << 0x28U);
    vlTOPp->mkbbox__DOT__y___05Fh11611 = ((QData)((IData)(
                                                          vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                          << 1U);
    vlTOPp->mkbbox__DOT__y___05Fh10590 = ((QData)((IData)(
                                                          (0xffU 
                                                           & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                               << 8U) 
                                                              | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                 >> 0x18U))))) 
                                          << 0x20U);
    vlTOPp->mkbbox__DOT__y___05Fh11645 = ((QData)((IData)(
                                                          vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                          << 2U);
    vlTOPp->mkbbox__DOT__y___05Fh11679 = ((QData)((IData)(
                                                          vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                          << 3U);
    vlTOPp->mkbbox__DOT__result___05Fh1639 = (QData)((IData)(
                                                             (0xffffU 
                                                              & vlTOPp->mkbbox__DOT__rg_input[2U])));
    vlTOPp->mkbbox__DOT__b___05Fh11276 = (0x3fU & vlTOPp->mkbbox__DOT__rg_input[4U]);
    vlTOPp->mkbbox__DOT__y___05Fh10593 = ((QData)((IData)(
                                                          (0xffU 
                                                           & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                               << 8U) 
                                                              | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                 >> 0x18U))))) 
                                          << 0x18U);
    vlTOPp->mkbbox__DOT__x___05Fh11791 = (0x3fU & (
                                                   vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                   >> 0x14U));
    vlTOPp->mkbbox__DOT__y___05Fh3843 = (QData)((IData)(
                                                        vlTOPp->mkbbox__DOT__rg_input[2U]));
    vlTOPp->mkbbox__DOT__b___05Fh11421 = (0x1fU & vlTOPp->mkbbox__DOT__rg_input[4U]);
    vlTOPp->mkbbox__DOT__y___05Fh10596 = ((QData)((IData)(
                                                          (0xffU 
                                                           & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                               << 8U) 
                                                              | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                 >> 0x18U))))) 
                                          << 0x10U);
    vlTOPp->mkbbox__DOT__y___05Fh10599 = ((QData)((IData)(
                                                          (0xffU 
                                                           & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                               << 8U) 
                                                              | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                 >> 0x18U))))) 
                                          << 8U);
    vlTOPp->mkbbox__DOT__y___05Fh14447 = ((QData)((IData)(
                                                          (1U 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x3fU);
    vlTOPp->mkbbox__DOT__a___05Fh11837 = (QData)((IData)(
                                                         (0x3fU 
                                                          & vlTOPp->mkbbox__DOT__rg_input[0U])));
    vlTOPp->mkbbox__DOT__y___05Fh14431 = ((QData)((IData)(
                                                          (3U 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x3eU);
    vlTOPp->mkbbox__DOT__x___05Fh14446 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x1fU))));
    vlTOPp->mkbbox__DOT__y___05Fh14415 = ((QData)((IData)(
                                                          (7U 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x3dU);
    vlTOPp->mkbbox__DOT__y___05Fh16976 = (0x7fffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x1fU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 1U))));
    vlTOPp->mkbbox__DOT__y___05Fh14399 = ((QData)((IData)(
                                                          (0xfU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x3cU);
    vlTOPp->mkbbox__DOT__x___05Fh14430 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x1eU))));
    vlTOPp->mkbbox__DOT__y___05Fh16958 = (0x3fffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x3eU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x1eU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 2U))));
    vlTOPp->mkbbox__DOT__rg_input_BITS_127_TO_64_48_ULE_rg_input_BITS_6_ETC___05F_d2066 
        = ((((QData)((IData)(vlTOPp->mkbbox__DOT__rg_input[3U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkbbox__DOT__rg_input[2U]))) 
           <= (((QData)((IData)(vlTOPp->mkbbox__DOT__rg_input[1U])) 
                << 0x20U) | (QData)((IData)(vlTOPp->mkbbox__DOT__rg_input[0U]))));
    vlTOPp->mkbbox__DOT__rg_input_BITS_127_TO_64_48_ULT_rg_input_BITS_6_ETC___05F_d2062 
        = ((((QData)((IData)(vlTOPp->mkbbox__DOT__rg_input[3U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkbbox__DOT__rg_input[2U]))) 
           < (((QData)((IData)(vlTOPp->mkbbox__DOT__rg_input[1U])) 
               << 0x20U) | (QData)((IData)(vlTOPp->mkbbox__DOT__rg_input[0U]))));
    vlTOPp->mkbbox__DOT__rg_input_BIT_127_046_EQ_rg_input_BIT_63_040___05F_d2061 
        = ((1U & (vlTOPp->mkbbox__DOT__rg_input[3U] 
                  >> 0x1fU)) == (1U & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                       >> 0x1fU)));
    vlTOPp->mkbbox__DOT__y___05Fh14383 = ((QData)((IData)(
                                                          (0x1fU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x3bU);
    vlTOPp->mkbbox__DOT__x___05Fh14414 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x1dU))));
    vlTOPp->mkbbox__DOT__y___05Fh11832 = (~ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT__rg_input[0U]))));
    vlTOPp->mkbbox__DOT__y___05Fh16940 = (0x1fffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x3dU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x1dU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 3U))));
    vlTOPp->mkbbox__DOT__y___05Fh14367 = ((QData)((IData)(
                                                          (0x3fU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x3aU);
    vlTOPp->mkbbox__DOT__x___05Fh14398 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x1cU))));
    vlTOPp->mkbbox__DOT__y___05Fh16922 = (0xfffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x3cU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x1cU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 4U))));
    vlTOPp->mkbbox__DOT__y___05Fh14351 = ((QData)((IData)(
                                                          (0x7fU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x39U);
    vlTOPp->mkbbox__DOT__x___05Fh14382 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x1bU))));
    vlTOPp->mkbbox__DOT__y___05Fh16904 = (0x7ffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x3bU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x1bU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 5U))));
    vlTOPp->mkbbox__DOT__y___05Fh14335 = ((QData)((IData)(
                                                          (0xffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x38U);
    vlTOPp->mkbbox__DOT__x___05Fh14366 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x1aU))));
    vlTOPp->mkbbox__DOT__rg_input_BITS_71_TO_64___05Fq3 
        = (0xffU & vlTOPp->mkbbox__DOT__rg_input[2U]);
    vlTOPp->mkbbox__DOT__rg_input_BITS_79_TO_64___05Fq4 
        = (0xffffU & vlTOPp->mkbbox__DOT__rg_input[2U]);
    vlTOPp->mkbbox__DOT__y___05Fh16886 = (0x3ffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x3aU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x1aU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 6U))));
    vlTOPp->mkbbox__DOT__y___05Fh14319 = ((QData)((IData)(
                                                          (0x1ffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x37U);
    vlTOPp->mkbbox__DOT__x___05Fh14350 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x19U))));
    vlTOPp->mkbbox__DOT__y___05Fh16868 = (0x1ffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x39U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x19U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 7U))));
    vlTOPp->mkbbox__DOT__y___05Fh14303 = ((QData)((IData)(
                                                          (0x3ffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x36U);
    vlTOPp->mkbbox__DOT__x___05Fh14334 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x18U))));
    vlTOPp->mkbbox__DOT__x___05Fh33388 = ((((QData)((IData)(
                                                            vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT__rg_input[0U]))));
    vlTOPp->mkbbox__DOT__b___05Fh32884 = (0x3fU & vlTOPp->mkbbox__DOT__rg_input[0U]);
    vlTOPp->mkbbox__DOT__y___05Fh16850 = (0xffffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x18U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 8U))));
    vlTOPp->mkbbox__DOT__y___05Fh14287 = ((QData)((IData)(
                                                          (0x7ffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x35U);
    vlTOPp->mkbbox__DOT__x___05Fh14318 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x17U))));
    vlTOPp->mkbbox__DOT__b___05Fh11177 = (0x1fU & vlTOPp->mkbbox__DOT__rg_input[0U]);
    vlTOPp->mkbbox__DOT__y___05Fh16832 = (0x7fffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x37U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x17U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 9U))));
    vlTOPp->mkbbox__DOT__y___05Fh14271 = ((QData)((IData)(
                                                          (0xfffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x34U);
    vlTOPp->mkbbox__DOT__x___05Fh14302 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x16U))));
    vlTOPp->mkbbox__DOT__y___05Fh16814 = (0x3fffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x36U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x16U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0xaU))));
    vlTOPp->mkbbox__DOT__y___05Fh14255 = ((QData)((IData)(
                                                          (0x1fffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x33U);
    vlTOPp->mkbbox__DOT__x___05Fh14286 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x15U))));
    vlTOPp->mkbbox__DOT__y___05Fh16796 = (0x1fffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x35U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x15U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0xbU))));
    vlTOPp->mkbbox__DOT__y___05Fh14239 = ((QData)((IData)(
                                                          (0x3fffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x32U);
    vlTOPp->mkbbox__DOT__x___05Fh14270 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x14U))));
    vlTOPp->mkbbox__DOT__y___05Fh16778 = (0xfffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x34U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x14U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0xcU))));
    vlTOPp->mkbbox__DOT__y___05Fh14223 = ((QData)((IData)(
                                                          (0x7fffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x31U);
    vlTOPp->mkbbox__DOT__x___05Fh14254 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x13U))));
    vlTOPp->mkbbox__DOT__y___05Fh16760 = (0x7ffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x33U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x13U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0xdU))));
    vlTOPp->mkbbox__DOT__y___05Fh14207 = ((QData)((IData)(
                                                          (0xffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x30U);
    vlTOPp->mkbbox__DOT__x___05Fh14238 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x12U))));
    vlTOPp->mkbbox__DOT__y___05Fh16742 = (0x3ffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x32U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x12U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0xeU))));
    vlTOPp->mkbbox__DOT__y___05Fh14191 = ((QData)((IData)(
                                                          (0x1ffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x2fU);
    vlTOPp->mkbbox__DOT__x___05Fh14222 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x11U))));
    vlTOPp->mkbbox__DOT__y___05Fh16724 = (0x1ffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x31U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x11U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0xfU))));
    vlTOPp->mkbbox__DOT__y___05Fh14175 = ((QData)((IData)(
                                                          (0x3ffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x2eU);
    vlTOPp->mkbbox__DOT__x___05Fh14206 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0x10U))));
    vlTOPp->mkbbox__DOT__y___05Fh16706 = (0xffffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0x10U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x10U))));
    vlTOPp->mkbbox__DOT__y___05Fh14159 = ((QData)((IData)(
                                                          (0x7ffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x2dU);
    vlTOPp->mkbbox__DOT__x___05Fh14190 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0xfU))));
    vlTOPp->mkbbox__DOT__y___05Fh16688 = (0x7fffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x2fU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0xfU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x11U))));
    vlTOPp->mkbbox__DOT__y___05Fh14143 = ((QData)((IData)(
                                                          (0xfffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x2cU);
    vlTOPp->mkbbox__DOT__x___05Fh14174 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0xeU))));
    vlTOPp->mkbbox__DOT__y___05Fh16670 = (0x3fffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x2eU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0xeU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x12U))));
    vlTOPp->mkbbox__DOT__y___05Fh14127 = ((QData)((IData)(
                                                          (0x1fffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x2bU);
    vlTOPp->mkbbox__DOT__x___05Fh14158 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0xdU))));
    vlTOPp->mkbbox__DOT__y___05Fh16652 = (0x1fffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x2dU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0xdU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x13U))));
    vlTOPp->mkbbox__DOT__y___05Fh14111 = ((QData)((IData)(
                                                          (0x3fffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x2aU);
    vlTOPp->mkbbox__DOT__x___05Fh14142 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0xcU))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_71_TO_64_93_EQ_0_086_THEN_0_E_ETC___05F_d2087 
        = ((0U == (0xffU & vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? 0ULL : 0xffULL);
    vlTOPp->mkbbox__DOT__y___05Fh16634 = (0xfffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x2cU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x14U))));
    vlTOPp->mkbbox__DOT__y___05Fh14095 = ((QData)((IData)(
                                                          (0x7fffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x29U);
    vlTOPp->mkbbox__DOT__x___05Fh14126 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0xbU))));
    vlTOPp->mkbbox__DOT__y___05Fh16616 = (0x7ffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x2bU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0xbU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x15U))));
    vlTOPp->mkbbox__DOT__y___05Fh14079 = ((QData)((IData)(
                                                          (0xffffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x28U);
    vlTOPp->mkbbox__DOT__x___05Fh14110 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 0xaU))));
    vlTOPp->mkbbox__DOT__y___05Fh16598 = (0x3ffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x2aU) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 0xaU) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x16U))));
    vlTOPp->mkbbox__DOT__y___05Fh14063 = ((QData)((IData)(
                                                          (0x1ffffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x27U);
    vlTOPp->mkbbox__DOT__x___05Fh14094 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 9U))));
    vlTOPp->mkbbox__DOT__y___05Fh16580 = (0x1ffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x29U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 9U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x17U))));
    vlTOPp->mkbbox__DOT__y___05Fh14047 = ((QData)((IData)(
                                                          (0x3ffffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x26U);
    vlTOPp->mkbbox__DOT__x___05Fh14078 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 8U))));
    vlTOPp->mkbbox__DOT__y___05Fh16562 = (0xffffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x28U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 8U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x18U))));
    vlTOPp->mkbbox__DOT__y___05Fh14031 = ((QData)((IData)(
                                                          (0x7ffffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x25U);
    vlTOPp->mkbbox__DOT__x___05Fh14062 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 7U))));
    vlTOPp->mkbbox__DOT__y___05Fh16544 = (0x7fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x27U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 7U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x19U))));
    vlTOPp->mkbbox__DOT__y___05Fh14015 = ((QData)((IData)(
                                                          (0xfffffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x24U);
    vlTOPp->mkbbox__DOT__x___05Fh14046 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 6U))));
    vlTOPp->mkbbox__DOT__y___05Fh16526 = (0x3fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x26U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 6U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x1aU))));
    vlTOPp->mkbbox__DOT__y___05Fh13999 = ((QData)((IData)(
                                                          (0x1fffffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x23U);
    vlTOPp->mkbbox__DOT__x___05Fh14030 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 5U))));
    vlTOPp->mkbbox__DOT__y___05Fh16508 = (0x1fffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x25U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 5U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x1bU))));
    vlTOPp->mkbbox__DOT__y___05Fh13983 = ((QData)((IData)(
                                                          (0x3fffffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x22U);
    vlTOPp->mkbbox__DOT__x___05Fh14014 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 4U))));
    vlTOPp->mkbbox__DOT__y___05Fh16490 = (0xfffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x24U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 4U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x1cU))));
    vlTOPp->mkbbox__DOT__y___05Fh13967 = ((QData)((IData)(
                                                          (0x7fffffffU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                          << 0x21U);
    vlTOPp->mkbbox__DOT__x___05Fh13998 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 3U))));
    vlTOPp->mkbbox__DOT__y___05Fh16472 = (0x7ffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x23U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 3U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x1dU))));
    vlTOPp->mkbbox__DOT__y___05Fh13951 = ((QData)((IData)(
                                                          vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                          << 0x20U);
    vlTOPp->mkbbox__DOT__x___05Fh13982 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 2U))));
    vlTOPp->mkbbox__DOT__y___05Fh16454 = (0x3ffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x22U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 2U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x1eU))));
    vlTOPp->mkbbox__DOT__y___05Fh13935 = (0xffffffff80000000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x3fU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x1fU)));
    vlTOPp->mkbbox__DOT__x___05Fh13966 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                             >> 1U))));
    vlTOPp->mkbbox__DOT__y___05Fh16436 = (0x1ffffffffULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[4U])) 
                                              << 0x21U) 
                                             | (((QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                 << 1U) 
                                                | ((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                   >> 0x1fU))));
    vlTOPp->mkbbox__DOT__y___05Fh13919 = (0xffffffffc0000000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x3eU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x1eU)));
    vlTOPp->mkbbox__DOT__x___05Fh13950 = (QData)((IData)(
                                                         (1U 
                                                          & vlTOPp->mkbbox__DOT__rg_input[1U])));
    vlTOPp->mkbbox__DOT__y___05Fh16418 = (QData)((IData)(
                                                         vlTOPp->mkbbox__DOT__rg_input[3U]));
    vlTOPp->mkbbox__DOT__y___05Fh13903 = (0xffffffffe0000000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x3dU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x1dU)));
    vlTOPp->mkbbox__DOT__x___05Fh13934 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x1fU))));
    vlTOPp->mkbbox__DOT__y___05Fh16400 = (QData)((IData)(
                                                         (0x7fffffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x1fU) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 1U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13887 = (0xfffffffff0000000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x3cU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x1cU)));
    vlTOPp->mkbbox__DOT__x___05Fh13918 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x1eU))));
    vlTOPp->mkbbox__DOT__y___05Fh16382 = (QData)((IData)(
                                                         (0x3fffffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x1eU) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 2U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13871 = (0xfffffffff8000000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x3bU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x1bU)));
    vlTOPp->mkbbox__DOT__x___05Fh13902 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x1dU))));
    vlTOPp->mkbbox__DOT__y___05Fh16364 = (QData)((IData)(
                                                         (0x1fffffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x1dU) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 3U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13855 = (0xfffffffffc000000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x3aU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x1aU)));
    vlTOPp->mkbbox__DOT__x___05Fh13886 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x1cU))));
    vlTOPp->mkbbox__DOT__y___05Fh16346 = (QData)((IData)(
                                                         (0xfffffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x1cU) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 4U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13839 = (0xfffffffffe000000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x39U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x19U)));
    vlTOPp->mkbbox__DOT__x___05Fh13870 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x1bU))));
    vlTOPp->mkbbox__DOT__y___05Fh16328 = (QData)((IData)(
                                                         (0x7ffffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x1bU) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 5U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13823 = (0xffffffffff000000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x38U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x18U)));
    vlTOPp->mkbbox__DOT__x___05Fh13854 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x1aU))));
    vlTOPp->mkbbox__DOT__y___05Fh16310 = (QData)((IData)(
                                                         (0x3ffffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x1aU) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 6U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13807 = (0xffffffffff800000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x37U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x17U)));
    vlTOPp->mkbbox__DOT__x___05Fh13838 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x19U))));
    vlTOPp->mkbbox__DOT__y___05Fh16292 = (QData)((IData)(
                                                         (0x1ffffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x19U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 7U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13791 = (0xffffffffffc00000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x36U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x16U)));
    vlTOPp->mkbbox__DOT__x___05Fh13822 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x18U))));
    vlTOPp->mkbbox__DOT__y___05Fh16274 = (QData)((IData)(
                                                         (0xffffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x18U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 8U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13775 = (0xffffffffffe00000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x35U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x15U)));
    vlTOPp->mkbbox__DOT__x___05Fh13806 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x17U))));
    vlTOPp->mkbbox__DOT__y___05Fh16256 = (QData)((IData)(
                                                         (0x7fffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x17U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 9U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13759 = (0xfffffffffff00000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x34U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x14U)));
    vlTOPp->mkbbox__DOT__x___05Fh13790 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x16U))));
    vlTOPp->mkbbox__DOT__y___05Fh16238 = (QData)((IData)(
                                                         (0x3fffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x16U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0xaU)))));
    vlTOPp->mkbbox__DOT__y___05Fh13743 = (0xfffffffffff80000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x33U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x13U)));
    vlTOPp->mkbbox__DOT__x___05Fh13774 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x15U))));
    vlTOPp->mkbbox__DOT__y___05Fh16220 = (QData)((IData)(
                                                         (0x1fffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x15U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0xbU)))));
    vlTOPp->mkbbox__DOT__y___05Fh13727 = (0xfffffffffffc0000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x32U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x12U)));
    vlTOPp->mkbbox__DOT__x___05Fh13758 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x14U))));
    vlTOPp->mkbbox__DOT__y___05Fh16202 = (QData)((IData)(
                                                         (0xfffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x14U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0xcU)))));
    vlTOPp->mkbbox__DOT__y___05Fh13711 = (0xfffffffffffe0000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x31U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x11U)));
    vlTOPp->mkbbox__DOT__x___05Fh13742 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x13U))));
    vlTOPp->mkbbox__DOT__y___05Fh16184 = (QData)((IData)(
                                                         (0x7ffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x13U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0xdU)))));
    vlTOPp->mkbbox__DOT__y___05Fh13695 = (0xffffffffffff0000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x30U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0x10U)));
    vlTOPp->mkbbox__DOT__x___05Fh13726 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x12U))));
    vlTOPp->mkbbox__DOT__y___05Fh16166 = (QData)((IData)(
                                                         (0x3ffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x12U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0xeU)))));
    vlTOPp->mkbbox__DOT__y___05Fh13679 = (0xffffffffffff8000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x2fU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0xfU)));
    vlTOPp->mkbbox__DOT__x___05Fh13710 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x11U))));
    vlTOPp->mkbbox__DOT__y___05Fh16148 = (QData)((IData)(
                                                         (0x1ffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x11U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0xfU)))));
    vlTOPp->mkbbox__DOT__y___05Fh13663 = (0xffffffffffffc000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x2eU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0xeU)));
    vlTOPp->mkbbox__DOT__x___05Fh13694 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0x10U))));
    vlTOPp->mkbbox__DOT__y___05Fh16130 = (QData)((IData)(
                                                         (0xffffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0x10U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x10U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13647 = (0xffffffffffffe000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x2dU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0xdU)));
    vlTOPp->mkbbox__DOT__x___05Fh13678 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0xfU))));
    vlTOPp->mkbbox__DOT__y___05Fh16112 = (QData)((IData)(
                                                         (0x7fffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0xfU) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x11U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13631 = (0xfffffffffffff000ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x2cU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0xcU)));
    vlTOPp->mkbbox__DOT__x___05Fh13662 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0xeU))));
    vlTOPp->mkbbox__DOT__y___05Fh16094 = (QData)((IData)(
                                                         (0x3fffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0xeU) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x12U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13615 = (0xfffffffffffff800ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x2bU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0xbU)));
    vlTOPp->mkbbox__DOT__x___05Fh13646 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0xdU))));
    vlTOPp->mkbbox__DOT__y___05Fh16076 = (QData)((IData)(
                                                         (0x1fffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0xdU) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x13U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13599 = (0xfffffffffffffc00ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x2aU) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 0xaU)));
    vlTOPp->mkbbox__DOT__x___05Fh13630 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0xcU))));
    vlTOPp->mkbbox__DOT__y___05Fh16058 = (QData)((IData)(
                                                         (0xfffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0xcU) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x14U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13583 = (0xfffffffffffffe00ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x29U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 9U)));
    vlTOPp->mkbbox__DOT__x___05Fh13614 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0xbU))));
    vlTOPp->mkbbox__DOT__y___05Fh16040 = (QData)((IData)(
                                                         (0x7ffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0xbU) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x15U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13567 = (0xffffffffffffff00ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x28U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 8U)));
    vlTOPp->mkbbox__DOT__x___05Fh13598 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 0xaU))));
    vlTOPp->mkbbox__DOT__y___05Fh16022 = (QData)((IData)(
                                                         (0x3ffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 0xaU) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x16U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13551 = (0xffffffffffffff80ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x27U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 7U)));
    vlTOPp->mkbbox__DOT__x___05Fh13582 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 9U))));
    vlTOPp->mkbbox__DOT__y___05Fh16004 = (QData)((IData)(
                                                         (0x1ffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 9U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x17U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13535 = (0xffffffffffffffc0ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x26U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 6U)));
    vlTOPp->mkbbox__DOT__x___05Fh13566 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 8U))));
    vlTOPp->mkbbox__DOT__x___05Fh10598 = (QData)((IData)(
                                                         (0xffU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 8U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x18U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13519 = (0xffffffffffffffe0ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x25U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 5U)));
    vlTOPp->mkbbox__DOT__x___05Fh13550 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 7U))));
    vlTOPp->mkbbox__DOT__y___05Fh15968 = (QData)((IData)(
                                                         (0x7fU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 7U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x19U)))));
    vlTOPp->mkbbox__DOT__y___05Fh13503 = (0xfffffffffffffff0ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x24U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 4U)));
    vlTOPp->mkbbox__DOT__x___05Fh13534 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 6U))));
    vlTOPp->mkbbox__DOT__y___05Fh15950 = (QData)((IData)(
                                                         (0x3fU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 6U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x1aU)))));
    vlTOPp->mkbbox__DOT__y___05Fh13487 = (0xfffffffffffffff8ULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x23U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 3U)));
    vlTOPp->mkbbox__DOT__x___05Fh13518 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 5U))));
    vlTOPp->mkbbox__DOT__y___05Fh15932 = (QData)((IData)(
                                                         (0x1fU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 5U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x1bU)))));
    vlTOPp->mkbbox__DOT__y___05Fh13471 = (0xfffffffffffffffcULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x22U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 2U)));
    vlTOPp->mkbbox__DOT__x___05Fh13502 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 4U))));
    vlTOPp->mkbbox__DOT__y___05Fh15914 = (QData)((IData)(
                                                         (0xfU 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 4U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x1cU)))));
    vlTOPp->mkbbox__DOT__y___05Fh13455 = (0xfffffffffffffffeULL 
                                          & (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                              << 0x21U) 
                                             | ((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[2U])) 
                                                << 1U)));
    vlTOPp->mkbbox__DOT__x___05Fh13486 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 3U))));
    vlTOPp->mkbbox__DOT__y___05Fh15896 = (QData)((IData)(
                                                         (7U 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 3U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x1dU)))));
    vlTOPp->mkbbox__DOT__x___05Fh13470 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 2U))));
    vlTOPp->mkbbox__DOT__y___05Fh15860 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                             >> 0x1fU))));
    vlTOPp->mkbbox__DOT__y___05Fh15878 = (QData)((IData)(
                                                         (3U 
                                                          & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              << 2U) 
                                                             | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                                >> 0x1eU)))));
    vlTOPp->mkbbox__DOT__x___05Fh13440 = (QData)((IData)(
                                                         (1U 
                                                          & vlTOPp->mkbbox__DOT__rg_input[0U])));
    vlTOPp->mkbbox__DOT__x___05Fh13454 = (QData)((IData)(
                                                         (1U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[0U] 
                                                             >> 1U))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_95_59_THEN_32_ELSE_0___05F_d160 
        = ((0x80000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? 0x20ULL : 0ULL);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_65_77_AND_NOT_rg_input_BIT_64___05FETC___05F_d385 
        = ((1U & ((vlTOPp->mkbbox__DOT__rg_input[2U] 
                   >> 1U) & (~ vlTOPp->mkbbox__DOT__rg_input[2U])))
            ? 1ULL : 0ULL);
    vlTOPp->mkbbox__DOT__x___05Fh7400 = ((1U & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? 1ULL : 0ULL);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_127_046_THEN_64_ELSE_0___05F_d1549 
        = ((0x80000000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? 0x40ULL : 0ULL);
    vlTOPp->mkbbox__DOT__rg_input_BITS_127_TO_64_SRL_a877___05Fq1 
        = ((((QData)((IData)(vlTOPp->mkbbox__DOT__rg_input[3U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkbbox__DOT__rg_input[2U]))) 
           >> vlTOPp->mkbbox__DOT__a___05Fh3877);
    vlTOPp->mkbbox__DOT__x___05Fh3889 = (1ULL << vlTOPp->mkbbox__DOT__a___05Fh3877);
    vlTOPp->mkbbox__DOT__result___05Fh1631 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[0U]))) 
                                              + vlTOPp->mkbbox__DOT__y___05Fh11611);
    vlTOPp->mkbbox__DOT__result___05Fh1633 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[0U]))) 
                                              + vlTOPp->mkbbox__DOT__y___05Fh11645);
    vlTOPp->mkbbox__DOT__result___05Fh1635 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[0U]))) 
                                              + vlTOPp->mkbbox__DOT__y___05Fh11679);
    vlTOPp->mkbbox__DOT__x___05Fh11258 = ((0x3fU >= vlTOPp->mkbbox__DOT__b___05Fh11276)
                                           ? ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                              >> vlTOPp->mkbbox__DOT__b___05Fh11276)
                                           : 0ULL);
    vlTOPp->mkbbox__DOT__x___05Fh11335 = ((IData)(0x40U) 
                                          - vlTOPp->mkbbox__DOT__b___05Fh11276);
    vlTOPp->mkbbox__DOT__result___05Fh1605 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[0U]))) 
                                              + vlTOPp->mkbbox__DOT__y___05Fh3843);
    vlTOPp->mkbbox__DOT__result___05Fh1637 = ((0x3fU 
                                               >= vlTOPp->mkbbox__DOT__x___05Fh11791)
                                               ? (vlTOPp->mkbbox__DOT__y___05Fh3843 
                                                  << vlTOPp->mkbbox__DOT__x___05Fh11791)
                                               : 0ULL);
    vlTOPp->mkbbox__DOT__x___05Fh11383 = ((0x1fU >= vlTOPp->mkbbox__DOT__b___05Fh11421)
                                           ? (vlTOPp->mkbbox__DOT__rg_input[2U] 
                                              >> vlTOPp->mkbbox__DOT__b___05Fh11421)
                                           : 0U);
    vlTOPp->mkbbox__DOT__x___05Fh11479 = ((IData)(0x20U) 
                                          - vlTOPp->mkbbox__DOT__b___05Fh11421);
    vlTOPp->mkbbox__DOT__rg_input_BITS_127_TO_64_SRL_a1837___05Fq2 
        = ((((QData)((IData)(vlTOPp->mkbbox__DOT__rg_input[3U])) 
             << 0x20U) | (QData)((IData)(vlTOPp->mkbbox__DOT__rg_input[2U]))) 
           >> vlTOPp->mkbbox__DOT__a___05Fh11837);
    vlTOPp->mkbbox__DOT__x___05Fh11849 = (1ULL << vlTOPp->mkbbox__DOT__a___05Fh11837);
    VL_EXTEND_WQ(128,64, __Vtemp3, vlTOPp->mkbbox__DOT__x___05Fh14446);
    VL_EXTEND_WQ(128,64, __Vtemp4, vlTOPp->mkbbox__DOT__y___05Fh14447);
    VL_MUL_W(4, __Vtemp5, __Vtemp3, __Vtemp4);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1043[0U] 
        = __Vtemp5[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1043[1U] 
        = __Vtemp5[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1043[2U] 
        = __Vtemp5[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1043[3U] 
        = __Vtemp5[3U];
    VL_EXTEND_WQ(128,64, __Vtemp6, vlTOPp->mkbbox__DOT__x___05Fh14446);
    VL_EXTEND_WQ(128,64, __Vtemp7, (((QData)((IData)(
                                                     vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))));
    VL_MUL_W(4, __Vtemp8, __Vtemp6, __Vtemp7);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1546[0U] 
        = __Vtemp8[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1546[1U] 
        = __Vtemp8[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1546[2U] 
        = __Vtemp8[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1546[3U] 
        = __Vtemp8[3U];
    VL_EXTEND_WQ(128,64, __Vtemp9, vlTOPp->mkbbox__DOT__x___05Fh14446);
    VL_EXTEND_WQ(128,64, __Vtemp10, vlTOPp->mkbbox__DOT__y___05Fh16976);
    VL_MUL_W(4, __Vtemp11, __Vtemp9, __Vtemp10);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_0_CONCAT___05FETC___05F_d1355[0U] 
        = __Vtemp11[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_0_CONCAT___05FETC___05F_d1355[1U] 
        = __Vtemp11[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_0_CONCAT___05FETC___05F_d1355[2U] 
        = __Vtemp11[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_0_CONCAT___05FETC___05F_d1355[3U] 
        = __Vtemp11[3U];
    VL_EXTEND_WQ(128,64, __Vtemp12, vlTOPp->mkbbox__DOT__x___05Fh14430);
    VL_EXTEND_WQ(128,64, __Vtemp13, vlTOPp->mkbbox__DOT__y___05Fh14431);
    VL_MUL_W(4, __Vtemp14, __Vtemp12, __Vtemp13);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_rg_input___05FETC___05F_d1037[0U] 
        = __Vtemp14[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_rg_input___05FETC___05F_d1037[1U] 
        = __Vtemp14[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_rg_input___05FETC___05F_d1037[2U] 
        = __Vtemp14[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_rg_input___05FETC___05F_d1037[3U] 
        = __Vtemp14[3U];
    VL_EXTEND_WQ(128,64, __Vtemp15, vlTOPp->mkbbox__DOT__x___05Fh14430);
    VL_EXTEND_WQ(128,64, __Vtemp16, vlTOPp->mkbbox__DOT__y___05Fh16976);
    VL_MUL_W(4, __Vtemp17, __Vtemp15, __Vtemp16);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1543[0U] 
        = __Vtemp17[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1543[1U] 
        = __Vtemp17[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1543[2U] 
        = __Vtemp17[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1543[3U] 
        = __Vtemp17[3U];
    VL_EXTEND_WQ(128,64, __Vtemp18, vlTOPp->mkbbox__DOT__x___05Fh14430);
    VL_EXTEND_WQ(128,64, __Vtemp19, vlTOPp->mkbbox__DOT__y___05Fh16958);
    VL_MUL_W(4, __Vtemp20, __Vtemp18, __Vtemp19);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1350[0U] 
        = __Vtemp20[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1350[1U] 
        = __Vtemp20[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1350[2U] 
        = __Vtemp20[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1350[3U] 
        = __Vtemp20[3U];
    vlTOPp->mkbbox__DOT__result___05Fh3763 = ((IData)(vlTOPp->mkbbox__DOT__rg_input_BITS_127_TO_64_48_ULE_rg_input_BITS_6_ETC___05F_d2066)
                                               ? (((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->mkbbox__DOT__rg_input[0U])))
                                               : (((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->mkbbox__DOT__rg_input[2U]))));
    vlTOPp->mkbbox__DOT__result___05Fh3767 = ((IData)(vlTOPp->mkbbox__DOT__rg_input_BITS_127_TO_64_48_ULT_rg_input_BITS_6_ETC___05F_d2062)
                                               ? (((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->mkbbox__DOT__rg_input[2U])))
                                               : (((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->mkbbox__DOT__rg_input[0U]))));
    if (vlTOPp->mkbbox__DOT__rg_input_BIT_127_046_EQ_rg_input_BIT_63_040___05F_d2061) {
        vlTOPp->mkbbox__DOT__result___05Fh3761 = ((IData)(vlTOPp->mkbbox__DOT__rg_input_BITS_127_TO_64_48_ULT_rg_input_BITS_6_ETC___05F_d2062)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->mkbbox__DOT__rg_input[0U])))
                                                   : 
                                                  ((0x80000000U 
                                                    & vlTOPp->mkbbox__DOT__rg_input[1U])
                                                    ? 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkbbox__DOT__rg_input[2U])))
                                                    : 
                                                   (((QData)((IData)(
                                                                     vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlTOPp->mkbbox__DOT__rg_input[0U])))));
        vlTOPp->mkbbox__DOT__result___05Fh3765 = ((1U 
                                                   & ((~ (IData)(vlTOPp->mkbbox__DOT__rg_input_BITS_127_TO_64_48_ULE_rg_input_BITS_6_ETC___05F_d2066)) 
                                                      | (vlTOPp->mkbbox__DOT__rg_input[1U] 
                                                         >> 0x1fU)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->mkbbox__DOT__rg_input[0U])))
                                                   : 
                                                  (((QData)((IData)(
                                                                    vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlTOPp->mkbbox__DOT__rg_input[2U]))));
    } else {
        vlTOPp->mkbbox__DOT__result___05Fh3761 = (((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->mkbbox__DOT__rg_input[2U])));
        vlTOPp->mkbbox__DOT__result___05Fh3765 = (((QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    vlTOPp->mkbbox__DOT__rg_input[2U])));
    }
    VL_EXTEND_WQ(128,64, __Vtemp21, vlTOPp->mkbbox__DOT__x___05Fh14414);
    VL_EXTEND_WQ(128,64, __Vtemp22, vlTOPp->mkbbox__DOT__y___05Fh14415);
    VL_MUL_W(4, __Vtemp23, __Vtemp21, __Vtemp22);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_rg_input___05FETC___05F_d1030[0U] 
        = __Vtemp23[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_rg_input___05FETC___05F_d1030[1U] 
        = __Vtemp23[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_rg_input___05FETC___05F_d1030[2U] 
        = __Vtemp23[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_rg_input___05FETC___05F_d1030[3U] 
        = __Vtemp23[3U];
    VL_EXTEND_WQ(128,64, __Vtemp24, vlTOPp->mkbbox__DOT__x___05Fh14414);
    VL_EXTEND_WQ(128,64, __Vtemp25, vlTOPp->mkbbox__DOT__y___05Fh16958);
    VL_MUL_W(4, __Vtemp26, __Vtemp24, __Vtemp25);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1540[0U] 
        = __Vtemp26[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1540[1U] 
        = __Vtemp26[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1540[2U] 
        = __Vtemp26[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1540[3U] 
        = __Vtemp26[3U];
    vlTOPp->mkbbox__DOT__result___05Fh3739 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                              & vlTOPp->mkbbox__DOT__y___05Fh11832);
    vlTOPp->mkbbox__DOT__result___05Fh3771 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                              | vlTOPp->mkbbox__DOT__y___05Fh11832);
    VL_EXTEND_WQ(128,64, __Vtemp27, vlTOPp->mkbbox__DOT__x___05Fh14414);
    VL_EXTEND_WQ(128,64, __Vtemp28, vlTOPp->mkbbox__DOT__y___05Fh16940);
    VL_MUL_W(4, __Vtemp29, __Vtemp27, __Vtemp28);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1345[0U] 
        = __Vtemp29[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1345[1U] 
        = __Vtemp29[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1345[2U] 
        = __Vtemp29[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1345[3U] 
        = __Vtemp29[3U];
    VL_EXTEND_WQ(128,64, __Vtemp30, vlTOPp->mkbbox__DOT__x___05Fh14398);
    VL_EXTEND_WQ(128,64, __Vtemp31, vlTOPp->mkbbox__DOT__y___05Fh14399);
    VL_MUL_W(4, __Vtemp32, __Vtemp30, __Vtemp31);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_rg_input___05FETC___05F_d1023[0U] 
        = __Vtemp32[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_rg_input___05FETC___05F_d1023[1U] 
        = __Vtemp32[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_rg_input___05FETC___05F_d1023[2U] 
        = __Vtemp32[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_rg_input___05FETC___05F_d1023[3U] 
        = __Vtemp32[3U];
    VL_EXTEND_WQ(128,64, __Vtemp33, vlTOPp->mkbbox__DOT__x___05Fh14398);
    VL_EXTEND_WQ(128,64, __Vtemp34, vlTOPp->mkbbox__DOT__y___05Fh16940);
    VL_MUL_W(4, __Vtemp35, __Vtemp33, __Vtemp34);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1537[0U] 
        = __Vtemp35[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1537[1U] 
        = __Vtemp35[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1537[2U] 
        = __Vtemp35[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1537[3U] 
        = __Vtemp35[3U];
    VL_EXTEND_WQ(128,64, __Vtemp36, vlTOPp->mkbbox__DOT__x___05Fh14398);
    VL_EXTEND_WQ(128,64, __Vtemp37, vlTOPp->mkbbox__DOT__y___05Fh16922);
    VL_MUL_W(4, __Vtemp38, __Vtemp36, __Vtemp37);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1340[0U] 
        = __Vtemp38[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1340[1U] 
        = __Vtemp38[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1340[2U] 
        = __Vtemp38[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1340[3U] 
        = __Vtemp38[3U];
    VL_EXTEND_WQ(128,64, __Vtemp39, vlTOPp->mkbbox__DOT__x___05Fh14382);
    VL_EXTEND_WQ(128,64, __Vtemp40, vlTOPp->mkbbox__DOT__y___05Fh14383);
    VL_MUL_W(4, __Vtemp41, __Vtemp39, __Vtemp40);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_rg_input___05FETC___05F_d1016[0U] 
        = __Vtemp41[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_rg_input___05FETC___05F_d1016[1U] 
        = __Vtemp41[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_rg_input___05FETC___05F_d1016[2U] 
        = __Vtemp41[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_rg_input___05FETC___05F_d1016[3U] 
        = __Vtemp41[3U];
    VL_EXTEND_WQ(128,64, __Vtemp42, vlTOPp->mkbbox__DOT__x___05Fh14382);
    VL_EXTEND_WQ(128,64, __Vtemp43, vlTOPp->mkbbox__DOT__y___05Fh16922);
    VL_MUL_W(4, __Vtemp44, __Vtemp42, __Vtemp43);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1534[0U] 
        = __Vtemp44[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1534[1U] 
        = __Vtemp44[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1534[2U] 
        = __Vtemp44[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1534[3U] 
        = __Vtemp44[3U];
    VL_EXTEND_WQ(128,64, __Vtemp45, vlTOPp->mkbbox__DOT__x___05Fh14382);
    VL_EXTEND_WQ(128,64, __Vtemp46, vlTOPp->mkbbox__DOT__y___05Fh16904);
    VL_MUL_W(4, __Vtemp47, __Vtemp45, __Vtemp46);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1335[0U] 
        = __Vtemp47[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1335[1U] 
        = __Vtemp47[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1335[2U] 
        = __Vtemp47[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1335[3U] 
        = __Vtemp47[3U];
    VL_EXTEND_WQ(128,64, __Vtemp48, vlTOPp->mkbbox__DOT__x___05Fh14366);
    VL_EXTEND_WQ(128,64, __Vtemp49, vlTOPp->mkbbox__DOT__y___05Fh14367);
    VL_MUL_W(4, __Vtemp50, __Vtemp48, __Vtemp49);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_rg_input___05FETC___05F_d1009[0U] 
        = __Vtemp50[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_rg_input___05FETC___05F_d1009[1U] 
        = __Vtemp50[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_rg_input___05FETC___05F_d1009[2U] 
        = __Vtemp50[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_rg_input___05FETC___05F_d1009[3U] 
        = __Vtemp50[3U];
    VL_EXTEND_WQ(128,64, __Vtemp51, vlTOPp->mkbbox__DOT__x___05Fh14366);
    VL_EXTEND_WQ(128,64, __Vtemp52, vlTOPp->mkbbox__DOT__y___05Fh16904);
    VL_MUL_W(4, __Vtemp53, __Vtemp51, __Vtemp52);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1531[0U] 
        = __Vtemp53[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1531[1U] 
        = __Vtemp53[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1531[2U] 
        = __Vtemp53[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1531[3U] 
        = __Vtemp53[3U];
    vlTOPp->mkbbox__DOT__result___05Fh3781 = ((0xffffffffffffff00ULL 
                                               & ((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlTOPp->mkbbox__DOT__rg_input_BITS_71_TO_64___05Fq3) 
                                                                         >> 7U))))) 
                                                  << 8U)) 
                                              | (QData)((IData)(vlTOPp->mkbbox__DOT__rg_input_BITS_71_TO_64___05Fq3)));
    vlTOPp->mkbbox__DOT__result___05Fh3783 = ((0xffffffffffff0000ULL 
                                               & ((- (QData)((IData)(
                                                                     (1U 
                                                                      & ((IData)(vlTOPp->mkbbox__DOT__rg_input_BITS_79_TO_64___05Fq4) 
                                                                         >> 0xfU))))) 
                                                  << 0x10U)) 
                                              | (QData)((IData)(vlTOPp->mkbbox__DOT__rg_input_BITS_79_TO_64___05Fq4)));
    VL_EXTEND_WQ(128,64, __Vtemp54, vlTOPp->mkbbox__DOT__x___05Fh14366);
    VL_EXTEND_WQ(128,64, __Vtemp55, vlTOPp->mkbbox__DOT__y___05Fh16886);
    VL_MUL_W(4, __Vtemp56, __Vtemp54, __Vtemp55);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1330[0U] 
        = __Vtemp56[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1330[1U] 
        = __Vtemp56[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1330[2U] 
        = __Vtemp56[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1330[3U] 
        = __Vtemp56[3U];
    VL_EXTEND_WQ(128,64, __Vtemp57, vlTOPp->mkbbox__DOT__x___05Fh14350);
    VL_EXTEND_WQ(128,64, __Vtemp58, vlTOPp->mkbbox__DOT__y___05Fh14351);
    VL_MUL_W(4, __Vtemp59, __Vtemp57, __Vtemp58);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_rg_input_BI_ETC___05F_d1002[0U] 
        = __Vtemp59[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_rg_input_BI_ETC___05F_d1002[1U] 
        = __Vtemp59[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_rg_input_BI_ETC___05F_d1002[2U] 
        = __Vtemp59[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_rg_input_BI_ETC___05F_d1002[3U] 
        = __Vtemp59[3U];
    VL_EXTEND_WQ(128,64, __Vtemp60, vlTOPp->mkbbox__DOT__x___05Fh14350);
    VL_EXTEND_WQ(128,64, __Vtemp61, vlTOPp->mkbbox__DOT__y___05Fh16886);
    VL_MUL_W(4, __Vtemp62, __Vtemp60, __Vtemp61);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1528[0U] 
        = __Vtemp62[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1528[1U] 
        = __Vtemp62[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1528[2U] 
        = __Vtemp62[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1528[3U] 
        = __Vtemp62[3U];
    VL_EXTEND_WQ(128,64, __Vtemp63, vlTOPp->mkbbox__DOT__x___05Fh14350);
    VL_EXTEND_WQ(128,64, __Vtemp64, vlTOPp->mkbbox__DOT__y___05Fh16868);
    VL_MUL_W(4, __Vtemp65, __Vtemp63, __Vtemp64);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1325[0U] 
        = __Vtemp65[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1325[1U] 
        = __Vtemp65[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1325[2U] 
        = __Vtemp65[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1325[3U] 
        = __Vtemp65[3U];
    VL_EXTEND_WQ(128,64, __Vtemp66, vlTOPp->mkbbox__DOT__x___05Fh14334);
    VL_EXTEND_WQ(128,64, __Vtemp67, vlTOPp->mkbbox__DOT__y___05Fh14335);
    VL_MUL_W(4, __Vtemp68, __Vtemp66, __Vtemp67);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_rg_input_BI_ETC___05F_d995[0U] 
        = __Vtemp68[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_rg_input_BI_ETC___05F_d995[1U] 
        = __Vtemp68[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_rg_input_BI_ETC___05F_d995[2U] 
        = __Vtemp68[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_rg_input_BI_ETC___05F_d995[3U] 
        = __Vtemp68[3U];
    VL_EXTEND_WQ(128,64, __Vtemp69, vlTOPp->mkbbox__DOT__x___05Fh14334);
    VL_EXTEND_WQ(128,64, __Vtemp70, vlTOPp->mkbbox__DOT__y___05Fh16868);
    VL_MUL_W(4, __Vtemp71, __Vtemp69, __Vtemp70);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1525[0U] 
        = __Vtemp71[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1525[1U] 
        = __Vtemp71[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1525[2U] 
        = __Vtemp71[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1525[3U] 
        = __Vtemp71[3U];
    vlTOPp->mkbbox__DOT__result___05Fh3791 = (~ vlTOPp->mkbbox__DOT__x___05Fh33388);
    if ((0x3fU >= vlTOPp->mkbbox__DOT__b___05Fh32884)) {
        vlTOPp->mkbbox__DOT__x___05Fh32866 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                              << vlTOPp->mkbbox__DOT__b___05Fh32884);
        vlTOPp->mkbbox__DOT__x___05Fh33088 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                              >> vlTOPp->mkbbox__DOT__b___05Fh32884);
    } else {
        vlTOPp->mkbbox__DOT__x___05Fh32866 = 0ULL;
        vlTOPp->mkbbox__DOT__x___05Fh33088 = 0ULL;
    }
    vlTOPp->mkbbox__DOT__x___05Fh32943 = ((IData)(0x40U) 
                                          - vlTOPp->mkbbox__DOT__b___05Fh32884);
    VL_EXTEND_WQ(128,64, __Vtemp72, vlTOPp->mkbbox__DOT__x___05Fh14334);
    VL_EXTEND_WQ(128,64, __Vtemp73, vlTOPp->mkbbox__DOT__y___05Fh16850);
    VL_MUL_W(4, __Vtemp74, __Vtemp72, __Vtemp73);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1320[0U] 
        = __Vtemp74[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1320[1U] 
        = __Vtemp74[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1320[2U] 
        = __Vtemp74[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1320[3U] 
        = __Vtemp74[3U];
    VL_EXTEND_WQ(128,64, __Vtemp75, vlTOPp->mkbbox__DOT__x___05Fh14318);
    VL_EXTEND_WQ(128,64, __Vtemp76, vlTOPp->mkbbox__DOT__y___05Fh14319);
    VL_MUL_W(4, __Vtemp77, __Vtemp75, __Vtemp76);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_rg_input_BI_ETC___05F_d988[0U] 
        = __Vtemp77[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_rg_input_BI_ETC___05F_d988[1U] 
        = __Vtemp77[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_rg_input_BI_ETC___05F_d988[2U] 
        = __Vtemp77[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_rg_input_BI_ETC___05F_d988[3U] 
        = __Vtemp77[3U];
    VL_EXTEND_WQ(128,64, __Vtemp78, vlTOPp->mkbbox__DOT__x___05Fh14318);
    VL_EXTEND_WQ(128,64, __Vtemp79, vlTOPp->mkbbox__DOT__y___05Fh16850);
    VL_MUL_W(4, __Vtemp80, __Vtemp78, __Vtemp79);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1522[0U] 
        = __Vtemp80[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1522[1U] 
        = __Vtemp80[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1522[2U] 
        = __Vtemp80[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1522[3U] 
        = __Vtemp80[3U];
    if ((0x1fU >= vlTOPp->mkbbox__DOT__b___05Fh11177)) {
        vlTOPp->mkbbox__DOT__x___05Fh11139 = (vlTOPp->mkbbox__DOT__rg_input[2U] 
                                              << vlTOPp->mkbbox__DOT__b___05Fh11177);
        vlTOPp->mkbbox__DOT__x___05Fh11505 = (vlTOPp->mkbbox__DOT__rg_input[2U] 
                                              >> vlTOPp->mkbbox__DOT__b___05Fh11177);
    } else {
        vlTOPp->mkbbox__DOT__x___05Fh11139 = 0U;
        vlTOPp->mkbbox__DOT__x___05Fh11505 = 0U;
    }
    vlTOPp->mkbbox__DOT__x___05Fh11235 = ((IData)(0x20U) 
                                          - vlTOPp->mkbbox__DOT__b___05Fh11177);
    VL_EXTEND_WQ(128,64, __Vtemp81, vlTOPp->mkbbox__DOT__x___05Fh14318);
    VL_EXTEND_WQ(128,64, __Vtemp82, vlTOPp->mkbbox__DOT__y___05Fh16832);
    VL_MUL_W(4, __Vtemp83, __Vtemp81, __Vtemp82);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1315[0U] 
        = __Vtemp83[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1315[1U] 
        = __Vtemp83[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1315[2U] 
        = __Vtemp83[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1315[3U] 
        = __Vtemp83[3U];
    VL_EXTEND_WQ(128,64, __Vtemp84, vlTOPp->mkbbox__DOT__x___05Fh14302);
    VL_EXTEND_WQ(128,64, __Vtemp85, vlTOPp->mkbbox__DOT__y___05Fh14303);
    VL_MUL_W(4, __Vtemp86, __Vtemp84, __Vtemp85);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_rg_input_BI_ETC___05F_d981[0U] 
        = __Vtemp86[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_rg_input_BI_ETC___05F_d981[1U] 
        = __Vtemp86[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_rg_input_BI_ETC___05F_d981[2U] 
        = __Vtemp86[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_rg_input_BI_ETC___05F_d981[3U] 
        = __Vtemp86[3U];
    VL_EXTEND_WQ(128,64, __Vtemp87, vlTOPp->mkbbox__DOT__x___05Fh14302);
    VL_EXTEND_WQ(128,64, __Vtemp88, vlTOPp->mkbbox__DOT__y___05Fh16832);
    VL_MUL_W(4, __Vtemp89, __Vtemp87, __Vtemp88);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1519[0U] 
        = __Vtemp89[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1519[1U] 
        = __Vtemp89[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1519[2U] 
        = __Vtemp89[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1519[3U] 
        = __Vtemp89[3U];
    VL_EXTEND_WQ(128,64, __Vtemp90, vlTOPp->mkbbox__DOT__x___05Fh14302);
    VL_EXTEND_WQ(128,64, __Vtemp91, vlTOPp->mkbbox__DOT__y___05Fh16814);
    VL_MUL_W(4, __Vtemp92, __Vtemp90, __Vtemp91);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1310[0U] 
        = __Vtemp92[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1310[1U] 
        = __Vtemp92[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1310[2U] 
        = __Vtemp92[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1310[3U] 
        = __Vtemp92[3U];
    VL_EXTEND_WQ(128,64, __Vtemp93, vlTOPp->mkbbox__DOT__x___05Fh14286);
    VL_EXTEND_WQ(128,64, __Vtemp94, vlTOPp->mkbbox__DOT__y___05Fh14287);
    VL_MUL_W(4, __Vtemp95, __Vtemp93, __Vtemp94);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_rg_input_BI_ETC___05F_d974[0U] 
        = __Vtemp95[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_rg_input_BI_ETC___05F_d974[1U] 
        = __Vtemp95[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_rg_input_BI_ETC___05F_d974[2U] 
        = __Vtemp95[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_rg_input_BI_ETC___05F_d974[3U] 
        = __Vtemp95[3U];
    VL_EXTEND_WQ(128,64, __Vtemp96, vlTOPp->mkbbox__DOT__x___05Fh14286);
    VL_EXTEND_WQ(128,64, __Vtemp97, vlTOPp->mkbbox__DOT__y___05Fh16814);
    VL_MUL_W(4, __Vtemp98, __Vtemp96, __Vtemp97);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1516[0U] 
        = __Vtemp98[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1516[1U] 
        = __Vtemp98[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1516[2U] 
        = __Vtemp98[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1516[3U] 
        = __Vtemp98[3U];
    VL_EXTEND_WQ(128,64, __Vtemp99, vlTOPp->mkbbox__DOT__x___05Fh14286);
    VL_EXTEND_WQ(128,64, __Vtemp100, vlTOPp->mkbbox__DOT__y___05Fh16796);
    VL_MUL_W(4, __Vtemp101, __Vtemp99, __Vtemp100);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1305[0U] 
        = __Vtemp101[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1305[1U] 
        = __Vtemp101[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1305[2U] 
        = __Vtemp101[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1305[3U] 
        = __Vtemp101[3U];
    VL_EXTEND_WQ(128,64, __Vtemp102, vlTOPp->mkbbox__DOT__x___05Fh14270);
    VL_EXTEND_WQ(128,64, __Vtemp103, vlTOPp->mkbbox__DOT__y___05Fh14271);
    VL_MUL_W(4, __Vtemp104, __Vtemp102, __Vtemp103);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_rg_input_BI_ETC___05F_d967[0U] 
        = __Vtemp104[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_rg_input_BI_ETC___05F_d967[1U] 
        = __Vtemp104[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_rg_input_BI_ETC___05F_d967[2U] 
        = __Vtemp104[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_rg_input_BI_ETC___05F_d967[3U] 
        = __Vtemp104[3U];
    VL_EXTEND_WQ(128,64, __Vtemp105, vlTOPp->mkbbox__DOT__x___05Fh14270);
    VL_EXTEND_WQ(128,64, __Vtemp106, vlTOPp->mkbbox__DOT__y___05Fh16796);
    VL_MUL_W(4, __Vtemp107, __Vtemp105, __Vtemp106);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1513[0U] 
        = __Vtemp107[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1513[1U] 
        = __Vtemp107[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1513[2U] 
        = __Vtemp107[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1513[3U] 
        = __Vtemp107[3U];
    VL_EXTEND_WQ(128,64, __Vtemp108, vlTOPp->mkbbox__DOT__x___05Fh14270);
    VL_EXTEND_WQ(128,64, __Vtemp109, vlTOPp->mkbbox__DOT__y___05Fh16778);
    VL_MUL_W(4, __Vtemp110, __Vtemp108, __Vtemp109);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1300[0U] 
        = __Vtemp110[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1300[1U] 
        = __Vtemp110[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1300[2U] 
        = __Vtemp110[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1300[3U] 
        = __Vtemp110[3U];
    VL_EXTEND_WQ(128,64, __Vtemp111, vlTOPp->mkbbox__DOT__x___05Fh14254);
    VL_EXTEND_WQ(128,64, __Vtemp112, vlTOPp->mkbbox__DOT__y___05Fh14255);
    VL_MUL_W(4, __Vtemp113, __Vtemp111, __Vtemp112);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_rg_input_BI_ETC___05F_d960[0U] 
        = __Vtemp113[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_rg_input_BI_ETC___05F_d960[1U] 
        = __Vtemp113[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_rg_input_BI_ETC___05F_d960[2U] 
        = __Vtemp113[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_rg_input_BI_ETC___05F_d960[3U] 
        = __Vtemp113[3U];
    VL_EXTEND_WQ(128,64, __Vtemp114, vlTOPp->mkbbox__DOT__x___05Fh14254);
    VL_EXTEND_WQ(128,64, __Vtemp115, vlTOPp->mkbbox__DOT__y___05Fh16778);
    VL_MUL_W(4, __Vtemp116, __Vtemp114, __Vtemp115);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1510[0U] 
        = __Vtemp116[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1510[1U] 
        = __Vtemp116[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1510[2U] 
        = __Vtemp116[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1510[3U] 
        = __Vtemp116[3U];
    VL_EXTEND_WQ(128,64, __Vtemp117, vlTOPp->mkbbox__DOT__x___05Fh14254);
    VL_EXTEND_WQ(128,64, __Vtemp118, vlTOPp->mkbbox__DOT__y___05Fh16760);
    VL_MUL_W(4, __Vtemp119, __Vtemp117, __Vtemp118);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1295[0U] 
        = __Vtemp119[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1295[1U] 
        = __Vtemp119[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1295[2U] 
        = __Vtemp119[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1295[3U] 
        = __Vtemp119[3U];
    VL_EXTEND_WQ(128,64, __Vtemp120, vlTOPp->mkbbox__DOT__x___05Fh14238);
    VL_EXTEND_WQ(128,64, __Vtemp121, vlTOPp->mkbbox__DOT__y___05Fh14239);
    VL_MUL_W(4, __Vtemp122, __Vtemp120, __Vtemp121);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_rg_input_BI_ETC___05F_d953[0U] 
        = __Vtemp122[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_rg_input_BI_ETC___05F_d953[1U] 
        = __Vtemp122[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_rg_input_BI_ETC___05F_d953[2U] 
        = __Vtemp122[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_rg_input_BI_ETC___05F_d953[3U] 
        = __Vtemp122[3U];
    VL_EXTEND_WQ(128,64, __Vtemp123, vlTOPp->mkbbox__DOT__x___05Fh14238);
    VL_EXTEND_WQ(128,64, __Vtemp124, vlTOPp->mkbbox__DOT__y___05Fh16760);
    VL_MUL_W(4, __Vtemp125, __Vtemp123, __Vtemp124);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1507[0U] 
        = __Vtemp125[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1507[1U] 
        = __Vtemp125[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1507[2U] 
        = __Vtemp125[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1507[3U] 
        = __Vtemp125[3U];
    VL_EXTEND_WQ(128,64, __Vtemp126, vlTOPp->mkbbox__DOT__x___05Fh14238);
    VL_EXTEND_WQ(128,64, __Vtemp127, vlTOPp->mkbbox__DOT__y___05Fh16742);
    VL_MUL_W(4, __Vtemp128, __Vtemp126, __Vtemp127);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1290[0U] 
        = __Vtemp128[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1290[1U] 
        = __Vtemp128[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1290[2U] 
        = __Vtemp128[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1290[3U] 
        = __Vtemp128[3U];
    VL_EXTEND_WQ(128,64, __Vtemp129, vlTOPp->mkbbox__DOT__x___05Fh14222);
    VL_EXTEND_WQ(128,64, __Vtemp130, vlTOPp->mkbbox__DOT__y___05Fh14223);
    VL_MUL_W(4, __Vtemp131, __Vtemp129, __Vtemp130);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_rg_input_BI_ETC___05F_d946[0U] 
        = __Vtemp131[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_rg_input_BI_ETC___05F_d946[1U] 
        = __Vtemp131[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_rg_input_BI_ETC___05F_d946[2U] 
        = __Vtemp131[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_rg_input_BI_ETC___05F_d946[3U] 
        = __Vtemp131[3U];
    VL_EXTEND_WQ(128,64, __Vtemp132, vlTOPp->mkbbox__DOT__x___05Fh14222);
    VL_EXTEND_WQ(128,64, __Vtemp133, vlTOPp->mkbbox__DOT__y___05Fh16742);
    VL_MUL_W(4, __Vtemp134, __Vtemp132, __Vtemp133);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1504[0U] 
        = __Vtemp134[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1504[1U] 
        = __Vtemp134[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1504[2U] 
        = __Vtemp134[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1504[3U] 
        = __Vtemp134[3U];
    VL_EXTEND_WQ(128,64, __Vtemp135, vlTOPp->mkbbox__DOT__x___05Fh14222);
    VL_EXTEND_WQ(128,64, __Vtemp136, vlTOPp->mkbbox__DOT__y___05Fh16724);
    VL_MUL_W(4, __Vtemp137, __Vtemp135, __Vtemp136);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1285[0U] 
        = __Vtemp137[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1285[1U] 
        = __Vtemp137[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1285[2U] 
        = __Vtemp137[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1285[3U] 
        = __Vtemp137[3U];
    VL_EXTEND_WQ(128,64, __Vtemp138, vlTOPp->mkbbox__DOT__x___05Fh14206);
    VL_EXTEND_WQ(128,64, __Vtemp139, vlTOPp->mkbbox__DOT__y___05Fh14207);
    VL_MUL_W(4, __Vtemp140, __Vtemp138, __Vtemp139);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_rg_input_BI_ETC___05F_d939[0U] 
        = __Vtemp140[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_rg_input_BI_ETC___05F_d939[1U] 
        = __Vtemp140[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_rg_input_BI_ETC___05F_d939[2U] 
        = __Vtemp140[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_rg_input_BI_ETC___05F_d939[3U] 
        = __Vtemp140[3U];
    VL_EXTEND_WQ(128,64, __Vtemp141, vlTOPp->mkbbox__DOT__x___05Fh14206);
    VL_EXTEND_WQ(128,64, __Vtemp142, vlTOPp->mkbbox__DOT__y___05Fh16724);
    VL_MUL_W(4, __Vtemp143, __Vtemp141, __Vtemp142);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1501[0U] 
        = __Vtemp143[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1501[1U] 
        = __Vtemp143[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1501[2U] 
        = __Vtemp143[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1501[3U] 
        = __Vtemp143[3U];
    VL_EXTEND_WQ(128,64, __Vtemp144, vlTOPp->mkbbox__DOT__x___05Fh14206);
    VL_EXTEND_WQ(128,64, __Vtemp145, vlTOPp->mkbbox__DOT__y___05Fh16706);
    VL_MUL_W(4, __Vtemp146, __Vtemp144, __Vtemp145);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1280[0U] 
        = __Vtemp146[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1280[1U] 
        = __Vtemp146[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1280[2U] 
        = __Vtemp146[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1280[3U] 
        = __Vtemp146[3U];
    VL_EXTEND_WQ(128,64, __Vtemp147, vlTOPp->mkbbox__DOT__x___05Fh14190);
    VL_EXTEND_WQ(128,64, __Vtemp148, vlTOPp->mkbbox__DOT__y___05Fh14191);
    VL_MUL_W(4, __Vtemp149, __Vtemp147, __Vtemp148);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_rg_input_BI_ETC___05F_d933[0U] 
        = __Vtemp149[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_rg_input_BI_ETC___05F_d933[1U] 
        = __Vtemp149[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_rg_input_BI_ETC___05F_d933[2U] 
        = __Vtemp149[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_rg_input_BI_ETC___05F_d933[3U] 
        = __Vtemp149[3U];
    VL_EXTEND_WQ(128,64, __Vtemp150, vlTOPp->mkbbox__DOT__x___05Fh14190);
    VL_EXTEND_WQ(128,64, __Vtemp151, vlTOPp->mkbbox__DOT__y___05Fh16706);
    VL_MUL_W(4, __Vtemp152, __Vtemp150, __Vtemp151);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1498[0U] 
        = __Vtemp152[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1498[1U] 
        = __Vtemp152[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1498[2U] 
        = __Vtemp152[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1498[3U] 
        = __Vtemp152[3U];
    VL_EXTEND_WQ(128,64, __Vtemp153, vlTOPp->mkbbox__DOT__x___05Fh14190);
    VL_EXTEND_WQ(128,64, __Vtemp154, vlTOPp->mkbbox__DOT__y___05Fh16688);
    VL_MUL_W(4, __Vtemp155, __Vtemp153, __Vtemp154);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1275[0U] 
        = __Vtemp155[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1275[1U] 
        = __Vtemp155[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1275[2U] 
        = __Vtemp155[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1275[3U] 
        = __Vtemp155[3U];
    VL_EXTEND_WQ(128,64, __Vtemp156, vlTOPp->mkbbox__DOT__x___05Fh14174);
    VL_EXTEND_WQ(128,64, __Vtemp157, vlTOPp->mkbbox__DOT__y___05Fh14175);
    VL_MUL_W(4, __Vtemp158, __Vtemp156, __Vtemp157);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_rg_input_BI_ETC___05F_d926[0U] 
        = __Vtemp158[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_rg_input_BI_ETC___05F_d926[1U] 
        = __Vtemp158[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_rg_input_BI_ETC___05F_d926[2U] 
        = __Vtemp158[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_rg_input_BI_ETC___05F_d926[3U] 
        = __Vtemp158[3U];
    VL_EXTEND_WQ(128,64, __Vtemp159, vlTOPp->mkbbox__DOT__x___05Fh14174);
    VL_EXTEND_WQ(128,64, __Vtemp160, vlTOPp->mkbbox__DOT__y___05Fh16688);
    VL_MUL_W(4, __Vtemp161, __Vtemp159, __Vtemp160);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1495[0U] 
        = __Vtemp161[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1495[1U] 
        = __Vtemp161[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1495[2U] 
        = __Vtemp161[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1495[3U] 
        = __Vtemp161[3U];
    VL_EXTEND_WQ(128,64, __Vtemp162, vlTOPp->mkbbox__DOT__x___05Fh14174);
    VL_EXTEND_WQ(128,64, __Vtemp163, vlTOPp->mkbbox__DOT__y___05Fh16670);
    VL_MUL_W(4, __Vtemp164, __Vtemp162, __Vtemp163);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1270[0U] 
        = __Vtemp164[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1270[1U] 
        = __Vtemp164[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1270[2U] 
        = __Vtemp164[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1270[3U] 
        = __Vtemp164[3U];
    VL_EXTEND_WQ(128,64, __Vtemp165, vlTOPp->mkbbox__DOT__x___05Fh14158);
    VL_EXTEND_WQ(128,64, __Vtemp166, vlTOPp->mkbbox__DOT__y___05Fh14159);
    VL_MUL_W(4, __Vtemp167, __Vtemp165, __Vtemp166);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_rg_input_BI_ETC___05F_d919[0U] 
        = __Vtemp167[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_rg_input_BI_ETC___05F_d919[1U] 
        = __Vtemp167[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_rg_input_BI_ETC___05F_d919[2U] 
        = __Vtemp167[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_rg_input_BI_ETC___05F_d919[3U] 
        = __Vtemp167[3U];
    VL_EXTEND_WQ(128,64, __Vtemp168, vlTOPp->mkbbox__DOT__x___05Fh14158);
    VL_EXTEND_WQ(128,64, __Vtemp169, vlTOPp->mkbbox__DOT__y___05Fh16670);
    VL_MUL_W(4, __Vtemp170, __Vtemp168, __Vtemp169);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1492[0U] 
        = __Vtemp170[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1492[1U] 
        = __Vtemp170[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1492[2U] 
        = __Vtemp170[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1492[3U] 
        = __Vtemp170[3U];
    VL_EXTEND_WQ(128,64, __Vtemp171, vlTOPp->mkbbox__DOT__x___05Fh14158);
    VL_EXTEND_WQ(128,64, __Vtemp172, vlTOPp->mkbbox__DOT__y___05Fh16652);
    VL_MUL_W(4, __Vtemp173, __Vtemp171, __Vtemp172);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1265[0U] 
        = __Vtemp173[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1265[1U] 
        = __Vtemp173[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1265[2U] 
        = __Vtemp173[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1265[3U] 
        = __Vtemp173[3U];
    VL_EXTEND_WQ(128,64, __Vtemp174, vlTOPp->mkbbox__DOT__x___05Fh14142);
    VL_EXTEND_WQ(128,64, __Vtemp175, vlTOPp->mkbbox__DOT__y___05Fh14143);
    VL_MUL_W(4, __Vtemp176, __Vtemp174, __Vtemp175);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_rg_input_BI_ETC___05F_d912[0U] 
        = __Vtemp176[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_rg_input_BI_ETC___05F_d912[1U] 
        = __Vtemp176[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_rg_input_BI_ETC___05F_d912[2U] 
        = __Vtemp176[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_rg_input_BI_ETC___05F_d912[3U] 
        = __Vtemp176[3U];
    VL_EXTEND_WQ(128,64, __Vtemp177, vlTOPp->mkbbox__DOT__x___05Fh14142);
    VL_EXTEND_WQ(128,64, __Vtemp178, vlTOPp->mkbbox__DOT__y___05Fh16652);
    VL_MUL_W(4, __Vtemp179, __Vtemp177, __Vtemp178);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1489[0U] 
        = __Vtemp179[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1489[1U] 
        = __Vtemp179[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1489[2U] 
        = __Vtemp179[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1489[3U] 
        = __Vtemp179[3U];
    vlTOPp->mkbbox__DOT__out___05Fh32750 = (0xff00ULL 
                                            + vlTOPp->mkbbox__DOT__IF_rg_input_BITS_71_TO_64_93_EQ_0_086_THEN_0_E_ETC___05F_d2087);
    VL_EXTEND_WQ(128,64, __Vtemp180, vlTOPp->mkbbox__DOT__x___05Fh14142);
    VL_EXTEND_WQ(128,64, __Vtemp181, vlTOPp->mkbbox__DOT__y___05Fh16634);
    VL_MUL_W(4, __Vtemp182, __Vtemp180, __Vtemp181);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1260[0U] 
        = __Vtemp182[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1260[1U] 
        = __Vtemp182[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1260[2U] 
        = __Vtemp182[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1260[3U] 
        = __Vtemp182[3U];
    VL_EXTEND_WQ(128,64, __Vtemp183, vlTOPp->mkbbox__DOT__x___05Fh14126);
    VL_EXTEND_WQ(128,64, __Vtemp184, vlTOPp->mkbbox__DOT__y___05Fh14127);
    VL_MUL_W(4, __Vtemp185, __Vtemp183, __Vtemp184);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_rg_input_BI_ETC___05F_d905[0U] 
        = __Vtemp185[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_rg_input_BI_ETC___05F_d905[1U] 
        = __Vtemp185[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_rg_input_BI_ETC___05F_d905[2U] 
        = __Vtemp185[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_rg_input_BI_ETC___05F_d905[3U] 
        = __Vtemp185[3U];
    VL_EXTEND_WQ(128,64, __Vtemp186, vlTOPp->mkbbox__DOT__x___05Fh14126);
    VL_EXTEND_WQ(128,64, __Vtemp187, vlTOPp->mkbbox__DOT__y___05Fh16634);
    VL_MUL_W(4, __Vtemp188, __Vtemp186, __Vtemp187);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1486[0U] 
        = __Vtemp188[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1486[1U] 
        = __Vtemp188[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1486[2U] 
        = __Vtemp188[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1486[3U] 
        = __Vtemp188[3U];
    VL_EXTEND_WQ(128,64, __Vtemp189, vlTOPp->mkbbox__DOT__x___05Fh14126);
    VL_EXTEND_WQ(128,64, __Vtemp190, vlTOPp->mkbbox__DOT__y___05Fh16616);
    VL_MUL_W(4, __Vtemp191, __Vtemp189, __Vtemp190);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1255[0U] 
        = __Vtemp191[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1255[1U] 
        = __Vtemp191[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1255[2U] 
        = __Vtemp191[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1255[3U] 
        = __Vtemp191[3U];
    VL_EXTEND_WQ(128,64, __Vtemp192, vlTOPp->mkbbox__DOT__x___05Fh14110);
    VL_EXTEND_WQ(128,64, __Vtemp193, vlTOPp->mkbbox__DOT__y___05Fh14111);
    VL_MUL_W(4, __Vtemp194, __Vtemp192, __Vtemp193);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_rg_input_BI_ETC___05F_d898[0U] 
        = __Vtemp194[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_rg_input_BI_ETC___05F_d898[1U] 
        = __Vtemp194[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_rg_input_BI_ETC___05F_d898[2U] 
        = __Vtemp194[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_rg_input_BI_ETC___05F_d898[3U] 
        = __Vtemp194[3U];
    VL_EXTEND_WQ(128,64, __Vtemp195, vlTOPp->mkbbox__DOT__x___05Fh14110);
    VL_EXTEND_WQ(128,64, __Vtemp196, vlTOPp->mkbbox__DOT__y___05Fh16616);
    VL_MUL_W(4, __Vtemp197, __Vtemp195, __Vtemp196);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1483[0U] 
        = __Vtemp197[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1483[1U] 
        = __Vtemp197[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1483[2U] 
        = __Vtemp197[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1483[3U] 
        = __Vtemp197[3U];
    VL_EXTEND_WQ(128,64, __Vtemp198, vlTOPp->mkbbox__DOT__x___05Fh14110);
    VL_EXTEND_WQ(128,64, __Vtemp199, vlTOPp->mkbbox__DOT__y___05Fh16598);
    VL_MUL_W(4, __Vtemp200, __Vtemp198, __Vtemp199);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1250[0U] 
        = __Vtemp200[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1250[1U] 
        = __Vtemp200[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1250[2U] 
        = __Vtemp200[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1250[3U] 
        = __Vtemp200[3U];
    VL_EXTEND_WQ(128,64, __Vtemp201, vlTOPp->mkbbox__DOT__x___05Fh14094);
    VL_EXTEND_WQ(128,64, __Vtemp202, vlTOPp->mkbbox__DOT__y___05Fh14095);
    VL_MUL_W(4, __Vtemp203, __Vtemp201, __Vtemp202);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_rg_input_BI_ETC___05F_d891[0U] 
        = __Vtemp203[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_rg_input_BI_ETC___05F_d891[1U] 
        = __Vtemp203[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_rg_input_BI_ETC___05F_d891[2U] 
        = __Vtemp203[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_rg_input_BI_ETC___05F_d891[3U] 
        = __Vtemp203[3U];
    VL_EXTEND_WQ(128,64, __Vtemp204, vlTOPp->mkbbox__DOT__x___05Fh14094);
    VL_EXTEND_WQ(128,64, __Vtemp205, vlTOPp->mkbbox__DOT__y___05Fh16598);
    VL_MUL_W(4, __Vtemp206, __Vtemp204, __Vtemp205);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1480[0U] 
        = __Vtemp206[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1480[1U] 
        = __Vtemp206[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1480[2U] 
        = __Vtemp206[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1480[3U] 
        = __Vtemp206[3U];
    VL_EXTEND_WQ(128,64, __Vtemp207, vlTOPp->mkbbox__DOT__x___05Fh14094);
    VL_EXTEND_WQ(128,64, __Vtemp208, vlTOPp->mkbbox__DOT__y___05Fh16580);
    VL_MUL_W(4, __Vtemp209, __Vtemp207, __Vtemp208);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1245[0U] 
        = __Vtemp209[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1245[1U] 
        = __Vtemp209[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1245[2U] 
        = __Vtemp209[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1245[3U] 
        = __Vtemp209[3U];
    VL_EXTEND_WQ(128,64, __Vtemp210, vlTOPp->mkbbox__DOT__x___05Fh14078);
    VL_EXTEND_WQ(128,64, __Vtemp211, vlTOPp->mkbbox__DOT__y___05Fh14079);
    VL_MUL_W(4, __Vtemp212, __Vtemp210, __Vtemp211);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_rg_input_BI_ETC___05F_d884[0U] 
        = __Vtemp212[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_rg_input_BI_ETC___05F_d884[1U] 
        = __Vtemp212[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_rg_input_BI_ETC___05F_d884[2U] 
        = __Vtemp212[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_rg_input_BI_ETC___05F_d884[3U] 
        = __Vtemp212[3U];
    VL_EXTEND_WQ(128,64, __Vtemp213, vlTOPp->mkbbox__DOT__x___05Fh14078);
    VL_EXTEND_WQ(128,64, __Vtemp214, vlTOPp->mkbbox__DOT__y___05Fh16580);
    VL_MUL_W(4, __Vtemp215, __Vtemp213, __Vtemp214);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1477[0U] 
        = __Vtemp215[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1477[1U] 
        = __Vtemp215[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1477[2U] 
        = __Vtemp215[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1477[3U] 
        = __Vtemp215[3U];
    VL_EXTEND_WQ(128,64, __Vtemp216, vlTOPp->mkbbox__DOT__x___05Fh14078);
    VL_EXTEND_WQ(128,64, __Vtemp217, vlTOPp->mkbbox__DOT__y___05Fh16562);
    VL_MUL_W(4, __Vtemp218, __Vtemp216, __Vtemp217);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1240[0U] 
        = __Vtemp218[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1240[1U] 
        = __Vtemp218[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1240[2U] 
        = __Vtemp218[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1240[3U] 
        = __Vtemp218[3U];
    VL_EXTEND_WQ(128,64, __Vtemp219, vlTOPp->mkbbox__DOT__x___05Fh14062);
    VL_EXTEND_WQ(128,64, __Vtemp220, vlTOPp->mkbbox__DOT__y___05Fh14063);
    VL_MUL_W(4, __Vtemp221, __Vtemp219, __Vtemp220);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_rg_input_BI_ETC___05F_d877[0U] 
        = __Vtemp221[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_rg_input_BI_ETC___05F_d877[1U] 
        = __Vtemp221[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_rg_input_BI_ETC___05F_d877[2U] 
        = __Vtemp221[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_rg_input_BI_ETC___05F_d877[3U] 
        = __Vtemp221[3U];
    VL_EXTEND_WQ(128,64, __Vtemp222, vlTOPp->mkbbox__DOT__x___05Fh14062);
    VL_EXTEND_WQ(128,64, __Vtemp223, vlTOPp->mkbbox__DOT__y___05Fh16562);
    VL_MUL_W(4, __Vtemp224, __Vtemp222, __Vtemp223);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1474[0U] 
        = __Vtemp224[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1474[1U] 
        = __Vtemp224[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1474[2U] 
        = __Vtemp224[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1474[3U] 
        = __Vtemp224[3U];
    VL_EXTEND_WQ(128,64, __Vtemp225, vlTOPp->mkbbox__DOT__x___05Fh14062);
    VL_EXTEND_WQ(128,64, __Vtemp226, vlTOPp->mkbbox__DOT__y___05Fh16544);
    VL_MUL_W(4, __Vtemp227, __Vtemp225, __Vtemp226);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1235[0U] 
        = __Vtemp227[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1235[1U] 
        = __Vtemp227[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1235[2U] 
        = __Vtemp227[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1235[3U] 
        = __Vtemp227[3U];
    VL_EXTEND_WQ(128,64, __Vtemp228, vlTOPp->mkbbox__DOT__x___05Fh14046);
    VL_EXTEND_WQ(128,64, __Vtemp229, vlTOPp->mkbbox__DOT__y___05Fh14047);
    VL_MUL_W(4, __Vtemp230, __Vtemp228, __Vtemp229);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_rg_input_BI_ETC___05F_d870[0U] 
        = __Vtemp230[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_rg_input_BI_ETC___05F_d870[1U] 
        = __Vtemp230[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_rg_input_BI_ETC___05F_d870[2U] 
        = __Vtemp230[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_rg_input_BI_ETC___05F_d870[3U] 
        = __Vtemp230[3U];
    VL_EXTEND_WQ(128,64, __Vtemp231, vlTOPp->mkbbox__DOT__x___05Fh14046);
    VL_EXTEND_WQ(128,64, __Vtemp232, vlTOPp->mkbbox__DOT__y___05Fh16544);
    VL_MUL_W(4, __Vtemp233, __Vtemp231, __Vtemp232);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1471[0U] 
        = __Vtemp233[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1471[1U] 
        = __Vtemp233[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1471[2U] 
        = __Vtemp233[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1471[3U] 
        = __Vtemp233[3U];
    VL_EXTEND_WQ(128,64, __Vtemp234, vlTOPp->mkbbox__DOT__x___05Fh14046);
    VL_EXTEND_WQ(128,64, __Vtemp235, vlTOPp->mkbbox__DOT__y___05Fh16526);
    VL_MUL_W(4, __Vtemp236, __Vtemp234, __Vtemp235);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1230[0U] 
        = __Vtemp236[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1230[1U] 
        = __Vtemp236[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1230[2U] 
        = __Vtemp236[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1230[3U] 
        = __Vtemp236[3U];
    VL_EXTEND_WQ(128,64, __Vtemp237, vlTOPp->mkbbox__DOT__x___05Fh14030);
    VL_EXTEND_WQ(128,64, __Vtemp238, vlTOPp->mkbbox__DOT__y___05Fh14031);
    VL_MUL_W(4, __Vtemp239, __Vtemp237, __Vtemp238);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_rg_input_BI_ETC___05F_d863[0U] 
        = __Vtemp239[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_rg_input_BI_ETC___05F_d863[1U] 
        = __Vtemp239[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_rg_input_BI_ETC___05F_d863[2U] 
        = __Vtemp239[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_rg_input_BI_ETC___05F_d863[3U] 
        = __Vtemp239[3U];
    VL_EXTEND_WQ(128,64, __Vtemp240, vlTOPp->mkbbox__DOT__x___05Fh14030);
    VL_EXTEND_WQ(128,64, __Vtemp241, vlTOPp->mkbbox__DOT__y___05Fh16526);
    VL_MUL_W(4, __Vtemp242, __Vtemp240, __Vtemp241);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1468[0U] 
        = __Vtemp242[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1468[1U] 
        = __Vtemp242[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1468[2U] 
        = __Vtemp242[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1468[3U] 
        = __Vtemp242[3U];
    VL_EXTEND_WQ(128,64, __Vtemp243, vlTOPp->mkbbox__DOT__x___05Fh14030);
    VL_EXTEND_WQ(128,64, __Vtemp244, vlTOPp->mkbbox__DOT__y___05Fh16508);
    VL_MUL_W(4, __Vtemp245, __Vtemp243, __Vtemp244);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1225[0U] 
        = __Vtemp245[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1225[1U] 
        = __Vtemp245[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1225[2U] 
        = __Vtemp245[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1225[3U] 
        = __Vtemp245[3U];
    VL_EXTEND_WQ(128,64, __Vtemp246, vlTOPp->mkbbox__DOT__x___05Fh14014);
    VL_EXTEND_WQ(128,64, __Vtemp247, vlTOPp->mkbbox__DOT__y___05Fh14015);
    VL_MUL_W(4, __Vtemp248, __Vtemp246, __Vtemp247);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_rg_input_BI_ETC___05F_d856[0U] 
        = __Vtemp248[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_rg_input_BI_ETC___05F_d856[1U] 
        = __Vtemp248[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_rg_input_BI_ETC___05F_d856[2U] 
        = __Vtemp248[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_rg_input_BI_ETC___05F_d856[3U] 
        = __Vtemp248[3U];
    VL_EXTEND_WQ(128,64, __Vtemp249, vlTOPp->mkbbox__DOT__x___05Fh14014);
    VL_EXTEND_WQ(128,64, __Vtemp250, vlTOPp->mkbbox__DOT__y___05Fh16508);
    VL_MUL_W(4, __Vtemp251, __Vtemp249, __Vtemp250);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1465[0U] 
        = __Vtemp251[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1465[1U] 
        = __Vtemp251[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1465[2U] 
        = __Vtemp251[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1465[3U] 
        = __Vtemp251[3U];
    VL_EXTEND_WQ(128,64, __Vtemp252, vlTOPp->mkbbox__DOT__x___05Fh14014);
    VL_EXTEND_WQ(128,64, __Vtemp253, vlTOPp->mkbbox__DOT__y___05Fh16490);
    VL_MUL_W(4, __Vtemp254, __Vtemp252, __Vtemp253);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1220[0U] 
        = __Vtemp254[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1220[1U] 
        = __Vtemp254[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1220[2U] 
        = __Vtemp254[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1220[3U] 
        = __Vtemp254[3U];
    VL_EXTEND_WQ(128,64, __Vtemp255, vlTOPp->mkbbox__DOT__x___05Fh13998);
    VL_EXTEND_WQ(128,64, __Vtemp256, vlTOPp->mkbbox__DOT__y___05Fh13999);
    VL_MUL_W(4, __Vtemp257, __Vtemp255, __Vtemp256);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_rg_input_BI_ETC___05F_d849[0U] 
        = __Vtemp257[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_rg_input_BI_ETC___05F_d849[1U] 
        = __Vtemp257[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_rg_input_BI_ETC___05F_d849[2U] 
        = __Vtemp257[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_rg_input_BI_ETC___05F_d849[3U] 
        = __Vtemp257[3U];
    VL_EXTEND_WQ(128,64, __Vtemp258, vlTOPp->mkbbox__DOT__x___05Fh13998);
    VL_EXTEND_WQ(128,64, __Vtemp259, vlTOPp->mkbbox__DOT__y___05Fh16490);
    VL_MUL_W(4, __Vtemp260, __Vtemp258, __Vtemp259);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1462[0U] 
        = __Vtemp260[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1462[1U] 
        = __Vtemp260[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1462[2U] 
        = __Vtemp260[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1462[3U] 
        = __Vtemp260[3U];
    VL_EXTEND_WQ(128,64, __Vtemp261, vlTOPp->mkbbox__DOT__x___05Fh13998);
    VL_EXTEND_WQ(128,64, __Vtemp262, vlTOPp->mkbbox__DOT__y___05Fh16472);
    VL_MUL_W(4, __Vtemp263, __Vtemp261, __Vtemp262);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1215[0U] 
        = __Vtemp263[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1215[1U] 
        = __Vtemp263[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1215[2U] 
        = __Vtemp263[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1215[3U] 
        = __Vtemp263[3U];
    VL_EXTEND_WQ(128,64, __Vtemp264, vlTOPp->mkbbox__DOT__x___05Fh13982);
    VL_EXTEND_WQ(128,64, __Vtemp265, vlTOPp->mkbbox__DOT__y___05Fh13983);
    VL_MUL_W(4, __Vtemp266, __Vtemp264, __Vtemp265);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_rg_input_BI_ETC___05F_d842[0U] 
        = __Vtemp266[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_rg_input_BI_ETC___05F_d842[1U] 
        = __Vtemp266[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_rg_input_BI_ETC___05F_d842[2U] 
        = __Vtemp266[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_rg_input_BI_ETC___05F_d842[3U] 
        = __Vtemp266[3U];
    VL_EXTEND_WQ(128,64, __Vtemp267, vlTOPp->mkbbox__DOT__x___05Fh13982);
    VL_EXTEND_WQ(128,64, __Vtemp268, vlTOPp->mkbbox__DOT__y___05Fh16472);
    VL_MUL_W(4, __Vtemp269, __Vtemp267, __Vtemp268);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1459[0U] 
        = __Vtemp269[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1459[1U] 
        = __Vtemp269[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1459[2U] 
        = __Vtemp269[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1459[3U] 
        = __Vtemp269[3U];
    VL_EXTEND_WQ(128,64, __Vtemp270, vlTOPp->mkbbox__DOT__x___05Fh13982);
    VL_EXTEND_WQ(128,64, __Vtemp271, vlTOPp->mkbbox__DOT__y___05Fh16454);
    VL_MUL_W(4, __Vtemp272, __Vtemp270, __Vtemp271);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1210[0U] 
        = __Vtemp272[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1210[1U] 
        = __Vtemp272[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1210[2U] 
        = __Vtemp272[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1210[3U] 
        = __Vtemp272[3U];
    VL_EXTEND_WQ(128,64, __Vtemp273, vlTOPp->mkbbox__DOT__x___05Fh13966);
    VL_EXTEND_WQ(128,64, __Vtemp274, vlTOPp->mkbbox__DOT__y___05Fh13967);
    VL_MUL_W(4, __Vtemp275, __Vtemp273, __Vtemp274);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_rg_input_BI_ETC___05F_d835[0U] 
        = __Vtemp275[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_rg_input_BI_ETC___05F_d835[1U] 
        = __Vtemp275[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_rg_input_BI_ETC___05F_d835[2U] 
        = __Vtemp275[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_rg_input_BI_ETC___05F_d835[3U] 
        = __Vtemp275[3U];
    VL_EXTEND_WQ(128,64, __Vtemp276, vlTOPp->mkbbox__DOT__x___05Fh13966);
    VL_EXTEND_WQ(128,64, __Vtemp277, vlTOPp->mkbbox__DOT__y___05Fh16454);
    VL_MUL_W(4, __Vtemp278, __Vtemp276, __Vtemp277);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1456[0U] 
        = __Vtemp278[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1456[1U] 
        = __Vtemp278[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1456[2U] 
        = __Vtemp278[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1456[3U] 
        = __Vtemp278[3U];
    VL_EXTEND_WQ(128,64, __Vtemp279, vlTOPp->mkbbox__DOT__x___05Fh13966);
    VL_EXTEND_WQ(128,64, __Vtemp280, vlTOPp->mkbbox__DOT__y___05Fh16436);
    VL_MUL_W(4, __Vtemp281, __Vtemp279, __Vtemp280);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1205[0U] 
        = __Vtemp281[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1205[1U] 
        = __Vtemp281[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1205[2U] 
        = __Vtemp281[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1205[3U] 
        = __Vtemp281[3U];
    VL_EXTEND_WQ(128,64, __Vtemp282, vlTOPp->mkbbox__DOT__x___05Fh13950);
    VL_EXTEND_WQ(128,64, __Vtemp283, vlTOPp->mkbbox__DOT__y___05Fh13951);
    VL_MUL_W(4, __Vtemp284, __Vtemp282, __Vtemp283);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_rg_input_BI_ETC___05F_d828[0U] 
        = __Vtemp284[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_rg_input_BI_ETC___05F_d828[1U] 
        = __Vtemp284[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_rg_input_BI_ETC___05F_d828[2U] 
        = __Vtemp284[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_rg_input_BI_ETC___05F_d828[3U] 
        = __Vtemp284[3U];
    VL_EXTEND_WQ(128,64, __Vtemp285, vlTOPp->mkbbox__DOT__x___05Fh13950);
    VL_EXTEND_WQ(128,64, __Vtemp286, vlTOPp->mkbbox__DOT__y___05Fh16436);
    VL_MUL_W(4, __Vtemp287, __Vtemp285, __Vtemp286);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1453[0U] 
        = __Vtemp287[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1453[1U] 
        = __Vtemp287[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1453[2U] 
        = __Vtemp287[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1453[3U] 
        = __Vtemp287[3U];
    VL_EXTEND_WQ(128,64, __Vtemp288, vlTOPp->mkbbox__DOT__x___05Fh13950);
    VL_EXTEND_WQ(128,64, __Vtemp289, vlTOPp->mkbbox__DOT__y___05Fh16418);
    VL_MUL_W(4, __Vtemp290, __Vtemp288, __Vtemp289);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1200[0U] 
        = __Vtemp290[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1200[1U] 
        = __Vtemp290[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1200[2U] 
        = __Vtemp290[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1200[3U] 
        = __Vtemp290[3U];
    VL_EXTEND_WQ(128,64, __Vtemp291, vlTOPp->mkbbox__DOT__x___05Fh13934);
    VL_EXTEND_WQ(128,64, __Vtemp292, vlTOPp->mkbbox__DOT__y___05Fh13935);
    VL_MUL_W(4, __Vtemp293, __Vtemp291, __Vtemp292);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_rg_input_BI_ETC___05F_d822[0U] 
        = __Vtemp293[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_rg_input_BI_ETC___05F_d822[1U] 
        = __Vtemp293[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_rg_input_BI_ETC___05F_d822[2U] 
        = __Vtemp293[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_rg_input_BI_ETC___05F_d822[3U] 
        = __Vtemp293[3U];
    VL_EXTEND_WQ(128,64, __Vtemp294, vlTOPp->mkbbox__DOT__x___05Fh13934);
    VL_EXTEND_WQ(128,64, __Vtemp295, vlTOPp->mkbbox__DOT__y___05Fh16418);
    VL_MUL_W(4, __Vtemp296, __Vtemp294, __Vtemp295);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1450[0U] 
        = __Vtemp296[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1450[1U] 
        = __Vtemp296[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1450[2U] 
        = __Vtemp296[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1450[3U] 
        = __Vtemp296[3U];
    VL_EXTEND_WQ(128,64, __Vtemp297, vlTOPp->mkbbox__DOT__x___05Fh13934);
    VL_EXTEND_WQ(128,64, __Vtemp298, vlTOPp->mkbbox__DOT__y___05Fh16400);
    VL_MUL_W(4, __Vtemp299, __Vtemp297, __Vtemp298);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1195[0U] 
        = __Vtemp299[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1195[1U] 
        = __Vtemp299[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1195[2U] 
        = __Vtemp299[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1195[3U] 
        = __Vtemp299[3U];
    VL_EXTEND_WQ(128,64, __Vtemp300, vlTOPp->mkbbox__DOT__x___05Fh13918);
    VL_EXTEND_WQ(128,64, __Vtemp301, vlTOPp->mkbbox__DOT__y___05Fh13919);
    VL_MUL_W(4, __Vtemp302, __Vtemp300, __Vtemp301);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_rg_input_BI_ETC___05F_d815[0U] 
        = __Vtemp302[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_rg_input_BI_ETC___05F_d815[1U] 
        = __Vtemp302[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_rg_input_BI_ETC___05F_d815[2U] 
        = __Vtemp302[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_rg_input_BI_ETC___05F_d815[3U] 
        = __Vtemp302[3U];
    VL_EXTEND_WQ(128,64, __Vtemp303, vlTOPp->mkbbox__DOT__x___05Fh13918);
    VL_EXTEND_WQ(128,64, __Vtemp304, vlTOPp->mkbbox__DOT__y___05Fh16400);
    VL_MUL_W(4, __Vtemp305, __Vtemp303, __Vtemp304);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1447[0U] 
        = __Vtemp305[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1447[1U] 
        = __Vtemp305[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1447[2U] 
        = __Vtemp305[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1447[3U] 
        = __Vtemp305[3U];
    VL_EXTEND_WQ(128,64, __Vtemp306, vlTOPp->mkbbox__DOT__x___05Fh13918);
    VL_EXTEND_WQ(128,64, __Vtemp307, vlTOPp->mkbbox__DOT__y___05Fh16382);
    VL_MUL_W(4, __Vtemp308, __Vtemp306, __Vtemp307);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1190[0U] 
        = __Vtemp308[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1190[1U] 
        = __Vtemp308[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1190[2U] 
        = __Vtemp308[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1190[3U] 
        = __Vtemp308[3U];
    VL_EXTEND_WQ(128,64, __Vtemp309, vlTOPp->mkbbox__DOT__x___05Fh13902);
    VL_EXTEND_WQ(128,64, __Vtemp310, vlTOPp->mkbbox__DOT__y___05Fh13903);
    VL_MUL_W(4, __Vtemp311, __Vtemp309, __Vtemp310);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_rg_input_BI_ETC___05F_d808[0U] 
        = __Vtemp311[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_rg_input_BI_ETC___05F_d808[1U] 
        = __Vtemp311[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_rg_input_BI_ETC___05F_d808[2U] 
        = __Vtemp311[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_rg_input_BI_ETC___05F_d808[3U] 
        = __Vtemp311[3U];
    VL_EXTEND_WQ(128,64, __Vtemp312, vlTOPp->mkbbox__DOT__x___05Fh13902);
    VL_EXTEND_WQ(128,64, __Vtemp313, vlTOPp->mkbbox__DOT__y___05Fh16382);
    VL_MUL_W(4, __Vtemp314, __Vtemp312, __Vtemp313);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1444[0U] 
        = __Vtemp314[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1444[1U] 
        = __Vtemp314[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1444[2U] 
        = __Vtemp314[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1444[3U] 
        = __Vtemp314[3U];
    VL_EXTEND_WQ(128,64, __Vtemp315, vlTOPp->mkbbox__DOT__x___05Fh13902);
    VL_EXTEND_WQ(128,64, __Vtemp316, vlTOPp->mkbbox__DOT__y___05Fh16364);
    VL_MUL_W(4, __Vtemp317, __Vtemp315, __Vtemp316);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1185[0U] 
        = __Vtemp317[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1185[1U] 
        = __Vtemp317[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1185[2U] 
        = __Vtemp317[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1185[3U] 
        = __Vtemp317[3U];
    VL_EXTEND_WQ(128,64, __Vtemp318, vlTOPp->mkbbox__DOT__x___05Fh13886);
    VL_EXTEND_WQ(128,64, __Vtemp319, vlTOPp->mkbbox__DOT__y___05Fh13887);
    VL_MUL_W(4, __Vtemp320, __Vtemp318, __Vtemp319);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_rg_input_BI_ETC___05F_d801[0U] 
        = __Vtemp320[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_rg_input_BI_ETC___05F_d801[1U] 
        = __Vtemp320[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_rg_input_BI_ETC___05F_d801[2U] 
        = __Vtemp320[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_rg_input_BI_ETC___05F_d801[3U] 
        = __Vtemp320[3U];
    VL_EXTEND_WQ(128,64, __Vtemp321, vlTOPp->mkbbox__DOT__x___05Fh13886);
    VL_EXTEND_WQ(128,64, __Vtemp322, vlTOPp->mkbbox__DOT__y___05Fh16364);
    VL_MUL_W(4, __Vtemp323, __Vtemp321, __Vtemp322);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1441[0U] 
        = __Vtemp323[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1441[1U] 
        = __Vtemp323[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1441[2U] 
        = __Vtemp323[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1441[3U] 
        = __Vtemp323[3U];
    VL_EXTEND_WQ(128,64, __Vtemp324, vlTOPp->mkbbox__DOT__x___05Fh13886);
    VL_EXTEND_WQ(128,64, __Vtemp325, vlTOPp->mkbbox__DOT__y___05Fh16346);
    VL_MUL_W(4, __Vtemp326, __Vtemp324, __Vtemp325);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1180[0U] 
        = __Vtemp326[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1180[1U] 
        = __Vtemp326[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1180[2U] 
        = __Vtemp326[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1180[3U] 
        = __Vtemp326[3U];
    VL_EXTEND_WQ(128,64, __Vtemp327, vlTOPp->mkbbox__DOT__x___05Fh13870);
    VL_EXTEND_WQ(128,64, __Vtemp328, vlTOPp->mkbbox__DOT__y___05Fh13871);
    VL_MUL_W(4, __Vtemp329, __Vtemp327, __Vtemp328);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_rg_input_BI_ETC___05F_d794[0U] 
        = __Vtemp329[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_rg_input_BI_ETC___05F_d794[1U] 
        = __Vtemp329[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_rg_input_BI_ETC___05F_d794[2U] 
        = __Vtemp329[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_rg_input_BI_ETC___05F_d794[3U] 
        = __Vtemp329[3U];
    VL_EXTEND_WQ(128,64, __Vtemp330, vlTOPp->mkbbox__DOT__x___05Fh13870);
    VL_EXTEND_WQ(128,64, __Vtemp331, vlTOPp->mkbbox__DOT__y___05Fh16346);
    VL_MUL_W(4, __Vtemp332, __Vtemp330, __Vtemp331);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1438[0U] 
        = __Vtemp332[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1438[1U] 
        = __Vtemp332[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1438[2U] 
        = __Vtemp332[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1438[3U] 
        = __Vtemp332[3U];
    VL_EXTEND_WQ(128,64, __Vtemp333, vlTOPp->mkbbox__DOT__x___05Fh13870);
    VL_EXTEND_WQ(128,64, __Vtemp334, vlTOPp->mkbbox__DOT__y___05Fh16328);
    VL_MUL_W(4, __Vtemp335, __Vtemp333, __Vtemp334);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1175[0U] 
        = __Vtemp335[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1175[1U] 
        = __Vtemp335[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1175[2U] 
        = __Vtemp335[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1175[3U] 
        = __Vtemp335[3U];
    VL_EXTEND_WQ(128,64, __Vtemp336, vlTOPp->mkbbox__DOT__x___05Fh13854);
    VL_EXTEND_WQ(128,64, __Vtemp337, vlTOPp->mkbbox__DOT__y___05Fh13855);
    VL_MUL_W(4, __Vtemp338, __Vtemp336, __Vtemp337);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_rg_input_BI_ETC___05F_d787[0U] 
        = __Vtemp338[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_rg_input_BI_ETC___05F_d787[1U] 
        = __Vtemp338[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_rg_input_BI_ETC___05F_d787[2U] 
        = __Vtemp338[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_rg_input_BI_ETC___05F_d787[3U] 
        = __Vtemp338[3U];
    VL_EXTEND_WQ(128,64, __Vtemp339, vlTOPp->mkbbox__DOT__x___05Fh13854);
    VL_EXTEND_WQ(128,64, __Vtemp340, vlTOPp->mkbbox__DOT__y___05Fh16328);
    VL_MUL_W(4, __Vtemp341, __Vtemp339, __Vtemp340);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1435[0U] 
        = __Vtemp341[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1435[1U] 
        = __Vtemp341[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1435[2U] 
        = __Vtemp341[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1435[3U] 
        = __Vtemp341[3U];
    VL_EXTEND_WQ(128,64, __Vtemp342, vlTOPp->mkbbox__DOT__x___05Fh13854);
    VL_EXTEND_WQ(128,64, __Vtemp343, vlTOPp->mkbbox__DOT__y___05Fh16310);
    VL_MUL_W(4, __Vtemp344, __Vtemp342, __Vtemp343);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1170[0U] 
        = __Vtemp344[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1170[1U] 
        = __Vtemp344[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1170[2U] 
        = __Vtemp344[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1170[3U] 
        = __Vtemp344[3U];
    VL_EXTEND_WQ(128,64, __Vtemp345, vlTOPp->mkbbox__DOT__x___05Fh13838);
    VL_EXTEND_WQ(128,64, __Vtemp346, vlTOPp->mkbbox__DOT__y___05Fh13839);
    VL_MUL_W(4, __Vtemp347, __Vtemp345, __Vtemp346);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_rg_input_BI_ETC___05F_d780[0U] 
        = __Vtemp347[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_rg_input_BI_ETC___05F_d780[1U] 
        = __Vtemp347[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_rg_input_BI_ETC___05F_d780[2U] 
        = __Vtemp347[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_rg_input_BI_ETC___05F_d780[3U] 
        = __Vtemp347[3U];
    VL_EXTEND_WQ(128,64, __Vtemp348, vlTOPp->mkbbox__DOT__x___05Fh13838);
    VL_EXTEND_WQ(128,64, __Vtemp349, vlTOPp->mkbbox__DOT__y___05Fh16310);
    VL_MUL_W(4, __Vtemp350, __Vtemp348, __Vtemp349);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1432[0U] 
        = __Vtemp350[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1432[1U] 
        = __Vtemp350[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1432[2U] 
        = __Vtemp350[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1432[3U] 
        = __Vtemp350[3U];
    VL_EXTEND_WQ(128,64, __Vtemp351, vlTOPp->mkbbox__DOT__x___05Fh13838);
    VL_EXTEND_WQ(128,64, __Vtemp352, vlTOPp->mkbbox__DOT__y___05Fh16292);
    VL_MUL_W(4, __Vtemp353, __Vtemp351, __Vtemp352);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1165[0U] 
        = __Vtemp353[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1165[1U] 
        = __Vtemp353[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1165[2U] 
        = __Vtemp353[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1165[3U] 
        = __Vtemp353[3U];
    VL_EXTEND_WQ(128,64, __Vtemp354, vlTOPp->mkbbox__DOT__x___05Fh13822);
    VL_EXTEND_WQ(128,64, __Vtemp355, vlTOPp->mkbbox__DOT__y___05Fh13823);
    VL_MUL_W(4, __Vtemp356, __Vtemp354, __Vtemp355);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_rg_input_BI_ETC___05F_d773[0U] 
        = __Vtemp356[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_rg_input_BI_ETC___05F_d773[1U] 
        = __Vtemp356[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_rg_input_BI_ETC___05F_d773[2U] 
        = __Vtemp356[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_rg_input_BI_ETC___05F_d773[3U] 
        = __Vtemp356[3U];
    VL_EXTEND_WQ(128,64, __Vtemp357, vlTOPp->mkbbox__DOT__x___05Fh13822);
    VL_EXTEND_WQ(128,64, __Vtemp358, vlTOPp->mkbbox__DOT__y___05Fh16292);
    VL_MUL_W(4, __Vtemp359, __Vtemp357, __Vtemp358);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1429[0U] 
        = __Vtemp359[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1429[1U] 
        = __Vtemp359[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1429[2U] 
        = __Vtemp359[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1429[3U] 
        = __Vtemp359[3U];
    VL_EXTEND_WQ(128,64, __Vtemp360, vlTOPp->mkbbox__DOT__x___05Fh13822);
    VL_EXTEND_WQ(128,64, __Vtemp361, vlTOPp->mkbbox__DOT__y___05Fh16274);
    VL_MUL_W(4, __Vtemp362, __Vtemp360, __Vtemp361);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1160[0U] 
        = __Vtemp362[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1160[1U] 
        = __Vtemp362[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1160[2U] 
        = __Vtemp362[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1160[3U] 
        = __Vtemp362[3U];
    VL_EXTEND_WQ(128,64, __Vtemp363, vlTOPp->mkbbox__DOT__x___05Fh13806);
    VL_EXTEND_WQ(128,64, __Vtemp364, vlTOPp->mkbbox__DOT__y___05Fh13807);
    VL_MUL_W(4, __Vtemp365, __Vtemp363, __Vtemp364);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_rg_input_BI_ETC___05F_d766[0U] 
        = __Vtemp365[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_rg_input_BI_ETC___05F_d766[1U] 
        = __Vtemp365[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_rg_input_BI_ETC___05F_d766[2U] 
        = __Vtemp365[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_rg_input_BI_ETC___05F_d766[3U] 
        = __Vtemp365[3U];
    VL_EXTEND_WQ(128,64, __Vtemp366, vlTOPp->mkbbox__DOT__x___05Fh13806);
    VL_EXTEND_WQ(128,64, __Vtemp367, vlTOPp->mkbbox__DOT__y___05Fh16274);
    VL_MUL_W(4, __Vtemp368, __Vtemp366, __Vtemp367);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1426[0U] 
        = __Vtemp368[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1426[1U] 
        = __Vtemp368[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1426[2U] 
        = __Vtemp368[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1426[3U] 
        = __Vtemp368[3U];
    VL_EXTEND_WQ(128,64, __Vtemp369, vlTOPp->mkbbox__DOT__x___05Fh13806);
    VL_EXTEND_WQ(128,64, __Vtemp370, vlTOPp->mkbbox__DOT__y___05Fh16256);
    VL_MUL_W(4, __Vtemp371, __Vtemp369, __Vtemp370);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1155[0U] 
        = __Vtemp371[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1155[1U] 
        = __Vtemp371[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1155[2U] 
        = __Vtemp371[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1155[3U] 
        = __Vtemp371[3U];
    VL_EXTEND_WQ(128,64, __Vtemp372, vlTOPp->mkbbox__DOT__x___05Fh13790);
    VL_EXTEND_WQ(128,64, __Vtemp373, vlTOPp->mkbbox__DOT__y___05Fh13791);
    VL_MUL_W(4, __Vtemp374, __Vtemp372, __Vtemp373);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_rg_input_BI_ETC___05F_d759[0U] 
        = __Vtemp374[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_rg_input_BI_ETC___05F_d759[1U] 
        = __Vtemp374[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_rg_input_BI_ETC___05F_d759[2U] 
        = __Vtemp374[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_rg_input_BI_ETC___05F_d759[3U] 
        = __Vtemp374[3U];
    VL_EXTEND_WQ(128,64, __Vtemp375, vlTOPp->mkbbox__DOT__x___05Fh13790);
    VL_EXTEND_WQ(128,64, __Vtemp376, vlTOPp->mkbbox__DOT__y___05Fh16256);
    VL_MUL_W(4, __Vtemp377, __Vtemp375, __Vtemp376);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1423[0U] 
        = __Vtemp377[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1423[1U] 
        = __Vtemp377[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1423[2U] 
        = __Vtemp377[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1423[3U] 
        = __Vtemp377[3U];
    VL_EXTEND_WQ(128,64, __Vtemp378, vlTOPp->mkbbox__DOT__x___05Fh13790);
    VL_EXTEND_WQ(128,64, __Vtemp379, vlTOPp->mkbbox__DOT__y___05Fh16238);
    VL_MUL_W(4, __Vtemp380, __Vtemp378, __Vtemp379);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1150[0U] 
        = __Vtemp380[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1150[1U] 
        = __Vtemp380[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1150[2U] 
        = __Vtemp380[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1150[3U] 
        = __Vtemp380[3U];
    VL_EXTEND_WQ(128,64, __Vtemp381, vlTOPp->mkbbox__DOT__x___05Fh13774);
    VL_EXTEND_WQ(128,64, __Vtemp382, vlTOPp->mkbbox__DOT__y___05Fh13775);
    VL_MUL_W(4, __Vtemp383, __Vtemp381, __Vtemp382);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_rg_input_BI_ETC___05F_d752[0U] 
        = __Vtemp383[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_rg_input_BI_ETC___05F_d752[1U] 
        = __Vtemp383[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_rg_input_BI_ETC___05F_d752[2U] 
        = __Vtemp383[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_rg_input_BI_ETC___05F_d752[3U] 
        = __Vtemp383[3U];
    VL_EXTEND_WQ(128,64, __Vtemp384, vlTOPp->mkbbox__DOT__x___05Fh13774);
    VL_EXTEND_WQ(128,64, __Vtemp385, vlTOPp->mkbbox__DOT__y___05Fh16238);
    VL_MUL_W(4, __Vtemp386, __Vtemp384, __Vtemp385);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1420[0U] 
        = __Vtemp386[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1420[1U] 
        = __Vtemp386[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1420[2U] 
        = __Vtemp386[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1420[3U] 
        = __Vtemp386[3U];
    VL_EXTEND_WQ(128,64, __Vtemp387, vlTOPp->mkbbox__DOT__x___05Fh13774);
    VL_EXTEND_WQ(128,64, __Vtemp388, vlTOPp->mkbbox__DOT__y___05Fh16220);
    VL_MUL_W(4, __Vtemp389, __Vtemp387, __Vtemp388);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1145[0U] 
        = __Vtemp389[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1145[1U] 
        = __Vtemp389[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1145[2U] 
        = __Vtemp389[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1145[3U] 
        = __Vtemp389[3U];
    VL_EXTEND_WQ(128,64, __Vtemp390, vlTOPp->mkbbox__DOT__x___05Fh13758);
    VL_EXTEND_WQ(128,64, __Vtemp391, vlTOPp->mkbbox__DOT__y___05Fh13759);
    VL_MUL_W(4, __Vtemp392, __Vtemp390, __Vtemp391);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_rg_input_BI_ETC___05F_d745[0U] 
        = __Vtemp392[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_rg_input_BI_ETC___05F_d745[1U] 
        = __Vtemp392[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_rg_input_BI_ETC___05F_d745[2U] 
        = __Vtemp392[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_rg_input_BI_ETC___05F_d745[3U] 
        = __Vtemp392[3U];
    VL_EXTEND_WQ(128,64, __Vtemp393, vlTOPp->mkbbox__DOT__x___05Fh13758);
    VL_EXTEND_WQ(128,64, __Vtemp394, vlTOPp->mkbbox__DOT__y___05Fh16220);
    VL_MUL_W(4, __Vtemp395, __Vtemp393, __Vtemp394);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1417[0U] 
        = __Vtemp395[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1417[1U] 
        = __Vtemp395[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1417[2U] 
        = __Vtemp395[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1417[3U] 
        = __Vtemp395[3U];
    VL_EXTEND_WQ(128,64, __Vtemp396, vlTOPp->mkbbox__DOT__x___05Fh13758);
    VL_EXTEND_WQ(128,64, __Vtemp397, vlTOPp->mkbbox__DOT__y___05Fh16202);
    VL_MUL_W(4, __Vtemp398, __Vtemp396, __Vtemp397);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1140[0U] 
        = __Vtemp398[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1140[1U] 
        = __Vtemp398[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1140[2U] 
        = __Vtemp398[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1140[3U] 
        = __Vtemp398[3U];
    VL_EXTEND_WQ(128,64, __Vtemp399, vlTOPp->mkbbox__DOT__x___05Fh13742);
    VL_EXTEND_WQ(128,64, __Vtemp400, vlTOPp->mkbbox__DOT__y___05Fh13743);
    VL_MUL_W(4, __Vtemp401, __Vtemp399, __Vtemp400);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_rg_input_BI_ETC___05F_d738[0U] 
        = __Vtemp401[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_rg_input_BI_ETC___05F_d738[1U] 
        = __Vtemp401[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_rg_input_BI_ETC___05F_d738[2U] 
        = __Vtemp401[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_rg_input_BI_ETC___05F_d738[3U] 
        = __Vtemp401[3U];
    VL_EXTEND_WQ(128,64, __Vtemp402, vlTOPp->mkbbox__DOT__x___05Fh13742);
    VL_EXTEND_WQ(128,64, __Vtemp403, vlTOPp->mkbbox__DOT__y___05Fh16202);
    VL_MUL_W(4, __Vtemp404, __Vtemp402, __Vtemp403);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1414[0U] 
        = __Vtemp404[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1414[1U] 
        = __Vtemp404[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1414[2U] 
        = __Vtemp404[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1414[3U] 
        = __Vtemp404[3U];
    VL_EXTEND_WQ(128,64, __Vtemp405, vlTOPp->mkbbox__DOT__x___05Fh13742);
    VL_EXTEND_WQ(128,64, __Vtemp406, vlTOPp->mkbbox__DOT__y___05Fh16184);
    VL_MUL_W(4, __Vtemp407, __Vtemp405, __Vtemp406);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1135[0U] 
        = __Vtemp407[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1135[1U] 
        = __Vtemp407[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1135[2U] 
        = __Vtemp407[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1135[3U] 
        = __Vtemp407[3U];
    VL_EXTEND_WQ(128,64, __Vtemp408, vlTOPp->mkbbox__DOT__x___05Fh13726);
    VL_EXTEND_WQ(128,64, __Vtemp409, vlTOPp->mkbbox__DOT__y___05Fh13727);
    VL_MUL_W(4, __Vtemp410, __Vtemp408, __Vtemp409);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_rg_input_BI_ETC___05F_d731[0U] 
        = __Vtemp410[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_rg_input_BI_ETC___05F_d731[1U] 
        = __Vtemp410[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_rg_input_BI_ETC___05F_d731[2U] 
        = __Vtemp410[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_rg_input_BI_ETC___05F_d731[3U] 
        = __Vtemp410[3U];
    VL_EXTEND_WQ(128,64, __Vtemp411, vlTOPp->mkbbox__DOT__x___05Fh13726);
    VL_EXTEND_WQ(128,64, __Vtemp412, vlTOPp->mkbbox__DOT__y___05Fh16184);
    VL_MUL_W(4, __Vtemp413, __Vtemp411, __Vtemp412);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1411[0U] 
        = __Vtemp413[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1411[1U] 
        = __Vtemp413[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1411[2U] 
        = __Vtemp413[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1411[3U] 
        = __Vtemp413[3U];
    VL_EXTEND_WQ(128,64, __Vtemp414, vlTOPp->mkbbox__DOT__x___05Fh13726);
    VL_EXTEND_WQ(128,64, __Vtemp415, vlTOPp->mkbbox__DOT__y___05Fh16166);
    VL_MUL_W(4, __Vtemp416, __Vtemp414, __Vtemp415);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1130[0U] 
        = __Vtemp416[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1130[1U] 
        = __Vtemp416[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1130[2U] 
        = __Vtemp416[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1130[3U] 
        = __Vtemp416[3U];
    VL_EXTEND_WQ(128,64, __Vtemp417, vlTOPp->mkbbox__DOT__x___05Fh13710);
    VL_EXTEND_WQ(128,64, __Vtemp418, vlTOPp->mkbbox__DOT__y___05Fh13711);
    VL_MUL_W(4, __Vtemp419, __Vtemp417, __Vtemp418);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_rg_input_BI_ETC___05F_d724[0U] 
        = __Vtemp419[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_rg_input_BI_ETC___05F_d724[1U] 
        = __Vtemp419[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_rg_input_BI_ETC___05F_d724[2U] 
        = __Vtemp419[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_rg_input_BI_ETC___05F_d724[3U] 
        = __Vtemp419[3U];
    VL_EXTEND_WQ(128,64, __Vtemp420, vlTOPp->mkbbox__DOT__x___05Fh13710);
    VL_EXTEND_WQ(128,64, __Vtemp421, vlTOPp->mkbbox__DOT__y___05Fh16166);
    VL_MUL_W(4, __Vtemp422, __Vtemp420, __Vtemp421);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1408[0U] 
        = __Vtemp422[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1408[1U] 
        = __Vtemp422[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1408[2U] 
        = __Vtemp422[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1408[3U] 
        = __Vtemp422[3U];
    VL_EXTEND_WQ(128,64, __Vtemp423, vlTOPp->mkbbox__DOT__x___05Fh13710);
    VL_EXTEND_WQ(128,64, __Vtemp424, vlTOPp->mkbbox__DOT__y___05Fh16148);
    VL_MUL_W(4, __Vtemp425, __Vtemp423, __Vtemp424);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1125[0U] 
        = __Vtemp425[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1125[1U] 
        = __Vtemp425[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1125[2U] 
        = __Vtemp425[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1125[3U] 
        = __Vtemp425[3U];
    VL_EXTEND_WQ(128,64, __Vtemp426, vlTOPp->mkbbox__DOT__x___05Fh13694);
    VL_EXTEND_WQ(128,64, __Vtemp427, vlTOPp->mkbbox__DOT__y___05Fh13695);
    VL_MUL_W(4, __Vtemp428, __Vtemp426, __Vtemp427);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_rg_input_BI_ETC___05F_d717[0U] 
        = __Vtemp428[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_rg_input_BI_ETC___05F_d717[1U] 
        = __Vtemp428[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_rg_input_BI_ETC___05F_d717[2U] 
        = __Vtemp428[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_rg_input_BI_ETC___05F_d717[3U] 
        = __Vtemp428[3U];
    VL_EXTEND_WQ(128,64, __Vtemp429, vlTOPp->mkbbox__DOT__x___05Fh13694);
    VL_EXTEND_WQ(128,64, __Vtemp430, vlTOPp->mkbbox__DOT__y___05Fh16148);
    VL_MUL_W(4, __Vtemp431, __Vtemp429, __Vtemp430);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1405[0U] 
        = __Vtemp431[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1405[1U] 
        = __Vtemp431[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1405[2U] 
        = __Vtemp431[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1405[3U] 
        = __Vtemp431[3U];
    VL_EXTEND_WQ(128,64, __Vtemp432, vlTOPp->mkbbox__DOT__x___05Fh13694);
    VL_EXTEND_WQ(128,64, __Vtemp433, vlTOPp->mkbbox__DOT__y___05Fh16130);
    VL_MUL_W(4, __Vtemp434, __Vtemp432, __Vtemp433);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1120[0U] 
        = __Vtemp434[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1120[1U] 
        = __Vtemp434[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1120[2U] 
        = __Vtemp434[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1120[3U] 
        = __Vtemp434[3U];
    VL_EXTEND_WQ(128,64, __Vtemp435, vlTOPp->mkbbox__DOT__x___05Fh13678);
    VL_EXTEND_WQ(128,64, __Vtemp436, vlTOPp->mkbbox__DOT__y___05Fh13679);
    VL_MUL_W(4, __Vtemp437, __Vtemp435, __Vtemp436);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_rg_input_BI_ETC___05F_d710[0U] 
        = __Vtemp437[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_rg_input_BI_ETC___05F_d710[1U] 
        = __Vtemp437[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_rg_input_BI_ETC___05F_d710[2U] 
        = __Vtemp437[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_rg_input_BI_ETC___05F_d710[3U] 
        = __Vtemp437[3U];
    VL_EXTEND_WQ(128,64, __Vtemp438, vlTOPp->mkbbox__DOT__x___05Fh13678);
    VL_EXTEND_WQ(128,64, __Vtemp439, vlTOPp->mkbbox__DOT__y___05Fh16130);
    VL_MUL_W(4, __Vtemp440, __Vtemp438, __Vtemp439);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1402[0U] 
        = __Vtemp440[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1402[1U] 
        = __Vtemp440[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1402[2U] 
        = __Vtemp440[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1402[3U] 
        = __Vtemp440[3U];
    VL_EXTEND_WQ(128,64, __Vtemp441, vlTOPp->mkbbox__DOT__x___05Fh13678);
    VL_EXTEND_WQ(128,64, __Vtemp442, vlTOPp->mkbbox__DOT__y___05Fh16112);
    VL_MUL_W(4, __Vtemp443, __Vtemp441, __Vtemp442);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1115[0U] 
        = __Vtemp443[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1115[1U] 
        = __Vtemp443[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1115[2U] 
        = __Vtemp443[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1115[3U] 
        = __Vtemp443[3U];
    VL_EXTEND_WQ(128,64, __Vtemp444, vlTOPp->mkbbox__DOT__x___05Fh13662);
    VL_EXTEND_WQ(128,64, __Vtemp445, vlTOPp->mkbbox__DOT__y___05Fh13663);
    VL_MUL_W(4, __Vtemp446, __Vtemp444, __Vtemp445);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_rg_input_BI_ETC___05F_d703[0U] 
        = __Vtemp446[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_rg_input_BI_ETC___05F_d703[1U] 
        = __Vtemp446[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_rg_input_BI_ETC___05F_d703[2U] 
        = __Vtemp446[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_rg_input_BI_ETC___05F_d703[3U] 
        = __Vtemp446[3U];
    VL_EXTEND_WQ(128,64, __Vtemp447, vlTOPp->mkbbox__DOT__x___05Fh13662);
    VL_EXTEND_WQ(128,64, __Vtemp448, vlTOPp->mkbbox__DOT__y___05Fh16112);
    VL_MUL_W(4, __Vtemp449, __Vtemp447, __Vtemp448);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1399[0U] 
        = __Vtemp449[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1399[1U] 
        = __Vtemp449[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1399[2U] 
        = __Vtemp449[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1399[3U] 
        = __Vtemp449[3U];
    VL_EXTEND_WQ(128,64, __Vtemp450, vlTOPp->mkbbox__DOT__x___05Fh13662);
    VL_EXTEND_WQ(128,64, __Vtemp451, vlTOPp->mkbbox__DOT__y___05Fh16094);
    VL_MUL_W(4, __Vtemp452, __Vtemp450, __Vtemp451);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1110[0U] 
        = __Vtemp452[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1110[1U] 
        = __Vtemp452[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1110[2U] 
        = __Vtemp452[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1110[3U] 
        = __Vtemp452[3U];
    VL_EXTEND_WQ(128,64, __Vtemp453, vlTOPp->mkbbox__DOT__x___05Fh13646);
    VL_EXTEND_WQ(128,64, __Vtemp454, vlTOPp->mkbbox__DOT__y___05Fh13647);
    VL_MUL_W(4, __Vtemp455, __Vtemp453, __Vtemp454);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_rg_input_BI_ETC___05F_d696[0U] 
        = __Vtemp455[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_rg_input_BI_ETC___05F_d696[1U] 
        = __Vtemp455[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_rg_input_BI_ETC___05F_d696[2U] 
        = __Vtemp455[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_rg_input_BI_ETC___05F_d696[3U] 
        = __Vtemp455[3U];
    VL_EXTEND_WQ(128,64, __Vtemp456, vlTOPp->mkbbox__DOT__x___05Fh13646);
    VL_EXTEND_WQ(128,64, __Vtemp457, vlTOPp->mkbbox__DOT__y___05Fh16094);
    VL_MUL_W(4, __Vtemp458, __Vtemp456, __Vtemp457);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1396[0U] 
        = __Vtemp458[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1396[1U] 
        = __Vtemp458[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1396[2U] 
        = __Vtemp458[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1396[3U] 
        = __Vtemp458[3U];
    VL_EXTEND_WQ(128,64, __Vtemp459, vlTOPp->mkbbox__DOT__x___05Fh13646);
    VL_EXTEND_WQ(128,64, __Vtemp460, vlTOPp->mkbbox__DOT__y___05Fh16076);
    VL_MUL_W(4, __Vtemp461, __Vtemp459, __Vtemp460);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1105[0U] 
        = __Vtemp461[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1105[1U] 
        = __Vtemp461[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1105[2U] 
        = __Vtemp461[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1105[3U] 
        = __Vtemp461[3U];
    VL_EXTEND_WQ(128,64, __Vtemp462, vlTOPp->mkbbox__DOT__x___05Fh13630);
    VL_EXTEND_WQ(128,64, __Vtemp463, vlTOPp->mkbbox__DOT__y___05Fh13631);
    VL_MUL_W(4, __Vtemp464, __Vtemp462, __Vtemp463);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_rg_input_BI_ETC___05F_d689[0U] 
        = __Vtemp464[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_rg_input_BI_ETC___05F_d689[1U] 
        = __Vtemp464[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_rg_input_BI_ETC___05F_d689[2U] 
        = __Vtemp464[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_rg_input_BI_ETC___05F_d689[3U] 
        = __Vtemp464[3U];
    VL_EXTEND_WQ(128,64, __Vtemp465, vlTOPp->mkbbox__DOT__x___05Fh13630);
    VL_EXTEND_WQ(128,64, __Vtemp466, vlTOPp->mkbbox__DOT__y___05Fh16076);
    VL_MUL_W(4, __Vtemp467, __Vtemp465, __Vtemp466);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1393[0U] 
        = __Vtemp467[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1393[1U] 
        = __Vtemp467[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1393[2U] 
        = __Vtemp467[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1393[3U] 
        = __Vtemp467[3U];
    VL_EXTEND_WQ(128,64, __Vtemp468, vlTOPp->mkbbox__DOT__x___05Fh13630);
    VL_EXTEND_WQ(128,64, __Vtemp469, vlTOPp->mkbbox__DOT__y___05Fh16058);
    VL_MUL_W(4, __Vtemp470, __Vtemp468, __Vtemp469);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1100[0U] 
        = __Vtemp470[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1100[1U] 
        = __Vtemp470[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1100[2U] 
        = __Vtemp470[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1100[3U] 
        = __Vtemp470[3U];
    VL_EXTEND_WQ(128,64, __Vtemp471, vlTOPp->mkbbox__DOT__x___05Fh13614);
    VL_EXTEND_WQ(128,64, __Vtemp472, vlTOPp->mkbbox__DOT__y___05Fh13615);
    VL_MUL_W(4, __Vtemp473, __Vtemp471, __Vtemp472);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_rg_input_BI_ETC___05F_d682[0U] 
        = __Vtemp473[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_rg_input_BI_ETC___05F_d682[1U] 
        = __Vtemp473[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_rg_input_BI_ETC___05F_d682[2U] 
        = __Vtemp473[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_rg_input_BI_ETC___05F_d682[3U] 
        = __Vtemp473[3U];
    VL_EXTEND_WQ(128,64, __Vtemp474, vlTOPp->mkbbox__DOT__x___05Fh13614);
    VL_EXTEND_WQ(128,64, __Vtemp475, vlTOPp->mkbbox__DOT__y___05Fh16058);
    VL_MUL_W(4, __Vtemp476, __Vtemp474, __Vtemp475);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1390[0U] 
        = __Vtemp476[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1390[1U] 
        = __Vtemp476[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1390[2U] 
        = __Vtemp476[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1390[3U] 
        = __Vtemp476[3U];
    VL_EXTEND_WQ(128,64, __Vtemp477, vlTOPp->mkbbox__DOT__x___05Fh13614);
    VL_EXTEND_WQ(128,64, __Vtemp478, vlTOPp->mkbbox__DOT__y___05Fh16040);
    VL_MUL_W(4, __Vtemp479, __Vtemp477, __Vtemp478);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1095[0U] 
        = __Vtemp479[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1095[1U] 
        = __Vtemp479[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1095[2U] 
        = __Vtemp479[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1095[3U] 
        = __Vtemp479[3U];
    VL_EXTEND_WQ(128,64, __Vtemp480, vlTOPp->mkbbox__DOT__x___05Fh13598);
    VL_EXTEND_WQ(128,64, __Vtemp481, vlTOPp->mkbbox__DOT__y___05Fh13599);
    VL_MUL_W(4, __Vtemp482, __Vtemp480, __Vtemp481);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_rg_input_BI_ETC___05F_d675[0U] 
        = __Vtemp482[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_rg_input_BI_ETC___05F_d675[1U] 
        = __Vtemp482[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_rg_input_BI_ETC___05F_d675[2U] 
        = __Vtemp482[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_rg_input_BI_ETC___05F_d675[3U] 
        = __Vtemp482[3U];
    VL_EXTEND_WQ(128,64, __Vtemp483, vlTOPp->mkbbox__DOT__x___05Fh13598);
    VL_EXTEND_WQ(128,64, __Vtemp484, vlTOPp->mkbbox__DOT__y___05Fh16040);
    VL_MUL_W(4, __Vtemp485, __Vtemp483, __Vtemp484);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1387[0U] 
        = __Vtemp485[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1387[1U] 
        = __Vtemp485[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1387[2U] 
        = __Vtemp485[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1387[3U] 
        = __Vtemp485[3U];
    VL_EXTEND_WQ(128,64, __Vtemp486, vlTOPp->mkbbox__DOT__x___05Fh13598);
    VL_EXTEND_WQ(128,64, __Vtemp487, vlTOPp->mkbbox__DOT__y___05Fh16022);
    VL_MUL_W(4, __Vtemp488, __Vtemp486, __Vtemp487);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1090[0U] 
        = __Vtemp488[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1090[1U] 
        = __Vtemp488[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1090[2U] 
        = __Vtemp488[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1090[3U] 
        = __Vtemp488[3U];
    VL_EXTEND_WQ(128,64, __Vtemp489, vlTOPp->mkbbox__DOT__x___05Fh13582);
    VL_EXTEND_WQ(128,64, __Vtemp490, vlTOPp->mkbbox__DOT__y___05Fh13583);
    VL_MUL_W(4, __Vtemp491, __Vtemp489, __Vtemp490);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_rg_input_BIT_ETC___05F_d668[0U] 
        = __Vtemp491[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_rg_input_BIT_ETC___05F_d668[1U] 
        = __Vtemp491[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_rg_input_BIT_ETC___05F_d668[2U] 
        = __Vtemp491[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_rg_input_BIT_ETC___05F_d668[3U] 
        = __Vtemp491[3U];
    VL_EXTEND_WQ(128,64, __Vtemp492, vlTOPp->mkbbox__DOT__x___05Fh13582);
    VL_EXTEND_WQ(128,64, __Vtemp493, vlTOPp->mkbbox__DOT__y___05Fh16022);
    VL_MUL_W(4, __Vtemp494, __Vtemp492, __Vtemp493);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1384[0U] 
        = __Vtemp494[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1384[1U] 
        = __Vtemp494[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1384[2U] 
        = __Vtemp494[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1384[3U] 
        = __Vtemp494[3U];
    VL_EXTEND_WQ(128,64, __Vtemp495, vlTOPp->mkbbox__DOT__x___05Fh13582);
    VL_EXTEND_WQ(128,64, __Vtemp496, vlTOPp->mkbbox__DOT__y___05Fh16004);
    VL_MUL_W(4, __Vtemp497, __Vtemp495, __Vtemp496);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1085[0U] 
        = __Vtemp497[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1085[1U] 
        = __Vtemp497[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1085[2U] 
        = __Vtemp497[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1085[3U] 
        = __Vtemp497[3U];
    VL_EXTEND_WQ(128,64, __Vtemp498, vlTOPp->mkbbox__DOT__x___05Fh13566);
    VL_EXTEND_WQ(128,64, __Vtemp499, vlTOPp->mkbbox__DOT__y___05Fh13567);
    VL_MUL_W(4, __Vtemp500, __Vtemp498, __Vtemp499);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_rg_input_BIT_ETC___05F_d661[0U] 
        = __Vtemp500[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_rg_input_BIT_ETC___05F_d661[1U] 
        = __Vtemp500[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_rg_input_BIT_ETC___05F_d661[2U] 
        = __Vtemp500[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_rg_input_BIT_ETC___05F_d661[3U] 
        = __Vtemp500[3U];
    VL_EXTEND_WQ(128,64, __Vtemp501, vlTOPp->mkbbox__DOT__x___05Fh13566);
    VL_EXTEND_WQ(128,64, __Vtemp502, vlTOPp->mkbbox__DOT__y___05Fh16004);
    VL_MUL_W(4, __Vtemp503, __Vtemp501, __Vtemp502);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1381[0U] 
        = __Vtemp503[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1381[1U] 
        = __Vtemp503[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1381[2U] 
        = __Vtemp503[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1381[3U] 
        = __Vtemp503[3U];
    vlTOPp->mkbbox__DOT__x___05Fh10595 = (vlTOPp->mkbbox__DOT__x___05Fh10598 
                                          + vlTOPp->mkbbox__DOT__y___05Fh10599);
    VL_EXTEND_WQ(128,64, __Vtemp504, vlTOPp->mkbbox__DOT__x___05Fh13566);
    VL_EXTEND_WQ(128,64, __Vtemp505, vlTOPp->mkbbox__DOT__x___05Fh10598);
    VL_MUL_W(4, __Vtemp506, __Vtemp504, __Vtemp505);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1080[0U] 
        = __Vtemp506[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1080[1U] 
        = __Vtemp506[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1080[2U] 
        = __Vtemp506[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1080[3U] 
        = __Vtemp506[3U];
    VL_EXTEND_WQ(128,64, __Vtemp507, vlTOPp->mkbbox__DOT__x___05Fh13550);
    VL_EXTEND_WQ(128,64, __Vtemp508, vlTOPp->mkbbox__DOT__y___05Fh13551);
    VL_MUL_W(4, __Vtemp509, __Vtemp507, __Vtemp508);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_rg_input_BIT_ETC___05F_d654[0U] 
        = __Vtemp509[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_rg_input_BIT_ETC___05F_d654[1U] 
        = __Vtemp509[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_rg_input_BIT_ETC___05F_d654[2U] 
        = __Vtemp509[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_rg_input_BIT_ETC___05F_d654[3U] 
        = __Vtemp509[3U];
    VL_EXTEND_WQ(128,64, __Vtemp510, vlTOPp->mkbbox__DOT__x___05Fh13550);
    VL_EXTEND_WQ(128,64, __Vtemp511, vlTOPp->mkbbox__DOT__x___05Fh10598);
    VL_MUL_W(4, __Vtemp512, __Vtemp510, __Vtemp511);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1378[0U] 
        = __Vtemp512[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1378[1U] 
        = __Vtemp512[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1378[2U] 
        = __Vtemp512[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1378[3U] 
        = __Vtemp512[3U];
    VL_EXTEND_WQ(128,64, __Vtemp513, vlTOPp->mkbbox__DOT__x___05Fh13550);
    VL_EXTEND_WQ(128,64, __Vtemp514, vlTOPp->mkbbox__DOT__y___05Fh15968);
    VL_MUL_W(4, __Vtemp515, __Vtemp513, __Vtemp514);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1077[0U] 
        = __Vtemp515[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1077[1U] 
        = __Vtemp515[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1077[2U] 
        = __Vtemp515[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1077[3U] 
        = __Vtemp515[3U];
    VL_EXTEND_WQ(128,64, __Vtemp516, vlTOPp->mkbbox__DOT__x___05Fh13534);
    VL_EXTEND_WQ(128,64, __Vtemp517, vlTOPp->mkbbox__DOT__y___05Fh13535);
    VL_MUL_W(4, __Vtemp518, __Vtemp516, __Vtemp517);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_rg_input_BIT_ETC___05F_d647[0U] 
        = __Vtemp518[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_rg_input_BIT_ETC___05F_d647[1U] 
        = __Vtemp518[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_rg_input_BIT_ETC___05F_d647[2U] 
        = __Vtemp518[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_rg_input_BIT_ETC___05F_d647[3U] 
        = __Vtemp518[3U];
    VL_EXTEND_WQ(128,64, __Vtemp519, vlTOPp->mkbbox__DOT__x___05Fh13534);
    VL_EXTEND_WQ(128,64, __Vtemp520, vlTOPp->mkbbox__DOT__y___05Fh15968);
    VL_MUL_W(4, __Vtemp521, __Vtemp519, __Vtemp520);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1375[0U] 
        = __Vtemp521[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1375[1U] 
        = __Vtemp521[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1375[2U] 
        = __Vtemp521[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1375[3U] 
        = __Vtemp521[3U];
    VL_EXTEND_WQ(128,64, __Vtemp522, vlTOPp->mkbbox__DOT__x___05Fh13534);
    VL_EXTEND_WQ(128,64, __Vtemp523, vlTOPp->mkbbox__DOT__y___05Fh15950);
    VL_MUL_W(4, __Vtemp524, __Vtemp522, __Vtemp523);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1072[0U] 
        = __Vtemp524[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1072[1U] 
        = __Vtemp524[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1072[2U] 
        = __Vtemp524[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1072[3U] 
        = __Vtemp524[3U];
    vlTOPp->mkbbox__DOT__result___05Fh3789 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[0U]))) 
                                              + vlTOPp->mkbbox__DOT__y___05Fh13487);
    VL_EXTEND_WQ(128,64, __Vtemp525, vlTOPp->mkbbox__DOT__x___05Fh13518);
    VL_EXTEND_WQ(128,64, __Vtemp526, vlTOPp->mkbbox__DOT__y___05Fh13519);
    VL_MUL_W(4, __Vtemp527, __Vtemp525, __Vtemp526);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_rg_input_BIT_ETC___05F_d640[0U] 
        = __Vtemp527[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_rg_input_BIT_ETC___05F_d640[1U] 
        = __Vtemp527[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_rg_input_BIT_ETC___05F_d640[2U] 
        = __Vtemp527[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_rg_input_BIT_ETC___05F_d640[3U] 
        = __Vtemp527[3U];
    VL_EXTEND_WQ(128,64, __Vtemp528, vlTOPp->mkbbox__DOT__x___05Fh13518);
    VL_EXTEND_WQ(128,64, __Vtemp529, vlTOPp->mkbbox__DOT__y___05Fh15950);
    VL_MUL_W(4, __Vtemp530, __Vtemp528, __Vtemp529);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1372[0U] 
        = __Vtemp530[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1372[1U] 
        = __Vtemp530[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1372[2U] 
        = __Vtemp530[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1372[3U] 
        = __Vtemp530[3U];
    VL_EXTEND_WQ(128,64, __Vtemp531, vlTOPp->mkbbox__DOT__x___05Fh13518);
    VL_EXTEND_WQ(128,64, __Vtemp532, vlTOPp->mkbbox__DOT__y___05Fh15932);
    VL_MUL_W(4, __Vtemp533, __Vtemp531, __Vtemp532);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1067[0U] 
        = __Vtemp533[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1067[1U] 
        = __Vtemp533[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1067[2U] 
        = __Vtemp533[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1067[3U] 
        = __Vtemp533[3U];
    vlTOPp->mkbbox__DOT__result___05Fh3787 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[0U]))) 
                                              + vlTOPp->mkbbox__DOT__y___05Fh13471);
    VL_EXTEND_WQ(128,64, __Vtemp534, vlTOPp->mkbbox__DOT__x___05Fh13502);
    VL_EXTEND_WQ(128,64, __Vtemp535, vlTOPp->mkbbox__DOT__y___05Fh13503);
    VL_MUL_W(4, __Vtemp536, __Vtemp534, __Vtemp535);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_rg_input_BIT_ETC___05F_d633[0U] 
        = __Vtemp536[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_rg_input_BIT_ETC___05F_d633[1U] 
        = __Vtemp536[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_rg_input_BIT_ETC___05F_d633[2U] 
        = __Vtemp536[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_rg_input_BIT_ETC___05F_d633[3U] 
        = __Vtemp536[3U];
    VL_EXTEND_WQ(128,64, __Vtemp537, vlTOPp->mkbbox__DOT__x___05Fh13502);
    VL_EXTEND_WQ(128,64, __Vtemp538, vlTOPp->mkbbox__DOT__y___05Fh15932);
    VL_MUL_W(4, __Vtemp539, __Vtemp537, __Vtemp538);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1369[0U] 
        = __Vtemp539[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1369[1U] 
        = __Vtemp539[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1369[2U] 
        = __Vtemp539[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1369[3U] 
        = __Vtemp539[3U];
    VL_EXTEND_WQ(128,64, __Vtemp540, vlTOPp->mkbbox__DOT__x___05Fh13502);
    VL_EXTEND_WQ(128,64, __Vtemp541, vlTOPp->mkbbox__DOT__y___05Fh15914);
    VL_MUL_W(4, __Vtemp542, __Vtemp540, __Vtemp541);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1062[0U] 
        = __Vtemp542[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1062[1U] 
        = __Vtemp542[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1062[2U] 
        = __Vtemp542[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1062[3U] 
        = __Vtemp542[3U];
    vlTOPp->mkbbox__DOT__result___05Fh3785 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[0U]))) 
                                              + vlTOPp->mkbbox__DOT__y___05Fh13455);
    VL_EXTEND_WQ(128,64, __Vtemp543, vlTOPp->mkbbox__DOT__x___05Fh13486);
    VL_EXTEND_WQ(128,64, __Vtemp544, vlTOPp->mkbbox__DOT__y___05Fh13487);
    VL_MUL_W(4, __Vtemp545, __Vtemp543, __Vtemp544);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_rg_input_BIT_ETC___05F_d626[0U] 
        = __Vtemp545[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_rg_input_BIT_ETC___05F_d626[1U] 
        = __Vtemp545[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_rg_input_BIT_ETC___05F_d626[2U] 
        = __Vtemp545[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_rg_input_BIT_ETC___05F_d626[3U] 
        = __Vtemp545[3U];
    VL_EXTEND_WQ(128,64, __Vtemp546, vlTOPp->mkbbox__DOT__x___05Fh13486);
    VL_EXTEND_WQ(128,64, __Vtemp547, vlTOPp->mkbbox__DOT__y___05Fh15914);
    VL_MUL_W(4, __Vtemp548, __Vtemp546, __Vtemp547);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1366[0U] 
        = __Vtemp548[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1366[1U] 
        = __Vtemp548[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1366[2U] 
        = __Vtemp548[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1366[3U] 
        = __Vtemp548[3U];
    VL_EXTEND_WQ(128,64, __Vtemp549, vlTOPp->mkbbox__DOT__x___05Fh13486);
    VL_EXTEND_WQ(128,64, __Vtemp550, vlTOPp->mkbbox__DOT__y___05Fh15896);
    VL_MUL_W(4, __Vtemp551, __Vtemp549, __Vtemp550);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1057[0U] 
        = __Vtemp551[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1057[1U] 
        = __Vtemp551[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1057[2U] 
        = __Vtemp551[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1057[3U] 
        = __Vtemp551[3U];
    VL_EXTEND_WQ(128,64, __Vtemp552, vlTOPp->mkbbox__DOT__x___05Fh13470);
    VL_EXTEND_WQ(128,64, __Vtemp553, vlTOPp->mkbbox__DOT__y___05Fh13471);
    VL_MUL_W(4, __Vtemp554, __Vtemp552, __Vtemp553);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_rg_input_BIT_ETC___05F_d619[0U] 
        = __Vtemp554[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_rg_input_BIT_ETC___05F_d619[1U] 
        = __Vtemp554[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_rg_input_BIT_ETC___05F_d619[2U] 
        = __Vtemp554[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_rg_input_BIT_ETC___05F_d619[3U] 
        = __Vtemp554[3U];
    VL_EXTEND_WQ(128,64, __Vtemp555, vlTOPp->mkbbox__DOT__x___05Fh13470);
    VL_EXTEND_WQ(128,64, __Vtemp556, vlTOPp->mkbbox__DOT__y___05Fh15896);
    VL_MUL_W(4, __Vtemp557, __Vtemp555, __Vtemp556);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1363[0U] 
        = __Vtemp557[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1363[1U] 
        = __Vtemp557[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1363[2U] 
        = __Vtemp557[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1363[3U] 
        = __Vtemp557[3U];
    VL_EXTEND_WQ(128,64, __Vtemp558, vlTOPp->mkbbox__DOT__x___05Fh13470);
    VL_EXTEND_WQ(128,64, __Vtemp559, vlTOPp->mkbbox__DOT__y___05Fh15878);
    VL_MUL_W(4, __Vtemp560, __Vtemp558, __Vtemp559);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1052[0U] 
        = __Vtemp560[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1052[1U] 
        = __Vtemp560[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1052[2U] 
        = __Vtemp560[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1052[3U] 
        = __Vtemp560[3U];
    VL_EXTEND_WQ(128,64, __Vtemp561, vlTOPp->mkbbox__DOT__x___05Fh13440);
    VL_EXTEND_WQ(128,64, __Vtemp562, (((QData)((IData)(
                                                       vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U]))));
    VL_MUL_W(4, __Vtemp563, __Vtemp561, __Vtemp562);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_rg_input_BIT_ETC___05F_d606[0U] 
        = __Vtemp563[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_rg_input_BIT_ETC___05F_d606[1U] 
        = __Vtemp563[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_rg_input_BIT_ETC___05F_d606[2U] 
        = __Vtemp563[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_rg_input_BIT_ETC___05F_d606[3U] 
        = __Vtemp563[3U];
    VL_EXTEND_WQ(128,64, __Vtemp564, vlTOPp->mkbbox__DOT__x___05Fh13440);
    VL_EXTEND_WQ(128,64, __Vtemp565, vlTOPp->mkbbox__DOT__y___05Fh15860);
    VL_MUL_W(4, __Vtemp566, __Vtemp564, __Vtemp565);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_0_CONCAT_rg___05FETC___05F_d1358[0U] 
        = __Vtemp566[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_0_CONCAT_rg___05FETC___05F_d1358[1U] 
        = __Vtemp566[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_0_CONCAT_rg___05FETC___05F_d1358[2U] 
        = __Vtemp566[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_0_CONCAT_rg___05FETC___05F_d1358[3U] 
        = __Vtemp566[3U];
    VL_EXTEND_WQ(128,64, __Vtemp567, vlTOPp->mkbbox__DOT__x___05Fh13454);
    VL_EXTEND_WQ(128,64, __Vtemp568, vlTOPp->mkbbox__DOT__y___05Fh15860);
    VL_MUL_W(4, __Vtemp569, __Vtemp567, __Vtemp568);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1048[0U] 
        = __Vtemp569[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1048[1U] 
        = __Vtemp569[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1048[2U] 
        = __Vtemp569[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1048[3U] 
        = __Vtemp569[3U];
    VL_EXTEND_WQ(128,64, __Vtemp570, vlTOPp->mkbbox__DOT__x___05Fh13454);
    VL_EXTEND_WQ(128,64, __Vtemp571, vlTOPp->mkbbox__DOT__y___05Fh13455);
    VL_MUL_W(4, __Vtemp572, __Vtemp570, __Vtemp571);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_rg_input_BIT_ETC___05F_d612[0U] 
        = __Vtemp572[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_rg_input_BIT_ETC___05F_d612[1U] 
        = __Vtemp572[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_rg_input_BIT_ETC___05F_d612[2U] 
        = __Vtemp572[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_rg_input_BIT_ETC___05F_d612[3U] 
        = __Vtemp572[3U];
    VL_EXTEND_WQ(128,64, __Vtemp573, vlTOPp->mkbbox__DOT__x___05Fh13454);
    VL_EXTEND_WQ(128,64, __Vtemp574, vlTOPp->mkbbox__DOT__y___05Fh15878);
    VL_MUL_W(4, __Vtemp575, __Vtemp573, __Vtemp574);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1360[0U] 
        = __Vtemp575[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1360[1U] 
        = __Vtemp575[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1360[2U] 
        = __Vtemp575[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1360[3U] 
        = __Vtemp575[3U];
    vlTOPp->mkbbox__DOT__a___05Fh4364 = (0x1fULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_95_59_THEN_32_ELSE_0___05F_d160);
    vlTOPp->mkbbox__DOT__a___05Fh9076 = (2ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_65_77_AND_NOT_rg_input_BIT_64___05FETC___05F_d385);
    vlTOPp->mkbbox__DOT__bitcount___05Fh7398 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh7400);
    vlTOPp->mkbbox__DOT__a___05Fh19806 = (0x3fULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_127_046_THEN_64_ELSE_0___05F_d1549);
    vlTOPp->mkbbox__DOT__result___05Fh1609 = (QData)((IData)(
                                                             (1U 
                                                              & (IData)(vlTOPp->mkbbox__DOT__rg_input_BITS_127_TO_64_SRL_a877___05Fq1))));
    vlTOPp->mkbbox__DOT__y___05Fh3888 = (~ vlTOPp->mkbbox__DOT__x___05Fh3889);
    vlTOPp->mkbbox__DOT__result___05Fh1611 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                              ^ vlTOPp->mkbbox__DOT__x___05Fh3889);
    vlTOPp->mkbbox__DOT__result___05Fh1613 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                              | vlTOPp->mkbbox__DOT__x___05Fh3889);
    vlTOPp->mkbbox__DOT__y___05Fh11259 = ((0x3fU >= vlTOPp->mkbbox__DOT__x___05Fh11335)
                                           ? ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                              << vlTOPp->mkbbox__DOT__x___05Fh11335)
                                           : 0ULL);
    vlTOPp->mkbbox__DOT__y___05Fh11384 = ((0x1fU >= vlTOPp->mkbbox__DOT__x___05Fh11479)
                                           ? (vlTOPp->mkbbox__DOT__rg_input[2U] 
                                              << vlTOPp->mkbbox__DOT__x___05Fh11479)
                                           : 0U);
    vlTOPp->mkbbox__DOT__result___05Fh3743 = (QData)((IData)(
                                                             (1U 
                                                              & (IData)(vlTOPp->mkbbox__DOT__rg_input_BITS_127_TO_64_SRL_a1837___05Fq2))));
    vlTOPp->mkbbox__DOT__y___05Fh11848 = (~ vlTOPp->mkbbox__DOT__x___05Fh11849);
    vlTOPp->mkbbox__DOT__result___05Fh3745 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                              ^ vlTOPp->mkbbox__DOT__x___05Fh11849);
    vlTOPp->mkbbox__DOT__result___05Fh3747 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                              | vlTOPp->mkbbox__DOT__x___05Fh11849);
    if ((0x3fU >= vlTOPp->mkbbox__DOT__x___05Fh32943)) {
        vlTOPp->mkbbox__DOT__y___05Fh32867 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                              >> vlTOPp->mkbbox__DOT__x___05Fh32943);
        vlTOPp->mkbbox__DOT__y___05Fh33089 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                              << vlTOPp->mkbbox__DOT__x___05Fh32943);
    } else {
        vlTOPp->mkbbox__DOT__y___05Fh32867 = 0ULL;
        vlTOPp->mkbbox__DOT__y___05Fh33089 = 0ULL;
    }
    if ((0x1fU >= vlTOPp->mkbbox__DOT__x___05Fh11235)) {
        vlTOPp->mkbbox__DOT__y___05Fh11140 = (vlTOPp->mkbbox__DOT__rg_input[2U] 
                                              >> vlTOPp->mkbbox__DOT__x___05Fh11235);
        vlTOPp->mkbbox__DOT__y___05Fh11506 = (vlTOPp->mkbbox__DOT__rg_input[2U] 
                                              << vlTOPp->mkbbox__DOT__x___05Fh11235);
    } else {
        vlTOPp->mkbbox__DOT__y___05Fh11140 = 0U;
        vlTOPp->mkbbox__DOT__y___05Fh11506 = 0U;
    }
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_79_TO_72_084_EQ_0_085_THEN_IF_ETC___05F_d2089 
        = ((0U == (0xffU & ((vlTOPp->mkbbox__DOT__rg_input[3U] 
                             << 0x18U) | (vlTOPp->mkbbox__DOT__rg_input[2U] 
                                          >> 8U))))
            ? vlTOPp->mkbbox__DOT__IF_rg_input_BITS_71_TO_64_93_EQ_0_086_THEN_0_E_ETC___05F_d2087
            : vlTOPp->mkbbox__DOT__out___05Fh32750);
    vlTOPp->mkbbox__DOT__x___05Fh10592 = (vlTOPp->mkbbox__DOT__x___05Fh10595 
                                          + vlTOPp->mkbbox__DOT__y___05Fh10596);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b10000_3_AND_r_ETC___05F_d2121 
        = ((((0x10U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0x19U))) & (6U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    >> 0xcU)))) 
            & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh3789
            : ((((0x20U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                     >> 0x19U))) & 
                 (4U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                               >> 0xcU)))) & (0x33U 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh3791
                : 0ULL));
    vlTOPp->mkbbox__DOT__x___05Fh15829 = ((((QData)((IData)(
                                                            vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1048[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1048[0U]))) 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1052[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1052[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13410 = ((((QData)((IData)(
                                                            vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_rg_input_BIT_ETC___05F_d606[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_rg_input_BIT_ETC___05F_d606[0U]))) 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_rg_input_BIT_ETC___05F_d612[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_rg_input_BIT_ETC___05F_d612[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18382 = ((((QData)((IData)(
                                                            vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_0_CONCAT_rg___05FETC___05F_d1358[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_0_CONCAT_rg___05FETC___05F_d1358[0U]))) 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1360[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1360[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_THEN_IF_rg_input_BIT_95___05FETC___05F_d163 
        = ((0x40000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh4364 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_95_59_THEN_32_ELSE_0___05F_d160);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_66_73_AND_NOT_rg_input_BIT_65___05FETC___05F_d387 
        = ((1U & (((vlTOPp->mkbbox__DOT__rg_input[2U] 
                    >> 2U) & (~ (vlTOPp->mkbbox__DOT__rg_input[2U] 
                                 >> 1U))) & (~ vlTOPp->mkbbox__DOT__rg_input[2U])))
            ? vlTOPp->mkbbox__DOT__a___05Fh9076 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_65_77_AND_NOT_rg_input_BIT_64___05FETC___05F_d385);
    vlTOPp->mkbbox__DOT__x___05Fh7368 = ((2U & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh7398
                                          : vlTOPp->mkbbox__DOT__x___05Fh7400);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_126_550_THEN_IF_rg_input_BIT_1_ETC___05F_d1552 
        = ((0x40000000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh19806 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_127_046_THEN_64_ELSE_0___05F_d1549);
    vlTOPp->mkbbox__DOT__result___05Fh1607 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                              & vlTOPp->mkbbox__DOT__y___05Fh3888);
    vlTOPp->mkbbox__DOT__result___05Fh1625 = (vlTOPp->mkbbox__DOT__x___05Fh11258 
                                              | vlTOPp->mkbbox__DOT__y___05Fh11259);
    vlTOPp->mkbbox__DOT__x___05Fh11349 = (vlTOPp->mkbbox__DOT__x___05Fh11383 
                                          | vlTOPp->mkbbox__DOT__y___05Fh11384);
    vlTOPp->mkbbox__DOT__result___05Fh3741 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[2U]))) 
                                              & vlTOPp->mkbbox__DOT__y___05Fh11848);
    vlTOPp->mkbbox__DOT__result___05Fh3773 = (vlTOPp->mkbbox__DOT__x___05Fh32866 
                                              | vlTOPp->mkbbox__DOT__y___05Fh32867);
    vlTOPp->mkbbox__DOT__result___05Fh3777 = (vlTOPp->mkbbox__DOT__x___05Fh33088 
                                              | vlTOPp->mkbbox__DOT__y___05Fh33089);
    vlTOPp->mkbbox__DOT__result___05Fh11124 = (vlTOPp->mkbbox__DOT__x___05Fh11139 
                                               | vlTOPp->mkbbox__DOT__y___05Fh11140);
    vlTOPp->mkbbox__DOT__result___05Fh11490 = (vlTOPp->mkbbox__DOT__x___05Fh11505 
                                               | vlTOPp->mkbbox__DOT__y___05Fh11506);
    vlTOPp->mkbbox__DOT__out___05Fh32717 = (0xff0000ULL 
                                            + vlTOPp->mkbbox__DOT__IF_rg_input_BITS_79_TO_72_084_EQ_0_085_THEN_IF_ETC___05F_d2089);
    vlTOPp->mkbbox__DOT__x___05Fh10589 = (vlTOPp->mkbbox__DOT__x___05Fh10592 
                                          + vlTOPp->mkbbox__DOT__y___05Fh10593);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b10000_3_AND_r_ETC___05F_d2123 
        = ((((0x10U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0x19U))) & (2U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    >> 0xcU)))) 
            & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh3785
            : ((((0x10U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                     >> 0x19U))) & 
                 (4U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                               >> 0xcU)))) & (0x33U 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh3787
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b10000_3_AND_r_ETC___05F_d2121));
    vlTOPp->mkbbox__DOT__x___05Fh15816 = (vlTOPp->mkbbox__DOT__x___05Fh15829 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1057[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1057[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13397 = (vlTOPp->mkbbox__DOT__x___05Fh13410 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_rg_input_BIT_ETC___05F_d619[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_rg_input_BIT_ETC___05F_d619[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18369 = (vlTOPp->mkbbox__DOT__x___05Fh18382 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1363[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1363[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh4419 = (0x1eULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_THEN_IF_rg_input_BIT_95___05FETC___05F_d163);
    vlTOPp->mkbbox__DOT__a___05Fh9123 = (3ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_66_73_AND_NOT_rg_input_BIT_65___05FETC___05F_d387);
    vlTOPp->mkbbox__DOT__bitcount___05Fh7366 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh7368);
    vlTOPp->mkbbox__DOT__a___05Fh19861 = (0x3eULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_126_550_THEN_IF_rg_input_BIT_1_ETC___05F_d1552);
    vlTOPp->mkbbox__DOT__result___05Fh1627 = (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (vlTOPp->mkbbox__DOT__x___05Fh11349 
                                                                              >> 0x1fU)))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->mkbbox__DOT__x___05Fh11349)));
    vlTOPp->mkbbox__DOT__result___05Fh1623 = (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (vlTOPp->mkbbox__DOT__result___05Fh11124 
                                                                              >> 0x1fU)))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->mkbbox__DOT__result___05Fh11124)));
    vlTOPp->mkbbox__DOT__result___05Fh1629 = (((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & (vlTOPp->mkbbox__DOT__result___05Fh11490 
                                                                              >> 0x1fU)))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlTOPp->mkbbox__DOT__result___05Fh11490)));
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_87_TO_80_082_EQ_0_083_THEN_IF_ETC___05F_d2091 
        = ((0U == (0xffU & ((vlTOPp->mkbbox__DOT__rg_input[3U] 
                             << 0x10U) | (vlTOPp->mkbbox__DOT__rg_input[2U] 
                                          >> 0x10U))))
            ? vlTOPp->mkbbox__DOT__IF_rg_input_BITS_79_TO_72_084_EQ_0_085_THEN_IF_ETC___05F_d2089
            : vlTOPp->mkbbox__DOT__out___05Fh32717);
    vlTOPp->mkbbox__DOT__x___05Fh10586 = (vlTOPp->mkbbox__DOT__x___05Fh10589 
                                          + vlTOPp->mkbbox__DOT__y___05Fh10590);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_148_3_EQ_0b11000000100_ETC___05F_d2125 
        = ((((0x604U == (0xfffU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                   >> 0x14U))) & (1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                      >> 0xcU)))) 
            & (0x13U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh3781
            : ((((0x605U == (0xfffU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                       >> 0x14U))) 
                 & (1U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0xcU)))) & (0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh3783
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b10000_3_AND_r_ETC___05F_d2123));
    vlTOPp->mkbbox__DOT__x___05Fh15803 = (vlTOPp->mkbbox__DOT__x___05Fh15816 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1062[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1062[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13384 = (vlTOPp->mkbbox__DOT__x___05Fh13397 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_rg_input_BIT_ETC___05F_d626[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_rg_input_BIT_ETC___05F_d626[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18356 = (vlTOPp->mkbbox__DOT__x___05Fh18369 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1366[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1366[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_93_65_THEN_IF_rg_input_BIT_94___05FETC___05F_d167 
        = ((0x20000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh4419 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_THEN_IF_rg_input_BIT_95___05FETC___05F_d163);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_67_69_AND_IF_rg_input_BIT_66_7_ETC___05F_d392 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 3U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_66_73_AND_NOT_rg_input_BIT_65___05FETC___05F_d387)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9123 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_66_73_AND_NOT_rg_input_BIT_65___05FETC___05F_d387);
    vlTOPp->mkbbox__DOT__x___05Fh7336 = ((4U & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh7366
                                          : vlTOPp->mkbbox__DOT__x___05Fh7368);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_125_554_THEN_IF_rg_input_BIT_1_ETC___05F_d1556 
        = ((0x20000000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh19861 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_126_550_THEN_IF_rg_input_BIT_1_ETC___05F_d1552);
    vlTOPp->mkbbox__DOT__out___05Fh32684 = (0xff000000ULL 
                                            + vlTOPp->mkbbox__DOT__IF_rg_input_BITS_87_TO_80_082_EQ_0_083_THEN_IF_ETC___05F_d2091);
    vlTOPp->mkbbox__DOT__x___05Fh10583 = (vlTOPp->mkbbox__DOT__x___05Fh10586 
                                          + vlTOPp->mkbbox__DOT__y___05Fh10587);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b110000_4_AND___05FETC___05F_d2127 
        = ((((0x30U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0x19U))) & (5U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    >> 0xcU)))) 
            & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh3777
            : ((((0x30U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                     >> 0x19U))) & 
                 (5U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                               >> 0xcU)))) & (0x3bU 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh1629
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_148_3_EQ_0b11000000100_ETC___05F_d2125));
    vlTOPp->mkbbox__DOT__x___05Fh15790 = (vlTOPp->mkbbox__DOT__x___05Fh15803 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1067[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1067[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13371 = (vlTOPp->mkbbox__DOT__x___05Fh13384 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_rg_input_BIT_ETC___05F_d633[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_rg_input_BIT_ETC___05F_d633[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18343 = (vlTOPp->mkbbox__DOT__x___05Fh18356 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1369[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1369[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh4474 = (0x1dULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_93_65_THEN_IF_rg_input_BIT_94___05FETC___05F_d167);
    vlTOPp->mkbbox__DOT__a___05Fh9170 = (4ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_67_69_AND_IF_rg_input_BIT_66_7_ETC___05F_d392);
    vlTOPp->mkbbox__DOT__bitcount___05Fh7334 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh7336);
    vlTOPp->mkbbox__DOT__a___05Fh19916 = (0x3dULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_125_554_THEN_IF_rg_input_BIT_1_ETC___05F_d1556);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_95_TO_88_080_EQ_0_081_THEN_IF_ETC___05F_d2093 
        = ((0U == (0xffU & ((vlTOPp->mkbbox__DOT__rg_input[3U] 
                             << 8U) | (vlTOPp->mkbbox__DOT__rg_input[2U] 
                                       >> 0x18U))))
            ? vlTOPp->mkbbox__DOT__IF_rg_input_BITS_87_TO_80_082_EQ_0_083_THEN_IF_ETC___05F_d2091
            : vlTOPp->mkbbox__DOT__out___05Fh32684);
    vlTOPp->mkbbox__DOT__x___05Fh10580 = (vlTOPp->mkbbox__DOT__x___05Fh10583 
                                          + vlTOPp->mkbbox__DOT__y___05Fh10584);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b110000_4_AND___05FETC___05F_d2129 
        = ((((0x30U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0x19U))) & (1U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    >> 0xcU)))) 
            & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh3773
            : ((((0x30U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                     >> 0x19U))) & 
                 (1U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                               >> 0xcU)))) & (0x3bU 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh1623
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b110000_4_AND___05FETC___05F_d2127));
    vlTOPp->mkbbox__DOT__x___05Fh15777 = (vlTOPp->mkbbox__DOT__x___05Fh15790 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1072[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1072[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13358 = (vlTOPp->mkbbox__DOT__x___05Fh13371 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_rg_input_BIT_ETC___05F_d640[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_rg_input_BIT_ETC___05F_d640[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18330 = (vlTOPp->mkbbox__DOT__x___05Fh18343 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1372[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1372[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_92_69_THEN_IF_rg_input_BIT_93___05FETC___05F_d171 
        = ((0x10000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh4474 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_93_65_THEN_IF_rg_input_BIT_94___05FETC___05F_d167);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_68_65_AND_IF_rg_input_BIT_67_6_ETC___05F_d397 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 4U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_67_69_AND_IF_rg_input_BIT_66_7_ETC___05F_d392)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9170 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_67_69_AND_IF_rg_input_BIT_66_7_ETC___05F_d392);
    vlTOPp->mkbbox__DOT__x___05Fh7304 = ((8U & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh7334
                                          : vlTOPp->mkbbox__DOT__x___05Fh7336);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_124_558_THEN_IF_rg_input_BIT_1_ETC___05F_d1560 
        = ((0x10000000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh19916 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_125_554_THEN_IF_rg_input_BIT_1_ETC___05F_d1556);
    vlTOPp->mkbbox__DOT__out___05Fh32651 = (0xff00000000ULL 
                                            + vlTOPp->mkbbox__DOT__IF_rg_input_BITS_95_TO_88_080_EQ_0_081_THEN_IF_ETC___05F_d2093);
    vlTOPp->mkbbox__DOT__result___05Fh1621 = (vlTOPp->mkbbox__DOT__x___05Fh10580 
                                              + vlTOPp->mkbbox__DOT__y___05Fh10581);
    vlTOPp->mkbbox__DOT__x___05Fh15764 = (vlTOPp->mkbbox__DOT__x___05Fh15777 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1077[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1077[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13345 = (vlTOPp->mkbbox__DOT__x___05Fh13358 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_rg_input_BIT_ETC___05F_d647[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_rg_input_BIT_ETC___05F_d647[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18317 = (vlTOPp->mkbbox__DOT__x___05Fh18330 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1375[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1375[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh4529 = (0x1cULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_92_69_THEN_IF_rg_input_BIT_93___05FETC___05F_d171);
    vlTOPp->mkbbox__DOT__a___05Fh9217 = (5ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_68_65_AND_IF_rg_input_BIT_67_6_ETC___05F_d397);
    vlTOPp->mkbbox__DOT__bitcount___05Fh7302 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh7304);
    vlTOPp->mkbbox__DOT__a___05Fh19971 = (0x3cULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_124_558_THEN_IF_rg_input_BIT_1_ETC___05F_d1560);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_103_TO_96_078_EQ_0_079_THEN_I_ETC___05F_d2095 
        = ((0U == (0xffU & vlTOPp->mkbbox__DOT__rg_input[3U]))
            ? vlTOPp->mkbbox__DOT__IF_rg_input_BITS_95_TO_88_080_EQ_0_081_THEN_IF_ETC___05F_d2093
            : vlTOPp->mkbbox__DOT__out___05Fh32651);
    vlTOPp->mkbbox__DOT__x___05Fh15751 = (vlTOPp->mkbbox__DOT__x___05Fh15764 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1080[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1080[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13332 = (vlTOPp->mkbbox__DOT__x___05Fh13345 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_rg_input_BIT_ETC___05F_d654[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_rg_input_BIT_ETC___05F_d654[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18304 = (vlTOPp->mkbbox__DOT__x___05Fh18317 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1378[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1378[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_91_73_THEN_IF_rg_input_BIT_92___05FETC___05F_d175 
        = ((0x8000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh4529 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_92_69_THEN_IF_rg_input_BIT_93___05FETC___05F_d171);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_69_61_AND_IF_rg_input_BIT_68_6_ETC___05F_d402 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 5U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_68_65_AND_IF_rg_input_BIT_67_6_ETC___05F_d397)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9217 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_68_65_AND_IF_rg_input_BIT_67_6_ETC___05F_d397);
    vlTOPp->mkbbox__DOT__x___05Fh7272 = ((0x10U & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh7302
                                          : vlTOPp->mkbbox__DOT__x___05Fh7304);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_123_562_THEN_IF_rg_input_BIT_1_ETC___05F_d1564 
        = ((0x8000000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh19971 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_124_558_THEN_IF_rg_input_BIT_1_ETC___05F_d1560);
    vlTOPp->mkbbox__DOT__out___05Fh32618 = (0xff0000000000ULL 
                                            + vlTOPp->mkbbox__DOT__IF_rg_input_BITS_103_TO_96_078_EQ_0_079_THEN_I_ETC___05F_d2095);
    vlTOPp->mkbbox__DOT__x___05Fh15738 = (vlTOPp->mkbbox__DOT__x___05Fh15751 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1085[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1085[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13319 = (vlTOPp->mkbbox__DOT__x___05Fh13332 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_rg_input_BIT_ETC___05F_d661[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_rg_input_BIT_ETC___05F_d661[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18291 = (vlTOPp->mkbbox__DOT__x___05Fh18304 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1381[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1381[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh4584 = (0x1bULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_91_73_THEN_IF_rg_input_BIT_92___05FETC___05F_d175);
    vlTOPp->mkbbox__DOT__a___05Fh9264 = (6ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_69_61_AND_IF_rg_input_BIT_68_6_ETC___05F_d402);
    vlTOPp->mkbbox__DOT__bitcount___05Fh7270 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh7272);
    vlTOPp->mkbbox__DOT__a___05Fh20026 = (0x3bULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_123_562_THEN_IF_rg_input_BIT_1_ETC___05F_d1564);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_111_TO_104_076_EQ_0_077_THEN___05FETC___05F_d2097 
        = ((0U == (0xffU & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                             << 0x18U) | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                          >> 8U))))
            ? vlTOPp->mkbbox__DOT__IF_rg_input_BITS_103_TO_96_078_EQ_0_079_THEN_I_ETC___05F_d2095
            : vlTOPp->mkbbox__DOT__out___05Fh32618);
    vlTOPp->mkbbox__DOT__x___05Fh15725 = (vlTOPp->mkbbox__DOT__x___05Fh15738 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1090[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1090[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13306 = (vlTOPp->mkbbox__DOT__x___05Fh13319 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_rg_input_BIT_ETC___05F_d668[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_rg_input_BIT_ETC___05F_d668[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18278 = (vlTOPp->mkbbox__DOT__x___05Fh18291 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1384[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1384[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_90_77_THEN_IF_rg_input_BIT_91___05FETC___05F_d179 
        = ((0x4000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh4584 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_91_73_THEN_IF_rg_input_BIT_92___05FETC___05F_d175);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_70_57_AND_IF_rg_input_BIT_69_6_ETC___05F_d407 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 6U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_69_61_AND_IF_rg_input_BIT_68_6_ETC___05F_d402)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9264 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_69_61_AND_IF_rg_input_BIT_68_6_ETC___05F_d402);
    vlTOPp->mkbbox__DOT__x___05Fh7240 = ((0x20U & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh7270
                                          : vlTOPp->mkbbox__DOT__x___05Fh7272);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_122_566_THEN_IF_rg_input_BIT_1_ETC___05F_d1568 
        = ((0x4000000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20026 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_123_562_THEN_IF_rg_input_BIT_1_ETC___05F_d1564);
    vlTOPp->mkbbox__DOT__out___05Fh32585 = (0xff000000000000ULL 
                                            + vlTOPp->mkbbox__DOT__IF_rg_input_BITS_111_TO_104_076_EQ_0_077_THEN___05FETC___05F_d2097);
    vlTOPp->mkbbox__DOT__x___05Fh15712 = (vlTOPp->mkbbox__DOT__x___05Fh15725 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1095[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1095[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13293 = (vlTOPp->mkbbox__DOT__x___05Fh13306 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_rg_input_BI_ETC___05F_d675[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_rg_input_BI_ETC___05F_d675[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18265 = (vlTOPp->mkbbox__DOT__x___05Fh18278 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1387[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1387[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh4639 = (0x1aULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_90_77_THEN_IF_rg_input_BIT_91___05FETC___05F_d179);
    vlTOPp->mkbbox__DOT__a___05Fh9311 = (7ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_70_57_AND_IF_rg_input_BIT_69_6_ETC___05F_d407);
    vlTOPp->mkbbox__DOT__bitcount___05Fh7238 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh7240);
    vlTOPp->mkbbox__DOT__a___05Fh20081 = (0x3aULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_122_566_THEN_IF_rg_input_BIT_1_ETC___05F_d1568);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_119_TO_112_074_EQ_0_075_THEN___05FETC___05F_d2099 
        = ((0U == (0xffU & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                             << 0x10U) | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                          >> 0x10U))))
            ? vlTOPp->mkbbox__DOT__IF_rg_input_BITS_111_TO_104_076_EQ_0_077_THEN___05FETC___05F_d2097
            : vlTOPp->mkbbox__DOT__out___05Fh32585);
    vlTOPp->mkbbox__DOT__x___05Fh15699 = (vlTOPp->mkbbox__DOT__x___05Fh15712 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1100[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1100[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13280 = (vlTOPp->mkbbox__DOT__x___05Fh13293 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_rg_input_BI_ETC___05F_d682[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_rg_input_BI_ETC___05F_d682[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18252 = (vlTOPp->mkbbox__DOT__x___05Fh18265 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1390[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1390[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_89_81_THEN_IF_rg_input_BIT_90___05FETC___05F_d183 
        = ((0x2000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh4639 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_90_77_THEN_IF_rg_input_BIT_91___05FETC___05F_d179);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_71_53_AND_IF_rg_input_BIT_70_5_ETC___05F_d412 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 7U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_70_57_AND_IF_rg_input_BIT_69_6_ETC___05F_d407)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9311 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_70_57_AND_IF_rg_input_BIT_69_6_ETC___05F_d407);
    vlTOPp->mkbbox__DOT__x___05Fh7208 = ((0x40U & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh7238
                                          : vlTOPp->mkbbox__DOT__x___05Fh7240);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_121_570_THEN_IF_rg_input_BIT_1_ETC___05F_d1572 
        = ((0x2000000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20081 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_122_566_THEN_IF_rg_input_BIT_1_ETC___05F_d1568);
    vlTOPp->mkbbox__DOT__out___05Fh32552 = (0xff00000000000000ULL 
                                            + vlTOPp->mkbbox__DOT__IF_rg_input_BITS_119_TO_112_074_EQ_0_075_THEN___05FETC___05F_d2099);
    vlTOPp->mkbbox__DOT__x___05Fh15686 = (vlTOPp->mkbbox__DOT__x___05Fh15699 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1105[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1105[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13267 = (vlTOPp->mkbbox__DOT__x___05Fh13280 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_rg_input_BI_ETC___05F_d689[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_rg_input_BI_ETC___05F_d689[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18239 = (vlTOPp->mkbbox__DOT__x___05Fh18252 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1393[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1393[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh4694 = (0x19ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_89_81_THEN_IF_rg_input_BIT_90___05FETC___05F_d183);
    vlTOPp->mkbbox__DOT__a___05Fh9358 = (8ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_71_53_AND_IF_rg_input_BIT_70_5_ETC___05F_d412);
    vlTOPp->mkbbox__DOT__bitcount___05Fh7206 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh7208);
    vlTOPp->mkbbox__DOT__a___05Fh20136 = (0x39ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_121_570_THEN_IF_rg_input_BIT_1_ETC___05F_d1572);
    vlTOPp->mkbbox__DOT__result___05Fh3769 = ((0U == 
                                               (0xffU 
                                                & ((vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    << 8U) 
                                                   | (vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                      >> 0x18U))))
                                               ? vlTOPp->mkbbox__DOT__IF_rg_input_BITS_119_TO_112_074_EQ_0_075_THEN___05FETC___05F_d2099
                                               : vlTOPp->mkbbox__DOT__out___05Fh32552);
    vlTOPp->mkbbox__DOT__x___05Fh15673 = (vlTOPp->mkbbox__DOT__x___05Fh15686 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1110[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1110[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13254 = (vlTOPp->mkbbox__DOT__x___05Fh13267 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_rg_input_BI_ETC___05F_d696[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_rg_input_BI_ETC___05F_d696[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18226 = (vlTOPp->mkbbox__DOT__x___05Fh18239 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1396[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1396[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_88_85_THEN_IF_rg_input_BIT_89___05FETC___05F_d187 
        = ((0x1000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh4694 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_89_81_THEN_IF_rg_input_BIT_90___05FETC___05F_d183);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_72_49_AND_IF_rg_input_BIT_71_5_ETC___05F_d417 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 8U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_71_53_AND_IF_rg_input_BIT_70_5_ETC___05F_d412)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9358 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_71_53_AND_IF_rg_input_BIT_70_5_ETC___05F_d412);
    vlTOPp->mkbbox__DOT__x___05Fh7176 = ((0x80U & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh7206
                                          : vlTOPp->mkbbox__DOT__x___05Fh7208);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_120_574_THEN_IF_rg_input_BIT_1_ETC___05F_d1576 
        = ((0x1000000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20136 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_121_570_THEN_IF_rg_input_BIT_1_ETC___05F_d1572);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_148_3_EQ_0b1010000111___05FETC___05F_d2131 
        = ((((0x287U == (0xfffU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                   >> 0x14U))) & (5U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                      >> 0xcU)))) 
            & (0x13U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh3769
            : ((((0x20U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                     >> 0x19U))) & 
                 (6U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                               >> 0xcU)))) & (0x33U 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh3771
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b110000_4_AND___05FETC___05F_d2129));
    vlTOPp->mkbbox__DOT__x___05Fh15660 = (vlTOPp->mkbbox__DOT__x___05Fh15673 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1115[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1115[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13241 = (vlTOPp->mkbbox__DOT__x___05Fh13254 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_rg_input_BI_ETC___05F_d703[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_rg_input_BI_ETC___05F_d703[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18213 = (vlTOPp->mkbbox__DOT__x___05Fh18226 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1399[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1399[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh4749 = (0x18ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_88_85_THEN_IF_rg_input_BIT_89___05FETC___05F_d187);
    vlTOPp->mkbbox__DOT__a___05Fh9405 = (9ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_72_49_AND_IF_rg_input_BIT_71_5_ETC___05F_d417);
    vlTOPp->mkbbox__DOT__bitcount___05Fh7174 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh7176);
    vlTOPp->mkbbox__DOT__a___05Fh20191 = (0x38ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_120_574_THEN_IF_rg_input_BIT_1_ETC___05F_d1576);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b101_1_AND_rg___05FETC___05F_d2133 
        = ((((5U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                              >> 0x19U))) & (4U == 
                                             (7U & 
                                              (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                               >> 0xcU)))) 
            & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh3765
            : ((((5U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                  >> 0x19U))) & (5U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                     >> 0xcU)))) 
                & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh3767
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_148_3_EQ_0b1010000111___05FETC___05F_d2131));
    vlTOPp->mkbbox__DOT__x___05Fh15647 = (vlTOPp->mkbbox__DOT__x___05Fh15660 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1120[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1120[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13228 = (vlTOPp->mkbbox__DOT__x___05Fh13241 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_rg_input_BI_ETC___05F_d710[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_rg_input_BI_ETC___05F_d710[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18200 = (vlTOPp->mkbbox__DOT__x___05Fh18213 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1402[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1402[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_87_89_THEN_IF_rg_input_BIT_88___05FETC___05F_d191 
        = ((0x800000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh4749 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_88_85_THEN_IF_rg_input_BIT_89___05FETC___05F_d187);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_73_45_AND_IF_rg_input_BIT_72_4_ETC___05F_d422 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 9U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_72_49_AND_IF_rg_input_BIT_71_5_ETC___05F_d417)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9405 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_72_49_AND_IF_rg_input_BIT_71_5_ETC___05F_d417);
    vlTOPp->mkbbox__DOT__x___05Fh7144 = ((0x100U & 
                                          vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh7174
                                          : vlTOPp->mkbbox__DOT__x___05Fh7176);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_119_578_THEN_IF_rg_input_BIT_1_ETC___05F_d1580 
        = ((0x800000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20191 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_120_574_THEN_IF_rg_input_BIT_1_ETC___05F_d1576);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b101_1_AND_rg___05FETC___05F_d2135 
        = ((((5U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                              >> 0x19U))) & (6U == 
                                             (7U & 
                                              (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                               >> 0xcU)))) 
            & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh3761
            : ((((5U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                  >> 0x19U))) & (7U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                     >> 0xcU)))) 
                & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh3763
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b101_1_AND_rg___05FETC___05F_d2133));
    vlTOPp->mkbbox__DOT__x___05Fh15634 = (vlTOPp->mkbbox__DOT__x___05Fh15647 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1125[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1125[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13215 = (vlTOPp->mkbbox__DOT__x___05Fh13228 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_rg_input_BI_ETC___05F_d717[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_rg_input_BI_ETC___05F_d717[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18187 = (vlTOPp->mkbbox__DOT__x___05Fh18200 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1405[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1405[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh4804 = (0x17ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_87_89_THEN_IF_rg_input_BIT_88___05FETC___05F_d191);
    vlTOPp->mkbbox__DOT__a___05Fh9452 = (0xaULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_73_45_AND_IF_rg_input_BIT_72_4_ETC___05F_d422);
    vlTOPp->mkbbox__DOT__bitcount___05Fh7142 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh7144);
    vlTOPp->mkbbox__DOT__a___05Fh20246 = (0x37ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_119_578_THEN_IF_rg_input_BIT_1_ETC___05F_d1580);
    vlTOPp->mkbbox__DOT__x___05Fh15621 = (vlTOPp->mkbbox__DOT__x___05Fh15634 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1130[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1130[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13202 = (vlTOPp->mkbbox__DOT__x___05Fh13215 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_rg_input_BI_ETC___05F_d724[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_rg_input_BI_ETC___05F_d724[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18174 = (vlTOPp->mkbbox__DOT__x___05Fh18187 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1408[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1408[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_86_93_THEN_IF_rg_input_BIT_87___05FETC___05F_d195 
        = ((0x400000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh4804 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_87_89_THEN_IF_rg_input_BIT_88___05FETC___05F_d191);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_74_41_AND_IF_rg_input_BIT_73_4_ETC___05F_d427 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0xaU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_73_45_AND_IF_rg_input_BIT_72_4_ETC___05F_d422)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9452 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_73_45_AND_IF_rg_input_BIT_72_4_ETC___05F_d422);
    vlTOPp->mkbbox__DOT__x___05Fh7112 = ((0x200U & 
                                          vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh7142
                                          : vlTOPp->mkbbox__DOT__x___05Fh7144);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_118_582_THEN_IF_rg_input_BIT_1_ETC___05F_d1584 
        = ((0x400000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20246 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_119_578_THEN_IF_rg_input_BIT_1_ETC___05F_d1580);
    vlTOPp->mkbbox__DOT__x___05Fh15608 = (vlTOPp->mkbbox__DOT__x___05Fh15621 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1135[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1135[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13189 = (vlTOPp->mkbbox__DOT__x___05Fh13202 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_rg_input_BI_ETC___05F_d731[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_rg_input_BI_ETC___05F_d731[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18161 = (vlTOPp->mkbbox__DOT__x___05Fh18174 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1411[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1411[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh4859 = (0x16ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_86_93_THEN_IF_rg_input_BIT_87___05FETC___05F_d195);
    vlTOPp->mkbbox__DOT__a___05Fh9499 = (0xbULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_74_41_AND_IF_rg_input_BIT_73_4_ETC___05F_d427);
    vlTOPp->mkbbox__DOT__bitcount___05Fh7110 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh7112);
    vlTOPp->mkbbox__DOT__a___05Fh20301 = (0x36ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_118_582_THEN_IF_rg_input_BIT_1_ETC___05F_d1584);
    vlTOPp->mkbbox__DOT__x___05Fh15595 = (vlTOPp->mkbbox__DOT__x___05Fh15608 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1140[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1140[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13176 = (vlTOPp->mkbbox__DOT__x___05Fh13189 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_rg_input_BI_ETC___05F_d738[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_rg_input_BI_ETC___05F_d738[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18148 = (vlTOPp->mkbbox__DOT__x___05Fh18161 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1414[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1414[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_85_97_THEN_IF_rg_input_BIT_86___05FETC___05F_d199 
        = ((0x200000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh4859 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_86_93_THEN_IF_rg_input_BIT_87___05FETC___05F_d195);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_75_37_AND_IF_rg_input_BIT_74_4_ETC___05F_d432 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0xbU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_74_41_AND_IF_rg_input_BIT_73_4_ETC___05F_d427)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9499 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_74_41_AND_IF_rg_input_BIT_73_4_ETC___05F_d427);
    vlTOPp->mkbbox__DOT__x___05Fh7080 = ((0x400U & 
                                          vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh7110
                                          : vlTOPp->mkbbox__DOT__x___05Fh7112);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_117_586_THEN_IF_rg_input_BIT_1_ETC___05F_d1588 
        = ((0x200000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20301 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_118_582_THEN_IF_rg_input_BIT_1_ETC___05F_d1584);
    vlTOPp->mkbbox__DOT__x___05Fh15582 = (vlTOPp->mkbbox__DOT__x___05Fh15595 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1145[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1145[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13163 = (vlTOPp->mkbbox__DOT__x___05Fh13176 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_rg_input_BI_ETC___05F_d745[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_rg_input_BI_ETC___05F_d745[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18135 = (vlTOPp->mkbbox__DOT__x___05Fh18148 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1417[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1417[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh4914 = (0x15ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_85_97_THEN_IF_rg_input_BIT_86___05FETC___05F_d199);
    vlTOPp->mkbbox__DOT__a___05Fh9546 = (0xcULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_75_37_AND_IF_rg_input_BIT_74_4_ETC___05F_d432);
    vlTOPp->mkbbox__DOT__bitcount___05Fh7078 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh7080);
    vlTOPp->mkbbox__DOT__a___05Fh20356 = (0x35ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_117_586_THEN_IF_rg_input_BIT_1_ETC___05F_d1588);
    vlTOPp->mkbbox__DOT__x___05Fh15569 = (vlTOPp->mkbbox__DOT__x___05Fh15582 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1150[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1150[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13150 = (vlTOPp->mkbbox__DOT__x___05Fh13163 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_rg_input_BI_ETC___05F_d752[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_rg_input_BI_ETC___05F_d752[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18122 = (vlTOPp->mkbbox__DOT__x___05Fh18135 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1420[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1420[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_84_01_THEN_IF_rg_input_BIT_85___05FETC___05F_d203 
        = ((0x100000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh4914 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_85_97_THEN_IF_rg_input_BIT_86___05FETC___05F_d199);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_76_33_AND_IF_rg_input_BIT_75_3_ETC___05F_d437 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0xcU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_75_37_AND_IF_rg_input_BIT_74_4_ETC___05F_d432)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9546 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_75_37_AND_IF_rg_input_BIT_74_4_ETC___05F_d432);
    vlTOPp->mkbbox__DOT__x___05Fh7048 = ((0x800U & 
                                          vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh7078
                                          : vlTOPp->mkbbox__DOT__x___05Fh7080);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_116_590_THEN_IF_rg_input_BIT_1_ETC___05F_d1592 
        = ((0x100000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20356 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_117_586_THEN_IF_rg_input_BIT_1_ETC___05F_d1588);
    vlTOPp->mkbbox__DOT__x___05Fh15556 = (vlTOPp->mkbbox__DOT__x___05Fh15569 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1155[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1155[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13137 = (vlTOPp->mkbbox__DOT__x___05Fh13150 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_rg_input_BI_ETC___05F_d759[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_rg_input_BI_ETC___05F_d759[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18109 = (vlTOPp->mkbbox__DOT__x___05Fh18122 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1423[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1423[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh4969 = (0x14ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_84_01_THEN_IF_rg_input_BIT_85___05FETC___05F_d203);
    vlTOPp->mkbbox__DOT__a___05Fh9593 = (0xdULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_76_33_AND_IF_rg_input_BIT_75_3_ETC___05F_d437);
    vlTOPp->mkbbox__DOT__bitcount___05Fh7046 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh7048);
    vlTOPp->mkbbox__DOT__a___05Fh20411 = (0x34ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_116_590_THEN_IF_rg_input_BIT_1_ETC___05F_d1592);
    vlTOPp->mkbbox__DOT__x___05Fh15543 = (vlTOPp->mkbbox__DOT__x___05Fh15556 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1160[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1160[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13124 = (vlTOPp->mkbbox__DOT__x___05Fh13137 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_rg_input_BI_ETC___05F_d766[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_rg_input_BI_ETC___05F_d766[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18096 = (vlTOPp->mkbbox__DOT__x___05Fh18109 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1426[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1426[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_83_05_THEN_IF_rg_input_BIT_84___05FETC___05F_d207 
        = ((0x80000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh4969 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_84_01_THEN_IF_rg_input_BIT_85___05FETC___05F_d203);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_77_29_AND_IF_rg_input_BIT_76_3_ETC___05F_d442 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0xdU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_76_33_AND_IF_rg_input_BIT_75_3_ETC___05F_d437)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9593 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_76_33_AND_IF_rg_input_BIT_75_3_ETC___05F_d437);
    vlTOPp->mkbbox__DOT__x___05Fh7016 = ((0x1000U & 
                                          vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh7046
                                          : vlTOPp->mkbbox__DOT__x___05Fh7048);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_115_594_THEN_IF_rg_input_BIT_1_ETC___05F_d1596 
        = ((0x80000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20411 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_116_590_THEN_IF_rg_input_BIT_1_ETC___05F_d1592);
    vlTOPp->mkbbox__DOT__x___05Fh15530 = (vlTOPp->mkbbox__DOT__x___05Fh15543 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1165[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1165[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13111 = (vlTOPp->mkbbox__DOT__x___05Fh13124 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_rg_input_BI_ETC___05F_d773[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_rg_input_BI_ETC___05F_d773[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18083 = (vlTOPp->mkbbox__DOT__x___05Fh18096 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1429[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1429[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5024 = (0x13ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_83_05_THEN_IF_rg_input_BIT_84___05FETC___05F_d207);
    vlTOPp->mkbbox__DOT__a___05Fh9640 = (0xeULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_77_29_AND_IF_rg_input_BIT_76_3_ETC___05F_d442);
    vlTOPp->mkbbox__DOT__bitcount___05Fh7014 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh7016);
    vlTOPp->mkbbox__DOT__a___05Fh20466 = (0x33ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_115_594_THEN_IF_rg_input_BIT_1_ETC___05F_d1596);
    vlTOPp->mkbbox__DOT__x___05Fh15517 = (vlTOPp->mkbbox__DOT__x___05Fh15530 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1170[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1170[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13098 = (vlTOPp->mkbbox__DOT__x___05Fh13111 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_rg_input_BI_ETC___05F_d780[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_rg_input_BI_ETC___05F_d780[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18070 = (vlTOPp->mkbbox__DOT__x___05Fh18083 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1432[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1432[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_82_09_THEN_IF_rg_input_BIT_83___05FETC___05F_d211 
        = ((0x40000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5024 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_83_05_THEN_IF_rg_input_BIT_84___05FETC___05F_d207);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_78_25_AND_IF_rg_input_BIT_77_2_ETC___05F_d447 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0xeU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_77_29_AND_IF_rg_input_BIT_76_3_ETC___05F_d442)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9640 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_77_29_AND_IF_rg_input_BIT_76_3_ETC___05F_d442);
    vlTOPp->mkbbox__DOT__x___05Fh6984 = ((0x2000U & 
                                          vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh7014
                                          : vlTOPp->mkbbox__DOT__x___05Fh7016);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_114_598_THEN_IF_rg_input_BIT_1_ETC___05F_d1600 
        = ((0x40000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20466 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_115_594_THEN_IF_rg_input_BIT_1_ETC___05F_d1596);
    vlTOPp->mkbbox__DOT__x___05Fh15504 = (vlTOPp->mkbbox__DOT__x___05Fh15517 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1175[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1175[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13085 = (vlTOPp->mkbbox__DOT__x___05Fh13098 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_rg_input_BI_ETC___05F_d787[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_rg_input_BI_ETC___05F_d787[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18057 = (vlTOPp->mkbbox__DOT__x___05Fh18070 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1435[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1435[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5079 = (0x12ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_82_09_THEN_IF_rg_input_BIT_83___05FETC___05F_d211);
    vlTOPp->mkbbox__DOT__a___05Fh9687 = (0xfULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_78_25_AND_IF_rg_input_BIT_77_2_ETC___05F_d447);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6982 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6984);
    vlTOPp->mkbbox__DOT__a___05Fh20521 = (0x32ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_114_598_THEN_IF_rg_input_BIT_1_ETC___05F_d1600);
    vlTOPp->mkbbox__DOT__x___05Fh15491 = (vlTOPp->mkbbox__DOT__x___05Fh15504 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1180[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1180[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13072 = (vlTOPp->mkbbox__DOT__x___05Fh13085 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_rg_input_BI_ETC___05F_d794[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_rg_input_BI_ETC___05F_d794[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18044 = (vlTOPp->mkbbox__DOT__x___05Fh18057 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1438[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1438[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_81_13_THEN_IF_rg_input_BIT_82___05FETC___05F_d215 
        = ((0x20000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5079 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_82_09_THEN_IF_rg_input_BIT_83___05FETC___05F_d211);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_79_21_AND_IF_rg_input_BIT_78_2_ETC___05F_d452 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0xfU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_78_25_AND_IF_rg_input_BIT_77_2_ETC___05F_d447)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9687 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_78_25_AND_IF_rg_input_BIT_77_2_ETC___05F_d447);
    vlTOPp->mkbbox__DOT__x___05Fh6952 = ((0x4000U & 
                                          vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6982
                                          : vlTOPp->mkbbox__DOT__x___05Fh6984);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_113_602_THEN_IF_rg_input_BIT_1_ETC___05F_d1604 
        = ((0x20000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20521 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_114_598_THEN_IF_rg_input_BIT_1_ETC___05F_d1600);
    vlTOPp->mkbbox__DOT__x___05Fh15478 = (vlTOPp->mkbbox__DOT__x___05Fh15491 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1185[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1185[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13059 = (vlTOPp->mkbbox__DOT__x___05Fh13072 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_rg_input_BI_ETC___05F_d801[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_rg_input_BI_ETC___05F_d801[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18031 = (vlTOPp->mkbbox__DOT__x___05Fh18044 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1441[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1441[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5134 = (0x11ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_81_13_THEN_IF_rg_input_BIT_82___05FETC___05F_d215);
    vlTOPp->mkbbox__DOT__a___05Fh9734 = (0x10ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_79_21_AND_IF_rg_input_BIT_78_2_ETC___05F_d452);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6950 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6952);
    vlTOPp->mkbbox__DOT__a___05Fh20576 = (0x31ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_113_602_THEN_IF_rg_input_BIT_1_ETC___05F_d1604);
    vlTOPp->mkbbox__DOT__x___05Fh15465 = (vlTOPp->mkbbox__DOT__x___05Fh15478 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1190[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1190[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13046 = (vlTOPp->mkbbox__DOT__x___05Fh13059 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_rg_input_BI_ETC___05F_d808[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_rg_input_BI_ETC___05F_d808[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18018 = (vlTOPp->mkbbox__DOT__x___05Fh18031 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1444[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1444[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_80_17_THEN_IF_rg_input_BIT_81___05FETC___05F_d219 
        = ((0x10000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5134 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_81_13_THEN_IF_rg_input_BIT_82___05FETC___05F_d215);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_80_17_AND_IF_rg_input_BIT_79_2_ETC___05F_d457 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x10U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_79_21_AND_IF_rg_input_BIT_78_2_ETC___05F_d452)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9734 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_79_21_AND_IF_rg_input_BIT_78_2_ETC___05F_d452);
    vlTOPp->mkbbox__DOT__x___05Fh6920 = ((0x8000U & 
                                          vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6950
                                          : vlTOPp->mkbbox__DOT__x___05Fh6952);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_112_606_THEN_IF_rg_input_BIT_1_ETC___05F_d1608 
        = ((0x10000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20576 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_113_602_THEN_IF_rg_input_BIT_1_ETC___05F_d1604);
    vlTOPp->mkbbox__DOT__x___05Fh15452 = (vlTOPp->mkbbox__DOT__x___05Fh15465 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1195[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1195[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13033 = (vlTOPp->mkbbox__DOT__x___05Fh13046 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_rg_input_BI_ETC___05F_d815[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_rg_input_BI_ETC___05F_d815[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh18005 = (vlTOPp->mkbbox__DOT__x___05Fh18018 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1447[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1447[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5189 = (0x10ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_80_17_THEN_IF_rg_input_BIT_81___05FETC___05F_d219);
    vlTOPp->mkbbox__DOT__a___05Fh9781 = (0x11ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_80_17_AND_IF_rg_input_BIT_79_2_ETC___05F_d457);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6918 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6920);
    vlTOPp->mkbbox__DOT__a___05Fh20631 = (0x30ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_112_606_THEN_IF_rg_input_BIT_1_ETC___05F_d1608);
    vlTOPp->mkbbox__DOT__x___05Fh15439 = (vlTOPp->mkbbox__DOT__x___05Fh15452 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1200[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1200[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13020 = (vlTOPp->mkbbox__DOT__x___05Fh13033 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_rg_input_BI_ETC___05F_d822[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_rg_input_BI_ETC___05F_d822[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17992 = (vlTOPp->mkbbox__DOT__x___05Fh18005 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1450[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1450[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_79_21_THEN_IF_rg_input_BIT_80___05FETC___05F_d223 
        = ((0x8000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5189 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_80_17_THEN_IF_rg_input_BIT_81___05FETC___05F_d219);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_81_13_AND_IF_rg_input_BIT_80_1_ETC___05F_d462 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x11U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_80_17_AND_IF_rg_input_BIT_79_2_ETC___05F_d457)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9781 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_80_17_AND_IF_rg_input_BIT_79_2_ETC___05F_d457);
    vlTOPp->mkbbox__DOT__x___05Fh6888 = ((0x10000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6918
                                          : vlTOPp->mkbbox__DOT__x___05Fh6920);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_111_610_THEN_IF_rg_input_BIT_1_ETC___05F_d1612 
        = ((0x8000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20631 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_112_606_THEN_IF_rg_input_BIT_1_ETC___05F_d1608);
    vlTOPp->mkbbox__DOT__x___05Fh15426 = (vlTOPp->mkbbox__DOT__x___05Fh15439 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1205[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1205[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh13007 = (vlTOPp->mkbbox__DOT__x___05Fh13020 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_rg_input_BI_ETC___05F_d828[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_rg_input_BI_ETC___05F_d828[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17979 = (vlTOPp->mkbbox__DOT__x___05Fh17992 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1453[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1453[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5244 = (0xfULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_79_21_THEN_IF_rg_input_BIT_80___05FETC___05F_d223);
    vlTOPp->mkbbox__DOT__a___05Fh9828 = (0x12ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_81_13_AND_IF_rg_input_BIT_80_1_ETC___05F_d462);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6886 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6888);
    vlTOPp->mkbbox__DOT__a___05Fh20686 = (0x2fULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_111_610_THEN_IF_rg_input_BIT_1_ETC___05F_d1612);
    vlTOPp->mkbbox__DOT__x___05Fh15413 = (vlTOPp->mkbbox__DOT__x___05Fh15426 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1210[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1210[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12994 = (vlTOPp->mkbbox__DOT__x___05Fh13007 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_rg_input_BI_ETC___05F_d835[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_rg_input_BI_ETC___05F_d835[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17966 = (vlTOPp->mkbbox__DOT__x___05Fh17979 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1456[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1456[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_78_25_THEN_IF_rg_input_BIT_79___05FETC___05F_d227 
        = ((0x4000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5244 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_79_21_THEN_IF_rg_input_BIT_80___05FETC___05F_d223);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_82_09_AND_IF_rg_input_BIT_81_1_ETC___05F_d467 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x12U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_81_13_AND_IF_rg_input_BIT_80_1_ETC___05F_d462)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9828 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_81_13_AND_IF_rg_input_BIT_80_1_ETC___05F_d462);
    vlTOPp->mkbbox__DOT__x___05Fh6856 = ((0x20000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6886
                                          : vlTOPp->mkbbox__DOT__x___05Fh6888);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_110_614_THEN_IF_rg_input_BIT_1_ETC___05F_d1616 
        = ((0x4000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20686 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_111_610_THEN_IF_rg_input_BIT_1_ETC___05F_d1612);
    vlTOPp->mkbbox__DOT__x___05Fh15400 = (vlTOPp->mkbbox__DOT__x___05Fh15413 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1215[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1215[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12981 = (vlTOPp->mkbbox__DOT__x___05Fh12994 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_rg_input_BI_ETC___05F_d842[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_rg_input_BI_ETC___05F_d842[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17953 = (vlTOPp->mkbbox__DOT__x___05Fh17966 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1459[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1459[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5299 = (0xeULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_78_25_THEN_IF_rg_input_BIT_79___05FETC___05F_d227);
    vlTOPp->mkbbox__DOT__a___05Fh9875 = (0x13ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_82_09_AND_IF_rg_input_BIT_81_1_ETC___05F_d467);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6854 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6856);
    vlTOPp->mkbbox__DOT__a___05Fh20741 = (0x2eULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_110_614_THEN_IF_rg_input_BIT_1_ETC___05F_d1616);
    vlTOPp->mkbbox__DOT__x___05Fh15387 = (vlTOPp->mkbbox__DOT__x___05Fh15400 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1220[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1220[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12968 = (vlTOPp->mkbbox__DOT__x___05Fh12981 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_rg_input_BI_ETC___05F_d849[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_rg_input_BI_ETC___05F_d849[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17940 = (vlTOPp->mkbbox__DOT__x___05Fh17953 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1462[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1462[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_77_29_THEN_IF_rg_input_BIT_78___05FETC___05F_d231 
        = ((0x2000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5299 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_78_25_THEN_IF_rg_input_BIT_79___05FETC___05F_d227);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_83_05_AND_IF_rg_input_BIT_82_0_ETC___05F_d472 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x13U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_82_09_AND_IF_rg_input_BIT_81_1_ETC___05F_d467)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9875 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_82_09_AND_IF_rg_input_BIT_81_1_ETC___05F_d467);
    vlTOPp->mkbbox__DOT__x___05Fh6824 = ((0x40000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6854
                                          : vlTOPp->mkbbox__DOT__x___05Fh6856);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_109_618_THEN_IF_rg_input_BIT_1_ETC___05F_d1620 
        = ((0x2000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20741 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_110_614_THEN_IF_rg_input_BIT_1_ETC___05F_d1616);
    vlTOPp->mkbbox__DOT__x___05Fh15374 = (vlTOPp->mkbbox__DOT__x___05Fh15387 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1225[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1225[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12955 = (vlTOPp->mkbbox__DOT__x___05Fh12968 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_rg_input_BI_ETC___05F_d856[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_rg_input_BI_ETC___05F_d856[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17927 = (vlTOPp->mkbbox__DOT__x___05Fh17940 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1465[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1465[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5354 = (0xdULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_77_29_THEN_IF_rg_input_BIT_78___05FETC___05F_d231);
    vlTOPp->mkbbox__DOT__a___05Fh9922 = (0x14ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_83_05_AND_IF_rg_input_BIT_82_0_ETC___05F_d472);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6822 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6824);
    vlTOPp->mkbbox__DOT__a___05Fh20796 = (0x2dULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_109_618_THEN_IF_rg_input_BIT_1_ETC___05F_d1620);
    vlTOPp->mkbbox__DOT__x___05Fh15361 = (vlTOPp->mkbbox__DOT__x___05Fh15374 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1230[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1230[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12942 = (vlTOPp->mkbbox__DOT__x___05Fh12955 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_rg_input_BI_ETC___05F_d863[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_rg_input_BI_ETC___05F_d863[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17914 = (vlTOPp->mkbbox__DOT__x___05Fh17927 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1468[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1468[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_76_33_THEN_IF_rg_input_BIT_77___05FETC___05F_d235 
        = ((0x1000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5354 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_77_29_THEN_IF_rg_input_BIT_78___05FETC___05F_d231);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_84_01_AND_IF_rg_input_BIT_83_0_ETC___05F_d477 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x14U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_83_05_AND_IF_rg_input_BIT_82_0_ETC___05F_d472)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9922 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_83_05_AND_IF_rg_input_BIT_82_0_ETC___05F_d472);
    vlTOPp->mkbbox__DOT__x___05Fh6792 = ((0x80000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6822
                                          : vlTOPp->mkbbox__DOT__x___05Fh6824);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_108_622_THEN_IF_rg_input_BIT_1_ETC___05F_d1624 
        = ((0x1000U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20796 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_109_618_THEN_IF_rg_input_BIT_1_ETC___05F_d1620);
    vlTOPp->mkbbox__DOT__x___05Fh15348 = (vlTOPp->mkbbox__DOT__x___05Fh15361 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1235[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1235[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12929 = (vlTOPp->mkbbox__DOT__x___05Fh12942 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_rg_input_BI_ETC___05F_d870[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_rg_input_BI_ETC___05F_d870[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17901 = (vlTOPp->mkbbox__DOT__x___05Fh17914 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1471[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1471[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5409 = (0xcULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_76_33_THEN_IF_rg_input_BIT_77___05FETC___05F_d235);
    vlTOPp->mkbbox__DOT__a___05Fh9969 = (0x15ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_84_01_AND_IF_rg_input_BIT_83_0_ETC___05F_d477);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6790 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6792);
    vlTOPp->mkbbox__DOT__a___05Fh20851 = (0x2cULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_108_622_THEN_IF_rg_input_BIT_1_ETC___05F_d1624);
    vlTOPp->mkbbox__DOT__x___05Fh15335 = (vlTOPp->mkbbox__DOT__x___05Fh15348 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1240[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1240[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12916 = (vlTOPp->mkbbox__DOT__x___05Fh12929 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_rg_input_BI_ETC___05F_d877[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_rg_input_BI_ETC___05F_d877[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17888 = (vlTOPp->mkbbox__DOT__x___05Fh17901 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1474[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1474[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_75_37_THEN_IF_rg_input_BIT_76___05FETC___05F_d239 
        = ((0x800U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5409 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_76_33_THEN_IF_rg_input_BIT_77___05FETC___05F_d235);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_85_97_AND_IF_rg_input_BIT_84_0_ETC___05F_d482 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x15U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_84_01_AND_IF_rg_input_BIT_83_0_ETC___05F_d477)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh9969 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_84_01_AND_IF_rg_input_BIT_83_0_ETC___05F_d477);
    vlTOPp->mkbbox__DOT__x___05Fh6760 = ((0x100000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6790
                                          : vlTOPp->mkbbox__DOT__x___05Fh6792);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_107_626_THEN_IF_rg_input_BIT_1_ETC___05F_d1628 
        = ((0x800U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20851 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_108_622_THEN_IF_rg_input_BIT_1_ETC___05F_d1624);
    vlTOPp->mkbbox__DOT__x___05Fh15322 = (vlTOPp->mkbbox__DOT__x___05Fh15335 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1245[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1245[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12903 = (vlTOPp->mkbbox__DOT__x___05Fh12916 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_rg_input_BI_ETC___05F_d884[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_rg_input_BI_ETC___05F_d884[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17875 = (vlTOPp->mkbbox__DOT__x___05Fh17888 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1477[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1477[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5464 = (0xbULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_75_37_THEN_IF_rg_input_BIT_76___05FETC___05F_d239);
    vlTOPp->mkbbox__DOT__a___05Fh10016 = (0x16ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_85_97_AND_IF_rg_input_BIT_84_0_ETC___05F_d482);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6758 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6760);
    vlTOPp->mkbbox__DOT__a___05Fh20906 = (0x2bULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_107_626_THEN_IF_rg_input_BIT_1_ETC___05F_d1628);
    vlTOPp->mkbbox__DOT__x___05Fh15309 = (vlTOPp->mkbbox__DOT__x___05Fh15322 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1250[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1250[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12890 = (vlTOPp->mkbbox__DOT__x___05Fh12903 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_rg_input_BI_ETC___05F_d891[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_rg_input_BI_ETC___05F_d891[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17862 = (vlTOPp->mkbbox__DOT__x___05Fh17875 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1480[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1480[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_74_41_THEN_IF_rg_input_BIT_75___05FETC___05F_d243 
        = ((0x400U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5464 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_75_37_THEN_IF_rg_input_BIT_76___05FETC___05F_d239);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_86_93_AND_IF_rg_input_BIT_85_9_ETC___05F_d487 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x16U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_85_97_AND_IF_rg_input_BIT_84_0_ETC___05F_d482)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh10016 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_85_97_AND_IF_rg_input_BIT_84_0_ETC___05F_d482);
    vlTOPp->mkbbox__DOT__x___05Fh6728 = ((0x200000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6758
                                          : vlTOPp->mkbbox__DOT__x___05Fh6760);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_106_630_THEN_IF_rg_input_BIT_1_ETC___05F_d1632 
        = ((0x400U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20906 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_107_626_THEN_IF_rg_input_BIT_1_ETC___05F_d1628);
    vlTOPp->mkbbox__DOT__x___05Fh15296 = (vlTOPp->mkbbox__DOT__x___05Fh15309 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1255[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1255[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12877 = (vlTOPp->mkbbox__DOT__x___05Fh12890 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_rg_input_BI_ETC___05F_d898[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_rg_input_BI_ETC___05F_d898[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17849 = (vlTOPp->mkbbox__DOT__x___05Fh17862 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1483[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1483[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5519 = (0xaULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_74_41_THEN_IF_rg_input_BIT_75___05FETC___05F_d243);
    vlTOPp->mkbbox__DOT__a___05Fh10063 = (0x17ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_86_93_AND_IF_rg_input_BIT_85_9_ETC___05F_d487);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6726 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6728);
    vlTOPp->mkbbox__DOT__a___05Fh20961 = (0x2aULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_106_630_THEN_IF_rg_input_BIT_1_ETC___05F_d1632);
    vlTOPp->mkbbox__DOT__x___05Fh15283 = (vlTOPp->mkbbox__DOT__x___05Fh15296 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1260[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1260[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12864 = (vlTOPp->mkbbox__DOT__x___05Fh12877 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_rg_input_BI_ETC___05F_d905[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_rg_input_BI_ETC___05F_d905[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17836 = (vlTOPp->mkbbox__DOT__x___05Fh17849 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1486[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1486[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_73_45_THEN_IF_rg_input_BIT_74___05FETC___05F_d247 
        = ((0x200U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5519 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_74_41_THEN_IF_rg_input_BIT_75___05FETC___05F_d243);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_87_89_AND_IF_rg_input_BIT_86_9_ETC___05F_d492 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x17U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_86_93_AND_IF_rg_input_BIT_85_9_ETC___05F_d487)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh10063 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_86_93_AND_IF_rg_input_BIT_85_9_ETC___05F_d487);
    vlTOPp->mkbbox__DOT__x___05Fh6696 = ((0x400000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6726
                                          : vlTOPp->mkbbox__DOT__x___05Fh6728);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_105_634_THEN_IF_rg_input_BIT_1_ETC___05F_d1636 
        = ((0x200U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh20961 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_106_630_THEN_IF_rg_input_BIT_1_ETC___05F_d1632);
    vlTOPp->mkbbox__DOT__x___05Fh15270 = (vlTOPp->mkbbox__DOT__x___05Fh15283 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1265[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1265[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12851 = (vlTOPp->mkbbox__DOT__x___05Fh12864 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_rg_input_BI_ETC___05F_d912[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_rg_input_BI_ETC___05F_d912[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17823 = (vlTOPp->mkbbox__DOT__x___05Fh17836 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1489[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1489[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5574 = (9ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_73_45_THEN_IF_rg_input_BIT_74___05FETC___05F_d247);
    vlTOPp->mkbbox__DOT__a___05Fh10110 = (0x18ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_87_89_AND_IF_rg_input_BIT_86_9_ETC___05F_d492);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6694 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6696);
    vlTOPp->mkbbox__DOT__a___05Fh21016 = (0x29ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_105_634_THEN_IF_rg_input_BIT_1_ETC___05F_d1636);
    vlTOPp->mkbbox__DOT__x___05Fh15257 = (vlTOPp->mkbbox__DOT__x___05Fh15270 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1270[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1270[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12838 = (vlTOPp->mkbbox__DOT__x___05Fh12851 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_rg_input_BI_ETC___05F_d919[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_rg_input_BI_ETC___05F_d919[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17810 = (vlTOPp->mkbbox__DOT__x___05Fh17823 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1492[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1492[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_72_49_THEN_IF_rg_input_BIT_73___05FETC___05F_d251 
        = ((0x100U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5574 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_73_45_THEN_IF_rg_input_BIT_74___05FETC___05F_d247);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_88_85_AND_IF_rg_input_BIT_87_8_ETC___05F_d497 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x18U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_87_89_AND_IF_rg_input_BIT_86_9_ETC___05F_d492)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh10110 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_87_89_AND_IF_rg_input_BIT_86_9_ETC___05F_d492);
    vlTOPp->mkbbox__DOT__x___05Fh6664 = ((0x800000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6694
                                          : vlTOPp->mkbbox__DOT__x___05Fh6696);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_104_638_THEN_IF_rg_input_BIT_1_ETC___05F_d1640 
        = ((0x100U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21016 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_105_634_THEN_IF_rg_input_BIT_1_ETC___05F_d1636);
    vlTOPp->mkbbox__DOT__x___05Fh15244 = (vlTOPp->mkbbox__DOT__x___05Fh15257 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1275[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1275[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12825 = (vlTOPp->mkbbox__DOT__x___05Fh12838 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_rg_input_BI_ETC___05F_d926[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_rg_input_BI_ETC___05F_d926[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17797 = (vlTOPp->mkbbox__DOT__x___05Fh17810 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1495[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1495[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5629 = (8ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_72_49_THEN_IF_rg_input_BIT_73___05FETC___05F_d251);
    vlTOPp->mkbbox__DOT__a___05Fh10157 = (0x19ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_88_85_AND_IF_rg_input_BIT_87_8_ETC___05F_d497);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6662 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6664);
    vlTOPp->mkbbox__DOT__a___05Fh21071 = (0x28ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_104_638_THEN_IF_rg_input_BIT_1_ETC___05F_d1640);
    vlTOPp->mkbbox__DOT__x___05Fh15231 = (vlTOPp->mkbbox__DOT__x___05Fh15244 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1280[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1280[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12812 = (vlTOPp->mkbbox__DOT__x___05Fh12825 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_rg_input_BI_ETC___05F_d933[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_rg_input_BI_ETC___05F_d933[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17784 = (vlTOPp->mkbbox__DOT__x___05Fh17797 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1498[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1498[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_71_53_THEN_IF_rg_input_BIT_72___05FETC___05F_d255 
        = ((0x80U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5629 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_72_49_THEN_IF_rg_input_BIT_73___05FETC___05F_d251);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_89_81_AND_IF_rg_input_BIT_88_8_ETC___05F_d502 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x19U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_88_85_AND_IF_rg_input_BIT_87_8_ETC___05F_d497)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh10157 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_88_85_AND_IF_rg_input_BIT_87_8_ETC___05F_d497);
    vlTOPp->mkbbox__DOT__x___05Fh6632 = ((0x1000000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6662
                                          : vlTOPp->mkbbox__DOT__x___05Fh6664);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_103_642_THEN_IF_rg_input_BIT_1_ETC___05F_d1644 
        = ((0x80U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21071 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_104_638_THEN_IF_rg_input_BIT_1_ETC___05F_d1640);
    vlTOPp->mkbbox__DOT__x___05Fh15218 = (vlTOPp->mkbbox__DOT__x___05Fh15231 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1285[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1285[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12799 = (vlTOPp->mkbbox__DOT__x___05Fh12812 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_rg_input_BI_ETC___05F_d939[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_rg_input_BI_ETC___05F_d939[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17771 = (vlTOPp->mkbbox__DOT__x___05Fh17784 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1501[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1501[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5684 = (7ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_71_53_THEN_IF_rg_input_BIT_72___05FETC___05F_d255);
    vlTOPp->mkbbox__DOT__a___05Fh10204 = (0x1aULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_89_81_AND_IF_rg_input_BIT_88_8_ETC___05F_d502);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6630 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6632);
    vlTOPp->mkbbox__DOT__a___05Fh21126 = (0x27ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_103_642_THEN_IF_rg_input_BIT_1_ETC___05F_d1644);
    vlTOPp->mkbbox__DOT__x___05Fh15205 = (vlTOPp->mkbbox__DOT__x___05Fh15218 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1290[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1290[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12786 = (vlTOPp->mkbbox__DOT__x___05Fh12799 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_rg_input_BI_ETC___05F_d946[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_rg_input_BI_ETC___05F_d946[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17758 = (vlTOPp->mkbbox__DOT__x___05Fh17771 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1504[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1504[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_70_57_THEN_IF_rg_input_BIT_71___05FETC___05F_d259 
        = ((0x40U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5684 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_71_53_THEN_IF_rg_input_BIT_72___05FETC___05F_d255);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_90_77_AND_IF_rg_input_BIT_89_8_ETC___05F_d507 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x1aU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_89_81_AND_IF_rg_input_BIT_88_8_ETC___05F_d502)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh10204 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_89_81_AND_IF_rg_input_BIT_88_8_ETC___05F_d502);
    vlTOPp->mkbbox__DOT__x___05Fh6600 = ((0x2000000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6630
                                          : vlTOPp->mkbbox__DOT__x___05Fh6632);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_102_646_THEN_IF_rg_input_BIT_1_ETC___05F_d1648 
        = ((0x40U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21126 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_103_642_THEN_IF_rg_input_BIT_1_ETC___05F_d1644);
    vlTOPp->mkbbox__DOT__x___05Fh15192 = (vlTOPp->mkbbox__DOT__x___05Fh15205 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1295[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1295[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12773 = (vlTOPp->mkbbox__DOT__x___05Fh12786 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_rg_input_BI_ETC___05F_d953[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_rg_input_BI_ETC___05F_d953[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17745 = (vlTOPp->mkbbox__DOT__x___05Fh17758 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1507[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1507[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5739 = (6ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_70_57_THEN_IF_rg_input_BIT_71___05FETC___05F_d259);
    vlTOPp->mkbbox__DOT__a___05Fh10251 = (0x1bULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_90_77_AND_IF_rg_input_BIT_89_8_ETC___05F_d507);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6598 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6600);
    vlTOPp->mkbbox__DOT__a___05Fh21181 = (0x26ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_102_646_THEN_IF_rg_input_BIT_1_ETC___05F_d1648);
    vlTOPp->mkbbox__DOT__x___05Fh15179 = (vlTOPp->mkbbox__DOT__x___05Fh15192 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1300[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1300[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12760 = (vlTOPp->mkbbox__DOT__x___05Fh12773 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_rg_input_BI_ETC___05F_d960[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_rg_input_BI_ETC___05F_d960[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17732 = (vlTOPp->mkbbox__DOT__x___05Fh17745 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1510[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1510[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_69_61_THEN_IF_rg_input_BIT_70___05FETC___05F_d263 
        = ((0x20U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5739 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_70_57_THEN_IF_rg_input_BIT_71___05FETC___05F_d259);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_91_73_AND_IF_rg_input_BIT_90_7_ETC___05F_d512 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x1bU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_90_77_AND_IF_rg_input_BIT_89_8_ETC___05F_d507)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh10251 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_90_77_AND_IF_rg_input_BIT_89_8_ETC___05F_d507);
    vlTOPp->mkbbox__DOT__x___05Fh6568 = ((0x4000000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6598
                                          : vlTOPp->mkbbox__DOT__x___05Fh6600);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_101_650_THEN_IF_rg_input_BIT_1_ETC___05F_d1652 
        = ((0x20U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21181 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_102_646_THEN_IF_rg_input_BIT_1_ETC___05F_d1648);
    vlTOPp->mkbbox__DOT__x___05Fh15166 = (vlTOPp->mkbbox__DOT__x___05Fh15179 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1305[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1305[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12747 = (vlTOPp->mkbbox__DOT__x___05Fh12760 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_rg_input_BI_ETC___05F_d967[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_rg_input_BI_ETC___05F_d967[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17719 = (vlTOPp->mkbbox__DOT__x___05Fh17732 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1513[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1513[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5794 = (5ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_69_61_THEN_IF_rg_input_BIT_70___05FETC___05F_d263);
    vlTOPp->mkbbox__DOT__a___05Fh10298 = (0x1cULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_91_73_AND_IF_rg_input_BIT_90_7_ETC___05F_d512);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6566 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6568);
    vlTOPp->mkbbox__DOT__a___05Fh21236 = (0x25ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_101_650_THEN_IF_rg_input_BIT_1_ETC___05F_d1652);
    vlTOPp->mkbbox__DOT__x___05Fh15153 = (vlTOPp->mkbbox__DOT__x___05Fh15166 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1310[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1310[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12734 = (vlTOPp->mkbbox__DOT__x___05Fh12747 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_rg_input_BI_ETC___05F_d974[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_rg_input_BI_ETC___05F_d974[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17706 = (vlTOPp->mkbbox__DOT__x___05Fh17719 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1516[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1516[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_68_65_THEN_IF_rg_input_BIT_69___05FETC___05F_d267 
        = ((0x10U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5794 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_69_61_THEN_IF_rg_input_BIT_70___05FETC___05F_d263);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_92_69_AND_IF_rg_input_BIT_91_7_ETC___05F_d517 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x1cU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_91_73_AND_IF_rg_input_BIT_90_7_ETC___05F_d512)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh10298 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_91_73_AND_IF_rg_input_BIT_90_7_ETC___05F_d512);
    vlTOPp->mkbbox__DOT__x___05Fh6536 = ((0x8000000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6566
                                          : vlTOPp->mkbbox__DOT__x___05Fh6568);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_100_654_THEN_IF_rg_input_BIT_1_ETC___05F_d1656 
        = ((0x10U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21236 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_101_650_THEN_IF_rg_input_BIT_1_ETC___05F_d1652);
    vlTOPp->mkbbox__DOT__x___05Fh15140 = (vlTOPp->mkbbox__DOT__x___05Fh15153 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1315[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1315[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12721 = (vlTOPp->mkbbox__DOT__x___05Fh12734 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_rg_input_BI_ETC___05F_d981[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_rg_input_BI_ETC___05F_d981[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17693 = (vlTOPp->mkbbox__DOT__x___05Fh17706 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1519[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1519[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5849 = (4ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_68_65_THEN_IF_rg_input_BIT_69___05FETC___05F_d267);
    vlTOPp->mkbbox__DOT__a___05Fh10345 = (0x1dULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_92_69_AND_IF_rg_input_BIT_91_7_ETC___05F_d517);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6534 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6536);
    vlTOPp->mkbbox__DOT__a___05Fh21291 = (0x24ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_100_654_THEN_IF_rg_input_BIT_1_ETC___05F_d1656);
    vlTOPp->mkbbox__DOT__x___05Fh15127 = (vlTOPp->mkbbox__DOT__x___05Fh15140 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1320[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1320[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12708 = (vlTOPp->mkbbox__DOT__x___05Fh12721 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_rg_input_BI_ETC___05F_d988[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_rg_input_BI_ETC___05F_d988[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17680 = (vlTOPp->mkbbox__DOT__x___05Fh17693 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1522[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1522[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_67_69_THEN_IF_rg_input_BIT_68___05FETC___05F_d271 
        = ((8U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5849 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_68_65_THEN_IF_rg_input_BIT_69___05FETC___05F_d267);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_93_65_AND_IF_rg_input_BIT_92_6_ETC___05F_d522 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x1dU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_92_69_AND_IF_rg_input_BIT_91_7_ETC___05F_d517)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh10345 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_92_69_AND_IF_rg_input_BIT_91_7_ETC___05F_d517);
    vlTOPp->mkbbox__DOT__x___05Fh6504 = ((0x10000000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6534
                                          : vlTOPp->mkbbox__DOT__x___05Fh6536);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_99_658_THEN_IF_rg_input_BIT_10_ETC___05F_d1660 
        = ((8U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21291 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_100_654_THEN_IF_rg_input_BIT_1_ETC___05F_d1656);
    vlTOPp->mkbbox__DOT__x___05Fh15114 = (vlTOPp->mkbbox__DOT__x___05Fh15127 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1325[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1325[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12695 = (vlTOPp->mkbbox__DOT__x___05Fh12708 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_rg_input_BI_ETC___05F_d995[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_rg_input_BI_ETC___05F_d995[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17667 = (vlTOPp->mkbbox__DOT__x___05Fh17680 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1525[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1525[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5904 = (3ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_67_69_THEN_IF_rg_input_BIT_68___05FETC___05F_d271);
    vlTOPp->mkbbox__DOT__a___05Fh10392 = (0x1eULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_93_65_AND_IF_rg_input_BIT_92_6_ETC___05F_d522);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6502 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6504);
    vlTOPp->mkbbox__DOT__a___05Fh21346 = (0x23ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_99_658_THEN_IF_rg_input_BIT_10_ETC___05F_d1660);
    vlTOPp->mkbbox__DOT__x___05Fh15101 = (vlTOPp->mkbbox__DOT__x___05Fh15114 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1330[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1330[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12682 = (vlTOPp->mkbbox__DOT__x___05Fh12695 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_rg_input_BI_ETC___05F_d1002[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_rg_input_BI_ETC___05F_d1002[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17654 = (vlTOPp->mkbbox__DOT__x___05Fh17667 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1528[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1528[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_66_73_THEN_IF_rg_input_BIT_67___05FETC___05F_d275 
        = ((4U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5904 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_67_69_THEN_IF_rg_input_BIT_68___05FETC___05F_d271);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_AND_IF_rg_input_BIT_93_6_ETC___05F_d527 
        = ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x1eU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_93_65_AND_IF_rg_input_BIT_92_6_ETC___05F_d522)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh10392 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_93_65_AND_IF_rg_input_BIT_92_6_ETC___05F_d522);
    vlTOPp->mkbbox__DOT__x___05Fh6472 = ((0x20000000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6502
                                          : vlTOPp->mkbbox__DOT__x___05Fh6504);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_98_662_THEN_IF_rg_input_BIT_99_ETC___05F_d1664 
        = ((4U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21346 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_99_658_THEN_IF_rg_input_BIT_10_ETC___05F_d1660);
    vlTOPp->mkbbox__DOT__x___05Fh15088 = (vlTOPp->mkbbox__DOT__x___05Fh15101 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1335[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1335[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12669 = (vlTOPp->mkbbox__DOT__x___05Fh12682 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_rg_input___05FETC___05F_d1009[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_rg_input___05FETC___05F_d1009[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17641 = (vlTOPp->mkbbox__DOT__x___05Fh17654 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1531[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1531[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh5959 = (2ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_66_73_THEN_IF_rg_input_BIT_67___05FETC___05F_d275);
    vlTOPp->mkbbox__DOT__a___05Fh10489 = (0x20ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_AND_IF_rg_input_BIT_93_6_ETC___05F_d527);
    vlTOPp->mkbbox__DOT__a___05Fh10439 = (0x1fULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_AND_IF_rg_input_BIT_93_6_ETC___05F_d527);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6470 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6472);
    vlTOPp->mkbbox__DOT__a___05Fh21401 = (0x22ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_98_662_THEN_IF_rg_input_BIT_99_ETC___05F_d1664);
    vlTOPp->mkbbox__DOT__x___05Fh15075 = (vlTOPp->mkbbox__DOT__x___05Fh15088 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1340[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1340[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12656 = (vlTOPp->mkbbox__DOT__x___05Fh12669 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_rg_input___05FETC___05F_d1016[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_rg_input___05FETC___05F_d1016[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17628 = (vlTOPp->mkbbox__DOT__x___05Fh17641 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1534[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1534[0U]))));
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_65_77_THEN_IF_rg_input_BIT_66___05FETC___05F_d279 
        = ((2U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh5959 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_66_73_THEN_IF_rg_input_BIT_67___05FETC___05F_d275);
    if ((((vlTOPp->mkbbox__DOT__rg_input[2U] >> 0x1fU) 
          & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_AND_IF_rg_input_BIT_93_6_ETC___05F_d527)) 
         & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))) {
        vlTOPp->mkbbox__DOT__result___05Fh1619 = vlTOPp->mkbbox__DOT__a___05Fh10439;
        vlTOPp->mkbbox__DOT__IF_rg_input_BIT_95_59_AND_IF_rg_input_BIT_94_6_ETC___05F_d1897 
            = vlTOPp->mkbbox__DOT__a___05Fh10439;
    } else {
        vlTOPp->mkbbox__DOT__result___05Fh1619 = ((
                                                   (0ULL 
                                                    == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_AND_IF_rg_input_BIT_93_6_ETC___05F_d527) 
                                                   & (~ 
                                                      vlTOPp->mkbbox__DOT__rg_input[2U]))
                                                   ? vlTOPp->mkbbox__DOT__a___05Fh10489
                                                   : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_AND_IF_rg_input_BIT_93_6_ETC___05F_d527);
        vlTOPp->mkbbox__DOT__IF_rg_input_BIT_95_59_AND_IF_rg_input_BIT_94_6_ETC___05F_d1897 
            = vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_AND_IF_rg_input_BIT_93_6_ETC___05F_d527;
    }
    vlTOPp->mkbbox__DOT__x___05Fh6440 = ((0x40000000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__bitcount___05Fh6470
                                          : vlTOPp->mkbbox__DOT__x___05Fh6472);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_97_666_THEN_IF_rg_input_BIT_98_ETC___05F_d1668 
        = ((2U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21401 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_98_662_THEN_IF_rg_input_BIT_99_ETC___05F_d1664);
    vlTOPp->mkbbox__DOT__x___05Fh15062 = (vlTOPp->mkbbox__DOT__x___05Fh15075 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1345[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1345[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12643 = (vlTOPp->mkbbox__DOT__x___05Fh12656 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_rg_input___05FETC___05F_d1023[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_rg_input___05FETC___05F_d1023[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17615 = (vlTOPp->mkbbox__DOT__x___05Fh17628 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1537[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1537[0U]))));
    vlTOPp->mkbbox__DOT__a___05Fh6075 = (1ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_65_77_THEN_IF_rg_input_BIT_66___05FETC___05F_d279);
    vlTOPp->mkbbox__DOT__a___05Fh30664 = (0x20ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_95_59_AND_IF_rg_input_BIT_94_6_ETC___05F_d1897);
    vlTOPp->mkbbox__DOT__bitcount___05Fh6438 = (1ULL 
                                                + vlTOPp->mkbbox__DOT__x___05Fh6440);
    vlTOPp->mkbbox__DOT__a___05Fh21456 = (0x21ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_97_666_THEN_IF_rg_input_BIT_98_ETC___05F_d1668);
    vlTOPp->mkbbox__DOT__x___05Fh15049 = (vlTOPp->mkbbox__DOT__x___05Fh15062 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1350[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1350[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12630 = (vlTOPp->mkbbox__DOT__x___05Fh12643 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_rg_input___05FETC___05F_d1030[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_rg_input___05FETC___05F_d1030[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17602 = (vlTOPp->mkbbox__DOT__x___05Fh17615 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1540[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1540[0U]))));
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_65_77_THEN_IF_rg_input_BIT___05FETC___05F_d284 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_65_77_THEN_IF_rg_input_BIT_66___05FETC___05F_d279)
            ? ((1U & vlTOPp->mkbbox__DOT__rg_input[2U])
                ? vlTOPp->mkbbox__DOT__a___05Fh6075
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_65_77_THEN_IF_rg_input_BIT_66___05FETC___05F_d279)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_65_77_THEN_IF_rg_input_BIT_66___05FETC___05F_d279);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_96_670_AND_IF_rg_input_BIT_95___05FETC___05F_d1902 
        = (((vlTOPp->mkbbox__DOT__rg_input[3U] & (0ULL 
                                                  == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_95_59_AND_IF_rg_input_BIT_94_6_ETC___05F_d1897)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh30664 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_95_59_AND_IF_rg_input_BIT_94_6_ETC___05F_d1897);
    vlTOPp->mkbbox__DOT__result___05Fh1617 = ((0x80000000U 
                                               & vlTOPp->mkbbox__DOT__rg_input[2U])
                                               ? vlTOPp->mkbbox__DOT__bitcount___05Fh6438
                                               : vlTOPp->mkbbox__DOT__x___05Fh6440);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_96_670_THEN_IF_rg_input_BIT_97_ETC___05F_d1672 
        = ((1U & vlTOPp->mkbbox__DOT__rg_input[3U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21456 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_97_666_THEN_IF_rg_input_BIT_98_ETC___05F_d1668);
    vlTOPp->mkbbox__DOT__result___05Fh3751 = (vlTOPp->mkbbox__DOT__x___05Fh15049 
                                              ^ (((QData)((IData)(
                                                                  vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_0_CONCAT___05FETC___05F_d1355[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_0_CONCAT___05FETC___05F_d1355[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh12617 = (vlTOPp->mkbbox__DOT__x___05Fh12630 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_rg_input___05FETC___05F_d1037[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_rg_input___05FETC___05F_d1037[0U]))));
    vlTOPp->mkbbox__DOT__x___05Fh17589 = (vlTOPp->mkbbox__DOT__x___05Fh17602 
                                          ^ (((QData)((IData)(
                                                              vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1543[1U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1543[0U]))));
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_67_69_THEN_IF_rg_input_BIT___05FETC___05F_d286 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_67_69_THEN_IF_rg_input_BIT_68___05FETC___05F_d271)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_66_73_THEN_IF_rg_input_BIT_67___05FETC___05F_d275)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_65_77_THEN_IF_rg_input_BIT___05FETC___05F_d284
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_66_73_THEN_IF_rg_input_BIT_67___05FETC___05F_d275)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_67_69_THEN_IF_rg_input_BIT_68___05FETC___05F_d271);
    vlTOPp->mkbbox__DOT__a___05Fh30713 = (0x21ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_96_670_AND_IF_rg_input_BIT_95___05FETC___05F_d1902);
    vlTOPp->mkbbox__DOT__bitcount___05Fh25016 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__result___05Fh1617);
    vlTOPp->mkbbox__DOT__a___05Fh21511 = (0x20ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_96_670_THEN_IF_rg_input_BIT_97_ETC___05F_d1672);
    vlTOPp->mkbbox__DOT__result___05Fh3749 = (vlTOPp->mkbbox__DOT__x___05Fh12617 
                                              ^ (((QData)((IData)(
                                                                  vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1043[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1043[0U]))));
    vlTOPp->mkbbox__DOT__result___05Fh3753 = (vlTOPp->mkbbox__DOT__x___05Fh17589 
                                              ^ (((QData)((IData)(
                                                                  vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1546[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1546[0U]))));
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_69_61_THEN_IF_rg_input_BIT___05FETC___05F_d288 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_69_61_THEN_IF_rg_input_BIT_70___05FETC___05F_d263)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_68_65_THEN_IF_rg_input_BIT_69___05FETC___05F_d267)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_67_69_THEN_IF_rg_input_BIT___05FETC___05F_d286
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_68_65_THEN_IF_rg_input_BIT_69___05FETC___05F_d267)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_69_61_THEN_IF_rg_input_BIT_70___05FETC___05F_d263);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_97_666_AND_IF_rg_input_BIT_96___05FETC___05F_d1907 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 1U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_96_670_AND_IF_rg_input_BIT_95___05FETC___05F_d1902)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh30713 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_96_670_AND_IF_rg_input_BIT_95___05FETC___05F_d1902);
    vlTOPp->mkbbox__DOT__x___05Fh24986 = ((1U & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh25016
                                           : vlTOPp->mkbbox__DOT__result___05Fh1617);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_95_59_THEN_IF_rg_input_BIT_96___05FETC___05F_d1675 
        = ((0x80000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21511 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_96_670_THEN_IF_rg_input_BIT_97_ETC___05F_d1672);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_71_53_THEN_IF_rg_input_BIT___05FETC___05F_d290 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_71_53_THEN_IF_rg_input_BIT_72___05FETC___05F_d255)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_70_57_THEN_IF_rg_input_BIT_71___05FETC___05F_d259)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_69_61_THEN_IF_rg_input_BIT___05FETC___05F_d288
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_70_57_THEN_IF_rg_input_BIT_71___05FETC___05F_d259)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_71_53_THEN_IF_rg_input_BIT_72___05FETC___05F_d255);
    vlTOPp->mkbbox__DOT__a___05Fh30762 = (0x22ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_97_666_AND_IF_rg_input_BIT_96___05FETC___05F_d1907);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24984 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24986);
    vlTOPp->mkbbox__DOT__a___05Fh21566 = (0x1fULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_95_59_THEN_IF_rg_input_BIT_96___05FETC___05F_d1675);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_73_45_THEN_IF_rg_input_BIT___05FETC___05F_d292 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_73_45_THEN_IF_rg_input_BIT_74___05FETC___05F_d247)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_72_49_THEN_IF_rg_input_BIT_73___05FETC___05F_d251)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_71_53_THEN_IF_rg_input_BIT___05FETC___05F_d290
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_72_49_THEN_IF_rg_input_BIT_73___05FETC___05F_d251)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_73_45_THEN_IF_rg_input_BIT_74___05FETC___05F_d247);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_98_662_AND_IF_rg_input_BIT_97___05FETC___05F_d1912 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 2U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_97_666_AND_IF_rg_input_BIT_96___05FETC___05F_d1907)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh30762 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_97_666_AND_IF_rg_input_BIT_96___05FETC___05F_d1907);
    vlTOPp->mkbbox__DOT__x___05Fh24954 = ((2U & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24984
                                           : vlTOPp->mkbbox__DOT__x___05Fh24986);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_THEN_IF_rg_input_BIT_95___05FETC___05F_d1678 
        = ((0x40000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21566 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_95_59_THEN_IF_rg_input_BIT_96___05FETC___05F_d1675);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_75_37_THEN_IF_rg_input_BIT___05FETC___05F_d294 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_75_37_THEN_IF_rg_input_BIT_76___05FETC___05F_d239)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_74_41_THEN_IF_rg_input_BIT_75___05FETC___05F_d243)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_73_45_THEN_IF_rg_input_BIT___05FETC___05F_d292
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_74_41_THEN_IF_rg_input_BIT_75___05FETC___05F_d243)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_75_37_THEN_IF_rg_input_BIT_76___05FETC___05F_d239);
    vlTOPp->mkbbox__DOT__a___05Fh30811 = (0x23ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_98_662_AND_IF_rg_input_BIT_97___05FETC___05F_d1912);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24952 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24954);
    vlTOPp->mkbbox__DOT__a___05Fh21621 = (0x1eULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_THEN_IF_rg_input_BIT_95___05FETC___05F_d1678);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_77_29_THEN_IF_rg_input_BIT___05FETC___05F_d296 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_77_29_THEN_IF_rg_input_BIT_78___05FETC___05F_d231)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_76_33_THEN_IF_rg_input_BIT_77___05FETC___05F_d235)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_75_37_THEN_IF_rg_input_BIT___05FETC___05F_d294
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_76_33_THEN_IF_rg_input_BIT_77___05FETC___05F_d235)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_77_29_THEN_IF_rg_input_BIT_78___05FETC___05F_d231);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_99_658_AND_IF_rg_input_BIT_98___05FETC___05F_d1917 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 3U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_98_662_AND_IF_rg_input_BIT_97___05FETC___05F_d1912)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh30811 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_98_662_AND_IF_rg_input_BIT_97___05FETC___05F_d1912);
    vlTOPp->mkbbox__DOT__x___05Fh24922 = ((4U & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24952
                                           : vlTOPp->mkbbox__DOT__x___05Fh24954);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_93_65_THEN_IF_rg_input_BIT_94___05FETC___05F_d1681 
        = ((0x20000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21621 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_THEN_IF_rg_input_BIT_95___05FETC___05F_d1678);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_79_21_THEN_IF_rg_input_BIT___05FETC___05F_d298 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_79_21_THEN_IF_rg_input_BIT_80___05FETC___05F_d223)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_78_25_THEN_IF_rg_input_BIT_79___05FETC___05F_d227)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_77_29_THEN_IF_rg_input_BIT___05FETC___05F_d296
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_78_25_THEN_IF_rg_input_BIT_79___05FETC___05F_d227)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_79_21_THEN_IF_rg_input_BIT_80___05FETC___05F_d223);
    vlTOPp->mkbbox__DOT__a___05Fh30860 = (0x24ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_99_658_AND_IF_rg_input_BIT_98___05FETC___05F_d1917);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24920 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24922);
    vlTOPp->mkbbox__DOT__a___05Fh21676 = (0x1dULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_93_65_THEN_IF_rg_input_BIT_94___05FETC___05F_d1681);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_81_13_THEN_IF_rg_input_BIT___05FETC___05F_d300 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_81_13_THEN_IF_rg_input_BIT_82___05FETC___05F_d215)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_80_17_THEN_IF_rg_input_BIT_81___05FETC___05F_d219)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_79_21_THEN_IF_rg_input_BIT___05FETC___05F_d298
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_80_17_THEN_IF_rg_input_BIT_81___05FETC___05F_d219)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_81_13_THEN_IF_rg_input_BIT_82___05FETC___05F_d215);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_100_654_AND_IF_rg_input_BIT_99_ETC___05F_d1922 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 4U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_99_658_AND_IF_rg_input_BIT_98___05FETC___05F_d1917)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh30860 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_99_658_AND_IF_rg_input_BIT_98___05FETC___05F_d1917);
    vlTOPp->mkbbox__DOT__x___05Fh24890 = ((8U & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24920
                                           : vlTOPp->mkbbox__DOT__x___05Fh24922);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_92_69_THEN_IF_rg_input_BIT_93___05FETC___05F_d1684 
        = ((0x10000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21676 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_93_65_THEN_IF_rg_input_BIT_94___05FETC___05F_d1681);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_83_05_THEN_IF_rg_input_BIT___05FETC___05F_d302 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_83_05_THEN_IF_rg_input_BIT_84___05FETC___05F_d207)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_82_09_THEN_IF_rg_input_BIT_83___05FETC___05F_d211)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_81_13_THEN_IF_rg_input_BIT___05FETC___05F_d300
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_82_09_THEN_IF_rg_input_BIT_83___05FETC___05F_d211)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_83_05_THEN_IF_rg_input_BIT_84___05FETC___05F_d207);
    vlTOPp->mkbbox__DOT__a___05Fh30909 = (0x25ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_100_654_AND_IF_rg_input_BIT_99_ETC___05F_d1922);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24888 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24890);
    vlTOPp->mkbbox__DOT__a___05Fh21731 = (0x1cULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_92_69_THEN_IF_rg_input_BIT_93___05FETC___05F_d1684);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_85_97_THEN_IF_rg_input_BIT___05FETC___05F_d304 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_85_97_THEN_IF_rg_input_BIT_86___05FETC___05F_d199)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_84_01_THEN_IF_rg_input_BIT_85___05FETC___05F_d203)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_83_05_THEN_IF_rg_input_BIT___05FETC___05F_d302
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_84_01_THEN_IF_rg_input_BIT_85___05FETC___05F_d203)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_85_97_THEN_IF_rg_input_BIT_86___05FETC___05F_d199);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_101_650_AND_IF_rg_input_BIT_10_ETC___05F_d1927 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 5U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_100_654_AND_IF_rg_input_BIT_99_ETC___05F_d1922)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh30909 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_100_654_AND_IF_rg_input_BIT_99_ETC___05F_d1922);
    vlTOPp->mkbbox__DOT__x___05Fh24858 = ((0x10U & 
                                           vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24888
                                           : vlTOPp->mkbbox__DOT__x___05Fh24890);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_91_73_THEN_IF_rg_input_BIT_92___05FETC___05F_d1687 
        = ((0x8000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21731 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_92_69_THEN_IF_rg_input_BIT_93___05FETC___05F_d1684);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_87_89_THEN_IF_rg_input_BIT___05FETC___05F_d306 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_87_89_THEN_IF_rg_input_BIT_88___05FETC___05F_d191)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_86_93_THEN_IF_rg_input_BIT_87___05FETC___05F_d195)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_85_97_THEN_IF_rg_input_BIT___05FETC___05F_d304
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_86_93_THEN_IF_rg_input_BIT_87___05FETC___05F_d195)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_87_89_THEN_IF_rg_input_BIT_88___05FETC___05F_d191);
    vlTOPp->mkbbox__DOT__a___05Fh30958 = (0x26ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_101_650_AND_IF_rg_input_BIT_10_ETC___05F_d1927);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24856 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24858);
    vlTOPp->mkbbox__DOT__a___05Fh21786 = (0x1bULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_91_73_THEN_IF_rg_input_BIT_92___05FETC___05F_d1687);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_89_81_THEN_IF_rg_input_BIT___05FETC___05F_d308 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_89_81_THEN_IF_rg_input_BIT_90___05FETC___05F_d183)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_88_85_THEN_IF_rg_input_BIT_89___05FETC___05F_d187)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_87_89_THEN_IF_rg_input_BIT___05FETC___05F_d306
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_88_85_THEN_IF_rg_input_BIT_89___05FETC___05F_d187)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_89_81_THEN_IF_rg_input_BIT_90___05FETC___05F_d183);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_102_646_AND_IF_rg_input_BIT_10_ETC___05F_d1932 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 6U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_101_650_AND_IF_rg_input_BIT_10_ETC___05F_d1927)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh30958 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_101_650_AND_IF_rg_input_BIT_10_ETC___05F_d1927);
    vlTOPp->mkbbox__DOT__x___05Fh24826 = ((0x20U & 
                                           vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24856
                                           : vlTOPp->mkbbox__DOT__x___05Fh24858);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_90_77_THEN_IF_rg_input_BIT_91___05FETC___05F_d1690 
        = ((0x4000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21786 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_91_73_THEN_IF_rg_input_BIT_92___05FETC___05F_d1687);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_91_73_THEN_IF_rg_input_BIT___05FETC___05F_d310 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_91_73_THEN_IF_rg_input_BIT_92___05FETC___05F_d175)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_90_77_THEN_IF_rg_input_BIT_91___05FETC___05F_d179)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_89_81_THEN_IF_rg_input_BIT___05FETC___05F_d308
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_90_77_THEN_IF_rg_input_BIT_91___05FETC___05F_d179)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_91_73_THEN_IF_rg_input_BIT_92___05FETC___05F_d175);
    vlTOPp->mkbbox__DOT__a___05Fh31007 = (0x27ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_102_646_AND_IF_rg_input_BIT_10_ETC___05F_d1932);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24824 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24826);
    vlTOPp->mkbbox__DOT__a___05Fh21841 = (0x1aULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_90_77_THEN_IF_rg_input_BIT_91___05FETC___05F_d1690);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_93_65_THEN_IF_rg_input_BIT___05FETC___05F_d312 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_93_65_THEN_IF_rg_input_BIT_94___05FETC___05F_d167)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_92_69_THEN_IF_rg_input_BIT_93___05FETC___05F_d171)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_91_73_THEN_IF_rg_input_BIT___05FETC___05F_d310
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_92_69_THEN_IF_rg_input_BIT_93___05FETC___05F_d171)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_93_65_THEN_IF_rg_input_BIT_94___05FETC___05F_d167);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_103_642_AND_IF_rg_input_BIT_10_ETC___05F_d1937 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 7U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_102_646_AND_IF_rg_input_BIT_10_ETC___05F_d1932)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31007 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_102_646_AND_IF_rg_input_BIT_10_ETC___05F_d1932);
    vlTOPp->mkbbox__DOT__x___05Fh24794 = ((0x40U & 
                                           vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24824
                                           : vlTOPp->mkbbox__DOT__x___05Fh24826);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_89_81_THEN_IF_rg_input_BIT_90___05FETC___05F_d1693 
        = ((0x2000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21841 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_90_77_THEN_IF_rg_input_BIT_91___05FETC___05F_d1690);
    vlTOPp->mkbbox__DOT__y___05Fh4236 = ((0x80000000U 
                                          & vlTOPp->mkbbox__DOT__rg_input[2U])
                                          ? vlTOPp->mkbbox__DOT__IF_rg_input_BIT_95_59_THEN_32_ELSE_0___05F_d160
                                          : ((0ULL 
                                              == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_THEN_IF_rg_input_BIT_95___05FETC___05F_d163)
                                              ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_93_65_THEN_IF_rg_input_BIT___05FETC___05F_d312
                                              : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_THEN_IF_rg_input_BIT_95___05FETC___05F_d163));
    vlTOPp->mkbbox__DOT__a___05Fh31056 = (0x28ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_103_642_AND_IF_rg_input_BIT_10_ETC___05F_d1937);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24792 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24794);
    vlTOPp->mkbbox__DOT__a___05Fh21896 = (0x19ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_89_81_THEN_IF_rg_input_BIT_90___05FETC___05F_d1693);
    vlTOPp->mkbbox__DOT__result___05Fh1615 = (0x20ULL 
                                              - vlTOPp->mkbbox__DOT__y___05Fh4236);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_104_638_AND_IF_rg_input_BIT_10_ETC___05F_d1942 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 8U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_103_642_AND_IF_rg_input_BIT_10_ETC___05F_d1937)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31056 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_103_642_AND_IF_rg_input_BIT_10_ETC___05F_d1937);
    vlTOPp->mkbbox__DOT__x___05Fh24762 = ((0x80U & 
                                           vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24792
                                           : vlTOPp->mkbbox__DOT__x___05Fh24794);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_88_85_THEN_IF_rg_input_BIT_89___05FETC___05F_d1696 
        = ((0x1000000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21896 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_89_81_THEN_IF_rg_input_BIT_90___05FETC___05F_d1693);
    vlTOPp->mkbbox__DOT__a___05Fh31105 = (0x29ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_104_638_AND_IF_rg_input_BIT_10_ETC___05F_d1942);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24760 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24762);
    vlTOPp->mkbbox__DOT__a___05Fh21951 = (0x18ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_88_85_THEN_IF_rg_input_BIT_89___05FETC___05F_d1696);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_105_634_AND_IF_rg_input_BIT_10_ETC___05F_d1947 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 9U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_104_638_AND_IF_rg_input_BIT_10_ETC___05F_d1942)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31105 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_104_638_AND_IF_rg_input_BIT_10_ETC___05F_d1942);
    vlTOPp->mkbbox__DOT__x___05Fh24730 = ((0x100U & 
                                           vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24760
                                           : vlTOPp->mkbbox__DOT__x___05Fh24762);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_87_89_THEN_IF_rg_input_BIT_88___05FETC___05F_d1699 
        = ((0x800000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh21951 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_88_85_THEN_IF_rg_input_BIT_89___05FETC___05F_d1696);
    vlTOPp->mkbbox__DOT__a___05Fh31154 = (0x2aULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_105_634_AND_IF_rg_input_BIT_10_ETC___05F_d1947);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24728 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24730);
    vlTOPp->mkbbox__DOT__a___05Fh22006 = (0x17ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_87_89_THEN_IF_rg_input_BIT_88___05FETC___05F_d1699);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_106_630_AND_IF_rg_input_BIT_10_ETC___05F_d1952 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0xaU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_105_634_AND_IF_rg_input_BIT_10_ETC___05F_d1947)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31154 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_105_634_AND_IF_rg_input_BIT_10_ETC___05F_d1947);
    vlTOPp->mkbbox__DOT__x___05Fh24698 = ((0x200U & 
                                           vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24728
                                           : vlTOPp->mkbbox__DOT__x___05Fh24730);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_86_93_THEN_IF_rg_input_BIT_87___05FETC___05F_d1702 
        = ((0x400000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22006 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_87_89_THEN_IF_rg_input_BIT_88___05FETC___05F_d1699);
    vlTOPp->mkbbox__DOT__a___05Fh31203 = (0x2bULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_106_630_AND_IF_rg_input_BIT_10_ETC___05F_d1952);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24696 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24698);
    vlTOPp->mkbbox__DOT__a___05Fh22061 = (0x16ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_86_93_THEN_IF_rg_input_BIT_87___05FETC___05F_d1702);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_107_626_AND_IF_rg_input_BIT_10_ETC___05F_d1957 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0xbU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_106_630_AND_IF_rg_input_BIT_10_ETC___05F_d1952)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31203 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_106_630_AND_IF_rg_input_BIT_10_ETC___05F_d1952);
    vlTOPp->mkbbox__DOT__x___05Fh24666 = ((0x400U & 
                                           vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24696
                                           : vlTOPp->mkbbox__DOT__x___05Fh24698);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_85_97_THEN_IF_rg_input_BIT_86___05FETC___05F_d1705 
        = ((0x200000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22061 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_86_93_THEN_IF_rg_input_BIT_87___05FETC___05F_d1702);
    vlTOPp->mkbbox__DOT__a___05Fh31252 = (0x2cULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_107_626_AND_IF_rg_input_BIT_10_ETC___05F_d1957);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24664 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24666);
    vlTOPp->mkbbox__DOT__a___05Fh22116 = (0x15ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_85_97_THEN_IF_rg_input_BIT_86___05FETC___05F_d1705);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_108_622_AND_IF_rg_input_BIT_10_ETC___05F_d1962 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0xcU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_107_626_AND_IF_rg_input_BIT_10_ETC___05F_d1957)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31252 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_107_626_AND_IF_rg_input_BIT_10_ETC___05F_d1957);
    vlTOPp->mkbbox__DOT__x___05Fh24634 = ((0x800U & 
                                           vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24664
                                           : vlTOPp->mkbbox__DOT__x___05Fh24666);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_84_01_THEN_IF_rg_input_BIT_85___05FETC___05F_d1708 
        = ((0x100000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22116 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_85_97_THEN_IF_rg_input_BIT_86___05FETC___05F_d1705);
    vlTOPp->mkbbox__DOT__a___05Fh31301 = (0x2dULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_108_622_AND_IF_rg_input_BIT_10_ETC___05F_d1962);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24632 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24634);
    vlTOPp->mkbbox__DOT__a___05Fh22171 = (0x14ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_84_01_THEN_IF_rg_input_BIT_85___05FETC___05F_d1708);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_109_618_AND_IF_rg_input_BIT_10_ETC___05F_d1967 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0xdU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_108_622_AND_IF_rg_input_BIT_10_ETC___05F_d1962)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31301 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_108_622_AND_IF_rg_input_BIT_10_ETC___05F_d1962);
    vlTOPp->mkbbox__DOT__x___05Fh24602 = ((0x1000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24632
                                           : vlTOPp->mkbbox__DOT__x___05Fh24634);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_83_05_THEN_IF_rg_input_BIT_84___05FETC___05F_d1711 
        = ((0x80000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22171 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_84_01_THEN_IF_rg_input_BIT_85___05FETC___05F_d1708);
    vlTOPp->mkbbox__DOT__a___05Fh31350 = (0x2eULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_109_618_AND_IF_rg_input_BIT_10_ETC___05F_d1967);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24600 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24602);
    vlTOPp->mkbbox__DOT__a___05Fh22226 = (0x13ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_83_05_THEN_IF_rg_input_BIT_84___05FETC___05F_d1711);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_110_614_AND_IF_rg_input_BIT_10_ETC___05F_d1972 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0xeU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_109_618_AND_IF_rg_input_BIT_10_ETC___05F_d1967)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31350 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_109_618_AND_IF_rg_input_BIT_10_ETC___05F_d1967);
    vlTOPp->mkbbox__DOT__x___05Fh24570 = ((0x2000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24600
                                           : vlTOPp->mkbbox__DOT__x___05Fh24602);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_82_09_THEN_IF_rg_input_BIT_83___05FETC___05F_d1714 
        = ((0x40000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22226 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_83_05_THEN_IF_rg_input_BIT_84___05FETC___05F_d1711);
    vlTOPp->mkbbox__DOT__a___05Fh31399 = (0x2fULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_110_614_AND_IF_rg_input_BIT_10_ETC___05F_d1972);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24568 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24570);
    vlTOPp->mkbbox__DOT__a___05Fh22281 = (0x12ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_82_09_THEN_IF_rg_input_BIT_83___05FETC___05F_d1714);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_111_610_AND_IF_rg_input_BIT_11_ETC___05F_d1977 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0xfU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_110_614_AND_IF_rg_input_BIT_10_ETC___05F_d1972)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31399 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_110_614_AND_IF_rg_input_BIT_10_ETC___05F_d1972);
    vlTOPp->mkbbox__DOT__x___05Fh24538 = ((0x4000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24568
                                           : vlTOPp->mkbbox__DOT__x___05Fh24570);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_81_13_THEN_IF_rg_input_BIT_82___05FETC___05F_d1717 
        = ((0x20000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22281 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_82_09_THEN_IF_rg_input_BIT_83___05FETC___05F_d1714);
    vlTOPp->mkbbox__DOT__a___05Fh31448 = (0x30ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_111_610_AND_IF_rg_input_BIT_11_ETC___05F_d1977);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24536 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24538);
    vlTOPp->mkbbox__DOT__a___05Fh22336 = (0x11ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_81_13_THEN_IF_rg_input_BIT_82___05FETC___05F_d1717);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_112_606_AND_IF_rg_input_BIT_11_ETC___05F_d1982 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x10U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_111_610_AND_IF_rg_input_BIT_11_ETC___05F_d1977)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31448 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_111_610_AND_IF_rg_input_BIT_11_ETC___05F_d1977);
    vlTOPp->mkbbox__DOT__x___05Fh24506 = ((0x8000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24536
                                           : vlTOPp->mkbbox__DOT__x___05Fh24538);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_80_17_THEN_IF_rg_input_BIT_81___05FETC___05F_d1720 
        = ((0x10000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22336 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_81_13_THEN_IF_rg_input_BIT_82___05FETC___05F_d1717);
    vlTOPp->mkbbox__DOT__a___05Fh31497 = (0x31ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_112_606_AND_IF_rg_input_BIT_11_ETC___05F_d1982);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24504 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24506);
    vlTOPp->mkbbox__DOT__a___05Fh22391 = (0x10ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_80_17_THEN_IF_rg_input_BIT_81___05FETC___05F_d1720);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_113_602_AND_IF_rg_input_BIT_11_ETC___05F_d1987 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x11U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_112_606_AND_IF_rg_input_BIT_11_ETC___05F_d1982)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31497 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_112_606_AND_IF_rg_input_BIT_11_ETC___05F_d1982);
    vlTOPp->mkbbox__DOT__x___05Fh24474 = ((0x10000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24504
                                           : vlTOPp->mkbbox__DOT__x___05Fh24506);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_79_21_THEN_IF_rg_input_BIT_80___05FETC___05F_d1723 
        = ((0x8000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22391 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_80_17_THEN_IF_rg_input_BIT_81___05FETC___05F_d1720);
    vlTOPp->mkbbox__DOT__a___05Fh31546 = (0x32ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_113_602_AND_IF_rg_input_BIT_11_ETC___05F_d1987);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24472 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24474);
    vlTOPp->mkbbox__DOT__a___05Fh22446 = (0xfULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_79_21_THEN_IF_rg_input_BIT_80___05FETC___05F_d1723);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_114_598_AND_IF_rg_input_BIT_11_ETC___05F_d1992 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x12U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_113_602_AND_IF_rg_input_BIT_11_ETC___05F_d1987)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31546 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_113_602_AND_IF_rg_input_BIT_11_ETC___05F_d1987);
    vlTOPp->mkbbox__DOT__x___05Fh24442 = ((0x20000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24472
                                           : vlTOPp->mkbbox__DOT__x___05Fh24474);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_78_25_THEN_IF_rg_input_BIT_79___05FETC___05F_d1726 
        = ((0x4000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22446 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_79_21_THEN_IF_rg_input_BIT_80___05FETC___05F_d1723);
    vlTOPp->mkbbox__DOT__a___05Fh31595 = (0x33ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_114_598_AND_IF_rg_input_BIT_11_ETC___05F_d1992);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24440 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24442);
    vlTOPp->mkbbox__DOT__a___05Fh22501 = (0xeULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_78_25_THEN_IF_rg_input_BIT_79___05FETC___05F_d1726);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_115_594_AND_IF_rg_input_BIT_11_ETC___05F_d1997 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x13U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_114_598_AND_IF_rg_input_BIT_11_ETC___05F_d1992)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31595 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_114_598_AND_IF_rg_input_BIT_11_ETC___05F_d1992);
    vlTOPp->mkbbox__DOT__x___05Fh24410 = ((0x40000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24440
                                           : vlTOPp->mkbbox__DOT__x___05Fh24442);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_77_29_THEN_IF_rg_input_BIT_78___05FETC___05F_d1729 
        = ((0x2000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22501 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_78_25_THEN_IF_rg_input_BIT_79___05FETC___05F_d1726);
    vlTOPp->mkbbox__DOT__a___05Fh31644 = (0x34ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_115_594_AND_IF_rg_input_BIT_11_ETC___05F_d1997);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24408 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24410);
    vlTOPp->mkbbox__DOT__a___05Fh22556 = (0xdULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_77_29_THEN_IF_rg_input_BIT_78___05FETC___05F_d1729);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_116_590_AND_IF_rg_input_BIT_11_ETC___05F_d2002 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x14U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_115_594_AND_IF_rg_input_BIT_11_ETC___05F_d1997)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31644 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_115_594_AND_IF_rg_input_BIT_11_ETC___05F_d1997);
    vlTOPp->mkbbox__DOT__x___05Fh24378 = ((0x80000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24408
                                           : vlTOPp->mkbbox__DOT__x___05Fh24410);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_76_33_THEN_IF_rg_input_BIT_77___05FETC___05F_d1732 
        = ((0x1000U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22556 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_77_29_THEN_IF_rg_input_BIT_78___05FETC___05F_d1729);
    vlTOPp->mkbbox__DOT__a___05Fh31693 = (0x35ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_116_590_AND_IF_rg_input_BIT_11_ETC___05F_d2002);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24376 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24378);
    vlTOPp->mkbbox__DOT__a___05Fh22611 = (0xcULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_76_33_THEN_IF_rg_input_BIT_77___05FETC___05F_d1732);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_117_586_AND_IF_rg_input_BIT_11_ETC___05F_d2007 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x15U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_116_590_AND_IF_rg_input_BIT_11_ETC___05F_d2002)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31693 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_116_590_AND_IF_rg_input_BIT_11_ETC___05F_d2002);
    vlTOPp->mkbbox__DOT__x___05Fh24346 = ((0x100000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24376
                                           : vlTOPp->mkbbox__DOT__x___05Fh24378);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_75_37_THEN_IF_rg_input_BIT_76___05FETC___05F_d1735 
        = ((0x800U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22611 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_76_33_THEN_IF_rg_input_BIT_77___05FETC___05F_d1732);
    vlTOPp->mkbbox__DOT__a___05Fh31742 = (0x36ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_117_586_AND_IF_rg_input_BIT_11_ETC___05F_d2007);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24344 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24346);
    vlTOPp->mkbbox__DOT__a___05Fh22666 = (0xbULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_75_37_THEN_IF_rg_input_BIT_76___05FETC___05F_d1735);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_118_582_AND_IF_rg_input_BIT_11_ETC___05F_d2012 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x16U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_117_586_AND_IF_rg_input_BIT_11_ETC___05F_d2007)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31742 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_117_586_AND_IF_rg_input_BIT_11_ETC___05F_d2007);
    vlTOPp->mkbbox__DOT__x___05Fh24314 = ((0x200000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24344
                                           : vlTOPp->mkbbox__DOT__x___05Fh24346);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_74_41_THEN_IF_rg_input_BIT_75___05FETC___05F_d1738 
        = ((0x400U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22666 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_75_37_THEN_IF_rg_input_BIT_76___05FETC___05F_d1735);
    vlTOPp->mkbbox__DOT__a___05Fh31791 = (0x37ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_118_582_AND_IF_rg_input_BIT_11_ETC___05F_d2012);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24312 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24314);
    vlTOPp->mkbbox__DOT__a___05Fh22721 = (0xaULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_74_41_THEN_IF_rg_input_BIT_75___05FETC___05F_d1738);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_119_578_AND_IF_rg_input_BIT_11_ETC___05F_d2017 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x17U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_118_582_AND_IF_rg_input_BIT_11_ETC___05F_d2012)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31791 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_118_582_AND_IF_rg_input_BIT_11_ETC___05F_d2012);
    vlTOPp->mkbbox__DOT__x___05Fh24282 = ((0x400000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24312
                                           : vlTOPp->mkbbox__DOT__x___05Fh24314);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_73_45_THEN_IF_rg_input_BIT_74___05FETC___05F_d1741 
        = ((0x200U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22721 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_74_41_THEN_IF_rg_input_BIT_75___05FETC___05F_d1738);
    vlTOPp->mkbbox__DOT__a___05Fh31840 = (0x38ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_119_578_AND_IF_rg_input_BIT_11_ETC___05F_d2017);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24280 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24282);
    vlTOPp->mkbbox__DOT__a___05Fh22776 = (9ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_73_45_THEN_IF_rg_input_BIT_74___05FETC___05F_d1741);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_120_574_AND_IF_rg_input_BIT_11_ETC___05F_d2022 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x18U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_119_578_AND_IF_rg_input_BIT_11_ETC___05F_d2017)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31840 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_119_578_AND_IF_rg_input_BIT_11_ETC___05F_d2017);
    vlTOPp->mkbbox__DOT__x___05Fh24250 = ((0x800000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24280
                                           : vlTOPp->mkbbox__DOT__x___05Fh24282);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_72_49_THEN_IF_rg_input_BIT_73___05FETC___05F_d1744 
        = ((0x100U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22776 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_73_45_THEN_IF_rg_input_BIT_74___05FETC___05F_d1741);
    vlTOPp->mkbbox__DOT__a___05Fh31889 = (0x39ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_120_574_AND_IF_rg_input_BIT_11_ETC___05F_d2022);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24248 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24250);
    vlTOPp->mkbbox__DOT__a___05Fh22831 = (8ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_72_49_THEN_IF_rg_input_BIT_73___05FETC___05F_d1744);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_121_570_AND_IF_rg_input_BIT_12_ETC___05F_d2027 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x19U) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_120_574_AND_IF_rg_input_BIT_11_ETC___05F_d2022)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31889 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_120_574_AND_IF_rg_input_BIT_11_ETC___05F_d2022);
    vlTOPp->mkbbox__DOT__x___05Fh24218 = ((0x1000000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24248
                                           : vlTOPp->mkbbox__DOT__x___05Fh24250);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_71_53_THEN_IF_rg_input_BIT_72___05FETC___05F_d1747 
        = ((0x80U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22831 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_72_49_THEN_IF_rg_input_BIT_73___05FETC___05F_d1744);
    vlTOPp->mkbbox__DOT__a___05Fh31938 = (0x3aULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_121_570_AND_IF_rg_input_BIT_12_ETC___05F_d2027);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24216 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24218);
    vlTOPp->mkbbox__DOT__a___05Fh22886 = (7ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_71_53_THEN_IF_rg_input_BIT_72___05FETC___05F_d1747);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_122_566_AND_IF_rg_input_BIT_12_ETC___05F_d2032 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x1aU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_121_570_AND_IF_rg_input_BIT_12_ETC___05F_d2027)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31938 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_121_570_AND_IF_rg_input_BIT_12_ETC___05F_d2027);
    vlTOPp->mkbbox__DOT__x___05Fh24186 = ((0x2000000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24216
                                           : vlTOPp->mkbbox__DOT__x___05Fh24218);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_70_57_THEN_IF_rg_input_BIT_71___05FETC___05F_d1750 
        = ((0x40U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22886 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_71_53_THEN_IF_rg_input_BIT_72___05FETC___05F_d1747);
    vlTOPp->mkbbox__DOT__a___05Fh31987 = (0x3bULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_122_566_AND_IF_rg_input_BIT_12_ETC___05F_d2032);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24184 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24186);
    vlTOPp->mkbbox__DOT__a___05Fh22941 = (6ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_70_57_THEN_IF_rg_input_BIT_71___05FETC___05F_d1750);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_123_562_AND_IF_rg_input_BIT_12_ETC___05F_d2037 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x1bU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_122_566_AND_IF_rg_input_BIT_12_ETC___05F_d2032)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh31987 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_122_566_AND_IF_rg_input_BIT_12_ETC___05F_d2032);
    vlTOPp->mkbbox__DOT__x___05Fh24154 = ((0x4000000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24184
                                           : vlTOPp->mkbbox__DOT__x___05Fh24186);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_69_61_THEN_IF_rg_input_BIT_70___05FETC___05F_d1753 
        = ((0x20U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22941 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_70_57_THEN_IF_rg_input_BIT_71___05FETC___05F_d1750);
    vlTOPp->mkbbox__DOT__a___05Fh32036 = (0x3cULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_123_562_AND_IF_rg_input_BIT_12_ETC___05F_d2037);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24152 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24154);
    vlTOPp->mkbbox__DOT__a___05Fh22996 = (5ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_69_61_THEN_IF_rg_input_BIT_70___05FETC___05F_d1753);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_124_558_AND_IF_rg_input_BIT_12_ETC___05F_d2042 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x1cU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_123_562_AND_IF_rg_input_BIT_12_ETC___05F_d2037)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh32036 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_123_562_AND_IF_rg_input_BIT_12_ETC___05F_d2037);
    vlTOPp->mkbbox__DOT__x___05Fh24122 = ((0x8000000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24152
                                           : vlTOPp->mkbbox__DOT__x___05Fh24154);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_68_65_THEN_IF_rg_input_BIT_69___05FETC___05F_d1756 
        = ((0x10U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh22996 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_69_61_THEN_IF_rg_input_BIT_70___05FETC___05F_d1753);
    vlTOPp->mkbbox__DOT__a___05Fh32085 = (0x3dULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_124_558_AND_IF_rg_input_BIT_12_ETC___05F_d2042);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24120 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24122);
    vlTOPp->mkbbox__DOT__a___05Fh23051 = (4ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_68_65_THEN_IF_rg_input_BIT_69___05FETC___05F_d1756);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_125_554_AND_IF_rg_input_BIT_12_ETC___05F_d2047 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x1dU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_124_558_AND_IF_rg_input_BIT_12_ETC___05F_d2042)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh32085 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_124_558_AND_IF_rg_input_BIT_12_ETC___05F_d2042);
    vlTOPp->mkbbox__DOT__x___05Fh24090 = ((0x10000000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24120
                                           : vlTOPp->mkbbox__DOT__x___05Fh24122);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_67_69_THEN_IF_rg_input_BIT_68___05FETC___05F_d1759 
        = ((8U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh23051 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_68_65_THEN_IF_rg_input_BIT_69___05FETC___05F_d1756);
    vlTOPp->mkbbox__DOT__a___05Fh32134 = (0x3eULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_125_554_AND_IF_rg_input_BIT_12_ETC___05F_d2047);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24088 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24090);
    vlTOPp->mkbbox__DOT__a___05Fh23106 = (3ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_67_69_THEN_IF_rg_input_BIT_68___05FETC___05F_d1759);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_126_550_AND_IF_rg_input_BIT_12_ETC___05F_d2052 
        = ((((vlTOPp->mkbbox__DOT__rg_input[3U] >> 0x1eU) 
             & (0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_125_554_AND_IF_rg_input_BIT_12_ETC___05F_d2047)) 
            & (~ vlTOPp->mkbbox__DOT__rg_input[2U]))
            ? vlTOPp->mkbbox__DOT__a___05Fh32134 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_125_554_AND_IF_rg_input_BIT_12_ETC___05F_d2047);
    vlTOPp->mkbbox__DOT__x___05Fh24058 = ((0x20000000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24088
                                           : vlTOPp->mkbbox__DOT__x___05Fh24090);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_66_73_THEN_IF_rg_input_BIT_67___05FETC___05F_d1762 
        = ((4U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh23106 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_67_69_THEN_IF_rg_input_BIT_68___05FETC___05F_d1759);
    vlTOPp->mkbbox__DOT__a___05Fh32183 = (0x3fULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_126_550_AND_IF_rg_input_BIT_12_ETC___05F_d2052);
    vlTOPp->mkbbox__DOT__a___05Fh32235 = (0x40ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_126_550_AND_IF_rg_input_BIT_12_ETC___05F_d2052);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24056 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24058);
    vlTOPp->mkbbox__DOT__a___05Fh23161 = (2ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_66_73_THEN_IF_rg_input_BIT_67___05FETC___05F_d1762);
    vlTOPp->mkbbox__DOT__result___05Fh3759 = ((((vlTOPp->mkbbox__DOT__rg_input[3U] 
                                                 >> 0x1fU) 
                                                & (0ULL 
                                                   == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_126_550_AND_IF_rg_input_BIT_12_ETC___05F_d2052)) 
                                               & (~ 
                                                  vlTOPp->mkbbox__DOT__rg_input[2U]))
                                               ? vlTOPp->mkbbox__DOT__a___05Fh32183
                                               : ((
                                                   (0ULL 
                                                    == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_126_550_AND_IF_rg_input_BIT_12_ETC___05F_d2052) 
                                                   & (~ 
                                                      vlTOPp->mkbbox__DOT__rg_input[2U]))
                                                   ? vlTOPp->mkbbox__DOT__a___05Fh32235
                                                   : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_126_550_AND_IF_rg_input_BIT_12_ETC___05F_d2052));
    vlTOPp->mkbbox__DOT__x___05Fh24026 = ((0x40000000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__bitcount___05Fh24056
                                           : vlTOPp->mkbbox__DOT__x___05Fh24058);
    vlTOPp->mkbbox__DOT__IF_rg_input_BIT_65_77_THEN_IF_rg_input_BIT_66___05FETC___05F_d1765 
        = ((2U & vlTOPp->mkbbox__DOT__rg_input[2U])
            ? vlTOPp->mkbbox__DOT__a___05Fh23161 : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_66_73_THEN_IF_rg_input_BIT_67___05FETC___05F_d1762);
    vlTOPp->mkbbox__DOT__bitcount___05Fh24024 = (1ULL 
                                                 + vlTOPp->mkbbox__DOT__x___05Fh24026);
    vlTOPp->mkbbox__DOT__a___05Fh23341 = (1ULL + vlTOPp->mkbbox__DOT__IF_rg_input_BIT_65_77_THEN_IF_rg_input_BIT_66___05FETC___05F_d1765);
    vlTOPp->mkbbox__DOT__result___05Fh3757 = ((0x80000000U 
                                               & vlTOPp->mkbbox__DOT__rg_input[3U])
                                               ? vlTOPp->mkbbox__DOT__bitcount___05Fh24024
                                               : vlTOPp->mkbbox__DOT__x___05Fh24026);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_65_77_THEN_IF_rg_input_BIT___05FETC___05F_d1769 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_65_77_THEN_IF_rg_input_BIT_66___05FETC___05F_d1765)
            ? ((1U & vlTOPp->mkbbox__DOT__rg_input[2U])
                ? vlTOPp->mkbbox__DOT__a___05Fh23341
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_65_77_THEN_IF_rg_input_BIT_66___05FETC___05F_d1765)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_65_77_THEN_IF_rg_input_BIT_66___05FETC___05F_d1765);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_148_3_EQ_0b11000000010_ETC___05F_d2137 
        = ((((0x602U == (0xfffU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                   >> 0x14U))) & (1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                      >> 0xcU)))) 
            & (0x13U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh3757
            : ((((0x601U == (0xfffU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                       >> 0x14U))) 
                 & (1U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0xcU)))) & (0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh3759
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b101_1_AND_rg___05FETC___05F_d2135));
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_67_69_THEN_IF_rg_input_BIT___05FETC___05F_d1771 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_67_69_THEN_IF_rg_input_BIT_68___05FETC___05F_d1759)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_66_73_THEN_IF_rg_input_BIT_67___05FETC___05F_d1762)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_65_77_THEN_IF_rg_input_BIT___05FETC___05F_d1769
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_66_73_THEN_IF_rg_input_BIT_67___05FETC___05F_d1762)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_67_69_THEN_IF_rg_input_BIT_68___05FETC___05F_d1759);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_69_61_THEN_IF_rg_input_BIT___05FETC___05F_d1773 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_69_61_THEN_IF_rg_input_BIT_70___05FETC___05F_d1753)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_68_65_THEN_IF_rg_input_BIT_69___05FETC___05F_d1756)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_67_69_THEN_IF_rg_input_BIT___05FETC___05F_d1771
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_68_65_THEN_IF_rg_input_BIT_69___05FETC___05F_d1756)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_69_61_THEN_IF_rg_input_BIT_70___05FETC___05F_d1753);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_71_53_THEN_IF_rg_input_BIT___05FETC___05F_d1775 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_71_53_THEN_IF_rg_input_BIT_72___05FETC___05F_d1747)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_70_57_THEN_IF_rg_input_BIT_71___05FETC___05F_d1750)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_69_61_THEN_IF_rg_input_BIT___05FETC___05F_d1773
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_70_57_THEN_IF_rg_input_BIT_71___05FETC___05F_d1750)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_71_53_THEN_IF_rg_input_BIT_72___05FETC___05F_d1747);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_73_45_THEN_IF_rg_input_BIT___05FETC___05F_d1777 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_73_45_THEN_IF_rg_input_BIT_74___05FETC___05F_d1741)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_72_49_THEN_IF_rg_input_BIT_73___05FETC___05F_d1744)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_71_53_THEN_IF_rg_input_BIT___05FETC___05F_d1775
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_72_49_THEN_IF_rg_input_BIT_73___05FETC___05F_d1744)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_73_45_THEN_IF_rg_input_BIT_74___05FETC___05F_d1741);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_75_37_THEN_IF_rg_input_BIT___05FETC___05F_d1779 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_75_37_THEN_IF_rg_input_BIT_76___05FETC___05F_d1735)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_74_41_THEN_IF_rg_input_BIT_75___05FETC___05F_d1738)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_73_45_THEN_IF_rg_input_BIT___05FETC___05F_d1777
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_74_41_THEN_IF_rg_input_BIT_75___05FETC___05F_d1738)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_75_37_THEN_IF_rg_input_BIT_76___05FETC___05F_d1735);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_77_29_THEN_IF_rg_input_BIT___05FETC___05F_d1781 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_77_29_THEN_IF_rg_input_BIT_78___05FETC___05F_d1729)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_76_33_THEN_IF_rg_input_BIT_77___05FETC___05F_d1732)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_75_37_THEN_IF_rg_input_BIT___05FETC___05F_d1779
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_76_33_THEN_IF_rg_input_BIT_77___05FETC___05F_d1732)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_77_29_THEN_IF_rg_input_BIT_78___05FETC___05F_d1729);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_79_21_THEN_IF_rg_input_BIT___05FETC___05F_d1783 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_79_21_THEN_IF_rg_input_BIT_80___05FETC___05F_d1723)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_78_25_THEN_IF_rg_input_BIT_79___05FETC___05F_d1726)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_77_29_THEN_IF_rg_input_BIT___05FETC___05F_d1781
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_78_25_THEN_IF_rg_input_BIT_79___05FETC___05F_d1726)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_79_21_THEN_IF_rg_input_BIT_80___05FETC___05F_d1723);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_81_13_THEN_IF_rg_input_BIT___05FETC___05F_d1785 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_81_13_THEN_IF_rg_input_BIT_82___05FETC___05F_d1717)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_80_17_THEN_IF_rg_input_BIT_81___05FETC___05F_d1720)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_79_21_THEN_IF_rg_input_BIT___05FETC___05F_d1783
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_80_17_THEN_IF_rg_input_BIT_81___05FETC___05F_d1720)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_81_13_THEN_IF_rg_input_BIT_82___05FETC___05F_d1717);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_83_05_THEN_IF_rg_input_BIT___05FETC___05F_d1787 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_83_05_THEN_IF_rg_input_BIT_84___05FETC___05F_d1711)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_82_09_THEN_IF_rg_input_BIT_83___05FETC___05F_d1714)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_81_13_THEN_IF_rg_input_BIT___05FETC___05F_d1785
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_82_09_THEN_IF_rg_input_BIT_83___05FETC___05F_d1714)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_83_05_THEN_IF_rg_input_BIT_84___05FETC___05F_d1711);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_85_97_THEN_IF_rg_input_BIT___05FETC___05F_d1789 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_85_97_THEN_IF_rg_input_BIT_86___05FETC___05F_d1705)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_84_01_THEN_IF_rg_input_BIT_85___05FETC___05F_d1708)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_83_05_THEN_IF_rg_input_BIT___05FETC___05F_d1787
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_84_01_THEN_IF_rg_input_BIT_85___05FETC___05F_d1708)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_85_97_THEN_IF_rg_input_BIT_86___05FETC___05F_d1705);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_87_89_THEN_IF_rg_input_BIT___05FETC___05F_d1791 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_87_89_THEN_IF_rg_input_BIT_88___05FETC___05F_d1699)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_86_93_THEN_IF_rg_input_BIT_87___05FETC___05F_d1702)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_85_97_THEN_IF_rg_input_BIT___05FETC___05F_d1789
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_86_93_THEN_IF_rg_input_BIT_87___05FETC___05F_d1702)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_87_89_THEN_IF_rg_input_BIT_88___05FETC___05F_d1699);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_89_81_THEN_IF_rg_input_BIT___05FETC___05F_d1793 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_89_81_THEN_IF_rg_input_BIT_90___05FETC___05F_d1693)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_88_85_THEN_IF_rg_input_BIT_89___05FETC___05F_d1696)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_87_89_THEN_IF_rg_input_BIT___05FETC___05F_d1791
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_88_85_THEN_IF_rg_input_BIT_89___05FETC___05F_d1696)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_89_81_THEN_IF_rg_input_BIT_90___05FETC___05F_d1693);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_91_73_THEN_IF_rg_input_BIT___05FETC___05F_d1795 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_91_73_THEN_IF_rg_input_BIT_92___05FETC___05F_d1687)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_90_77_THEN_IF_rg_input_BIT_91___05FETC___05F_d1690)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_89_81_THEN_IF_rg_input_BIT___05FETC___05F_d1793
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_90_77_THEN_IF_rg_input_BIT_91___05FETC___05F_d1690)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_91_73_THEN_IF_rg_input_BIT_92___05FETC___05F_d1687);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_93_65_THEN_IF_rg_input_BIT___05FETC___05F_d1797 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_93_65_THEN_IF_rg_input_BIT_94___05FETC___05F_d1681)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_92_69_THEN_IF_rg_input_BIT_93___05FETC___05F_d1684)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_91_73_THEN_IF_rg_input_BIT___05FETC___05F_d1795
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_92_69_THEN_IF_rg_input_BIT_93___05FETC___05F_d1684)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_93_65_THEN_IF_rg_input_BIT_94___05FETC___05F_d1681);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_95_59_THEN_IF_rg_input_BIT___05FETC___05F_d1799 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_95_59_THEN_IF_rg_input_BIT_96___05FETC___05F_d1675)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_THEN_IF_rg_input_BIT_95___05FETC___05F_d1678)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_93_65_THEN_IF_rg_input_BIT___05FETC___05F_d1797
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_94_61_THEN_IF_rg_input_BIT_95___05FETC___05F_d1678)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_95_59_THEN_IF_rg_input_BIT_96___05FETC___05F_d1675);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_97_666_THEN_IF_rg_input_BIT_ETC___05F_d1801 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_97_666_THEN_IF_rg_input_BIT_98_ETC___05F_d1668)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_96_670_THEN_IF_rg_input_BIT_97_ETC___05F_d1672)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_95_59_THEN_IF_rg_input_BIT___05FETC___05F_d1799
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_96_670_THEN_IF_rg_input_BIT_97_ETC___05F_d1672)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_97_666_THEN_IF_rg_input_BIT_98_ETC___05F_d1668);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_99_658_THEN_IF_rg_input_BIT_ETC___05F_d1803 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_99_658_THEN_IF_rg_input_BIT_10_ETC___05F_d1660)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_98_662_THEN_IF_rg_input_BIT_99_ETC___05F_d1664)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_97_666_THEN_IF_rg_input_BIT_ETC___05F_d1801
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_98_662_THEN_IF_rg_input_BIT_99_ETC___05F_d1664)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_99_658_THEN_IF_rg_input_BIT_10_ETC___05F_d1660);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_101_650_THEN_IF_rg_input_BI_ETC___05F_d1805 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_101_650_THEN_IF_rg_input_BIT_1_ETC___05F_d1652)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_100_654_THEN_IF_rg_input_BIT_1_ETC___05F_d1656)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_99_658_THEN_IF_rg_input_BIT_ETC___05F_d1803
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_100_654_THEN_IF_rg_input_BIT_1_ETC___05F_d1656)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_101_650_THEN_IF_rg_input_BIT_1_ETC___05F_d1652);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_103_642_THEN_IF_rg_input_BI_ETC___05F_d1807 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_103_642_THEN_IF_rg_input_BIT_1_ETC___05F_d1644)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_102_646_THEN_IF_rg_input_BIT_1_ETC___05F_d1648)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_101_650_THEN_IF_rg_input_BI_ETC___05F_d1805
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_102_646_THEN_IF_rg_input_BIT_1_ETC___05F_d1648)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_103_642_THEN_IF_rg_input_BIT_1_ETC___05F_d1644);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_105_634_THEN_IF_rg_input_BI_ETC___05F_d1809 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_105_634_THEN_IF_rg_input_BIT_1_ETC___05F_d1636)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_104_638_THEN_IF_rg_input_BIT_1_ETC___05F_d1640)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_103_642_THEN_IF_rg_input_BI_ETC___05F_d1807
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_104_638_THEN_IF_rg_input_BIT_1_ETC___05F_d1640)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_105_634_THEN_IF_rg_input_BIT_1_ETC___05F_d1636);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_107_626_THEN_IF_rg_input_BI_ETC___05F_d1811 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_107_626_THEN_IF_rg_input_BIT_1_ETC___05F_d1628)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_106_630_THEN_IF_rg_input_BIT_1_ETC___05F_d1632)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_105_634_THEN_IF_rg_input_BI_ETC___05F_d1809
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_106_630_THEN_IF_rg_input_BIT_1_ETC___05F_d1632)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_107_626_THEN_IF_rg_input_BIT_1_ETC___05F_d1628);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_109_618_THEN_IF_rg_input_BI_ETC___05F_d1813 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_109_618_THEN_IF_rg_input_BIT_1_ETC___05F_d1620)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_108_622_THEN_IF_rg_input_BIT_1_ETC___05F_d1624)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_107_626_THEN_IF_rg_input_BI_ETC___05F_d1811
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_108_622_THEN_IF_rg_input_BIT_1_ETC___05F_d1624)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_109_618_THEN_IF_rg_input_BIT_1_ETC___05F_d1620);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_111_610_THEN_IF_rg_input_BI_ETC___05F_d1815 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_111_610_THEN_IF_rg_input_BIT_1_ETC___05F_d1612)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_110_614_THEN_IF_rg_input_BIT_1_ETC___05F_d1616)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_109_618_THEN_IF_rg_input_BI_ETC___05F_d1813
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_110_614_THEN_IF_rg_input_BIT_1_ETC___05F_d1616)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_111_610_THEN_IF_rg_input_BIT_1_ETC___05F_d1612);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_113_602_THEN_IF_rg_input_BI_ETC___05F_d1817 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_113_602_THEN_IF_rg_input_BIT_1_ETC___05F_d1604)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_112_606_THEN_IF_rg_input_BIT_1_ETC___05F_d1608)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_111_610_THEN_IF_rg_input_BI_ETC___05F_d1815
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_112_606_THEN_IF_rg_input_BIT_1_ETC___05F_d1608)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_113_602_THEN_IF_rg_input_BIT_1_ETC___05F_d1604);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_115_594_THEN_IF_rg_input_BI_ETC___05F_d1819 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_115_594_THEN_IF_rg_input_BIT_1_ETC___05F_d1596)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_114_598_THEN_IF_rg_input_BIT_1_ETC___05F_d1600)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_113_602_THEN_IF_rg_input_BI_ETC___05F_d1817
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_114_598_THEN_IF_rg_input_BIT_1_ETC___05F_d1600)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_115_594_THEN_IF_rg_input_BIT_1_ETC___05F_d1596);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_117_586_THEN_IF_rg_input_BI_ETC___05F_d1821 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_117_586_THEN_IF_rg_input_BIT_1_ETC___05F_d1588)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_116_590_THEN_IF_rg_input_BIT_1_ETC___05F_d1592)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_115_594_THEN_IF_rg_input_BI_ETC___05F_d1819
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_116_590_THEN_IF_rg_input_BIT_1_ETC___05F_d1592)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_117_586_THEN_IF_rg_input_BIT_1_ETC___05F_d1588);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_119_578_THEN_IF_rg_input_BI_ETC___05F_d1823 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_119_578_THEN_IF_rg_input_BIT_1_ETC___05F_d1580)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_118_582_THEN_IF_rg_input_BIT_1_ETC___05F_d1584)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_117_586_THEN_IF_rg_input_BI_ETC___05F_d1821
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_118_582_THEN_IF_rg_input_BIT_1_ETC___05F_d1584)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_119_578_THEN_IF_rg_input_BIT_1_ETC___05F_d1580);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_121_570_THEN_IF_rg_input_BI_ETC___05F_d1825 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_121_570_THEN_IF_rg_input_BIT_1_ETC___05F_d1572)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_120_574_THEN_IF_rg_input_BIT_1_ETC___05F_d1576)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_119_578_THEN_IF_rg_input_BI_ETC___05F_d1823
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_120_574_THEN_IF_rg_input_BIT_1_ETC___05F_d1576)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_121_570_THEN_IF_rg_input_BIT_1_ETC___05F_d1572);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_123_562_THEN_IF_rg_input_BI_ETC___05F_d1827 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_123_562_THEN_IF_rg_input_BIT_1_ETC___05F_d1564)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_122_566_THEN_IF_rg_input_BIT_1_ETC___05F_d1568)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_121_570_THEN_IF_rg_input_BI_ETC___05F_d1825
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_122_566_THEN_IF_rg_input_BIT_1_ETC___05F_d1568)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_123_562_THEN_IF_rg_input_BIT_1_ETC___05F_d1564);
    vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_125_554_THEN_IF_rg_input_BI_ETC___05F_d1829 
        = ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_125_554_THEN_IF_rg_input_BIT_1_ETC___05F_d1556)
            ? ((0ULL == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_124_558_THEN_IF_rg_input_BIT_1_ETC___05F_d1560)
                ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_123_562_THEN_IF_rg_input_BI_ETC___05F_d1827
                : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_124_558_THEN_IF_rg_input_BIT_1_ETC___05F_d1560)
            : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_125_554_THEN_IF_rg_input_BIT_1_ETC___05F_d1556);
    vlTOPp->mkbbox__DOT__y___05Fh19692 = ((0x80000000U 
                                           & vlTOPp->mkbbox__DOT__rg_input[3U])
                                           ? vlTOPp->mkbbox__DOT__IF_rg_input_BIT_127_046_THEN_64_ELSE_0___05F_d1549
                                           : ((0ULL 
                                               == vlTOPp->mkbbox__DOT__IF_rg_input_BIT_126_550_THEN_IF_rg_input_BIT_1_ETC___05F_d1552)
                                               ? vlTOPp->mkbbox__DOT__IF_IF_rg_input_BIT_125_554_THEN_IF_rg_input_BI_ETC___05F_d1829
                                               : vlTOPp->mkbbox__DOT__IF_rg_input_BIT_126_550_THEN_IF_rg_input_BIT_1_ETC___05F_d1552));
    vlTOPp->mkbbox__DOT__result___05Fh3755 = (0x40ULL 
                                              - vlTOPp->mkbbox__DOT__y___05Fh19692);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b101_1_AND_rg___05FETC___05F_d2139 
        = ((((5U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                              >> 0x19U))) & (2U == 
                                             (7U & 
                                              (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                               >> 0xcU)))) 
            & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh3753
            : ((((0x600U == (0xfffU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                       >> 0x14U))) 
                 & (1U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0xcU)))) & (0x13U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh3755
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_148_3_EQ_0b11000000010_ETC___05F_d2137));
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b101_1_AND_rg___05FETC___05F_d2141 
        = ((((5U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                              >> 0x19U))) & (1U == 
                                             (7U & 
                                              (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                               >> 0xcU)))) 
            & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh3749
            : ((((5U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                  >> 0x19U))) & (3U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                     >> 0xcU)))) 
                & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh3751
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b101_1_AND_rg___05FETC___05F_d2139));
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b110100_7_AND___05FETC___05F_d2143 
        = ((((0x34U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0x19U))) & (1U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    >> 0xcU)))) 
            & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh3745
            : ((((0x14U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                     >> 0x19U))) & 
                 (1U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                               >> 0xcU)))) & (0x33U 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh3747
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b101_1_AND_rg___05FETC___05F_d2141));
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b100100_2_AND___05FETC___05F_d2145 
        = ((((0x24U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0x19U))) & (1U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    >> 0xcU)))) 
            & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh3741
            : ((((0x24U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                     >> 0x19U))) & 
                 (5U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                               >> 0xcU)))) & (0x33U 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh3743
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b110100_7_AND___05FETC___05F_d2143));
    vlTOPp->mkbbox__DOT__result___05Fh162 = ((((0x20U 
                                                == 
                                                (0x7fU 
                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    >> 0x19U))) 
                                               & (7U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                      >> 0xcU)))) 
                                              & (0x33U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))
                                              ? vlTOPp->mkbbox__DOT__result___05Fh3739
                                              : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b100100_2_AND___05FETC___05F_d2145);
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_154_0_EQ_0b10_3_AND_rg_ETC___05F_d2148 
        = ((((2U == (0x3fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                              >> 0x1aU))) & (1U == 
                                             (7U & 
                                              (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                               >> 0xcU)))) 
            & (0x1bU == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh1637
            : ((((0x80U == (0xfffU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                      >> 0x14U))) & 
                 (4U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                               >> 0xcU)))) & (0x3bU 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh1639
                : vlTOPp->mkbbox__DOT__result___05Fh162));
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b10000_3_AND_r_ETC___05F_d2150 
        = ((((0x10U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0x19U))) & (4U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    >> 0xcU)))) 
            & (0x3bU == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh1633
            : ((((0x10U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                     >> 0x19U))) & 
                 (6U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                               >> 0xcU)))) & (0x3bU 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh1635
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_154_0_EQ_0b10_3_AND_rg_ETC___05F_d2148));
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b110000_4_AND___05FETC___05F_d2152 
        = ((((0x30U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0x19U))) & (5U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    >> 0xcU)))) 
            & (0x3bU == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh1629
            : ((((0x10U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                     >> 0x19U))) & 
                 (2U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                               >> 0xcU)))) & (0x3bU 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh1631
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b10000_3_AND_r_ETC___05F_d2150));
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_154_0_EQ_0b11000_7_AND_ETC___05F_d2154 
        = ((((0x18U == (0x3fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0x1aU))) & (5U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    >> 0xcU)))) 
            & (0x13U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh1625
            : ((((0x30U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                     >> 0x19U))) & 
                 (5U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                               >> 0xcU)))) & (0x1bU 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh1627
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_153_EQ_0b110000_4_AND___05FETC___05F_d2152));
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_148_3_EQ_0b11010111000_ETC___05F_d2156 
        = ((((0x6b8U == (0xfffU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                   >> 0x14U))) & (5U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                      >> 0xcU)))) 
            & (0x13U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh1621
            : ((((0x30U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                     >> 0x19U))) & 
                 (1U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                               >> 0xcU)))) & (0x3bU 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh1623
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_154_0_EQ_0b11000_7_AND_ETC___05F_d2154));
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_148_3_EQ_0b11000000010_ETC___05F_d2158 
        = ((((0x602U == (0xfffU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                   >> 0x14U))) & (1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                      >> 0xcU)))) 
            & (0x1bU == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh1617
            : ((((0x601U == (0xfffU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                       >> 0x14U))) 
                 & (1U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0xcU)))) & (0x1bU 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh1619
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_148_3_EQ_0b11010111000_ETC___05F_d2156));
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_154_0_EQ_0b1010_1_AND___05FETC___05F_d2160 
        = ((((0xaU == (0x3fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                >> 0x1aU))) & (1U == 
                                               (7U 
                                                & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                   >> 0xcU)))) 
            & (0x13U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh1613
            : ((((0x600U == (0xfffU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                       >> 0x14U))) 
                 & (1U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0xcU)))) & (0x1bU 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh1615
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_148_3_EQ_0b11000000010_ETC___05F_d2158));
    vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_154_0_EQ_0b10010_1_AND_ETC___05F_d2162 
        = ((((0x12U == (0x3fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                 >> 0x1aU))) & (5U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    >> 0xcU)))) 
            & (0x13U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
            ? vlTOPp->mkbbox__DOT__result___05Fh1609
            : ((((0x1aU == (0x3fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                     >> 0x1aU))) & 
                 (1U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                               >> 0xcU)))) & (0x13U 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))
                ? vlTOPp->mkbbox__DOT__result___05Fh1611
                : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_154_0_EQ_0b1010_1_AND___05FETC___05F_d2160));
    vlTOPp->mkbbox__DOT__new_value_data___05Fh166 = 
        ((((4U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                            >> 0x19U))) & (0U == (7U 
                                                  & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                     >> 0xcU)))) 
          & (0x3bU == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
          ? vlTOPp->mkbbox__DOT__result___05Fh1605 : 
         ((((0x12U == (0x3fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                >> 0x1aU))) & (1U == 
                                               (7U 
                                                & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                   >> 0xcU)))) 
           & (0x13U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))
           ? vlTOPp->mkbbox__DOT__result___05Fh1607
           : vlTOPp->mkbbox__DOT__IF_rg_input_BITS_159_TO_154_0_EQ_0b10010_1_AND_ETC___05F_d2162));
    __Vtemp576[2U] = ((((((((((((((((((((((((((((((
                                                   (((((((((((((((4U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                      >> 0x19U))) 
                                                                 & (0U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                        >> 0xcU)))) 
                                                                & (0x3bU 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlTOPp->mkbbox__DOT__rg_input[4U]))) 
                                                               | (((0x12U 
                                                                    == 
                                                                    (0x3fU 
                                                                     & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                        >> 0x1aU))) 
                                                                   & (1U 
                                                                      == 
                                                                      (7U 
                                                                       & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                          >> 0xcU)))) 
                                                                  & (0x13U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                              | (((0x12U 
                                                                   == 
                                                                   (0x3fU 
                                                                    & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                       >> 0x1aU))) 
                                                                  & (5U 
                                                                     == 
                                                                     (7U 
                                                                      & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                         >> 0xcU)))) 
                                                                 & (0x13U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                             | (((0x1aU 
                                                                  == 
                                                                  (0x3fU 
                                                                   & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                      >> 0x1aU))) 
                                                                 & (1U 
                                                                    == 
                                                                    (7U 
                                                                     & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                        >> 0xcU)))) 
                                                                & (0x13U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                            | (((0xaU 
                                                                 == 
                                                                 (0x3fU 
                                                                  & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                     >> 0x1aU))) 
                                                                & (1U 
                                                                   == 
                                                                   (7U 
                                                                    & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                       >> 0xcU)))) 
                                                               & (0x13U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                           | (((0x600U 
                                                                == 
                                                                (0xfffU 
                                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                    >> 0x14U))) 
                                                               & (1U 
                                                                  == 
                                                                  (7U 
                                                                   & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                      >> 0xcU)))) 
                                                              & (0x1bU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                          | (((0x602U 
                                                               == 
                                                               (0xfffU 
                                                                & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                   >> 0x14U))) 
                                                              & (1U 
                                                                 == 
                                                                 (7U 
                                                                  & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                     >> 0xcU)))) 
                                                             & (0x1bU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                         | (((0x601U 
                                                              == 
                                                              (0xfffU 
                                                               & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                  >> 0x14U))) 
                                                             & (1U 
                                                                == 
                                                                (7U 
                                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                    >> 0xcU)))) 
                                                            & (0x1bU 
                                                               == 
                                                               (0x7fU 
                                                                & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                        | (((0x6b8U 
                                                             == 
                                                             (0xfffU 
                                                              & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                 >> 0x14U))) 
                                                            & (5U 
                                                               == 
                                                               (7U 
                                                                & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                   >> 0xcU)))) 
                                                           & (0x13U 
                                                              == 
                                                              (0x7fU 
                                                               & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                       | (((0x30U 
                                                            == 
                                                            (0x7fU 
                                                             & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                >> 0x19U))) 
                                                           & (1U 
                                                              == 
                                                              (7U 
                                                               & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                  >> 0xcU)))) 
                                                          & (0x3bU 
                                                             == 
                                                             (0x7fU 
                                                              & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                      | (((0x18U 
                                                           == 
                                                           (0x3fU 
                                                            & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                               >> 0x1aU))) 
                                                          & (5U 
                                                             == 
                                                             (7U 
                                                              & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                 >> 0xcU)))) 
                                                         & (0x13U 
                                                            == 
                                                            (0x7fU 
                                                             & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                     | (((0x30U 
                                                          == 
                                                          (0x7fU 
                                                           & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              >> 0x19U))) 
                                                         & (5U 
                                                            == 
                                                            (7U 
                                                             & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                                >> 0xcU)))) 
                                                        & (0x1bU 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                    | (((0x30U 
                                                         == 
                                                         (0x7fU 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                             >> 0x19U))) 
                                                        & (5U 
                                                           == 
                                                           (7U 
                                                            & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                               >> 0xcU)))) 
                                                       & (0x3bU 
                                                          == 
                                                          (0x7fU 
                                                           & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                   | (((0x10U 
                                                        == 
                                                        (0x7fU 
                                                         & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                            >> 0x19U))) 
                                                       & (2U 
                                                          == 
                                                          (7U 
                                                           & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                              >> 0xcU)))) 
                                                      & (0x3bU 
                                                         == 
                                                         (0x7fU 
                                                          & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                  | (((0x10U 
                                                       == 
                                                       (0x7fU 
                                                        & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                           >> 0x19U))) 
                                                      & (4U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                             >> 0xcU)))) 
                                                     & (0x3bU 
                                                        == 
                                                        (0x7fU 
                                                         & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                 | (((0x10U 
                                                      == 
                                                      (0x7fU 
                                                       & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                          >> 0x19U))) 
                                                     & (6U 
                                                        == 
                                                        (7U 
                                                         & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                            >> 0xcU)))) 
                                                    & (0x3bU 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                                | (((2U 
                                                     == 
                                                     (0x3fU 
                                                      & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                         >> 0x1aU))) 
                                                    & (1U 
                                                       == 
                                                       (7U 
                                                        & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                           >> 0xcU)))) 
                                                   & (0x1bU 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                               | (((0x80U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                        >> 0x14U))) 
                                                   & (4U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                          >> 0xcU)))) 
                                                  & (0x3bU 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                              | (((0x20U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                       >> 0x19U))) 
                                                  & (7U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                         >> 0xcU)))) 
                                                 & (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                             | (((0x24U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                      >> 0x19U))) 
                                                 & (1U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                        >> 0xcU)))) 
                                                & (0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                            | (((0x24U 
                                                 == 
                                                 (0x7fU 
                                                  & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                     >> 0x19U))) 
                                                & (5U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                       >> 0xcU)))) 
                                               & (0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                           | (((0x34U 
                                                == 
                                                (0x7fU 
                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    >> 0x19U))) 
                                               & (1U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                      >> 0xcU)))) 
                                              & (0x33U 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                          | (((0x14U 
                                               == (0x7fU 
                                                   & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                      >> 0x19U))) 
                                              & (1U 
                                                 == 
                                                 (7U 
                                                  & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                     >> 0xcU)))) 
                                             & (0x33U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                         | (((5U == 
                                              (0x7fU 
                                               & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                  >> 0x19U))) 
                                             & (1U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    >> 0xcU)))) 
                                            & (0x33U 
                                               == (0x7fU 
                                                   & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                        | (((5U == 
                                             (0x7fU 
                                              & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                 >> 0x19U))) 
                                            & (3U == 
                                               (7U 
                                                & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                   >> 0xcU)))) 
                                           & (0x33U 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                       | (((5U == (0x7fU 
                                                   & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                      >> 0x19U))) 
                                           & (2U == 
                                              (7U & 
                                               (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                >> 0xcU)))) 
                                          & (0x33U 
                                             == (0x7fU 
                                                 & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                      | (((0x600U == 
                                           (0xfffU 
                                            & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                               >> 0x14U))) 
                                          & (1U == 
                                             (7U & 
                                              (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                               >> 0xcU)))) 
                                         & (0x13U == 
                                            (0x7fU 
                                             & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                     | (((0x602U == 
                                          (0xfffU & 
                                           (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                            >> 0x14U))) 
                                         & (1U == (7U 
                                                   & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                      >> 0xcU)))) 
                                        & (0x13U == 
                                           (0x7fU & 
                                            vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                    | (((0x601U == 
                                         (0xfffU & 
                                          (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                           >> 0x14U))) 
                                        & (1U == (7U 
                                                  & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                     >> 0xcU)))) 
                                       & (0x13U == 
                                          (0x7fU & 
                                           vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                   | (((5U == (0x7fU 
                                               & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                  >> 0x19U))) 
                                       & (6U == (7U 
                                                 & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                    >> 0xcU)))) 
                                      & (0x33U == (0x7fU 
                                                   & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                  | (((5U == (0x7fU 
                                              & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                 >> 0x19U))) 
                                      & (7U == (7U 
                                                & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                   >> 0xcU)))) 
                                     & (0x33U == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                 | (((5U == (0x7fU 
                                             & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                >> 0x19U))) 
                                     & (4U == (7U & 
                                               (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                >> 0xcU)))) 
                                    & (0x33U == (0x7fU 
                                                 & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                | (((5U == (0x7fU & 
                                            (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                             >> 0x19U))) 
                                    & (5U == (7U & 
                                              (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                               >> 0xcU)))) 
                                   & (0x33U == (0x7fU 
                                                & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                               | (((0x287U == (0xfffU 
                                               & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                  >> 0x14U))) 
                                   & (5U == (7U & (
                                                   vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                   >> 0xcU)))) 
                                  & (0x13U == (0x7fU 
                                               & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                              | (((0x20U == (0x7fU 
                                             & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                >> 0x19U))) 
                                  & (6U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                  >> 0xcU)))) 
                                 & (0x33U == (0x7fU 
                                              & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                             | (((0x30U == (0x7fU & 
                                            (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                             >> 0x19U))) 
                                 & (1U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                 >> 0xcU)))) 
                                & (0x33U == (0x7fU 
                                             & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                            | (((0x30U == (0x7fU & 
                                           (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                            >> 0x19U))) 
                                & (5U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                >> 0xcU)))) 
                               & (0x33U == (0x7fU & 
                                            vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                           | (((0x604U == (0xfffU & 
                                           (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                            >> 0x14U))) 
                               & (1U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                               >> 0xcU)))) 
                              & (0x13U == (0x7fU & 
                                           vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                          | (((0x605U == (0xfffU & 
                                          (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                           >> 0x14U))) 
                              & (1U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                              >> 0xcU)))) 
                             & (0x13U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                         | (((0x10U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                 >> 0x19U))) 
                             & (2U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                             >> 0xcU)))) 
                            & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                        | (((0x10U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                >> 0x19U))) 
                            & (4U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                            >> 0xcU)))) 
                           & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                       | (((0x10U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                               >> 0x19U))) 
                           & (6U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                           >> 0xcU)))) 
                          & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                      | (((0x20U == (0x7fU & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                              >> 0x19U))) 
                          & (4U == (7U & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                          >> 0xcU)))) 
                         & (0x33U == (0x7fU & vlTOPp->mkbbox__DOT__rg_input[4U]))));
    vlTOPp->mkbbox__DOT__wr_output_wget[0U] = (IData)(vlTOPp->mkbbox__DOT__new_value_data___05Fh166);
    vlTOPp->mkbbox__DOT__wr_output_wget[1U] = (IData)(
                                                      (vlTOPp->mkbbox__DOT__new_value_data___05Fh166 
                                                       >> 0x20U));
    vlTOPp->mkbbox__DOT__wr_output_wget[2U] = __Vtemp576[2U];
    vlTOPp->mkbbox__DOT__bbox_out[0U] = vlTOPp->mkbbox__DOT__wr_output_wget[0U];
    vlTOPp->mkbbox__DOT__bbox_out[1U] = vlTOPp->mkbbox__DOT__wr_output_wget[1U];
    vlTOPp->mkbbox__DOT__bbox_out[2U] = vlTOPp->mkbbox__DOT__wr_output_wget[2U];
    vlTOPp->bbox_out[0U] = vlTOPp->mkbbox__DOT__bbox_out[0U];
    vlTOPp->bbox_out[1U] = vlTOPp->mkbbox__DOT__bbox_out[1U];
    vlTOPp->bbox_out[2U] = vlTOPp->mkbbox__DOT__bbox_out[2U];
}
