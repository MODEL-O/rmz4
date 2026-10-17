; undefined FUN_080bd3f8(void)
; entry 0x80bd3f8  size 28 bytes

080BD3F8: 827a         ldrb r2,[r0,#0xa]
080BD3FA: fe21         mov r1,#0xfe
080BD3FC: 1140         and r1,r2
080BD3FE: 8172         strb r1,[r0,#0xa]
080BD400: 044a         ldr r2,[0x080bd414]
080BD402: 417a         ldrb r1,[r0,#0x9]
080BD404: 8900         lsl r1,r1,#0x2
080BD406: 8918         add r1,r1,r2
080BD408: 0422         mov r2,#0x4
080BD40A: c260         str r2,[r0,#0xc]
080BD40C: 0968         ldr r1,[r1,#0x0]
080BD40E: 0969         ldr r1,[r1,#0x10]
080BD410: 4161         str r1,[r0,#0x14]
080BD412: 7047         bx lr
