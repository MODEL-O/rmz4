; undefined FUN_08114318(void)
; entry 0x8114318  size 28 bytes

08114318: f0b5         push {r4,r5,r6,r7,lr}
0811431A: 061c         add r6,r0,#0x0
0811431C: b078         ldrb r0,[r6,#0x2]
0811431E: 0e28         cmp r0,#0xe
08114320: 00d9         bls 0x08114324
08114322: d4e2         b 0x081148ce
08114324: 8000         lsl r0,r0,#0x2
08114326: 0249         ldr r1,[0x08114330]
08114328: 4018         add r0,r0,r1
0811432A: 0068         ldr r0,[r0,#0x0]
0811432C: 8746         mov pc,r0
081148CE: f0bc         pop {r4,r5,r6,r7}
081148D0: 01bc         pop {r0}
081148D2: 0047         bx r0
