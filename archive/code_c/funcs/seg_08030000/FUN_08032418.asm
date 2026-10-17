; undefined FUN_08032418(void)
; entry 0x8032418  size 20 bytes

08032418: 00b5         push {lr}
0803241A: 044a         ldr r2,[0x0803242c]
0803241C: c17b         ldrb r1,[r0,#0xf]
0803241E: 8900         lsl r1,r1,#0x2
08032420: 8918         add r1,r1,r2
08032422: 0968         ldr r1,[r1,#0x0]
08032424: f6f0acfd     bl 0x08128f80
08032428: 01bc         pop {r0}
0803242A: 0047         bx r0
