; undefined FUN_08126f60(void)
; entry 0x8126f60  size 32 bytes

08126F60: 00b5         push {lr}
08126F62: 0a6c         ldr r2,[r1,#0x40]
08126F64: d078         ldrb r0,[r2,#0x3]
08126F66: 0002         lsl r0,r0,#0x8
08126F68: 9378         ldrb r3,[r2,#0x2]
08126F6A: 1843         orr r0,r3
08126F6C: 0002         lsl r0,r0,#0x8
08126F6E: 5378         ldrb r3,[r2,#0x1]
08126F70: 1843         orr r0,r3
08126F72: 0002         lsl r0,r0,#0x8
08126F74: fff7e0ff     bl 0x08126f38
08126F78: 1843         orr r0,r3
08126F7A: 0864         str r0,[r1,#0x40]
08126F7C: 01bc         pop {r0}
08126F7E: 0047         bx r0
