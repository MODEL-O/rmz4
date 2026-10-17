; undefined FUN_0810b7b8(void)
; entry 0x810b7b8  size 20 bytes

0810B7B8: 00b5         push {lr}
0810B7BA: 044a         ldr r2,[0x0810b7cc]
0810B7BC: 017c         ldrb r1,[r0,#0x10]
0810B7BE: 8900         lsl r1,r1,#0x2
0810B7C0: 8918         add r1,r1,r2
0810B7C2: 0968         ldr r1,[r1,#0x0]
0810B7C4: 1df0dcfb     bl 0x08128f80
0810B7C8: 01bc         pop {r0}
0810B7CA: 0047         bx r0
