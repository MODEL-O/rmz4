; undefined FUN_0810ad88(void)
; entry 0x810ad88  size 20 bytes

0810AD88: 00b5         push {lr}
0810AD8A: 044a         ldr r2,[0x0810ad9c]
0810AD8C: 017c         ldrb r1,[r0,#0x10]
0810AD8E: 8900         lsl r1,r1,#0x2
0810AD90: 8918         add r1,r1,r2
0810AD92: 0968         ldr r1,[r1,#0x0]
0810AD94: 1ef0f4f8     bl 0x08128f80
0810AD98: 01bc         pop {r0}
0810AD9A: 0047         bx r0
