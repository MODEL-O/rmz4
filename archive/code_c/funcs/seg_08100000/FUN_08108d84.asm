; undefined FUN_08108d84(void)
; entry 0x8108d84  size 44 bytes

08108D84: 70b5         push {r4,r5,r6,lr}
08108D86: 041c         add r4,r0,#0x0
08108D88: 0d1c         add r5,r1,#0x0
08108D8A: 0949         ldr r1,[0x08108db0]
08108D8C: 6018         add r0,r4,r1
08108D8E: 291c         add r1,r5,#0x0
08108D90: fff6dafc     bl 0x08008748
08108D94: 061c         add r6,r0,#0x0
08108D96: e020         mov r0,#0xe0
08108D98: c000         lsl r0,r0,#0x3
08108D9A: 2418         add r4,r4,r0
08108D9C: 201c         add r0,r4,#0x0
08108D9E: 291c         add r1,r5,#0x0
08108DA0: fff6d2fc     bl 0x08008748
08108DA4: b042         cmp r0,r6
08108DA6: 00da         bge 0x08108daa
08108DA8: 301c         add r0,r6,#0x0
08108DAA: 70bc         pop {r4,r5,r6}
08108DAC: 02bc         pop {r1}
08108DAE: 0847         bx r1
