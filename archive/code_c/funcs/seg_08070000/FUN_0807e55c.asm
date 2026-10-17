; undefined FUN_0807e55c(void)
; entry 0x807e55c  size 20 bytes

0807E55C: 00b5         push {lr}
0807E55E: 044a         ldr r2,[0x0807e570]
0807E560: 817b         ldrb r1,[r0,#0xe]
0807E562: 8900         lsl r1,r1,#0x2
0807E564: 8918         add r1,r1,r2
0807E566: 0968         ldr r1,[r1,#0x0]
0807E568: aaf00afd     bl 0x08128f80
0807E56C: 01bc         pop {r0}
0807E56E: 0047         bx r0
