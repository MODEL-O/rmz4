; undefined FUN_080ecd6c(void)
; entry 0x80ecd6c  size 20 bytes

080ECD6C: 00b5         push {lr}
080ECD6E: 044a         ldr r2,[0x080ecd80]
080ECD70: 017c         ldrb r1,[r0,#0x10]
080ECD72: 8900         lsl r1,r1,#0x2
080ECD74: 8918         add r1,r1,r2
080ECD76: 0968         ldr r1,[r1,#0x0]
080ECD78: 3cf002f9     bl 0x08128f80
080ECD7C: 01bc         pop {r0}
080ECD7E: 0047         bx r0
