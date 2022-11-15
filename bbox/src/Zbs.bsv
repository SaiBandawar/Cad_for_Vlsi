function Bit#(XLEN) fn_bclr(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  Bit#(XLEN) a;
  a = rs2 & fromInteger((valueof(XLEN) - 1));
  return (rs1 & (~(1 << a)));
endfunction

function Bit#(XLEN) fn_bclri(Bit#(XLEN) rs1, Bit#(32) instr);
  Bit#(XLEN) a;
  int shamt;
  if(valueof(XLEN)==32)
    shamt = unpack(zeroExtend(instr[24:20]));
  else
    shamt = unpack(zeroExtend(instr[25:20]));
  a = zeroExtend(pack(shamt & (fromInteger(valueof(XLEN)) - 1)));
  return (rs1 & (~(1 << a)));
endfunction

function Bit#(XLEN) fn_bext(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  Bit#(XLEN) a;
  a = rs2 & fromInteger((valueof(XLEN) - 1));
  return ((rs1 >> a) & 1);
endfunction

function Bit#(XLEN) fn_bexti(Bit#(XLEN) rs1, Bit#(32) instr);
  Bit#(XLEN) a;
  int shamt;
  if(valueof(XLEN)==32)
    shamt = unpack(zeroExtend(instr[24:20]));
  else
    shamt = unpack(zeroExtend(instr[25:20]));
  a = zeroExtend(pack(shamt & (fromInteger(valueof(XLEN)) - 1)));
  return ((rs1 >> a) & 1);
endfunction

function Bit#(XLEN) fn_binv(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  Bit#(XLEN) a;
  a = rs2 & fromInteger((valueof(XLEN) - 1));
  return (rs1^ (1<<a));
endfunction

function Bit#(XLEN) fn_binvi(Bit#(XLEN) rs1, Bit#(32) instr );
  Bit#(XLEN) a;
  int shamt;
  if(valueof(XLEN)==32)
    shamt = unpack(zeroExtend(instr[24:20]));
  else
    shamt = unpack(zeroExtend(instr[25:20]));
  a = zeroExtend(pack(shamt & (fromInteger(valueof(XLEN)) - 1)));
  return (rs1^ (1<<a));
endfunction

function Bit#(XLEN) fn_bset(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  Bit#(XLEN) a;
  a = rs2 & fromInteger((valueof(XLEN) - 1));
  return (rs1| (1<<a));
endfunction

function Bit#(XLEN) fn_bseti(Bit#(XLEN) rs1, Bit#(32) instr );
  Bit#(XLEN) a;
  int shamt;
  if(valueof(XLEN)==32)
    shamt = unpack(zeroExtend(instr[24:20]));
  else
    shamt = unpack(zeroExtend(instr[25:20]));
  a = zeroExtend(pack(shamt & (fromInteger(valueof(XLEN)) - 1)));
  return (rs1| (1<<a));
endfunction