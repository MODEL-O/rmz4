; undefined FUN_080c8384(void)
; entry 0x80c8384  size 20 bytes

080C8384: 00b5         push {lr}
080C8386: 044a         ldr r2,[0x080c8398]
080C8388: 017c         ldrb r1,[r0,#0x10]
080C838A: 8900         lsl r1,r1,#0x2
080C838C: 8918         add r1,r1,r2
080C838E: 0968         ldr r1,[r1,#0x0]
080C8390: 60f0f6fd     bl 0x08128f80
080C8394: 01bc         pop {r0}
080C8396: 0047         bx r0
