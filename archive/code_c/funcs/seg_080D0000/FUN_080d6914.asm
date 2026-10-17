; undefined FUN_080d6914(void)
; entry 0x80d6914  size 20 bytes

080D6914: 00b5         push {lr}
080D6916: 044a         ldr r2,[0x080d6928]
080D6918: 017c         ldrb r1,[r0,#0x10]
080D691A: 8900         lsl r1,r1,#0x2
080D691C: 8918         add r1,r1,r2
080D691E: 0968         ldr r1,[r1,#0x0]
080D6920: 52f02efb     bl 0x08128f80
080D6924: 01bc         pop {r0}
080D6926: 0047         bx r0
