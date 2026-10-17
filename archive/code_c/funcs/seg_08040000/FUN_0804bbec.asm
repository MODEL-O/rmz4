; undefined FUN_0804bbec(void)
; entry 0x804bbec  size 42 bytes

0804BBEC: 00b5         push {lr}
0804BBEE: 021c         add r2,r0,#0x0
0804BBF0: 5069         ldr r0,[r2,#0x14]
0804BBF2: 0121         mov r1,#0x1
0804BBF4: 0840         and r0,r1
0804BBF6: 0028         cmp r0,#0x0
0804BBF8: 0bd0         beq 0x0804bc12
0804BBFA: d068         ldr r0,[r2,#0xc]
0804BBFC: c06a         ldr r0,[r0,#0x2c]
0804BBFE: d26a         ldr r2,[r2,#0x2c]
0804BC00: 0023         mov r3,#0x0
0804BC02: 416d         ldr r1,[r0,#0x54]
0804BC04: 506d         ldr r0,[r2,#0x54]
0804BC06: 8142         cmp r1,r0
0804BC08: 00dd         ble 0x0804bc0c
0804BC0A: 0123         mov r3,#0x1
0804BC0C: 101c         add r0,r2,#0x0
0804BC0E: bc30         add r0,#0xbc
0804BC10: 0370         strb r3,[r0,#0x0]
0804BC12: 01bc         pop {r0}
0804BC14: 0047         bx r0
