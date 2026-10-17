; undefined FUN_080f0064(void)
; entry 0x80f0064  size 28 bytes

080F0064: 00b5         push {lr}
080F0066: 064a         ldr r2,[0x080f0080]
080F0068: 417a         ldrb r1,[r0,#0x9]
080F006A: 8900         lsl r1,r1,#0x2
080F006C: 8918         add r1,r1,r2
080F006E: 0122         mov r2,#0x1
080F0070: c260         str r2,[r0,#0xc]
080F0072: 0968         ldr r1,[r1,#0x0]
080F0074: 4968         ldr r1,[r1,#0x4]
080F0076: 4161         str r1,[r0,#0x14]
080F0078: fdf7a6fb     bl 0x080ed7c8
080F007C: 01bc         pop {r0}
080F007E: 0047         bx r0
