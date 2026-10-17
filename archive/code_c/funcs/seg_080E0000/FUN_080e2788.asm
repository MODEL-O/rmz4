; undefined FUN_080e2788(void)
; entry 0x80e2788  size 28 bytes

080E2788: 827a         ldrb r2,[r0,#0xa]
080E278A: fe21         mov r1,#0xfe
080E278C: 1140         and r1,r2
080E278E: 8172         strb r1,[r0,#0xa]
080E2790: 044a         ldr r2,[0x080e27a4]
080E2792: 417a         ldrb r1,[r0,#0x9]
080E2794: 8900         lsl r1,r1,#0x2
080E2796: 8918         add r1,r1,r2
080E2798: 0422         mov r2,#0x4
080E279A: c260         str r2,[r0,#0xc]
080E279C: 0968         ldr r1,[r1,#0x0]
080E279E: 0969         ldr r1,[r1,#0x10]
080E27A0: 4161         str r1,[r0,#0x14]
080E27A2: 7047         bx lr
