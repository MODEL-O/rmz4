; undefined FUN_08047c80(void)
; entry 0x8047c80  size 42 bytes

08047C80: 00b5         push {lr}
08047C82: 021c         add r2,r0,#0x0
08047C84: 5069         ldr r0,[r2,#0x14]
08047C86: 0121         mov r1,#0x1
08047C88: 0840         and r0,r1
08047C8A: 0028         cmp r0,#0x0
08047C8C: 0bd0         beq 0x08047ca6
08047C8E: d068         ldr r0,[r2,#0xc]
08047C90: c06a         ldr r0,[r0,#0x2c]
08047C92: d26a         ldr r2,[r2,#0x2c]
08047C94: 0023         mov r3,#0x0
08047C96: 416d         ldr r1,[r0,#0x54]
08047C98: 506d         ldr r0,[r2,#0x54]
08047C9A: 8142         cmp r1,r0
08047C9C: 00dd         ble 0x08047ca0
08047C9E: 0123         mov r3,#0x1
08047CA0: 101c         add r0,r2,#0x0
08047CA2: bc30         add r0,#0xbc
08047CA4: 0370         strb r3,[r0,#0x0]
08047CA6: 01bc         pop {r0}
08047CA8: 0047         bx r0
