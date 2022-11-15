function Bit#(XLEN) fn_add_uw(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  return rs2 + zeroExtend(rs1[31:0]);                             //  zeroExtend increases the bit width of an expression by padding the most significant end with zeros
endfunction

function Bit#(XLEN) fn_sh1add(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  return rs2 + (rs1<<1);
endfunction

function Bit#(XLEN) fn_sh1add_uw(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  return rs2 + ((zeroExtend(rs1[31:0]))<<1);                      // The Syntax x[h:l] slices the bits from h to l inclusive i.e the result will have h-l+1 bits
endfunction

function Bit#(XLEN) fn_sh2add(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  return rs2 + (rs1<<2);                                          // The operator << shifts the operand to the specified number of bits to the left. Excess bits shifted off to the left are discarded
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
  int shamt = unpack(zeroExtend(instr[25:20]));                   //  unpack converts from Bit#(n) to various types including Bool, Int, and UInt
  return zeroExtend(rs1[31:0])<<shamt;
endfunction
