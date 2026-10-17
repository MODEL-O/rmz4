; undefined FUN_08046b24(void)
; entry 0x8046b24  size 42 bytes

08046B24: 00b5         push {lr}
08046B26: 021c         add r2,r0,#0x0
08046B28: 5069         ldr r0,[r2,#0x14]
08046B2A: 0121         mov r1,#0x1
08046B2C: 0840         and r0,r1
08046B2E: 0028         cmp r0,#0x0
08046B30: 0bd0         beq 0x08046b4a
08046B32: d068         ldr r0,[r2,#0xc]
08046B34: c06a         ldr r0,[r0,#0x2c]
08046B36: d26a         ldr r2,[r2,#0x2c]
08046B38: 0023         mov r3,#0x0
08046B3A: 416d         ldr r1,[r0,#0x54]
08046B3C: 506d         ldr r0,[r2,#0x54]
08046B3E: 8142         cmp r1,r0
08046B40: 00dd         ble 0x08046b44
08046B42: 0123         mov r3,#0x1
08046B44: 101c         add r0,r2,#0x0
08046B46: bc30         add r0,#0xbc
08046B48: 0370         strb r3,[r0,#0x0]
08046B4A: 01bc         pop {r0}
08046B4C: 0047         bx r0
