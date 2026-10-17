; undefined FUN_0803ff0c(void)
; entry 0x803ff0c  size 42 bytes

0803FF0C: 00b5         push {lr}
0803FF0E: 021c         add r2,r0,#0x0
0803FF10: 5069         ldr r0,[r2,#0x14]
0803FF12: 0121         mov r1,#0x1
0803FF14: 0840         and r0,r1
0803FF16: 0028         cmp r0,#0x0
0803FF18: 0bd0         beq 0x0803ff32
0803FF1A: d068         ldr r0,[r2,#0xc]
0803FF1C: c06a         ldr r0,[r0,#0x2c]
0803FF1E: d26a         ldr r2,[r2,#0x2c]
0803FF20: 0023         mov r3,#0x0
0803FF22: 416d         ldr r1,[r0,#0x54]
0803FF24: 506d         ldr r0,[r2,#0x54]
0803FF26: 8142         cmp r1,r0
0803FF28: 00dd         ble 0x0803ff2c
0803FF2A: 0123         mov r3,#0x1
0803FF2C: 101c         add r0,r2,#0x0
0803FF2E: bc30         add r0,#0xbc
0803FF30: 0370         strb r3,[r0,#0x0]
0803FF32: 01bc         pop {r0}
0803FF34: 0047         bx r0
