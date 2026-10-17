@ FUN_08082284  entry 0x08082284  size 528
.thumb
.org 0x82284
FUN_08082284:
	push {r4, r5, r6, r7, lr}	@ 00082284 f0b5
.org 0x82286
	mov r7, r8	@ 00082286 4746
.org 0x82288
	push {r7}	@ 00082288 80b4
.org 0x8228a
	adds r4, r0, #0	@ 0008228a 041c
.org 0x8228c
	adds r6, r4, #0	@ 0008228c 261c
.org 0x8228e
	adds r6, #140	@ 0008228e 8c36
.org 0x82290
	ldr r0, [r6, #0]	@ 00082290 3068
.org 0x82292
	movs r1, #128	@ 00082292 8021
.org 0x82294
	lsls r1, r1, #2	@ 00082294 8900
.org 0x82296
	ands r0, r1	@ 00082296 0840
.org 0x82298
	cmp r0, #0	@ 00082298 0028
.org 0x8229a
	bne.n 0x822a8	@ 0008229a 05d1
.org 0x8229c
	adds r0, r4, #0	@ 0008229c 201c
.org 0x8229e
	bl 0x83890	@ 0008229e 01f0f7fa
.org 0x822a2
	lsls r0, r0, #24	@ 000822a2 0006
.org 0x822a4
	cmp r0, #0	@ 000822a4 0028
.org 0x822a6
	beq.n 0x82310	@ 000822a6 33d0
.org 0x822a8
	ldrb r2, [r4, #13]	@ 000822a8 627b
.org 0x822aa
	ldrb r1, [r4, #10]	@ 000822aa a17a
.org 0x822ac
	movs r0, #32	@ 000822ac 2020
.org 0x822ae
	ands r0, r1	@ 000822ae 0840
.org 0x822b0
	cmp r0, #0	@ 000822b0 0028
.org 0x822b2
	beq.n 0x822c6	@ 000822b2 08d0
.org 0x822b4
	subs r0, r2, #1	@ 000822b4 501e
.org 0x822b6
	lsls r0, r0, #24	@ 000822b6 0006
.org 0x822b8
	lsrs r0, r0, #24	@ 000822b8 000e
.org 0x822ba
	cmp r0, #1	@ 000822ba 0128
.org 0x822bc
	bls.n 0x822c4	@ 000822bc 02d9
.org 0x822be
	movs r0, #0	@ 000822be 0020
.org 0x822c0
	str r0, [r4, #92]	@ 000822c0 e065
.org 0x822c2
	str r0, [r4, #96]	@ 000822c2 2066
.org 0x822c4
	movs r2, #1	@ 000822c4 0122
.org 0x822c6
	ldr r1, [pc, #36]	@ 000822c6 0949
.org 0x822c8
	ldrb r0, [r4, #9]	@ 000822c8 607a
.org 0x822ca
	lsls r0, r0, #2	@ 000822ca 8000
.org 0x822cc
	adds r0, r0, r1	@ 000822cc 4018
.org 0x822ce
	movs r1, #2	@ 000822ce 0221
.org 0x822d0
	str r1, [r4, #12]	@ 000822d0 e160
.org 0x822d2
	ldr r0, [r0, #0]	@ 000822d2 0068
.org 0x822d4
	ldr r0, [r0, #8]	@ 000822d4 8068
.org 0x822d6
	str r0, [r4, #20]	@ 000822d6 6061
.org 0x822d8
	strb r2, [r4, #15]	@ 000822d8 e273
.org 0x822da
	adds r0, r4, #0	@ 000822da 201c
.org 0x822dc
	adds r0, #188	@ 000822dc bc30
.org 0x822de
	ldrb r0, [r0, #0]	@ 000822de 0078
.org 0x822e0
	cmp r0, #0	@ 000822e0 0028
.org 0x822e2
	beq.n 0x822f0	@ 000822e2 05d0
.org 0x822e4
	movs r0, #3	@ 000822e4 0320
.org 0x822e6
	strb r0, [r4, #13]	@ 000822e6 6073
.org 0x822e8
	b.n 0x82308	@ 000822e8 0ee0
.org 0x822ea
	.byte 0x00	@ 000822ea data
.org 0x822eb
	.byte 0x00	@ 000822eb data
.org 0x822ec
	.byte 0x40,0xdb,0x85,0x08	@ 000822ec data
.org 0x822f0
	adds r0, r4, #0	@ 000822f0 201c
.org 0x822f2
	adds r0, #140	@ 000822f2 8c30
.org 0x822f4
	ldr r1, [r0, #0]	@ 000822f4 0168
.org 0x822f6
	movs r0, #128	@ 000822f6 8020
.org 0x822f8
	lsls r0, r0, #9	@ 000822f8 4002
.org 0x822fa
	ands r1, r0	@ 000822fa 0140
.org 0x822fc
	cmp r1, #0	@ 000822fc 0029
.org 0x822fe
	beq.n 0x82306	@ 000822fe 02d0
.org 0x82300
	movs r0, #1	@ 00082300 0120
.org 0x82302
	strb r0, [r4, #13]	@ 00082302 6073
.org 0x82304
	b.n 0x82308	@ 00082304 00e0
.org 0x82306
	strb r1, [r4, #13]	@ 00082306 6173
.org 0x82308
	adds r0, r4, #0	@ 00082308 201c
.org 0x8230a
	bl 0x824bc	@ 0008230a 00f0d7f8
.org 0x8230e
	b.n 0x824a6	@ 0008230e cae0
.org 0x82310
	adds r0, r4, #0	@ 00082310 201c
.org 0x82312
	adds r0, #184	@ 00082312 b830
.org 0x82314
	ldr r5, [r0, #0]	@ 00082314 0568
.org 0x82316
	adds r7, r0, #0	@ 00082316 071c
.org 0x82318
	cmp r5, #0	@ 00082318 002d
.org 0x8231a
	beq.n 0x8231e	@ 0008231a 00d0
.org 0x8231c
	b.n 0x82424	@ 0008231c 82e0
.org 0x8231e
	ldr r0, [r6, #0]	@ 0008231e 3068
.org 0x82320
	movs r6, #1	@ 00082320 0126
.org 0x82322
	ands r0, r6	@ 00082322 3040
.org 0x82324
	cmp r0, #0	@ 00082324 0028
.org 0x82326
	beq.n 0x8238c	@ 00082326 31d0
.org 0x82328
	ldr r2, [pc, #228]	@ 00082328 394a
.org 0x8232a
	movs r0, #0	@ 0008232a 0020
.org 0x8232c
	adds r1, r4, #0	@ 0008232c 211c
.org 0x8232e
	bl 0x2adac	@ 0008232e a8f73dfd
.org 0x82332
	str r0, [r7, #0]	@ 00082332 3860
.org 0x82334
	cmp r0, #0	@ 00082334 0028
.org 0x82336
	beq.n 0x82392	@ 00082336 2cd0
.org 0x82338
	adds r0, r4, #0	@ 00082338 201c
.org 0x8233a
	adds r0, #191	@ 0008233a bf30
.org 0x8233c
	strb r6, [r0, #0]	@ 0008233c 0670
.org 0x8233e
	subs r0, #75	@ 0008233e 4b38
.org 0x82340
	ldr r1, [pc, #208]	@ 00082340 3449
.org 0x82342
	bl 0x5784	@ 00082342 83f71ffa
.org 0x82346
	str r5, [r4, #96]	@ 00082346 2566
.org 0x82348
	movs r1, #176	@ 00082348 b021
.org 0x8234a
	lsls r1, r1, #5	@ 0008234a 4901
.org 0x8234c
	adds r0, r4, #0	@ 0008234c 201c
.org 0x8234e
	bl 0x1cf00	@ 0008234e 9af7d7fd
.org 0x82352
	adds r0, r4, #0	@ 00082352 201c
.org 0x82354
	bl 0x1cff0	@ 00082354 9af74cfe
.org 0x82358
	ldrb r1, [r4, #10]	@ 00082358 a17a
.org 0x8235a
	movs r0, #32	@ 0008235a 2020
.org 0x8235c
	ands r0, r1	@ 0008235c 0840
.org 0x8235e
	cmp r0, #0	@ 0008235e 0028
.org 0x82360
	beq.n 0x8236c	@ 00082360 04d0
.org 0x82362
	ldr r0, [r4, #88]	@ 00082362 a06d
.org 0x82364
	movs r1, #192	@ 00082364 c021
.org 0x82366
	lsls r1, r1, #5	@ 00082366 4901
.org 0x82368
	adds r0, r0, r1	@ 00082368 4018
.org 0x8236a
	str r0, [r4, #88]	@ 0008236a a065
.org 0x8236c
	ldrb r1, [r4, #10]	@ 0008236c a17a
.org 0x8236e
	movs r0, #223	@ 0008236e df20
.org 0x82370
	ands r0, r1	@ 00082370 0840
.org 0x82372
	strb r0, [r4, #10]	@ 00082372 a072
.org 0x82374
	adds r0, r4, #0	@ 00082374 201c
.org 0x82376
	adds r0, #77	@ 00082376 4d30
.org 0x82378
	strb r5, [r0, #0]	@ 00082378 0570
.org 0x8237a
	adds r2, r4, #0	@ 0008237a 221c
.org 0x8237c
	adds r2, #74	@ 0008237c 4a32
.org 0x8237e
	ldrb r1, [r2, #0]	@ 0008237e 1178
.org 0x82380
	movs r0, #33	@ 00082380 2120
.org 0x82382
	negs r0, r0	@ 00082382 4042
.org 0x82384
	ands r0, r1	@ 00082384 0840
.org 0x82386
	strb r0, [r2, #0]	@ 00082386 1070
.org 0x82388
	strb r5, [r4, #13]	@ 00082388 6573
.org 0x8238a
	strb r5, [r4, #14]	@ 0008238a a573
.org 0x8238c
	ldr r0, [r7, #0]	@ 0008238c 3868
.org 0x8238e
	cmp r0, #0	@ 0008238e 0028
.org 0x82390
	bne.n 0x82424	@ 00082390 48d1
.org 0x82392
	adds r0, r4, #0	@ 00082392 201c
.org 0x82394
	adds r0, #191	@ 00082394 bf30
.org 0x82396
	ldrb r1, [r0, #0]	@ 00082396 0178
.org 0x82398
	adds r5, r0, #0	@ 00082398 051c
.org 0x8239a
	cmp r1, #0	@ 0008239a 0029
.org 0x8239c
	bne.n 0x823e0	@ 0008239c 20d1
.org 0x8239e
	ldrb r0, [r4, #15]	@ 0008239e e07b
.org 0x823a0
	cmp r0, #0	@ 000823a0 0028
.org 0x823a2
	bne.n 0x823b8	@ 000823a2 09d1
.org 0x823a4
	adds r0, r4, #0	@ 000823a4 201c
.org 0x823a6
	bl 0x7f90c	@ 000823a6 fdf7b1fa
.org 0x823aa
	cmp r0, #0	@ 000823aa 0028
.org 0x823ac
	beq.n 0x823b2	@ 000823ac 01d0
.org 0x823ae
	movs r0, #1	@ 000823ae 0120
.org 0x823b0
	strb r0, [r4, #15]	@ 000823b0 e073
.org 0x823b2
	ldrb r0, [r4, #15]	@ 000823b2 e07b
.org 0x823b4
	cmp r0, #0	@ 000823b4 0028
.org 0x823b6
	beq.n 0x823e0	@ 000823b6 13d0
.org 0x823b8
	cmp r0, #1	@ 000823b8 0128
.org 0x823ba
	bne.n 0x823c6	@ 000823ba 04d1
.org 0x823bc
	adds r0, r4, #0	@ 000823bc 201c
.org 0x823be
	bl 0x1cff0	@ 000823be 9af717fe
.org 0x823c2
	movs r0, #2	@ 000823c2 0220
.org 0x823c4
	strb r0, [r4, #15]	@ 000823c4 e073
.org 0x823c6
	adds r0, r4, #0	@ 000823c6 201c
.org 0x823c8
	bl 0x7f90c	@ 000823c8 fdf7a0fa
.org 0x823cc
	cmp r0, #0	@ 000823cc 0028
.org 0x823ce
	bne.n 0x823d2	@ 000823ce 00d1
.org 0x823d0
	strb r0, [r4, #15]	@ 000823d0 e073
.org 0x823d2
	adds r0, r4, #0	@ 000823d2 201c
.org 0x823d4
	adds r0, #140	@ 000823d4 8c30
.org 0x823d6
	ldr r0, [r0, #0]	@ 000823d6 0068
.org 0x823d8
	ldr r1, [pc, #60]	@ 000823d8 0f49
.org 0x823da
	ands r0, r1	@ 000823da 0840
.org 0x823dc
	cmp r0, r1	@ 000823dc 8842
.org 0x823de
	bne.n 0x824a6	@ 000823de 62d1
.org 0x823e0
	ldr r0, [r7, #0]	@ 000823e0 3868
.org 0x823e2
	cmp r0, #0	@ 000823e2 0028
.org 0x823e4
	bne.n 0x82424	@ 000823e4 1ed1
.org 0x823e6
	ldrb r0, [r5, #0]	@ 000823e6 2878
.org 0x823e8
	cmp r0, #0	@ 000823e8 0028
.org 0x823ea
	bne.n 0x8243c	@ 000823ea 27d1
.org 0x823ec
	ldr r1, [pc, #44]	@ 000823ec 0b49
.org 0x823ee
	ldrb r0, [r4, #13]	@ 000823ee 607b
.org 0x823f0
	lsls r0, r0, #2	@ 000823f0 8000
.org 0x823f2
	adds r0, r0, r1	@ 000823f2 4018
.org 0x823f4
	ldr r1, [r0, #0]	@ 000823f4 0168
.org 0x823f6
	adds r0, r4, #0	@ 000823f6 201c
.org 0x823f8
	bl 0x128f80	@ 000823f8 a6f0c2fd
.org 0x823fc
	ldr r1, [pc, #32]	@ 000823fc 0849
.org 0x823fe
	ldrb r0, [r4, #13]	@ 000823fe 607b
.org 0x82400
	lsls r0, r0, #2	@ 00082400 8000
.org 0x82402
	adds r0, r0, r1	@ 00082402 4018
.org 0x82404
	ldr r1, [r0, #0]	@ 00082404 0168
.org 0x82406
	adds r0, r4, #0	@ 00082406 201c
.org 0x82408
	bl 0x128f80	@ 00082408 a6f0bafd
.org 0x8240c
	b.n 0x824a6	@ 0008240c 4be0
.org 0x8240e
	.byte 0x00	@ 0008240e data
.org 0x8240f
	.byte 0x00	@ 0008240f data
.org 0x82410
	.byte 0x14,0xe9,0x85,0x08	@ 00082410 data
.org 0x82414
	.byte 0x90,0xe8,0x85,0x08	@ 00082414 data
.org 0x82418
	.byte 0x01,0x00,0x02,0x00	@ 00082418 data
.org 0x8241c
	.byte 0xd8,0xe8,0x85,0x08	@ 0008241c data
.org 0x82420
	.byte 0xec,0xe8,0x85,0x08	@ 00082420 data
.org 0x82424
	ldr r0, [r7, #0]	@ 00082424 3868
.org 0x82426
	bl 0x2b3e4	@ 00082426 a8f7ddff
.org 0x8242a
	cmp r0, #0	@ 0008242a 0028
.org 0x8242c
	beq.n 0x8243c	@ 0008242c 06d0
.org 0x8242e
	adds r0, r4, #0	@ 0008242e 201c
.org 0x82430
	adds r0, #116	@ 00082430 7430
.org 0x82432
	ldr r1, [pc, #124]	@ 00082432 1f49
.org 0x82434
	bl 0x5784	@ 00082434 83f7a6f9
.org 0x82438
	movs r0, #0	@ 00082438 0020
.org 0x8243a
	str r0, [r7, #0]	@ 0008243a 3860
.org 0x8243c
	adds r0, r4, #0	@ 0008243c 201c
.org 0x8243e
	bl 0x7f90c	@ 0008243e fdf765fa
.org 0x82442
	adds r5, r0, #0	@ 00082442 051c
.org 0x82444
	cmp r5, #0	@ 00082444 002d
.org 0x82446
	bne.n 0x824a6	@ 00082446 2ed1
.org 0x82448
	adds r6, r4, #0	@ 00082448 261c
.org 0x8244a
	adds r6, #191	@ 0008244a bf36
.org 0x8244c
	ldrb r0, [r6, #0]	@ 0008244c 3078
.org 0x8244e
	cmp r0, #0	@ 0008244e 0028
.org 0x82450
	beq.n 0x824a6	@ 00082450 29d0
.org 0x82452
	ldr r0, [r4, #96]	@ 00082452 206e
.org 0x82454
	adds r0, #64	@ 00082454 4030
.org 0x82456
	str r0, [r4, #96]	@ 00082456 2066
.org 0x82458
	movs r7, #224	@ 00082458 e027
.org 0x8245a
	lsls r7, r7, #3	@ 0008245a ff00
.org 0x8245c
	cmp r0, r7	@ 0008245c b842
.org 0x8245e
	ble.n 0x82462	@ 0008245e 00dd
.org 0x82460
	str r7, [r4, #96]	@ 00082460 2766
.org 0x82462
	ldr r1, [r4, #88]	@ 00082462 a16d
.org 0x82464
	ldr r0, [r4, #96]	@ 00082464 206e
.org 0x82466
	adds r1, r1, r0	@ 00082466 0918
.org 0x82468
	str r1, [r4, #88]	@ 00082468 a165
.org 0x8246a
	ldr r0, [r4, #84]	@ 0008246a 606d
.org 0x8246c
	ldr r2, [pc, #68]	@ 0008246c 114a
.org 0x8246e
	adds r0, r0, r2	@ 0008246e 8018
.org 0x82470
	ldr r2, [pc, #68]	@ 00082470 114a
.org 0x82472
	mov r8, r2	@ 00082472 9046
.org 0x82474
	add r1, r8	@ 00082474 4144
.org 0x82476
	bl 0x7db4	@ 00082476 85f79dfc
.org 0x8247a
	adds r1, r0, #0	@ 0008247a 011c
.org 0x8247c
	cmp r1, #0	@ 0008247c 0029
.org 0x8247e
	bge.n 0x8248a	@ 0008247e 04da
.org 0x82480
	str r5, [r4, #96]	@ 00082480 2566
.org 0x82482
	strb r5, [r6, #0]	@ 00082482 3570
.org 0x82484
	ldr r0, [r4, #88]	@ 00082484 a06d
.org 0x82486
	adds r0, r0, r1	@ 00082486 4018
.org 0x82488
	str r0, [r4, #88]	@ 00082488 a065
.org 0x8248a
	ldr r0, [r4, #84]	@ 0008248a 606d
.org 0x8248c
	adds r0, r0, r7	@ 0008248c c019
.org 0x8248e
	ldr r1, [r4, #88]	@ 0008248e a16d
.org 0x82490
	add r1, r8	@ 00082490 4144
.org 0x82492
	bl 0x7db4	@ 00082492 85f78ffc
