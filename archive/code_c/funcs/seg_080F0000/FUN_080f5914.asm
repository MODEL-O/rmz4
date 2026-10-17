; undefined FUN_080f5914(void)
; entry 0x80f5914  size 20 bytes

080F5914: 00b5         push {lr}
080F5916: 044a         ldr r2,[0x080f5928]
080F5918: 017c         ldrb r1,[r0,#0x10]
080F591A: 8900         lsl r1,r1,#0x2
080F591C: 8918         add r1,r1,r2
080F591E: 0968         ldr r1,[r1,#0x0]
080F5920: 33f02efb     bl 0x08128f80
080F5924: 01bc         pop {r0}
080F5926: 0047         bx r0
