; undefined FUN_080b1070(void)
; entry 0x80b1070  size 28 bytes

080B1070: 00b5         push {lr}
080B1072: 011c         add r1,r0,#0x0
080B1074: 487c         ldrb r0,[r1,#0x11]
080B1076: 0028         cmp r0,#0x0
080B1078: 03d1         bne 0x080b1082
080B107A: 081c         add r0,r1,#0x0
080B107C: 00f0b6f8     bl 0x080b11ec
080B1080: 02e0         b 0x080b1088
080B1082: 081c         add r0,r1,#0x0
080B1084: 00f0c8f8     bl 0x080b1218
080B1088: 01bc         pop {r0}
080B108A: 0047         bx r0
