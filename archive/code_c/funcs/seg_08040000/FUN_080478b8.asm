; undefined FUN_080478b8(void)
; entry 0x80478b8  size 20 bytes

080478B8: 00b5         push {lr}
080478BA: 044a         ldr r2,[0x080478cc]
080478BC: 017c         ldrb r1,[r0,#0x10]
080478BE: 8900         lsl r1,r1,#0x2
080478C0: 8918         add r1,r1,r2
080478C2: 0968         ldr r1,[r1,#0x0]
080478C4: e1f05cfb     bl 0x08128f80
080478C8: 01bc         pop {r0}
080478CA: 0047         bx r0
