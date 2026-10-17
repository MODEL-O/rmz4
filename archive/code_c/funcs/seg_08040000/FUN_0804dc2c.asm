; undefined FUN_0804dc2c(void)
; entry 0x804dc2c  size 42 bytes

0804DC2C: 00b5         push {lr}
0804DC2E: 021c         add r2,r0,#0x0
0804DC30: 5069         ldr r0,[r2,#0x14]
0804DC32: 0121         mov r1,#0x1
0804DC34: 0840         and r0,r1
0804DC36: 0028         cmp r0,#0x0
0804DC38: 0bd0         beq 0x0804dc52
0804DC3A: d068         ldr r0,[r2,#0xc]
0804DC3C: c06a         ldr r0,[r0,#0x2c]
0804DC3E: d26a         ldr r2,[r2,#0x2c]
0804DC40: 0023         mov r3,#0x0
0804DC42: 416d         ldr r1,[r0,#0x54]
0804DC44: 506d         ldr r0,[r2,#0x54]
0804DC46: 8142         cmp r1,r0
0804DC48: 00dd         ble 0x0804dc4c
0804DC4A: 0123         mov r3,#0x1
0804DC4C: 101c         add r0,r2,#0x0
0804DC4E: bc30         add r0,#0xbc
0804DC50: 0370         strb r3,[r0,#0x0]
0804DC52: 01bc         pop {r0}
0804DC54: 0047         bx r0
