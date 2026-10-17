; undefined FUN_080a3a5c(void)
; entry 0x80a3a5c  size 42 bytes

080A3A5C: 00b5         push {lr}
080A3A5E: 021c         add r2,r0,#0x0
080A3A60: 5069         ldr r0,[r2,#0x14]
080A3A62: 0121         mov r1,#0x1
080A3A64: 0840         and r0,r1
080A3A66: 0028         cmp r0,#0x0
080A3A68: 0bd0         beq 0x080a3a82
080A3A6A: d068         ldr r0,[r2,#0xc]
080A3A6C: c06a         ldr r0,[r0,#0x2c]
080A3A6E: d26a         ldr r2,[r2,#0x2c]
080A3A70: 0023         mov r3,#0x0
080A3A72: 416d         ldr r1,[r0,#0x54]
080A3A74: 506d         ldr r0,[r2,#0x54]
080A3A76: 8142         cmp r1,r0
080A3A78: 00dd         ble 0x080a3a7c
080A3A7A: 0123         mov r3,#0x1
080A3A7C: 101c         add r0,r2,#0x0
080A3A7E: bc30         add r0,#0xbc
080A3A80: 0370         strb r3,[r0,#0x0]
080A3A82: 01bc         pop {r0}
080A3A84: 0047         bx r0
