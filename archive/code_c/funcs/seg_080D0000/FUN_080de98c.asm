; undefined FUN_080de98c(void)
; entry 0x80de98c  size 28 bytes

080DE98C: 827a         ldrb r2,[r0,#0xa]
080DE98E: fe21         mov r1,#0xfe
080DE990: 1140         and r1,r2
080DE992: 8172         strb r1,[r0,#0xa]
080DE994: 044a         ldr r2,[0x080de9a8]
080DE996: 417a         ldrb r1,[r0,#0x9]
080DE998: 8900         lsl r1,r1,#0x2
080DE99A: 8918         add r1,r1,r2
080DE99C: 0422         mov r2,#0x4
080DE99E: c260         str r2,[r0,#0xc]
080DE9A0: 0968         ldr r1,[r1,#0x0]
080DE9A2: 0969         ldr r1,[r1,#0x10]
080DE9A4: 4161         str r1,[r0,#0x14]
080DE9A6: 7047         bx lr
