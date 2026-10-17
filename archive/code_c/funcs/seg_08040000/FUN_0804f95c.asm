; undefined FUN_0804f95c(void)
; entry 0x804f95c  size 42 bytes

0804F95C: 00b5         push {lr}
0804F95E: 021c         add r2,r0,#0x0
0804F960: 5069         ldr r0,[r2,#0x14]
0804F962: 0121         mov r1,#0x1
0804F964: 0840         and r0,r1
0804F966: 0028         cmp r0,#0x0
0804F968: 0bd0         beq 0x0804f982
0804F96A: d068         ldr r0,[r2,#0xc]
0804F96C: c06a         ldr r0,[r0,#0x2c]
0804F96E: d26a         ldr r2,[r2,#0x2c]
0804F970: 0023         mov r3,#0x0
0804F972: 416d         ldr r1,[r0,#0x54]
0804F974: 506d         ldr r0,[r2,#0x54]
0804F976: 8142         cmp r1,r0
0804F978: 00dd         ble 0x0804f97c
0804F97A: 0123         mov r3,#0x1
0804F97C: 101c         add r0,r2,#0x0
0804F97E: bc30         add r0,#0xbc
0804F980: 0370         strb r3,[r0,#0x0]
0804F982: 01bc         pop {r0}
0804F984: 0047         bx r0
