; undefined FUN_080f53a8(void)
; entry 0x80f53a8  size 20 bytes

080F53A8: 00b5         push {lr}
080F53AA: 044a         ldr r2,[0x080f53bc]
080F53AC: 017c         ldrb r1,[r0,#0x10]
080F53AE: 8900         lsl r1,r1,#0x2
080F53B0: 8918         add r1,r1,r2
080F53B2: 0968         ldr r1,[r1,#0x0]
080F53B4: 33f0e4fd     bl 0x08128f80
080F53B8: 01bc         pop {r0}
080F53BA: 0047         bx r0
