; undefined FUN_080a7b0c(void)
; entry 0x80a7b0c  size 28 bytes

080A7B0C: 827a         ldrb r2,[r0,#0xa]
080A7B0E: fe21         mov r1,#0xfe
080A7B10: 1140         and r1,r2
080A7B12: 8172         strb r1,[r0,#0xa]
080A7B14: 044a         ldr r2,[0x080a7b28]
080A7B16: 417a         ldrb r1,[r0,#0x9]
080A7B18: 8900         lsl r1,r1,#0x2
080A7B1A: 8918         add r1,r1,r2
080A7B1C: 0422         mov r2,#0x4
080A7B1E: c260         str r2,[r0,#0xc]
080A7B20: 0968         ldr r1,[r1,#0x0]
080A7B22: 0969         ldr r1,[r1,#0x10]
080A7B24: 4161         str r1,[r0,#0x14]
080A7B26: 7047         bx lr
