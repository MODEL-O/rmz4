; undefined FUN_08101e64(void)
; entry 0x8101e64  size 52 bytes

08101E64: 10b5         push {r4,lr}
08101E66: 041c         add r4,r0,#0x0
08101E68: 3430         add r0,#0x34
08101E6A: 0b49         ldr r1,[0x08101e98]
08101E6C: 00f712ff     bl 0x08002c94
08101E70: e463         str r4,[r4,#0x3c]
08101E72: a17a         ldrb r1,[r4,#0xa]
08101E74: f720         mov r0,#0xf7
08101E76: 0840         and r0,r1
08101E78: a072         strb r0,[r4,#0xa]
08101E7A: 0849         ldr r1,[0x08101e9c]
08101E7C: 607a         ldrb r0,[r4,#0x9]
08101E7E: 8000         lsl r0,r0,#0x2
08101E80: 4018         add r0,r0,r1
08101E82: 0121         mov r1,#0x1
08101E84: e160         str r1,[r4,#0xc]
08101E86: 0068         ldr r0,[r0,#0x0]
08101E88: 4068         ldr r0,[r0,#0x4]
08101E8A: 6061         str r0,[r4,#0x14]
08101E8C: 201c         add r0,r4,#0x0
08101E8E: fff79bff     bl 0x08101dc8
08101E92: 10bc         pop {r4}
08101E94: 01bc         pop {r0}
08101E96: 0047         bx r0
