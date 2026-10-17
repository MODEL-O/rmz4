; undefined FUN_080a2474(void)
; entry 0x80a2474  size 20 bytes

080A2474: 00b5         push {lr}
080A2476: 044a         ldr r2,[0x080a2488]
080A2478: 017c         ldrb r1,[r0,#0x10]
080A247A: 8900         lsl r1,r1,#0x2
080A247C: 8918         add r1,r1,r2
080A247E: 0968         ldr r1,[r1,#0x0]
080A2480: 86f07efd     bl 0x08128f80
080A2484: 01bc         pop {r0}
080A2486: 0047         bx r0
