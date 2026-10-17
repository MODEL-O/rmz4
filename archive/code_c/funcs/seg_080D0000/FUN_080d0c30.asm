; undefined FUN_080d0c30(void)
; entry 0x80d0c30  size 28 bytes

080D0C30: 827a         ldrb r2,[r0,#0xa]
080D0C32: fe21         mov r1,#0xfe
080D0C34: 1140         and r1,r2
080D0C36: 8172         strb r1,[r0,#0xa]
080D0C38: 044a         ldr r2,[0x080d0c4c]
080D0C3A: 417a         ldrb r1,[r0,#0x9]
080D0C3C: 8900         lsl r1,r1,#0x2
080D0C3E: 8918         add r1,r1,r2
080D0C40: 0422         mov r2,#0x4
080D0C42: c260         str r2,[r0,#0xc]
080D0C44: 0968         ldr r1,[r1,#0x0]
080D0C46: 0969         ldr r1,[r1,#0x10]
080D0C48: 4161         str r1,[r0,#0x14]
080D0C4A: 7047         bx lr
