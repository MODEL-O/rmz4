; undefined FUN_080d294c(void)
; entry 0x80d294c  size 28 bytes

080D294C: 827a         ldrb r2,[r0,#0xa]
080D294E: fe21         mov r1,#0xfe
080D2950: 1140         and r1,r2
080D2952: 8172         strb r1,[r0,#0xa]
080D2954: 044a         ldr r2,[0x080d2968]
080D2956: 417a         ldrb r1,[r0,#0x9]
080D2958: 8900         lsl r1,r1,#0x2
080D295A: 8918         add r1,r1,r2
080D295C: 0422         mov r2,#0x4
080D295E: c260         str r2,[r0,#0xc]
080D2960: 0968         ldr r1,[r1,#0x0]
080D2962: 0969         ldr r1,[r1,#0x10]
080D2964: 4161         str r1,[r0,#0x14]
080D2966: 7047         bx lr
