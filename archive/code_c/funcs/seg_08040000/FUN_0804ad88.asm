; undefined FUN_0804ad88(void)
; entry 0x804ad88  size 42 bytes

0804AD88: 00b5         push {lr}
0804AD8A: 021c         add r2,r0,#0x0
0804AD8C: 5069         ldr r0,[r2,#0x14]
0804AD8E: 0121         mov r1,#0x1
0804AD90: 0840         and r0,r1
0804AD92: 0028         cmp r0,#0x0
0804AD94: 0bd0         beq 0x0804adae
0804AD96: d068         ldr r0,[r2,#0xc]
0804AD98: c06a         ldr r0,[r0,#0x2c]
0804AD9A: d26a         ldr r2,[r2,#0x2c]
0804AD9C: 0023         mov r3,#0x0
0804AD9E: 416d         ldr r1,[r0,#0x54]
0804ADA0: 506d         ldr r0,[r2,#0x54]
0804ADA2: 8142         cmp r1,r0
0804ADA4: 00dd         ble 0x0804ada8
0804ADA6: 0123         mov r3,#0x1
0804ADA8: 101c         add r0,r2,#0x0
0804ADAA: bc30         add r0,#0xbc
0804ADAC: 0370         strb r3,[r0,#0x0]
0804ADAE: 01bc         pop {r0}
0804ADB0: 0047         bx r0
