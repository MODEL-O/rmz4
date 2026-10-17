; undefined FUN_0804e4d8(void)
; entry 0x804e4d8  size 42 bytes

0804E4D8: 00b5         push {lr}
0804E4DA: 021c         add r2,r0,#0x0
0804E4DC: 5069         ldr r0,[r2,#0x14]
0804E4DE: 0121         mov r1,#0x1
0804E4E0: 0840         and r0,r1
0804E4E2: 0028         cmp r0,#0x0
0804E4E4: 0bd0         beq 0x0804e4fe
0804E4E6: d068         ldr r0,[r2,#0xc]
0804E4E8: c06a         ldr r0,[r0,#0x2c]
0804E4EA: d26a         ldr r2,[r2,#0x2c]
0804E4EC: 0023         mov r3,#0x0
0804E4EE: 416d         ldr r1,[r0,#0x54]
0804E4F0: 506d         ldr r0,[r2,#0x54]
0804E4F2: 8142         cmp r1,r0
0804E4F4: 00dd         ble 0x0804e4f8
0804E4F6: 0123         mov r3,#0x1
0804E4F8: 101c         add r0,r2,#0x0
0804E4FA: bc30         add r0,#0xbc
0804E4FC: 0370         strb r3,[r0,#0x0]
0804E4FE: 01bc         pop {r0}
0804E500: 0047         bx r0
