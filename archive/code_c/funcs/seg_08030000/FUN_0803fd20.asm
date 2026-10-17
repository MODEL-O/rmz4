; undefined FUN_0803fd20(void)
; entry 0x803fd20  size 20 bytes

0803FD20: 00b5         push {lr}
0803FD22: 044a         ldr r2,[0x0803fd34]
0803FD24: 017c         ldrb r1,[r0,#0x10]
0803FD26: 8900         lsl r1,r1,#0x2
0803FD28: 8918         add r1,r1,r2
0803FD2A: 0968         ldr r1,[r1,#0x0]
0803FD2C: e9f028f9     bl 0x08128f80
0803FD30: 01bc         pop {r0}
0803FD32: 0047         bx r0
