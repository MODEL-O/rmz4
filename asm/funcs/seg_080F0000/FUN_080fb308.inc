@ FUN_080fb308  entry 0x080fb308  size 130
.thumb
.org 0xfb308
FUN_080fb308:
	push {r4, r5, lr}	@ 000fb308 30b5
.org 0xfb30a
	adds r5, r0, #0	@ 000fb30a 051c
.org 0xfb30c
	adds r0, #181	@ 000fb30c b530
.org 0xfb30e
	ldrb r0, [r0, #0]	@ 000fb30e 0078
.org 0xfb310
	cmp r0, #0	@ 000fb310 0028
.org 0xfb312
	bne.n 0xfb33a	@ 000fb312 12d1
.org 0xfb314
	adds r0, r5, #0	@ 000fb314 281c
.org 0xfb316
	adds r0, #140	@ 000fb316 8c30
.org 0xfb318
	ldr r0, [r0, #0]	@ 000fb318 0068
.org 0xfb31a
	movs r1, #128	@ 000fb31a 8021
.org 0xfb31c
	lsls r1, r1, #9	@ 000fb31c 4902
.org 0xfb31e
	ands r0, r1	@ 000fb31e 0840
.org 0xfb320
	cmp r0, #0	@ 000fb320 0028
.org 0xfb322
	beq.n 0xfb32c	@ 000fb322 03d0
.org 0xfb324
	adds r0, r5, #0	@ 000fb324 281c
.org 0xfb326
	adds r0, #100	@ 000fb326 6430
.org 0xfb328
	movs r1, #0	@ 000fb328 0021
.org 0xfb32a
	b.n 0xfb332	@ 000fb32a 02e0
.org 0xfb32c
	adds r0, r5, #0	@ 000fb32c 281c
.org 0xfb32e
	adds r0, #100	@ 000fb32e 6430
.org 0xfb330
	movs r1, #1	@ 000fb330 0121
.org 0xfb332
	movs r2, #0	@ 000fb332 0022
.org 0xfb334
	bl 0xe3110	@ 000fb334 e7f7ecfe
.org 0xfb338
	b.n 0xfb346	@ 000fb338 05e0
.org 0xfb33a
	adds r0, r5, #0	@ 000fb33a 281c
.org 0xfb33c
	adds r0, #100	@ 000fb33c 6430
.org 0xfb33e
	movs r1, #2	@ 000fb33e 0221
.org 0xfb340
	movs r2, #0	@ 000fb340 0022
.org 0xfb342
	bl 0xe3110	@ 000fb342 e7f7e5fe
.org 0xfb346
	ldrb r0, [r5, #11]	@ 000fb346 e87a
.org 0xfb348
	movs r1, #247	@ 000fb348 f721
.org 0xfb34a
	ands r1, r0	@ 000fb34a 0140
.org 0xfb34c
	strb r1, [r5, #11]	@ 000fb34c e972
.org 0xfb34e
	ldr r2, [pc, #60]	@ 000fb34e 0f4a
.org 0xfb350
	ldrh r1, [r2, #12]	@ 000fb350 9189
.org 0xfb352
	ldr r0, [pc, #60]	@ 000fb352 0f48
.org 0xfb354
	cmp r1, r0	@ 000fb354 8142
.org 0xfb356
	bhi.n 0xfb35c	@ 000fb356 01d8
.org 0xfb358
	adds r0, r1, #1	@ 000fb358 481c
.org 0xfb35a
	strh r0, [r2, #12]	@ 000fb35a 9081
.org 0xfb35c
	adds r4, r5, #0	@ 000fb35c 2c1c
.org 0xfb35e
	adds r4, #84	@ 000fb35e 5434
.org 0xfb360
	adds r0, r5, #0	@ 000fb360 281c
.org 0xfb362
	adds r1, r4, #0	@ 000fb362 211c
.org 0xfb364
	bl 0x2abe0	@ 000fb364 2ff73cfc
.org 0xfb368
	movs r0, #2	@ 000fb368 0220
.org 0xfb36a
	movs r1, #31	@ 000fb36a 1f21
.org 0xfb36c
	adds r2, r4, #0	@ 000fb36c 221c
.org 0xfb36e
	bl 0x2ab88	@ 000fb36e 2ff70bfc
.org 0xfb372
	ldr r1, [pc, #32]	@ 000fb372 0849
.org 0xfb374
	ldrb r0, [r5, #9]	@ 000fb374 687a
.org 0xfb376
	lsls r0, r0, #2	@ 000fb376 8000
.org 0xfb378
	adds r0, r0, r1	@ 000fb378 4018
.org 0xfb37a
	movs r1, #4	@ 000fb37a 0421
.org 0xfb37c
	str r1, [r5, #12]	@ 000fb37c e960
.org 0xfb37e
	ldr r0, [r0, #0]	@ 000fb37e 0068
.org 0xfb380
	ldr r0, [r0, #16]	@ 000fb380 0069
.org 0xfb382
	str r0, [r5, #20]	@ 000fb382 6861
.org 0xfb384
	pop {r4, r5}	@ 000fb384 30bc
.org 0xfb386
	pop {r0}	@ 000fb386 01bc
.org 0xfb388
	bx r0	@ 000fb388 0047
