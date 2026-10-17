; undefined FUN_0806eacc(void)
; entry 0x806eacc  size 20 bytes

0806EACC: 00b5         push {lr}
0806EACE: 044a         ldr r2,[0x0806eae0]
0806EAD0: 817b         ldrb r1,[r0,#0xe]
0806EAD2: 8900         lsl r1,r1,#0x2
0806EAD4: 8918         add r1,r1,r2
0806EAD6: 0968         ldr r1,[r1,#0x0]
0806EAD8: baf052fa     bl 0x08128f80
0806EADC: 01bc         pop {r0}
0806EADE: 0047         bx r0
