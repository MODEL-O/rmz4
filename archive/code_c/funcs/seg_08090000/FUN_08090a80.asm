; undefined FUN_08090a80(void)
; entry 0x8090a80  size 28 bytes

08090A80: 827a         ldrb r2,[r0,#0xa]
08090A82: fe21         mov r1,#0xfe
08090A84: 1140         and r1,r2
08090A86: 8172         strb r1,[r0,#0xa]
08090A88: 044a         ldr r2,[0x08090a9c]
08090A8A: 417a         ldrb r1,[r0,#0x9]
08090A8C: 8900         lsl r1,r1,#0x2
08090A8E: 8918         add r1,r1,r2
08090A90: 0422         mov r2,#0x4
08090A92: c260         str r2,[r0,#0xc]
08090A94: 0968         ldr r1,[r1,#0x0]
08090A96: 0969         ldr r1,[r1,#0x10]
08090A98: 4161         str r1,[r0,#0x14]
08090A9A: 7047         bx lr
