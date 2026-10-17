; undefined FUN_08043b68(void)
; entry 0x8043b68  size 42 bytes

08043B68: 00b5         push {lr}
08043B6A: 021c         add r2,r0,#0x0
08043B6C: 5069         ldr r0,[r2,#0x14]
08043B6E: 0121         mov r1,#0x1
08043B70: 0840         and r0,r1
08043B72: 0028         cmp r0,#0x0
08043B74: 0bd0         beq 0x08043b8e
08043B76: d068         ldr r0,[r2,#0xc]
08043B78: c06a         ldr r0,[r0,#0x2c]
08043B7A: d26a         ldr r2,[r2,#0x2c]
08043B7C: 0023         mov r3,#0x0
08043B7E: 416d         ldr r1,[r0,#0x54]
08043B80: 506d         ldr r0,[r2,#0x54]
08043B82: 8142         cmp r1,r0
08043B84: 00dd         ble 0x08043b88
08043B86: 0123         mov r3,#0x1
08043B88: 101c         add r0,r2,#0x0
08043B8A: bc30         add r0,#0xbc
08043B8C: 0370         strb r3,[r0,#0x0]
08043B8E: 01bc         pop {r0}
08043B90: 0047         bx r0
