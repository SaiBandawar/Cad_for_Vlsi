function Bit#(XLEN) fn_clmul(Bit#(XLEN) rs1, Bit#(XLEN) rs2);       // clmul produces the lower half of the 2·XLEN carry-less product.
  Bit#(XLEN) out = 0;
  for(Integer i=0; i<valueof(XLEN); i=i+1) 
    out = out ^ (((rs2>>i) & 1)*(rs1<<i));
  return out;
endfunction

function Bit#(XLEN) fn_clmulh(Bit#(XLEN) rs1, Bit#(XLEN) rs2);      // clmulh produces the upper half of the 2·XLEN carry-less product.
  Bit#(XLEN) out = 0;
  for(Integer i=1; i<valueof(XLEN); i=i+1) 
    out = out ^ (((rs2>>i) & 1)*(rs1>>(valueof(XLEN)-i)));
  return out;
endfunction

function Bit#(XLEN) fn_clmulr(Bit#(XLEN) rs1, Bit#(XLEN) rs2);      // clmulr produces bits 2·XLEN−2:XLEN-1 of the 2·XLEN carry-less product.
  Bit#(XLEN) out = 0;
  for(Integer i=0; i<valueof(XLEN); i=i+1) 
    out = out ^ (((rs2>>i) & 1)*(rs1>>(valueof(XLEN)-i-1)));
  return out;
endfunction
