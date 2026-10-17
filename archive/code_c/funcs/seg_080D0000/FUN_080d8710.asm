; undefined FUN_080d8710(void)
; entry 0x80d8710  size 20 bytes

080D8710: 00b5         push {lr}
080D8712: 044a         ldr r2,[0x080d8724]
080D8714: 017c         ldrb r1,[r0,#0x10]
080D8716: 8900         lsl r1,r1,#0x2
080D8718: 8918         add r1,r1,r2
080D871A: 0968         ldr r1,[r1,#0x0]
080D871C: 50f030fc     bl 0x08128f80
080D8720: 01bc         pop {r0}
080D8722: 0047         bx r0
