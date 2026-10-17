; undefined FUN_0811ea70(void)
; entry 0x811ea70  size 72 bytes

0811EA70: 70b5         push {r4,r5,r6,lr}
0811EA72: 051c         add r5,r0,#0x0
0811EA74: 1048         ldr r0,[0x0811eab8]
0811EA76: 2918         add r1,r5,r0
0811EA78: f020         mov r0,#0xf0
0811EA7A: c001         lsl r0,r0,#0x7
0811EA7C: 0860         str r0,[r1,#0x0]
0811EA7E: a020         mov r0,#0xa0
0811EA80: c001         lsl r0,r0,#0x7
0811EA82: 4860         str r0,[r1,#0x4]
0811EA84: 0d48         ldr r0,[0x0811eabc]
0811EA86: 2e18         add r6,r5,r0
0811EA88: 301c         add r0,r6,#0x0
0811EA8A: 0022         mov r2,#0x0
0811EA8C: 0023         mov r3,#0x0
0811EA8E: e4f6bdf8     bl 0x08002c0c
0811EA92: 0b48         ldr r0,[0x0811eac0]
0811EA94: 2c18         add r4,r5,r0
0811EA96: 201c         add r0,r4,#0x0
0811EA98: e4f674fc     bl 0x08003384
0811EA9C: 201c         add r0,r4,#0x0
0811EA9E: 311c         add r1,r6,#0x0
0811EAA0: e4f68cfc     bl 0x080033bc
0811EAA4: 0748         ldr r0,[0x0811eac4]
0811EAA6: 2d18         add r5,r5,r0
0811EAA8: 0749         ldr r1,[0x0811eac8]
0811EAAA: 281c         add r0,r5,#0x0
0811EAAC: 4022         mov r2,#0x40
0811EAAE: ebf781fb     bl 0x0810a1b4
0811EAB2: 70bc         pop {r4,r5,r6}
0811EAB4: 01bc         pop {r0}
0811EAB6: 0047         bx r0
