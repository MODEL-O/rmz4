; undefined FUN_0805e230(void)
; entry 0x805e230  size 20 bytes

0805E230: 00b5         push {lr}
0805E232: 044a         ldr r2,[0x0805e244]
0805E234: 817b         ldrb r1,[r0,#0xe]
0805E236: 8900         lsl r1,r1,#0x2
0805E238: 8918         add r1,r1,r2
0805E23A: 0968         ldr r1,[r1,#0x0]
0805E23C: caf0a0fe     bl 0x08128f80
0805E240: 01bc         pop {r0}
0805E242: 0047         bx r0
