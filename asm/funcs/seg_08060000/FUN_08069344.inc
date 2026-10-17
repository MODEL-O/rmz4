@ FUN_08069344  entry 0x08069344  size 138
.thumb
.org 0x69344
FUN_08069344:
	push {r4, r5, r6, r7, lr}	@ 00069344 f0b5
.org 0x69346
	mov r7, r8	@ 00069346 4746
.org 0x69348
	push {r7}	@ 00069348 80b4
.org 0x6934a
	adds r5, r0, #0	@ 0006934a 051c
.org 0x6934c
	adds r0, #180	@ 0006934c b430
.org 0x6934e
	ldr r0, [r0, #0]	@ 0006934e 0068
.org 0x69350
	mov r8, r0	@ 00069350 8046
.org 0x69352
	adds r0, r5, #0	@ 00069352 281c
.org 0x69354
	adds r0, #184	@ 00069354 b830
.org 0x69356
	ldr r7, [r0, #0]	@ 00069356 0768
.org 0x69358
	adds r0, #4	@ 00069358 0430
.org 0x6935a
	ldr r6, [r0, #0]	@ 0006935a 0668
.org 0x6935c
	adds r0, #4	@ 0006935c 0430
.org 0x6935e
	ldr r2, [r0, #0]	@ 0006935e 0268
.org 0x69360
	ldrb r0, [r5, #15]	@ 00069360 e87b
.org 0x69362
	cmp r0, #0	@ 00069362 0028
.org 0x69364
	bne.n 0x69396	@ 00069364 17d1
.org 0x69366
	ldr r0, [r6, #84]	@ 00069366 706d
.org 0x69368
	ldr r1, [r6, #88]	@ 00069368 b16d
.org 0x6936a
	str r0, [r2, #84]	@ 0006936a 5065
.org 0x6936c
	str r1, [r2, #88]	@ 0006936c 9165
.org 0x6936e
	ldrb r1, [r2, #10]	@ 0006936e 917a
.org 0x69370
	movs r0, #254	@ 00069370 fe20
.org 0x69372
	ands r0, r1	@ 00069372 0840
.org 0x69374
	strb r0, [r2, #10]	@ 00069374 9072
.org 0x69376
	ldr r4, [pc, #88]	@ 00069376 164c
.org 0x69378
	ldrh r1, [r4, #0]	@ 00069378 2188
.org 0x6937a
	mov r0, r8	@ 0006937a 4046
.org 0x6937c
	bl 0x1cf00	@ 0006937c b3f7c0fd
.org 0x69380
	ldrh r1, [r4, #16]	@ 00069380 218a
.org 0x69382
	adds r0, r7, #0	@ 00069382 381c
.org 0x69384
	bl 0x1cf00	@ 00069384 b3f7bcfd
.org 0x69388
	ldrh r1, [r4, #32]	@ 00069388 218c
.org 0x6938a
	adds r0, r6, #0	@ 0006938a 301c
.org 0x6938c
	bl 0x1cf00	@ 0006938c b3f7b8fd
.org 0x69390
	ldrb r0, [r5, #15]	@ 00069390 e87b
.org 0x69392
	adds r0, #1	@ 00069392 0130
.org 0x69394
	strb r0, [r5, #15]	@ 00069394 e873
.org 0x69396
	mov r0, r8	@ 00069396 4046
.org 0x69398
	bl 0x1cff0	@ 00069398 b3f72afe
.org 0x6939c
	adds r0, r7, #0	@ 0006939c 381c
.org 0x6939e
	bl 0x1cff0	@ 0006939e b3f727fe
.org 0x693a2
	adds r0, r6, #0	@ 000693a2 301c
.org 0x693a4
	bl 0x1cff0	@ 000693a4 b3f724fe
.org 0x693a8
	adds r0, r7, #0	@ 000693a8 381c
.org 0x693aa
	adds r0, #115	@ 000693aa 7330
.org 0x693ac
	ldrb r0, [r0, #0]	@ 000693ac 0078
.org 0x693ae
	cmp r0, #3	@ 000693ae 0328
.org 0x693b0
	bne.n 0x693c4	@ 000693b0 08d1
.org 0x693b2
	adds r0, r6, #0	@ 000693b2 301c
.org 0x693b4
	adds r0, #115	@ 000693b4 7330
.org 0x693b6
	ldrb r0, [r0, #0]	@ 000693b6 0078
.org 0x693b8
	cmp r0, #3	@ 000693b8 0328
.org 0x693ba
	bne.n 0x693c4	@ 000693ba 03d1
.org 0x693bc
	movs r1, #0	@ 000693bc 0021
.org 0x693be
	movs r0, #1	@ 000693be 0120
.org 0x693c0
	strb r0, [r5, #14]	@ 000693c0 a873
.org 0x693c2
	strb r1, [r5, #15]	@ 000693c2 e973
.org 0x693c4
	pop {r3}	@ 000693c4 08bc
.org 0x693c6
	mov r8, r3	@ 000693c6 9846
.org 0x693c8
	pop {r4, r5, r6, r7}	@ 000693c8 f0bc
.org 0x693ca
	pop {r0}	@ 000693ca 01bc
.org 0x693cc
	bx r0	@ 000693cc 0047
