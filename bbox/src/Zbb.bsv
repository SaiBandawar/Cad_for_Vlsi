function Bit#(XLEN) fn_andn(Bit#(XLEN) rs1, Bit#(XLEN) rs2);   // The 4 bitwise operator are Unary(~), OR(|), AND(&) and XOR(^)
  return rs1 & ~rs2;                                           // The unary '~' operator performs the bitwise inversion of rs2
endfunction

function Bit#(XLEN) fn_orn(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  return rs1 | ~rs2;                                           // Bitwise OR operation betwenn rs1 and bitwise inversion of rs2
endfunction

function Bit#(XLEN) fn_xnor(Bit#(XLEN) rs1, Bit#(XLEN) rs2);
  return ~(rs1 ^ rs2);                                         // Bitwise Inversion of Bitwise XOR between rs1 and rs2
endfunction

function Bit#(XLEN) fn_clz(Bit#(XLEN) rs1);
  Bit#(XLEN)  a=0;
  for (Integer i= valueof(XLEN); ((i>0) && (a==0)); i=i-1)
    if(rs1[i-1] == 1) 
      a = a + fromInteger(i);
    else
      a = a;
  return (fromInteger(valueof(XLEN))-a);
endfunction

function Bit#(XLEN) fn_clzw(Bit#(XLEN) rs1);
  Bit#(XLEN) a=0;
  for (Integer i=32 ; ((i>0)&& (a==0)) ; i=i-1) 
    if(rs1[i-1] == 1) 
      a = a+ fromInteger(i);
    else
      a = a;
  return (32-a); 
endfunction

function Bit#(XLEN) fn_ctz(Bit#(XLEN) rs1);
  Bit#(XLEN)  a=0;
  for (Integer i=0; i<valueof(XLEN); i=i+1) 
    if((rs1[i] == 1)  && (a==0) && (rs1[0]==0))
      a = a + fromInteger(i); 
    else
      if((i == (valueof(XLEN)-1)) && (a==0) && (rs1[0]==0))
        a = a + fromInteger(valueof(XLEN));
  return a;
endfunction

function Bit#(XLEN) fn_ctzw(Bit#(XLEN) rs1);
  Bit#(XLEN)  a=0;
  for(Integer i=0; i<32; i=i+1)
    if((rs1[i] == 1) && (a==0) && (rs1[0]==0))
      a = a + fromInteger(i); 
    else
      if((i == 31) && (a==0) && (rs1[0]==0))
        a = a + 32;
  return a;
endfunction

function Bit#(XLEN) fn_cpop(Bit#(XLEN) rs1);
  Bit#(XLEN)  bitcount=0;
  for (Integer i=0; i<valueof(XLEN) ; i=i+1) 
    if(rs1[i] == 1)
      bitcount = bitcount+1;
    else
      bitcount = bitcount;
  return bitcount;
endfunction

function Bit#(XLEN) fn_cpopw(Bit#(XLEN) rs1);
  Bit#(XLEN)  bitcount=0;
  for (Integer i=0; i<32; i=i+1) 
    if(rs1[i] == 1)
      bitcount = bitcount+1;
    else
      bitcount = bitcount;
  return bitcount;
endfunction

function Bit#(XLEN) fn_max(Bit#(XLEN) rs1, Bit#(XLEN) rs2);   // This instruction returns the larger of two signed integers
  Bit#(XLEN) out=rs1;
  if(rs1[valueof(XLEN)-1]==rs2[valueof(XLEN)-1])
    if(rs1 < rs2)
      out = rs2;
  else
    if(rs2[valueof(XLEN)-1] == 0)
      out = rs2; 
  return out;
endfunction

function Bit#(XLEN) fn_maxu(Bit#(XLEN) rs1, Bit#(XLEN) rs2);    // This instruction returns the larger of two unsigned integers.
  Bit#(XLEN) out;
  if(rs1 > rs2)
    out = rs1;
  else
    out = rs2;
  return out;
endfunction

function Bit#(XLEN) fn_min(Bit#(XLEN) rs1, Bit#(XLEN) rs2);     // This instruction returns the smaller of two signed integers.
  Bit#(XLEN) out=rs1;
  if(rs1[valueof(XLEN)-1]==rs2[valueof(XLEN)-1])
    if(rs1 > rs2)
      out = rs2;
  else
    if(rs2[valueof(XLEN)-1] == 1)
      out = rs2; 
  return out;
endfunction

function Bit#(XLEN) fn_minu(Bit#(XLEN) rs1, Bit#(XLEN) rs2);       // This instruction returns the smaller of two unsigned integers.
  Bit#(XLEN) out;
  if(rs1 < rs2)
    out = rs1;
  else
    out = rs2;
  return out;
endfunction

