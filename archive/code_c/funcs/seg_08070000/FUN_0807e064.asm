; undefined FUN_0807e064(void)
; entry 0x807e064  size 20 bytes

0807E064: 00b5         push {lr}
0807E066: 044a         ldr r2,[0x0807e078]
0807E068: 817b         ldrb r1,[r0,#0xe]
0807E06A: 8900         lsl r1,r1,#0x2
0807E06C: 8918         add r1,r1,r2
0807E06E: 0968         ldr r1,[r1,#0x0]
0807E070: aaf086ff     bl 0x08128f80
0807E074: 01bc         pop {r0}
0807E076: 0047         bx r0
