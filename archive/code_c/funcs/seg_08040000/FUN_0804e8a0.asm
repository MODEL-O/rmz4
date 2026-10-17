; undefined FUN_0804e8a0(void)
; entry 0x804e8a0  size 42 bytes

0804E8A0: 00b5         push {lr}
0804E8A2: 021c         add r2,r0,#0x0
0804E8A4: 5069         ldr r0,[r2,#0x14]
0804E8A6: 0121         mov r1,#0x1
0804E8A8: 0840         and r0,r1
0804E8AA: 0028         cmp r0,#0x0
0804E8AC: 0bd0         beq 0x0804e8c6
0804E8AE: d068         ldr r0,[r2,#0xc]
0804E8B0: c06a         ldr r0,[r0,#0x2c]
0804E8B2: d26a         ldr r2,[r2,#0x2c]
0804E8B4: 0023         mov r3,#0x0
0804E8B6: 416d         ldr r1,[r0,#0x54]
0804E8B8: 506d         ldr r0,[r2,#0x54]
0804E8BA: 8142         cmp r1,r0
0804E8BC: 00dd         ble 0x0804e8c0
0804E8BE: 0123         mov r3,#0x1
0804E8C0: 101c         add r0,r2,#0x0
0804E8C2: bc30         add r0,#0xbc
0804E8C4: 0370         strb r3,[r0,#0x0]
0804E8C6: 01bc         pop {r0}
0804E8C8: 0047         bx r0
