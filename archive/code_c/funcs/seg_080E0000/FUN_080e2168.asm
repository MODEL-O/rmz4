; undefined FUN_080e2168(void)
; entry 0x80e2168  size 28 bytes

080E2168: 827a         ldrb r2,[r0,#0xa]
080E216A: fe21         mov r1,#0xfe
080E216C: 1140         and r1,r2
080E216E: 8172         strb r1,[r0,#0xa]
080E2170: 044a         ldr r2,[0x080e2184]
080E2172: 417a         ldrb r1,[r0,#0x9]
080E2174: 8900         lsl r1,r1,#0x2
080E2176: 8918         add r1,r1,r2
080E2178: 0422         mov r2,#0x4
080E217A: c260         str r2,[r0,#0xc]
080E217C: 0968         ldr r1,[r1,#0x0]
080E217E: 0969         ldr r1,[r1,#0x10]
080E2180: 4161         str r1,[r0,#0x14]
080E2182: 7047         bx lr
