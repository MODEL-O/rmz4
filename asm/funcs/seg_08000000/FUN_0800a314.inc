@ FUN_0800a314  entry 0x0800a314  size 148
.thumb
.org 0xa314
FUN_0800a314:
	push {r4, lr}	@ 0000a314 10b5
.org 0xa316
	adds r4, r0, #0	@ 0000a316 041c
.org 0xa318
	ldrb r0, [r4, #14]	@ 0000a318 a07b
.org 0xa31a
	cmp r0, #1	@ 0000a31a 0128
.org 0xa31c
	beq.n 0xa34e	@ 0000a31c 17d0
.org 0xa31e
	cmp r0, #1	@ 0000a31e 0128
.org 0xa320
	bgt.n 0xa328	@ 0000a320 02dc
.org 0xa322
	cmp r0, #0	@ 0000a322 0028
.org 0xa324
	beq.n 0xa332	@ 0000a324 05d0
.org 0xa326
	b.n 0xa3a2	@ 0000a326 3ce0
.org 0xa328
	cmp r0, #2	@ 0000a328 0228
.org 0xa32a
	beq.n 0xa36a	@ 0000a32a 1ed0
.org 0xa32c
	cmp r0, #3	@ 0000a32c 0328
.org 0xa32e
	beq.n 0xa386	@ 0000a32e 2ad0
.org 0xa330
	b.n 0xa3a2	@ 0000a330 37e0
.org 0xa332
	ldr r0, [pc, #116]	@ 0000a332 1d48
.org 0xa334
	ldr r1, [pc, #116]	@ 0000a334 1d49
.org 0xa336
	adds r0, r0, r1	@ 0000a336 4018
.org 0xa338
	ldrb r0, [r0, #0]	@ 0000a338 0078
.org 0xa33a
	cmp r0, #0	@ 0000a33a 0028
.org 0xa33c
	beq.n 0xa3a2	@ 0000a33c 31d0
.org 0xa33e
	movs r0, #16	@ 0000a33e 1020
.org 0xa340
	movs r1, #1	@ 0000a340 0121
.org 0xa342
	movs r2, #52	@ 0000a342 3422
.org 0xa344
	bl 0x74c0	@ 0000a344 fdf7bcf8
.org 0xa348
	ldrb r0, [r4, #14]	@ 0000a348 a07b
.org 0xa34a
	adds r0, #1	@ 0000a34a 0130
.org 0xa34c
	strb r0, [r4, #14]	@ 0000a34c a073
.org 0xa34e
	ldr r0, [pc, #88]	@ 0000a34e 1648
.org 0xa350
	ldr r1, [pc, #88]	@ 0000a350 1649
.org 0xa352
	adds r0, r0, r1	@ 0000a352 4018
.org 0xa354
	ldrb r0, [r0, #0]	@ 0000a354 0078
.org 0xa356
	cmp r0, #1	@ 0000a356 0128
.org 0xa358
	beq.n 0xa3a2	@ 0000a358 23d0
.org 0xa35a
	movs r0, #16	@ 0000a35a 1020
.org 0xa35c
	movs r1, #1	@ 0000a35c 0121
.org 0xa35e
	movs r2, #53	@ 0000a35e 3522
.org 0xa360
	bl 0x74c0	@ 0000a360 fdf7aef8
.org 0xa364
	ldrb r0, [r4, #14]	@ 0000a364 a07b
.org 0xa366
	adds r0, #1	@ 0000a366 0130
.org 0xa368
	strb r0, [r4, #14]	@ 0000a368 a073
.org 0xa36a
	ldr r0, [pc, #60]	@ 0000a36a 0f48
.org 0xa36c
	ldr r1, [pc, #60]	@ 0000a36c 0f49
.org 0xa36e
	adds r0, r0, r1	@ 0000a36e 4018
.org 0xa370
	ldrb r0, [r0, #0]	@ 0000a370 0078
.org 0xa372
	cmp r0, #2	@ 0000a372 0228
.org 0xa374
	beq.n 0xa3a2	@ 0000a374 15d0
.org 0xa376
	movs r0, #16	@ 0000a376 1020
.org 0xa378
	movs r1, #1	@ 0000a378 0121
.org 0xa37a
	movs r2, #54	@ 0000a37a 3622
.org 0xa37c
	bl 0x74c0	@ 0000a37c fdf7a0f8
.org 0xa380
	ldrb r0, [r4, #14]	@ 0000a380 a07b
.org 0xa382
	adds r0, #1	@ 0000a382 0130
.org 0xa384
	strb r0, [r4, #14]	@ 0000a384 a073
.org 0xa386
	ldr r0, [pc, #32]	@ 0000a386 0848
.org 0xa388
	ldr r1, [pc, #32]	@ 0000a388 0849
.org 0xa38a
	adds r0, r0, r1	@ 0000a38a 4018
.org 0xa38c
	ldrb r0, [r0, #0]	@ 0000a38c 0078
.org 0xa38e
	cmp r0, #3	@ 0000a38e 0328
.org 0xa390
	beq.n 0xa3a2	@ 0000a390 07d0
.org 0xa392
	movs r0, #16	@ 0000a392 1020
.org 0xa394
	movs r1, #1	@ 0000a394 0121
.org 0xa396
	movs r2, #48	@ 0000a396 3022
.org 0xa398
	bl 0x74c0	@ 0000a398 fdf792f8
.org 0xa39c
	ldrb r0, [r4, #14]	@ 0000a39c a07b
.org 0xa39e
	adds r0, #1	@ 0000a39e 0130
.org 0xa3a0
	strb r0, [r4, #14]	@ 0000a3a0 a073
.org 0xa3a2
	pop {r4}	@ 0000a3a2 10bc
.org 0xa3a4
	pop {r0}	@ 0000a3a4 01bc
.org 0xa3a6
	bx r0	@ 0000a3a6 0047
