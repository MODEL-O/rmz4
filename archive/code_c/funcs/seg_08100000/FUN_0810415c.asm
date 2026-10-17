; undefined FUN_0810415c(void)
; entry 0x810415c  size 20 bytes

0810415C: 00b5         push {lr}
0810415E: 044a         ldr r2,[0x08104170]
08104160: 017c         ldrb r1,[r0,#0x10]
08104162: 8900         lsl r1,r1,#0x2
08104164: 8918         add r1,r1,r2
08104166: 0968         ldr r1,[r1,#0x0]
08104168: 24f00aff     bl 0x08128f80
0810416C: 01bc         pop {r0}
0810416E: 0047         bx r0
