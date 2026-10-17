; undefined FUN_0803fd08(void)
; entry 0x803fd08  size 20 bytes

0803FD08: 00b5         push {lr}
0803FD0A: 044a         ldr r2,[0x0803fd1c]
0803FD0C: 017c         ldrb r1,[r0,#0x10]
0803FD0E: 8900         lsl r1,r1,#0x2
0803FD10: 8918         add r1,r1,r2
0803FD12: 0968         ldr r1,[r1,#0x0]
0803FD14: e9f034f9     bl 0x08128f80
0803FD18: 01bc         pop {r0}
0803FD1A: 0047         bx r0
