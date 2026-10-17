; undefined FUN_080591f4(void)
; entry 0x80591f4  size 42 bytes

080591F4: 30b5         push {r4,r5,lr}
080591F6: 84b0         sub sp,#0x10
080591F8: 041c         add r4,r0,#0x0
080591FA: 0748         ldr r0,[0x08059218]
080591FC: 4168         ldr r1,[r0,#0x4]
080591FE: 0068         ldr r0,[r0,#0x0]
08059200: 0090         str r0,[sp,#0x0]
08059202: 0191         str r1,[sp,#0x4]
08059204: e07b         ldrb r0,[r4,#0xf]
08059206: 0728         cmp r0,#0x7
08059208: 00d9         bls 0x0805920c
0805920A: 98e0         b 0x0805933e
0805920C: 8000         lsl r0,r0,#0x2
0805920E: 0349         ldr r1,[0x0805921c]
08059210: 4018         add r0,r0,r1
08059212: 0068         ldr r0,[r0,#0x0]
08059214: 8746         mov pc,r0
0805933E: 04b0         add sp,#0x10
08059340: 30bc         pop {r4,r5}
08059342: 01bc         pop {r0}
08059344: 0047         bx r0
