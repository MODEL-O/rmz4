; undefined FUN_0806ecb8(void)
; entry 0x806ecb8  size 66 bytes

0806ECB8: 10b5         push {r4,lr}
0806ECBA: 041c         add r4,r0,#0x0
0806ECBC: e07b         ldrb r0,[r4,#0xf]
0806ECBE: 0028         cmp r0,#0x0
0806ECC0: 0bd1         bne 0x0806ecda
0806ECC2: 201c         add r0,r4,#0x0
0806ECC4: 7430         add r0,#0x74
0806ECC6: 0d49         ldr r1,[0x0806ecfc]
0806ECC8: 96f75cfd     bl 0x08005784
0806ECCC: 0c49         ldr r1,[0x0806ed00]
0806ECCE: 201c         add r0,r4,#0x0
0806ECD0: aef716f9     bl 0x0801cf00
0806ECD4: e07b         ldrb r0,[r4,#0xf]
0806ECD6: 0130         add r0,#0x1
0806ECD8: e073         strb r0,[r4,#0xf]
0806ECDA: 201c         add r0,r4,#0x0
0806ECDC: aef788f9     bl 0x0801cff0
0806ECE0: 201c         add r0,r4,#0x0
0806ECE2: 7330         add r0,#0x73
0806ECE4: 0078         ldrb r0,[r0,#0x0]
0806ECE6: 0328         cmp r0,#0x3
0806ECE8: 04d1         bne 0x0806ecf4
0806ECEA: 0021         mov r1,#0x0
0806ECEC: 0220         mov r0,#0x2
0806ECEE: 6073         strb r0,[r4,#0xd]
0806ECF0: a173         strb r1,[r4,#0xe]
0806ECF2: e173         strb r1,[r4,#0xf]
0806ECF4: 10bc         pop {r4}
0806ECF6: 01bc         pop {r0}
0806ECF8: 0047         bx r0
