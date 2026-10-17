; undefined FUN_0806fcbc(void)
; entry 0x806fcbc  size 62 bytes

0806FCBC: 10b5         push {r4,lr}
0806FCBE: 041c         add r4,r0,#0x0
0806FCC0: a07b         ldrb r0,[r4,#0xe]
0806FCC2: 0028         cmp r0,#0x0
0806FCC4: 08d1         bne 0x0806fcd8
0806FCC6: 0d49         ldr r1,[0x0806fcfc]
0806FCC8: 201c         add r0,r4,#0x0
0806FCCA: adf719f9     bl 0x0801cf00
0806FCCE: a07b         ldrb r0,[r4,#0xe]
0806FCD0: 0130         add r0,#0x1
0806FCD2: a073         strb r0,[r4,#0xe]
0806FCD4: 1020         mov r0,#0x10
0806FCD6: a074         strb r0,[r4,#0x12]
0806FCD8: 201c         add r0,r4,#0x0
0806FCDA: adf789f9     bl 0x0801cff0
0806FCDE: a07c         ldrb r0,[r4,#0x12]
0806FCE0: 0138         sub r0,#0x1
0806FCE2: a074         strb r0,[r4,#0x12]
0806FCE4: 0006         lsl r0,r0,#0x18
0806FCE6: 000e         lsr r0,r0,#0x18
0806FCE8: ff28         cmp r0,#0xff
0806FCEA: 03d1         bne 0x0806fcf4
0806FCEC: 0220         mov r0,#0x2
0806FCEE: 6073         strb r0,[r4,#0xd]
0806FCF0: 0020         mov r0,#0x0
0806FCF2: a073         strb r0,[r4,#0xe]
0806FCF4: 10bc         pop {r4}
0806FCF6: 01bc         pop {r0}
0806FCF8: 0047         bx r0
