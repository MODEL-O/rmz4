; undefined FUN_0810bd20(void)
; entry 0x810bd20  size 28 bytes

0810BD20: 827a         ldrb r2,[r0,#0xa]
0810BD22: fe21         mov r1,#0xfe
0810BD24: 1140         and r1,r2
0810BD26: 8172         strb r1,[r0,#0xa]
0810BD28: 044a         ldr r2,[0x0810bd3c]
0810BD2A: 417a         ldrb r1,[r0,#0x9]
0810BD2C: 8900         lsl r1,r1,#0x2
0810BD2E: 8918         add r1,r1,r2
0810BD30: 0422         mov r2,#0x4
0810BD32: c260         str r2,[r0,#0xc]
0810BD34: 0968         ldr r1,[r1,#0x0]
0810BD36: 0969         ldr r1,[r1,#0x10]
0810BD38: 4161         str r1,[r0,#0x14]
0810BD3A: 7047         bx lr
