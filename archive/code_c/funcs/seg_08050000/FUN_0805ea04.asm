; undefined FUN_0805ea04(void)
; entry 0x805ea04  size 20 bytes

0805EA04: 00b5         push {lr}
0805EA06: 044a         ldr r2,[0x0805ea18]
0805EA08: 017c         ldrb r1,[r0,#0x10]
0805EA0A: 8900         lsl r1,r1,#0x2
0805EA0C: 8918         add r1,r1,r2
0805EA0E: 0968         ldr r1,[r1,#0x0]
0805EA10: caf0b6fa     bl 0x08128f80
0805EA14: 01bc         pop {r0}
0805EA16: 0047         bx r0
