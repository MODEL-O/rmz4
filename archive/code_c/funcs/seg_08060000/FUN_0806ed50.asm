; undefined FUN_0806ed50(void)
; entry 0x806ed50  size 50 bytes

0806ED50: 10b5         push {r4,lr}
0806ED52: 041c         add r4,r0,#0x0
0806ED54: e07b         ldrb r0,[r4,#0xf]
0806ED56: 0028         cmp r0,#0x0
0806ED58: 07d1         bne 0x0806ed6a
0806ED5A: 201c         add r0,r4,#0x0
0806ED5C: 7430         add r0,#0x74
0806ED5E: 0949         ldr r1,[0x0806ed84]
0806ED60: 96f710fd     bl 0x08005784
0806ED64: e07b         ldrb r0,[r4,#0xf]
0806ED66: 0130         add r0,#0x1
0806ED68: e073         strb r0,[r4,#0xf]
0806ED6A: 0748         ldr r0,[0x0806ed88]
0806ED6C: 0189         ldrh r1,[r0,#0x8]
0806ED6E: 0820         mov r0,#0x8
0806ED70: 0840         and r0,r1
0806ED72: 0028         cmp r0,#0x0
0806ED74: 02d1         bne 0x0806ed7c
0806ED76: 201c         add r0,r4,#0x0
0806ED78: 00f02efa     bl 0x0806f1d8
0806ED7C: 10bc         pop {r4}
0806ED7E: 01bc         pop {r0}
0806ED80: 0047         bx r0
