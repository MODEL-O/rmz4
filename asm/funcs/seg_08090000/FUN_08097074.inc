@ FUN_08097074  entry 0x08097074  size 374
.thumb
.org 0x97074
FUN_08097074:
	push {r4, r5, r6, lr}	@ 00097074 70b5
.org 0x97076
	adds r4, r0, #0	@ 00097076 041c
.org 0x97078
	ldr r5, [r4, #40]	@ 00097078 a56a
.org 0x9707a
	ldrb r0, [r5, #12]	@ 0009707a 287b
.org 0x9707c
	cmp r0, #1	@ 0009707c 0128
.org 0x9707e
	bls.n 0x970e4	@ 0009707e 31d9
.org 0x97080
	adds r0, r5, #0	@ 00097080 281c
.org 0x97082
	adds r0, #191	@ 00097082 bf30
.org 0x97084
	ldrb r2, [r0, #0]	@ 00097084 0278
.org 0x97086
	cmp r2, #0	@ 00097086 002a
.org 0x97088
	beq.n 0x970a8	@ 00097088 0ed0
.org 0x9708a
	ldr r1, [pc, #24]	@ 0009708a 0649
.org 0x9708c
	ldrb r0, [r4, #9]	@ 0009708c 607a
.org 0x9708e
	lsls r0, r0, #2	@ 0009708e 8000
.org 0x97090
	adds r0, r0, r1	@ 00097090 4018
.org 0x97092
	movs r1, #2	@ 00097092 0221
.org 0x97094
	str r1, [r4, #12]	@ 00097094 e160
.org 0x97096
	ldr r0, [r0, #0]	@ 00097096 0068
.org 0x97098
	ldr r0, [r0, #8]	@ 00097098 8068
.org 0x9709a
	str r0, [r4, #20]	@ 0009709a 6061
.org 0x9709c
	adds r0, r4, #0	@ 0009709c 201c
.org 0x9709e
	bl 0x97220	@ 0009709e 00f0bff8
.org 0x970a2
	b.n 0x9721a	@ 000970a2 bae0
.org 0x970a4
	.byte 0x40,0xdb,0x85,0x08	@ 000970a4 data
.org 0x970a8
	ldrb r1, [r4, #10]	@ 000970a8 a17a
.org 0x970aa
	movs r0, #254	@ 000970aa fe20
.org 0x970ac
	ands r0, r1	@ 000970ac 0840
.org 0x970ae
	movs r1, #253	@ 000970ae fd21
.org 0x970b0
	ands r0, r1	@ 000970b0 0840
.org 0x970b2
	strb r0, [r4, #10]	@ 000970b2 a072
.org 0x970b4
	adds r0, r4, #0	@ 000970b4 201c
.org 0x970b6
	adds r0, #140	@ 000970b6 8c30
.org 0x970b8
	str r2, [r0, #0]	@ 000970b8 0260
.org 0x970ba
	adds r0, #4	@ 000970ba 0430
.org 0x970bc
	str r2, [r0, #0]	@ 000970bc 0260
.org 0x970be
	adds r0, #4	@ 000970be 0430
.org 0x970c0
	strb r2, [r0, #0]	@ 000970c0 0270
.org 0x970c2
	ldrb r1, [r4, #10]	@ 000970c2 a17a
.org 0x970c4
	movs r0, #251	@ 000970c4 fb20
.org 0x970c6
	ands r0, r1	@ 000970c6 0840
.org 0x970c8
	strb r0, [r4, #10]	@ 000970c8 a072
.org 0x970ca
	ldr r1, [pc, #20]	@ 000970ca 0549
.org 0x970cc
	ldrb r0, [r4, #9]	@ 000970cc 607a
.org 0x970ce
	lsls r0, r0, #2	@ 000970ce 8000
.org 0x970d0
	adds r0, r0, r1	@ 000970d0 4018
.org 0x970d2
	movs r1, #3	@ 000970d2 0321
.org 0x970d4
	str r1, [r4, #12]	@ 000970d4 e160
.org 0x970d6
	ldr r0, [r0, #0]	@ 000970d6 0068
.org 0x970d8
	ldr r0, [r0, #12]	@ 000970d8 c068
.org 0x970da
	str r0, [r4, #20]	@ 000970da 6061
.org 0x970dc
	b.n 0x9721a	@ 000970dc 9de0
.org 0x970de
	.byte 0x00	@ 000970de data
.org 0x970df
	.byte 0x00	@ 000970df data
.org 0x970e0
	.byte 0x40,0xdb,0x85,0x08	@ 000970e0 data
.org 0x970e4
	adds r0, r5, #0	@ 000970e4 281c
.org 0x970e6
	adds r0, #192	@ 000970e6 c030
.org 0x970e8
	ldr r0, [r0, #0]	@ 000970e8 0068
.org 0x970ea
	cmp r0, #0	@ 000970ea 0028
.org 0x970ec
	beq.n 0x97100	@ 000970ec 08d0
.org 0x970ee
	adds r0, r4, #0	@ 000970ee 201c
.org 0x970f0
	adds r0, #116	@ 000970f0 7430
.org 0x970f2
	ldr r1, [pc, #8]	@ 000970f2 0249
.org 0x970f4
	bl 0x5784	@ 000970f4 6ef746fb
.org 0x970f8
	b.n 0x9710a	@ 000970f8 07e0
.org 0x970fa
	.byte 0x00	@ 000970fa data
.org 0x970fb
	.byte 0x00	@ 000970fb data
.org 0x970fc
	.byte 0xe4,0x09,0x86,0x08	@ 000970fc data
.org 0x97100
	adds r0, r4, #0	@ 00097100 201c
.org 0x97102
	adds r0, #116	@ 00097102 7430
.org 0x97104
	ldr r1, [pc, #52]	@ 00097104 0d49
.org 0x97106
	bl 0x5784	@ 00097106 6ef73dfb
.org 0x9710a
	adds r2, r5, #0	@ 0009710a 2a1c
.org 0x9710c
	adds r2, #189	@ 0009710c bd32
.org 0x9710e
	ldrb r0, [r2, #0]	@ 0009710e 1078
.org 0x97110
	cmp r0, #192	@ 00097110 c028
.org 0x97112
	beq.n 0x971ec	@ 00097112 6bd0
.org 0x97114
	ldrb r1, [r4, #10]	@ 00097114 a17a
.org 0x97116
	movs r0, #1	@ 00097116 0120
.org 0x97118
	movs r3, #0	@ 00097118 0023
.org 0x9711a
	orrs r0, r1	@ 0009711a 0843
.org 0x9711c
	strb r0, [r4, #10]	@ 0009711c a072
.org 0x9711e
	ldrb r1, [r2, #0]	@ 0009711e 1178
.org 0x97120
	adds r0, r4, #0	@ 00097120 201c
.org 0x97122
	adds r0, #36	@ 00097122 2430
.org 0x97124
	strb r1, [r0, #0]	@ 00097124 0170
.org 0x97126
	ldrb r0, [r5, #10]	@ 00097126 a87a
.org 0x97128
	lsrs r2, r0, #4	@ 00097128 0209
.org 0x9712a
	movs r0, #1	@ 0009712a 0120
.org 0x9712c
	ands r2, r0	@ 0009712c 0240
.org 0x9712e
	cmp r2, #0	@ 0009712e 002a
.org 0x97130
	beq.n 0x97140	@ 00097130 06d0
.org 0x97132
	ldrb r0, [r4, #10]	@ 00097132 a07a
.org 0x97134
	movs r1, #16	@ 00097134 1021
.org 0x97136
	orrs r0, r1	@ 00097136 0843
.org 0x97138
	b.n 0x97146	@ 00097138 05e0
.org 0x9713a
	.byte 0x00	@ 0009713a data
.org 0x9713b
	.byte 0x00	@ 0009713b data
.org 0x9713c
	.byte 0xcc,0x09,0x86,0x08	@ 0009713c data
.org 0x97140
	ldrb r1, [r4, #10]	@ 00097140 a17a
.org 0x97142
	movs r0, #239	@ 00097142 ef20
.org 0x97144
	ands r0, r1	@ 00097144 0840
.org 0x97146
	strb r0, [r4, #10]	@ 00097146 a072
.org 0x97148
	adds r1, r2, #0	@ 00097148 111c
.org 0x9714a
	adds r0, r4, #0	@ 0009714a 201c
.org 0x9714c
	adds r0, #76	@ 0009714c 4c30
.org 0x9714e
	strb r1, [r0, #0]	@ 0009714e 0170
.org 0x97150
	adds r3, r4, #0	@ 00097150 231c
.org 0x97152
	adds r3, #74	@ 00097152 4a33
.org 0x97154
	lsls r1, r1, #4	@ 00097154 0901
.org 0x97156
	ldrb r2, [r3, #0]	@ 00097156 1a78
.org 0x97158
	movs r0, #17	@ 00097158 1120
.org 0x9715a
	negs r0, r0	@ 0009715a 4042
.org 0x9715c
	ands r0, r2	@ 0009715c 1040
.org 0x9715e
	orrs r0, r1	@ 0009715e 0843
.org 0x97160
	strb r0, [r3, #0]	@ 00097160 1870
.org 0x97162
	adds r0, r4, #0	@ 00097162 201c
.org 0x97164
	bl 0x1cff0	@ 00097164 85f744ff
.org 0x97168
	ldrb r0, [r5, #30]	@ 00097168 a87f
.org 0x9716a
	lsls r1, r0, #8	@ 0009716a 0102
.org 0x9716c
	adds r0, r5, #0	@ 0009716c 281c
.org 0x9716e
	adds r0, #112	@ 0009716e 7030
.org 0x97170
	ldrb r0, [r0, #0]	@ 00097170 0078
.org 0x97172
	orrs r1, r0	@ 00097172 0143
.org 0x97174
	ldr r0, [pc, #16]	@ 00097174 0448
.org 0x97176
	cmp r1, r0	@ 00097176 8142
.org 0x97178
	beq.n 0x971a0	@ 00097178 12d0
.org 0x9717a
	cmp r1, r0	@ 0009717a 8142
.org 0x9717c
	bgt.n 0x9718c	@ 0009717c 06dc
.org 0x9717e
	subs r0, #2	@ 0009717e 0238
.org 0x97180
	cmp r1, r0	@ 00097180 8142
.org 0x97182
	beq.n 0x971a0	@ 00097182 0dd0
.org 0x97184
	b.n 0x971ec	@ 00097184 32e0
.org 0x97186
	.byte 0x00	@ 00097186 data
.org 0x97187
	.byte 0x00	@ 00097187 data
.org 0x97188
	.byte 0x02,0x50,0x00,0x00	@ 00097188 data
.org 0x9718c
	ldr r0, [pc, #12]	@ 0009718c 0348
.org 0x9718e
	cmp r1, r0	@ 0009718e 8142
.org 0x97190
	beq.n 0x971ac	@ 00097190 0cd0
.org 0x97192
	adds r0, #1	@ 00097192 0130
.org 0x97194
	cmp r1, r0	@ 00097194 8142
.org 0x97196
	beq.n 0x971c0	@ 00097196 13d0
.org 0x97198
	b.n 0x971ec	@ 00097198 28e0
.org 0x9719a
	.byte 0x00	@ 0009719a data
.org 0x9719b
	.byte 0x00	@ 0009719b data
.org 0x9719c
	.byte 0x03,0x50,0x00,0x00	@ 0009719c data
.org 0x971a0
	movs r3, #0	@ 000971a0 0023
.org 0x971a2
	ldr r2, [pc, #4]	@ 000971a2 014a
.org 0x971a4
	b.n 0x971f6	@ 000971a4 27e0
.org 0x971a6
	.byte 0x00	@ 000971a6 data
.org 0x971a7
	.byte 0x00	@ 000971a7 data
.org 0x971a8
	.byte 0x00,0xf3,0xff,0xff	@ 000971a8 data
.org 0x971ac
	ldr r2, [pc, #12]	@ 000971ac 034a
.org 0x971ae
	adds r0, r5, #0	@ 000971ae 281c
.org 0x971b0
	adds r0, #113	@ 000971b0 7130
.org 0x971b2
	ldrb r0, [r0, #0]	@ 000971b2 0078
.org 0x971b4
	lsls r0, r0, #24	@ 000971b4 0006
.org 0x971b6
	asrs r0, r0, #24	@ 000971b6 0016
.org 0x971b8
	b.n 0x971ce	@ 000971b8 09e0
.org 0x971ba
	.byte 0x00	@ 000971ba data
.org 0x971bb
	.byte 0x00	@ 000971bb data
.org 0x971bc
	.byte 0x7c,0x09,0x86,0x08	@ 000971bc data
.org 0x971c0
	ldr r2, [pc, #32]	@ 000971c0 084a
.org 0x971c2
	adds r0, r5, #0	@ 000971c2 281c
.org 0x971c4
	adds r0, #113	@ 000971c4 7130
.org 0x971c6
	movs r1, #0	@ 000971c6 0021
.org 0x971c8
	ldrsb r1, [r0, r1]	@ 000971c8 4156
.org 0x971ca
	movs r0, #7	@ 000971ca 0720
.org 0x971cc
	subs r0, r0, r1	@ 000971cc 401a
.org 0x971ce
	lsls r0, r0, #2	@ 000971ce 8000
.org 0x971d0
	adds r1, r0, r2	@ 000971d0 8118
.org 0x971d2
	movs r6, #0	@ 000971d2 0026
.org 0x971d4
	ldrsh r3, [r1, r6]	@ 000971d4 8b5f
.org 0x971d6
	adds r2, #2	@ 000971d6 0232
.org 0x971d8
	adds r0, r0, r2	@ 000971d8 8018
.org 0x971da
	movs r1, #0	@ 000971da 0021
.org 0x971dc
	ldrsh r0, [r0, r1]	@ 000971dc 405e
.org 0x971de
	ldr r6, [pc, #8]	@ 000971de 024e
.org 0x971e0
	adds r2, r0, r6	@ 000971e0 8219
.org 0x971e2
	b.n 0x971f6	@ 000971e2 08e0
.org 0x971e4
	.byte 0x7c,0x09,0x86,0x08	@ 000971e4 data
.org 0x971e8
	.byte 0x00,0xf3,0xff,0xff	@ 000971e8 data
