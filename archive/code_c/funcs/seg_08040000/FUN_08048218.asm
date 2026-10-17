; undefined FUN_08048218(void)
; entry 0x8048218  size 42 bytes

08048218: 00b5         push {lr}
0804821A: 021c         add r2,r0,#0x0
0804821C: 5069         ldr r0,[r2,#0x14]
0804821E: 0121         mov r1,#0x1
08048220: 0840         and r0,r1
08048222: 0028         cmp r0,#0x0
08048224: 0bd0         beq 0x0804823e
08048226: d068         ldr r0,[r2,#0xc]
08048228: c06a         ldr r0,[r0,#0x2c]
0804822A: d26a         ldr r2,[r2,#0x2c]
0804822C: 0023         mov r3,#0x0
0804822E: 416d         ldr r1,[r0,#0x54]
08048230: 506d         ldr r0,[r2,#0x54]
08048232: 8142         cmp r1,r0
08048234: 00dd         ble 0x08048238
08048236: 0123         mov r3,#0x1
08048238: 101c         add r0,r2,#0x0
0804823A: bc30         add r0,#0xbc
0804823C: 0370         strb r3,[r0,#0x0]
0804823E: 01bc         pop {r0}
08048240: 0047         bx r0
