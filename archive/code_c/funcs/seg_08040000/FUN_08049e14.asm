; undefined FUN_08049e14(void)
; entry 0x8049e14  size 42 bytes

08049E14: 00b5         push {lr}
08049E16: 021c         add r2,r0,#0x0
08049E18: 5069         ldr r0,[r2,#0x14]
08049E1A: 0121         mov r1,#0x1
08049E1C: 0840         and r0,r1
08049E1E: 0028         cmp r0,#0x0
08049E20: 0bd0         beq 0x08049e3a
08049E22: d068         ldr r0,[r2,#0xc]
08049E24: c06a         ldr r0,[r0,#0x2c]
08049E26: d26a         ldr r2,[r2,#0x2c]
08049E28: 0023         mov r3,#0x0
08049E2A: 416d         ldr r1,[r0,#0x54]
08049E2C: 506d         ldr r0,[r2,#0x54]
08049E2E: 8142         cmp r1,r0
08049E30: 00dd         ble 0x08049e34
08049E32: 0123         mov r3,#0x1
08049E34: 101c         add r0,r2,#0x0
08049E36: bc30         add r0,#0xbc
08049E38: 0370         strb r3,[r0,#0x0]
08049E3A: 01bc         pop {r0}
08049E3C: 0047         bx r0
