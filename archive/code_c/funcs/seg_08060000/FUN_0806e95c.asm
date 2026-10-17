; undefined FUN_0806e95c(void)
; entry 0x806e95c  size 20 bytes

0806E95C: 00b5         push {lr}
0806E95E: 044a         ldr r2,[0x0806e970]
0806E960: 817b         ldrb r1,[r0,#0xe]
0806E962: 8900         lsl r1,r1,#0x2
0806E964: 8918         add r1,r1,r2
0806E966: 0968         ldr r1,[r1,#0x0]
0806E968: baf00afb     bl 0x08128f80
0806E96C: 01bc         pop {r0}
0806E96E: 0047         bx r0
