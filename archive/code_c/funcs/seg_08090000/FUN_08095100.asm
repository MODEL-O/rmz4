; undefined FUN_08095100(void)
; entry 0x8095100  size 28 bytes

08095100: 827a         ldrb r2,[r0,#0xa]
08095102: fe21         mov r1,#0xfe
08095104: 1140         and r1,r2
08095106: 8172         strb r1,[r0,#0xa]
08095108: 044a         ldr r2,[0x0809511c]
0809510A: 417a         ldrb r1,[r0,#0x9]
0809510C: 8900         lsl r1,r1,#0x2
0809510E: 8918         add r1,r1,r2
08095110: 0422         mov r2,#0x4
08095112: c260         str r2,[r0,#0xc]
08095114: 0968         ldr r1,[r1,#0x0]
08095116: 0969         ldr r1,[r1,#0x10]
08095118: 4161         str r1,[r0,#0x14]
0809511A: 7047         bx lr
