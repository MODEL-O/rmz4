; undefined FUN_0804df38(void)
; entry 0x804df38  size 42 bytes

0804DF38: 00b5         push {lr}
0804DF3A: 021c         add r2,r0,#0x0
0804DF3C: 5069         ldr r0,[r2,#0x14]
0804DF3E: 0121         mov r1,#0x1
0804DF40: 0840         and r0,r1
0804DF42: 0028         cmp r0,#0x0
0804DF44: 0bd0         beq 0x0804df5e
0804DF46: d068         ldr r0,[r2,#0xc]
0804DF48: c06a         ldr r0,[r0,#0x2c]
0804DF4A: d26a         ldr r2,[r2,#0x2c]
0804DF4C: 0023         mov r3,#0x0
0804DF4E: 416d         ldr r1,[r0,#0x54]
0804DF50: 506d         ldr r0,[r2,#0x54]
0804DF52: 8142         cmp r1,r0
0804DF54: 00dd         ble 0x0804df58
0804DF56: 0123         mov r3,#0x1
0804DF58: 101c         add r0,r2,#0x0
0804DF5A: bc30         add r0,#0xbc
0804DF5C: 0370         strb r3,[r0,#0x0]
0804DF5E: 01bc         pop {r0}
0804DF60: 0047         bx r0
