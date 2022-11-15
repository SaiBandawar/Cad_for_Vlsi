function Bit#(XLEN) fn_add_uw(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  return rs2 + zeroExtend(rs1[31:0]);
endfunction

function Bit#(XLEN) fn_sh1add(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  return rs2 + (rs1<<1);
endfunction

function Bit#(XLEN) fn_sh1add_uw(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  return rs2 + ((zeroExtend(rs1[31:0]))<<1);
endfunction

function Bit#(XLEN) fn_sh2add(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  return rs2 + (rs1<<2);
endfunction

function Bit#(XLEN) fn_sh2add_uw(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  return rs2 + ((zeroExtend(rs1[31:0]))<<2);
endfunction

function Bit#(XLEN) fn_sh3add(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  return rs2 + (rs1<<3);
endfunction

function Bit#(XLEN) fn_sh3add_uw(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  return rs2 + ((zeroExtend(rs1[31:0]))<<3);
endfunction

function Bit#(XLEN) fn_slli_uw(Bit#(XLEN) rs1, Bit#(32) instr);
  int shamt = unpack(zeroExtend(instr[25:20]));
  return zeroExtend(rs1[31:0])<<shamt;
endfunction