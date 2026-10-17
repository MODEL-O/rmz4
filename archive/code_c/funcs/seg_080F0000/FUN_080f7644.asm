; undefined FUN_080f7644(void)
; entry 0x80f7644  size 20 bytes

080F7644: 00b5         push {lr}
080F7646: 044a         ldr r2,[0x080f7658]
080F7648: 017c         ldrb r1,[r0,#0x10]
080F764A: 8900         lsl r1,r1,#0x2
080F764C: 8918         add r1,r1,r2
080F764E: 0968         ldr r1,[r1,#0x0]
080F7650: 31f096fc     bl 0x08128f80
080F7654: 01bc         pop {r0}
080F7656: 0047         bx r0
