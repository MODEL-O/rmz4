; undefined FUN_080c6500(void)
; entry 0x80c6500  size 20 bytes

080C6500: 00b5         push {lr}
080C6502: 044a         ldr r2,[0x080c6514]
080C6504: 017c         ldrb r1,[r0,#0x10]
080C6506: 8900         lsl r1,r1,#0x2
080C6508: 8918         add r1,r1,r2
080C650A: 0968         ldr r1,[r1,#0x0]
080C650C: 62f038fd     bl 0x08128f80
080C6510: 01bc         pop {r0}
080C6512: 0047         bx r0
