@ FUN_0809b31c  entry 0x0809b31c  size 286
.thumb
.org 0x9b31c
FUN_0809b31c:
	push {r4, r5, r6, r7, lr}	@ 0009b31c f0b5
.org 0x9b31e
	adds r4, r0, #0	@ 0009b31e 041c
.org 0x9b320
	ldr r6, [pc, #68]	@ 0009b320 114e
.org 0x9b322
	ldr r5, [r6, #0]	@ 0009b322 3568
.org 0x9b324
	movs r7, #0	@ 0009b324 0027
.org 0x9b326
	ldrb r0, [r4, #15]	@ 0009b326 e07b
.org 0x9b328
	cmp r0, #0	@ 0009b328 0028
.org 0x9b32a
	bne.n 0x9b39e	@ 0009b32a 38d1
.org 0x9b32c
	movs r0, #64	@ 0009b32c 4020
.org 0x9b32e
	bl 0x2b10	@ 0009b32e 67f7effb
.org 0x9b332
	adds r1, r4, #0	@ 0009b332 211c
.org 0x9b334
	adds r1, #183	@ 0009b334 b731
.org 0x9b336
	movs r0, #2	@ 0009b336 0220
.org 0x9b338
	strb r0, [r1, #0]	@ 0009b338 0870
.org 0x9b33a
	adds r0, r4, #0	@ 0009b33a 201c
.org 0x9b33c
	adds r0, #116	@ 0009b33c 7430
.org 0x9b33e
	ldr r1, [pc, #44]	@ 0009b33e 0b49
.org 0x9b340
	ldr r1, [r1, #12]	@ 0009b340 c968
.org 0x9b342
	bl 0x5784	@ 0009b342 6af71ffa
.org 0x9b346
	movs r1, #172	@ 0009b346 ac21
.org 0x9b348
	lsls r1, r1, #7	@ 0009b348 c901
.org 0x9b34a
	adds r0, r4, #0	@ 0009b34a 201c
.org 0x9b34c
	bl 0x1cf00	@ 0009b34c 81f7d8fd
.org 0x9b350
	ldr r0, [r6, #0]	@ 0009b350 3068
.org 0x9b352
	ldrb r0, [r0, #10]	@ 0009b352 807a
.org 0x9b354
	lsrs r2, r0, #4	@ 0009b354 0209
.org 0x9b356
	movs r0, #1	@ 0009b356 0120
.org 0x9b358
	ands r2, r0	@ 0009b358 0240
.org 0x9b35a
	cmp r2, #0	@ 0009b35a 002a
.org 0x9b35c
	beq.n 0x9b370	@ 0009b35c 08d0
.org 0x9b35e
	ldrb r0, [r4, #10]	@ 0009b35e a07a
.org 0x9b360
	movs r1, #16	@ 0009b360 1021
.org 0x9b362
	orrs r0, r1	@ 0009b362 0843
.org 0x9b364
	b.n 0x9b376	@ 0009b364 07e0
.org 0x9b366
	.byte 0x00	@ 0009b366 data
.org 0x9b367
	.byte 0x00	@ 0009b367 data
.org 0x9b368
	.byte 0xf0,0xdb,0x02,0x02	@ 0009b368 data
.org 0x9b36c
	.byte 0xc4,0x10,0x86,0x08	@ 0009b36c data
.org 0x9b370
	ldrb r1, [r4, #10]	@ 0009b370 a17a
.org 0x9b372
	movs r0, #239	@ 0009b372 ef20
.org 0x9b374
	ands r0, r1	@ 0009b374 0840
.org 0x9b376
	strb r0, [r4, #10]	@ 0009b376 a072
.org 0x9b378
	adds r1, r2, #0	@ 0009b378 111c
.org 0x9b37a
	adds r0, r4, #0	@ 0009b37a 201c
.org 0x9b37c
	adds r0, #76	@ 0009b37c 4c30
.org 0x9b37e
	strb r1, [r0, #0]	@ 0009b37e 0170
.org 0x9b380
	adds r3, r4, #0	@ 0009b380 231c
.org 0x9b382
	adds r3, #74	@ 0009b382 4a33
.org 0x9b384
	lsls r1, r1, #4	@ 0009b384 0901
.org 0x9b386
	ldrb r2, [r3, #0]	@ 0009b386 1a78
.org 0x9b388
	movs r0, #17	@ 0009b388 1120
.org 0x9b38a
	negs r0, r0	@ 0009b38a 4042
.org 0x9b38c
	ands r0, r2	@ 0009b38c 1040
.org 0x9b38e
	orrs r0, r1	@ 0009b38e 0843
.org 0x9b390
	strb r0, [r3, #0]	@ 0009b390 1870
.org 0x9b392
	movs r0, #150	@ 0009b392 9620
.org 0x9b394
	lsls r0, r0, #1	@ 0009b394 4000
.org 0x9b396
	str r0, [r4, #100]	@ 0009b396 6066
.org 0x9b398
	ldrb r0, [r4, #15]	@ 0009b398 e07b
.org 0x9b39a
	adds r0, #1	@ 0009b39a 0130
.org 0x9b39c
	strb r0, [r4, #15]	@ 0009b39c e073
.org 0x9b39e
	adds r0, r4, #0	@ 0009b39e 201c
.org 0x9b3a0
	bl 0x1cff0	@ 0009b3a0 81f726fe
.org 0x9b3a4
	ldr r0, [r4, #100]	@ 0009b3a4 606e
.org 0x9b3a6
	subs r0, #1	@ 0009b3a6 0138
.org 0x9b3a8
	str r0, [r4, #100]	@ 0009b3a8 6066
.org 0x9b3aa
	cmp r0, #0	@ 0009b3aa 0028
.org 0x9b3ac
	bgt.n 0x9b3b0	@ 0009b3ac 00dc
.org 0x9b3ae
	movs r7, #1	@ 0009b3ae 0127
.org 0x9b3b0
	adds r0, r4, #0	@ 0009b3b0 201c
.org 0x9b3b2
	adds r0, #140	@ 0009b3b2 8c30
.org 0x9b3b4
	ldr r0, [r0, #0]	@ 0009b3b4 0068
.org 0x9b3b6
	movs r1, #128	@ 0009b3b6 8021
.org 0x9b3b8
	lsls r1, r1, #4	@ 0009b3b8 0901
.org 0x9b3ba
	ands r0, r1	@ 0009b3ba 0840
.org 0x9b3bc
	cmp r0, #0	@ 0009b3bc 0028
.org 0x9b3be
	beq.n 0x9b3d8	@ 0009b3be 0bd0
.org 0x9b3c0
	cmp r5, #0	@ 0009b3c0 002d
.org 0x9b3c2
	beq.n 0x9b3d8	@ 0009b3c2 09d0
.org 0x9b3c4
	adds r0, r5, #0	@ 0009b3c4 281c
.org 0x9b3c6
	adds r0, #140	@ 0009b3c6 8c30
.org 0x9b3c8
	ldr r0, [r0, #0]	@ 0009b3c8 0068
.org 0x9b3ca
	movs r2, #1	@ 0009b3ca 0122
.org 0x9b3cc
	ands r0, r2	@ 0009b3cc 1040
.org 0x9b3ce
	cmp r0, #0	@ 0009b3ce 0028
.org 0x9b3d0
	beq.n 0x9b3d4	@ 0009b3d0 00d0
.org 0x9b3d2
	movs r7, #1	@ 0009b3d2 0127
.org 0x9b3d4
	cmp r7, #0	@ 0009b3d4 002f
.org 0x9b3d6
	beq.n 0x9b400	@ 0009b3d6 13d0
.org 0x9b3d8
	ldr r1, [pc, #32]	@ 0009b3d8 0849
.org 0x9b3da
	ldrb r0, [r4, #9]	@ 0009b3da 607a
.org 0x9b3dc
	lsls r0, r0, #2	@ 0009b3dc 8000
.org 0x9b3de
	adds r0, r0, r1	@ 0009b3de 4018
.org 0x9b3e0
	movs r1, #2	@ 0009b3e0 0221
.org 0x9b3e2
	str r1, [r4, #12]	@ 0009b3e2 e160
.org 0x9b3e4
	ldr r0, [r0, #0]	@ 0009b3e4 0068
.org 0x9b3e6
	ldr r0, [r0, #8]	@ 0009b3e6 8068
.org 0x9b3e8
	str r0, [r4, #20]	@ 0009b3e8 6061
.org 0x9b3ea
	movs r0, #0	@ 0009b3ea 0020
.org 0x9b3ec
	strb r1, [r4, #13]	@ 0009b3ec 6173
.org 0x9b3ee
	strb r0, [r4, #14]	@ 0009b3ee a073
.org 0x9b3f0
	strb r0, [r4, #15]	@ 0009b3f0 e073
.org 0x9b3f2
	adds r0, r4, #0	@ 0009b3f2 201c
.org 0x9b3f4
	bl 0x9b454	@ 0009b3f4 00f02ef8
.org 0x9b3f8
	b.n 0x9b44e	@ 0009b3f8 29e0
.org 0x9b3fa
	.byte 0x00	@ 0009b3fa data
.org 0x9b3fb
	.byte 0x00	@ 0009b3fb data
.org 0x9b3fc
	.byte 0x40,0xdb,0x85,0x08	@ 0009b3fc data
.org 0x9b400
	ldr r0, [pc, #44]	@ 0009b400 0b48
.org 0x9b402
	ldr r1, [r0, #0]	@ 0009b402 0168
.org 0x9b404
	ldr r0, [r1, #84]	@ 0009b404 486d
.org 0x9b406
	str r0, [r4, #84]	@ 0009b406 6065
.org 0x9b408
	ldr r0, [r1, #88]	@ 0009b408 886d
.org 0x9b40a
	str r0, [r4, #88]	@ 0009b40a a065
.org 0x9b40c
	ldr r1, [pc, #36]	@ 0009b40c 0949
.org 0x9b40e
	adds r0, r5, r1	@ 0009b40e 6818
.org 0x9b410
	movs r6, #0	@ 0009b410 0026
.org 0x9b412
	movs r3, #1	@ 0009b412 0123
.org 0x9b414
	strb r2, [r0, #0]	@ 0009b414 0270
.org 0x9b416
	adds r1, #1	@ 0009b416 0131
.org 0x9b418
	adds r0, r5, r1	@ 0009b418 6818
.org 0x9b41a
	strb r7, [r0, #0]	@ 0009b41a 0770
.org 0x9b41c
	ldr r1, [r4, #100]	@ 0009b41c 616e
.org 0x9b41e
	cmp r1, #74	@ 0009b41e 4a29
.org 0x9b420
	bgt.n 0x9b438	@ 0009b420 0adc
.org 0x9b422
	ands r1, r2	@ 0009b422 1140
.org 0x9b424
	cmp r1, #0	@ 0009b424 0029
.org 0x9b426
	beq.n 0x9b446	@ 0009b426 0ed0
.org 0x9b428
	ldrb r0, [r4, #10]	@ 0009b428 a07a
.org 0x9b42a
	orrs r0, r3	@ 0009b42a 1843
.org 0x9b42c
	b.n 0x9b44c	@ 0009b42c 0ee0
.org 0x9b42e
	.byte 0x00	@ 0009b42e data
.org 0x9b42f
	.byte 0x00	@ 0009b42f data
.org 0x9b430
	.byte 0xf0,0xdb,0x02,0x02	@ 0009b430 data
.org 0x9b434
	.byte 0x71,0x01,0x00,0x00	@ 0009b434 data
.org 0x9b438
	movs r0, #3	@ 0009b438 0320
