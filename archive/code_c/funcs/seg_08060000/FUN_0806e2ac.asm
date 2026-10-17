; undefined FUN_0806e2ac(void)
; entry 0x806e2ac  size 72 bytes

0806E2AC: 10b5         push {r4,lr}
0806E2AE: 041c         add r4,r0,#0x0
0806E2B0: e07b         ldrb r0,[r4,#0xf]
0806E2B2: 0028         cmp r0,#0x0
0806E2B4: 0ed1         bne 0x0806e2d4
0806E2B6: 201c         add r0,r4,#0x0
0806E2B8: 7430         add r0,#0x74
0806E2BA: 0e49         ldr r1,[0x0806e2f4]
0806E2BC: 97f762fa     bl 0x08005784
0806E2C0: ad21         mov r1,#0xad
0806E2C2: 0902         lsl r1,r1,#0x8
0806E2C4: 201c         add r0,r4,#0x0
0806E2C6: aef71bfe     bl 0x0801cf00
0806E2CA: 4020         mov r0,#0x40
0806E2CC: a074         strb r0,[r4,#0x12]
0806E2CE: e07b         ldrb r0,[r4,#0xf]
0806E2D0: 0130         add r0,#0x1
0806E2D2: e073         strb r0,[r4,#0xf]
0806E2D4: 201c         add r0,r4,#0x0
0806E2D6: aef78bfe     bl 0x0801cff0
0806E2DA: a07c         ldrb r0,[r4,#0x12]
0806E2DC: 0138         sub r0,#0x1
0806E2DE: a074         strb r0,[r4,#0x12]
0806E2E0: 0006         lsl r0,r0,#0x18
0806E2E2: 010e         lsr r1,r0,#0x18
0806E2E4: 0029         cmp r1,#0x0
0806E2E6: 02d1         bne 0x0806e2ee
0806E2E8: 0320         mov r0,#0x3
0806E2EA: a073         strb r0,[r4,#0xe]
0806E2EC: e173         strb r1,[r4,#0xf]
0806E2EE: 10bc         pop {r4}
0806E2F0: 01bc         pop {r0}
0806E2F2: 0047         bx r0
