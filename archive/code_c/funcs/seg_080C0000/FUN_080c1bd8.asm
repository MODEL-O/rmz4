; undefined FUN_080c1bd8(void)
; entry 0x80c1bd8  size 20 bytes

080C1BD8: 00b5         push {lr}
080C1BDA: 044a         ldr r2,[0x080c1bec]
080C1BDC: 017c         ldrb r1,[r0,#0x10]
080C1BDE: 8900         lsl r1,r1,#0x2
080C1BE0: 8918         add r1,r1,r2
080C1BE2: 0968         ldr r1,[r1,#0x0]
080C1BE4: 67f0ccf9     bl 0x08128f80
080C1BE8: 01bc         pop {r0}
080C1BEA: 0047         bx r0
