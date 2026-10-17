; undefined FUN_080d1db8(void)
; entry 0x80d1db8  size 20 bytes

080D1DB8: 00b5         push {lr}
080D1DBA: 044a         ldr r2,[0x080d1dcc]
080D1DBC: 017c         ldrb r1,[r0,#0x10]
080D1DBE: 8900         lsl r1,r1,#0x2
080D1DC0: 8918         add r1,r1,r2
080D1DC2: 0968         ldr r1,[r1,#0x0]
080D1DC4: 57f0dcf8     bl 0x08128f80
080D1DC8: 01bc         pop {r0}
080D1DCA: 0047         bx r0
