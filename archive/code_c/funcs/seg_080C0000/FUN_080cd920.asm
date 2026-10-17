; undefined FUN_080cd920(void)
; entry 0x80cd920  size 20 bytes

080CD920: 044a         ldr r2,[0x080cd934]
080CD922: 417a         ldrb r1,[r0,#0x9]
080CD924: 8900         lsl r1,r1,#0x2
080CD926: 8918         add r1,r1,r2
080CD928: 0422         mov r2,#0x4
080CD92A: c260         str r2,[r0,#0xc]
080CD92C: 0968         ldr r1,[r1,#0x0]
080CD92E: 0969         ldr r1,[r1,#0x10]
080CD930: 4161         str r1,[r0,#0x14]
080CD932: 7047         bx lr
