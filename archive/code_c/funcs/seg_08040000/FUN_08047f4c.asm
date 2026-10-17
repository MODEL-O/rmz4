; undefined FUN_08047f4c(void)
; entry 0x8047f4c  size 42 bytes

08047F4C: 00b5         push {lr}
08047F4E: 021c         add r2,r0,#0x0
08047F50: 5069         ldr r0,[r2,#0x14]
08047F52: 0121         mov r1,#0x1
08047F54: 0840         and r0,r1
08047F56: 0028         cmp r0,#0x0
08047F58: 0bd0         beq 0x08047f72
08047F5A: d068         ldr r0,[r2,#0xc]
08047F5C: c06a         ldr r0,[r0,#0x2c]
08047F5E: d26a         ldr r2,[r2,#0x2c]
08047F60: 0023         mov r3,#0x0
08047F62: 416d         ldr r1,[r0,#0x54]
08047F64: 506d         ldr r0,[r2,#0x54]
08047F66: 8142         cmp r1,r0
08047F68: 00dd         ble 0x08047f6c
08047F6A: 0123         mov r3,#0x1
08047F6C: 101c         add r0,r2,#0x0
08047F6E: bc30         add r0,#0xbc
08047F70: 0370         strb r3,[r0,#0x0]
08047F72: 01bc         pop {r0}
08047F74: 0047         bx r0
