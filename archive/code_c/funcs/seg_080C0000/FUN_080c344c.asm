; undefined FUN_080c344c(void)
; entry 0x80c344c  size 20 bytes

080C344C: 00b5         push {lr}
080C344E: 044a         ldr r2,[0x080c3460]
080C3450: 017c         ldrb r1,[r0,#0x10]
080C3452: 8900         lsl r1,r1,#0x2
080C3454: 8918         add r1,r1,r2
080C3456: 0968         ldr r1,[r1,#0x0]
080C3458: 65f092fd     bl 0x08128f80
080C345C: 01bc         pop {r0}
080C345E: 0047         bx r0
