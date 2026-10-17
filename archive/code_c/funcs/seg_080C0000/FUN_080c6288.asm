; undefined FUN_080c6288(void)
; entry 0x80c6288  size 20 bytes

080C6288: 044a         ldr r2,[0x080c629c]
080C628A: 417a         ldrb r1,[r0,#0x9]
080C628C: 8900         lsl r1,r1,#0x2
080C628E: 8918         add r1,r1,r2
080C6290: 0422         mov r2,#0x4
080C6292: c260         str r2,[r0,#0xc]
080C6294: 0968         ldr r1,[r1,#0x0]
080C6296: 0969         ldr r1,[r1,#0x10]
080C6298: 4161         str r1,[r0,#0x14]
080C629A: 7047         bx lr
