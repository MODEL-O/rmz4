@ FUN_08055398  entry 0x08055398  size 214
.thumb
.org 0x55398
FUN_08055398:
	push {r4, r5, r6, lr}	@ 00055398 70b5
.org 0x5539a
	adds r4, r0, #0	@ 0005539a 041c
.org 0x5539c
	adds r5, r4, #0	@ 0005539c 251c
.org 0x5539e
	adds r5, #140	@ 0005539e 8c35
.org 0x553a0
	ldr r0, [r5, #0]	@ 000553a0 2868
.org 0x553a2
	movs r6, #1	@ 000553a2 0126
.org 0x553a4
	ands r0, r6	@ 000553a4 3040
.org 0x553a6
	cmp r0, #0	@ 000553a6 0028
.org 0x553a8
	beq.n 0x553b0	@ 000553a8 02d0
.org 0x553aa
	movs r0, #72	@ 000553aa 4820
.org 0x553ac
	bl 0x6984	@ 000553ac b1f7eafa
.org 0x553b0
	ldr r0, [r5, #0]	@ 000553b0 2868
.org 0x553b2
	movs r1, #128	@ 000553b2 8021
.org 0x553b4
	lsls r1, r1, #2	@ 000553b4 8900
.org 0x553b6
	ands r0, r1	@ 000553b6 0840
.org 0x553b8
	cmp r0, #0	@ 000553b8 0028
.org 0x553ba
	bne.n 0x553c8	@ 000553ba 05d1
.org 0x553bc
	adds r0, r4, #0	@ 000553bc 201c
.org 0x553be
	adds r0, #164	@ 000553be a430
.org 0x553c0
	movs r1, #0	@ 000553c0 0021
.org 0x553c2
	ldrsh r0, [r0, r1]	@ 000553c2 405e
.org 0x553c4
	cmp r0, #0	@ 000553c4 0028
.org 0x553c6
	bne.n 0x55416	@ 000553c6 26d1
.org 0x553c8
	ldr r0, [pc, #52]	@ 000553c8 0d48
.org 0x553ca
	ldrh r1, [r0, #8]	@ 000553ca 0189
.org 0x553cc
	movs r0, #8	@ 000553cc 0820
.org 0x553ce
	ands r0, r1	@ 000553ce 0840
.org 0x553d0
	lsls r0, r0, #16	@ 000553d0 0004
.org 0x553d2
	lsrs r2, r0, #16	@ 000553d2 020c
.org 0x553d4
	cmp r2, #0	@ 000553d4 002a
.org 0x553d6
	bne.n 0x55416	@ 000553d6 1ed1
.org 0x553d8
	ldr r1, [pc, #40]	@ 000553d8 0a49
.org 0x553da
	ldrb r0, [r4, #9]	@ 000553da 607a
.org 0x553dc
	lsls r0, r0, #2	@ 000553dc 8000
.org 0x553de
	adds r0, r0, r1	@ 000553de 4018
.org 0x553e0
	movs r1, #2	@ 000553e0 0221
.org 0x553e2
	str r1, [r4, #12]	@ 000553e2 e160
.org 0x553e4
	ldr r0, [r0, #0]	@ 000553e4 0068
.org 0x553e6
	ldr r0, [r0, #8]	@ 000553e6 8068
.org 0x553e8
	str r0, [r4, #20]	@ 000553e8 6061
.org 0x553ea
	ldr r1, [r5, #0]	@ 000553ea 2968
.org 0x553ec
	movs r0, #128	@ 000553ec 8020
.org 0x553ee
	lsls r0, r0, #9	@ 000553ee 4002
.org 0x553f0
	ands r1, r0	@ 000553f0 0140
.org 0x553f2
	cmp r1, #0	@ 000553f2 0029
.org 0x553f4
	beq.n 0x55408	@ 000553f4 08d0
.org 0x553f6
	strb r6, [r4, #13]	@ 000553f6 6673
.org 0x553f8
	strb r2, [r4, #14]	@ 000553f8 a273
.org 0x553fa
	strb r2, [r4, #15]	@ 000553fa e273
.org 0x553fc
	b.n 0x5540e	@ 000553fc 07e0
.org 0x553fe
	.byte 0x00	@ 000553fe data
.org 0x553ff
	.byte 0x00	@ 000553ff data
.org 0x55400
	.byte 0x10,0xe9,0x02,0x02	@ 00055400 data
.org 0x55404
	.byte 0x70,0x7d,0x85,0x08	@ 00055404 data
.org 0x55408
	strb r1, [r4, #13]	@ 00055408 6173
.org 0x5540a
	strb r1, [r4, #14]	@ 0005540a a173
.org 0x5540c
	strb r1, [r4, #15]	@ 0005540c e173
.org 0x5540e
	adds r0, r4, #0	@ 0005540e 201c
.org 0x55410
	bl 0x591dc	@ 00055410 03f0e4fe
.org 0x55414
	b.n 0x554a8	@ 00055414 48e0
.org 0x55416
	adds r0, r4, #0	@ 00055416 201c
.org 0x55418
	adds r0, #140	@ 00055418 8c30
.org 0x5541a
	ldr r0, [r0, #0]	@ 0005541a 0068
.org 0x5541c
	movs r1, #1	@ 0005541c 0121
.org 0x5541e
	ands r0, r1	@ 0005541e 0840
.org 0x55420
	cmp r0, #0	@ 00055420 0028
.org 0x55422
	beq.n 0x55480	@ 00055422 2dd0
.org 0x55424
	ldr r0, [r4, #44]	@ 00055424 e06a
.org 0x55426
	cmp r0, #0	@ 00055426 0028
.org 0x55428
	bne.n 0x55486	@ 00055428 2dd1
.org 0x5542a
	ldr r2, [pc, #32]	@ 0005542a 084a
.org 0x5542c
	movs r0, #10	@ 0005542c 0a20
.org 0x5542e
	adds r1, r4, #0	@ 0005542e 211c
.org 0x55430
	bl 0x2adac	@ 00055430 d5f7bcfc
.org 0x55434
	str r0, [r4, #44]	@ 00055434 e062
.org 0x55436
	cmp r0, #0	@ 00055436 0028
.org 0x55438
	beq.n 0x55492	@ 00055438 2bd0
.org 0x5543a
	ldrb r0, [r4, #13]	@ 0005543a 607b
.org 0x5543c
	cmp r0, #6	@ 0005543c 0628
.org 0x5543e
	bhi.n 0x55480	@ 0005543e 1fd8
.org 0x55440
	lsls r0, r0, #2	@ 00055440 8000
.org 0x55442
	ldr r1, [pc, #12]	@ 00055442 0349
.org 0x55444
	adds r0, r0, r1	@ 00055444 4018
.org 0x55446
	ldr r0, [r0, #0]	@ 00055446 0068
.org 0x55448
	mov pc, r0	@ 00055448 8746
.org 0x5544a
	.byte 0x00	@ 0005544a data
.org 0x5544b
	.byte 0x00	@ 0005544b data
.org 0x5544c
	.byte 0xec,0x87,0x85,0x08	@ 0005544c data
.org 0x55450
	.byte 0x54,0x54,0x05,0x08	@ 00055450 data
.org 0x55454
	.byte 0x76,0x54,0x05,0x08	@ 00055454 data
.org 0x55458
	.byte 0x80,0x54,0x05,0x08	@ 00055458 data
.org 0x5545c
	.byte 0x76,0x54,0x05,0x08	@ 0005545c data
.org 0x55460
	.byte 0x76,0x54,0x05,0x08	@ 00055460 data
.org 0x55464
	.byte 0x76,0x54,0x05,0x08	@ 00055464 data
.org 0x55468
	.byte 0x70,0x54,0x05,0x08	@ 00055468 data
.org 0x5546c
	.byte 0x76,0x54,0x05,0x08	@ 0005546c data
