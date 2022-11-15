#See LICENSE.iitm for license details
'''

Author   : Santhosh Pavan
Email id : santhosh@mindgrovetech.in
Details  : This file consists reference model which is used in verifying the bbox design (DUT).

--------------------------------------------------------------------------------------------------
'''
'''
TODO:
Task Description: Add logic for all instructions. One instruction is implemented as an example. 
                  Note - The value of instr (ANDN) is a temp value, it needed to be changed according to spec.

Note - if instr has single operand, take rs1 as an operand
'''

import math
#Reference model   
def bbox_rm(instr, rs1, rs2, XLEN):
    XLEN_log = int(math.log2(XLEN))
    if (instr == 0b00001000000000000000000000111011 and XLEN==64):  #add_uw
       res = (rs2 + rs1 % 2**32) % 2**XLEN
       valid = '1'
    elif (instr ==   0b01000000000000000111000000110011):   #andn
        res = rs1 & ~rs2
        valid = '1'
    elif (instr == 0b01001000000000000001000000110011):  #bclr
       res = rs1 & ~(1 << (rs2 % XLEN))
       valid = '1'
    elif ((bin(instr)[-32:-26] == '10010') and (bin(instr)[-15:-12] == '001') and (bin(instr)[-7:] == '0010011')):    #bclri
       shamt = int(bin(instr)[-(20+XLEN_log):-20], 2)
       res = rs1 & ~(1 << (shamt % XLEN))
       valid = '1'
    elif (instr == 0b01001000000000000101000000110011):  #bext
       res = (rs1 >> rs2 % XLEN) & 1
       valid = '1'
    elif ((bin(instr)[-31:-26] == '10010') and (bin(instr)[-15:-12] == '101') and (bin(instr)[-7:] == '0010011')):    #bexti
       shamt = int(bin(instr)[-(20+XLEN_log):-20], 2)
       res = (rs1 >> shamt % XLEN) & 1
       valid = '1'
    elif (instr == 0b01101000000000000001000000110011):  #binv
       res = rs1 ^ (1 << (rs2 % XLEN))
       valid = '1'
    elif ((bin(instr)[-31:-26] == '11010') and (bin(instr)[-15:-12] == '001') and (bin(instr)[-7:] == '0010011')):    #binvi
       shamt = int(bin(instr)[-(20+XLEN_log):-20], 2)
       res = rs1 ^ (1 << (shamt % XLEN))
       valid = '1'
    elif (instr == 0b00101000000000000001000000110011):  #bset
       res = rs1 | (1 << (rs2 % XLEN))
       valid = '1'
    elif ((bin(instr)[-31:-26] == '01010') and (bin(instr)[-15:-12] == '001') and (bin(instr)[-7:] == '0010011')):      #bseti
       shamt = int(bin(instr)[-(20+XLEN_log):-20], 2)
       res = rs1 | (1 << (shamt % XLEN))
       valid = '1'
    elif (instr == 0b00001010000000000001000000110011):     #clmul
       res = 0; i = 0
       while (rs1>>i) > 0:
            if rs1 & (1<<i):
                res ^= rs2<<i
            i += 1
       res = res % 2**XLEN
       valid = '1'
    elif (instr == 0b00001010000000000011000000110011):  #clmulh
       res = 0; i = 0
       while (rs1>>i) > 0:
            if rs1 & (1<<i):
                res ^= rs2<<i
            i += 1
       res = res // 2**XLEN
       valid = '1'
    elif (instr == 0b00001010000000000010000000110011):  #clmulr
       res = 0; i = 0
       while (rs1>>i) > 0:
            if rs1 & (1<<i):
                res ^= rs2<<i
            i += 1
       res = (res // 2**(XLEN-1)) % 2**XLEN #are the bits correct?
       valid = '1'
    elif (instr == 0b01100000000000000001000000010011):  #clz
        res = 0
        print(XLEN)
        for k in range(XLEN-1, 0, -1):
            if(rs1 > 2**k):
                res = XLEN-k-1 
                break
            elif(k==0):
                res = XLEN
                break
        valid = '1'
    elif ((instr == 0b01100000000000000001000000011011) and (XLEN==64)):   #clzw
        res = 0
        for k in range(31, -1, -1):
          if(rs1 % 2**32 > 2**k):
             res = 31-k
             break
        valid = '1'
    elif (instr == 0b01100000001000000001000000010011): #cpop
      rs1 = str(bin(rs1))
      res = 0
      for i in rs1:
         if i == "1":
            res+=1
      valid = '1'
    elif ((instr == 0b01100000001000000001000000011011) and (XLEN==64)): #cpopw
      rs1 = str(bin(rs1 % 2**32))
      res = 0
      for i in rs1:
         if i == "1":
            res+=1
      valid = '1'
    elif (instr == 0b01100000000100000001000000010011):  #ctz
        for k in range(XLEN-1, -1, -1):
          if(rs1 % 2**k == 0):
             res = k 
             break
        valid = '1'
    elif ((instr == 0b01100000000100000001000000011011) and (XLEN==64)):   #ctzw
        for k in range(31, -1, -1):
          if(rs1 % 2**k == 0):
             res = k 
             break
        valid = '1'
    elif (instr == 0b00001010000000000110000000110011):  #max
        sign1 = 0; sign2 = 0; res = rs1
        if(rs1 > 2**(XLEN-1)):
           sign1 = 1
        if(rs2 > 2**(XLEN-1)):
           sign2 = 1    
        if(sign1==sign2):
            res = max(rs1, rs2)
        else:
            res = min(rs1, rs2)
        valid = '1'
    elif (instr == 0b00001010000000000111000000110011):  #maxu
        res = max(rs1, rs2)
        valid = '1'
    elif (instr == 0b00001010000000000100000000110011):  #min
        sign1 = 0; sign2 = 0; res = 0
        if(rs1 > 2** (XLEN-1)):
           sign1 = 1
        if(rs2 > 2** (XLEN-1)):
           sign2 = 1
        if(sign1==sign2):
            res = min(rs1, rs2)
        else:
            res = max(rs1, rs2)
        valid = '1'
    elif (instr == 0b00001010000000000101000000110011):     #minu
        res = min(rs1, rs2)
        valid = '1'
    elif (instr == 0b00101000011100000101000000010011):      #orc_b
        res = 0
        for i in range(0, XLEN, 8):
          if (rs1 // 2**i) % 2**8 > 0:
              res = res + 2**i *255
        valid = '1'
    elif (instr == 0b01000000000000000110000000110011):  #orn
        res = (rs1 | ~rs2) % 2**XLEN
        valid = '1'
    elif((instr == 0b01101011100000000101000000010011) and XLEN==64):#REV8_64
        out =''
        rs1_new = '{:064b}'.format(rs1)
        for i in range(0, XLEN, 8):
           if(i==0):
               out = out + rs1_new[-8:]
           else:
               out = out + (rs1_new[-(i+8):-i])*(2**i)
        res = int('0b'+out, 2)
        valid = '1'
    elif ((instr == 0b01101001100000000101000000010011) and XLEN ==32):#REV8_32
        out =''
        rs1_new = '{:032b}'.format(rs1)
        for i in range(0, XLEN, 8):
           if(i==0):
               out = out + rs1_new[-8:]
           else:
               out = out + (rs1_new[-(i+8):-i])*(2**i)
        res = int('0b'+out, 2)
        valid = '1'
    elif (instr == 0b01100000000000000001000000110011):      #rol
        shamt = rs2 % XLEN
        res1 = (rs1 // 2**(XLEN-shamt))
       # res1 = 2**shamt - 1 - (rs1 // 2**(XLEN-shamt))   #highest shamt bits needed in reverse order
        res2 = (rs1 % 2**(XLEN-shamt)) * 2**shamt
        res = res1 + res2
        valid = '1'
    elif ((instr == 0b01100000000000000001000000111011) and (XLEN==64)):      #rolw
        rs1 = rs1 % 2**32
        shamt = rs2 % 2**5
        res1 = (rs1 // 2**(32-shamt)) 
        res2 = (rs1 % 2**(32-shamt)) * 2**shamt
        res = res1 + res2
        if(res >= 2**31):
            res += (2**XLEN-2**32)
        valid = '1'
    elif (instr == 0b01100000000000000101000000110011):      #ror
        shamt = rs2 % XLEN
        #res1 = (2**shamt - 1- (rs1 % 2**(shamt))) * 2**(XLEN-shamt)   #smallest shamt bits reversed and shifted up
        res1 = (rs1 % 2**(shamt))* 2**(XLEN-shamt)
        res2 = rs1 // 2**shamt
        res = res1 + res2
        valid = '1'
    elif ((bin(instr)[-32:-26] == '11000') and (bin(instr)[-15:-12] == '101') and (bin(instr)[-7:] == '0010011')):   #rori
        shamt = (int(bin(instr)[-(20+XLEN_log):-20], 2))%XLEN
        #shamt = shamt % XLEN
        #res1 = (2**shamt - 1- (rs1 % 2**(shamt))) * 2**(XLEN-shamt)   #smallest shamt bits reversed and shifted up
        res1 = (rs1 % 2**(shamt))* 2**(XLEN-shamt)
        res2 = rs1 // 2**shamt
        res = res1 + res2
        valid = '1'
    elif ((bin(instr)[-31:-26] == '11000') and (bin(instr)[-15:-12] == '101') and (bin(instr)[-7:] == '0011011') and (XLEN==64)):   #roriw
        shamt = int(bin(instr)[-25:-20], 2)
        rs1 = rs1 % 2**32
        shamt = shamt % 2**5
        res1 = (rs1 % 2**(shamt))* (2**(32-shamt))
        res2 = rs1 // (2**shamt)
        res = (res1 + res2)
        if(res >= 2**31):
          res += (2**XLEN - 2**32)
        valid = '1'
    elif (instr == 0b01100000000000000101000000111011):      #rorw
        rs1 = rs1 % 2**32
        shamt = rs2 % 2**5
        #res1 = (2**shamt - 1- (rs1 % 2**(shamt))) * 2**(XLEN-shamt)   #smallest shamt bits reversed and shifted up
        res1 = (rs1 % 2**(shamt))* 2**(32-shamt)
        res2 = rs1 // 2**shamt
        res = (res1 + res2)
        if(res >= 2**31):
           res+= (2**XLEN - 2**32)
        valid = '1'
    elif (instr == 0b01100000010000000001000000010011):  #sext_b
       res = rs1 % 2**8
       if (res >= 2**7):
          res+=(2**XLEN -1 - 255)
       valid = '1'
    elif (instr == 0b01100000010100000001000000010011):  #sext_h
       res = rs1 % 2**16
       if(res >= 2**15):
          res+=(2**XLEN - 2**16)
       valid = '1'
    elif (instr == 0b00100000000000000010000000110011):  #sh1add
       res = (rs2 + (rs1 << 1)) % 2**XLEN
       valid = '1'
    elif (instr == 0b00100000000000000010000000111011 and XLEN==64):    #sh1add_uw
       res = (rs2 + ((rs1 % 2**32) << 1)) % 2**XLEN
       valid = '1'
    elif (instr == 0b00100000000000000100000000110011):  #sh2add
       res = (rs2 + (rs1 << 2)) % 2**XLEN
       valid = '1'
    elif (instr == 0b00100000000000000100000000111011 and XLEN==64): #sh2add_uw
       res = (rs2 + ((rs1 % 2**32) << 2)) % 2**XLEN
       valid = '1'
    elif (instr == 0b00100000000000000110000000110011):  #sh3add
       res = (rs2 + (rs1 << 3)) % 2**XLEN
       valid = '1'
    elif (instr == 0b00100000000000000110000000111011 and XLEN==64):    #sh3add_uw
       res = (rs2 + ((rs1 % 2**32) << 3)) % 2**XLEN
       valid = '1'
    elif ((bin(instr)[-32:-26] == '10') and (bin(instr)[-15:-12] == '001') and (bin(instr)[-7:] == '0011011') and (XLEN==64)):     #SLLI_UW
       shamt = int(bin(instr)[-26:-20], 2)
       res = ((rs1 % 2**32) << shamt) % 2**XLEN
       valid = '1'
    elif (instr == 0b01000000000000000100000000110011):    #xnor
       res = ~(rs1 ^ rs2) % 2**XLEN
       valid = '1'
    elif (((instr ==0b00001000000000000100000000110011) and (XLEN==32)) or ((instr ==0b00001000000000000100000000111011) and (XLEN==64))): #zext_h
       res = rs1 % 2**16
       valid = '1'
    ## logic for all other instr ends
    else:
        res = 0
        valid = '0'

    if XLEN == 32:
        result = '{:032b}'.format(res)
    elif XLEN == 64:
        result = '{:064b}'.format(res)

    return valid+result

