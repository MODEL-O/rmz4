; undefined FUN_080427d0(void)
; entry 0x80427d0  size 42 bytes

080427D0: 00b5         push {lr}
080427D2: 021c         add r2,r0,#0x0
080427D4: 5069         ldr r0,[r2,#0x14]
080427D6: 0121         mov r1,#0x1
080427D8: 0840         and r0,r1
080427DA: 0028         cmp r0,#0x0
080427DC: 0bd0         beq 0x080427f6
080427DE: d068         ldr r0,[r2,#0xc]
080427E0: c06a         ldr r0,[r0,#0x2c]
080427E2: d26a         ldr r2,[r2,#0x2c]
080427E4: 0023         mov r3,#0x0
080427E6: 416d         ldr r1,[r0,#0x54]
080427E8: 506d         ldr r0,[r2,#0x54]
080427EA: 8142         cmp r1,r0
080427EC: 00dd         ble 0x080427f0
080427EE: 0123         mov r3,#0x1
080427F0: 101c         add r0,r2,#0x0
080427F2: bc30         add r0,#0xbc
080427F4: 0370         strb r3,[r0,#0x0]
080427F6: 01bc         pop {r0}
080427F8: 0047         bx r0
