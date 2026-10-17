; undefined FUN_080e28f4(void)
; entry 0x80e28f4  size 28 bytes

080E28F4: 827a         ldrb r2,[r0,#0xa]
080E28F6: fe21         mov r1,#0xfe
080E28F8: 1140         and r1,r2
080E28FA: 8172         strb r1,[r0,#0xa]
080E28FC: 044a         ldr r2,[0x080e2910]
080E28FE: 417a         ldrb r1,[r0,#0x9]
080E2900: 8900         lsl r1,r1,#0x2
080E2902: 8918         add r1,r1,r2
080E2904: 0422         mov r2,#0x4
080E2906: c260         str r2,[r0,#0xc]
080E2908: 0968         ldr r1,[r1,#0x0]
080E290A: 0969         ldr r1,[r1,#0x10]
080E290C: 4161         str r1,[r0,#0x14]
080E290E: 7047         bx lr
