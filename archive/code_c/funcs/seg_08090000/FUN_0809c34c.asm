; undefined FUN_0809c34c(void)
; entry 0x809c34c  size 20 bytes

0809C34C: 00b5         push {lr}
0809C34E: 044a         ldr r2,[0x0809c360]
0809C350: 017c         ldrb r1,[r0,#0x10]
0809C352: 8900         lsl r1,r1,#0x2
0809C354: 8918         add r1,r1,r2
0809C356: 0968         ldr r1,[r1,#0x0]
0809C358: 8cf012fe     bl 0x08128f80
0809C35C: 01bc         pop {r0}
0809C35E: 0047         bx r0
