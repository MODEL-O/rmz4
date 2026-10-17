; undefined FUN_0804b3cc(void)
; entry 0x804b3cc  size 42 bytes

0804B3CC: 00b5         push {lr}
0804B3CE: 021c         add r2,r0,#0x0
0804B3D0: 5069         ldr r0,[r2,#0x14]
0804B3D2: 0121         mov r1,#0x1
0804B3D4: 0840         and r0,r1
0804B3D6: 0028         cmp r0,#0x0
0804B3D8: 0bd0         beq 0x0804b3f2
0804B3DA: d068         ldr r0,[r2,#0xc]
0804B3DC: c06a         ldr r0,[r0,#0x2c]
0804B3DE: d26a         ldr r2,[r2,#0x2c]
0804B3E0: 0023         mov r3,#0x0
0804B3E2: 416d         ldr r1,[r0,#0x54]
0804B3E4: 506d         ldr r0,[r2,#0x54]
0804B3E6: 8142         cmp r1,r0
0804B3E8: 00dd         ble 0x0804b3ec
0804B3EA: 0123         mov r3,#0x1
0804B3EC: 101c         add r0,r2,#0x0
0804B3EE: bc30         add r0,#0xbc
0804B3F0: 0370         strb r3,[r0,#0x0]
0804B3F2: 01bc         pop {r0}
0804B3F4: 0047         bx r0
