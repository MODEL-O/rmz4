; undefined FUN_080cda8c(void)
; entry 0x80cda8c  size 20 bytes

080CDA8C: 044a         ldr r2,[0x080cdaa0]
080CDA8E: 417a         ldrb r1,[r0,#0x9]
080CDA90: 8900         lsl r1,r1,#0x2
080CDA92: 8918         add r1,r1,r2
080CDA94: 0422         mov r2,#0x4
080CDA96: c260         str r2,[r0,#0xc]
080CDA98: 0968         ldr r1,[r1,#0x0]
080CDA9A: 0969         ldr r1,[r1,#0x10]
080CDA9C: 4161         str r1,[r0,#0x14]
080CDA9E: 7047         bx lr
