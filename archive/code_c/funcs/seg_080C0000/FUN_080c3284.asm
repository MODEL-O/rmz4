; undefined FUN_080c3284(void)
; entry 0x80c3284  size 20 bytes

080C3284: 00b5         push {lr}
080C3286: 044a         ldr r2,[0x080c3298]
080C3288: 017c         ldrb r1,[r0,#0x10]
080C328A: 8900         lsl r1,r1,#0x2
080C328C: 8918         add r1,r1,r2
080C328E: 0968         ldr r1,[r1,#0x0]
080C3290: 65f076fe     bl 0x08128f80
080C3294: 01bc         pop {r0}
080C3296: 0047         bx r0
