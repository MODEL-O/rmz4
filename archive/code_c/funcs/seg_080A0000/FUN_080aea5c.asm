; undefined FUN_080aea5c(void)
; entry 0x80aea5c  size 42 bytes

080AEA5C: 00b5         push {lr}
080AEA5E: 021c         add r2,r0,#0x0
080AEA60: 5069         ldr r0,[r2,#0x14]
080AEA62: 0121         mov r1,#0x1
080AEA64: 0840         and r0,r1
080AEA66: 0028         cmp r0,#0x0
080AEA68: 0bd0         beq 0x080aea82
080AEA6A: d068         ldr r0,[r2,#0xc]
080AEA6C: c06a         ldr r0,[r0,#0x2c]
080AEA6E: d26a         ldr r2,[r2,#0x2c]
080AEA70: 0023         mov r3,#0x0
080AEA72: 416d         ldr r1,[r0,#0x54]
080AEA74: 506d         ldr r0,[r2,#0x54]
080AEA76: 8142         cmp r1,r0
080AEA78: 00dd         ble 0x080aea7c
080AEA7A: 0123         mov r3,#0x1
080AEA7C: 101c         add r0,r2,#0x0
080AEA7E: bc30         add r0,#0xbc
080AEA80: 0370         strb r3,[r0,#0x0]
080AEA82: 01bc         pop {r0}
080AEA84: 0047         bx r0
