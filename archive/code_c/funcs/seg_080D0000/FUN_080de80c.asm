; undefined FUN_080de80c(void)
; entry 0x80de80c  size 28 bytes

080DE80C: 827a         ldrb r2,[r0,#0xa]
080DE80E: fe21         mov r1,#0xfe
080DE810: 1140         and r1,r2
080DE812: 8172         strb r1,[r0,#0xa]
080DE814: 044a         ldr r2,[0x080de828]
080DE816: 417a         ldrb r1,[r0,#0x9]
080DE818: 8900         lsl r1,r1,#0x2
080DE81A: 8918         add r1,r1,r2
080DE81C: 0422         mov r2,#0x4
080DE81E: c260         str r2,[r0,#0xc]
080DE820: 0968         ldr r1,[r1,#0x0]
080DE822: 0969         ldr r1,[r1,#0x10]
080DE824: 4161         str r1,[r0,#0x14]
080DE826: 7047         bx lr
