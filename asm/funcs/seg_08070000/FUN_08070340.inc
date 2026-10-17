@ FUN_08070340  entry 0x08070340  size 202
.thumb
.org 0x70340
FUN_08070340:
	push {r4, r5, r6, lr}	@ 00070340 70b5
.org 0x70342
	adds r4, r0, #0	@ 00070342 041c
.org 0x70344
	adds r1, r4, #0	@ 00070344 211c
.org 0x70346
	adds r1, #185	@ 00070346 b931
.org 0x70348
	movs r0, #0	@ 00070348 0020
.org 0x7034a
	strb r0, [r1, #0]	@ 0007034a 0870
.org 0x7034c
	adds r5, r4, #0	@ 0007034c 251c
.org 0x7034e
	adds r5, #140	@ 0007034e 8c35
.org 0x70350
	ldr r0, [r5, #0]	@ 00070350 2868
.org 0x70352
	movs r6, #1	@ 00070352 0126
.org 0x70354
	ands r0, r6	@ 00070354 3040
.org 0x70356
	cmp r0, #0	@ 00070356 0028
.org 0x70358
	beq.n 0x70360	@ 00070358 02d0
.org 0x7035a
	movs r0, #70	@ 0007035a 4620
.org 0x7035c
	bl 0x6984	@ 0007035c 96f712fb
.org 0x70360
	movs r0, #122	@ 00070360 7a20
.org 0x70362
	bl 0x25d8	@ 00070362 92f739f9
.org 0x70366
	ldr r0, [r5, #0]	@ 00070366 2868
.org 0x70368
	movs r1, #128	@ 00070368 8021
.org 0x7036a
	lsls r1, r1, #2	@ 0007036a 8900
.org 0x7036c
	ands r0, r1	@ 0007036c 0840
.org 0x7036e
	cmp r0, #0	@ 0007036e 0028
.org 0x70370
	bne.n 0x7037e	@ 00070370 05d1
.org 0x70372
	adds r0, r4, #0	@ 00070372 201c
.org 0x70374
	adds r0, #164	@ 00070374 a430
.org 0x70376
	movs r1, #0	@ 00070376 0021
.org 0x70378
	ldrsh r0, [r0, r1]	@ 00070378 405e
.org 0x7037a
	cmp r0, #0	@ 0007037a 0028
.org 0x7037c
	bne.n 0x703ca	@ 0007037c 25d1
.org 0x7037e
	ldr r0, [pc, #52]	@ 0007037e 0d48
.org 0x70380
	ldrh r1, [r0, #8]	@ 00070380 0189
.org 0x70382
	movs r0, #8	@ 00070382 0820
.org 0x70384
	ands r0, r1	@ 00070384 0840
.org 0x70386
	lsls r0, r0, #16	@ 00070386 0004
.org 0x70388
	lsrs r2, r0, #16	@ 00070388 020c
.org 0x7038a
	cmp r2, #0	@ 0007038a 002a
.org 0x7038c
	bne.n 0x703ca	@ 0007038c 1dd1
.org 0x7038e
	ldr r1, [pc, #40]	@ 0007038e 0a49
.org 0x70390
	ldrb r0, [r4, #9]	@ 00070390 607a
.org 0x70392
	lsls r0, r0, #2	@ 00070392 8000
.org 0x70394
	adds r0, r0, r1	@ 00070394 4018
.org 0x70396
	movs r1, #2	@ 00070396 0221
.org 0x70398
	str r1, [r4, #12]	@ 00070398 e160
.org 0x7039a
	ldr r0, [r0, #0]	@ 0007039a 0068
.org 0x7039c
	ldr r0, [r0, #8]	@ 0007039c 8068
.org 0x7039e
	str r0, [r4, #20]	@ 0007039e 6061
.org 0x703a0
	ldr r1, [r5, #0]	@ 000703a0 2968
.org 0x703a2
	movs r0, #128	@ 000703a2 8020
.org 0x703a4
	lsls r0, r0, #9	@ 000703a4 4002
.org 0x703a6
	ands r1, r0	@ 000703a6 0140
.org 0x703a8
	cmp r1, #0	@ 000703a8 0029
.org 0x703aa
	beq.n 0x703bc	@ 000703aa 07d0
.org 0x703ac
	strb r6, [r4, #13]	@ 000703ac 6673
.org 0x703ae
	strb r2, [r4, #14]	@ 000703ae a273
.org 0x703b0
	strb r2, [r4, #15]	@ 000703b0 e273
.org 0x703b2
	b.n 0x703c2	@ 000703b2 06e0
.org 0x703b4
	.byte 0x10,0xe9,0x02,0x02	@ 000703b4 data
.org 0x703b8
	.byte 0x70,0x7d,0x85,0x08	@ 000703b8 data
.org 0x703bc
	strb r1, [r4, #13]	@ 000703bc 6173
.org 0x703be
	strb r1, [r4, #14]	@ 000703be a173
.org 0x703c0
	strb r1, [r4, #15]	@ 000703c0 e173
.org 0x703c2
	adds r0, r4, #0	@ 000703c2 201c
.org 0x703c4
	bl 0x732d4	@ 000703c4 02f086ff
.org 0x703c8
	b.n 0x7040c	@ 000703c8 20e0
.org 0x703ca
	adds r0, r4, #0	@ 000703ca 201c
.org 0x703cc
	adds r0, #140	@ 000703cc 8c30
.org 0x703ce
	ldr r0, [r0, #0]	@ 000703ce 0068
.org 0x703d0
	movs r1, #1	@ 000703d0 0121
.org 0x703d2
	ands r0, r1	@ 000703d2 0840
.org 0x703d4
	cmp r0, #0	@ 000703d4 0028
.org 0x703d6
	beq.n 0x703ea	@ 000703d6 08d0
.org 0x703d8
	ldr r0, [r4, #44]	@ 000703d8 e06a
.org 0x703da
	cmp r0, #0	@ 000703da 0028
.org 0x703dc
	bne.n 0x703f0	@ 000703dc 08d1
.org 0x703de
	ldr r2, [pc, #52]	@ 000703de 0d4a
.org 0x703e0
	movs r0, #23	@ 000703e0 1720
.org 0x703e2
	adds r1, r4, #0	@ 000703e2 211c
.org 0x703e4
	bl 0x2adac	@ 000703e4 baf7e2fc
.org 0x703e8
	str r0, [r4, #44]	@ 000703e8 e062
.org 0x703ea
	ldr r0, [r4, #44]	@ 000703ea e06a
.org 0x703ec
	cmp r0, #0	@ 000703ec 0028
.org 0x703ee
	beq.n 0x703fc	@ 000703ee 05d0
.org 0x703f0
	bl 0x2b3e4	@ 000703f0 baf7f8ff
.org 0x703f4
	cmp r0, #0	@ 000703f4 0028
.org 0x703f6
	beq.n 0x703fc	@ 000703f6 01d0
.org 0x703f8
	movs r0, #0	@ 000703f8 0020
.org 0x703fa
	str r0, [r4, #44]	@ 000703fa e062
.org 0x703fc
	ldr r0, [pc, #24]	@ 000703fc 0648
.org 0x703fe
	ldrb r1, [r4, #13]	@ 000703fe 617b
.org 0x70400
	lsls r1, r1, #2	@ 00070400 8900
.org 0x70402
	adds r1, r1, r0	@ 00070402 0918
.org 0x70404
	ldr r1, [r1, #0]	@ 00070404 0968
.org 0x70406
	adds r0, r4, #0	@ 00070406 201c
.org 0x70408
	bl 0x128f80	@ 00070408 b8f0bafd
