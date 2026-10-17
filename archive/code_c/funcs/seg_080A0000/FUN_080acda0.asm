; undefined FUN_080acda0(void)
; entry 0x80acda0  size 20 bytes

080ACDA0: 00b5         push {lr}
080ACDA2: 044a         ldr r2,[0x080acdb4]
080ACDA4: 017c         ldrb r1,[r0,#0x10]
080ACDA6: 8900         lsl r1,r1,#0x2
080ACDA8: 8918         add r1,r1,r2
080ACDAA: 0968         ldr r1,[r1,#0x0]
080ACDAC: 7cf0e8f8     bl 0x08128f80
080ACDB0: 01bc         pop {r0}
080ACDB2: 0047         bx r0
