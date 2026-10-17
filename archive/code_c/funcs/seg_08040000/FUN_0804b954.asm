; undefined FUN_0804b954(void)
; entry 0x804b954  size 42 bytes

0804B954: 00b5         push {lr}
0804B956: 021c         add r2,r0,#0x0
0804B958: 5069         ldr r0,[r2,#0x14]
0804B95A: 0121         mov r1,#0x1
0804B95C: 0840         and r0,r1
0804B95E: 0028         cmp r0,#0x0
0804B960: 0bd0         beq 0x0804b97a
0804B962: d068         ldr r0,[r2,#0xc]
0804B964: c06a         ldr r0,[r0,#0x2c]
0804B966: d26a         ldr r2,[r2,#0x2c]
0804B968: 0023         mov r3,#0x0
0804B96A: 416d         ldr r1,[r0,#0x54]
0804B96C: 506d         ldr r0,[r2,#0x54]
0804B96E: 8142         cmp r1,r0
0804B970: 00dd         ble 0x0804b974
0804B972: 0123         mov r3,#0x1
0804B974: 101c         add r0,r2,#0x0
0804B976: bc30         add r0,#0xbc
0804B978: 0370         strb r3,[r0,#0x0]
0804B97A: 01bc         pop {r0}
0804B97C: 0047         bx r0
