; undefined FUN_0810adec(void)
; entry 0x810adec  size 20 bytes

0810ADEC: 044a         ldr r2,[0x0810ae00]
0810ADEE: 417a         ldrb r1,[r0,#0x9]
0810ADF0: 8900         lsl r1,r1,#0x2
0810ADF2: 8918         add r1,r1,r2
0810ADF4: 0422         mov r2,#0x4
0810ADF6: c260         str r2,[r0,#0xc]
0810ADF8: 0968         ldr r1,[r1,#0x0]
0810ADFA: 0969         ldr r1,[r1,#0x10]
0810ADFC: 4161         str r1,[r0,#0x14]
0810ADFE: 7047         bx lr
