; undefined FUN_080d62b4(void)
; entry 0x80d62b4  size 20 bytes

080D62B4: 00b5         push {lr}
080D62B6: 044a         ldr r2,[0x080d62c8]
080D62B8: 017c         ldrb r1,[r0,#0x10]
080D62BA: 8900         lsl r1,r1,#0x2
080D62BC: 8918         add r1,r1,r2
080D62BE: 0968         ldr r1,[r1,#0x0]
080D62C0: 52f05efe     bl 0x08128f80
080D62C4: 01bc         pop {r0}
080D62C6: 0047         bx r0