function Bit#(XLEN) fn_sext_b(Bit#(XLEN) rs1);
  Bit#(XLEN) out;
  out = signExtend(rs1[7:0]);
  return out;
endfunction

function Bit#(XLEN) fn_sext_h(Bit#(XLEN) rs1);    // This instruction sign-extends the least-significant byte in the source to XLEN by copying the most-significant bit in the byte (i.e., bit 7) to all of the more-significant bits
  Bit#(XLEN) out;
  out = signExtend(rs1[15:0]);
  return out;
endfunction

function Bit#(XLEN) fn_zext_h(Bit#(XLEN) rs1);      // This instruction performs an XLEN-wide addition between rs2 and the zero-extended least-significant word of rs1.
  Bit#(XLEN) out;
  out = zeroExtend(rs1[15:0]);
  return out;
endfunction

function Bit#(XLEN) fn_rol(Bit#(XLEN) rs1, Bit#(XLEN) rs2);    // This instruction performs a rotate left of rs1 by the amount in least-significant log2(XLEN) bits of rs2.
  int shamt;
  if(valueof(XLEN)==32)
    shamt = unpack(zeroExtend(rs2[4:0]));
  else
    shamt = unpack(zeroExtend(rs2[5:0]));
  return (rs1 << shamt) | (rs1 >> (fromInteger(valueof(XLEN)) - shamt));
endfunction

function Bit#(XLEN) fn_rolw(Bit#(XLEN) rs1, Bit#(XLEN) rs2);       // This instruction performs a rotate left on the least-significant word of rs1 by the amount in least-significant 5 bits of r2
 int shamt = unpack(zeroExtend(rs2[4:0]));
  Bit#(32) rsn1 = zeroExtend(rs1[31:0]);
  Bit#(32) result = (rsn1 << shamt) | (rsn1 >> (32 - shamt));
  return signExtend(result);
endfunction

function Bit#(XLEN) fn_ror(Bit#(XLEN) rs1, Bit#(XLEN) rs2);          // This instruction performs a rotate right of rs1 by the amount in least-significant log2(XLEN) bits of rs2
  int shamt;
  if(valueof(XLEN)==32)
    shamt = unpack(zeroExtend(rs2[4:0]));
  else
    shamt = unpack(zeroExtend(rs2[5:0]));
  return (rs1 >> shamt) | (rs1 << (fromInteger(valueof(XLEN)) - shamt));
endfunction

function Bit#(XLEN) fn_rorw(Bit#(XLEN) rs1, Bit#(XLEN) rs2);           // This instruction performs a rotate right on the least-significant word of rs1 by the amount in least-significant 5 bits of r2
  int shamt = unpack(zeroExtend(rs2[4:0]));
  Bit#(32)rsn1 = zeroExtend(rs1[31:0]);
  Bit#(32) result = (rsn1 >> shamt) | (rsn1 << (32 - shamt));
  return signExtend(result);
endfunction

function Bit#(XLEN) fn_rori(Bit#(XLEN) rs1, Bit#(32) instr);         // This instruction performs a rotate right of rs1 by the amount in the least-significant log2(XLEN) bits of shamt
  int shamt;
  if(valueof(XLEN)==32)
    shamt = unpack(zeroExtend(instr[24:20]));
  else
    shamt = unpack(zeroExtend(instr[25:20]));
  return (rs1 >> shamt) | (rs1 << (fromInteger(valueof(XLEN)) - shamt));
endfunction

function Bit#(XLEN) fn_roriw(Bit#(XLEN) rs1, Bit#(32) instr);                // This instruction performs a rotate right on the least-significant word of rs1 by the amount in the least significant log2(XLEN) bits of shamt
  int shamt = unpack(zeroExtend(instr[24:0]));
  Bit#(32) rsn1 = zeroExtend(rs1[31:0]);
  Bit#(32) result = ((rsn1 >> shamt) | (rsn1 << (32 - shamt)));
  return signExtend(result[31:0]);
endfunction

function Bit#(XLEN) fn_orc_b(Bit#(XLEN) rs1);
  Bit#(XLEN) out = 0; 
  Bit#(8) a =0;
  for(Integer i=0; i<valueof(XLEN); i=i+8) 
    if(rs1[i+7:i]>a)
      out = out + (255<<i);
  return out;
endfunction

function Bit#(XLEN) fn_rev8(Bit#(XLEN) rs1);                                   // Reverses the order of Bytes in rs
  Bit#(XLEN) out = 0;
  int j= fromInteger(valueof(XLEN)-1); 
  for(Integer i=0; i<valueof(XLEN); i=i+8)
    out = out + ((rs1[j:j-7])<<i);                                            // rs1[j:j-7] selects the 8 bits
    j=j-8;
  return out;
endfunction
