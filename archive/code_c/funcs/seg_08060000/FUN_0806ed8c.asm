; undefined FUN_0806ed8c(void)
; entry 0x806ed8c  size 20 bytes

0806ED8C: 00b5         push {lr}
0806ED8E: 044a         ldr r2,[0x0806eda0]
0806ED90: 417b         ldrb r1,[r0,#0xd]
0806ED92: 8900         lsl r1,r1,#0x2
0806ED94: 8918         add r1,r1,r2
0806ED96: 0968         ldr r1,[r1,#0x0]
0806ED98: baf0f2f8     bl 0x08128f80
0806ED9C: 01bc         pop {r0}
0806ED9E: 0047         bx r0
