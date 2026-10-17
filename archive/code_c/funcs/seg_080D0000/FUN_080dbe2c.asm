; undefined FUN_080dbe2c(void)
; entry 0x80dbe2c  size 28 bytes

080DBE2C: 827a         ldrb r2,[r0,#0xa]
080DBE2E: fe21         mov r1,#0xfe
080DBE30: 1140         and r1,r2
080DBE32: 8172         strb r1,[r0,#0xa]
080DBE34: 044a         ldr r2,[0x080dbe48]
080DBE36: 417a         ldrb r1,[r0,#0x9]
080DBE38: 8900         lsl r1,r1,#0x2
080DBE3A: 8918         add r1,r1,r2
080DBE3C: 0422         mov r2,#0x4
080DBE3E: c260         str r2,[r0,#0xc]
080DBE40: 0968         ldr r1,[r1,#0x0]
080DBE42: 0969         ldr r1,[r1,#0x10]
080DBE44: 4161         str r1,[r0,#0x14]
080DBE46: 7047         bx lr
