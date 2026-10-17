; undefined FUN_0806e40c(void)
; entry 0x806e40c  size 20 bytes

0806E40C: 00b5         push {lr}
0806E40E: 044a         ldr r2,[0x0806e420]
0806E410: 817b         ldrb r1,[r0,#0xe]
0806E412: 8900         lsl r1,r1,#0x2
0806E414: 8918         add r1,r1,r2
0806E416: 0968         ldr r1,[r1,#0x0]
0806E418: baf0b2fd     bl 0x08128f80
0806E41C: 01bc         pop {r0}
0806E41E: 0047         bx r0
