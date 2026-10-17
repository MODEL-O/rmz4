; undefined FUN_08084a7c(void)
; entry 0x8084a7c  size 64 bytes

08084A7C: 10b5         push {r4,lr}
08084A7E: 041c         add r4,r0,#0x0
08084A80: 6069         ldr r0,[r4,#0x14]
08084A82: 0121         mov r1,#0x1
08084A84: 0840         and r0,r1
08084A86: 0028         cmp r0,#0x0
08084A88: 15d0         beq 0x08084ab6
08084A8A: 0f20         mov r0,#0xf
08084A8C: 81f77aff     bl 0x08006984
08084A90: 6169         ldr r1,[r4,#0x14]
08084A92: 8020         mov r0,#0x80
08084A94: 8000         lsl r0,r0,#0x2
08084A96: 0840         and r0,r1
08084A98: 0028         cmp r0,#0x0
08084A9A: 0cd0         beq 0x08084ab6
08084A9C: 8020         mov r0,#0x80
08084A9E: 8002         lsl r0,r0,#0xa
08084AA0: 0140         and r1,r0
08084AA2: 0029         cmp r1,#0x0
08084AA4: 07d0         beq 0x08084ab6
08084AA6: 0548         ldr r0,[0x08084abc]
08084AA8: 0068         ldr r0,[r0,#0x0]
08084AAA: 0028         cmp r0,#0x0
08084AAC: 03d0         beq 0x08084ab6
08084AAE: 0321         mov r1,#0x3
08084AB0: 0322         mov r2,#0x3
08084AB2: b5f761fd     bl 0x0803a578
08084AB6: 10bc         pop {r4}
08084AB8: 01bc         pop {r0}
08084ABA: 0047         bx r0
