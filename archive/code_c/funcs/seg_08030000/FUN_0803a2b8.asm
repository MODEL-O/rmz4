; undefined FUN_0803a2b8(void)
; entry 0x803a2b8  size 68 bytes

0803A2B8: 10b5         push {r4,lr}
0803A2BA: 041c         add r4,r0,#0x0
0803A2BC: 211c         add r1,r4,#0x0
0803A2BE: b431         add r1,#0xb4
0803A2C0: 087b         ldrb r0,[r1,#0xc]
0803A2C2: 0628         cmp r0,#0x6
0803A2C4: 02d0         beq 0x0803a2cc
0803A2C6: 487b         ldrb r0,[r1,#0xd]
0803A2C8: 0628         cmp r0,#0x6
0803A2CA: 0dd1         bne 0x0803a2e8
0803A2CC: 0548         ldr r0,[0x0803a2e4]
0803A2CE: c97b         ldrb r1,[r1,#0xf]
0803A2D0: 8900         lsl r1,r1,#0x2
0803A2D2: 0918         add r1,r1,r0
0803A2D4: 0a68         ldr r2,[r1,#0x0]
0803A2D6: 201c         add r0,r4,#0x0
0803A2D8: 0021         mov r1,#0x0
0803A2DA: eef053fe     bl 0x08128f84
0803A2DE: 021c         add r2,r0,#0x0
0803A2E0: 03e0         b 0x0803a2ea
0803A2E8: 0022         mov r2,#0x0
0803A2EA: 002a         cmp r2,#0x0
0803A2EC: 05d1         bne 0x0803a2fa
0803A2EE: 0548         ldr r0,[0x0803a304]
0803A2F0: 2318         add r3,r4,r0
0803A2F2: 1878         ldrb r0,[r3,#0x0]
0803A2F4: 4021         mov r1,#0x40
0803A2F6: 0843         orr r0,r1
0803A2F8: 1870         strb r0,[r3,#0x0]
0803A2FA: 101c         add r0,r2,#0x0
0803A2FC: 10bc         pop {r4}
0803A2FE: 02bc         pop {r1}
0803A300: 0847         bx r1
