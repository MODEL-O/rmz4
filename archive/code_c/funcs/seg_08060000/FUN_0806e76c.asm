; undefined FUN_0806e76c(void)
; entry 0x806e76c  size 20 bytes

0806E76C: 00b5         push {lr}
0806E76E: 044a         ldr r2,[0x0806e780]
0806E770: 817b         ldrb r1,[r0,#0xe]
0806E772: 8900         lsl r1,r1,#0x2
0806E774: 8918         add r1,r1,r2
0806E776: 0968         ldr r1,[r1,#0x0]
0806E778: baf002fc     bl 0x08128f80
0806E77C: 01bc         pop {r0}
0806E77E: 0047         bx r0
