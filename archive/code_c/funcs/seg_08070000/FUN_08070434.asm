; undefined FUN_08070434(void)
; entry 0x8070434  size 58 bytes

08070434: 30b5         push {r4,r5,lr}
08070436: 041c         add r4,r0,#0x0
08070438: b430         add r0,#0xb4
0807043A: 0068         ldr r0,[r0,#0x0]
0807043C: b430         add r0,#0xb4
0807043E: 0025         mov r5,#0x0
08070440: 0121         mov r1,#0x1
08070442: 0170         strb r1,[r0,#0x0]
08070444: 201c         add r0,r4,#0x0
08070446: 03f0dbfc     bl 0x08073e00
0807044A: 211c         add r1,r4,#0x0
0807044C: c331         add r1,#0xc3
0807044E: 0870         strb r0,[r1,#0x0]
08070450: a07b         ldrb r0,[r4,#0xe]
08070452: 0130         add r0,#0x1
08070454: a073         strb r0,[r4,#0xe]
08070456: e573         strb r5,[r4,#0xf]
08070458: 0549         ldr r1,[0x08070470]
0807045A: 607b         ldrb r0,[r4,#0xd]
0807045C: 8000         lsl r0,r0,#0x2
0807045E: 4018         add r0,r0,r1
08070460: 0168         ldr r1,[r0,#0x0]
08070462: 201c         add r0,r4,#0x0
08070464: b8f08cfd     bl 0x08128f80
08070468: 30bc         pop {r4,r5}
0807046A: 01bc         pop {r0}
0807046C: 0047         bx r0
