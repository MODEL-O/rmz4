; undefined FUN_080e8c24(void)
; entry 0x80e8c24  size 28 bytes

080E8C24: 827a         ldrb r2,[r0,#0xa]
080E8C26: fe21         mov r1,#0xfe
080E8C28: 1140         and r1,r2
080E8C2A: 8172         strb r1,[r0,#0xa]
080E8C2C: 044a         ldr r2,[0x080e8c40]
080E8C2E: 417a         ldrb r1,[r0,#0x9]
080E8C30: 8900         lsl r1,r1,#0x2
080E8C32: 8918         add r1,r1,r2
080E8C34: 0422         mov r2,#0x4
080E8C36: c260         str r2,[r0,#0xc]
080E8C38: 0968         ldr r1,[r1,#0x0]
080E8C3A: 0969         ldr r1,[r1,#0x10]
080E8C3C: 4161         str r1,[r0,#0x14]
080E8C3E: 7047         bx lr
