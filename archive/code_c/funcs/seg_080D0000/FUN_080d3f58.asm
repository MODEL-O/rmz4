; undefined FUN_080d3f58(void)
; entry 0x80d3f58  size 66 bytes

080D3F58: 10b5         push {r4,lr}
080D3F5A: 041c         add r4,r0,#0x0
080D3F5C: 3430         add r0,#0x34
080D3F5E: 0f49         ldr r1,[0x080d3f9c]
080D3F60: 2ef798fe     bl 0x08002c94
080D3F64: e463         str r4,[r4,#0x3c]
080D3F66: a17a         ldrb r1,[r4,#0xa]
080D3F68: f720         mov r0,#0xf7
080D3F6A: 0840         and r0,r1
080D3F6C: 0022         mov r2,#0x0
080D3F6E: 0121         mov r1,#0x1
080D3F70: 0843         orr r0,r1
080D3F72: 0221         mov r1,#0x2
080D3F74: 0843         orr r0,r1
080D3F76: a072         strb r0,[r4,#0xa]
080D3F78: a274         strb r2,[r4,#0x12]
080D3F7A: 2266         str r2,[r4,#0x60]
080D3F7C: 0849         ldr r1,[0x080d3fa0]
080D3F7E: 607a         ldrb r0,[r4,#0x9]
080D3F80: 8000         lsl r0,r0,#0x2
080D3F82: 4018         add r0,r0,r1
080D3F84: 0121         mov r1,#0x1
080D3F86: e160         str r1,[r4,#0xc]
080D3F88: 0068         ldr r0,[r0,#0x0]
080D3F8A: 4068         ldr r0,[r0,#0x4]
080D3F8C: 6061         str r0,[r4,#0x14]
080D3F8E: 201c         add r0,r4,#0x0
080D3F90: fff7c6ff     bl 0x080d3f20
080D3F94: 10bc         pop {r4}
080D3F96: 01bc         pop {r0}
080D3F98: 0047         bx r0
