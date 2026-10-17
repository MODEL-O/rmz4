; undefined FUN_080cb5a4(void)
; entry 0x80cb5a4  size 20 bytes

080CB5A4: 00b5         push {lr}
080CB5A6: 044a         ldr r2,[0x080cb5b8]
080CB5A8: 017c         ldrb r1,[r0,#0x10]
080CB5AA: 8900         lsl r1,r1,#0x2
080CB5AC: 8918         add r1,r1,r2
080CB5AE: 0968         ldr r1,[r1,#0x0]
080CB5B0: 5df0e6fc     bl 0x08128f80
080CB5B4: 01bc         pop {r0}
080CB5B6: 0047         bx r0
