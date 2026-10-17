; undefined FUN_08060b0c(void)
; entry 0x8060b0c  size 56 bytes

08060B0C: 10b5         push {r4,lr}
08060B0E: 041c         add r4,r0,#0x0
08060B10: a07b         ldrb r0,[r4,#0xe]
08060B12: 0028         cmp r0,#0x0
08060B14: 08d1         bne 0x08060b28
08060B16: 0b49         ldr r1,[0x08060b44]
08060B18: 201c         add r0,r4,#0x0
08060B1A: bcf7f1f9     bl 0x0801cf00
08060B1E: 2020         mov r0,#0x20
08060B20: a074         strb r0,[r4,#0x12]
08060B22: a07b         ldrb r0,[r4,#0xe]
08060B24: 0130         add r0,#0x1
08060B26: a073         strb r0,[r4,#0xe]
08060B28: 201c         add r0,r4,#0x0
08060B2A: bcf761fa     bl 0x0801cff0
08060B2E: 201c         add r0,r4,#0x0
08060B30: 7330         add r0,#0x73
08060B32: 0178         ldrb r1,[r0,#0x0]
08060B34: 0329         cmp r1,#0x3
08060B36: 02d1         bne 0x08060b3e
08060B38: 0020         mov r0,#0x0
08060B3A: 6173         strb r1,[r4,#0xd]
08060B3C: a073         strb r0,[r4,#0xe]
08060B3E: 10bc         pop {r4}
08060B40: 01bc         pop {r0}
08060B42: 0047         bx r0
