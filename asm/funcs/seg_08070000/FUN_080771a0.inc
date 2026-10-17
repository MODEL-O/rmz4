@ FUN_080771a0  entry 0x080771a0  size 210
.thumb
.org 0x771a0
FUN_080771a0:
	push {r4, r5, r6, lr}	@ 000771a0 70b5
.org 0x771a2
	adds r4, r0, #0	@ 000771a2 041c
.org 0x771a4
	adds r0, #140	@ 000771a4 8c30
.org 0x771a6
	ldr r0, [r0, #0]	@ 000771a6 0068
.org 0x771a8
	movs r5, #1	@ 000771a8 0125
.org 0x771aa
	ands r0, r5	@ 000771aa 2840
.org 0x771ac
	cmp r0, #0	@ 000771ac 0028
.org 0x771ae
	beq.n 0x771b6	@ 000771ae 02d0
.org 0x771b0
	movs r0, #62	@ 000771b0 3e20
.org 0x771b2
	bl 0x6984	@ 000771b2 8ff7e7fb
.org 0x771b6
	adds r6, r4, #0	@ 000771b6 261c
.org 0x771b8
	adds r6, #199	@ 000771b8 c736
.org 0x771ba
	ldrb r0, [r6, #0]	@ 000771ba 3078
.org 0x771bc
	cmp r0, #0	@ 000771bc 0028
.org 0x771be
	beq.n 0x771dc	@ 000771be 0dd0
.org 0x771c0
	adds r0, r4, #0	@ 000771c0 201c
.org 0x771c2
	adds r0, #204	@ 000771c2 cc30
.org 0x771c4
	ldr r0, [r0, #0]	@ 000771c4 0068
.org 0x771c6
	adds r0, #188	@ 000771c6 bc30
.org 0x771c8
	ldrb r5, [r0, #0]	@ 000771c8 0578
.org 0x771ca
	cmp r5, #0	@ 000771ca 002d
.org 0x771cc
	bne.n 0x771f2	@ 000771cc 11d1
.org 0x771ce
	ldr r0, [pc, #8]	@ 000771ce 0248
.org 0x771d0
	bl 0x2b5c	@ 000771d0 8bf7c4fc
.org 0x771d4
	b.n 0x771f0	@ 000771d4 0ce0
.org 0x771d6
	.byte 0x00	@ 000771d6 data
.org 0x771d7
	.byte 0x00	@ 000771d7 data
.org 0x771d8
	.byte 0x63,0x01,0x00,0x00	@ 000771d8 data
.org 0x771dc
	adds r0, r4, #0	@ 000771dc 201c
.org 0x771de
	adds r0, #204	@ 000771de cc30
.org 0x771e0
	ldr r0, [r0, #0]	@ 000771e0 0068
.org 0x771e2
	adds r0, #188	@ 000771e2 bc30
.org 0x771e4
	ldrb r0, [r0, #0]	@ 000771e4 0078
.org 0x771e6
	cmp r0, #0	@ 000771e6 0028
.org 0x771e8
	beq.n 0x771f2	@ 000771e8 03d0
.org 0x771ea
	ldr r0, [pc, #72]	@ 000771ea 1248
.org 0x771ec
	bl 0x2b10	@ 000771ec 8bf790fc
.org 0x771f0
	strb r5, [r6, #0]	@ 000771f0 3570
.org 0x771f2
	adds r0, r4, #0	@ 000771f2 201c
.org 0x771f4
	adds r0, #140	@ 000771f4 8c30
.org 0x771f6
	ldr r1, [r0, #0]	@ 000771f6 0168
.org 0x771f8
	movs r2, #128	@ 000771f8 8022
.org 0x771fa
	lsls r2, r2, #2	@ 000771fa 9200
.org 0x771fc
	ands r1, r2	@ 000771fc 1140
.org 0x771fe
	adds r2, r0, #0	@ 000771fe 021c
.org 0x77200
	cmp r1, #0	@ 00077200 0029
.org 0x77202
	bne.n 0x7720e	@ 00077202 04d1
.org 0x77204
	adds r0, #24	@ 00077204 1830
.org 0x77206
	movs r1, #0	@ 00077206 0021
.org 0x77208
	ldrsh r0, [r0, r1]	@ 00077208 405e
.org 0x7720a
	cmp r0, #0	@ 0007720a 0028
.org 0x7720c
	bne.n 0x77240	@ 0007720c 18d1
.org 0x7720e
	ldr r0, [pc, #40]	@ 0007720e 0a48
.org 0x77210
	ldrh r1, [r0, #8]	@ 00077210 0189
.org 0x77212
	movs r0, #8	@ 00077212 0820
.org 0x77214
	ands r0, r1	@ 00077214 0840
.org 0x77216
	cmp r0, #0	@ 00077216 0028
.org 0x77218
	bne.n 0x77240	@ 00077218 12d1
.org 0x7721a
	ldr r1, [pc, #32]	@ 0007721a 0849
.org 0x7721c
	ldrb r0, [r4, #9]	@ 0007721c 607a
.org 0x7721e
	lsls r0, r0, #2	@ 0007721e 8000
.org 0x77220
	adds r0, r0, r1	@ 00077220 4018
.org 0x77222
	movs r1, #2	@ 00077222 0221
.org 0x77224
	str r1, [r4, #12]	@ 00077224 e160
.org 0x77226
	ldr r0, [r0, #0]	@ 00077226 0068
.org 0x77228
	ldr r0, [r0, #8]	@ 00077228 8068
.org 0x7722a
	str r0, [r4, #20]	@ 0007722a 6061
.org 0x7722c
	adds r0, r4, #0	@ 0007722c 201c
.org 0x7722e
	bl 0x78dc4	@ 0007722e 01f0c9fd
.org 0x77232
	b.n 0x7727e	@ 00077232 24e0
.org 0x77234
	.byte 0x63,0x01,0x00,0x00	@ 00077234 data
.org 0x77238
	.byte 0x10,0xe9,0x02,0x02	@ 00077238 data
.org 0x7723c
	.byte 0x70,0x7d,0x85,0x08	@ 0007723c data
.org 0x77240
	ldr r0, [r2, #0]	@ 00077240 1068
.org 0x77242
	movs r1, #1	@ 00077242 0121
.org 0x77244
	ands r0, r1	@ 00077244 0840
.org 0x77246
	cmp r0, #0	@ 00077246 0028
.org 0x77248
	beq.n 0x7725c	@ 00077248 08d0
.org 0x7724a
	ldr r0, [r4, #44]	@ 0007724a e06a
.org 0x7724c
	cmp r0, #0	@ 0007724c 0028
.org 0x7724e
	bne.n 0x77262	@ 0007724e 08d1
.org 0x77250
	ldr r2, [pc, #48]	@ 00077250 0c4a
.org 0x77252
	movs r0, #26	@ 00077252 1a20
.org 0x77254
	adds r1, r4, #0	@ 00077254 211c
.org 0x77256
	bl 0x2adac	@ 00077256 b3f7a9fd
.org 0x7725a
	str r0, [r4, #44]	@ 0007725a e062
.org 0x7725c
	ldr r0, [r4, #44]	@ 0007725c e06a
.org 0x7725e
	cmp r0, #0	@ 0007725e 0028
.org 0x77260
	beq.n 0x7726e	@ 00077260 05d0
.org 0x77262
	bl 0x2b3e4	@ 00077262 b4f7bff8
.org 0x77266
	cmp r0, #0	@ 00077266 0028
.org 0x77268
	beq.n 0x7726e	@ 00077268 01d0
.org 0x7726a
	movs r0, #0	@ 0007726a 0020
.org 0x7726c
	str r0, [r4, #44]	@ 0007726c e062
.org 0x7726e
	ldr r0, [pc, #24]	@ 0007726e 0648
.org 0x77270
	ldrb r1, [r4, #13]	@ 00077270 617b
