; undefined FUN_080cb178(void)
; entry 0x80cb178  size 20 bytes

080CB178: 00b5         push {lr}
080CB17A: 044a         ldr r2,[0x080cb18c]
080CB17C: 017c         ldrb r1,[r0,#0x10]
080CB17E: 8900         lsl r1,r1,#0x2
080CB180: 8918         add r1,r1,r2
080CB182: 0968         ldr r1,[r1,#0x0]
080CB184: 5df0fcfe     bl 0x08128f80
080CB188: 01bc         pop {r0}
080CB18A: 0047         bx r0
