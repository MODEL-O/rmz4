; undefined FUN_08101728(void)
; entry 0x8101728  size 20 bytes

08101728: 044a         ldr r2,[0x0810173c]
0810172A: 417a         ldrb r1,[r0,#0x9]
0810172C: 8900         lsl r1,r1,#0x2
0810172E: 8918         add r1,r1,r2
08101730: 0422         mov r2,#0x4
08101732: c260         str r2,[r0,#0xc]
08101734: 0968         ldr r1,[r1,#0x0]
08101736: 0969         ldr r1,[r1,#0x10]
08101738: 4161         str r1,[r0,#0x14]
0810173A: 7047         bx lr
