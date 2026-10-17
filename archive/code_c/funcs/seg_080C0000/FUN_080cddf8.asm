; undefined FUN_080cddf8(void)
; entry 0x80cddf8  size 20 bytes

080CDDF8: 00b5         push {lr}
080CDDFA: 044a         ldr r2,[0x080cde0c]
080CDDFC: 017c         ldrb r1,[r0,#0x10]
080CDDFE: 8900         lsl r1,r1,#0x2
080CDE00: 8918         add r1,r1,r2
080CDE02: 0968         ldr r1,[r1,#0x0]
080CDE04: 5bf0bcf8     bl 0x08128f80
080CDE08: 01bc         pop {r0}
080CDE0A: 0047         bx r0
