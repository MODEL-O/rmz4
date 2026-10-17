; undefined FUN_080dfd7c(void)
; entry 0x80dfd7c  size 28 bytes

080DFD7C: 827a         ldrb r2,[r0,#0xa]
080DFD7E: fe21         mov r1,#0xfe
080DFD80: 1140         and r1,r2
080DFD82: 8172         strb r1,[r0,#0xa]
080DFD84: 044a         ldr r2,[0x080dfd98]
080DFD86: 417a         ldrb r1,[r0,#0x9]
080DFD88: 8900         lsl r1,r1,#0x2
080DFD8A: 8918         add r1,r1,r2
080DFD8C: 0422         mov r2,#0x4
080DFD8E: c260         str r2,[r0,#0xc]
080DFD90: 0968         ldr r1,[r1,#0x0]
080DFD92: 0969         ldr r1,[r1,#0x10]
080DFD94: 4161         str r1,[r0,#0x14]
080DFD96: 7047         bx lr
