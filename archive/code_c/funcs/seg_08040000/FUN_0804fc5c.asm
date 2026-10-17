; undefined FUN_0804fc5c(void)
; entry 0x804fc5c  size 42 bytes

0804FC5C: 00b5         push {lr}
0804FC5E: 021c         add r2,r0,#0x0
0804FC60: 5069         ldr r0,[r2,#0x14]
0804FC62: 0121         mov r1,#0x1
0804FC64: 0840         and r0,r1
0804FC66: 0028         cmp r0,#0x0
0804FC68: 0bd0         beq 0x0804fc82
0804FC6A: d068         ldr r0,[r2,#0xc]
0804FC6C: c06a         ldr r0,[r0,#0x2c]
0804FC6E: d26a         ldr r2,[r2,#0x2c]
0804FC70: 0023         mov r3,#0x0
0804FC72: 416d         ldr r1,[r0,#0x54]
0804FC74: 506d         ldr r0,[r2,#0x54]
0804FC76: 8142         cmp r1,r0
0804FC78: 00dd         ble 0x0804fc7c
0804FC7A: 0123         mov r3,#0x1
0804FC7C: 101c         add r0,r2,#0x0
0804FC7E: bc30         add r0,#0xbc
0804FC80: 0370         strb r3,[r0,#0x0]
0804FC82: 01bc         pop {r0}
0804FC84: 0047         bx r0
