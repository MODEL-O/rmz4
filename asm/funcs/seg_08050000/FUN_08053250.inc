@ FUN_08053250  entry 0x08053250  size 178
.thumb
.org 0x53250
FUN_08053250:
	push {r4, r5, lr}	@ 00053250 30b5
.org 0x53252
	adds r4, r0, #0	@ 00053252 041c
.org 0x53254
	adds r5, r4, #0	@ 00053254 251c
.org 0x53256
	adds r5, #140	@ 00053256 8c35
.org 0x53258
	ldr r0, [r5, #0]	@ 00053258 2868
.org 0x5325a
	movs r1, #1	@ 0005325a 0121
.org 0x5325c
	ands r0, r1	@ 0005325c 0840
.org 0x5325e
	cmp r0, #0	@ 0005325e 0028
.org 0x53260
	beq.n 0x53268	@ 00053260 02d0
.org 0x53262
	movs r0, #63	@ 00053262 3f20
.org 0x53264
	bl 0x6984	@ 00053264 b3f78efb
.org 0x53268
	ldr r0, [r5, #0]	@ 00053268 2868
.org 0x5326a
	movs r1, #128	@ 0005326a 8021
.org 0x5326c
	lsls r1, r1, #2	@ 0005326c 8900
.org 0x5326e
	ands r0, r1	@ 0005326e 0840
.org 0x53270
	cmp r0, #0	@ 00053270 0028
.org 0x53272
	bne.n 0x53280	@ 00053272 05d1
.org 0x53274
	adds r0, r4, #0	@ 00053274 201c
.org 0x53276
	adds r0, #164	@ 00053276 a430
.org 0x53278
	movs r1, #0	@ 00053278 0021
.org 0x5327a
	ldrsh r0, [r0, r1]	@ 0005327a 405e
.org 0x5327c
	cmp r0, #0	@ 0005327c 0028
.org 0x5327e
	bne.n 0x532b0	@ 0005327e 17d1
.org 0x53280
	ldr r0, [pc, #36]	@ 00053280 0948
.org 0x53282
	ldrh r1, [r0, #8]	@ 00053282 0189
.org 0x53284
	movs r0, #8	@ 00053284 0820
.org 0x53286
	ands r0, r1	@ 00053286 0840
.org 0x53288
	cmp r0, #0	@ 00053288 0028
.org 0x5328a
	bne.n 0x532b0	@ 0005328a 11d1
.org 0x5328c
	ldr r1, [pc, #28]	@ 0005328c 0749
.org 0x5328e
	ldrb r0, [r4, #9]	@ 0005328e 607a
.org 0x53290
	lsls r0, r0, #2	@ 00053290 8000
.org 0x53292
	adds r0, r0, r1	@ 00053292 4018
.org 0x53294
	movs r1, #2	@ 00053294 0221
.org 0x53296
	str r1, [r4, #12]	@ 00053296 e160
.org 0x53298
	ldr r0, [r0, #0]	@ 00053298 0068
.org 0x5329a
	ldr r0, [r0, #8]	@ 0005329a 8068
.org 0x5329c
	str r0, [r4, #20]	@ 0005329c 6061
.org 0x5329e
	adds r0, r4, #0	@ 0005329e 201c
.org 0x532a0
	bl 0x5388c	@ 000532a0 00f0f4fa
.org 0x532a4
	b.n 0x53306	@ 000532a4 2fe0
.org 0x532a6
	.byte 0x00	@ 000532a6 data
.org 0x532a7
	.byte 0x00	@ 000532a7 data
.org 0x532a8
	.byte 0x10,0xe9,0x02,0x02	@ 000532a8 data
.org 0x532ac
	.byte 0x70,0x7d,0x85,0x08	@ 000532ac data
.org 0x532b0
	adds r1, r4, #0	@ 000532b0 211c
.org 0x532b2
	adds r1, #200	@ 000532b2 c831
.org 0x532b4
	ldr r0, [r1, #0]	@ 000532b4 0868
.org 0x532b6
	cmp r0, #0	@ 000532b6 0028
.org 0x532b8
	beq.n 0x532c4	@ 000532b8 04d0
.org 0x532ba
	ldrb r0, [r0, #12]	@ 000532ba 007b
.org 0x532bc
	cmp r0, #1	@ 000532bc 0128
.org 0x532be
	bls.n 0x532c4	@ 000532be 01d9
.org 0x532c0
	movs r0, #0	@ 000532c0 0020
.org 0x532c2
	str r0, [r1, #0]	@ 000532c2 0860
.org 0x532c4
	adds r0, r4, #0	@ 000532c4 201c
.org 0x532c6
	adds r0, #140	@ 000532c6 8c30
.org 0x532c8
	ldr r0, [r0, #0]	@ 000532c8 0068
.org 0x532ca
	movs r1, #1	@ 000532ca 0121
.org 0x532cc
	ands r0, r1	@ 000532cc 0840
.org 0x532ce
	cmp r0, #0	@ 000532ce 0028
.org 0x532d0
	beq.n 0x532e4	@ 000532d0 08d0
.org 0x532d2
	ldr r0, [r4, #44]	@ 000532d2 e06a
.org 0x532d4
	cmp r0, #0	@ 000532d4 0028
.org 0x532d6
	bne.n 0x532ea	@ 000532d6 08d1
.org 0x532d8
	ldr r2, [pc, #48]	@ 000532d8 0c4a
.org 0x532da
	movs r0, #8	@ 000532da 0820
.org 0x532dc
	adds r1, r4, #0	@ 000532dc 211c
.org 0x532de
	bl 0x2adac	@ 000532de d7f765fd
.org 0x532e2
	str r0, [r4, #44]	@ 000532e2 e062
.org 0x532e4
	ldr r0, [r4, #44]	@ 000532e4 e06a
.org 0x532e6
	cmp r0, #0	@ 000532e6 0028
.org 0x532e8
	beq.n 0x532f6	@ 000532e8 05d0
.org 0x532ea
	bl 0x2b3e4	@ 000532ea d8f77bf8
.org 0x532ee
	cmp r0, #0	@ 000532ee 0028
.org 0x532f0
	beq.n 0x532f6	@ 000532f0 01d0
.org 0x532f2
	movs r0, #0	@ 000532f2 0020
.org 0x532f4
	str r0, [r4, #44]	@ 000532f4 e062
.org 0x532f6
	ldr r0, [pc, #24]	@ 000532f6 0648
.org 0x532f8
	ldrb r1, [r4, #13]	@ 000532f8 617b
.org 0x532fa
	lsls r1, r1, #2	@ 000532fa 8900
.org 0x532fc
	adds r1, r1, r0	@ 000532fc 0918
.org 0x532fe
	ldr r1, [r1, #0]	@ 000532fe 0968
.org 0x53300
	adds r0, r4, #0	@ 00053300 201c
