; undefined FUN_080e1d7c(void)
; entry 0x80e1d7c  size 20 bytes

080E1D7C: 00b5         push {lr}
080E1D7E: 044a         ldr r2,[0x080e1d90]
080E1D80: 017c         ldrb r1,[r0,#0x10]
080E1D82: 8900         lsl r1,r1,#0x2
080E1D84: 8918         add r1,r1,r2
080E1D86: 0968         ldr r1,[r1,#0x0]
080E1D88: 47f0faf8     bl 0x08128f80
080E1D8C: 01bc         pop {r0}
080E1D8E: 0047         bx r0
