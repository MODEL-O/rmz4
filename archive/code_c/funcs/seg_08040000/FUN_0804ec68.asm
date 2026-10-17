; undefined FUN_0804ec68(void)
; entry 0x804ec68  size 42 bytes

0804EC68: 00b5         push {lr}
0804EC6A: 021c         add r2,r0,#0x0
0804EC6C: 5069         ldr r0,[r2,#0x14]
0804EC6E: 0121         mov r1,#0x1
0804EC70: 0840         and r0,r1
0804EC72: 0028         cmp r0,#0x0
0804EC74: 0bd0         beq 0x0804ec8e
0804EC76: d068         ldr r0,[r2,#0xc]
0804EC78: c06a         ldr r0,[r0,#0x2c]
0804EC7A: d26a         ldr r2,[r2,#0x2c]
0804EC7C: 0023         mov r3,#0x0
0804EC7E: 416d         ldr r1,[r0,#0x54]
0804EC80: 506d         ldr r0,[r2,#0x54]
0804EC82: 8142         cmp r1,r0
0804EC84: 00dd         ble 0x0804ec88
0804EC86: 0123         mov r3,#0x1
0804EC88: 101c         add r0,r2,#0x0
0804EC8A: bc30         add r0,#0xbc
0804EC8C: 0370         strb r3,[r0,#0x0]
0804EC8E: 01bc         pop {r0}
0804EC90: 0047         bx r0
