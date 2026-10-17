@ FUN_0803a308  entry 0x0803a308  size 132
.thumb
.org 0x3a308
FUN_0803a308:
	push {r4, r5, lr}	@ 0003a308 30b5
.org 0x3a30a
	adds r4, r0, #0	@ 0003a30a 041c
.org 0x3a30c
	adds r2, r4, #0	@ 0003a30c 221c
.org 0x3a30e
	adds r2, #180	@ 0003a30e b432
.org 0x3a310
	movs r1, #150	@ 0003a310 9621
.org 0x3a312
	lsls r1, r1, #2	@ 0003a312 8900
.org 0x3a314
	adds r0, r4, r1	@ 0003a314 6018
.org 0x3a316
	ldr r0, [r0, #0]	@ 0003a316 0068
.org 0x3a318
	movs r1, #128	@ 0003a318 8021
.org 0x3a31a
	lsls r1, r1, #10	@ 0003a31a 8902
.org 0x3a31c
	ands r0, r1	@ 0003a31c 0840
.org 0x3a31e
	cmp r0, #0	@ 0003a31e 0028
.org 0x3a320
	beq.n 0x3a332	@ 0003a320 07d0
.org 0x3a322
	adds r0, r4, #0	@ 0003a322 201c
.org 0x3a324
	bl 0x40c98	@ 0003a324 06f0b8fc
.org 0x3a328
	adds r5, r0, #0	@ 0003a328 051c
.org 0x3a32a
	movs r0, #70	@ 0003a32a 4620
.org 0x3a32c
	bl 0x2b10	@ 0003a32c c8f7f0fb
.org 0x3a330
	b.n 0x3a392	@ 0003a330 2fe0
.org 0x3a332
	ldr r0, [pc, #28]	@ 0003a332 0748
.org 0x3a334
	ldrh r1, [r0, #0]	@ 0003a334 0188
.org 0x3a336
	movs r0, #128	@ 0003a336 8020
.org 0x3a338
	ands r0, r1	@ 0003a338 0840
.org 0x3a33a
	cmp r0, #0	@ 0003a33a 0028
.org 0x3a33c
	beq.n 0x3a358	@ 0003a33c 0cd0
.org 0x3a33e
	ldr r0, [pc, #20]	@ 0003a33e 0548
.org 0x3a340
	ldrb r1, [r2, #15]	@ 0003a340 d17b
.org 0x3a342
	lsls r1, r1, #2	@ 0003a342 8900
.org 0x3a344
	adds r1, r1, r0	@ 0003a344 0918
.org 0x3a346
	ldr r2, [r1, #0]	@ 0003a346 0a68
.org 0x3a348
	adds r0, r4, #0	@ 0003a348 201c
.org 0x3a34a
	movs r1, #1	@ 0003a34a 0121
.org 0x3a34c
	b.n 0x3a366	@ 0003a34c 0be0
.org 0x3a34e
	.byte 0x00	@ 0003a34e data
.org 0x3a34f
	.byte 0x00	@ 0003a34f data
.org 0x3a350
	.byte 0x60,0x07,0x00,0x02	@ 0003a350 data
.org 0x3a354
	.byte 0x98,0x36,0x85,0x08	@ 0003a354 data
.org 0x3a358
	ldr r0, [pc, #44]	@ 0003a358 0b48
.org 0x3a35a
	ldrb r1, [r2, #15]	@ 0003a35a d17b
.org 0x3a35c
	lsls r1, r1, #2	@ 0003a35c 8900
.org 0x3a35e
	adds r1, r1, r0	@ 0003a35e 0918
.org 0x3a360
	ldr r2, [r1, #0]	@ 0003a360 0a68
.org 0x3a362
	adds r0, r4, #0	@ 0003a362 201c
.org 0x3a364
	movs r1, #0	@ 0003a364 0021
.org 0x3a366
	bl 0x128f84	@ 0003a366 eef00dfe
.org 0x3a36a
	adds r5, r0, #0	@ 0003a36a 051c
.org 0x3a36c
	adds r0, r4, #0	@ 0003a36c 201c
.org 0x3a36e
	adds r0, #180	@ 0003a36e b430
.org 0x3a370
	ldrb r1, [r0, #15]	@ 0003a370 c17b
.org 0x3a372
	subs r0, r1, #7	@ 0003a372 c81f
.org 0x3a374
	lsls r0, r0, #24	@ 0003a374 0006
.org 0x3a376
	lsrs r0, r0, #24	@ 0003a376 000e
.org 0x3a378
	cmp r0, #1	@ 0003a378 0128
.org 0x3a37a
	bls.n 0x3a380	@ 0003a37a 01d9
.org 0x3a37c
	cmp r1, #5	@ 0003a37c 0529
.org 0x3a37e
	bne.n 0x3a38c	@ 0003a37e 05d1
.org 0x3a380
	movs r0, #27	@ 0003a380 1b20
.org 0x3a382
	bl 0x2b10	@ 0003a382 c8f7c5fb
.org 0x3a386
	b.n 0x3a392	@ 0003a386 04e0
.org 0x3a388
	.byte 0x98,0x36,0x85,0x08	@ 0003a388 data
