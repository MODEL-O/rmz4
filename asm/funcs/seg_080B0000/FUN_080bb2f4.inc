@ FUN_080bb2f4  entry 0x080bb2f4  size 214
.thumb
.org 0xbb2f4
FUN_080bb2f4:
	push {r4, r5, r6, lr}	@ 000bb2f4 70b5
.org 0xbb2f6
	adds r5, r0, #0	@ 000bb2f6 051c
.org 0xbb2f8
	ldr r6, [r5, #40]	@ 000bb2f8 ae6a
.org 0xbb2fa
	ldrb r0, [r5, #15]	@ 000bb2fa e87b
.org 0xbb2fc
	cmp r0, #0	@ 000bb2fc 0028
.org 0xbb2fe
	bne.n 0xbb3a8	@ 000bb2fe 53d1
.org 0xbb300
	adds r0, r5, #0	@ 000bb300 281c
.org 0xbb302
	adds r0, #116	@ 000bb302 7430
.org 0xbb304
	ldr r1, [pc, #88]	@ 000bb304 1649
.org 0xbb306
	bl 0x5784	@ 000bb306 4af73dfa
.org 0xbb30a
	ldr r1, [pc, #88]	@ 000bb30a 1649
.org 0xbb30c
	movs r4, #0	@ 000bb30c 0024
.org 0xbb30e
	ldr r0, [pc, #88]	@ 000bb30e 1648
.org 0xbb310
	strh r0, [r1, #0]	@ 000bb310 0880
.org 0xbb312
	adds r2, r5, #0	@ 000bb312 2a1c
.org 0xbb314
	adds r2, #69	@ 000bb314 4532
.org 0xbb316
	ldrb r1, [r2, #0]	@ 000bb316 1178
.org 0xbb318
	movs r0, #13	@ 000bb318 0d20
.org 0xbb31a
	negs r0, r0	@ 000bb31a 4042
.org 0xbb31c
	ands r0, r1	@ 000bb31c 0840
.org 0xbb31e
	movs r1, #4	@ 000bb31e 0421
.org 0xbb320
	orrs r0, r1	@ 000bb320 0843
.org 0xbb322
	strb r0, [r2, #0]	@ 000bb322 1070
.org 0xbb324
	adds r0, r5, #0	@ 000bb324 281c
.org 0xbb326
	bl 0x1ceec	@ 000bb326 61f7e1fd
.org 0xbb32a
	adds r0, r5, #0	@ 000bb32a 281c
.org 0xbb32c
	adds r0, #34	@ 000bb32c 2230
.org 0xbb32e
	strb r4, [r0, #0]	@ 000bb32e 0470
.org 0xbb330
	movs r1, #185	@ 000bb330 b921
.org 0xbb332
	lsls r1, r1, #8	@ 000bb332 0902
.org 0xbb334
	adds r0, r5, #0	@ 000bb334 281c
.org 0xbb336
	bl 0x1cf00	@ 000bb336 61f7e3fd
.org 0xbb33a
	adds r1, r5, #0	@ 000bb33a 291c
.org 0xbb33c
	adds r1, #37	@ 000bb33c 2531
.org 0xbb33e
	movs r0, #24	@ 000bb33e 1820
.org 0xbb340
	strb r0, [r1, #0]	@ 000bb340 0870
.org 0xbb342
	movs r2, #0	@ 000bb342 0022
.org 0xbb344
	ldr r0, [pc, #36]	@ 000bb344 0948
.org 0xbb346
	ldr r0, [r0, #0]	@ 000bb346 0068
.org 0xbb348
	ldr r1, [r5, #84]	@ 000bb348 696d
.org 0xbb34a
	ldr r0, [r0, #84]	@ 000bb34a 406d
.org 0xbb34c
	cmp r1, r0	@ 000bb34c 8142
.org 0xbb34e
	bge.n 0xbb352	@ 000bb34e 00da
.org 0xbb350
	movs r2, #1	@ 000bb350 0122
.org 0xbb352
	cmp r2, #0	@ 000bb352 002a
.org 0xbb354
	beq.n 0xbb370	@ 000bb354 0cd0
.org 0xbb356
	ldrb r0, [r5, #10]	@ 000bb356 a87a
.org 0xbb358
	movs r1, #16	@ 000bb358 1021
.org 0xbb35a
	orrs r0, r1	@ 000bb35a 0843
.org 0xbb35c
	b.n 0xbb376	@ 000bb35c 0be0
.org 0xbb35e
	.byte 0x00	@ 000bb35e data
.org 0xbb35f
	.byte 0x00	@ 000bb35f data
.org 0xbb360
	.byte 0xcc,0x45,0x86,0x08	@ 000bb360 data
.org 0xbb364
	.byte 0x40,0x0a,0x00,0x02	@ 000bb364 data
.org 0xbb368
	.byte 0x10,0x3f,0x00,0x00	@ 000bb368 data
.org 0xbb36c
	.byte 0xf0,0xdb,0x02,0x02	@ 000bb36c data
.org 0xbb370
	ldrb r1, [r5, #10]	@ 000bb370 a97a
.org 0xbb372
	movs r0, #239	@ 000bb372 ef20
.org 0xbb374
	ands r0, r1	@ 000bb374 0840
.org 0xbb376
	strb r0, [r5, #10]	@ 000bb376 a872
.org 0xbb378
	adds r1, r2, #0	@ 000bb378 111c
.org 0xbb37a
	adds r0, r5, #0	@ 000bb37a 281c
.org 0xbb37c
	adds r0, #76	@ 000bb37c 4c30
.org 0xbb37e
	strb r1, [r0, #0]	@ 000bb37e 0170
.org 0xbb380
	adds r3, r5, #0	@ 000bb380 2b1c
.org 0xbb382
	adds r3, #74	@ 000bb382 4a33
.org 0xbb384
	lsls r1, r1, #4	@ 000bb384 0901
.org 0xbb386
	ldrb r2, [r3, #0]	@ 000bb386 1a78
.org 0xbb388
	movs r0, #17	@ 000bb388 1120
.org 0xbb38a
	negs r0, r0	@ 000bb38a 4042
.org 0xbb38c
	ands r0, r2	@ 000bb38c 1040
.org 0xbb38e
	orrs r0, r1	@ 000bb38e 0843
.org 0xbb390
	strb r0, [r3, #0]	@ 000bb390 1870
.org 0xbb392
	adds r0, r6, #0	@ 000bb392 301c
.org 0xbb394
	adds r0, #184	@ 000bb394 b830
.org 0xbb396
	ldr r0, [r0, #0]	@ 000bb396 0068
.org 0xbb398
	ldr r1, [pc, #64]	@ 000bb398 1049
.org 0xbb39a
	adds r0, r0, r1	@ 000bb39a 4018
.org 0xbb39c
	str r0, [r5, #88]	@ 000bb39c a865
.org 0xbb39e
	movs r0, #16	@ 000bb39e 1020
.org 0xbb3a0
	strb r0, [r5, #18]	@ 000bb3a0 a874
.org 0xbb3a2
	ldrb r0, [r5, #15]	@ 000bb3a2 e87b
.org 0xbb3a4
	adds r0, #1	@ 000bb3a4 0130
.org 0xbb3a6
	strb r0, [r5, #15]	@ 000bb3a6 e873
.org 0xbb3a8
	adds r0, r5, #0	@ 000bb3a8 281c
.org 0xbb3aa
	bl 0x1cff0	@ 000bb3aa 61f721fe
.org 0xbb3ae
	ldrb r3, [r5, #18]	@ 000bb3ae ab7c
.org 0xbb3b0
	subs r3, #1	@ 000bb3b0 013b
.org 0xbb3b2
	strb r3, [r5, #18]	@ 000bb3b2 ab74
.org 0xbb3b4
	ldrb r2, [r5, #18]	@ 000bb3b4 aa7c
.org 0xbb3b6
	ldr r4, [pc, #40]	@ 000bb3b6 0a4c
.org 0xbb3b8
	movs r0, #16	@ 000bb3b8 1020
.org 0xbb3ba
	subs r0, r0, r2	@ 000bb3ba 801a
.org 0xbb3bc
	movs r1, #31	@ 000bb3bc 1f21
.org 0xbb3be
	ands r0, r1	@ 000bb3be 0840
.org 0xbb3c0
	lsls r2, r2, #8	@ 000bb3c0 1202
.org 0xbb3c2
	orrs r0, r2	@ 000bb3c2 1043
.org 0xbb3c4
	movs r1, #0	@ 000bb3c4 0021
.org 0xbb3c6
	strh r0, [r4, #2]	@ 000bb3c6 6080
.org 0xbb3c8
	lsls r3, r3, #24	@ 000bb3c8 1b06
