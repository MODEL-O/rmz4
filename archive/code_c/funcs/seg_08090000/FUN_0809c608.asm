; undefined FUN_0809c608(void)
; entry 0x809c608  size 20 bytes

0809C608: 00b5         push {lr}
0809C60A: 044a         ldr r2,[0x0809c61c]
0809C60C: 017c         ldrb r1,[r0,#0x10]
0809C60E: 8900         lsl r1,r1,#0x2
0809C610: 8918         add r1,r1,r2
0809C612: 0968         ldr r1,[r1,#0x0]
0809C614: 8cf0b4fc     bl 0x08128f80
0809C618: 01bc         pop {r0}
0809C61A: 0047         bx r0
