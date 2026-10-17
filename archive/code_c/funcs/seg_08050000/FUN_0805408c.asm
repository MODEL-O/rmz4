; undefined FUN_0805408c(void)
; entry 0x805408c  size 20 bytes

0805408C: 00b5         push {lr}
0805408E: 044a         ldr r2,[0x080540a0]
08054090: 817b         ldrb r1,[r0,#0xe]
08054092: 8900         lsl r1,r1,#0x2
08054094: 8918         add r1,r1,r2
08054096: 0968         ldr r1,[r1,#0x0]
08054098: d4f072ff     bl 0x08128f80
0805409C: 01bc         pop {r0}
0805409E: 0047         bx r0
