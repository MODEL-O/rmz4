; undefined FUN_08103e54(void)
; entry 0x8103e54  size 66 bytes

08103E54: 10b5         push {r4,lr}
08103E56: 041c         add r4,r0,#0x0
08103E58: 0f49         ldr r1,[0x08103e98]
08103E5A: 607b         ldrb r0,[r4,#0xd]
08103E5C: 8000         lsl r0,r0,#0x2
08103E5E: 4018         add r0,r0,r1
08103E60: 0168         ldr r1,[r0,#0x0]
08103E62: 201c         add r0,r4,#0x0
08103E64: 25f08cf8     bl 0x08128f80
08103E68: 0c49         ldr r1,[0x08103e9c]
08103E6A: 606d         ldr r0,[r4,#0x54]
08103E6C: f022         mov r2,#0xf0
08103E6E: d201         lsl r2,r2,#0x7
08103E70: 8018         add r0,r0,r2
08103E72: 896b         ldr r1,[r1,#0x38]
08103E74: 091a         sub r1,r1,r0
08103E76: 8020         mov r0,#0x80
08103E78: 8001         lsl r0,r0,#0x6
08103E7A: 8142         cmp r1,r0
08103E7C: 08dd         ble 0x08103e90
08103E7E: 0849         ldr r1,[0x08103ea0]
08103E80: 607a         ldrb r0,[r4,#0x9]
08103E82: 8000         lsl r0,r0,#0x2
08103E84: 4018         add r0,r0,r1
08103E86: 0221         mov r1,#0x2
08103E88: e160         str r1,[r4,#0xc]
08103E8A: 0068         ldr r0,[r0,#0x0]
08103E8C: 8068         ldr r0,[r0,#0x8]
08103E8E: 6061         str r0,[r4,#0x14]
08103E90: 10bc         pop {r4}
08103E92: 01bc         pop {r0}
08103E94: 0047         bx r0
