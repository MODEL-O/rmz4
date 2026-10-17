; undefined FUN_08046f64(void)
; entry 0x8046f64  size 42 bytes

08046F64: 00b5         push {lr}
08046F66: 021c         add r2,r0,#0x0
08046F68: 5069         ldr r0,[r2,#0x14]
08046F6A: 0121         mov r1,#0x1
08046F6C: 0840         and r0,r1
08046F6E: 0028         cmp r0,#0x0
08046F70: 0bd0         beq 0x08046f8a
08046F72: d068         ldr r0,[r2,#0xc]
08046F74: c06a         ldr r0,[r0,#0x2c]
08046F76: d26a         ldr r2,[r2,#0x2c]
08046F78: 0023         mov r3,#0x0
08046F7A: 416d         ldr r1,[r0,#0x54]
08046F7C: 506d         ldr r0,[r2,#0x54]
08046F7E: 8142         cmp r1,r0
08046F80: 00dd         ble 0x08046f84
08046F82: 0123         mov r3,#0x1
08046F84: 101c         add r0,r2,#0x0
08046F86: bc30         add r0,#0xbc
08046F88: 0370         strb r3,[r0,#0x0]
08046F8A: 01bc         pop {r0}
08046F8C: 0047         bx r0
