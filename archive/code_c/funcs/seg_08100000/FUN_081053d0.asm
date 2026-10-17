; undefined FUN_081053d0(void)
; entry 0x81053d0  size 68 bytes

081053D0: 10b5         push {r4,lr}
081053D2: c46a         ldr r4,[r0,#0x2c]
081053D4: 211c         add r1,r4,#0x0
081053D6: b431         add r1,#0xb4
081053D8: 0878         ldrb r0,[r1,#0x0]
081053DA: 0028         cmp r0,#0x0
081053DC: 01d1         bne 0x081053e2
081053DE: 0120         mov r0,#0x1
081053E0: 0870         strb r0,[r1,#0x0]
081053E2: 607c         ldrb r0,[r4,#0x11]
081053E4: 0428         cmp r0,#0x4
081053E6: 12d1         bne 0x0810540e
081053E8: 201c         add r0,r4,#0x0
081053EA: 8c30         add r0,#0x8c
081053EC: 0068         ldr r0,[r0,#0x0]
081053EE: 8021         mov r1,#0x80
081053F0: 8900         lsl r1,r1,#0x2
081053F2: 0840         and r0,r1
081053F4: 0028         cmp r0,#0x0
081053F6: 0ad0         beq 0x0810540e
081053F8: 211c         add r1,r4,#0x0
081053FA: 5431         add r1,#0x54
081053FC: 0120         mov r0,#0x1
081053FE: cbf743fc     bl 0x080d0c88
08105402: a16a         ldr r1,[r4,#0x28]
08105404: 0348         ldr r0,[0x08105414]
08105406: 0918         add r1,r1,r0
08105408: 8868         ldr r0,[r1,#0x8]
0810540A: 0830         add r0,#0x8
0810540C: 8860         str r0,[r1,#0x8]
0810540E: 10bc         pop {r4}
08105410: 01bc         pop {r0}
08105412: 0047         bx r0
