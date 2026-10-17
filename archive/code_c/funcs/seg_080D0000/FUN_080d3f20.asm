; undefined FUN_080d3f20(void)
; entry 0x80d3f20  size 20 bytes

080D3F20: 00b5         push {lr}
080D3F22: 044a         ldr r2,[0x080d3f34]
080D3F24: 017c         ldrb r1,[r0,#0x10]
080D3F26: 8900         lsl r1,r1,#0x2
080D3F28: 8918         add r1,r1,r2
080D3F2A: 0968         ldr r1,[r1,#0x0]
080D3F2C: 55f028f8     bl 0x08128f80
080D3F30: 01bc         pop {r0}
080D3F32: 0047         bx r0
