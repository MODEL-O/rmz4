; undefined FUN_080abe80(void)
; entry 0x80abe80  size 36 bytes

080ABE80: 10b5         push {r4,lr}
080ABE82: 8368         ldr r3,[r0,#0x8]
080ABE84: 1c1c         add r4,r3,#0x0
080ABE86: be34         add r4,#0xbe
080ABE88: 2278         ldrb r2,[r4,#0x0]
080ABE8A: 0132         add r2,#0x1
080ABE8C: 2270         strb r2,[r4,#0x0]
080ABE8E: 054c         ldr r4,[0x080abea4]
080ABE90: bc33         add r3,#0xbc
080ABE92: 1a78         ldrb r2,[r3,#0x0]
080ABE94: 9200         lsl r2,r2,#0x2
080ABE96: 1219         add r2,r2,r4
080ABE98: 1268         ldr r2,[r2,#0x0]
080ABE9A: 7df073f8     bl 0x08128f84
080ABE9E: 10bc         pop {r4}
080ABEA0: 01bc         pop {r0}
080ABEA2: 0047         bx r0
