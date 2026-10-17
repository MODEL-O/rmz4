; undefined FUN_080663dc(void)
; entry 0x80663dc  size 44 bytes

080663DC: 00b5         push {lr}
080663DE: 031c         add r3,r0,#0x0
080663E0: c030         add r0,#0xc0
080663E2: 0268         ldr r2,[r0,#0x0]
080663E4: 0160         str r1,[r0,#0x0]
080663E6: 081c         add r0,r1,#0x0
080663E8: bc30         add r0,#0xbc
080663EA: 0360         str r3,[r0,#0x0]
080663EC: 0430         add r0,#0x4
080663EE: 0260         str r2,[r0,#0x0]
080663F0: 002a         cmp r2,#0x0
080663F2: 02d0         beq 0x080663fa
080663F4: 101c         add r0,r2,#0x0
080663F6: bc30         add r0,#0xbc
080663F8: 0160         str r1,[r0,#0x0]
080663FA: 191c         add r1,r3,#0x0
080663FC: b731         add r1,#0xb7
080663FE: 0878         ldrb r0,[r1,#0x0]
08066400: 0130         add r0,#0x1
08066402: 0870         strb r0,[r1,#0x0]
08066404: 01bc         pop {r0}
08066406: 0047         bx r0
