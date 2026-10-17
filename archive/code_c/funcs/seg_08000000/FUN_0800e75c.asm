; undefined FUN_0800e75c(void)
; entry 0x800e75c  size 26 bytes

0800E75C: 00b5         push {lr}
0800E75E: 031c         add r3,r0,#0x0
0800E760: 9a7b         ldrb r2,[r3,#0xe]
0800E762: 002a         cmp r2,#0x0
0800E764: 05d1         bne 0x0800e772
0800E766: 0448         ldr r0,[0x0800e778]
0800E768: a521         mov r1,#0xa5
0800E76A: 0903         lsl r1,r1,#0xc
0800E76C: 0160         str r1,[r0,#0x0]
0800E76E: 501c         add r0,r2,#0x1
0800E770: 9873         strb r0,[r3,#0xe]
0800E772: 01bc         pop {r0}
0800E774: 0047         bx r0
