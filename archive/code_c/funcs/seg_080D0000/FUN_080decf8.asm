; undefined FUN_080decf8(void)
; entry 0x80decf8  size 20 bytes

080DECF8: 00b5         push {lr}
080DECFA: 044a         ldr r2,[0x080ded0c]
080DECFC: 017c         ldrb r1,[r0,#0x10]
080DECFE: 8900         lsl r1,r1,#0x2
080DED00: 8918         add r1,r1,r2
080DED02: 0968         ldr r1,[r1,#0x0]
080DED04: 4af03cf9     bl 0x08128f80
080DED08: 01bc         pop {r0}
080DED0A: 0047         bx r0
