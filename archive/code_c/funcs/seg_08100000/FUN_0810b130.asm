; undefined FUN_0810b130(void)
; entry 0x810b130  size 20 bytes

0810B130: 00b5         push {lr}
0810B132: 044a         ldr r2,[0x0810b144]
0810B134: 017c         ldrb r1,[r0,#0x10]
0810B136: 8900         lsl r1,r1,#0x2
0810B138: 8918         add r1,r1,r2
0810B13A: 0968         ldr r1,[r1,#0x0]
0810B13C: 1df020ff     bl 0x08128f80
0810B140: 01bc         pop {r0}
0810B142: 0047         bx r0
