; undefined FUN_080cb118(void)
; entry 0x80cb118  size 20 bytes

080CB118: 00b5         push {lr}
080CB11A: 044a         ldr r2,[0x080cb12c]
080CB11C: 017c         ldrb r1,[r0,#0x10]
080CB11E: 8900         lsl r1,r1,#0x2
080CB120: 8918         add r1,r1,r2
080CB122: 0968         ldr r1,[r1,#0x0]
080CB124: 5df02cff     bl 0x08128f80
080CB128: 01bc         pop {r0}
080CB12A: 0047         bx r0
