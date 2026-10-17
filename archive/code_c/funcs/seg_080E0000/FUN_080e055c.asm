; undefined FUN_080e055c(void)
; entry 0x80e055c  size 28 bytes

080E055C: 827a         ldrb r2,[r0,#0xa]
080E055E: fe21         mov r1,#0xfe
080E0560: 1140         and r1,r2
080E0562: 8172         strb r1,[r0,#0xa]
080E0564: 044a         ldr r2,[0x080e0578]
080E0566: 417a         ldrb r1,[r0,#0x9]
080E0568: 8900         lsl r1,r1,#0x2
080E056A: 8918         add r1,r1,r2
080E056C: 0422         mov r2,#0x4
080E056E: c260         str r2,[r0,#0xc]
080E0570: 0968         ldr r1,[r1,#0x0]
080E0572: 0969         ldr r1,[r1,#0x10]
080E0574: 4161         str r1,[r0,#0x14]
080E0576: 7047         bx lr
