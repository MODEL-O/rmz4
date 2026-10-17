; undefined FUN_0809edb0(void)
; entry 0x809edb0  size 62 bytes

0809EDB0: 10b5         push {r4,lr}
0809EDB2: 041c         add r4,r0,#0x0
0809EDB4: e07b         ldrb r0,[r4,#0xf]
0809EDB6: 0028         cmp r0,#0x0
0809EDB8: 08d1         bne 0x0809edcc
0809EDBA: 0d49         ldr r1,[0x0809edf0]
0809EDBC: 201c         add r0,r4,#0x0
0809EDBE: 7ef79ff8     bl 0x0801cf00
0809EDC2: 2020         mov r0,#0x20
0809EDC4: a074         strb r0,[r4,#0x12]
0809EDC6: e07b         ldrb r0,[r4,#0xf]
0809EDC8: 0130         add r0,#0x1
0809EDCA: e073         strb r0,[r4,#0xf]
0809EDCC: 201c         add r0,r4,#0x0
0809EDCE: 7ef70ff9     bl 0x0801cff0
0809EDD2: a07c         ldrb r0,[r4,#0x12]
0809EDD4: 0138         sub r0,#0x1
0809EDD6: a074         strb r0,[r4,#0x12]
0809EDD8: 0006         lsl r0,r0,#0x18
0809EDDA: 010e         lsr r1,r0,#0x18
0809EDDC: 0029         cmp r1,#0x0
0809EDDE: 03d1         bne 0x0809ede8
0809EDE0: 0320         mov r0,#0x3
0809EDE2: 6073         strb r0,[r4,#0xd]
0809EDE4: a173         strb r1,[r4,#0xe]
0809EDE6: e173         strb r1,[r4,#0xf]
0809EDE8: 10bc         pop {r4}
0809EDEA: 01bc         pop {r0}
0809EDEC: 0047         bx r0
