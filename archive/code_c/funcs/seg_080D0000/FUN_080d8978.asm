; undefined FUN_080d8978(void)
; entry 0x80d8978  size 28 bytes

080D8978: 827a         ldrb r2,[r0,#0xa]
080D897A: fe21         mov r1,#0xfe
080D897C: 1140         and r1,r2
080D897E: 8172         strb r1,[r0,#0xa]
080D8980: 044a         ldr r2,[0x080d8994]
080D8982: 417a         ldrb r1,[r0,#0x9]
080D8984: 8900         lsl r1,r1,#0x2
080D8986: 8918         add r1,r1,r2
080D8988: 0422         mov r2,#0x4
080D898A: c260         str r2,[r0,#0xc]
080D898C: 0968         ldr r1,[r1,#0x0]
080D898E: 0969         ldr r1,[r1,#0x10]
080D8990: 4161         str r1,[r0,#0x14]
080D8992: 7047         bx lr
