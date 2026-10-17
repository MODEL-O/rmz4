; undefined FUN_080c4684(void)
; entry 0x80c4684  size 20 bytes

080C4684: 00b5         push {lr}
080C4686: 044a         ldr r2,[0x080c4698]
080C4688: 017c         ldrb r1,[r0,#0x10]
080C468A: 8900         lsl r1,r1,#0x2
080C468C: 8918         add r1,r1,r2
080C468E: 0968         ldr r1,[r1,#0x0]
080C4690: 64f076fc     bl 0x08128f80
080C4694: 01bc         pop {r0}
080C4696: 0047         bx r0
