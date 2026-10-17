; undefined FUN_0804ff5c(void)
; entry 0x804ff5c  size 42 bytes

0804FF5C: 00b5         push {lr}
0804FF5E: 021c         add r2,r0,#0x0
0804FF60: 5069         ldr r0,[r2,#0x14]
0804FF62: 0121         mov r1,#0x1
0804FF64: 0840         and r0,r1
0804FF66: 0028         cmp r0,#0x0
0804FF68: 0bd0         beq 0x0804ff82
0804FF6A: d068         ldr r0,[r2,#0xc]
0804FF6C: c06a         ldr r0,[r0,#0x2c]
0804FF6E: d26a         ldr r2,[r2,#0x2c]
0804FF70: 0023         mov r3,#0x0
0804FF72: 416d         ldr r1,[r0,#0x54]
0804FF74: 506d         ldr r0,[r2,#0x54]
0804FF76: 8142         cmp r1,r0
0804FF78: 00dd         ble 0x0804ff7c
0804FF7A: 0123         mov r3,#0x1
0804FF7C: 101c         add r0,r2,#0x0
0804FF7E: bc30         add r0,#0xbc
0804FF80: 0370         strb r3,[r0,#0x0]
0804FF82: 01bc         pop {r0}
0804FF84: 0047         bx r0
