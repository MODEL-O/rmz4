; undefined FUN_0809ba14(void)
; entry 0x809ba14  size 28 bytes

0809BA14: 827a         ldrb r2,[r0,#0xa]
0809BA16: fe21         mov r1,#0xfe
0809BA18: 1140         and r1,r2
0809BA1A: 8172         strb r1,[r0,#0xa]
0809BA1C: 044a         ldr r2,[0x0809ba30]
0809BA1E: 417a         ldrb r1,[r0,#0x9]
0809BA20: 8900         lsl r1,r1,#0x2
0809BA22: 8918         add r1,r1,r2
0809BA24: 0422         mov r2,#0x4
0809BA26: c260         str r2,[r0,#0xc]
0809BA28: 0968         ldr r1,[r1,#0x0]
0809BA2A: 0969         ldr r1,[r1,#0x10]
0809BA2C: 4161         str r1,[r0,#0x14]
0809BA2E: 7047         bx lr
