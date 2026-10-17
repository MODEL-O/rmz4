; undefined FUN_080f61fc(void)
; entry 0x80f61fc  size 20 bytes

080F61FC: 00b5         push {lr}
080F61FE: 044a         ldr r2,[0x080f6210]
080F6200: 017c         ldrb r1,[r0,#0x10]
080F6202: 8900         lsl r1,r1,#0x2
080F6204: 8918         add r1,r1,r2
080F6206: 0968         ldr r1,[r1,#0x0]
080F6208: 32f0bafe     bl 0x08128f80
080F620C: 01bc         pop {r0}
080F620E: 0047         bx r0
