; undefined FUN_0801ae08(void)
; entry 0x801ae08  size 30 bytes

0801AE08: 00b5         push {lr}
0801AE0A: 021c         add r2,r0,#0x0
0801AE0C: 937b         ldrb r3,[r2,#0xe]
0801AE0E: 191c         add r1,r3,#0x0
0801AE10: 0029         cmp r1,#0x0
0801AE12: 06d1         bne 0x0801ae22
0801AE14: d164         str r1,[r2,#0x4c]
0801AE16: a020         mov r0,#0xa0
0801AE18: 1065         str r0,[r2,#0x50]
0801AE1A: 5164         str r1,[r2,#0x44]
0801AE1C: 9164         str r1,[r2,#0x48]
0801AE1E: 581c         add r0,r3,#0x1
0801AE20: 9073         strb r0,[r2,#0xe]
0801AE22: 01bc         pop {r0}
0801AE24: 0047         bx r0
