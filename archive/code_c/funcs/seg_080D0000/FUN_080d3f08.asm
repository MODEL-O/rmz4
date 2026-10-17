; undefined FUN_080d3f08(void)
; entry 0x80d3f08  size 20 bytes

080D3F08: 00b5         push {lr}
080D3F0A: 044a         ldr r2,[0x080d3f1c]
080D3F0C: 017c         ldrb r1,[r0,#0x10]
080D3F0E: 8900         lsl r1,r1,#0x2
080D3F10: 8918         add r1,r1,r2
080D3F12: 0968         ldr r1,[r1,#0x0]
080D3F14: 55f034f8     bl 0x08128f80
080D3F18: 01bc         pop {r0}
080D3F1A: 0047         bx r0
