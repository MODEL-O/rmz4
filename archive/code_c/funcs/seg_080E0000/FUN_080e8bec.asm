; undefined FUN_080e8bec(void)
; entry 0x80e8bec  size 48 bytes

080E8BEC: 00b5         push {lr}
080E8BEE: 021c         add r2,r0,#0x0
080E8BF0: 7330         add r0,#0x73
080E8BF2: 0078         ldrb r0,[r0,#0x0]
080E8BF4: 0328         cmp r0,#0x3
080E8BF6: 0fd1         bne 0x080e8c18
080E8BF8: 0649         ldr r1,[0x080e8c14]
080E8BFA: 507a         ldrb r0,[r2,#0x9]
080E8BFC: 8000         lsl r0,r0,#0x2
080E8BFE: 4018         add r0,r0,r1
080E8C00: 0221         mov r1,#0x2
080E8C02: d160         str r1,[r2,#0xc]
080E8C04: 0068         ldr r0,[r0,#0x0]
080E8C06: 8068         ldr r0,[r0,#0x8]
080E8C08: 5061         str r0,[r2,#0x14]
080E8C0A: 101c         add r0,r2,#0x0
080E8C0C: 00f00af8     bl 0x080e8c24
080E8C10: 05e0         b 0x080e8c1e
080E8C18: 101c         add r0,r2,#0x0
080E8C1A: 34f7e9f9     bl 0x0801cff0
080E8C1E: 01bc         pop {r0}
080E8C20: 0047         bx r0
