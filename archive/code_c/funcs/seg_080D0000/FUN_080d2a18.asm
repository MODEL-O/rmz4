; undefined FUN_080d2a18(void)
; entry 0x80d2a18  size 20 bytes

080D2A18: 00b5         push {lr}
080D2A1A: 044a         ldr r2,[0x080d2a2c]
080D2A1C: 017c         ldrb r1,[r0,#0x10]
080D2A1E: 8900         lsl r1,r1,#0x2
080D2A20: 8918         add r1,r1,r2
080D2A22: 0968         ldr r1,[r1,#0x0]
080D2A24: 56f0acfa     bl 0x08128f80
080D2A28: 01bc         pop {r0}
080D2A2A: 0047         bx r0
