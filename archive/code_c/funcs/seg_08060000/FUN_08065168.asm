; undefined FUN_08065168(void)
; entry 0x8065168  size 20 bytes

08065168: 00b5         push {lr}
0806516A: 044a         ldr r2,[0x0806517c]
0806516C: 817b         ldrb r1,[r0,#0xe]
0806516E: 8900         lsl r1,r1,#0x2
08065170: 8918         add r1,r1,r2
08065172: 0968         ldr r1,[r1,#0x0]
08065174: c3f004ff     bl 0x08128f80
08065178: 01bc         pop {r0}
0806517A: 0047         bx r0
