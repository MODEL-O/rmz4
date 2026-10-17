; undefined FUN_080a2e5c(void)
; entry 0x80a2e5c  size 64 bytes

080A2E5C: 00b5         push {lr}
080A2E5E: 021c         add r2,r0,#0x0
080A2E60: 8c30         add r0,#0x8c
080A2E62: 0068         ldr r0,[r0,#0x0]
080A2E64: 8121         mov r1,#0x81
080A2E66: 8900         lsl r1,r1,#0x2
080A2E68: 0840         and r0,r1
080A2E6A: 0028         cmp r0,#0x0
080A2E6C: 0ed0         beq 0x080a2e8c
080A2E6E: 0649         ldr r1,[0x080a2e88]
080A2E70: 507a         ldrb r0,[r2,#0x9]
080A2E72: 8000         lsl r0,r0,#0x2
080A2E74: 4018         add r0,r0,r1
080A2E76: 0221         mov r1,#0x2
080A2E78: d160         str r1,[r2,#0xc]
080A2E7A: 0068         ldr r0,[r0,#0x0]
080A2E7C: 8068         ldr r0,[r0,#0x8]
080A2E7E: 5061         str r0,[r2,#0x14]
080A2E80: 101c         add r0,r2,#0x0
080A2E82: 00f023f9     bl 0x080a30cc
080A2E86: 09e0         b 0x080a2e9c
080A2E8C: 0448         ldr r0,[0x080a2ea0]
080A2E8E: 517b         ldrb r1,[r2,#0xd]
080A2E90: 8900         lsl r1,r1,#0x2
080A2E92: 0918         add r1,r1,r0
080A2E94: 0968         ldr r1,[r1,#0x0]
080A2E96: 101c         add r0,r2,#0x0
080A2E98: 86f072f8     bl 0x08128f80
080A2E9C: 01bc         pop {r0}
080A2E9E: 0047         bx r0
