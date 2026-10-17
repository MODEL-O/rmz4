; undefined FUN_080e1978(void)
; entry 0x80e1978  size 50 bytes

080E1978: 10b5         push {r4,lr}
080E197A: 041c         add r4,r0,#0x0
080E197C: 607b         ldrb r0,[r4,#0xd]
080E197E: 0028         cmp r0,#0x0
080E1980: 0ad1         bne 0x080e1998
080E1982: 201c         add r0,r4,#0x0
080E1984: 7630         add r0,#0x76
080E1986: 0088         ldrh r0,[r0,#0x0]
080E1988: 0c21         mov r1,#0xc
080E198A: 0143         orr r1,r0
080E198C: 201c         add r0,r4,#0x0
080E198E: 3bf7b7fa     bl 0x0801cf00
080E1992: 607b         ldrb r0,[r4,#0xd]
080E1994: 0130         add r0,#0x1
080E1996: 6073         strb r0,[r4,#0xd]
080E1998: 201c         add r0,r4,#0x0
080E199A: 00f021f8     bl 0x080e19e0
080E199E: 201c         add r0,r4,#0x0
080E19A0: 00f042f8     bl 0x080e1a28
080E19A4: 10bc         pop {r4}
080E19A6: 01bc         pop {r0}
080E19A8: 0047         bx r0
