; undefined FUN_080ecbd8(void)
; entry 0x80ecbd8  size 28 bytes

080ECBD8: 827a         ldrb r2,[r0,#0xa]
080ECBDA: fe21         mov r1,#0xfe
080ECBDC: 1140         and r1,r2
080ECBDE: 8172         strb r1,[r0,#0xa]
080ECBE0: 044a         ldr r2,[0x080ecbf4]
080ECBE2: 417a         ldrb r1,[r0,#0x9]
080ECBE4: 8900         lsl r1,r1,#0x2
080ECBE6: 8918         add r1,r1,r2
080ECBE8: 0422         mov r2,#0x4
080ECBEA: c260         str r2,[r0,#0xc]
080ECBEC: 0968         ldr r1,[r1,#0x0]
080ECBEE: 0969         ldr r1,[r1,#0x10]
080ECBF0: 4161         str r1,[r0,#0x14]
080ECBF2: 7047         bx lr
