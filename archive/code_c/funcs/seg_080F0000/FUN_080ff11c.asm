; undefined FUN_080ff11c(void)
; entry 0x80ff11c  size 20 bytes

080FF11C: 00b5         push {lr}
080FF11E: 044a         ldr r2,[0x080ff130]
080FF120: 017c         ldrb r1,[r0,#0x10]
080FF122: 8900         lsl r1,r1,#0x2
080FF124: 8918         add r1,r1,r2
080FF126: 0968         ldr r1,[r1,#0x0]
080FF128: 29f02aff     bl 0x08128f80
080FF12C: 01bc         pop {r0}
080FF12E: 0047         bx r0
