; undefined FUN_080dff80(void)
; entry 0x80dff80  size 20 bytes

080DFF80: 00b5         push {lr}
080DFF82: 044a         ldr r2,[0x080dff94]
080DFF84: 017c         ldrb r1,[r0,#0x10]
080DFF86: 8900         lsl r1,r1,#0x2
080DFF88: 8918         add r1,r1,r2
080DFF8A: 0968         ldr r1,[r1,#0x0]
080DFF8C: 48f0f8ff     bl 0x08128f80
080DFF90: 01bc         pop {r0}
080DFF92: 0047         bx r0
