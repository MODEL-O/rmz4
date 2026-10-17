; undefined FUN_0807f8ec(void)
; entry 0x807f8ec  size 28 bytes

0807F8EC: 827a         ldrb r2,[r0,#0xa]
0807F8EE: fe21         mov r1,#0xfe
0807F8F0: 1140         and r1,r2
0807F8F2: 8172         strb r1,[r0,#0xa]
0807F8F4: 044a         ldr r2,[0x0807f908]
0807F8F6: 417a         ldrb r1,[r0,#0x9]
0807F8F8: 8900         lsl r1,r1,#0x2
0807F8FA: 8918         add r1,r1,r2
0807F8FC: 0422         mov r2,#0x4
0807F8FE: c260         str r2,[r0,#0xc]
0807F900: 0968         ldr r1,[r1,#0x0]
0807F902: 0969         ldr r1,[r1,#0x10]
0807F904: 4161         str r1,[r0,#0x14]
0807F906: 7047         bx lr
