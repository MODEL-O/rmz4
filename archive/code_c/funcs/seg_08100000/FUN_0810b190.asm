; undefined FUN_0810b190(void)
; entry 0x810b190  size 20 bytes

0810B190: 044a         ldr r2,[0x0810b1a4]
0810B192: 417a         ldrb r1,[r0,#0x9]
0810B194: 8900         lsl r1,r1,#0x2
0810B196: 8918         add r1,r1,r2
0810B198: 0422         mov r2,#0x4
0810B19A: c260         str r2,[r0,#0xc]
0810B19C: 0968         ldr r1,[r1,#0x0]
0810B19E: 0969         ldr r1,[r1,#0x10]
0810B1A0: 4161         str r1,[r0,#0x14]
0810B1A2: 7047         bx lr
