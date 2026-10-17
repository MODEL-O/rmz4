; undefined FUN_080a0e14(void)
; entry 0x80a0e14  size 72 bytes

080A0E14: 00b5         push {lr}
080A0E16: 021c         add r2,r0,#0x0
080A0E18: 8c30         add r0,#0x8c
080A0E1A: 0068         ldr r0,[r0,#0x0]
080A0E1C: 8021         mov r1,#0x80
080A0E1E: 8900         lsl r1,r1,#0x2
080A0E20: 0840         and r0,r1
080A0E22: 0028         cmp r0,#0x0
080A0E24: 12d0         beq 0x080a0e4c
080A0E26: 0849         ldr r1,[0x080a0e48]
080A0E28: 507a         ldrb r0,[r2,#0x9]
080A0E2A: 8000         lsl r0,r0,#0x2
080A0E2C: 4018         add r0,r0,r1
080A0E2E: 0221         mov r1,#0x2
080A0E30: d160         str r1,[r2,#0xc]
080A0E32: 0068         ldr r0,[r0,#0x0]
080A0E34: 8068         ldr r0,[r0,#0x8]
080A0E36: 5061         str r0,[r2,#0x14]
080A0E38: 0020         mov r0,#0x0
080A0E3A: 5073         strb r0,[r2,#0xd]
080A0E3C: 9073         strb r0,[r2,#0xe]
080A0E3E: d073         strb r0,[r2,#0xf]
080A0E40: 101c         add r0,r2,#0x0
080A0E42: 00f067f8     bl 0x080a0f14
080A0E46: 09e0         b 0x080a0e5c
080A0E4C: 0448         ldr r0,[0x080a0e60]
080A0E4E: 517b         ldrb r1,[r2,#0xd]
080A0E50: 8900         lsl r1,r1,#0x2
080A0E52: 0918         add r1,r1,r0
080A0E54: 0968         ldr r1,[r1,#0x0]
080A0E56: 101c         add r0,r2,#0x0
080A0E58: 88f092f8     bl 0x08128f80
080A0E5C: 01bc         pop {r0}
080A0E5E: 0047         bx r0
