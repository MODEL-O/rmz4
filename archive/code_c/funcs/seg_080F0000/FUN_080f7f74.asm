; undefined FUN_080f7f74(void)
; entry 0x80f7f74  size 50 bytes

080F7F74: 10b5         push {r4,lr}
080F7F76: 041c         add r4,r0,#0x0
080F7F78: 0b49         ldr r1,[0x080f7fa8]
080F7F7A: 207c         ldrb r0,[r4,#0x10]
080F7F7C: 8000         lsl r0,r0,#0x2
080F7F7E: 4018         add r0,r0,r1
080F7F80: 0168         ldr r1,[r0,#0x0]
080F7F82: 201c         add r0,r4,#0x0
080F7F84: 30f0fcff     bl 0x08128f80
080F7F88: 0849         ldr r1,[0x080f7fac]
080F7F8A: 607a         ldrb r0,[r4,#0x9]
080F7F8C: 8000         lsl r0,r0,#0x2
080F7F8E: 4018         add r0,r0,r1
080F7F90: 0121         mov r1,#0x1
080F7F92: e160         str r1,[r4,#0xc]
080F7F94: 0068         ldr r0,[r0,#0x0]
080F7F96: 4068         ldr r0,[r0,#0x4]
080F7F98: 6061         str r0,[r4,#0x14]
080F7F9A: 201c         add r0,r4,#0x0
080F7F9C: 00f008f8     bl 0x080f7fb0
080F7FA0: 10bc         pop {r4}
080F7FA2: 01bc         pop {r0}
080F7FA4: 0047         bx r0
