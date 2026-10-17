; undefined FUN_080e3780(void)
; entry 0x80e3780  size 28 bytes

080E3780: 827a         ldrb r2,[r0,#0xa]
080E3782: fe21         mov r1,#0xfe
080E3784: 1140         and r1,r2
080E3786: 8172         strb r1,[r0,#0xa]
080E3788: 044a         ldr r2,[0x080e379c]
080E378A: 417a         ldrb r1,[r0,#0x9]
080E378C: 8900         lsl r1,r1,#0x2
080E378E: 8918         add r1,r1,r2
080E3790: 0422         mov r2,#0x4
080E3792: c260         str r2,[r0,#0xc]
080E3794: 0968         ldr r1,[r1,#0x0]
080E3796: 0969         ldr r1,[r1,#0x10]
080E3798: 4161         str r1,[r0,#0x14]
080E379A: 7047         bx lr
