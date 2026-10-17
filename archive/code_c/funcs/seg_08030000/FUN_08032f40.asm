; undefined FUN_08032f40(void)
; entry 0x8032f40  size 62 bytes

08032F40: 30b5         push {r4,r5,lr}
08032F42: 051c         add r5,r0,#0x0
08032F44: 2b1c         add r3,r5,#0x0
08032F46: b433         add r3,#0xb4
08032F48: 5a6d         ldr r2,[r3,#0x54]
08032F4A: 002a         cmp r2,#0x0
08032F4C: 03d0         beq 0x08032f56
08032F4E: 0021         mov r1,#0x0
08032F50: 0120         mov r0,#0x1
08032F52: 5074         strb r0,[r2,#0x11]
08032F54: 5965         str r1,[r3,#0x54]
08032F56: 8021         mov r1,#0x80
08032F58: 4900         lsl r1,r1,#0x1
08032F5A: 6818         add r0,r5,r1
08032F5C: 0024         mov r4,#0x0
08032F5E: 0470         strb r4,[r0,#0x0]
08032F60: 0748         ldr r0,[0x08032f80]
08032F62: 07f0fffc     bl 0x0803a964
08032F66: 0749         ldr r1,[0x08032f84]
08032F68: 0120         mov r0,#0x1
08032F6A: 0870         strb r0,[r1,#0x0]
08032F6C: 0220         mov r0,#0x2
08032F6E: a873         strb r0,[r5,#0xe]
08032F70: ec73         strb r4,[r5,#0xf]
08032F72: 281c         add r0,r5,#0x0
08032F74: 00f00af8     bl 0x08032f8c
08032F78: 30bc         pop {r4,r5}
08032F7A: 01bc         pop {r0}
08032F7C: 0047         bx r0
