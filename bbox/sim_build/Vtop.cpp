// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

void Vtop::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop::eval\n"); );
    Vtop__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/sai/bsc/examples/bbox/verilog/mkbbox.v", 33, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop::_eval_initial_loop(Vtop__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/sai/bsc/examples/bbox/verilog/mkbbox.v", 33, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vtop::_combo__TOP__2(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_combo__TOP__2\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mkbbox__DOT__CLK = vlTOPp->CLK;
    vlTOPp->mkbbox__DOT__RST_N = vlTOPp->RST_N;
    vlTOPp->mkbbox__DOT__instr = vlTOPp->instr;
    vlTOPp->mkbbox__DOT__rs1 = vlTOPp->rs1;
    vlTOPp->mkbbox__DOT__rs2 = vlTOPp->rs2;
}

VL_INLINE_OPT void Vtop::_sequent__TOP__4(Vtop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop::_sequent__TOP__4\n"); );
    Vtop* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp577[4];
    WData/*127:0*/ __Vtemp578[4];
    WData/*127:0*/ __Vtemp579[4];
    WData/*127:0*/ __Vtemp580[4];
    WData/*127:0*/ __Vtemp581[4];
    WData/*127:0*/ __Vtemp582[4];
    WData/*127:0*/ __Vtemp583[4];
    WData/*127:0*/ __Vtemp584[4];
    WData/*127:0*/ __Vtemp585[4];
    WData/*127:0*/ __Vtemp586[4];
    WData/*127:0*/ __Vtemp587[4];
    WData/*127:0*/ __Vtemp588[4];
    WData/*127:0*/ __Vtemp589[4];
    WData/*127:0*/ __Vtemp590[4];
    WData/*127:0*/ __Vtemp591[4];
    WData/*127:0*/ __Vtemp592[4];
    WData/*127:0*/ __Vtemp593[4];
    WData/*127:0*/ __Vtemp594[4];
    WData/*127:0*/ __Vtemp595[4];
    WData/*127:0*/ __Vtemp596[4];
    WData/*127:0*/ __Vtemp597[4];
    WData/*127:0*/ __Vtemp598[4];
    WData/*127:0*/ __Vtemp599[4];
    WData/*127:0*/ __Vtemp600[4];
    WData/*127:0*/ __Vtemp601[4];
    WData/*127:0*/ __Vtemp602[4];
    WData/*127:0*/ __Vtemp603[4];
    WData/*127:0*/ __Vtemp604[4];
    WData/*127:0*/ __Vtemp605[4];
    WData/*127:0*/ __Vtemp606[4];
    WData/*127:0*/ __Vtemp607[4];
    WData/*127:0*/ __Vtemp608[4];
    WData/*127:0*/ __Vtemp609[4];
    WData/*127:0*/ __Vtemp610[4];
    WData/*127:0*/ __Vtemp611[4];
    WData/*127:0*/ __Vtemp612[4];
    WData/*127:0*/ __Vtemp613[4];
    WData/*127:0*/ __Vtemp614[4];
    WData/*127:0*/ __Vtemp615[4];
    WData/*127:0*/ __Vtemp616[4];
    WData/*127:0*/ __Vtemp617[4];
    WData/*127:0*/ __Vtemp618[4];
    WData/*127:0*/ __Vtemp619[4];
    WData/*127:0*/ __Vtemp620[4];
    WData/*127:0*/ __Vtemp621[4];
    WData/*127:0*/ __Vtemp622[4];
    WData/*127:0*/ __Vtemp623[4];
    WData/*127:0*/ __Vtemp624[4];
    WData/*127:0*/ __Vtemp625[4];
    WData/*127:0*/ __Vtemp626[4];
    WData/*127:0*/ __Vtemp627[4];
    WData/*127:0*/ __Vtemp628[4];
    WData/*127:0*/ __Vtemp629[4];
    WData/*127:0*/ __Vtemp630[4];
    WData/*127:0*/ __Vtemp631[4];
    WData/*127:0*/ __Vtemp632[4];
    WData/*127:0*/ __Vtemp633[4];
    WData/*127:0*/ __Vtemp634[4];
    WData/*127:0*/ __Vtemp635[4];
    WData/*127:0*/ __Vtemp636[4];
    WData/*127:0*/ __Vtemp637[4];
    WData/*127:0*/ __Vtemp638[4];
    WData/*127:0*/ __Vtemp639[4];
    WData/*127:0*/ __Vtemp640[4];
    WData/*127:0*/ __Vtemp641[4];
    WData/*127:0*/ __Vtemp642[4];
    WData/*127:0*/ __Vtemp643[4];
    WData/*127:0*/ __Vtemp644[4];
    WData/*127:0*/ __Vtemp645[4];
    WData/*127:0*/ __Vtemp646[4];
    WData/*127:0*/ __Vtemp647[4];
    WData/*127:0*/ __Vtemp648[4];
    WData/*127:0*/ __Vtemp649[4];
    WData/*127:0*/ __Vtemp650[4];
    WData/*127:0*/ __Vtemp651[4];
    WData/*127:0*/ __Vtemp652[4];
    WData/*127:0*/ __Vtemp653[4];
    WData/*127:0*/ __Vtemp654[4];
    WData/*127:0*/ __Vtemp655[4];
    WData/*127:0*/ __Vtemp656[4];
    WData/*127:0*/ __Vtemp657[4];
    WData/*127:0*/ __Vtemp658[4];
    WData/*127:0*/ __Vtemp659[4];
    WData/*127:0*/ __Vtemp660[4];
    WData/*127:0*/ __Vtemp661[4];
    WData/*127:0*/ __Vtemp662[4];
    WData/*127:0*/ __Vtemp663[4];
    WData/*127:0*/ __Vtemp664[4];
    WData/*127:0*/ __Vtemp665[4];
    WData/*127:0*/ __Vtemp666[4];
    WData/*127:0*/ __Vtemp667[4];
    WData/*127:0*/ __Vtemp668[4];
    WData/*127:0*/ __Vtemp669[4];
    WData/*127:0*/ __Vtemp670[4];
    WData/*127:0*/ __Vtemp671[4];
    WData/*127:0*/ __Vtemp672[4];
    WData/*127:0*/ __Vtemp673[4];
    WData/*127:0*/ __Vtemp674[4];
    WData/*127:0*/ __Vtemp675[4];
    WData/*127:0*/ __Vtemp676[4];
    WData/*127:0*/ __Vtemp677[4];
    WData/*127:0*/ __Vtemp678[4];
    WData/*127:0*/ __Vtemp679[4];
    WData/*127:0*/ __Vtemp680[4];
    WData/*127:0*/ __Vtemp681[4];
    WData/*127:0*/ __Vtemp682[4];
    WData/*127:0*/ __Vtemp683[4];
    WData/*127:0*/ __Vtemp684[4];
    WData/*127:0*/ __Vtemp685[4];
    WData/*127:0*/ __Vtemp686[4];
    WData/*127:0*/ __Vtemp687[4];
    WData/*127:0*/ __Vtemp688[4];
    WData/*127:0*/ __Vtemp689[4];
    WData/*127:0*/ __Vtemp690[4];
    WData/*127:0*/ __Vtemp691[4];
    WData/*127:0*/ __Vtemp692[4];
    WData/*127:0*/ __Vtemp693[4];
    WData/*127:0*/ __Vtemp694[4];
    WData/*127:0*/ __Vtemp695[4];
    WData/*127:0*/ __Vtemp696[4];
    WData/*127:0*/ __Vtemp697[4];
    WData/*127:0*/ __Vtemp698[4];
    WData/*127:0*/ __Vtemp699[4];
    WData/*127:0*/ __Vtemp700[4];
    WData/*127:0*/ __Vtemp701[4];
    WData/*127:0*/ __Vtemp702[4];
    WData/*127:0*/ __Vtemp703[4];
    WData/*127:0*/ __Vtemp704[4];
    WData/*127:0*/ __Vtemp705[4];
    WData/*127:0*/ __Vtemp706[4];
    WData/*127:0*/ __Vtemp707[4];
    WData/*127:0*/ __Vtemp708[4];
    WData/*127:0*/ __Vtemp709[4];
    WData/*127:0*/ __Vtemp710[4];
    WData/*127:0*/ __Vtemp711[4];
    WData/*127:0*/ __Vtemp712[4];
    WData/*127:0*/ __Vtemp713[4];
    WData/*127:0*/ __Vtemp714[4];
    WData/*127:0*/ __Vtemp715[4];
    WData/*127:0*/ __Vtemp716[4];
    WData/*127:0*/ __Vtemp717[4];
    WData/*127:0*/ __Vtemp718[4];
    WData/*127:0*/ __Vtemp719[4];
    WData/*127:0*/ __Vtemp720[4];
    WData/*127:0*/ __Vtemp721[4];
    WData/*127:0*/ __Vtemp722[4];
    WData/*127:0*/ __Vtemp723[4];
    WData/*127:0*/ __Vtemp724[4];
    WData/*127:0*/ __Vtemp725[4];
    WData/*127:0*/ __Vtemp726[4];
    WData/*127:0*/ __Vtemp727[4];
    WData/*127:0*/ __Vtemp728[4];
    WData/*127:0*/ __Vtemp729[4];
    WData/*127:0*/ __Vtemp730[4];
    WData/*127:0*/ __Vtemp731[4];
    WData/*127:0*/ __Vtemp732[4];
    WData/*127:0*/ __Vtemp733[4];
    WData/*127:0*/ __Vtemp734[4];
    WData/*127:0*/ __Vtemp735[4];
    WData/*127:0*/ __Vtemp736[4];
    WData/*127:0*/ __Vtemp737[4];
    WData/*127:0*/ __Vtemp738[4];
    WData/*127:0*/ __Vtemp739[4];
    WData/*127:0*/ __Vtemp740[4];
    WData/*127:0*/ __Vtemp741[4];
    WData/*127:0*/ __Vtemp742[4];
    WData/*127:0*/ __Vtemp743[4];
    WData/*127:0*/ __Vtemp744[4];
    WData/*127:0*/ __Vtemp745[4];
    WData/*127:0*/ __Vtemp746[4];
    WData/*127:0*/ __Vtemp747[4];
    WData/*127:0*/ __Vtemp748[4];
    WData/*127:0*/ __Vtemp749[4];
    WData/*127:0*/ __Vtemp750[4];
    WData/*127:0*/ __Vtemp751[4];
    WData/*127:0*/ __Vtemp752[4];
    WData/*127:0*/ __Vtemp753[4];
    WData/*127:0*/ __Vtemp754[4];
    WData/*127:0*/ __Vtemp755[4];
    WData/*127:0*/ __Vtemp756[4];
    WData/*127:0*/ __Vtemp757[4];
    WData/*127:0*/ __Vtemp758[4];
    WData/*127:0*/ __Vtemp759[4];
    WData/*127:0*/ __Vtemp760[4];
    WData/*127:0*/ __Vtemp761[4];
    WData/*127:0*/ __Vtemp762[4];
    WData/*127:0*/ __Vtemp763[4];
    WData/*127:0*/ __Vtemp764[4];
    WData/*127:0*/ __Vtemp765[4];
    WData/*127:0*/ __Vtemp766[4];
    WData/*127:0*/ __Vtemp767[4];
    WData/*127:0*/ __Vtemp768[4];
    WData/*127:0*/ __Vtemp769[4];
    WData/*127:0*/ __Vtemp770[4];
    WData/*127:0*/ __Vtemp771[4];
    WData/*127:0*/ __Vtemp772[4];
    WData/*127:0*/ __Vtemp773[4];
    WData/*127:0*/ __Vtemp774[4];
    WData/*127:0*/ __Vtemp775[4];
    WData/*127:0*/ __Vtemp776[4];
    WData/*127:0*/ __Vtemp777[4];
    WData/*127:0*/ __Vtemp778[4];
    WData/*127:0*/ __Vtemp779[4];
    WData/*127:0*/ __Vtemp780[4];
    WData/*127:0*/ __Vtemp781[4];
    WData/*127:0*/ __Vtemp782[4];
    WData/*127:0*/ __Vtemp783[4];
    WData/*127:0*/ __Vtemp784[4];
    WData/*127:0*/ __Vtemp785[4];
    WData/*127:0*/ __Vtemp786[4];
    WData/*127:0*/ __Vtemp787[4];
    WData/*127:0*/ __Vtemp788[4];
    WData/*127:0*/ __Vtemp789[4];
    WData/*127:0*/ __Vtemp790[4];
    WData/*127:0*/ __Vtemp791[4];
    WData/*127:0*/ __Vtemp792[4];
    WData/*127:0*/ __Vtemp793[4];
    WData/*127:0*/ __Vtemp794[4];
    WData/*127:0*/ __Vtemp795[4];
    WData/*127:0*/ __Vtemp796[4];
    WData/*127:0*/ __Vtemp797[4];
    WData/*127:0*/ __Vtemp798[4];
    WData/*127:0*/ __Vtemp799[4];
    WData/*127:0*/ __Vtemp800[4];
    WData/*127:0*/ __Vtemp801[4];
    WData/*127:0*/ __Vtemp802[4];
    WData/*127:0*/ __Vtemp803[4];
    WData/*127:0*/ __Vtemp804[4];
    WData/*127:0*/ __Vtemp805[4];
    WData/*127:0*/ __Vtemp806[4];
    WData/*127:0*/ __Vtemp807[4];
    WData/*127:0*/ __Vtemp808[4];
    WData/*127:0*/ __Vtemp809[4];
    WData/*127:0*/ __Vtemp810[4];
    WData/*127:0*/ __Vtemp811[4];
    WData/*127:0*/ __Vtemp812[4];
    WData/*127:0*/ __Vtemp813[4];
    WData/*127:0*/ __Vtemp814[4];
    WData/*127:0*/ __Vtemp815[4];
    WData/*127:0*/ __Vtemp816[4];
    WData/*127:0*/ __Vtemp817[4];
    WData/*127:0*/ __Vtemp818[4];
    WData/*127:0*/ __Vtemp819[4];
    WData/*127:0*/ __Vtemp820[4];
    WData/*127:0*/ __Vtemp821[4];
    WData/*127:0*/ __Vtemp822[4];
    WData/*127:0*/ __Vtemp823[4];
    WData/*127:0*/ __Vtemp824[4];
    WData/*127:0*/ __Vtemp825[4];
    WData/*127:0*/ __Vtemp826[4];
    WData/*127:0*/ __Vtemp827[4];
    WData/*127:0*/ __Vtemp828[4];
    WData/*127:0*/ __Vtemp829[4];
    WData/*127:0*/ __Vtemp830[4];
    WData/*127:0*/ __Vtemp831[4];
    WData/*127:0*/ __Vtemp832[4];
    WData/*127:0*/ __Vtemp833[4];
    WData/*127:0*/ __Vtemp834[4];
    WData/*127:0*/ __Vtemp835[4];
    WData/*127:0*/ __Vtemp836[4];
    WData/*127:0*/ __Vtemp837[4];
    WData/*127:0*/ __Vtemp838[4];
    WData/*127:0*/ __Vtemp839[4];
    WData/*127:0*/ __Vtemp840[4];
    WData/*127:0*/ __Vtemp841[4];
    WData/*127:0*/ __Vtemp842[4];
    WData/*127:0*/ __Vtemp843[4];
    WData/*127:0*/ __Vtemp844[4];
    WData/*127:0*/ __Vtemp845[4];
    WData/*127:0*/ __Vtemp846[4];
    WData/*127:0*/ __Vtemp847[4];
    WData/*127:0*/ __Vtemp848[4];
    WData/*127:0*/ __Vtemp849[4];
    WData/*127:0*/ __Vtemp850[4];
    WData/*127:0*/ __Vtemp851[4];
    WData/*127:0*/ __Vtemp852[4];
    WData/*127:0*/ __Vtemp853[4];
    WData/*127:0*/ __Vtemp854[4];
    WData/*127:0*/ __Vtemp855[4];
    WData/*127:0*/ __Vtemp856[4];
    WData/*127:0*/ __Vtemp857[4];
    WData/*127:0*/ __Vtemp858[4];
    WData/*127:0*/ __Vtemp859[4];
    WData/*127:0*/ __Vtemp860[4];
    WData/*127:0*/ __Vtemp861[4];
    WData/*127:0*/ __Vtemp862[4];
    WData/*127:0*/ __Vtemp863[4];
    WData/*127:0*/ __Vtemp864[4];
    WData/*127:0*/ __Vtemp865[4];
    WData/*127:0*/ __Vtemp866[4];
    WData/*127:0*/ __Vtemp867[4];
    WData/*127:0*/ __Vtemp868[4];
    WData/*127:0*/ __Vtemp869[4];
    WData/*127:0*/ __Vtemp870[4];
    WData/*127:0*/ __Vtemp871[4];
    WData/*127:0*/ __Vtemp872[4];
    WData/*127:0*/ __Vtemp873[4];
    WData/*127:0*/ __Vtemp874[4];
    WData/*127:0*/ __Vtemp875[4];
    WData/*127:0*/ __Vtemp876[4];
    WData/*127:0*/ __Vtemp877[4];
    WData/*127:0*/ __Vtemp878[4];
    WData/*127:0*/ __Vtemp879[4];
    WData/*127:0*/ __Vtemp880[4];
    WData/*127:0*/ __Vtemp881[4];
    WData/*127:0*/ __Vtemp882[4];
    WData/*127:0*/ __Vtemp883[4];
    WData/*127:0*/ __Vtemp884[4];
    WData/*127:0*/ __Vtemp885[4];
    WData/*127:0*/ __Vtemp886[4];
    WData/*127:0*/ __Vtemp887[4];
    WData/*127:0*/ __Vtemp888[4];
    WData/*127:0*/ __Vtemp889[4];
    WData/*127:0*/ __Vtemp890[4];
    WData/*127:0*/ __Vtemp891[4];
    WData/*127:0*/ __Vtemp892[4];
    WData/*127:0*/ __Vtemp893[4];
    WData/*127:0*/ __Vtemp894[4];
    WData/*127:0*/ __Vtemp895[4];
    WData/*127:0*/ __Vtemp896[4];
    WData/*127:0*/ __Vtemp897[4];
    WData/*127:0*/ __Vtemp898[4];
    WData/*127:0*/ __Vtemp899[4];
    WData/*127:0*/ __Vtemp900[4];
    WData/*127:0*/ __Vtemp901[4];
    WData/*127:0*/ __Vtemp902[4];
    WData/*127:0*/ __Vtemp903[4];
    WData/*127:0*/ __Vtemp904[4];
    WData/*127:0*/ __Vtemp905[4];
    WData/*127:0*/ __Vtemp906[4];
    WData/*127:0*/ __Vtemp907[4];
    WData/*127:0*/ __Vtemp908[4];
    WData/*127:0*/ __Vtemp909[4];
    WData/*127:0*/ __Vtemp910[4];
    WData/*127:0*/ __Vtemp911[4];
    WData/*127:0*/ __Vtemp912[4];
    WData/*127:0*/ __Vtemp913[4];
    WData/*127:0*/ __Vtemp914[4];
    WData/*127:0*/ __Vtemp915[4];
    WData/*127:0*/ __Vtemp916[4];
    WData/*127:0*/ __Vtemp917[4];
    WData/*127:0*/ __Vtemp918[4];
    WData/*127:0*/ __Vtemp919[4];
    WData/*127:0*/ __Vtemp920[4];
    WData/*127:0*/ __Vtemp921[4];
    WData/*127:0*/ __Vtemp922[4];
    WData/*127:0*/ __Vtemp923[4];
    WData/*127:0*/ __Vtemp924[4];
    WData/*127:0*/ __Vtemp925[4];
    WData/*127:0*/ __Vtemp926[4];
    WData/*127:0*/ __Vtemp927[4];
    WData/*127:0*/ __Vtemp928[4];
    WData/*127:0*/ __Vtemp929[4];
    WData/*127:0*/ __Vtemp930[4];
    WData/*127:0*/ __Vtemp931[4];
    WData/*127:0*/ __Vtemp932[4];
    WData/*127:0*/ __Vtemp933[4];
    WData/*127:0*/ __Vtemp934[4];
    WData/*127:0*/ __Vtemp935[4];
    WData/*127:0*/ __Vtemp936[4];
    WData/*127:0*/ __Vtemp937[4];
    WData/*127:0*/ __Vtemp938[4];
    WData/*127:0*/ __Vtemp939[4];
    WData/*127:0*/ __Vtemp940[4];
    WData/*127:0*/ __Vtemp941[4];
    WData/*127:0*/ __Vtemp942[4];
    WData/*127:0*/ __Vtemp943[4];
    WData/*127:0*/ __Vtemp944[4];
    WData/*127:0*/ __Vtemp945[4];
    WData/*127:0*/ __Vtemp946[4];
    WData/*127:0*/ __Vtemp947[4];
    WData/*127:0*/ __Vtemp948[4];
    WData/*127:0*/ __Vtemp949[4];
    WData/*127:0*/ __Vtemp950[4];
    WData/*127:0*/ __Vtemp951[4];
    WData/*127:0*/ __Vtemp952[4];
    WData/*127:0*/ __Vtemp953[4];
    WData/*127:0*/ __Vtemp954[4];
    WData/*127:0*/ __Vtemp955[4];
    WData/*127:0*/ __Vtemp956[4];
    WData/*127:0*/ __Vtemp957[4];
    WData/*127:0*/ __Vtemp958[4];
    WData/*127:0*/ __Vtemp959[4];
    WData/*127:0*/ __Vtemp960[4];
    WData/*127:0*/ __Vtemp961[4];
    WData/*127:0*/ __Vtemp962[4];
    WData/*127:0*/ __Vtemp963[4];
    WData/*127:0*/ __Vtemp964[4];
    WData/*127:0*/ __Vtemp965[4];
    WData/*127:0*/ __Vtemp966[4];
    WData/*127:0*/ __Vtemp967[4];
    WData/*127:0*/ __Vtemp968[4];
    WData/*127:0*/ __Vtemp969[4];
    WData/*127:0*/ __Vtemp970[4];
    WData/*127:0*/ __Vtemp971[4];
    WData/*127:0*/ __Vtemp972[4];
    WData/*127:0*/ __Vtemp973[4];
    WData/*127:0*/ __Vtemp974[4];
    WData/*127:0*/ __Vtemp975[4];
    WData/*127:0*/ __Vtemp976[4];
    WData/*127:0*/ __Vtemp977[4];
    WData/*127:0*/ __Vtemp978[4];
    WData/*127:0*/ __Vtemp979[4];
    WData/*127:0*/ __Vtemp980[4];
    WData/*127:0*/ __Vtemp981[4];
    WData/*127:0*/ __Vtemp982[4];
    WData/*127:0*/ __Vtemp983[4];
    WData/*127:0*/ __Vtemp984[4];
    WData/*127:0*/ __Vtemp985[4];
    WData/*127:0*/ __Vtemp986[4];
    WData/*127:0*/ __Vtemp987[4];
    WData/*127:0*/ __Vtemp988[4];
    WData/*127:0*/ __Vtemp989[4];
    WData/*127:0*/ __Vtemp990[4];
    WData/*127:0*/ __Vtemp991[4];
    WData/*127:0*/ __Vtemp992[4];
    WData/*127:0*/ __Vtemp993[4];
    WData/*127:0*/ __Vtemp994[4];
    WData/*127:0*/ __Vtemp995[4];
    WData/*127:0*/ __Vtemp996[4];
    WData/*127:0*/ __Vtemp997[4];
    WData/*127:0*/ __Vtemp998[4];
    WData/*127:0*/ __Vtemp999[4];
    WData/*127:0*/ __Vtemp1000[4];
    WData/*127:0*/ __Vtemp1001[4];
    WData/*127:0*/ __Vtemp1002[4];
    WData/*127:0*/ __Vtemp1003[4];
    WData/*127:0*/ __Vtemp1004[4];
    WData/*127:0*/ __Vtemp1005[4];
    WData/*127:0*/ __Vtemp1006[4];
    WData/*127:0*/ __Vtemp1007[4];
    WData/*127:0*/ __Vtemp1008[4];
    WData/*127:0*/ __Vtemp1009[4];
    WData/*127:0*/ __Vtemp1010[4];
    WData/*127:0*/ __Vtemp1011[4];
    WData/*127:0*/ __Vtemp1012[4];
    WData/*127:0*/ __Vtemp1013[4];
    WData/*127:0*/ __Vtemp1014[4];
    WData/*127:0*/ __Vtemp1015[4];
    WData/*127:0*/ __Vtemp1016[4];
    WData/*127:0*/ __Vtemp1017[4];
    WData/*127:0*/ __Vtemp1018[4];
    WData/*127:0*/ __Vtemp1019[4];
    WData/*127:0*/ __Vtemp1020[4];
    WData/*127:0*/ __Vtemp1021[4];
    WData/*127:0*/ __Vtemp1022[4];
    WData/*127:0*/ __Vtemp1023[4];
    WData/*127:0*/ __Vtemp1024[4];
    WData/*127:0*/ __Vtemp1025[4];
    WData/*127:0*/ __Vtemp1026[4];
    WData/*127:0*/ __Vtemp1027[4];
    WData/*127:0*/ __Vtemp1028[4];
    WData/*127:0*/ __Vtemp1029[4];
    WData/*127:0*/ __Vtemp1030[4];
    WData/*127:0*/ __Vtemp1031[4];
    WData/*127:0*/ __Vtemp1032[4];
    WData/*127:0*/ __Vtemp1033[4];
    WData/*127:0*/ __Vtemp1034[4];
    WData/*127:0*/ __Vtemp1035[4];
    WData/*127:0*/ __Vtemp1036[4];
    WData/*127:0*/ __Vtemp1037[4];
    WData/*127:0*/ __Vtemp1038[4];
    WData/*127:0*/ __Vtemp1039[4];
    WData/*127:0*/ __Vtemp1040[4];
    WData/*127:0*/ __Vtemp1041[4];
    WData/*127:0*/ __Vtemp1042[4];
    WData/*127:0*/ __Vtemp1043[4];
    WData/*127:0*/ __Vtemp1044[4];
    WData/*127:0*/ __Vtemp1045[4];
    WData/*127:0*/ __Vtemp1046[4];
    WData/*127:0*/ __Vtemp1047[4];
    WData/*127:0*/ __Vtemp1048[4];
    WData/*127:0*/ __Vtemp1049[4];
    WData/*127:0*/ __Vtemp1050[4];
    WData/*127:0*/ __Vtemp1051[4];
    WData/*127:0*/ __Vtemp1052[4];
    WData/*127:0*/ __Vtemp1053[4];
    WData/*127:0*/ __Vtemp1054[4];
    WData/*127:0*/ __Vtemp1055[4];
    WData/*127:0*/ __Vtemp1056[4];
    WData/*127:0*/ __Vtemp1057[4];
    WData/*127:0*/ __Vtemp1058[4];
    WData/*127:0*/ __Vtemp1059[4];
    WData/*127:0*/ __Vtemp1060[4];
    WData/*127:0*/ __Vtemp1061[4];
    WData/*127:0*/ __Vtemp1062[4];
    WData/*127:0*/ __Vtemp1063[4];
    WData/*127:0*/ __Vtemp1064[4];
    WData/*127:0*/ __Vtemp1065[4];
    WData/*127:0*/ __Vtemp1066[4];
    WData/*127:0*/ __Vtemp1067[4];
    WData/*127:0*/ __Vtemp1068[4];
    WData/*127:0*/ __Vtemp1069[4];
    WData/*127:0*/ __Vtemp1070[4];
    WData/*127:0*/ __Vtemp1071[4];
    WData/*127:0*/ __Vtemp1072[4];
    WData/*127:0*/ __Vtemp1073[4];
    WData/*127:0*/ __Vtemp1074[4];
    WData/*127:0*/ __Vtemp1075[4];
    WData/*127:0*/ __Vtemp1076[4];
    WData/*127:0*/ __Vtemp1077[4];
    WData/*127:0*/ __Vtemp1078[4];
    WData/*127:0*/ __Vtemp1079[4];
    WData/*127:0*/ __Vtemp1080[4];
    WData/*127:0*/ __Vtemp1081[4];
    WData/*127:0*/ __Vtemp1082[4];
    WData/*127:0*/ __Vtemp1083[4];
    WData/*127:0*/ __Vtemp1084[4];
    WData/*127:0*/ __Vtemp1085[4];
    WData/*127:0*/ __Vtemp1086[4];
    WData/*127:0*/ __Vtemp1087[4];
    WData/*127:0*/ __Vtemp1088[4];
    WData/*127:0*/ __Vtemp1089[4];
    WData/*127:0*/ __Vtemp1090[4];
    WData/*127:0*/ __Vtemp1091[4];
    WData/*127:0*/ __Vtemp1092[4];
    WData/*127:0*/ __Vtemp1093[4];
    WData/*127:0*/ __Vtemp1094[4];
    WData/*127:0*/ __Vtemp1095[4];
    WData/*127:0*/ __Vtemp1096[4];
    WData/*127:0*/ __Vtemp1097[4];
    WData/*127:0*/ __Vtemp1098[4];
    WData/*127:0*/ __Vtemp1099[4];
    WData/*127:0*/ __Vtemp1100[4];
    WData/*127:0*/ __Vtemp1101[4];
    WData/*127:0*/ __Vtemp1102[4];
    WData/*127:0*/ __Vtemp1103[4];
    WData/*127:0*/ __Vtemp1104[4];
    WData/*127:0*/ __Vtemp1105[4];
    WData/*127:0*/ __Vtemp1106[4];
    WData/*127:0*/ __Vtemp1107[4];
    WData/*127:0*/ __Vtemp1108[4];
    WData/*127:0*/ __Vtemp1109[4];
    WData/*127:0*/ __Vtemp1110[4];
    WData/*127:0*/ __Vtemp1111[4];
    WData/*127:0*/ __Vtemp1112[4];
    WData/*127:0*/ __Vtemp1113[4];
    WData/*127:0*/ __Vtemp1114[4];
    WData/*127:0*/ __Vtemp1115[4];
    WData/*127:0*/ __Vtemp1116[4];
    WData/*127:0*/ __Vtemp1117[4];
    WData/*127:0*/ __Vtemp1118[4];
    WData/*127:0*/ __Vtemp1119[4];
    WData/*127:0*/ __Vtemp1120[4];
    WData/*127:0*/ __Vtemp1121[4];
    WData/*127:0*/ __Vtemp1122[4];
    WData/*127:0*/ __Vtemp1123[4];
    WData/*127:0*/ __Vtemp1124[4];
    WData/*127:0*/ __Vtemp1125[4];
    WData/*127:0*/ __Vtemp1126[4];
    WData/*127:0*/ __Vtemp1127[4];
    WData/*127:0*/ __Vtemp1128[4];
    WData/*127:0*/ __Vtemp1129[4];
    WData/*127:0*/ __Vtemp1130[4];
    WData/*127:0*/ __Vtemp1131[4];
    WData/*127:0*/ __Vtemp1132[4];
    WData/*127:0*/ __Vtemp1133[4];
    WData/*127:0*/ __Vtemp1134[4];
    WData/*127:0*/ __Vtemp1135[4];
    WData/*127:0*/ __Vtemp1136[4];
    WData/*127:0*/ __Vtemp1137[4];
    WData/*127:0*/ __Vtemp1138[4];
    WData/*127:0*/ __Vtemp1139[4];
    WData/*127:0*/ __Vtemp1140[4];
    WData/*127:0*/ __Vtemp1141[4];
    WData/*127:0*/ __Vtemp1142[4];
    WData/*127:0*/ __Vtemp1143[4];
    WData/*127:0*/ __Vtemp1144[4];
    WData/*127:0*/ __Vtemp1145[4];
    WData/*127:0*/ __Vtemp1146[4];
    WData/*127:0*/ __Vtemp1147[4];
    WData/*127:0*/ __Vtemp1148[4];
    WData/*127:0*/ __Vtemp1149[4];
    WData/*95:0*/ __Vtemp1150[3];
    // Body
    if (vlTOPp->RST_N) {
        if (vlTOPp->mkbbox__DOT__rg_input_EN) {
            vlTOPp->mkbbox__DOT__rg_input[0U] = vlTOPp->mkbbox__DOT__rg_input_D_IN[0U];
            vlTOPp->mkbbox__DOT__rg_input[1U] = vlTOPp->mkbbox__DOT__rg_input_D_IN[1U];
            vlTOPp->mkbbox__DOT__rg_input[2U] = vlTOPp->mkbbox__DOT__rg_input_D_IN[2U];
            vlTOPp->mkbbox__DOT__rg_input[3U] = vlTOPp->mkbbox__DOT__rg_input_D_IN[3U];
            vlTOPp->mkbbox__DOT__rg_input[4U] = vlTOPp->mkbbox__DOT__rg_input_D_IN[4U];
        }
    } else {
        vlTOPp->mkbbox__DOT__rg_input[0U] = 0U;
        vlTOPp->mkbbox__DOT__rg_input[1U] = 0U;
        vlTOPp->mkbbox__DOT__rg_input[2U] = 0U;
        vlTOPp->mkbbox__DOT__rg_input[3U] = 0U;
        vlTOPp->mkbbox__DOT__rg_input[4U] = 0U;
    }
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
    VL_EXTEND_WQ(128,64, __Vtemp577, vlTOPp->mkbbox__DOT__x___05Fh14446);
    VL_EXTEND_WQ(128,64, __Vtemp578, vlTOPp->mkbbox__DOT__y___05Fh14447);
    VL_MUL_W(4, __Vtemp579, __Vtemp577, __Vtemp578);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1043[0U] 
        = __Vtemp579[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1043[1U] 
        = __Vtemp579[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1043[2U] 
        = __Vtemp579[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1043[3U] 
        = __Vtemp579[3U];
    VL_EXTEND_WQ(128,64, __Vtemp580, vlTOPp->mkbbox__DOT__x___05Fh14446);
    VL_EXTEND_WQ(128,64, __Vtemp581, (((QData)((IData)(
                                                       vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlTOPp->mkbbox__DOT__rg_input[2U]))));
    VL_MUL_W(4, __Vtemp582, __Vtemp580, __Vtemp581);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1546[0U] 
        = __Vtemp582[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1546[1U] 
        = __Vtemp582[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1546[2U] 
        = __Vtemp582[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_rg_input___05FETC___05F_d1546[3U] 
        = __Vtemp582[3U];
    VL_EXTEND_WQ(128,64, __Vtemp583, vlTOPp->mkbbox__DOT__x___05Fh14446);
    VL_EXTEND_WQ(128,64, __Vtemp584, vlTOPp->mkbbox__DOT__y___05Fh16976);
    VL_MUL_W(4, __Vtemp585, __Vtemp583, __Vtemp584);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_0_CONCAT___05FETC___05F_d1355[0U] 
        = __Vtemp585[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_0_CONCAT___05FETC___05F_d1355[1U] 
        = __Vtemp585[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_0_CONCAT___05FETC___05F_d1355[2U] 
        = __Vtemp585[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_63_040_041_MUL_0_CONCAT___05FETC___05F_d1355[3U] 
        = __Vtemp585[3U];
    VL_EXTEND_WQ(128,64, __Vtemp586, vlTOPp->mkbbox__DOT__x___05Fh14430);
    VL_EXTEND_WQ(128,64, __Vtemp587, vlTOPp->mkbbox__DOT__y___05Fh14431);
    VL_MUL_W(4, __Vtemp588, __Vtemp586, __Vtemp587);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_rg_input___05FETC___05F_d1037[0U] 
        = __Vtemp588[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_rg_input___05FETC___05F_d1037[1U] 
        = __Vtemp588[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_rg_input___05FETC___05F_d1037[2U] 
        = __Vtemp588[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_rg_input___05FETC___05F_d1037[3U] 
        = __Vtemp588[3U];
    VL_EXTEND_WQ(128,64, __Vtemp589, vlTOPp->mkbbox__DOT__x___05Fh14430);
    VL_EXTEND_WQ(128,64, __Vtemp590, vlTOPp->mkbbox__DOT__y___05Fh16976);
    VL_MUL_W(4, __Vtemp591, __Vtemp589, __Vtemp590);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1543[0U] 
        = __Vtemp591[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1543[1U] 
        = __Vtemp591[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1543[2U] 
        = __Vtemp591[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1543[3U] 
        = __Vtemp591[3U];
    VL_EXTEND_WQ(128,64, __Vtemp592, vlTOPp->mkbbox__DOT__x___05Fh14430);
    VL_EXTEND_WQ(128,64, __Vtemp593, vlTOPp->mkbbox__DOT__y___05Fh16958);
    VL_MUL_W(4, __Vtemp594, __Vtemp592, __Vtemp593);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1350[0U] 
        = __Vtemp594[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1350[1U] 
        = __Vtemp594[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1350[2U] 
        = __Vtemp594[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_62_033_034_MUL_0_CONCAT___05FETC___05F_d1350[3U] 
        = __Vtemp594[3U];
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
    VL_EXTEND_WQ(128,64, __Vtemp595, vlTOPp->mkbbox__DOT__x___05Fh14414);
    VL_EXTEND_WQ(128,64, __Vtemp596, vlTOPp->mkbbox__DOT__y___05Fh14415);
    VL_MUL_W(4, __Vtemp597, __Vtemp595, __Vtemp596);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_rg_input___05FETC___05F_d1030[0U] 
        = __Vtemp597[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_rg_input___05FETC___05F_d1030[1U] 
        = __Vtemp597[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_rg_input___05FETC___05F_d1030[2U] 
        = __Vtemp597[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_rg_input___05FETC___05F_d1030[3U] 
        = __Vtemp597[3U];
    VL_EXTEND_WQ(128,64, __Vtemp598, vlTOPp->mkbbox__DOT__x___05Fh14414);
    VL_EXTEND_WQ(128,64, __Vtemp599, vlTOPp->mkbbox__DOT__y___05Fh16958);
    VL_MUL_W(4, __Vtemp600, __Vtemp598, __Vtemp599);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1540[0U] 
        = __Vtemp600[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1540[1U] 
        = __Vtemp600[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1540[2U] 
        = __Vtemp600[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1540[3U] 
        = __Vtemp600[3U];
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
    VL_EXTEND_WQ(128,64, __Vtemp601, vlTOPp->mkbbox__DOT__x___05Fh14414);
    VL_EXTEND_WQ(128,64, __Vtemp602, vlTOPp->mkbbox__DOT__y___05Fh16940);
    VL_MUL_W(4, __Vtemp603, __Vtemp601, __Vtemp602);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1345[0U] 
        = __Vtemp603[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1345[1U] 
        = __Vtemp603[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1345[2U] 
        = __Vtemp603[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_61_026_027_MUL_0_CONCAT___05FETC___05F_d1345[3U] 
        = __Vtemp603[3U];
    VL_EXTEND_WQ(128,64, __Vtemp604, vlTOPp->mkbbox__DOT__x___05Fh14398);
    VL_EXTEND_WQ(128,64, __Vtemp605, vlTOPp->mkbbox__DOT__y___05Fh14399);
    VL_MUL_W(4, __Vtemp606, __Vtemp604, __Vtemp605);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_rg_input___05FETC___05F_d1023[0U] 
        = __Vtemp606[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_rg_input___05FETC___05F_d1023[1U] 
        = __Vtemp606[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_rg_input___05FETC___05F_d1023[2U] 
        = __Vtemp606[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_rg_input___05FETC___05F_d1023[3U] 
        = __Vtemp606[3U];
    VL_EXTEND_WQ(128,64, __Vtemp607, vlTOPp->mkbbox__DOT__x___05Fh14398);
    VL_EXTEND_WQ(128,64, __Vtemp608, vlTOPp->mkbbox__DOT__y___05Fh16940);
    VL_MUL_W(4, __Vtemp609, __Vtemp607, __Vtemp608);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1537[0U] 
        = __Vtemp609[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1537[1U] 
        = __Vtemp609[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1537[2U] 
        = __Vtemp609[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1537[3U] 
        = __Vtemp609[3U];
    VL_EXTEND_WQ(128,64, __Vtemp610, vlTOPp->mkbbox__DOT__x___05Fh14398);
    VL_EXTEND_WQ(128,64, __Vtemp611, vlTOPp->mkbbox__DOT__y___05Fh16922);
    VL_MUL_W(4, __Vtemp612, __Vtemp610, __Vtemp611);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1340[0U] 
        = __Vtemp612[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1340[1U] 
        = __Vtemp612[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1340[2U] 
        = __Vtemp612[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_60_019_020_MUL_0_CONCAT___05FETC___05F_d1340[3U] 
        = __Vtemp612[3U];
    VL_EXTEND_WQ(128,64, __Vtemp613, vlTOPp->mkbbox__DOT__x___05Fh14382);
    VL_EXTEND_WQ(128,64, __Vtemp614, vlTOPp->mkbbox__DOT__y___05Fh14383);
    VL_MUL_W(4, __Vtemp615, __Vtemp613, __Vtemp614);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_rg_input___05FETC___05F_d1016[0U] 
        = __Vtemp615[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_rg_input___05FETC___05F_d1016[1U] 
        = __Vtemp615[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_rg_input___05FETC___05F_d1016[2U] 
        = __Vtemp615[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_rg_input___05FETC___05F_d1016[3U] 
        = __Vtemp615[3U];
    VL_EXTEND_WQ(128,64, __Vtemp616, vlTOPp->mkbbox__DOT__x___05Fh14382);
    VL_EXTEND_WQ(128,64, __Vtemp617, vlTOPp->mkbbox__DOT__y___05Fh16922);
    VL_MUL_W(4, __Vtemp618, __Vtemp616, __Vtemp617);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1534[0U] 
        = __Vtemp618[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1534[1U] 
        = __Vtemp618[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1534[2U] 
        = __Vtemp618[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1534[3U] 
        = __Vtemp618[3U];
    VL_EXTEND_WQ(128,64, __Vtemp619, vlTOPp->mkbbox__DOT__x___05Fh14382);
    VL_EXTEND_WQ(128,64, __Vtemp620, vlTOPp->mkbbox__DOT__y___05Fh16904);
    VL_MUL_W(4, __Vtemp621, __Vtemp619, __Vtemp620);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1335[0U] 
        = __Vtemp621[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1335[1U] 
        = __Vtemp621[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1335[2U] 
        = __Vtemp621[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_59_012_013_MUL_0_CONCAT___05FETC___05F_d1335[3U] 
        = __Vtemp621[3U];
    VL_EXTEND_WQ(128,64, __Vtemp622, vlTOPp->mkbbox__DOT__x___05Fh14366);
    VL_EXTEND_WQ(128,64, __Vtemp623, vlTOPp->mkbbox__DOT__y___05Fh14367);
    VL_MUL_W(4, __Vtemp624, __Vtemp622, __Vtemp623);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_rg_input___05FETC___05F_d1009[0U] 
        = __Vtemp624[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_rg_input___05FETC___05F_d1009[1U] 
        = __Vtemp624[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_rg_input___05FETC___05F_d1009[2U] 
        = __Vtemp624[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_rg_input___05FETC___05F_d1009[3U] 
        = __Vtemp624[3U];
    VL_EXTEND_WQ(128,64, __Vtemp625, vlTOPp->mkbbox__DOT__x___05Fh14366);
    VL_EXTEND_WQ(128,64, __Vtemp626, vlTOPp->mkbbox__DOT__y___05Fh16904);
    VL_MUL_W(4, __Vtemp627, __Vtemp625, __Vtemp626);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1531[0U] 
        = __Vtemp627[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1531[1U] 
        = __Vtemp627[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1531[2U] 
        = __Vtemp627[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1531[3U] 
        = __Vtemp627[3U];
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
    VL_EXTEND_WQ(128,64, __Vtemp628, vlTOPp->mkbbox__DOT__x___05Fh14366);
    VL_EXTEND_WQ(128,64, __Vtemp629, vlTOPp->mkbbox__DOT__y___05Fh16886);
    VL_MUL_W(4, __Vtemp630, __Vtemp628, __Vtemp629);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1330[0U] 
        = __Vtemp630[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1330[1U] 
        = __Vtemp630[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1330[2U] 
        = __Vtemp630[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_58_005_006_MUL_0_CONCAT___05FETC___05F_d1330[3U] 
        = __Vtemp630[3U];
    VL_EXTEND_WQ(128,64, __Vtemp631, vlTOPp->mkbbox__DOT__x___05Fh14350);
    VL_EXTEND_WQ(128,64, __Vtemp632, vlTOPp->mkbbox__DOT__y___05Fh14351);
    VL_MUL_W(4, __Vtemp633, __Vtemp631, __Vtemp632);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_rg_input_BI_ETC___05F_d1002[0U] 
        = __Vtemp633[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_rg_input_BI_ETC___05F_d1002[1U] 
        = __Vtemp633[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_rg_input_BI_ETC___05F_d1002[2U] 
        = __Vtemp633[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_rg_input_BI_ETC___05F_d1002[3U] 
        = __Vtemp633[3U];
    VL_EXTEND_WQ(128,64, __Vtemp634, vlTOPp->mkbbox__DOT__x___05Fh14350);
    VL_EXTEND_WQ(128,64, __Vtemp635, vlTOPp->mkbbox__DOT__y___05Fh16886);
    VL_MUL_W(4, __Vtemp636, __Vtemp634, __Vtemp635);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1528[0U] 
        = __Vtemp636[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1528[1U] 
        = __Vtemp636[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1528[2U] 
        = __Vtemp636[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1528[3U] 
        = __Vtemp636[3U];
    VL_EXTEND_WQ(128,64, __Vtemp637, vlTOPp->mkbbox__DOT__x___05Fh14350);
    VL_EXTEND_WQ(128,64, __Vtemp638, vlTOPp->mkbbox__DOT__y___05Fh16868);
    VL_MUL_W(4, __Vtemp639, __Vtemp637, __Vtemp638);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1325[0U] 
        = __Vtemp639[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1325[1U] 
        = __Vtemp639[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1325[2U] 
        = __Vtemp639[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_57_98_99_MUL_0_CONCAT_rg_ETC___05F_d1325[3U] 
        = __Vtemp639[3U];
    VL_EXTEND_WQ(128,64, __Vtemp640, vlTOPp->mkbbox__DOT__x___05Fh14334);
    VL_EXTEND_WQ(128,64, __Vtemp641, vlTOPp->mkbbox__DOT__y___05Fh14335);
    VL_MUL_W(4, __Vtemp642, __Vtemp640, __Vtemp641);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_rg_input_BI_ETC___05F_d995[0U] 
        = __Vtemp642[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_rg_input_BI_ETC___05F_d995[1U] 
        = __Vtemp642[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_rg_input_BI_ETC___05F_d995[2U] 
        = __Vtemp642[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_rg_input_BI_ETC___05F_d995[3U] 
        = __Vtemp642[3U];
    VL_EXTEND_WQ(128,64, __Vtemp643, vlTOPp->mkbbox__DOT__x___05Fh14334);
    VL_EXTEND_WQ(128,64, __Vtemp644, vlTOPp->mkbbox__DOT__y___05Fh16868);
    VL_MUL_W(4, __Vtemp645, __Vtemp643, __Vtemp644);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1525[0U] 
        = __Vtemp645[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1525[1U] 
        = __Vtemp645[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1525[2U] 
        = __Vtemp645[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1525[3U] 
        = __Vtemp645[3U];
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
    VL_EXTEND_WQ(128,64, __Vtemp646, vlTOPp->mkbbox__DOT__x___05Fh14334);
    VL_EXTEND_WQ(128,64, __Vtemp647, vlTOPp->mkbbox__DOT__y___05Fh16850);
    VL_MUL_W(4, __Vtemp648, __Vtemp646, __Vtemp647);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1320[0U] 
        = __Vtemp648[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1320[1U] 
        = __Vtemp648[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1320[2U] 
        = __Vtemp648[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_56_91_92_MUL_0_CONCAT_rg_ETC___05F_d1320[3U] 
        = __Vtemp648[3U];
    VL_EXTEND_WQ(128,64, __Vtemp649, vlTOPp->mkbbox__DOT__x___05Fh14318);
    VL_EXTEND_WQ(128,64, __Vtemp650, vlTOPp->mkbbox__DOT__y___05Fh14319);
    VL_MUL_W(4, __Vtemp651, __Vtemp649, __Vtemp650);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_rg_input_BI_ETC___05F_d988[0U] 
        = __Vtemp651[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_rg_input_BI_ETC___05F_d988[1U] 
        = __Vtemp651[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_rg_input_BI_ETC___05F_d988[2U] 
        = __Vtemp651[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_rg_input_BI_ETC___05F_d988[3U] 
        = __Vtemp651[3U];
    VL_EXTEND_WQ(128,64, __Vtemp652, vlTOPp->mkbbox__DOT__x___05Fh14318);
    VL_EXTEND_WQ(128,64, __Vtemp653, vlTOPp->mkbbox__DOT__y___05Fh16850);
    VL_MUL_W(4, __Vtemp654, __Vtemp652, __Vtemp653);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1522[0U] 
        = __Vtemp654[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1522[1U] 
        = __Vtemp654[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1522[2U] 
        = __Vtemp654[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1522[3U] 
        = __Vtemp654[3U];
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
    VL_EXTEND_WQ(128,64, __Vtemp655, vlTOPp->mkbbox__DOT__x___05Fh14318);
    VL_EXTEND_WQ(128,64, __Vtemp656, vlTOPp->mkbbox__DOT__y___05Fh16832);
    VL_MUL_W(4, __Vtemp657, __Vtemp655, __Vtemp656);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1315[0U] 
        = __Vtemp657[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1315[1U] 
        = __Vtemp657[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1315[2U] 
        = __Vtemp657[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_55_84_85_MUL_0_CONCAT_rg_ETC___05F_d1315[3U] 
        = __Vtemp657[3U];
    VL_EXTEND_WQ(128,64, __Vtemp658, vlTOPp->mkbbox__DOT__x___05Fh14302);
    VL_EXTEND_WQ(128,64, __Vtemp659, vlTOPp->mkbbox__DOT__y___05Fh14303);
    VL_MUL_W(4, __Vtemp660, __Vtemp658, __Vtemp659);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_rg_input_BI_ETC___05F_d981[0U] 
        = __Vtemp660[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_rg_input_BI_ETC___05F_d981[1U] 
        = __Vtemp660[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_rg_input_BI_ETC___05F_d981[2U] 
        = __Vtemp660[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_rg_input_BI_ETC___05F_d981[3U] 
        = __Vtemp660[3U];
    VL_EXTEND_WQ(128,64, __Vtemp661, vlTOPp->mkbbox__DOT__x___05Fh14302);
    VL_EXTEND_WQ(128,64, __Vtemp662, vlTOPp->mkbbox__DOT__y___05Fh16832);
    VL_MUL_W(4, __Vtemp663, __Vtemp661, __Vtemp662);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1519[0U] 
        = __Vtemp663[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1519[1U] 
        = __Vtemp663[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1519[2U] 
        = __Vtemp663[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1519[3U] 
        = __Vtemp663[3U];
    VL_EXTEND_WQ(128,64, __Vtemp664, vlTOPp->mkbbox__DOT__x___05Fh14302);
    VL_EXTEND_WQ(128,64, __Vtemp665, vlTOPp->mkbbox__DOT__y___05Fh16814);
    VL_MUL_W(4, __Vtemp666, __Vtemp664, __Vtemp665);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1310[0U] 
        = __Vtemp666[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1310[1U] 
        = __Vtemp666[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1310[2U] 
        = __Vtemp666[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_54_77_78_MUL_0_CONCAT_rg_ETC___05F_d1310[3U] 
        = __Vtemp666[3U];
    VL_EXTEND_WQ(128,64, __Vtemp667, vlTOPp->mkbbox__DOT__x___05Fh14286);
    VL_EXTEND_WQ(128,64, __Vtemp668, vlTOPp->mkbbox__DOT__y___05Fh14287);
    VL_MUL_W(4, __Vtemp669, __Vtemp667, __Vtemp668);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_rg_input_BI_ETC___05F_d974[0U] 
        = __Vtemp669[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_rg_input_BI_ETC___05F_d974[1U] 
        = __Vtemp669[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_rg_input_BI_ETC___05F_d974[2U] 
        = __Vtemp669[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_rg_input_BI_ETC___05F_d974[3U] 
        = __Vtemp669[3U];
    VL_EXTEND_WQ(128,64, __Vtemp670, vlTOPp->mkbbox__DOT__x___05Fh14286);
    VL_EXTEND_WQ(128,64, __Vtemp671, vlTOPp->mkbbox__DOT__y___05Fh16814);
    VL_MUL_W(4, __Vtemp672, __Vtemp670, __Vtemp671);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1516[0U] 
        = __Vtemp672[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1516[1U] 
        = __Vtemp672[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1516[2U] 
        = __Vtemp672[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1516[3U] 
        = __Vtemp672[3U];
    VL_EXTEND_WQ(128,64, __Vtemp673, vlTOPp->mkbbox__DOT__x___05Fh14286);
    VL_EXTEND_WQ(128,64, __Vtemp674, vlTOPp->mkbbox__DOT__y___05Fh16796);
    VL_MUL_W(4, __Vtemp675, __Vtemp673, __Vtemp674);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1305[0U] 
        = __Vtemp675[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1305[1U] 
        = __Vtemp675[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1305[2U] 
        = __Vtemp675[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_53_70_71_MUL_0_CONCAT_rg_ETC___05F_d1305[3U] 
        = __Vtemp675[3U];
    VL_EXTEND_WQ(128,64, __Vtemp676, vlTOPp->mkbbox__DOT__x___05Fh14270);
    VL_EXTEND_WQ(128,64, __Vtemp677, vlTOPp->mkbbox__DOT__y___05Fh14271);
    VL_MUL_W(4, __Vtemp678, __Vtemp676, __Vtemp677);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_rg_input_BI_ETC___05F_d967[0U] 
        = __Vtemp678[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_rg_input_BI_ETC___05F_d967[1U] 
        = __Vtemp678[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_rg_input_BI_ETC___05F_d967[2U] 
        = __Vtemp678[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_rg_input_BI_ETC___05F_d967[3U] 
        = __Vtemp678[3U];
    VL_EXTEND_WQ(128,64, __Vtemp679, vlTOPp->mkbbox__DOT__x___05Fh14270);
    VL_EXTEND_WQ(128,64, __Vtemp680, vlTOPp->mkbbox__DOT__y___05Fh16796);
    VL_MUL_W(4, __Vtemp681, __Vtemp679, __Vtemp680);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1513[0U] 
        = __Vtemp681[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1513[1U] 
        = __Vtemp681[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1513[2U] 
        = __Vtemp681[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1513[3U] 
        = __Vtemp681[3U];
    VL_EXTEND_WQ(128,64, __Vtemp682, vlTOPp->mkbbox__DOT__x___05Fh14270);
    VL_EXTEND_WQ(128,64, __Vtemp683, vlTOPp->mkbbox__DOT__y___05Fh16778);
    VL_MUL_W(4, __Vtemp684, __Vtemp682, __Vtemp683);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1300[0U] 
        = __Vtemp684[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1300[1U] 
        = __Vtemp684[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1300[2U] 
        = __Vtemp684[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_52_63_64_MUL_0_CONCAT_rg_ETC___05F_d1300[3U] 
        = __Vtemp684[3U];
    VL_EXTEND_WQ(128,64, __Vtemp685, vlTOPp->mkbbox__DOT__x___05Fh14254);
    VL_EXTEND_WQ(128,64, __Vtemp686, vlTOPp->mkbbox__DOT__y___05Fh14255);
    VL_MUL_W(4, __Vtemp687, __Vtemp685, __Vtemp686);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_rg_input_BI_ETC___05F_d960[0U] 
        = __Vtemp687[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_rg_input_BI_ETC___05F_d960[1U] 
        = __Vtemp687[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_rg_input_BI_ETC___05F_d960[2U] 
        = __Vtemp687[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_rg_input_BI_ETC___05F_d960[3U] 
        = __Vtemp687[3U];
    VL_EXTEND_WQ(128,64, __Vtemp688, vlTOPp->mkbbox__DOT__x___05Fh14254);
    VL_EXTEND_WQ(128,64, __Vtemp689, vlTOPp->mkbbox__DOT__y___05Fh16778);
    VL_MUL_W(4, __Vtemp690, __Vtemp688, __Vtemp689);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1510[0U] 
        = __Vtemp690[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1510[1U] 
        = __Vtemp690[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1510[2U] 
        = __Vtemp690[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1510[3U] 
        = __Vtemp690[3U];
    VL_EXTEND_WQ(128,64, __Vtemp691, vlTOPp->mkbbox__DOT__x___05Fh14254);
    VL_EXTEND_WQ(128,64, __Vtemp692, vlTOPp->mkbbox__DOT__y___05Fh16760);
    VL_MUL_W(4, __Vtemp693, __Vtemp691, __Vtemp692);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1295[0U] 
        = __Vtemp693[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1295[1U] 
        = __Vtemp693[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1295[2U] 
        = __Vtemp693[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_51_56_57_MUL_0_CONCAT_rg_ETC___05F_d1295[3U] 
        = __Vtemp693[3U];
    VL_EXTEND_WQ(128,64, __Vtemp694, vlTOPp->mkbbox__DOT__x___05Fh14238);
    VL_EXTEND_WQ(128,64, __Vtemp695, vlTOPp->mkbbox__DOT__y___05Fh14239);
    VL_MUL_W(4, __Vtemp696, __Vtemp694, __Vtemp695);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_rg_input_BI_ETC___05F_d953[0U] 
        = __Vtemp696[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_rg_input_BI_ETC___05F_d953[1U] 
        = __Vtemp696[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_rg_input_BI_ETC___05F_d953[2U] 
        = __Vtemp696[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_rg_input_BI_ETC___05F_d953[3U] 
        = __Vtemp696[3U];
    VL_EXTEND_WQ(128,64, __Vtemp697, vlTOPp->mkbbox__DOT__x___05Fh14238);
    VL_EXTEND_WQ(128,64, __Vtemp698, vlTOPp->mkbbox__DOT__y___05Fh16760);
    VL_MUL_W(4, __Vtemp699, __Vtemp697, __Vtemp698);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1507[0U] 
        = __Vtemp699[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1507[1U] 
        = __Vtemp699[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1507[2U] 
        = __Vtemp699[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1507[3U] 
        = __Vtemp699[3U];
    VL_EXTEND_WQ(128,64, __Vtemp700, vlTOPp->mkbbox__DOT__x___05Fh14238);
    VL_EXTEND_WQ(128,64, __Vtemp701, vlTOPp->mkbbox__DOT__y___05Fh16742);
    VL_MUL_W(4, __Vtemp702, __Vtemp700, __Vtemp701);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1290[0U] 
        = __Vtemp702[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1290[1U] 
        = __Vtemp702[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1290[2U] 
        = __Vtemp702[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_50_49_50_MUL_0_CONCAT_rg_ETC___05F_d1290[3U] 
        = __Vtemp702[3U];
    VL_EXTEND_WQ(128,64, __Vtemp703, vlTOPp->mkbbox__DOT__x___05Fh14222);
    VL_EXTEND_WQ(128,64, __Vtemp704, vlTOPp->mkbbox__DOT__y___05Fh14223);
    VL_MUL_W(4, __Vtemp705, __Vtemp703, __Vtemp704);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_rg_input_BI_ETC___05F_d946[0U] 
        = __Vtemp705[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_rg_input_BI_ETC___05F_d946[1U] 
        = __Vtemp705[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_rg_input_BI_ETC___05F_d946[2U] 
        = __Vtemp705[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_rg_input_BI_ETC___05F_d946[3U] 
        = __Vtemp705[3U];
    VL_EXTEND_WQ(128,64, __Vtemp706, vlTOPp->mkbbox__DOT__x___05Fh14222);
    VL_EXTEND_WQ(128,64, __Vtemp707, vlTOPp->mkbbox__DOT__y___05Fh16742);
    VL_MUL_W(4, __Vtemp708, __Vtemp706, __Vtemp707);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1504[0U] 
        = __Vtemp708[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1504[1U] 
        = __Vtemp708[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1504[2U] 
        = __Vtemp708[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1504[3U] 
        = __Vtemp708[3U];
    VL_EXTEND_WQ(128,64, __Vtemp709, vlTOPp->mkbbox__DOT__x___05Fh14222);
    VL_EXTEND_WQ(128,64, __Vtemp710, vlTOPp->mkbbox__DOT__y___05Fh16724);
    VL_MUL_W(4, __Vtemp711, __Vtemp709, __Vtemp710);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1285[0U] 
        = __Vtemp711[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1285[1U] 
        = __Vtemp711[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1285[2U] 
        = __Vtemp711[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_49_42_43_MUL_0_CONCAT_rg_ETC___05F_d1285[3U] 
        = __Vtemp711[3U];
    VL_EXTEND_WQ(128,64, __Vtemp712, vlTOPp->mkbbox__DOT__x___05Fh14206);
    VL_EXTEND_WQ(128,64, __Vtemp713, vlTOPp->mkbbox__DOT__y___05Fh14207);
    VL_MUL_W(4, __Vtemp714, __Vtemp712, __Vtemp713);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_rg_input_BI_ETC___05F_d939[0U] 
        = __Vtemp714[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_rg_input_BI_ETC___05F_d939[1U] 
        = __Vtemp714[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_rg_input_BI_ETC___05F_d939[2U] 
        = __Vtemp714[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_rg_input_BI_ETC___05F_d939[3U] 
        = __Vtemp714[3U];
    VL_EXTEND_WQ(128,64, __Vtemp715, vlTOPp->mkbbox__DOT__x___05Fh14206);
    VL_EXTEND_WQ(128,64, __Vtemp716, vlTOPp->mkbbox__DOT__y___05Fh16724);
    VL_MUL_W(4, __Vtemp717, __Vtemp715, __Vtemp716);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1501[0U] 
        = __Vtemp717[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1501[1U] 
        = __Vtemp717[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1501[2U] 
        = __Vtemp717[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1501[3U] 
        = __Vtemp717[3U];
    VL_EXTEND_WQ(128,64, __Vtemp718, vlTOPp->mkbbox__DOT__x___05Fh14206);
    VL_EXTEND_WQ(128,64, __Vtemp719, vlTOPp->mkbbox__DOT__y___05Fh16706);
    VL_MUL_W(4, __Vtemp720, __Vtemp718, __Vtemp719);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1280[0U] 
        = __Vtemp720[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1280[1U] 
        = __Vtemp720[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1280[2U] 
        = __Vtemp720[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_48_36_37_MUL_0_CONCAT_rg_ETC___05F_d1280[3U] 
        = __Vtemp720[3U];
    VL_EXTEND_WQ(128,64, __Vtemp721, vlTOPp->mkbbox__DOT__x___05Fh14190);
    VL_EXTEND_WQ(128,64, __Vtemp722, vlTOPp->mkbbox__DOT__y___05Fh14191);
    VL_MUL_W(4, __Vtemp723, __Vtemp721, __Vtemp722);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_rg_input_BI_ETC___05F_d933[0U] 
        = __Vtemp723[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_rg_input_BI_ETC___05F_d933[1U] 
        = __Vtemp723[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_rg_input_BI_ETC___05F_d933[2U] 
        = __Vtemp723[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_rg_input_BI_ETC___05F_d933[3U] 
        = __Vtemp723[3U];
    VL_EXTEND_WQ(128,64, __Vtemp724, vlTOPp->mkbbox__DOT__x___05Fh14190);
    VL_EXTEND_WQ(128,64, __Vtemp725, vlTOPp->mkbbox__DOT__y___05Fh16706);
    VL_MUL_W(4, __Vtemp726, __Vtemp724, __Vtemp725);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1498[0U] 
        = __Vtemp726[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1498[1U] 
        = __Vtemp726[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1498[2U] 
        = __Vtemp726[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1498[3U] 
        = __Vtemp726[3U];
    VL_EXTEND_WQ(128,64, __Vtemp727, vlTOPp->mkbbox__DOT__x___05Fh14190);
    VL_EXTEND_WQ(128,64, __Vtemp728, vlTOPp->mkbbox__DOT__y___05Fh16688);
    VL_MUL_W(4, __Vtemp729, __Vtemp727, __Vtemp728);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1275[0U] 
        = __Vtemp729[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1275[1U] 
        = __Vtemp729[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1275[2U] 
        = __Vtemp729[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_47_29_30_MUL_0_CONCAT_rg_ETC___05F_d1275[3U] 
        = __Vtemp729[3U];
    VL_EXTEND_WQ(128,64, __Vtemp730, vlTOPp->mkbbox__DOT__x___05Fh14174);
    VL_EXTEND_WQ(128,64, __Vtemp731, vlTOPp->mkbbox__DOT__y___05Fh14175);
    VL_MUL_W(4, __Vtemp732, __Vtemp730, __Vtemp731);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_rg_input_BI_ETC___05F_d926[0U] 
        = __Vtemp732[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_rg_input_BI_ETC___05F_d926[1U] 
        = __Vtemp732[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_rg_input_BI_ETC___05F_d926[2U] 
        = __Vtemp732[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_rg_input_BI_ETC___05F_d926[3U] 
        = __Vtemp732[3U];
    VL_EXTEND_WQ(128,64, __Vtemp733, vlTOPp->mkbbox__DOT__x___05Fh14174);
    VL_EXTEND_WQ(128,64, __Vtemp734, vlTOPp->mkbbox__DOT__y___05Fh16688);
    VL_MUL_W(4, __Vtemp735, __Vtemp733, __Vtemp734);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1495[0U] 
        = __Vtemp735[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1495[1U] 
        = __Vtemp735[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1495[2U] 
        = __Vtemp735[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1495[3U] 
        = __Vtemp735[3U];
    VL_EXTEND_WQ(128,64, __Vtemp736, vlTOPp->mkbbox__DOT__x___05Fh14174);
    VL_EXTEND_WQ(128,64, __Vtemp737, vlTOPp->mkbbox__DOT__y___05Fh16670);
    VL_MUL_W(4, __Vtemp738, __Vtemp736, __Vtemp737);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1270[0U] 
        = __Vtemp738[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1270[1U] 
        = __Vtemp738[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1270[2U] 
        = __Vtemp738[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_46_22_23_MUL_0_CONCAT_rg_ETC___05F_d1270[3U] 
        = __Vtemp738[3U];
    VL_EXTEND_WQ(128,64, __Vtemp739, vlTOPp->mkbbox__DOT__x___05Fh14158);
    VL_EXTEND_WQ(128,64, __Vtemp740, vlTOPp->mkbbox__DOT__y___05Fh14159);
    VL_MUL_W(4, __Vtemp741, __Vtemp739, __Vtemp740);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_rg_input_BI_ETC___05F_d919[0U] 
        = __Vtemp741[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_rg_input_BI_ETC___05F_d919[1U] 
        = __Vtemp741[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_rg_input_BI_ETC___05F_d919[2U] 
        = __Vtemp741[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_rg_input_BI_ETC___05F_d919[3U] 
        = __Vtemp741[3U];
    VL_EXTEND_WQ(128,64, __Vtemp742, vlTOPp->mkbbox__DOT__x___05Fh14158);
    VL_EXTEND_WQ(128,64, __Vtemp743, vlTOPp->mkbbox__DOT__y___05Fh16670);
    VL_MUL_W(4, __Vtemp744, __Vtemp742, __Vtemp743);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1492[0U] 
        = __Vtemp744[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1492[1U] 
        = __Vtemp744[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1492[2U] 
        = __Vtemp744[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1492[3U] 
        = __Vtemp744[3U];
    VL_EXTEND_WQ(128,64, __Vtemp745, vlTOPp->mkbbox__DOT__x___05Fh14158);
    VL_EXTEND_WQ(128,64, __Vtemp746, vlTOPp->mkbbox__DOT__y___05Fh16652);
    VL_MUL_W(4, __Vtemp747, __Vtemp745, __Vtemp746);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1265[0U] 
        = __Vtemp747[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1265[1U] 
        = __Vtemp747[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1265[2U] 
        = __Vtemp747[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_45_15_16_MUL_0_CONCAT_rg_ETC___05F_d1265[3U] 
        = __Vtemp747[3U];
    VL_EXTEND_WQ(128,64, __Vtemp748, vlTOPp->mkbbox__DOT__x___05Fh14142);
    VL_EXTEND_WQ(128,64, __Vtemp749, vlTOPp->mkbbox__DOT__y___05Fh14143);
    VL_MUL_W(4, __Vtemp750, __Vtemp748, __Vtemp749);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_rg_input_BI_ETC___05F_d912[0U] 
        = __Vtemp750[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_rg_input_BI_ETC___05F_d912[1U] 
        = __Vtemp750[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_rg_input_BI_ETC___05F_d912[2U] 
        = __Vtemp750[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_rg_input_BI_ETC___05F_d912[3U] 
        = __Vtemp750[3U];
    VL_EXTEND_WQ(128,64, __Vtemp751, vlTOPp->mkbbox__DOT__x___05Fh14142);
    VL_EXTEND_WQ(128,64, __Vtemp752, vlTOPp->mkbbox__DOT__y___05Fh16652);
    VL_MUL_W(4, __Vtemp753, __Vtemp751, __Vtemp752);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1489[0U] 
        = __Vtemp753[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1489[1U] 
        = __Vtemp753[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1489[2U] 
        = __Vtemp753[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1489[3U] 
        = __Vtemp753[3U];
    vlTOPp->mkbbox__DOT__out___05Fh32750 = (0xff00ULL 
                                            + vlTOPp->mkbbox__DOT__IF_rg_input_BITS_71_TO_64_93_EQ_0_086_THEN_0_E_ETC___05F_d2087);
    VL_EXTEND_WQ(128,64, __Vtemp754, vlTOPp->mkbbox__DOT__x___05Fh14142);
    VL_EXTEND_WQ(128,64, __Vtemp755, vlTOPp->mkbbox__DOT__y___05Fh16634);
    VL_MUL_W(4, __Vtemp756, __Vtemp754, __Vtemp755);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1260[0U] 
        = __Vtemp756[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1260[1U] 
        = __Vtemp756[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1260[2U] 
        = __Vtemp756[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_44_08_09_MUL_0_CONCAT_rg_ETC___05F_d1260[3U] 
        = __Vtemp756[3U];
    VL_EXTEND_WQ(128,64, __Vtemp757, vlTOPp->mkbbox__DOT__x___05Fh14126);
    VL_EXTEND_WQ(128,64, __Vtemp758, vlTOPp->mkbbox__DOT__y___05Fh14127);
    VL_MUL_W(4, __Vtemp759, __Vtemp757, __Vtemp758);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_rg_input_BI_ETC___05F_d905[0U] 
        = __Vtemp759[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_rg_input_BI_ETC___05F_d905[1U] 
        = __Vtemp759[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_rg_input_BI_ETC___05F_d905[2U] 
        = __Vtemp759[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_rg_input_BI_ETC___05F_d905[3U] 
        = __Vtemp759[3U];
    VL_EXTEND_WQ(128,64, __Vtemp760, vlTOPp->mkbbox__DOT__x___05Fh14126);
    VL_EXTEND_WQ(128,64, __Vtemp761, vlTOPp->mkbbox__DOT__y___05Fh16634);
    VL_MUL_W(4, __Vtemp762, __Vtemp760, __Vtemp761);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1486[0U] 
        = __Vtemp762[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1486[1U] 
        = __Vtemp762[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1486[2U] 
        = __Vtemp762[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1486[3U] 
        = __Vtemp762[3U];
    VL_EXTEND_WQ(128,64, __Vtemp763, vlTOPp->mkbbox__DOT__x___05Fh14126);
    VL_EXTEND_WQ(128,64, __Vtemp764, vlTOPp->mkbbox__DOT__y___05Fh16616);
    VL_MUL_W(4, __Vtemp765, __Vtemp763, __Vtemp764);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1255[0U] 
        = __Vtemp765[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1255[1U] 
        = __Vtemp765[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1255[2U] 
        = __Vtemp765[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_43_01_02_MUL_0_CONCAT_rg_ETC___05F_d1255[3U] 
        = __Vtemp765[3U];
    VL_EXTEND_WQ(128,64, __Vtemp766, vlTOPp->mkbbox__DOT__x___05Fh14110);
    VL_EXTEND_WQ(128,64, __Vtemp767, vlTOPp->mkbbox__DOT__y___05Fh14111);
    VL_MUL_W(4, __Vtemp768, __Vtemp766, __Vtemp767);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_rg_input_BI_ETC___05F_d898[0U] 
        = __Vtemp768[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_rg_input_BI_ETC___05F_d898[1U] 
        = __Vtemp768[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_rg_input_BI_ETC___05F_d898[2U] 
        = __Vtemp768[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_rg_input_BI_ETC___05F_d898[3U] 
        = __Vtemp768[3U];
    VL_EXTEND_WQ(128,64, __Vtemp769, vlTOPp->mkbbox__DOT__x___05Fh14110);
    VL_EXTEND_WQ(128,64, __Vtemp770, vlTOPp->mkbbox__DOT__y___05Fh16616);
    VL_MUL_W(4, __Vtemp771, __Vtemp769, __Vtemp770);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1483[0U] 
        = __Vtemp771[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1483[1U] 
        = __Vtemp771[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1483[2U] 
        = __Vtemp771[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1483[3U] 
        = __Vtemp771[3U];
    VL_EXTEND_WQ(128,64, __Vtemp772, vlTOPp->mkbbox__DOT__x___05Fh14110);
    VL_EXTEND_WQ(128,64, __Vtemp773, vlTOPp->mkbbox__DOT__y___05Fh16598);
    VL_MUL_W(4, __Vtemp774, __Vtemp772, __Vtemp773);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1250[0U] 
        = __Vtemp774[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1250[1U] 
        = __Vtemp774[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1250[2U] 
        = __Vtemp774[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_42_94_95_MUL_0_CONCAT_rg_ETC___05F_d1250[3U] 
        = __Vtemp774[3U];
    VL_EXTEND_WQ(128,64, __Vtemp775, vlTOPp->mkbbox__DOT__x___05Fh14094);
    VL_EXTEND_WQ(128,64, __Vtemp776, vlTOPp->mkbbox__DOT__y___05Fh14095);
    VL_MUL_W(4, __Vtemp777, __Vtemp775, __Vtemp776);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_rg_input_BI_ETC___05F_d891[0U] 
        = __Vtemp777[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_rg_input_BI_ETC___05F_d891[1U] 
        = __Vtemp777[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_rg_input_BI_ETC___05F_d891[2U] 
        = __Vtemp777[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_rg_input_BI_ETC___05F_d891[3U] 
        = __Vtemp777[3U];
    VL_EXTEND_WQ(128,64, __Vtemp778, vlTOPp->mkbbox__DOT__x___05Fh14094);
    VL_EXTEND_WQ(128,64, __Vtemp779, vlTOPp->mkbbox__DOT__y___05Fh16598);
    VL_MUL_W(4, __Vtemp780, __Vtemp778, __Vtemp779);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1480[0U] 
        = __Vtemp780[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1480[1U] 
        = __Vtemp780[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1480[2U] 
        = __Vtemp780[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1480[3U] 
        = __Vtemp780[3U];
    VL_EXTEND_WQ(128,64, __Vtemp781, vlTOPp->mkbbox__DOT__x___05Fh14094);
    VL_EXTEND_WQ(128,64, __Vtemp782, vlTOPp->mkbbox__DOT__y___05Fh16580);
    VL_MUL_W(4, __Vtemp783, __Vtemp781, __Vtemp782);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1245[0U] 
        = __Vtemp783[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1245[1U] 
        = __Vtemp783[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1245[2U] 
        = __Vtemp783[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_41_87_88_MUL_0_CONCAT_rg_ETC___05F_d1245[3U] 
        = __Vtemp783[3U];
    VL_EXTEND_WQ(128,64, __Vtemp784, vlTOPp->mkbbox__DOT__x___05Fh14078);
    VL_EXTEND_WQ(128,64, __Vtemp785, vlTOPp->mkbbox__DOT__y___05Fh14079);
    VL_MUL_W(4, __Vtemp786, __Vtemp784, __Vtemp785);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_rg_input_BI_ETC___05F_d884[0U] 
        = __Vtemp786[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_rg_input_BI_ETC___05F_d884[1U] 
        = __Vtemp786[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_rg_input_BI_ETC___05F_d884[2U] 
        = __Vtemp786[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_rg_input_BI_ETC___05F_d884[3U] 
        = __Vtemp786[3U];
    VL_EXTEND_WQ(128,64, __Vtemp787, vlTOPp->mkbbox__DOT__x___05Fh14078);
    VL_EXTEND_WQ(128,64, __Vtemp788, vlTOPp->mkbbox__DOT__y___05Fh16580);
    VL_MUL_W(4, __Vtemp789, __Vtemp787, __Vtemp788);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1477[0U] 
        = __Vtemp789[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1477[1U] 
        = __Vtemp789[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1477[2U] 
        = __Vtemp789[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1477[3U] 
        = __Vtemp789[3U];
    VL_EXTEND_WQ(128,64, __Vtemp790, vlTOPp->mkbbox__DOT__x___05Fh14078);
    VL_EXTEND_WQ(128,64, __Vtemp791, vlTOPp->mkbbox__DOT__y___05Fh16562);
    VL_MUL_W(4, __Vtemp792, __Vtemp790, __Vtemp791);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1240[0U] 
        = __Vtemp792[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1240[1U] 
        = __Vtemp792[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1240[2U] 
        = __Vtemp792[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_40_80_81_MUL_0_CONCAT_rg_ETC___05F_d1240[3U] 
        = __Vtemp792[3U];
    VL_EXTEND_WQ(128,64, __Vtemp793, vlTOPp->mkbbox__DOT__x___05Fh14062);
    VL_EXTEND_WQ(128,64, __Vtemp794, vlTOPp->mkbbox__DOT__y___05Fh14063);
    VL_MUL_W(4, __Vtemp795, __Vtemp793, __Vtemp794);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_rg_input_BI_ETC___05F_d877[0U] 
        = __Vtemp795[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_rg_input_BI_ETC___05F_d877[1U] 
        = __Vtemp795[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_rg_input_BI_ETC___05F_d877[2U] 
        = __Vtemp795[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_rg_input_BI_ETC___05F_d877[3U] 
        = __Vtemp795[3U];
    VL_EXTEND_WQ(128,64, __Vtemp796, vlTOPp->mkbbox__DOT__x___05Fh14062);
    VL_EXTEND_WQ(128,64, __Vtemp797, vlTOPp->mkbbox__DOT__y___05Fh16562);
    VL_MUL_W(4, __Vtemp798, __Vtemp796, __Vtemp797);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1474[0U] 
        = __Vtemp798[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1474[1U] 
        = __Vtemp798[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1474[2U] 
        = __Vtemp798[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1474[3U] 
        = __Vtemp798[3U];
    VL_EXTEND_WQ(128,64, __Vtemp799, vlTOPp->mkbbox__DOT__x___05Fh14062);
    VL_EXTEND_WQ(128,64, __Vtemp800, vlTOPp->mkbbox__DOT__y___05Fh16544);
    VL_MUL_W(4, __Vtemp801, __Vtemp799, __Vtemp800);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1235[0U] 
        = __Vtemp801[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1235[1U] 
        = __Vtemp801[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1235[2U] 
        = __Vtemp801[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_39_73_74_MUL_0_CONCAT_rg_ETC___05F_d1235[3U] 
        = __Vtemp801[3U];
    VL_EXTEND_WQ(128,64, __Vtemp802, vlTOPp->mkbbox__DOT__x___05Fh14046);
    VL_EXTEND_WQ(128,64, __Vtemp803, vlTOPp->mkbbox__DOT__y___05Fh14047);
    VL_MUL_W(4, __Vtemp804, __Vtemp802, __Vtemp803);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_rg_input_BI_ETC___05F_d870[0U] 
        = __Vtemp804[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_rg_input_BI_ETC___05F_d870[1U] 
        = __Vtemp804[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_rg_input_BI_ETC___05F_d870[2U] 
        = __Vtemp804[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_rg_input_BI_ETC___05F_d870[3U] 
        = __Vtemp804[3U];
    VL_EXTEND_WQ(128,64, __Vtemp805, vlTOPp->mkbbox__DOT__x___05Fh14046);
    VL_EXTEND_WQ(128,64, __Vtemp806, vlTOPp->mkbbox__DOT__y___05Fh16544);
    VL_MUL_W(4, __Vtemp807, __Vtemp805, __Vtemp806);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1471[0U] 
        = __Vtemp807[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1471[1U] 
        = __Vtemp807[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1471[2U] 
        = __Vtemp807[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1471[3U] 
        = __Vtemp807[3U];
    VL_EXTEND_WQ(128,64, __Vtemp808, vlTOPp->mkbbox__DOT__x___05Fh14046);
    VL_EXTEND_WQ(128,64, __Vtemp809, vlTOPp->mkbbox__DOT__y___05Fh16526);
    VL_MUL_W(4, __Vtemp810, __Vtemp808, __Vtemp809);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1230[0U] 
        = __Vtemp810[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1230[1U] 
        = __Vtemp810[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1230[2U] 
        = __Vtemp810[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_38_66_67_MUL_0_CONCAT_rg_ETC___05F_d1230[3U] 
        = __Vtemp810[3U];
    VL_EXTEND_WQ(128,64, __Vtemp811, vlTOPp->mkbbox__DOT__x___05Fh14030);
    VL_EXTEND_WQ(128,64, __Vtemp812, vlTOPp->mkbbox__DOT__y___05Fh14031);
    VL_MUL_W(4, __Vtemp813, __Vtemp811, __Vtemp812);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_rg_input_BI_ETC___05F_d863[0U] 
        = __Vtemp813[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_rg_input_BI_ETC___05F_d863[1U] 
        = __Vtemp813[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_rg_input_BI_ETC___05F_d863[2U] 
        = __Vtemp813[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_rg_input_BI_ETC___05F_d863[3U] 
        = __Vtemp813[3U];
    VL_EXTEND_WQ(128,64, __Vtemp814, vlTOPp->mkbbox__DOT__x___05Fh14030);
    VL_EXTEND_WQ(128,64, __Vtemp815, vlTOPp->mkbbox__DOT__y___05Fh16526);
    VL_MUL_W(4, __Vtemp816, __Vtemp814, __Vtemp815);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1468[0U] 
        = __Vtemp816[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1468[1U] 
        = __Vtemp816[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1468[2U] 
        = __Vtemp816[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1468[3U] 
        = __Vtemp816[3U];
    VL_EXTEND_WQ(128,64, __Vtemp817, vlTOPp->mkbbox__DOT__x___05Fh14030);
    VL_EXTEND_WQ(128,64, __Vtemp818, vlTOPp->mkbbox__DOT__y___05Fh16508);
    VL_MUL_W(4, __Vtemp819, __Vtemp817, __Vtemp818);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1225[0U] 
        = __Vtemp819[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1225[1U] 
        = __Vtemp819[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1225[2U] 
        = __Vtemp819[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_37_59_60_MUL_0_CONCAT_rg_ETC___05F_d1225[3U] 
        = __Vtemp819[3U];
    VL_EXTEND_WQ(128,64, __Vtemp820, vlTOPp->mkbbox__DOT__x___05Fh14014);
    VL_EXTEND_WQ(128,64, __Vtemp821, vlTOPp->mkbbox__DOT__y___05Fh14015);
    VL_MUL_W(4, __Vtemp822, __Vtemp820, __Vtemp821);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_rg_input_BI_ETC___05F_d856[0U] 
        = __Vtemp822[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_rg_input_BI_ETC___05F_d856[1U] 
        = __Vtemp822[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_rg_input_BI_ETC___05F_d856[2U] 
        = __Vtemp822[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_rg_input_BI_ETC___05F_d856[3U] 
        = __Vtemp822[3U];
    VL_EXTEND_WQ(128,64, __Vtemp823, vlTOPp->mkbbox__DOT__x___05Fh14014);
    VL_EXTEND_WQ(128,64, __Vtemp824, vlTOPp->mkbbox__DOT__y___05Fh16508);
    VL_MUL_W(4, __Vtemp825, __Vtemp823, __Vtemp824);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1465[0U] 
        = __Vtemp825[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1465[1U] 
        = __Vtemp825[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1465[2U] 
        = __Vtemp825[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1465[3U] 
        = __Vtemp825[3U];
    VL_EXTEND_WQ(128,64, __Vtemp826, vlTOPp->mkbbox__DOT__x___05Fh14014);
    VL_EXTEND_WQ(128,64, __Vtemp827, vlTOPp->mkbbox__DOT__y___05Fh16490);
    VL_MUL_W(4, __Vtemp828, __Vtemp826, __Vtemp827);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1220[0U] 
        = __Vtemp828[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1220[1U] 
        = __Vtemp828[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1220[2U] 
        = __Vtemp828[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_36_52_53_MUL_0_CONCAT_rg_ETC___05F_d1220[3U] 
        = __Vtemp828[3U];
    VL_EXTEND_WQ(128,64, __Vtemp829, vlTOPp->mkbbox__DOT__x___05Fh13998);
    VL_EXTEND_WQ(128,64, __Vtemp830, vlTOPp->mkbbox__DOT__y___05Fh13999);
    VL_MUL_W(4, __Vtemp831, __Vtemp829, __Vtemp830);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_rg_input_BI_ETC___05F_d849[0U] 
        = __Vtemp831[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_rg_input_BI_ETC___05F_d849[1U] 
        = __Vtemp831[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_rg_input_BI_ETC___05F_d849[2U] 
        = __Vtemp831[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_rg_input_BI_ETC___05F_d849[3U] 
        = __Vtemp831[3U];
    VL_EXTEND_WQ(128,64, __Vtemp832, vlTOPp->mkbbox__DOT__x___05Fh13998);
    VL_EXTEND_WQ(128,64, __Vtemp833, vlTOPp->mkbbox__DOT__y___05Fh16490);
    VL_MUL_W(4, __Vtemp834, __Vtemp832, __Vtemp833);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1462[0U] 
        = __Vtemp834[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1462[1U] 
        = __Vtemp834[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1462[2U] 
        = __Vtemp834[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1462[3U] 
        = __Vtemp834[3U];
    VL_EXTEND_WQ(128,64, __Vtemp835, vlTOPp->mkbbox__DOT__x___05Fh13998);
    VL_EXTEND_WQ(128,64, __Vtemp836, vlTOPp->mkbbox__DOT__y___05Fh16472);
    VL_MUL_W(4, __Vtemp837, __Vtemp835, __Vtemp836);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1215[0U] 
        = __Vtemp837[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1215[1U] 
        = __Vtemp837[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1215[2U] 
        = __Vtemp837[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_35_45_46_MUL_0_CONCAT_rg_ETC___05F_d1215[3U] 
        = __Vtemp837[3U];
    VL_EXTEND_WQ(128,64, __Vtemp838, vlTOPp->mkbbox__DOT__x___05Fh13982);
    VL_EXTEND_WQ(128,64, __Vtemp839, vlTOPp->mkbbox__DOT__y___05Fh13983);
    VL_MUL_W(4, __Vtemp840, __Vtemp838, __Vtemp839);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_rg_input_BI_ETC___05F_d842[0U] 
        = __Vtemp840[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_rg_input_BI_ETC___05F_d842[1U] 
        = __Vtemp840[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_rg_input_BI_ETC___05F_d842[2U] 
        = __Vtemp840[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_rg_input_BI_ETC___05F_d842[3U] 
        = __Vtemp840[3U];
    VL_EXTEND_WQ(128,64, __Vtemp841, vlTOPp->mkbbox__DOT__x___05Fh13982);
    VL_EXTEND_WQ(128,64, __Vtemp842, vlTOPp->mkbbox__DOT__y___05Fh16472);
    VL_MUL_W(4, __Vtemp843, __Vtemp841, __Vtemp842);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1459[0U] 
        = __Vtemp843[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1459[1U] 
        = __Vtemp843[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1459[2U] 
        = __Vtemp843[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1459[3U] 
        = __Vtemp843[3U];
    VL_EXTEND_WQ(128,64, __Vtemp844, vlTOPp->mkbbox__DOT__x___05Fh13982);
    VL_EXTEND_WQ(128,64, __Vtemp845, vlTOPp->mkbbox__DOT__y___05Fh16454);
    VL_MUL_W(4, __Vtemp846, __Vtemp844, __Vtemp845);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1210[0U] 
        = __Vtemp846[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1210[1U] 
        = __Vtemp846[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1210[2U] 
        = __Vtemp846[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_34_38_39_MUL_0_CONCAT_rg_ETC___05F_d1210[3U] 
        = __Vtemp846[3U];
    VL_EXTEND_WQ(128,64, __Vtemp847, vlTOPp->mkbbox__DOT__x___05Fh13966);
    VL_EXTEND_WQ(128,64, __Vtemp848, vlTOPp->mkbbox__DOT__y___05Fh13967);
    VL_MUL_W(4, __Vtemp849, __Vtemp847, __Vtemp848);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_rg_input_BI_ETC___05F_d835[0U] 
        = __Vtemp849[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_rg_input_BI_ETC___05F_d835[1U] 
        = __Vtemp849[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_rg_input_BI_ETC___05F_d835[2U] 
        = __Vtemp849[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_rg_input_BI_ETC___05F_d835[3U] 
        = __Vtemp849[3U];
    VL_EXTEND_WQ(128,64, __Vtemp850, vlTOPp->mkbbox__DOT__x___05Fh13966);
    VL_EXTEND_WQ(128,64, __Vtemp851, vlTOPp->mkbbox__DOT__y___05Fh16454);
    VL_MUL_W(4, __Vtemp852, __Vtemp850, __Vtemp851);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1456[0U] 
        = __Vtemp852[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1456[1U] 
        = __Vtemp852[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1456[2U] 
        = __Vtemp852[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1456[3U] 
        = __Vtemp852[3U];
    VL_EXTEND_WQ(128,64, __Vtemp853, vlTOPp->mkbbox__DOT__x___05Fh13966);
    VL_EXTEND_WQ(128,64, __Vtemp854, vlTOPp->mkbbox__DOT__y___05Fh16436);
    VL_MUL_W(4, __Vtemp855, __Vtemp853, __Vtemp854);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1205[0U] 
        = __Vtemp855[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1205[1U] 
        = __Vtemp855[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1205[2U] 
        = __Vtemp855[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_33_31_32_MUL_0_CONCAT_rg_ETC___05F_d1205[3U] 
        = __Vtemp855[3U];
    VL_EXTEND_WQ(128,64, __Vtemp856, vlTOPp->mkbbox__DOT__x___05Fh13950);
    VL_EXTEND_WQ(128,64, __Vtemp857, vlTOPp->mkbbox__DOT__y___05Fh13951);
    VL_MUL_W(4, __Vtemp858, __Vtemp856, __Vtemp857);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_rg_input_BI_ETC___05F_d828[0U] 
        = __Vtemp858[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_rg_input_BI_ETC___05F_d828[1U] 
        = __Vtemp858[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_rg_input_BI_ETC___05F_d828[2U] 
        = __Vtemp858[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_rg_input_BI_ETC___05F_d828[3U] 
        = __Vtemp858[3U];
    VL_EXTEND_WQ(128,64, __Vtemp859, vlTOPp->mkbbox__DOT__x___05Fh13950);
    VL_EXTEND_WQ(128,64, __Vtemp860, vlTOPp->mkbbox__DOT__y___05Fh16436);
    VL_MUL_W(4, __Vtemp861, __Vtemp859, __Vtemp860);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1453[0U] 
        = __Vtemp861[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1453[1U] 
        = __Vtemp861[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1453[2U] 
        = __Vtemp861[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1453[3U] 
        = __Vtemp861[3U];
    VL_EXTEND_WQ(128,64, __Vtemp862, vlTOPp->mkbbox__DOT__x___05Fh13950);
    VL_EXTEND_WQ(128,64, __Vtemp863, vlTOPp->mkbbox__DOT__y___05Fh16418);
    VL_MUL_W(4, __Vtemp864, __Vtemp862, __Vtemp863);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1200[0U] 
        = __Vtemp864[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1200[1U] 
        = __Vtemp864[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1200[2U] 
        = __Vtemp864[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_32_25_26_MUL_0_CONCAT_rg_ETC___05F_d1200[3U] 
        = __Vtemp864[3U];
    VL_EXTEND_WQ(128,64, __Vtemp865, vlTOPp->mkbbox__DOT__x___05Fh13934);
    VL_EXTEND_WQ(128,64, __Vtemp866, vlTOPp->mkbbox__DOT__y___05Fh13935);
    VL_MUL_W(4, __Vtemp867, __Vtemp865, __Vtemp866);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_rg_input_BI_ETC___05F_d822[0U] 
        = __Vtemp867[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_rg_input_BI_ETC___05F_d822[1U] 
        = __Vtemp867[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_rg_input_BI_ETC___05F_d822[2U] 
        = __Vtemp867[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_rg_input_BI_ETC___05F_d822[3U] 
        = __Vtemp867[3U];
    VL_EXTEND_WQ(128,64, __Vtemp868, vlTOPp->mkbbox__DOT__x___05Fh13934);
    VL_EXTEND_WQ(128,64, __Vtemp869, vlTOPp->mkbbox__DOT__y___05Fh16418);
    VL_MUL_W(4, __Vtemp870, __Vtemp868, __Vtemp869);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1450[0U] 
        = __Vtemp870[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1450[1U] 
        = __Vtemp870[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1450[2U] 
        = __Vtemp870[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1450[3U] 
        = __Vtemp870[3U];
    VL_EXTEND_WQ(128,64, __Vtemp871, vlTOPp->mkbbox__DOT__x___05Fh13934);
    VL_EXTEND_WQ(128,64, __Vtemp872, vlTOPp->mkbbox__DOT__y___05Fh16400);
    VL_MUL_W(4, __Vtemp873, __Vtemp871, __Vtemp872);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1195[0U] 
        = __Vtemp873[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1195[1U] 
        = __Vtemp873[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1195[2U] 
        = __Vtemp873[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_31_18_19_MUL_0_CONCAT_rg_ETC___05F_d1195[3U] 
        = __Vtemp873[3U];
    VL_EXTEND_WQ(128,64, __Vtemp874, vlTOPp->mkbbox__DOT__x___05Fh13918);
    VL_EXTEND_WQ(128,64, __Vtemp875, vlTOPp->mkbbox__DOT__y___05Fh13919);
    VL_MUL_W(4, __Vtemp876, __Vtemp874, __Vtemp875);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_rg_input_BI_ETC___05F_d815[0U] 
        = __Vtemp876[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_rg_input_BI_ETC___05F_d815[1U] 
        = __Vtemp876[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_rg_input_BI_ETC___05F_d815[2U] 
        = __Vtemp876[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_rg_input_BI_ETC___05F_d815[3U] 
        = __Vtemp876[3U];
    VL_EXTEND_WQ(128,64, __Vtemp877, vlTOPp->mkbbox__DOT__x___05Fh13918);
    VL_EXTEND_WQ(128,64, __Vtemp878, vlTOPp->mkbbox__DOT__y___05Fh16400);
    VL_MUL_W(4, __Vtemp879, __Vtemp877, __Vtemp878);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1447[0U] 
        = __Vtemp879[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1447[1U] 
        = __Vtemp879[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1447[2U] 
        = __Vtemp879[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1447[3U] 
        = __Vtemp879[3U];
    VL_EXTEND_WQ(128,64, __Vtemp880, vlTOPp->mkbbox__DOT__x___05Fh13918);
    VL_EXTEND_WQ(128,64, __Vtemp881, vlTOPp->mkbbox__DOT__y___05Fh16382);
    VL_MUL_W(4, __Vtemp882, __Vtemp880, __Vtemp881);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1190[0U] 
        = __Vtemp882[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1190[1U] 
        = __Vtemp882[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1190[2U] 
        = __Vtemp882[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_30_11_12_MUL_0_CONCAT_rg_ETC___05F_d1190[3U] 
        = __Vtemp882[3U];
    VL_EXTEND_WQ(128,64, __Vtemp883, vlTOPp->mkbbox__DOT__x___05Fh13902);
    VL_EXTEND_WQ(128,64, __Vtemp884, vlTOPp->mkbbox__DOT__y___05Fh13903);
    VL_MUL_W(4, __Vtemp885, __Vtemp883, __Vtemp884);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_rg_input_BI_ETC___05F_d808[0U] 
        = __Vtemp885[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_rg_input_BI_ETC___05F_d808[1U] 
        = __Vtemp885[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_rg_input_BI_ETC___05F_d808[2U] 
        = __Vtemp885[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_rg_input_BI_ETC___05F_d808[3U] 
        = __Vtemp885[3U];
    VL_EXTEND_WQ(128,64, __Vtemp886, vlTOPp->mkbbox__DOT__x___05Fh13902);
    VL_EXTEND_WQ(128,64, __Vtemp887, vlTOPp->mkbbox__DOT__y___05Fh16382);
    VL_MUL_W(4, __Vtemp888, __Vtemp886, __Vtemp887);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1444[0U] 
        = __Vtemp888[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1444[1U] 
        = __Vtemp888[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1444[2U] 
        = __Vtemp888[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1444[3U] 
        = __Vtemp888[3U];
    VL_EXTEND_WQ(128,64, __Vtemp889, vlTOPp->mkbbox__DOT__x___05Fh13902);
    VL_EXTEND_WQ(128,64, __Vtemp890, vlTOPp->mkbbox__DOT__y___05Fh16364);
    VL_MUL_W(4, __Vtemp891, __Vtemp889, __Vtemp890);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1185[0U] 
        = __Vtemp891[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1185[1U] 
        = __Vtemp891[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1185[2U] 
        = __Vtemp891[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_29_04_05_MUL_0_CONCAT_rg_ETC___05F_d1185[3U] 
        = __Vtemp891[3U];
    VL_EXTEND_WQ(128,64, __Vtemp892, vlTOPp->mkbbox__DOT__x___05Fh13886);
    VL_EXTEND_WQ(128,64, __Vtemp893, vlTOPp->mkbbox__DOT__y___05Fh13887);
    VL_MUL_W(4, __Vtemp894, __Vtemp892, __Vtemp893);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_rg_input_BI_ETC___05F_d801[0U] 
        = __Vtemp894[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_rg_input_BI_ETC___05F_d801[1U] 
        = __Vtemp894[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_rg_input_BI_ETC___05F_d801[2U] 
        = __Vtemp894[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_rg_input_BI_ETC___05F_d801[3U] 
        = __Vtemp894[3U];
    VL_EXTEND_WQ(128,64, __Vtemp895, vlTOPp->mkbbox__DOT__x___05Fh13886);
    VL_EXTEND_WQ(128,64, __Vtemp896, vlTOPp->mkbbox__DOT__y___05Fh16364);
    VL_MUL_W(4, __Vtemp897, __Vtemp895, __Vtemp896);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1441[0U] 
        = __Vtemp897[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1441[1U] 
        = __Vtemp897[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1441[2U] 
        = __Vtemp897[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1441[3U] 
        = __Vtemp897[3U];
    VL_EXTEND_WQ(128,64, __Vtemp898, vlTOPp->mkbbox__DOT__x___05Fh13886);
    VL_EXTEND_WQ(128,64, __Vtemp899, vlTOPp->mkbbox__DOT__y___05Fh16346);
    VL_MUL_W(4, __Vtemp900, __Vtemp898, __Vtemp899);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1180[0U] 
        = __Vtemp900[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1180[1U] 
        = __Vtemp900[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1180[2U] 
        = __Vtemp900[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_28_97_98_MUL_0_CONCAT_rg_ETC___05F_d1180[3U] 
        = __Vtemp900[3U];
    VL_EXTEND_WQ(128,64, __Vtemp901, vlTOPp->mkbbox__DOT__x___05Fh13870);
    VL_EXTEND_WQ(128,64, __Vtemp902, vlTOPp->mkbbox__DOT__y___05Fh13871);
    VL_MUL_W(4, __Vtemp903, __Vtemp901, __Vtemp902);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_rg_input_BI_ETC___05F_d794[0U] 
        = __Vtemp903[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_rg_input_BI_ETC___05F_d794[1U] 
        = __Vtemp903[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_rg_input_BI_ETC___05F_d794[2U] 
        = __Vtemp903[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_rg_input_BI_ETC___05F_d794[3U] 
        = __Vtemp903[3U];
    VL_EXTEND_WQ(128,64, __Vtemp904, vlTOPp->mkbbox__DOT__x___05Fh13870);
    VL_EXTEND_WQ(128,64, __Vtemp905, vlTOPp->mkbbox__DOT__y___05Fh16346);
    VL_MUL_W(4, __Vtemp906, __Vtemp904, __Vtemp905);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1438[0U] 
        = __Vtemp906[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1438[1U] 
        = __Vtemp906[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1438[2U] 
        = __Vtemp906[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1438[3U] 
        = __Vtemp906[3U];
    VL_EXTEND_WQ(128,64, __Vtemp907, vlTOPp->mkbbox__DOT__x___05Fh13870);
    VL_EXTEND_WQ(128,64, __Vtemp908, vlTOPp->mkbbox__DOT__y___05Fh16328);
    VL_MUL_W(4, __Vtemp909, __Vtemp907, __Vtemp908);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1175[0U] 
        = __Vtemp909[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1175[1U] 
        = __Vtemp909[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1175[2U] 
        = __Vtemp909[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_27_90_91_MUL_0_CONCAT_rg_ETC___05F_d1175[3U] 
        = __Vtemp909[3U];
    VL_EXTEND_WQ(128,64, __Vtemp910, vlTOPp->mkbbox__DOT__x___05Fh13854);
    VL_EXTEND_WQ(128,64, __Vtemp911, vlTOPp->mkbbox__DOT__y___05Fh13855);
    VL_MUL_W(4, __Vtemp912, __Vtemp910, __Vtemp911);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_rg_input_BI_ETC___05F_d787[0U] 
        = __Vtemp912[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_rg_input_BI_ETC___05F_d787[1U] 
        = __Vtemp912[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_rg_input_BI_ETC___05F_d787[2U] 
        = __Vtemp912[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_rg_input_BI_ETC___05F_d787[3U] 
        = __Vtemp912[3U];
    VL_EXTEND_WQ(128,64, __Vtemp913, vlTOPp->mkbbox__DOT__x___05Fh13854);
    VL_EXTEND_WQ(128,64, __Vtemp914, vlTOPp->mkbbox__DOT__y___05Fh16328);
    VL_MUL_W(4, __Vtemp915, __Vtemp913, __Vtemp914);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1435[0U] 
        = __Vtemp915[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1435[1U] 
        = __Vtemp915[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1435[2U] 
        = __Vtemp915[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1435[3U] 
        = __Vtemp915[3U];
    VL_EXTEND_WQ(128,64, __Vtemp916, vlTOPp->mkbbox__DOT__x___05Fh13854);
    VL_EXTEND_WQ(128,64, __Vtemp917, vlTOPp->mkbbox__DOT__y___05Fh16310);
    VL_MUL_W(4, __Vtemp918, __Vtemp916, __Vtemp917);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1170[0U] 
        = __Vtemp918[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1170[1U] 
        = __Vtemp918[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1170[2U] 
        = __Vtemp918[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_26_83_84_MUL_0_CONCAT_rg_ETC___05F_d1170[3U] 
        = __Vtemp918[3U];
    VL_EXTEND_WQ(128,64, __Vtemp919, vlTOPp->mkbbox__DOT__x___05Fh13838);
    VL_EXTEND_WQ(128,64, __Vtemp920, vlTOPp->mkbbox__DOT__y___05Fh13839);
    VL_MUL_W(4, __Vtemp921, __Vtemp919, __Vtemp920);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_rg_input_BI_ETC___05F_d780[0U] 
        = __Vtemp921[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_rg_input_BI_ETC___05F_d780[1U] 
        = __Vtemp921[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_rg_input_BI_ETC___05F_d780[2U] 
        = __Vtemp921[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_rg_input_BI_ETC___05F_d780[3U] 
        = __Vtemp921[3U];
    VL_EXTEND_WQ(128,64, __Vtemp922, vlTOPp->mkbbox__DOT__x___05Fh13838);
    VL_EXTEND_WQ(128,64, __Vtemp923, vlTOPp->mkbbox__DOT__y___05Fh16310);
    VL_MUL_W(4, __Vtemp924, __Vtemp922, __Vtemp923);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1432[0U] 
        = __Vtemp924[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1432[1U] 
        = __Vtemp924[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1432[2U] 
        = __Vtemp924[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1432[3U] 
        = __Vtemp924[3U];
    VL_EXTEND_WQ(128,64, __Vtemp925, vlTOPp->mkbbox__DOT__x___05Fh13838);
    VL_EXTEND_WQ(128,64, __Vtemp926, vlTOPp->mkbbox__DOT__y___05Fh16292);
    VL_MUL_W(4, __Vtemp927, __Vtemp925, __Vtemp926);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1165[0U] 
        = __Vtemp927[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1165[1U] 
        = __Vtemp927[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1165[2U] 
        = __Vtemp927[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_25_76_77_MUL_0_CONCAT_rg_ETC___05F_d1165[3U] 
        = __Vtemp927[3U];
    VL_EXTEND_WQ(128,64, __Vtemp928, vlTOPp->mkbbox__DOT__x___05Fh13822);
    VL_EXTEND_WQ(128,64, __Vtemp929, vlTOPp->mkbbox__DOT__y___05Fh13823);
    VL_MUL_W(4, __Vtemp930, __Vtemp928, __Vtemp929);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_rg_input_BI_ETC___05F_d773[0U] 
        = __Vtemp930[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_rg_input_BI_ETC___05F_d773[1U] 
        = __Vtemp930[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_rg_input_BI_ETC___05F_d773[2U] 
        = __Vtemp930[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_rg_input_BI_ETC___05F_d773[3U] 
        = __Vtemp930[3U];
    VL_EXTEND_WQ(128,64, __Vtemp931, vlTOPp->mkbbox__DOT__x___05Fh13822);
    VL_EXTEND_WQ(128,64, __Vtemp932, vlTOPp->mkbbox__DOT__y___05Fh16292);
    VL_MUL_W(4, __Vtemp933, __Vtemp931, __Vtemp932);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1429[0U] 
        = __Vtemp933[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1429[1U] 
        = __Vtemp933[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1429[2U] 
        = __Vtemp933[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1429[3U] 
        = __Vtemp933[3U];
    VL_EXTEND_WQ(128,64, __Vtemp934, vlTOPp->mkbbox__DOT__x___05Fh13822);
    VL_EXTEND_WQ(128,64, __Vtemp935, vlTOPp->mkbbox__DOT__y___05Fh16274);
    VL_MUL_W(4, __Vtemp936, __Vtemp934, __Vtemp935);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1160[0U] 
        = __Vtemp936[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1160[1U] 
        = __Vtemp936[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1160[2U] 
        = __Vtemp936[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_24_69_70_MUL_0_CONCAT_rg_ETC___05F_d1160[3U] 
        = __Vtemp936[3U];
    VL_EXTEND_WQ(128,64, __Vtemp937, vlTOPp->mkbbox__DOT__x___05Fh13806);
    VL_EXTEND_WQ(128,64, __Vtemp938, vlTOPp->mkbbox__DOT__y___05Fh13807);
    VL_MUL_W(4, __Vtemp939, __Vtemp937, __Vtemp938);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_rg_input_BI_ETC___05F_d766[0U] 
        = __Vtemp939[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_rg_input_BI_ETC___05F_d766[1U] 
        = __Vtemp939[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_rg_input_BI_ETC___05F_d766[2U] 
        = __Vtemp939[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_rg_input_BI_ETC___05F_d766[3U] 
        = __Vtemp939[3U];
    VL_EXTEND_WQ(128,64, __Vtemp940, vlTOPp->mkbbox__DOT__x___05Fh13806);
    VL_EXTEND_WQ(128,64, __Vtemp941, vlTOPp->mkbbox__DOT__y___05Fh16274);
    VL_MUL_W(4, __Vtemp942, __Vtemp940, __Vtemp941);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1426[0U] 
        = __Vtemp942[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1426[1U] 
        = __Vtemp942[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1426[2U] 
        = __Vtemp942[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1426[3U] 
        = __Vtemp942[3U];
    VL_EXTEND_WQ(128,64, __Vtemp943, vlTOPp->mkbbox__DOT__x___05Fh13806);
    VL_EXTEND_WQ(128,64, __Vtemp944, vlTOPp->mkbbox__DOT__y___05Fh16256);
    VL_MUL_W(4, __Vtemp945, __Vtemp943, __Vtemp944);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1155[0U] 
        = __Vtemp945[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1155[1U] 
        = __Vtemp945[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1155[2U] 
        = __Vtemp945[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_23_62_63_MUL_0_CONCAT_rg_ETC___05F_d1155[3U] 
        = __Vtemp945[3U];
    VL_EXTEND_WQ(128,64, __Vtemp946, vlTOPp->mkbbox__DOT__x___05Fh13790);
    VL_EXTEND_WQ(128,64, __Vtemp947, vlTOPp->mkbbox__DOT__y___05Fh13791);
    VL_MUL_W(4, __Vtemp948, __Vtemp946, __Vtemp947);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_rg_input_BI_ETC___05F_d759[0U] 
        = __Vtemp948[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_rg_input_BI_ETC___05F_d759[1U] 
        = __Vtemp948[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_rg_input_BI_ETC___05F_d759[2U] 
        = __Vtemp948[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_rg_input_BI_ETC___05F_d759[3U] 
        = __Vtemp948[3U];
    VL_EXTEND_WQ(128,64, __Vtemp949, vlTOPp->mkbbox__DOT__x___05Fh13790);
    VL_EXTEND_WQ(128,64, __Vtemp950, vlTOPp->mkbbox__DOT__y___05Fh16256);
    VL_MUL_W(4, __Vtemp951, __Vtemp949, __Vtemp950);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1423[0U] 
        = __Vtemp951[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1423[1U] 
        = __Vtemp951[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1423[2U] 
        = __Vtemp951[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1423[3U] 
        = __Vtemp951[3U];
    VL_EXTEND_WQ(128,64, __Vtemp952, vlTOPp->mkbbox__DOT__x___05Fh13790);
    VL_EXTEND_WQ(128,64, __Vtemp953, vlTOPp->mkbbox__DOT__y___05Fh16238);
    VL_MUL_W(4, __Vtemp954, __Vtemp952, __Vtemp953);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1150[0U] 
        = __Vtemp954[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1150[1U] 
        = __Vtemp954[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1150[2U] 
        = __Vtemp954[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_22_55_56_MUL_0_CONCAT_rg_ETC___05F_d1150[3U] 
        = __Vtemp954[3U];
    VL_EXTEND_WQ(128,64, __Vtemp955, vlTOPp->mkbbox__DOT__x___05Fh13774);
    VL_EXTEND_WQ(128,64, __Vtemp956, vlTOPp->mkbbox__DOT__y___05Fh13775);
    VL_MUL_W(4, __Vtemp957, __Vtemp955, __Vtemp956);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_rg_input_BI_ETC___05F_d752[0U] 
        = __Vtemp957[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_rg_input_BI_ETC___05F_d752[1U] 
        = __Vtemp957[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_rg_input_BI_ETC___05F_d752[2U] 
        = __Vtemp957[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_rg_input_BI_ETC___05F_d752[3U] 
        = __Vtemp957[3U];
    VL_EXTEND_WQ(128,64, __Vtemp958, vlTOPp->mkbbox__DOT__x___05Fh13774);
    VL_EXTEND_WQ(128,64, __Vtemp959, vlTOPp->mkbbox__DOT__y___05Fh16238);
    VL_MUL_W(4, __Vtemp960, __Vtemp958, __Vtemp959);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1420[0U] 
        = __Vtemp960[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1420[1U] 
        = __Vtemp960[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1420[2U] 
        = __Vtemp960[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1420[3U] 
        = __Vtemp960[3U];
    VL_EXTEND_WQ(128,64, __Vtemp961, vlTOPp->mkbbox__DOT__x___05Fh13774);
    VL_EXTEND_WQ(128,64, __Vtemp962, vlTOPp->mkbbox__DOT__y___05Fh16220);
    VL_MUL_W(4, __Vtemp963, __Vtemp961, __Vtemp962);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1145[0U] 
        = __Vtemp963[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1145[1U] 
        = __Vtemp963[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1145[2U] 
        = __Vtemp963[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_21_48_49_MUL_0_CONCAT_rg_ETC___05F_d1145[3U] 
        = __Vtemp963[3U];
    VL_EXTEND_WQ(128,64, __Vtemp964, vlTOPp->mkbbox__DOT__x___05Fh13758);
    VL_EXTEND_WQ(128,64, __Vtemp965, vlTOPp->mkbbox__DOT__y___05Fh13759);
    VL_MUL_W(4, __Vtemp966, __Vtemp964, __Vtemp965);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_rg_input_BI_ETC___05F_d745[0U] 
        = __Vtemp966[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_rg_input_BI_ETC___05F_d745[1U] 
        = __Vtemp966[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_rg_input_BI_ETC___05F_d745[2U] 
        = __Vtemp966[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_rg_input_BI_ETC___05F_d745[3U] 
        = __Vtemp966[3U];
    VL_EXTEND_WQ(128,64, __Vtemp967, vlTOPp->mkbbox__DOT__x___05Fh13758);
    VL_EXTEND_WQ(128,64, __Vtemp968, vlTOPp->mkbbox__DOT__y___05Fh16220);
    VL_MUL_W(4, __Vtemp969, __Vtemp967, __Vtemp968);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1417[0U] 
        = __Vtemp969[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1417[1U] 
        = __Vtemp969[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1417[2U] 
        = __Vtemp969[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1417[3U] 
        = __Vtemp969[3U];
    VL_EXTEND_WQ(128,64, __Vtemp970, vlTOPp->mkbbox__DOT__x___05Fh13758);
    VL_EXTEND_WQ(128,64, __Vtemp971, vlTOPp->mkbbox__DOT__y___05Fh16202);
    VL_MUL_W(4, __Vtemp972, __Vtemp970, __Vtemp971);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1140[0U] 
        = __Vtemp972[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1140[1U] 
        = __Vtemp972[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1140[2U] 
        = __Vtemp972[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_20_41_42_MUL_0_CONCAT_rg_ETC___05F_d1140[3U] 
        = __Vtemp972[3U];
    VL_EXTEND_WQ(128,64, __Vtemp973, vlTOPp->mkbbox__DOT__x___05Fh13742);
    VL_EXTEND_WQ(128,64, __Vtemp974, vlTOPp->mkbbox__DOT__y___05Fh13743);
    VL_MUL_W(4, __Vtemp975, __Vtemp973, __Vtemp974);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_rg_input_BI_ETC___05F_d738[0U] 
        = __Vtemp975[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_rg_input_BI_ETC___05F_d738[1U] 
        = __Vtemp975[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_rg_input_BI_ETC___05F_d738[2U] 
        = __Vtemp975[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_rg_input_BI_ETC___05F_d738[3U] 
        = __Vtemp975[3U];
    VL_EXTEND_WQ(128,64, __Vtemp976, vlTOPp->mkbbox__DOT__x___05Fh13742);
    VL_EXTEND_WQ(128,64, __Vtemp977, vlTOPp->mkbbox__DOT__y___05Fh16202);
    VL_MUL_W(4, __Vtemp978, __Vtemp976, __Vtemp977);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1414[0U] 
        = __Vtemp978[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1414[1U] 
        = __Vtemp978[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1414[2U] 
        = __Vtemp978[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1414[3U] 
        = __Vtemp978[3U];
    VL_EXTEND_WQ(128,64, __Vtemp979, vlTOPp->mkbbox__DOT__x___05Fh13742);
    VL_EXTEND_WQ(128,64, __Vtemp980, vlTOPp->mkbbox__DOT__y___05Fh16184);
    VL_MUL_W(4, __Vtemp981, __Vtemp979, __Vtemp980);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1135[0U] 
        = __Vtemp981[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1135[1U] 
        = __Vtemp981[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1135[2U] 
        = __Vtemp981[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_19_34_35_MUL_0_CONCAT_rg_ETC___05F_d1135[3U] 
        = __Vtemp981[3U];
    VL_EXTEND_WQ(128,64, __Vtemp982, vlTOPp->mkbbox__DOT__x___05Fh13726);
    VL_EXTEND_WQ(128,64, __Vtemp983, vlTOPp->mkbbox__DOT__y___05Fh13727);
    VL_MUL_W(4, __Vtemp984, __Vtemp982, __Vtemp983);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_rg_input_BI_ETC___05F_d731[0U] 
        = __Vtemp984[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_rg_input_BI_ETC___05F_d731[1U] 
        = __Vtemp984[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_rg_input_BI_ETC___05F_d731[2U] 
        = __Vtemp984[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_rg_input_BI_ETC___05F_d731[3U] 
        = __Vtemp984[3U];
    VL_EXTEND_WQ(128,64, __Vtemp985, vlTOPp->mkbbox__DOT__x___05Fh13726);
    VL_EXTEND_WQ(128,64, __Vtemp986, vlTOPp->mkbbox__DOT__y___05Fh16184);
    VL_MUL_W(4, __Vtemp987, __Vtemp985, __Vtemp986);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1411[0U] 
        = __Vtemp987[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1411[1U] 
        = __Vtemp987[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1411[2U] 
        = __Vtemp987[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1411[3U] 
        = __Vtemp987[3U];
    VL_EXTEND_WQ(128,64, __Vtemp988, vlTOPp->mkbbox__DOT__x___05Fh13726);
    VL_EXTEND_WQ(128,64, __Vtemp989, vlTOPp->mkbbox__DOT__y___05Fh16166);
    VL_MUL_W(4, __Vtemp990, __Vtemp988, __Vtemp989);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1130[0U] 
        = __Vtemp990[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1130[1U] 
        = __Vtemp990[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1130[2U] 
        = __Vtemp990[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_18_27_28_MUL_0_CONCAT_rg_ETC___05F_d1130[3U] 
        = __Vtemp990[3U];
    VL_EXTEND_WQ(128,64, __Vtemp991, vlTOPp->mkbbox__DOT__x___05Fh13710);
    VL_EXTEND_WQ(128,64, __Vtemp992, vlTOPp->mkbbox__DOT__y___05Fh13711);
    VL_MUL_W(4, __Vtemp993, __Vtemp991, __Vtemp992);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_rg_input_BI_ETC___05F_d724[0U] 
        = __Vtemp993[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_rg_input_BI_ETC___05F_d724[1U] 
        = __Vtemp993[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_rg_input_BI_ETC___05F_d724[2U] 
        = __Vtemp993[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_rg_input_BI_ETC___05F_d724[3U] 
        = __Vtemp993[3U];
    VL_EXTEND_WQ(128,64, __Vtemp994, vlTOPp->mkbbox__DOT__x___05Fh13710);
    VL_EXTEND_WQ(128,64, __Vtemp995, vlTOPp->mkbbox__DOT__y___05Fh16166);
    VL_MUL_W(4, __Vtemp996, __Vtemp994, __Vtemp995);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1408[0U] 
        = __Vtemp996[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1408[1U] 
        = __Vtemp996[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1408[2U] 
        = __Vtemp996[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1408[3U] 
        = __Vtemp996[3U];
    VL_EXTEND_WQ(128,64, __Vtemp997, vlTOPp->mkbbox__DOT__x___05Fh13710);
    VL_EXTEND_WQ(128,64, __Vtemp998, vlTOPp->mkbbox__DOT__y___05Fh16148);
    VL_MUL_W(4, __Vtemp999, __Vtemp997, __Vtemp998);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1125[0U] 
        = __Vtemp999[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1125[1U] 
        = __Vtemp999[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1125[2U] 
        = __Vtemp999[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_17_20_21_MUL_0_CONCAT_rg_ETC___05F_d1125[3U] 
        = __Vtemp999[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1000, vlTOPp->mkbbox__DOT__x___05Fh13694);
    VL_EXTEND_WQ(128,64, __Vtemp1001, vlTOPp->mkbbox__DOT__y___05Fh13695);
    VL_MUL_W(4, __Vtemp1002, __Vtemp1000, __Vtemp1001);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_rg_input_BI_ETC___05F_d717[0U] 
        = __Vtemp1002[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_rg_input_BI_ETC___05F_d717[1U] 
        = __Vtemp1002[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_rg_input_BI_ETC___05F_d717[2U] 
        = __Vtemp1002[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_rg_input_BI_ETC___05F_d717[3U] 
        = __Vtemp1002[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1003, vlTOPp->mkbbox__DOT__x___05Fh13694);
    VL_EXTEND_WQ(128,64, __Vtemp1004, vlTOPp->mkbbox__DOT__y___05Fh16148);
    VL_MUL_W(4, __Vtemp1005, __Vtemp1003, __Vtemp1004);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1405[0U] 
        = __Vtemp1005[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1405[1U] 
        = __Vtemp1005[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1405[2U] 
        = __Vtemp1005[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1405[3U] 
        = __Vtemp1005[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1006, vlTOPp->mkbbox__DOT__x___05Fh13694);
    VL_EXTEND_WQ(128,64, __Vtemp1007, vlTOPp->mkbbox__DOT__y___05Fh16130);
    VL_MUL_W(4, __Vtemp1008, __Vtemp1006, __Vtemp1007);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1120[0U] 
        = __Vtemp1008[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1120[1U] 
        = __Vtemp1008[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1120[2U] 
        = __Vtemp1008[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_16_13_14_MUL_0_CONCAT_rg_ETC___05F_d1120[3U] 
        = __Vtemp1008[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1009, vlTOPp->mkbbox__DOT__x___05Fh13678);
    VL_EXTEND_WQ(128,64, __Vtemp1010, vlTOPp->mkbbox__DOT__y___05Fh13679);
    VL_MUL_W(4, __Vtemp1011, __Vtemp1009, __Vtemp1010);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_rg_input_BI_ETC___05F_d710[0U] 
        = __Vtemp1011[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_rg_input_BI_ETC___05F_d710[1U] 
        = __Vtemp1011[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_rg_input_BI_ETC___05F_d710[2U] 
        = __Vtemp1011[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_rg_input_BI_ETC___05F_d710[3U] 
        = __Vtemp1011[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1012, vlTOPp->mkbbox__DOT__x___05Fh13678);
    VL_EXTEND_WQ(128,64, __Vtemp1013, vlTOPp->mkbbox__DOT__y___05Fh16130);
    VL_MUL_W(4, __Vtemp1014, __Vtemp1012, __Vtemp1013);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1402[0U] 
        = __Vtemp1014[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1402[1U] 
        = __Vtemp1014[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1402[2U] 
        = __Vtemp1014[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1402[3U] 
        = __Vtemp1014[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1015, vlTOPp->mkbbox__DOT__x___05Fh13678);
    VL_EXTEND_WQ(128,64, __Vtemp1016, vlTOPp->mkbbox__DOT__y___05Fh16112);
    VL_MUL_W(4, __Vtemp1017, __Vtemp1015, __Vtemp1016);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1115[0U] 
        = __Vtemp1017[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1115[1U] 
        = __Vtemp1017[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1115[2U] 
        = __Vtemp1017[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_15_06_07_MUL_0_CONCAT_rg_ETC___05F_d1115[3U] 
        = __Vtemp1017[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1018, vlTOPp->mkbbox__DOT__x___05Fh13662);
    VL_EXTEND_WQ(128,64, __Vtemp1019, vlTOPp->mkbbox__DOT__y___05Fh13663);
    VL_MUL_W(4, __Vtemp1020, __Vtemp1018, __Vtemp1019);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_rg_input_BI_ETC___05F_d703[0U] 
        = __Vtemp1020[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_rg_input_BI_ETC___05F_d703[1U] 
        = __Vtemp1020[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_rg_input_BI_ETC___05F_d703[2U] 
        = __Vtemp1020[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_rg_input_BI_ETC___05F_d703[3U] 
        = __Vtemp1020[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1021, vlTOPp->mkbbox__DOT__x___05Fh13662);
    VL_EXTEND_WQ(128,64, __Vtemp1022, vlTOPp->mkbbox__DOT__y___05Fh16112);
    VL_MUL_W(4, __Vtemp1023, __Vtemp1021, __Vtemp1022);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1399[0U] 
        = __Vtemp1023[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1399[1U] 
        = __Vtemp1023[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1399[2U] 
        = __Vtemp1023[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1399[3U] 
        = __Vtemp1023[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1024, vlTOPp->mkbbox__DOT__x___05Fh13662);
    VL_EXTEND_WQ(128,64, __Vtemp1025, vlTOPp->mkbbox__DOT__y___05Fh16094);
    VL_MUL_W(4, __Vtemp1026, __Vtemp1024, __Vtemp1025);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1110[0U] 
        = __Vtemp1026[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1110[1U] 
        = __Vtemp1026[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1110[2U] 
        = __Vtemp1026[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_14_99_00_MUL_0_CONCAT_rg_ETC___05F_d1110[3U] 
        = __Vtemp1026[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1027, vlTOPp->mkbbox__DOT__x___05Fh13646);
    VL_EXTEND_WQ(128,64, __Vtemp1028, vlTOPp->mkbbox__DOT__y___05Fh13647);
    VL_MUL_W(4, __Vtemp1029, __Vtemp1027, __Vtemp1028);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_rg_input_BI_ETC___05F_d696[0U] 
        = __Vtemp1029[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_rg_input_BI_ETC___05F_d696[1U] 
        = __Vtemp1029[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_rg_input_BI_ETC___05F_d696[2U] 
        = __Vtemp1029[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_rg_input_BI_ETC___05F_d696[3U] 
        = __Vtemp1029[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1030, vlTOPp->mkbbox__DOT__x___05Fh13646);
    VL_EXTEND_WQ(128,64, __Vtemp1031, vlTOPp->mkbbox__DOT__y___05Fh16094);
    VL_MUL_W(4, __Vtemp1032, __Vtemp1030, __Vtemp1031);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1396[0U] 
        = __Vtemp1032[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1396[1U] 
        = __Vtemp1032[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1396[2U] 
        = __Vtemp1032[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1396[3U] 
        = __Vtemp1032[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1033, vlTOPp->mkbbox__DOT__x___05Fh13646);
    VL_EXTEND_WQ(128,64, __Vtemp1034, vlTOPp->mkbbox__DOT__y___05Fh16076);
    VL_MUL_W(4, __Vtemp1035, __Vtemp1033, __Vtemp1034);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1105[0U] 
        = __Vtemp1035[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1105[1U] 
        = __Vtemp1035[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1105[2U] 
        = __Vtemp1035[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_13_92_93_MUL_0_CONCAT_rg_ETC___05F_d1105[3U] 
        = __Vtemp1035[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1036, vlTOPp->mkbbox__DOT__x___05Fh13630);
    VL_EXTEND_WQ(128,64, __Vtemp1037, vlTOPp->mkbbox__DOT__y___05Fh13631);
    VL_MUL_W(4, __Vtemp1038, __Vtemp1036, __Vtemp1037);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_rg_input_BI_ETC___05F_d689[0U] 
        = __Vtemp1038[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_rg_input_BI_ETC___05F_d689[1U] 
        = __Vtemp1038[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_rg_input_BI_ETC___05F_d689[2U] 
        = __Vtemp1038[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_rg_input_BI_ETC___05F_d689[3U] 
        = __Vtemp1038[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1039, vlTOPp->mkbbox__DOT__x___05Fh13630);
    VL_EXTEND_WQ(128,64, __Vtemp1040, vlTOPp->mkbbox__DOT__y___05Fh16076);
    VL_MUL_W(4, __Vtemp1041, __Vtemp1039, __Vtemp1040);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1393[0U] 
        = __Vtemp1041[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1393[1U] 
        = __Vtemp1041[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1393[2U] 
        = __Vtemp1041[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1393[3U] 
        = __Vtemp1041[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1042, vlTOPp->mkbbox__DOT__x___05Fh13630);
    VL_EXTEND_WQ(128,64, __Vtemp1043, vlTOPp->mkbbox__DOT__y___05Fh16058);
    VL_MUL_W(4, __Vtemp1044, __Vtemp1042, __Vtemp1043);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1100[0U] 
        = __Vtemp1044[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1100[1U] 
        = __Vtemp1044[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1100[2U] 
        = __Vtemp1044[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_12_85_86_MUL_0_CONCAT_rg_ETC___05F_d1100[3U] 
        = __Vtemp1044[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1045, vlTOPp->mkbbox__DOT__x___05Fh13614);
    VL_EXTEND_WQ(128,64, __Vtemp1046, vlTOPp->mkbbox__DOT__y___05Fh13615);
    VL_MUL_W(4, __Vtemp1047, __Vtemp1045, __Vtemp1046);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_rg_input_BI_ETC___05F_d682[0U] 
        = __Vtemp1047[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_rg_input_BI_ETC___05F_d682[1U] 
        = __Vtemp1047[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_rg_input_BI_ETC___05F_d682[2U] 
        = __Vtemp1047[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_rg_input_BI_ETC___05F_d682[3U] 
        = __Vtemp1047[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1048, vlTOPp->mkbbox__DOT__x___05Fh13614);
    VL_EXTEND_WQ(128,64, __Vtemp1049, vlTOPp->mkbbox__DOT__y___05Fh16058);
    VL_MUL_W(4, __Vtemp1050, __Vtemp1048, __Vtemp1049);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1390[0U] 
        = __Vtemp1050[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1390[1U] 
        = __Vtemp1050[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1390[2U] 
        = __Vtemp1050[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1390[3U] 
        = __Vtemp1050[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1051, vlTOPp->mkbbox__DOT__x___05Fh13614);
    VL_EXTEND_WQ(128,64, __Vtemp1052, vlTOPp->mkbbox__DOT__y___05Fh16040);
    VL_MUL_W(4, __Vtemp1053, __Vtemp1051, __Vtemp1052);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1095[0U] 
        = __Vtemp1053[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1095[1U] 
        = __Vtemp1053[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1095[2U] 
        = __Vtemp1053[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_11_78_79_MUL_0_CONCAT_rg_ETC___05F_d1095[3U] 
        = __Vtemp1053[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1054, vlTOPp->mkbbox__DOT__x___05Fh13598);
    VL_EXTEND_WQ(128,64, __Vtemp1055, vlTOPp->mkbbox__DOT__y___05Fh13599);
    VL_MUL_W(4, __Vtemp1056, __Vtemp1054, __Vtemp1055);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_rg_input_BI_ETC___05F_d675[0U] 
        = __Vtemp1056[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_rg_input_BI_ETC___05F_d675[1U] 
        = __Vtemp1056[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_rg_input_BI_ETC___05F_d675[2U] 
        = __Vtemp1056[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_rg_input_BI_ETC___05F_d675[3U] 
        = __Vtemp1056[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1057, vlTOPp->mkbbox__DOT__x___05Fh13598);
    VL_EXTEND_WQ(128,64, __Vtemp1058, vlTOPp->mkbbox__DOT__y___05Fh16040);
    VL_MUL_W(4, __Vtemp1059, __Vtemp1057, __Vtemp1058);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1387[0U] 
        = __Vtemp1059[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1387[1U] 
        = __Vtemp1059[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1387[2U] 
        = __Vtemp1059[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1387[3U] 
        = __Vtemp1059[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1060, vlTOPp->mkbbox__DOT__x___05Fh13598);
    VL_EXTEND_WQ(128,64, __Vtemp1061, vlTOPp->mkbbox__DOT__y___05Fh16022);
    VL_MUL_W(4, __Vtemp1062, __Vtemp1060, __Vtemp1061);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1090[0U] 
        = __Vtemp1062[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1090[1U] 
        = __Vtemp1062[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1090[2U] 
        = __Vtemp1062[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_10_71_72_MUL_0_CONCAT_rg_ETC___05F_d1090[3U] 
        = __Vtemp1062[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1063, vlTOPp->mkbbox__DOT__x___05Fh13582);
    VL_EXTEND_WQ(128,64, __Vtemp1064, vlTOPp->mkbbox__DOT__y___05Fh13583);
    VL_MUL_W(4, __Vtemp1065, __Vtemp1063, __Vtemp1064);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_rg_input_BIT_ETC___05F_d668[0U] 
        = __Vtemp1065[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_rg_input_BIT_ETC___05F_d668[1U] 
        = __Vtemp1065[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_rg_input_BIT_ETC___05F_d668[2U] 
        = __Vtemp1065[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_rg_input_BIT_ETC___05F_d668[3U] 
        = __Vtemp1065[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1066, vlTOPp->mkbbox__DOT__x___05Fh13582);
    VL_EXTEND_WQ(128,64, __Vtemp1067, vlTOPp->mkbbox__DOT__y___05Fh16022);
    VL_MUL_W(4, __Vtemp1068, __Vtemp1066, __Vtemp1067);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1384[0U] 
        = __Vtemp1068[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1384[1U] 
        = __Vtemp1068[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1384[2U] 
        = __Vtemp1068[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1384[3U] 
        = __Vtemp1068[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1069, vlTOPp->mkbbox__DOT__x___05Fh13582);
    VL_EXTEND_WQ(128,64, __Vtemp1070, vlTOPp->mkbbox__DOT__y___05Fh16004);
    VL_MUL_W(4, __Vtemp1071, __Vtemp1069, __Vtemp1070);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1085[0U] 
        = __Vtemp1071[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1085[1U] 
        = __Vtemp1071[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1085[2U] 
        = __Vtemp1071[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_9_64_65_MUL_0_CONCAT_rg___05FETC___05F_d1085[3U] 
        = __Vtemp1071[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1072, vlTOPp->mkbbox__DOT__x___05Fh13566);
    VL_EXTEND_WQ(128,64, __Vtemp1073, vlTOPp->mkbbox__DOT__y___05Fh13567);
    VL_MUL_W(4, __Vtemp1074, __Vtemp1072, __Vtemp1073);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_rg_input_BIT_ETC___05F_d661[0U] 
        = __Vtemp1074[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_rg_input_BIT_ETC___05F_d661[1U] 
        = __Vtemp1074[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_rg_input_BIT_ETC___05F_d661[2U] 
        = __Vtemp1074[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_rg_input_BIT_ETC___05F_d661[3U] 
        = __Vtemp1074[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1075, vlTOPp->mkbbox__DOT__x___05Fh13566);
    VL_EXTEND_WQ(128,64, __Vtemp1076, vlTOPp->mkbbox__DOT__y___05Fh16004);
    VL_MUL_W(4, __Vtemp1077, __Vtemp1075, __Vtemp1076);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1381[0U] 
        = __Vtemp1077[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1381[1U] 
        = __Vtemp1077[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1381[2U] 
        = __Vtemp1077[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1381[3U] 
        = __Vtemp1077[3U];
    vlTOPp->mkbbox__DOT__x___05Fh10595 = (vlTOPp->mkbbox__DOT__x___05Fh10598 
                                          + vlTOPp->mkbbox__DOT__y___05Fh10599);
    VL_EXTEND_WQ(128,64, __Vtemp1078, vlTOPp->mkbbox__DOT__x___05Fh13566);
    VL_EXTEND_WQ(128,64, __Vtemp1079, vlTOPp->mkbbox__DOT__x___05Fh10598);
    VL_MUL_W(4, __Vtemp1080, __Vtemp1078, __Vtemp1079);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1080[0U] 
        = __Vtemp1080[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1080[1U] 
        = __Vtemp1080[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1080[2U] 
        = __Vtemp1080[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_8_57_58_MUL_0_CONCAT_rg___05FETC___05F_d1080[3U] 
        = __Vtemp1080[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1081, vlTOPp->mkbbox__DOT__x___05Fh13550);
    VL_EXTEND_WQ(128,64, __Vtemp1082, vlTOPp->mkbbox__DOT__y___05Fh13551);
    VL_MUL_W(4, __Vtemp1083, __Vtemp1081, __Vtemp1082);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_rg_input_BIT_ETC___05F_d654[0U] 
        = __Vtemp1083[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_rg_input_BIT_ETC___05F_d654[1U] 
        = __Vtemp1083[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_rg_input_BIT_ETC___05F_d654[2U] 
        = __Vtemp1083[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_rg_input_BIT_ETC___05F_d654[3U] 
        = __Vtemp1083[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1084, vlTOPp->mkbbox__DOT__x___05Fh13550);
    VL_EXTEND_WQ(128,64, __Vtemp1085, vlTOPp->mkbbox__DOT__x___05Fh10598);
    VL_MUL_W(4, __Vtemp1086, __Vtemp1084, __Vtemp1085);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1378[0U] 
        = __Vtemp1086[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1378[1U] 
        = __Vtemp1086[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1378[2U] 
        = __Vtemp1086[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1378[3U] 
        = __Vtemp1086[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1087, vlTOPp->mkbbox__DOT__x___05Fh13550);
    VL_EXTEND_WQ(128,64, __Vtemp1088, vlTOPp->mkbbox__DOT__y___05Fh15968);
    VL_MUL_W(4, __Vtemp1089, __Vtemp1087, __Vtemp1088);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1077[0U] 
        = __Vtemp1089[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1077[1U] 
        = __Vtemp1089[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1077[2U] 
        = __Vtemp1089[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_7_50_51_MUL_0_CONCAT_rg___05FETC___05F_d1077[3U] 
        = __Vtemp1089[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1090, vlTOPp->mkbbox__DOT__x___05Fh13534);
    VL_EXTEND_WQ(128,64, __Vtemp1091, vlTOPp->mkbbox__DOT__y___05Fh13535);
    VL_MUL_W(4, __Vtemp1092, __Vtemp1090, __Vtemp1091);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_rg_input_BIT_ETC___05F_d647[0U] 
        = __Vtemp1092[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_rg_input_BIT_ETC___05F_d647[1U] 
        = __Vtemp1092[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_rg_input_BIT_ETC___05F_d647[2U] 
        = __Vtemp1092[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_rg_input_BIT_ETC___05F_d647[3U] 
        = __Vtemp1092[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1093, vlTOPp->mkbbox__DOT__x___05Fh13534);
    VL_EXTEND_WQ(128,64, __Vtemp1094, vlTOPp->mkbbox__DOT__y___05Fh15968);
    VL_MUL_W(4, __Vtemp1095, __Vtemp1093, __Vtemp1094);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1375[0U] 
        = __Vtemp1095[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1375[1U] 
        = __Vtemp1095[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1375[2U] 
        = __Vtemp1095[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1375[3U] 
        = __Vtemp1095[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1096, vlTOPp->mkbbox__DOT__x___05Fh13534);
    VL_EXTEND_WQ(128,64, __Vtemp1097, vlTOPp->mkbbox__DOT__y___05Fh15950);
    VL_MUL_W(4, __Vtemp1098, __Vtemp1096, __Vtemp1097);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1072[0U] 
        = __Vtemp1098[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1072[1U] 
        = __Vtemp1098[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1072[2U] 
        = __Vtemp1098[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_6_43_44_MUL_0_CONCAT_rg___05FETC___05F_d1072[3U] 
        = __Vtemp1098[3U];
    vlTOPp->mkbbox__DOT__result___05Fh3789 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[0U]))) 
                                              + vlTOPp->mkbbox__DOT__y___05Fh13487);
    VL_EXTEND_WQ(128,64, __Vtemp1099, vlTOPp->mkbbox__DOT__x___05Fh13518);
    VL_EXTEND_WQ(128,64, __Vtemp1100, vlTOPp->mkbbox__DOT__y___05Fh13519);
    VL_MUL_W(4, __Vtemp1101, __Vtemp1099, __Vtemp1100);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_rg_input_BIT_ETC___05F_d640[0U] 
        = __Vtemp1101[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_rg_input_BIT_ETC___05F_d640[1U] 
        = __Vtemp1101[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_rg_input_BIT_ETC___05F_d640[2U] 
        = __Vtemp1101[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_rg_input_BIT_ETC___05F_d640[3U] 
        = __Vtemp1101[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1102, vlTOPp->mkbbox__DOT__x___05Fh13518);
    VL_EXTEND_WQ(128,64, __Vtemp1103, vlTOPp->mkbbox__DOT__y___05Fh15950);
    VL_MUL_W(4, __Vtemp1104, __Vtemp1102, __Vtemp1103);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1372[0U] 
        = __Vtemp1104[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1372[1U] 
        = __Vtemp1104[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1372[2U] 
        = __Vtemp1104[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1372[3U] 
        = __Vtemp1104[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1105, vlTOPp->mkbbox__DOT__x___05Fh13518);
    VL_EXTEND_WQ(128,64, __Vtemp1106, vlTOPp->mkbbox__DOT__y___05Fh15932);
    VL_MUL_W(4, __Vtemp1107, __Vtemp1105, __Vtemp1106);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1067[0U] 
        = __Vtemp1107[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1067[1U] 
        = __Vtemp1107[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1067[2U] 
        = __Vtemp1107[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_5_36_37_MUL_0_CONCAT_rg___05FETC___05F_d1067[3U] 
        = __Vtemp1107[3U];
    vlTOPp->mkbbox__DOT__result___05Fh3787 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[0U]))) 
                                              + vlTOPp->mkbbox__DOT__y___05Fh13471);
    VL_EXTEND_WQ(128,64, __Vtemp1108, vlTOPp->mkbbox__DOT__x___05Fh13502);
    VL_EXTEND_WQ(128,64, __Vtemp1109, vlTOPp->mkbbox__DOT__y___05Fh13503);
    VL_MUL_W(4, __Vtemp1110, __Vtemp1108, __Vtemp1109);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_rg_input_BIT_ETC___05F_d633[0U] 
        = __Vtemp1110[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_rg_input_BIT_ETC___05F_d633[1U] 
        = __Vtemp1110[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_rg_input_BIT_ETC___05F_d633[2U] 
        = __Vtemp1110[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_rg_input_BIT_ETC___05F_d633[3U] 
        = __Vtemp1110[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1111, vlTOPp->mkbbox__DOT__x___05Fh13502);
    VL_EXTEND_WQ(128,64, __Vtemp1112, vlTOPp->mkbbox__DOT__y___05Fh15932);
    VL_MUL_W(4, __Vtemp1113, __Vtemp1111, __Vtemp1112);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1369[0U] 
        = __Vtemp1113[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1369[1U] 
        = __Vtemp1113[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1369[2U] 
        = __Vtemp1113[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1369[3U] 
        = __Vtemp1113[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1114, vlTOPp->mkbbox__DOT__x___05Fh13502);
    VL_EXTEND_WQ(128,64, __Vtemp1115, vlTOPp->mkbbox__DOT__y___05Fh15914);
    VL_MUL_W(4, __Vtemp1116, __Vtemp1114, __Vtemp1115);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1062[0U] 
        = __Vtemp1116[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1062[1U] 
        = __Vtemp1116[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1062[2U] 
        = __Vtemp1116[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_4_29_30_MUL_0_CONCAT_rg___05FETC___05F_d1062[3U] 
        = __Vtemp1116[3U];
    vlTOPp->mkbbox__DOT__result___05Fh3785 = ((((QData)((IData)(
                                                                vlTOPp->mkbbox__DOT__rg_input[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlTOPp->mkbbox__DOT__rg_input[0U]))) 
                                              + vlTOPp->mkbbox__DOT__y___05Fh13455);
    VL_EXTEND_WQ(128,64, __Vtemp1117, vlTOPp->mkbbox__DOT__x___05Fh13486);
    VL_EXTEND_WQ(128,64, __Vtemp1118, vlTOPp->mkbbox__DOT__y___05Fh13487);
    VL_MUL_W(4, __Vtemp1119, __Vtemp1117, __Vtemp1118);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_rg_input_BIT_ETC___05F_d626[0U] 
        = __Vtemp1119[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_rg_input_BIT_ETC___05F_d626[1U] 
        = __Vtemp1119[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_rg_input_BIT_ETC___05F_d626[2U] 
        = __Vtemp1119[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_rg_input_BIT_ETC___05F_d626[3U] 
        = __Vtemp1119[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1120, vlTOPp->mkbbox__DOT__x___05Fh13486);
    VL_EXTEND_WQ(128,64, __Vtemp1121, vlTOPp->mkbbox__DOT__y___05Fh15914);
    VL_MUL_W(4, __Vtemp1122, __Vtemp1120, __Vtemp1121);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1366[0U] 
        = __Vtemp1122[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1366[1U] 
        = __Vtemp1122[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1366[2U] 
        = __Vtemp1122[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1366[3U] 
        = __Vtemp1122[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1123, vlTOPp->mkbbox__DOT__x___05Fh13486);
    VL_EXTEND_WQ(128,64, __Vtemp1124, vlTOPp->mkbbox__DOT__y___05Fh15896);
    VL_MUL_W(4, __Vtemp1125, __Vtemp1123, __Vtemp1124);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1057[0U] 
        = __Vtemp1125[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1057[1U] 
        = __Vtemp1125[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1057[2U] 
        = __Vtemp1125[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_3_22_23_MUL_0_CONCAT_rg___05FETC___05F_d1057[3U] 
        = __Vtemp1125[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1126, vlTOPp->mkbbox__DOT__x___05Fh13470);
    VL_EXTEND_WQ(128,64, __Vtemp1127, vlTOPp->mkbbox__DOT__y___05Fh13471);
    VL_MUL_W(4, __Vtemp1128, __Vtemp1126, __Vtemp1127);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_rg_input_BIT_ETC___05F_d619[0U] 
        = __Vtemp1128[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_rg_input_BIT_ETC___05F_d619[1U] 
        = __Vtemp1128[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_rg_input_BIT_ETC___05F_d619[2U] 
        = __Vtemp1128[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_rg_input_BIT_ETC___05F_d619[3U] 
        = __Vtemp1128[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1129, vlTOPp->mkbbox__DOT__x___05Fh13470);
    VL_EXTEND_WQ(128,64, __Vtemp1130, vlTOPp->mkbbox__DOT__y___05Fh15896);
    VL_MUL_W(4, __Vtemp1131, __Vtemp1129, __Vtemp1130);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1363[0U] 
        = __Vtemp1131[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1363[1U] 
        = __Vtemp1131[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1363[2U] 
        = __Vtemp1131[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1363[3U] 
        = __Vtemp1131[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1132, vlTOPp->mkbbox__DOT__x___05Fh13470);
    VL_EXTEND_WQ(128,64, __Vtemp1133, vlTOPp->mkbbox__DOT__y___05Fh15878);
    VL_MUL_W(4, __Vtemp1134, __Vtemp1132, __Vtemp1133);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1052[0U] 
        = __Vtemp1134[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1052[1U] 
        = __Vtemp1134[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1052[2U] 
        = __Vtemp1134[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_2_15_16_MUL_0_CONCAT_rg___05FETC___05F_d1052[3U] 
        = __Vtemp1134[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1135, vlTOPp->mkbbox__DOT__x___05Fh13440);
    VL_EXTEND_WQ(128,64, __Vtemp1136, (((QData)((IData)(
                                                        vlTOPp->mkbbox__DOT__rg_input[3U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->mkbbox__DOT__rg_input[2U]))));
    VL_MUL_W(4, __Vtemp1137, __Vtemp1135, __Vtemp1136);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_rg_input_BIT_ETC___05F_d606[0U] 
        = __Vtemp1137[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_rg_input_BIT_ETC___05F_d606[1U] 
        = __Vtemp1137[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_rg_input_BIT_ETC___05F_d606[2U] 
        = __Vtemp1137[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_rg_input_BIT_ETC___05F_d606[3U] 
        = __Vtemp1137[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1138, vlTOPp->mkbbox__DOT__x___05Fh13440);
    VL_EXTEND_WQ(128,64, __Vtemp1139, vlTOPp->mkbbox__DOT__y___05Fh15860);
    VL_MUL_W(4, __Vtemp1140, __Vtemp1138, __Vtemp1139);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_0_CONCAT_rg___05FETC___05F_d1358[0U] 
        = __Vtemp1140[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_0_CONCAT_rg___05FETC___05F_d1358[1U] 
        = __Vtemp1140[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_0_CONCAT_rg___05FETC___05F_d1358[2U] 
        = __Vtemp1140[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_0_04_05_MUL_0_CONCAT_rg___05FETC___05F_d1358[3U] 
        = __Vtemp1140[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1141, vlTOPp->mkbbox__DOT__x___05Fh13454);
    VL_EXTEND_WQ(128,64, __Vtemp1142, vlTOPp->mkbbox__DOT__y___05Fh15860);
    VL_MUL_W(4, __Vtemp1143, __Vtemp1141, __Vtemp1142);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1048[0U] 
        = __Vtemp1143[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1048[1U] 
        = __Vtemp1143[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1048[2U] 
        = __Vtemp1143[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1048[3U] 
        = __Vtemp1143[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1144, vlTOPp->mkbbox__DOT__x___05Fh13454);
    VL_EXTEND_WQ(128,64, __Vtemp1145, vlTOPp->mkbbox__DOT__y___05Fh13455);
    VL_MUL_W(4, __Vtemp1146, __Vtemp1144, __Vtemp1145);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_rg_input_BIT_ETC___05F_d612[0U] 
        = __Vtemp1146[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_rg_input_BIT_ETC___05F_d612[1U] 
        = __Vtemp1146[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_rg_input_BIT_ETC___05F_d612[2U] 
        = __Vtemp1146[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_rg_input_BIT_ETC___05F_d612[3U] 
        = __Vtemp1146[3U];
    VL_EXTEND_WQ(128,64, __Vtemp1147, vlTOPp->mkbbox__DOT__x___05Fh13454);
    VL_EXTEND_WQ(128,64, __Vtemp1148, vlTOPp->mkbbox__DOT__y___05Fh15878);
    VL_MUL_W(4, __Vtemp1149, __Vtemp1147, __Vtemp1148);
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1360[0U] 
        = __Vtemp1149[0U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1360[1U] 
        = __Vtemp1149[1U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1360[2U] 
        = __Vtemp1149[2U];
    vlTOPp->mkbbox__DOT___0_CONCAT_rg_input_BIT_1_08_09_MUL_0_CONCAT_rg___05FETC___05F_d1360[3U] 
        = __Vtemp1149[3U];
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
    __Vtemp1150[2U] = (((((((((((((((((((((((((((((
                                                   ((((((((((((((((4U 
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
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                         | (((5U == 
                                              (0x7fU 
                                               & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                  >> 0x19U))) 
                                             & (3U 
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
                                            & (2U == 
                                               (7U 
                                                & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                   >> 0xcU)))) 
                                           & (0x33U 
                                              == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                       | (((0x600U 
                                            == (0xfffU 
                                                & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                   >> 0x14U))) 
                                           & (1U == 
                                              (7U & 
                                               (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                >> 0xcU)))) 
                                          & (0x13U 
                                             == (0x7fU 
                                                 & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                      | (((0x602U == 
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
                                       & (0x33U == 
                                          (0x7fU & 
                                           vlTOPp->mkbbox__DOT__rg_input[4U])))) 
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
                                      & (4U == (7U 
                                                & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                   >> 0xcU)))) 
                                     & (0x33U == (0x7fU 
                                                  & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                 | (((5U == (0x7fU 
                                             & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                >> 0x19U))) 
                                     & (5U == (7U & 
                                               (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                >> 0xcU)))) 
                                    & (0x33U == (0x7fU 
                                                 & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                                | (((0x287U == (0xfffU 
                                                & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                   >> 0x14U))) 
                                    & (5U == (7U & 
                                              (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                               >> 0xcU)))) 
                                   & (0x13U == (0x7fU 
                                                & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                               | (((0x20U == (0x7fU 
                                              & (vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                 >> 0x19U))) 
                                   & (6U == (7U & (
                                                   vlTOPp->mkbbox__DOT__rg_input[4U] 
                                                   >> 0xcU)))) 
                                  & (0x33U == (0x7fU 
                                               & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                              | (((0x30U == (0x7fU 
                                             & (vlTOPp->mkbbox__DOT__rg_input[4U] 
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
                                & (0x33U == (0x7fU 
                                             & vlTOPp->mkbbox__DOT__rg_input[4U])))) 
                            | (((0x604U == (0xfffU 
                                            & (vlTOPp->mkbbox__DOT__rg_input[4U] 
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
                              & (0x13U == (0x7fU & 
                                           vlTOPp->mkbbox__DOT__rg_input[4U])))) 
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
    vlTOPp->mkbbox__DOT__wr_output_wget[2U] = __Vtemp1150[2U];
    vlTOPp->mkbbox__DOT__bbox_out[0U] = vlTOPp->mkbbox__DOT__wr_output_wget[0U];
    vlTOPp->mkbbox__DOT__bbox_out[1U] = vlTOPp->mkbbox__DOT__wr_output_wget[1U];
    vlTOPp->mkbbox__DOT__bbox_out[2U] = vlTOPp->mkbbox__DOT__wr_output_wget[2U];
    vlTOPp->bbox_out[0U] = vlTOPp->mkbbox__DOT__bbox_out[0U];
    vlTOPp->bbox_out[1U] = vlTOPp->mkbbox__DOT__bbox_out[1U];
    vlTOPp->bbox_out[2U] = vlTOPp->mkbbox__DOT__bbox_out[2U];
}
