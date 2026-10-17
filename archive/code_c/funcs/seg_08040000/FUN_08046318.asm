; undefined FUN_08046318(void)
; entry 0x8046318  size 20 bytes

08046318: 00b5         push {lr}
0804631A: 044a         ldr r2,[0x0804632c]
0804631C: 017c         ldrb r1,[r0,#0x10]
0804631E: 8900         lsl r1,r1,#0x2
08046320: 8918         add r1,r1,r2
08046322: 0968         ldr r1,[r1,#0x0]
08046324: e2f02cfe     bl 0x08128f80
08046328: 01bc         pop {r0}
0804632A: 0047         bx r0
