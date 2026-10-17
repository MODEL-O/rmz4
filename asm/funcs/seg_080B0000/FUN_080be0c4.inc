@ FUN_080be0c4  entry 0x080be0c4  size 250
.thumb
.org 0xbe0c4
FUN_080be0c4:
	push {r4, r5, r6, lr}	@ 000be0c4 70b5
.org 0xbe0c6
	adds r4, r0, #0	@ 000be0c6 041c
.org 0xbe0c8
	ldr r0, [pc, #72]	@ 000be0c8 1248
.org 0xbe0ca
	ldrb r1, [r0, #9]	@ 000be0ca 417a
.org 0xbe0cc
	movs r6, #4	@ 000be0cc 0426
.org 0xbe0ce
	adds r0, r6, #0	@ 000be0ce 301c
.org 0xbe0d0
	ands r0, r1	@ 000be0d0 0840
.org 0xbe0d2
	lsls r0, r0, #24	@ 000be0d2 0006
.org 0xbe0d4
	lsrs r5, r0, #24	@ 000be0d4 050e
.org 0xbe0d6
	cmp r5, #0	@ 000be0d6 002d
.org 0xbe0d8
	beq.n 0xbe11c	@ 000be0d8 20d0
.org 0xbe0da
	ldrb r1, [r4, #10]	@ 000be0da a17a
.org 0xbe0dc
	movs r0, #254	@ 000be0dc fe20
.org 0xbe0de
	ands r0, r1	@ 000be0de 0840
.org 0xbe0e0
	movs r2, #0	@ 000be0e0 0022
.org 0xbe0e2
	movs r1, #253	@ 000be0e2 fd21
.org 0xbe0e4
	ands r0, r1	@ 000be0e4 0840
.org 0xbe0e6
	strb r0, [r4, #10]	@ 000be0e6 a072
.org 0xbe0e8
	adds r0, r4, #0	@ 000be0e8 201c
.org 0xbe0ea
	adds r0, #140	@ 000be0ea 8c30
.org 0xbe0ec
	str r2, [r0, #0]	@ 000be0ec 0260
.org 0xbe0ee
	adds r0, #4	@ 000be0ee 0430
.org 0xbe0f0
	str r2, [r0, #0]	@ 000be0f0 0260
.org 0xbe0f2
	adds r0, #4	@ 000be0f2 0430
.org 0xbe0f4
	strb r2, [r0, #0]	@ 000be0f4 0270
.org 0xbe0f6
	ldrb r1, [r4, #10]	@ 000be0f6 a17a
.org 0xbe0f8
	movs r0, #251	@ 000be0f8 fb20
.org 0xbe0fa
	ands r0, r1	@ 000be0fa 0840
.org 0xbe0fc
	strb r0, [r4, #10]	@ 000be0fc a072
.org 0xbe0fe
	ldr r1, [pc, #24]	@ 000be0fe 0649
.org 0xbe100
	ldrb r0, [r4, #9]	@ 000be100 607a
.org 0xbe102
	lsls r0, r0, #2	@ 000be102 8000
.org 0xbe104
	adds r0, r0, r1	@ 000be104 4018
.org 0xbe106
	movs r1, #3	@ 000be106 0321
.org 0xbe108
	str r1, [r4, #12]	@ 000be108 e160
.org 0xbe10a
	ldr r0, [r0, #0]	@ 000be10a 0068
.org 0xbe10c
	ldr r0, [r0, #12]	@ 000be10c c068
.org 0xbe10e
	str r0, [r4, #20]	@ 000be10e 6061
.org 0xbe110
	b.n 0xbe1ce	@ 000be110 5de0
.org 0xbe112
	.byte 0x00	@ 000be112 data
.org 0xbe113
	.byte 0x00	@ 000be113 data
.org 0xbe114
	.byte 0xb0,0xe8,0x02,0x02	@ 000be114 data
.org 0xbe118
	.byte 0xf4,0x49,0x86,0x08	@ 000be118 data
.org 0xbe11c
	adds r0, r4, #0	@ 000be11c 201c
.org 0xbe11e
	bl 0x1cff0	@ 000be11e 5ef767ff
.org 0xbe122
	ldrb r0, [r4, #14]	@ 000be122 a07b
.org 0xbe124
	cmp r0, #0	@ 000be124 0028
.org 0xbe126
	bne.n 0xbe188	@ 000be126 2fd1
.org 0xbe128
	ldr r1, [r4, #96]	@ 000be128 216e
.org 0xbe12a
	ldr r0, [pc, #80]	@ 000be12a 1448
.org 0xbe12c
	cmp r1, r0	@ 000be12c 8142
.org 0xbe12e
	bgt.n 0xbe136	@ 000be12e 02dc
.org 0xbe130
	adds r0, r1, #0	@ 000be130 081c
.org 0xbe132
	adds r0, #64	@ 000be132 4030
.org 0xbe134
	str r0, [r4, #96]	@ 000be134 2066
.org 0xbe136
	ldr r1, [r4, #88]	@ 000be136 a16d
.org 0xbe138
	ldr r0, [r4, #96]	@ 000be138 206e
.org 0xbe13a
	adds r1, r1, r0	@ 000be13a 0918
.org 0xbe13c
	str r1, [r4, #88]	@ 000be13c a165
.org 0xbe13e
	adds r0, r4, #0	@ 000be13e 201c
.org 0xbe140
	adds r0, #140	@ 000be140 8c30
.org 0xbe142
	ldr r0, [r0, #0]	@ 000be142 0068
.org 0xbe144
	ands r0, r6	@ 000be144 3040
.org 0xbe146
	cmp r0, #0	@ 000be146 0028
.org 0xbe148
	bne.n 0xbe156	@ 000be148 05d1
.org 0xbe14a
	ldr r0, [r4, #84]	@ 000be14a 606d
.org 0xbe14c
	bl 0x7c7c	@ 000be14c 49f796fd
.org 0xbe150
	lsls r0, r0, #16	@ 000be150 0004
.org 0xbe152
	cmp r0, #0	@ 000be152 0028
.org 0xbe154
	beq.n 0xbe1ce	@ 000be154 3bd0
.org 0xbe156
	ldr r1, [pc, #40]	@ 000be156 0a49
.org 0xbe158
	adds r0, r4, #0	@ 000be158 201c
.org 0xbe15a
	bl 0x1cf00	@ 000be15a 5ef7d1fe
.org 0xbe15e
	adds r0, r4, #0	@ 000be15e 201c
.org 0xbe160
	bl 0x1cff0	@ 000be160 5ef746ff
.org 0xbe164
	movs r0, #53	@ 000be164 3520
.org 0xbe166
	bl 0x2b10	@ 000be166 44f7d3fc
.org 0xbe16a
	adds r0, r4, #0	@ 000be16a 201c
.org 0xbe16c
	adds r0, #116	@ 000be16c 7430
.org 0xbe16e
	ldr r1, [pc, #20]	@ 000be16e 0549
.org 0xbe170
	bl 0x5784	@ 000be170 47f708fb
.org 0xbe174
	ldrb r0, [r4, #14]	@ 000be174 a07b
.org 0xbe176
	adds r0, #1	@ 000be176 0130
.org 0xbe178
	strb r0, [r4, #14]	@ 000be178 a073
.org 0xbe17a
	b.n 0xbe1ce	@ 000be17a 28e0
.org 0xbe17c
	.byte 0xff,0x06,0x00,0x00	@ 000be17c data
.org 0xbe180
	.byte 0x0a,0x1c,0x00,0x00	@ 000be180 data
.org 0xbe184
	.byte 0x10,0x4d,0x86,0x08	@ 000be184 data
.org 0xbe188
	adds r0, r4, #0	@ 000be188 201c
.org 0xbe18a
	adds r0, #113	@ 000be18a 7130
.org 0xbe18c
	ldrb r0, [r0, #0]	@ 000be18c 0078
.org 0xbe18e
	lsls r0, r0, #24	@ 000be18e 0006
.org 0xbe190
	asrs r0, r0, #24	@ 000be190 0016
.org 0xbe192
	cmp r0, #2	@ 000be192 0228
.org 0xbe194
	bne.n 0xbe1ac	@ 000be194 0ad1
.org 0xbe196
	adds r0, r4, #0	@ 000be196 201c
.org 0xbe198
	adds r0, #140	@ 000be198 8c30
.org 0xbe19a
	str r5, [r0, #0]	@ 000be19a 0560
.org 0xbe19c
	adds r0, #4	@ 000be19c 0430
.org 0xbe19e
	str r5, [r0, #0]	@ 000be19e 0560
.org 0xbe1a0
	adds r0, #4	@ 000be1a0 0430
.org 0xbe1a2
	strb r5, [r0, #0]	@ 000be1a2 0570
.org 0xbe1a4
	ldrb r1, [r4, #10]	@ 000be1a4 a17a
.org 0xbe1a6
	movs r0, #251	@ 000be1a6 fb20
.org 0xbe1a8
	ands r0, r1	@ 000be1a8 0840
.org 0xbe1aa
	strb r0, [r4, #10]	@ 000be1aa a072
.org 0xbe1ac
	adds r0, r4, #0	@ 000be1ac 201c
.org 0xbe1ae
	adds r0, #115	@ 000be1ae 7330
.org 0xbe1b0
	ldrb r0, [r0, #0]	@ 000be1b0 0078
.org 0xbe1b2
	cmp r0, #3	@ 000be1b2 0328
.org 0xbe1b4
	bne.n 0xbe1ce	@ 000be1b4 0bd1
.org 0xbe1b6
	ldr r1, [pc, #28]	@ 000be1b6 0749
.org 0xbe1b8
	ldrb r0, [r4, #9]	@ 000be1b8 607a
.org 0xbe1ba
	lsls r0, r0, #2	@ 000be1ba 8000
.org 0xbe1bc
	adds r0, r0, r1	@ 000be1bc 4018
