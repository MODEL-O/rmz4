@ FUN_080fc328  entry 0x080fc328  size 94
.thumb
.org 0xfc328
FUN_080fc328:
	push {r4, r5, r6, lr}	@ 000fc328 70b5
.org 0xfc32a
	adds r4, r0, #0	@ 000fc32a 041c
.org 0xfc32c
	lsls r1, r1, #24	@ 000fc32c 0906
.org 0xfc32e
	lsrs r6, r1, #24	@ 000fc32e 0e0e
.org 0xfc330
	lsls r2, r2, #24	@ 000fc330 1206
.org 0xfc332
	lsrs r5, r2, #24	@ 000fc332 150e
.org 0xfc334
	ldr r0, [pc, #80]	@ 000fc334 1448
.org 0xfc336
	ldr r0, [r0, #0]	@ 000fc336 0068
.org 0xfc338
	bl 0x5500	@ 000fc338 09f7e2f8
.org 0xfc33c
	adds r3, r0, #0	@ 000fc33c 031c
.org 0xfc33e
	cmp r3, #0	@ 000fc33e 002b
.org 0xfc340
	beq.n 0xfc37e	@ 000fc340 1dd0
.org 0xfc342
	adds r1, r3, #0	@ 000fc342 191c
.org 0xfc344
	adds r1, #37	@ 000fc344 2531
.org 0xfc346
	movs r2, #0	@ 000fc346 0022
.org 0xfc348
	movs r0, #30	@ 000fc348 1e20
.org 0xfc34a
	strb r0, [r1, #0]	@ 000fc34a 0870
.org 0xfc34c
	ldr r0, [pc, #60]	@ 000fc34c 0f48
.org 0xfc34e
	movs r1, #43	@ 000fc34e 2b21
.org 0xfc350
	strb r1, [r3, #9]	@ 000fc350 5972
.org 0xfc352
	adds r0, #172	@ 000fc352 ac30
.org 0xfc354
	ldr r0, [r0, #0]	@ 000fc354 0068
.org 0xfc356
	ldr r0, [r0, #0]	@ 000fc356 0068
.org 0xfc358
	str r0, [r3, #20]	@ 000fc358 5861
.org 0xfc35a
	movs r0, #0	@ 000fc35a 0020
.org 0xfc35c
	strh r2, [r3, #32]	@ 000fc35c 1a84
.org 0xfc35e
	adds r1, r3, #0	@ 000fc35e 191c
.org 0xfc360
	adds r1, #34	@ 000fc360 2231
.org 0xfc362
	strb r0, [r1, #0]	@ 000fc362 0870
.org 0xfc364
	ldrb r1, [r3, #11]	@ 000fc364 d97a
.org 0xfc366
	movs r0, #16	@ 000fc366 1020
.org 0xfc368
	orrs r0, r1	@ 000fc368 0843
.org 0xfc36a
	strb r0, [r3, #11]	@ 000fc36a d872
.org 0xfc36c
	ldrb r0, [r3, #28]	@ 000fc36c 187f
.org 0xfc36e
	strb r0, [r3, #29]	@ 000fc36e 5877
.org 0xfc370
	str r4, [r3, #40]	@ 000fc370 9c62
.org 0xfc372
	ldr r0, [r4, #84]	@ 000fc372 606d
.org 0xfc374
	ldr r1, [r4, #88]	@ 000fc374 a16d
.org 0xfc376
	str r0, [r3, #84]	@ 000fc376 5865
.org 0xfc378
	str r1, [r3, #88]	@ 000fc378 9965
.org 0xfc37a
	strb r6, [r3, #16]	@ 000fc37a 1e74
.org 0xfc37c
	strb r5, [r3, #17]	@ 000fc37c 5d74
.org 0xfc37e
	adds r0, r3, #0	@ 000fc37e 181c
.org 0xfc380
	pop {r4, r5, r6}	@ 000fc380 70bc
.org 0xfc382
	pop {r1}	@ 000fc382 02bc
.org 0xfc384
	bx r1	@ 000fc384 0847
