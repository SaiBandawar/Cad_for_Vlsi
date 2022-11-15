function Bit#(XLEN) fn_clmul(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  Bit#(XLEN) out = 0;
  for(Integer i=0; i<valueof(XLEN); i=i+1) 
    out = out ^ (((rs2>>i) & 1)*(rs1<<i));
  return out;
endfunction

function Bit#(XLEN) fn_clmulh(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  Bit#(XLEN) out = 0;
  for(Integer i=1; i<valueof(XLEN); i=i+1) 
    out = out ^ (((rs2>>i) & 1)*(rs1>>(valueof(XLEN)-i)));
  return out;
endfunction

function Bit#(XLEN) fn_clmulr(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  Bit#(XLEN) out = 0;
  for(Integer i=0; i<valueof(XLEN); i=i+1) 
    out = out ^ (((rs2>>i) & 1)*(rs1>>(valueof(XLEN)-i-1)));
  return out;
endfunction
