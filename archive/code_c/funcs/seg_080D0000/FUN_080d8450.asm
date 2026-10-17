; undefined FUN_080d8450(void)
; entry 0x80d8450  size 20 bytes

080D8450: 00b5         push {lr}
080D8452: 044a         ldr r2,[0x080d8464]
080D8454: 017c         ldrb r1,[r0,#0x10]
080D8456: 8900         lsl r1,r1,#0x2
080D8458: 8918         add r1,r1,r2
080D845A: 0968         ldr r1,[r1,#0x0]
080D845C: 50f090fd     bl 0x08128f80
080D8460: 01bc         pop {r0}
080D8462: 0047         bx r0
