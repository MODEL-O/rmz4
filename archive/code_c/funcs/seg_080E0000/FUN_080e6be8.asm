; undefined FUN_080e6be8(void)
; entry 0x80e6be8  size 66 bytes

080E6BE8: 10b5         push {r4,lr}
080E6BEA: 041c         add r4,r0,#0x0
080E6BEC: 36f756f8     bl 0x0801cc9c
080E6BF0: a17a         ldrb r1,[r4,#0xa]
080E6BF2: 0120         mov r0,#0x1
080E6BF4: 0843         orr r0,r1
080E6BF6: 0221         mov r1,#0x2
080E6BF8: 0843         orr r0,r1
080E6BFA: a072         strb r0,[r4,#0xa]
080E6BFC: 0b49         ldr r1,[0x080e6c2c]
080E6BFE: 607a         ldrb r0,[r4,#0x9]
080E6C00: 8000         lsl r0,r0,#0x2
080E6C02: 4018         add r0,r0,r1
080E6C04: 0121         mov r1,#0x1
080E6C06: e160         str r1,[r4,#0xc]
080E6C08: 0068         ldr r0,[r0,#0x0]
080E6C0A: 4068         ldr r0,[r0,#0x4]
080E6C0C: 6061         str r0,[r4,#0x14]
080E6C0E: 0849         ldr r1,[0x080e6c30]
080E6C10: 207c         ldrb r0,[r4,#0x10]
080E6C12: 8000         lsl r0,r0,#0x2
080E6C14: 4018         add r0,r0,r1
080E6C16: 0168         ldr r1,[r0,#0x0]
080E6C18: 201c         add r0,r4,#0x0
080E6C1A: 42f0b1f9     bl 0x08128f80
080E6C1E: 201c         add r0,r4,#0x0
080E6C20: 00f008f8     bl 0x080e6c34
080E6C24: 10bc         pop {r4}
080E6C26: 01bc         pop {r0}
080E6C28: 0047         bx r0
