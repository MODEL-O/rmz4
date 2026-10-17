; undefined FUN_080c4400(void)
; entry 0x80c4400  size 20 bytes

080C4400: 00b5         push {lr}
080C4402: 044a         ldr r2,[0x080c4414]
080C4404: 017c         ldrb r1,[r0,#0x10]
080C4406: 8900         lsl r1,r1,#0x2
080C4408: 8918         add r1,r1,r2
080C440A: 0968         ldr r1,[r1,#0x0]
080C440C: 64f0b8fd     bl 0x08128f80
080C4410: 01bc         pop {r0}
080C4412: 0047         bx r0
