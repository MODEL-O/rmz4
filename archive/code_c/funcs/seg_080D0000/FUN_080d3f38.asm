; undefined FUN_080d3f38(void)
; entry 0x80d3f38  size 28 bytes

080D3F38: 827a         ldrb r2,[r0,#0xa]
080D3F3A: fe21         mov r1,#0xfe
080D3F3C: 1140         and r1,r2
080D3F3E: 8172         strb r1,[r0,#0xa]
080D3F40: 044a         ldr r2,[0x080d3f54]
080D3F42: 417a         ldrb r1,[r0,#0x9]
080D3F44: 8900         lsl r1,r1,#0x2
080D3F46: 8918         add r1,r1,r2
080D3F48: 0422         mov r2,#0x4
080D3F4A: c260         str r2,[r0,#0xc]
080D3F4C: 0968         ldr r1,[r1,#0x0]
080D3F4E: 0969         ldr r1,[r1,#0x10]
080D3F50: 4161         str r1,[r0,#0x14]
080D3F52: 7047         bx lr
