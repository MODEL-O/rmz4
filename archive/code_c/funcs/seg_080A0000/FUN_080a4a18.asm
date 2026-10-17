; undefined FUN_080a4a18(void)
; entry 0x80a4a18  size 20 bytes

080A4A18: 00b5         push {lr}
080A4A1A: 044a         ldr r2,[0x080a4a2c]
080A4A1C: 017c         ldrb r1,[r0,#0x10]
080A4A1E: 8900         lsl r1,r1,#0x2
080A4A20: 8918         add r1,r1,r2
080A4A22: 0968         ldr r1,[r1,#0x0]
080A4A24: 84f0acfa     bl 0x08128f80
080A4A28: 01bc         pop {r0}
080A4A2A: 0047         bx r0
