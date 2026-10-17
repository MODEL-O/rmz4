; undefined FUN_080f7614(void)
; entry 0x80f7614  size 20 bytes

080F7614: 00b5         push {lr}
080F7616: 044a         ldr r2,[0x080f7628]
080F7618: 017c         ldrb r1,[r0,#0x10]
080F761A: 8900         lsl r1,r1,#0x2
080F761C: 8918         add r1,r1,r2
080F761E: 0968         ldr r1,[r1,#0x0]
080F7620: 31f0aefc     bl 0x08128f80
080F7624: 01bc         pop {r0}
080F7626: 0047         bx r0
