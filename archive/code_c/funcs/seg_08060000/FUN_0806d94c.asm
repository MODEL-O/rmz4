; undefined FUN_0806d94c(void)
; entry 0x806d94c  size 42 bytes

0806D94C: 00b5         push {lr}
0806D94E: 021c         add r2,r0,#0x0
0806D950: 5069         ldr r0,[r2,#0x14]
0806D952: 0121         mov r1,#0x1
0806D954: 0840         and r0,r1
0806D956: 0028         cmp r0,#0x0
0806D958: 0bd0         beq 0x0806d972
0806D95A: d068         ldr r0,[r2,#0xc]
0806D95C: c06a         ldr r0,[r0,#0x2c]
0806D95E: d26a         ldr r2,[r2,#0x2c]
0806D960: 0023         mov r3,#0x0
0806D962: 416d         ldr r1,[r0,#0x54]
0806D964: 506d         ldr r0,[r2,#0x54]
0806D966: 8142         cmp r1,r0
0806D968: 00dd         ble 0x0806d96c
0806D96A: 0123         mov r3,#0x1
0806D96C: 101c         add r0,r2,#0x0
0806D96E: e030         add r0,#0xe0
0806D970: 0370         strb r3,[r0,#0x0]
0806D972: 01bc         pop {r0}
0806D974: 0047         bx r0
