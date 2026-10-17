; undefined FUN_08041e10(void)
; entry 0x8041e10  size 42 bytes

08041E10: 00b5         push {lr}
08041E12: 021c         add r2,r0,#0x0
08041E14: 5069         ldr r0,[r2,#0x14]
08041E16: 0121         mov r1,#0x1
08041E18: 0840         and r0,r1
08041E1A: 0028         cmp r0,#0x0
08041E1C: 0bd0         beq 0x08041e36
08041E1E: d068         ldr r0,[r2,#0xc]
08041E20: c06a         ldr r0,[r0,#0x2c]
08041E22: d26a         ldr r2,[r2,#0x2c]
08041E24: 0023         mov r3,#0x0
08041E26: 416d         ldr r1,[r0,#0x54]
08041E28: 506d         ldr r0,[r2,#0x54]
08041E2A: 8142         cmp r1,r0
08041E2C: 00dd         ble 0x08041e30
08041E2E: 0123         mov r3,#0x1
08041E30: 101c         add r0,r2,#0x0
08041E32: bc30         add r0,#0xbc
08041E34: 0370         strb r3,[r0,#0x0]
08041E36: 01bc         pop {r0}
08041E38: 0047         bx r0
