; undefined FUN_0810b75c(void)
; entry 0x810b75c  size 20 bytes

0810B75C: 00b5         push {lr}
0810B75E: 044a         ldr r2,[0x0810b770]
0810B760: 017c         ldrb r1,[r0,#0x10]
0810B762: 8900         lsl r1,r1,#0x2
0810B764: 8918         add r1,r1,r2
0810B766: 0968         ldr r1,[r1,#0x0]
0810B768: 1df00afc     bl 0x08128f80
0810B76C: 01bc         pop {r0}
0810B76E: 0047         bx r0
