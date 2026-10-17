; undefined FUN_080c3f64(void)
; entry 0x80c3f64  size 60 bytes

080C3F64: 10b5         push {r4,lr}
080C3F66: 041c         add r4,r0,#0x0
080C3F68: 0d49         ldr r1,[0x080c3fa0]
080C3F6A: 607a         ldrb r0,[r4,#0x9]
080C3F6C: 8000         lsl r0,r0,#0x2
080C3F6E: 4018         add r0,r0,r1
080C3F70: 0121         mov r1,#0x1
080C3F72: e160         str r1,[r4,#0xc]
080C3F74: 0068         ldr r0,[r0,#0x0]
080C3F76: 4068         ldr r0,[r0,#0x4]
080C3F78: 6061         str r0,[r4,#0x14]
080C3F7A: a17a         ldrb r1,[r4,#0xa]
080C3F7C: 0120         mov r0,#0x1
080C3F7E: 0022         mov r2,#0x0
080C3F80: 0843         orr r0,r1
080C3F82: 0221         mov r1,#0x2
080C3F84: 0843         orr r0,r1
080C3F86: a072         strb r0,[r4,#0xa]
080C3F88: 201c         add r0,r4,#0x0
080C3F8A: b830         add r0,#0xb8
080C3F8C: 0260         str r2,[r0,#0x0]
080C3F8E: 201c         add r0,r4,#0x0
080C3F90: 58f784fe     bl 0x0801cc9c
080C3F94: 201c         add r0,r4,#0x0
080C3F96: 00f033f8     bl 0x080c4000
080C3F9A: 10bc         pop {r4}
080C3F9C: 01bc         pop {r0}
080C3F9E: 0047         bx r0
