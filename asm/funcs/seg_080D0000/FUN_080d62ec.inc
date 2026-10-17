@ FUN_080d62ec  entry 0x080d62ec  size 240
.thumb
.org 0xd62ec
FUN_080d62ec:
	push {r4, r5, r6, r7, lr}	@ 000d62ec f0b5
.org 0xd62ee
	mov r7, r9	@ 000d62ee 4f46
.org 0xd62f0
	mov r6, r8	@ 000d62f0 4646
.org 0xd62f2
	push {r6, r7}	@ 000d62f2 c0b4
.org 0xd62f4
	adds r5, r0, #0	@ 000d62f4 051c
.org 0xd62f6
	ldr r0, [r5, #40]	@ 000d62f6 a86a
.org 0xd62f8
	mov r8, r0	@ 000d62f8 8046
.org 0xd62fa
	movs r1, #84	@ 000d62fa 5421
.org 0xd62fc
	add r1, r8	@ 000d62fc 4144
.org 0xd62fe
	mov r9, r1	@ 000d62fe 8946
.org 0xd6300
	ldrb r0, [r0, #10]	@ 000d6300 807a
.org 0xd6302
	lsls r0, r0, #24	@ 000d6302 0006
.org 0xd6304
	lsrs r4, r0, #28	@ 000d6304 040f
.org 0xd6306
	movs r1, #1	@ 000d6306 0121
.org 0xd6308
	ands r4, r1	@ 000d6308 0c40
.org 0xd630a
	lsrs r6, r0, #29	@ 000d630a 460f
.org 0xd630c
	ands r6, r1	@ 000d630c 0e40
.org 0xd630e
	ldrb r1, [r5, #10]	@ 000d630e a97a
.org 0xd6310
	movs r0, #1	@ 000d6310 0120
.org 0xd6312
	movs r7, #0	@ 000d6312 0027
.org 0xd6314
	orrs r0, r1	@ 000d6314 0843
.org 0xd6316
	strb r0, [r5, #10]	@ 000d6316 a872
.org 0xd6318
	adds r0, r5, #0	@ 000d6318 281c
.org 0xd631a
	bl 0x1cc9c	@ 000d631a 46f7bffc
.org 0xd631e
	ldr r1, [pc, #20]	@ 000d631e 0549
.org 0xd6320
	adds r0, r5, #0	@ 000d6320 281c
.org 0xd6322
	bl 0x1cf00	@ 000d6322 46f7edfd
.org 0xd6326
	cmp r4, #0	@ 000d6326 002c
.org 0xd6328
	beq.n 0xd6338	@ 000d6328 06d0
.org 0xd632a
	ldrb r0, [r5, #10]	@ 000d632a a87a
.org 0xd632c
	movs r1, #16	@ 000d632c 1021
.org 0xd632e
	orrs r0, r1	@ 000d632e 0843
.org 0xd6330
	b.n 0xd633e	@ 000d6330 05e0
.org 0xd6332
	.byte 0x00	@ 000d6332 data
.org 0xd6333
	.byte 0x00	@ 000d6333 data
.org 0xd6334
	.byte 0x06,0x16,0x00,0x00	@ 000d6334 data
.org 0xd6338
	ldrb r1, [r5, #10]	@ 000d6338 a97a
.org 0xd633a
	movs r0, #239	@ 000d633a ef20
.org 0xd633c
	ands r0, r1	@ 000d633c 0840
.org 0xd633e
	strb r0, [r5, #10]	@ 000d633e a872
.org 0xd6340
	adds r1, r4, #0	@ 000d6340 211c
.org 0xd6342
	adds r0, r5, #0	@ 000d6342 281c
.org 0xd6344
	adds r0, #76	@ 000d6344 4c30
.org 0xd6346
	strb r1, [r0, #0]	@ 000d6346 0170
.org 0xd6348
	adds r2, r5, #0	@ 000d6348 2a1c
.org 0xd634a
	adds r2, #74	@ 000d634a 4a32
.org 0xd634c
	lsls r1, r1, #4	@ 000d634c 0901
.org 0xd634e
	ldrb r3, [r2, #0]	@ 000d634e 1378
.org 0xd6350
	movs r0, #17	@ 000d6350 1120
.org 0xd6352
	negs r0, r0	@ 000d6352 4042
.org 0xd6354
	ands r0, r3	@ 000d6354 1840
.org 0xd6356
	orrs r0, r1	@ 000d6356 0843
.org 0xd6358
	strb r0, [r2, #0]	@ 000d6358 1070
.org 0xd635a
	adds r3, r6, #0	@ 000d635a 331c
.org 0xd635c
	adds r4, r2, #0	@ 000d635c 141c
.org 0xd635e
	cmp r3, #0	@ 000d635e 002b
.org 0xd6360
	beq.n 0xd636a	@ 000d6360 03d0
.org 0xd6362
	ldrb r0, [r5, #10]	@ 000d6362 a87a
.org 0xd6364
	movs r1, #32	@ 000d6364 2021
.org 0xd6366
	orrs r0, r1	@ 000d6366 0843
.org 0xd6368
	b.n 0xd6370	@ 000d6368 02e0
.org 0xd636a
	ldrb r1, [r5, #10]	@ 000d636a a97a
.org 0xd636c
	movs r0, #223	@ 000d636c df20
.org 0xd636e
	ands r0, r1	@ 000d636e 0840
.org 0xd6370
	strb r0, [r5, #10]	@ 000d6370 a872
.org 0xd6372
	movs r6, #1	@ 000d6372 0126
.org 0xd6374
	adds r1, r6, #0	@ 000d6374 311c
.org 0xd6376
	ands r1, r3	@ 000d6376 1940
.org 0xd6378
	adds r0, r5, #0	@ 000d6378 281c
.org 0xd637a
	adds r0, #77	@ 000d637a 4d30
.org 0xd637c
	strb r1, [r0, #0]	@ 000d637c 0170
.org 0xd637e
	lsls r1, r1, #5	@ 000d637e 4901
.org 0xd6380
	ldrb r2, [r4, #0]	@ 000d6380 2278
.org 0xd6382
	movs r0, #33	@ 000d6382 2120
.org 0xd6384
	negs r0, r0	@ 000d6384 4042
.org 0xd6386
	ands r0, r2	@ 000d6386 1040
.org 0xd6388
	orrs r0, r1	@ 000d6388 0843
.org 0xd638a
	strb r0, [r4, #0]	@ 000d638a 2070
.org 0xd638c
	mov r2, r9	@ 000d638c 4a46
.org 0xd638e
	ldr r0, [r2, #0]	@ 000d638e 1068
.org 0xd6390
	str r0, [r5, #84]	@ 000d6390 6865
.org 0xd6392
	ldr r0, [r2, #4]	@ 000d6392 5068
.org 0xd6394
	str r0, [r5, #88]	@ 000d6394 a865
.org 0xd6396
	mov r1, r8	@ 000d6396 4146
.org 0xd6398
	ldr r0, [r1, #92]	@ 000d6398 c86d
.org 0xd639a
	str r0, [r5, #92]	@ 000d639a e865
.org 0xd639c
	movs r1, #0	@ 000d639c 0021
.org 0xd639e
	mov r2, r8	@ 000d639e 4246
.org 0xd63a0
	ldrb r0, [r2, #15]	@ 000d63a0 d07b
.org 0xd63a2
	subs r0, #1	@ 000d63a2 0138
.org 0xd63a4
	lsls r0, r0, #24	@ 000d63a4 0006
.org 0xd63a6
	lsrs r0, r0, #24	@ 000d63a6 000e
.org 0xd63a8
	cmp r0, #1	@ 000d63a8 0128
.org 0xd63aa
	bhi.n 0xd63ae	@ 000d63aa 00d8
.org 0xd63ac
	movs r1, #1	@ 000d63ac 0121
.org 0xd63ae
	strb r1, [r5, #19]	@ 000d63ae e974
.org 0xd63b0
	movs r0, #0	@ 000d63b0 0020
.org 0xd63b2
	cmp r1, #0	@ 000d63b2 0029
.org 0xd63b4
	beq.n 0xd63ba	@ 000d63b4 01d0
.org 0xd63b6
	mov r1, r8	@ 000d63b6 4146
.org 0xd63b8
	ldr r0, [r1, #96]	@ 000d63b8 086e
.org 0xd63ba
	str r0, [r5, #96]	@ 000d63ba 2866
.org 0xd63bc
	movs r0, #22	@ 000d63bc 1620
.org 0xd63be
	strb r0, [r5, #18]	@ 000d63be a874
.org 0xd63c0
	ldr r1, [pc, #32]	@ 000d63c0 0849
.org 0xd63c2
	ldrb r0, [r5, #9]	@ 000d63c2 687a
.org 0xd63c4
	lsls r0, r0, #2	@ 000d63c4 8000
.org 0xd63c6
	adds r0, r0, r1	@ 000d63c6 4018
.org 0xd63c8
	str r6, [r5, #12]	@ 000d63c8 ee60
.org 0xd63ca
	ldr r0, [r0, #0]	@ 000d63ca 0068
.org 0xd63cc
	ldr r0, [r0, #4]	@ 000d63cc 4068
.org 0xd63ce
	str r0, [r5, #20]	@ 000d63ce 6861
.org 0xd63d0
	adds r0, r5, #0	@ 000d63d0 281c
.org 0xd63d2
	bl 0xd62b4	@ 000d63d2 fff76fff
.org 0xd63d6
	pop {r3, r4}	@ 000d63d6 18bc
.org 0xd63d8
	mov r8, r3	@ 000d63d8 9846
.org 0xd63da
	mov r9, r4	@ 000d63da a146
