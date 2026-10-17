; undefined FUN_080b7df4(void)
; entry 0x80b7df4  size 70 bytes

080B7DF4: 00b5         push {lr}
080B7DF6: 021c         add r2,r0,#0x0
080B7DF8: 936a         ldr r3,[r2,#0x28]
080B7DFA: 187b         ldrb r0,[r3,#0xc]
080B7DFC: 0128         cmp r0,#0x1
080B7DFE: 15d9         bls 0x080b7e2c
080B7E00: d17a         ldrb r1,[r2,#0xb]
080B7E02: 1020         mov r0,#0x10
080B7E04: 0843         orr r0,r1
080B7E06: d072         strb r0,[r2,#0xb]
080B7E08: 187f         ldrb r0,[r3,#0x1c]
080B7E0A: 5077         strb r0,[r2,#0x1d]
080B7E0C: 0649         ldr r1,[0x080b7e28]
080B7E0E: 507a         ldrb r0,[r2,#0x9]
080B7E10: 8000         lsl r0,r0,#0x2
080B7E12: 4018         add r0,r0,r1
080B7E14: 0221         mov r1,#0x2
080B7E16: d160         str r1,[r2,#0xc]
080B7E18: 0068         ldr r0,[r0,#0x0]
080B7E1A: 8068         ldr r0,[r0,#0x8]
080B7E1C: 5061         str r0,[r2,#0x14]
080B7E1E: 101c         add r0,r2,#0x0
080B7E20: 00f010f8     bl 0x080b7e44
080B7E24: 0ae0         b 0x080b7e3c
080B7E2C: 0448         ldr r0,[0x080b7e40]
080B7E2E: 517b         ldrb r1,[r2,#0xd]
080B7E30: 8900         lsl r1,r1,#0x2
080B7E32: 0918         add r1,r1,r0
080B7E34: 0968         ldr r1,[r1,#0x0]
080B7E36: 101c         add r0,r2,#0x0
080B7E38: 71f0a2f8     bl 0x08128f80
080B7E3C: 01bc         pop {r0}
080B7E3E: 0047         bx r0
