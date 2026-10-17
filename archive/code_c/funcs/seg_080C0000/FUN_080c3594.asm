; undefined FUN_080c3594(void)
; entry 0x80c3594  size 20 bytes

080C3594: 00b5         push {lr}
080C3596: 044a         ldr r2,[0x080c35a8]
080C3598: 017c         ldrb r1,[r0,#0x10]
080C359A: 8900         lsl r1,r1,#0x2
080C359C: 8918         add r1,r1,r2
080C359E: 0968         ldr r1,[r1,#0x0]
080C35A0: 65f0eefc     bl 0x08128f80
080C35A4: 01bc         pop {r0}
080C35A6: 0047         bx r0
