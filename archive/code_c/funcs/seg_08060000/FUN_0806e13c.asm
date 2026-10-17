; undefined FUN_0806e13c(void)
; entry 0x806e13c  size 20 bytes

0806E13C: 00b5         push {lr}
0806E13E: 044a         ldr r2,[0x0806e150]
0806E140: 817b         ldrb r1,[r0,#0xe]
0806E142: 8900         lsl r1,r1,#0x2
0806E144: 8918         add r1,r1,r2
0806E146: 0968         ldr r1,[r1,#0x0]
0806E148: baf01aff     bl 0x08128f80
0806E14C: 01bc         pop {r0}
0806E14E: 0047         bx r0
