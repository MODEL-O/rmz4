; undefined FUN_080d0f7c(void)
; entry 0x80d0f7c  size 36 bytes

080D0F7C: 00b5         push {lr}
080D0F7E: 827a         ldrb r2,[r0,#0xa]
080D0F80: 0121         mov r1,#0x1
080D0F82: 1143         orr r1,r2
080D0F84: 8172         strb r1,[r0,#0xa]
080D0F86: 064a         ldr r2,[0x080d0fa0]
080D0F88: 417a         ldrb r1,[r0,#0x9]
080D0F8A: 8900         lsl r1,r1,#0x2
080D0F8C: 8918         add r1,r1,r2
080D0F8E: 0122         mov r2,#0x1
080D0F90: c260         str r2,[r0,#0xc]
080D0F92: 0968         ldr r1,[r1,#0x0]
080D0F94: 4968         ldr r1,[r1,#0x4]
080D0F96: 4161         str r1,[r0,#0x14]
080D0F98: 00f004f8     bl 0x080d0fa4
080D0F9C: 01bc         pop {r0}
080D0F9E: 0047         bx r0
