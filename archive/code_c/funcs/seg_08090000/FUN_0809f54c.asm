; undefined FUN_0809f54c(void)
; entry 0x809f54c  size 20 bytes

0809F54C: 00b5         push {lr}
0809F54E: 044a         ldr r2,[0x0809f560]
0809F550: 017c         ldrb r1,[r0,#0x10]
0809F552: 8900         lsl r1,r1,#0x2
0809F554: 8918         add r1,r1,r2
0809F556: 0968         ldr r1,[r1,#0x0]
0809F558: 89f012fd     bl 0x08128f80
0809F55C: 01bc         pop {r0}
0809F55E: 0047         bx r0
