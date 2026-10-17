; undefined FUN_080bcc8c(void)
; entry 0x80bcc8c  size 20 bytes

080BCC8C: 044a         ldr r2,[0x080bcca0]
080BCC8E: 417a         ldrb r1,[r0,#0x9]
080BCC90: 8900         lsl r1,r1,#0x2
080BCC92: 8918         add r1,r1,r2
080BCC94: 0422         mov r2,#0x4
080BCC96: c260         str r2,[r0,#0xc]
080BCC98: 0968         ldr r1,[r1,#0x0]
080BCC9A: 0969         ldr r1,[r1,#0x10]
080BCC9C: 4161         str r1,[r0,#0x14]
080BCC9E: 7047         bx lr
