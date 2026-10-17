; undefined FUN_0806dea4(void)
; entry 0x806dea4  size 28 bytes

0806DEA4: 70b5         push {r4,r5,r6,lr}
0806DEA6: 061c         add r6,r0,#0x0
0806DEA8: f07b         ldrb r0,[r6,#0xf]
0806DEAA: 0528         cmp r0,#0x5
0806DEAC: 00d9         bls 0x0806deb0
0806DEAE: a3e0         b 0x0806dff8
0806DEB0: 8000         lsl r0,r0,#0x2
0806DEB2: 0249         ldr r1,[0x0806debc]
0806DEB4: 4018         add r0,r0,r1
0806DEB6: 0068         ldr r0,[r0,#0x0]
0806DEB8: 8746         mov pc,r0
0806DFF8: 70bc         pop {r4,r5,r6}
0806DFFA: 01bc         pop {r0}
0806DFFC: 0047         bx r0
