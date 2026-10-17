; undefined FUN_0804cc00(void)
; entry 0x804cc00  size 42 bytes

0804CC00: 00b5         push {lr}
0804CC02: 021c         add r2,r0,#0x0
0804CC04: 5069         ldr r0,[r2,#0x14]
0804CC06: 0121         mov r1,#0x1
0804CC08: 0840         and r0,r1
0804CC0A: 0028         cmp r0,#0x0
0804CC0C: 0bd0         beq 0x0804cc26
0804CC0E: d068         ldr r0,[r2,#0xc]
0804CC10: c06a         ldr r0,[r0,#0x2c]
0804CC12: d26a         ldr r2,[r2,#0x2c]
0804CC14: 0023         mov r3,#0x0
0804CC16: 416d         ldr r1,[r0,#0x54]
0804CC18: 506d         ldr r0,[r2,#0x54]
0804CC1A: 8142         cmp r1,r0
0804CC1C: 00dd         ble 0x0804cc20
0804CC1E: 0123         mov r3,#0x1
0804CC20: 101c         add r0,r2,#0x0
0804CC22: bc30         add r0,#0xbc
0804CC24: 0370         strb r3,[r0,#0x0]
0804CC26: 01bc         pop {r0}
0804CC28: 0047         bx r0
