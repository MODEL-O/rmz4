; undefined FUN_080d7a30(void)
; entry 0x80d7a30  size 62 bytes

080D7A30: 10b5         push {r4,lr}
080D7A32: 041c         add r4,r0,#0x0
080D7A34: 0e49         ldr r1,[0x080d7a70]
080D7A36: 607a         ldrb r0,[r4,#0x9]
080D7A38: 8000         lsl r0,r0,#0x2
080D7A3A: 4018         add r0,r0,r1
080D7A3C: 0121         mov r1,#0x1
080D7A3E: e160         str r1,[r4,#0xc]
080D7A40: 0068         ldr r0,[r0,#0x0]
080D7A42: 4068         ldr r0,[r0,#0x4]
080D7A44: 6061         str r0,[r4,#0x14]
080D7A46: 0b49         ldr r1,[0x080d7a74]
080D7A48: 207c         ldrb r0,[r4,#0x10]
080D7A4A: 4018         add r0,r0,r1
080D7A4C: 0078         ldrb r0,[r0,#0x0]
080D7A4E: 6073         strb r0,[r4,#0xd]
080D7A50: a07a         ldrb r0,[r4,#0xa]
080D7A52: 0221         mov r1,#0x2
080D7A54: 0843         orr r0,r1
080D7A56: 0121         mov r1,#0x1
080D7A58: 0843         orr r0,r1
080D7A5A: a072         strb r0,[r4,#0xa]
080D7A5C: 201c         add r0,r4,#0x0
080D7A5E: 45f71df9     bl 0x0801cc9c
080D7A62: 201c         add r0,r4,#0x0
080D7A64: 00f008f8     bl 0x080d7a78
080D7A68: 10bc         pop {r4}
080D7A6A: 01bc         pop {r0}
080D7A6C: 0047         bx r0
