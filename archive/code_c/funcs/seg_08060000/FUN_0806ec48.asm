; undefined FUN_0806ec48(void)
; entry 0x806ec48  size 20 bytes

0806EC48: 00b5         push {lr}
0806EC4A: 044a         ldr r2,[0x0806ec5c]
0806EC4C: 817b         ldrb r1,[r0,#0xe]
0806EC4E: 8900         lsl r1,r1,#0x2
0806EC50: 8918         add r1,r1,r2
0806EC52: 0968         ldr r1,[r1,#0x0]
0806EC54: baf094f9     bl 0x08128f80
0806EC58: 01bc         pop {r0}
0806EC5A: 0047         bx r0
