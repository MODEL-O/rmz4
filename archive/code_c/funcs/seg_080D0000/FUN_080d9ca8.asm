; undefined FUN_080d9ca8(void)
; entry 0x80d9ca8  size 28 bytes

080D9CA8: 827a         ldrb r2,[r0,#0xa]
080D9CAA: fe21         mov r1,#0xfe
080D9CAC: 1140         and r1,r2
080D9CAE: 8172         strb r1,[r0,#0xa]
080D9CB0: 044a         ldr r2,[0x080d9cc4]
080D9CB2: 417a         ldrb r1,[r0,#0x9]
080D9CB4: 8900         lsl r1,r1,#0x2
080D9CB6: 8918         add r1,r1,r2
080D9CB8: 0422         mov r2,#0x4
080D9CBA: c260         str r2,[r0,#0xc]
080D9CBC: 0968         ldr r1,[r1,#0x0]
080D9CBE: 0969         ldr r1,[r1,#0x10]
080D9CC0: 4161         str r1,[r0,#0x14]
080D9CC2: 7047         bx lr
