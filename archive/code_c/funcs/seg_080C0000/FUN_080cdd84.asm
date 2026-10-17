; undefined FUN_080cdd84(void)
; entry 0x80cdd84  size 20 bytes

080CDD84: 044a         ldr r2,[0x080cdd98]
080CDD86: 417a         ldrb r1,[r0,#0x9]
080CDD88: 8900         lsl r1,r1,#0x2
080CDD8A: 8918         add r1,r1,r2
080CDD8C: 0422         mov r2,#0x4
080CDD8E: c260         str r2,[r0,#0xc]
080CDD90: 0968         ldr r1,[r1,#0x0]
080CDD92: 0969         ldr r1,[r1,#0x10]
080CDD94: 4161         str r1,[r0,#0x14]
080CDD96: 7047         bx lr
