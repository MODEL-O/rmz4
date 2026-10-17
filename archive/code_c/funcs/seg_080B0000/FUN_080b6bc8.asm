; undefined FUN_080b6bc8(void)
; entry 0x80b6bc8  size 20 bytes

080B6BC8: 00b5         push {lr}
080B6BCA: 044a         ldr r2,[0x080b6bdc]
080B6BCC: 017c         ldrb r1,[r0,#0x10]
080B6BCE: 8900         lsl r1,r1,#0x2
080B6BD0: 8918         add r1,r1,r2
080B6BD2: 0968         ldr r1,[r1,#0x0]
080B6BD4: 72f0d4f9     bl 0x08128f80
080B6BD8: 01bc         pop {r0}
080B6BDA: 0047         bx r0
