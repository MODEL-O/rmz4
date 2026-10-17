; undefined FUN_080c6518(void)
; entry 0x80c6518  size 20 bytes

080C6518: 00b5         push {lr}
080C651A: 044a         ldr r2,[0x080c652c]
080C651C: 017c         ldrb r1,[r0,#0x10]
080C651E: 8900         lsl r1,r1,#0x2
080C6520: 8918         add r1,r1,r2
080C6522: 0968         ldr r1,[r1,#0x0]
080C6524: 62f02cfd     bl 0x08128f80
080C6528: 01bc         pop {r0}
080C652A: 0047         bx r0
