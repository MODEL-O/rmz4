; undefined FUN_080b723c(void)
; entry 0x80b723c  size 20 bytes

080B723C: 00b5         push {lr}
080B723E: 044a         ldr r2,[0x080b7250]
080B7240: 017c         ldrb r1,[r0,#0x10]
080B7242: 8900         lsl r1,r1,#0x2
080B7244: 8918         add r1,r1,r2
080B7246: 0968         ldr r1,[r1,#0x0]
080B7248: 71f09afe     bl 0x08128f80
080B724C: 01bc         pop {r0}
080B724E: 0047         bx r0
