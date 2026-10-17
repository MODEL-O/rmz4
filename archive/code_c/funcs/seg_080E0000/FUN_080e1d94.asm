; undefined FUN_080e1d94(void)
; entry 0x80e1d94  size 20 bytes

080E1D94: 00b5         push {lr}
080E1D96: 044a         ldr r2,[0x080e1da8]
080E1D98: 017c         ldrb r1,[r0,#0x10]
080E1D9A: 8900         lsl r1,r1,#0x2
080E1D9C: 8918         add r1,r1,r2
080E1D9E: 0968         ldr r1,[r1,#0x0]
080E1DA0: 47f0eef8     bl 0x08128f80
080E1DA4: 01bc         pop {r0}
080E1DA6: 0047         bx r0
