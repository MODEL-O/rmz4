; undefined FUN_0804a238(void)
; entry 0x804a238  size 42 bytes

0804A238: 00b5         push {lr}
0804A23A: 021c         add r2,r0,#0x0
0804A23C: 5069         ldr r0,[r2,#0x14]
0804A23E: 0121         mov r1,#0x1
0804A240: 0840         and r0,r1
0804A242: 0028         cmp r0,#0x0
0804A244: 0bd0         beq 0x0804a25e
0804A246: d068         ldr r0,[r2,#0xc]
0804A248: c06a         ldr r0,[r0,#0x2c]
0804A24A: d26a         ldr r2,[r2,#0x2c]
0804A24C: 0023         mov r3,#0x0
0804A24E: 416d         ldr r1,[r0,#0x54]
0804A250: 506d         ldr r0,[r2,#0x54]
0804A252: 8142         cmp r1,r0
0804A254: 00dd         ble 0x0804a258
0804A256: 0123         mov r3,#0x1
0804A258: 101c         add r0,r2,#0x0
0804A25A: bc30         add r0,#0xbc
0804A25C: 0370         strb r3,[r0,#0x0]
0804A25E: 01bc         pop {r0}
0804A260: 0047         bx r0
