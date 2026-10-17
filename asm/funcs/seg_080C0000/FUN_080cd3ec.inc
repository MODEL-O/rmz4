@ FUN_080cd3ec  entry 0x080cd3ec  size 188
.thumb
.org 0xcd3ec
FUN_080cd3ec:
	push {r4, r5, r6, lr}	@ 000cd3ec 70b5
.org 0xcd3ee
	adds r4, r0, #0	@ 000cd3ee 041c
.org 0xcd3f0
	ldrb r0, [r4, #18]	@ 000cd3f0 a07c
.org 0xcd3f2
	adds r2, r0, #1	@ 000cd3f2 421c
.org 0xcd3f4
	movs r6, #0	@ 000cd3f4 0026
.org 0xcd3f6
	strb r2, [r4, #18]	@ 000cd3f6 a274
.org 0xcd3f8
	ldr r0, [r4, #84]	@ 000cd3f8 606d
.org 0xcd3fa
	ldr r1, [r4, #92]	@ 000cd3fa e16d
.org 0xcd3fc
	adds r0, r0, r1	@ 000cd3fc 4018
.org 0xcd3fe
	str r0, [r4, #84]	@ 000cd3fe 6065
.org 0xcd400
	ldr r1, [r4, #104]	@ 000cd400 a16e
.org 0xcd402
	subs r0, r0, r1	@ 000cd402 401a
.org 0xcd404
	ldr r1, [r4, #100]	@ 000cd404 616e
.org 0xcd406
	muls r0, r1	@ 000cd406 4843
.org 0xcd408
	cmp r0, #0	@ 000cd408 0028
.org 0xcd40a
	bge.n 0xcd410	@ 000cd40a 01da
.org 0xcd40c
	ldr r1, [pc, #152]	@ 000cd40c 2649
.org 0xcd40e
	adds r0, r0, r1	@ 000cd40e 4018
.org 0xcd410
	asrs r5, r0, #11	@ 000cd410 c512
.org 0xcd412
	cmp r5, #6	@ 000cd412 062d
.org 0xcd414
	ble.n 0xcd418	@ 000cd414 00dd
.org 0xcd416
	movs r5, #6	@ 000cd416 0625
.org 0xcd418
	lsls r0, r2, #24	@ 000cd418 1006
.org 0xcd41a
	lsrs r0, r0, #25	@ 000cd41a 400e
.org 0xcd41c
	movs r1, #1	@ 000cd41c 0121
.org 0xcd41e
	ands r0, r1	@ 000cd41e 0840
.org 0xcd420
	ldr r2, [pc, #136]	@ 000cd420 224a
.org 0xcd422
	lsls r0, r0, #2	@ 000cd422 8000
.org 0xcd424
	lsls r1, r5, #3	@ 000cd424 e900
.org 0xcd426
	adds r0, r0, r1	@ 000cd426 4018
.org 0xcd428
	adds r0, r0, r2	@ 000cd428 8018
.org 0xcd42a
	ldrh r1, [r0, #0]	@ 000cd42a 0188
.org 0xcd42c
	adds r0, r4, #0	@ 000cd42c 201c
.org 0xcd42e
	bl 0x1cf00	@ 000cd42e 4ff767fd
.org 0xcd432
	ldr r0, [pc, #124]	@ 000cd432 1f48
.org 0xcd434
	adds r0, r5, r0	@ 000cd434 2818
.org 0xcd436
	ldrb r0, [r0, #0]	@ 000cd436 0078
.org 0xcd438
	adds r1, r4, #0	@ 000cd438 211c
.org 0xcd43a
	adds r1, #37	@ 000cd43a 2531
.org 0xcd43c
	strb r0, [r1, #0]	@ 000cd43c 0870
.org 0xcd43e
	adds r0, r4, #0	@ 000cd43e 201c
.org 0xcd440
	bl 0x1cff0	@ 000cd440 4ff7d6fd
.org 0xcd444
	adds r0, r4, #0	@ 000cd444 201c
.org 0xcd446
	adds r0, #116	@ 000cd446 7430
.org 0xcd448
	ldr r1, [pc, #104]	@ 000cd448 1a49
.org 0xcd44a
	adds r1, r5, r1	@ 000cd44a 6918
.org 0xcd44c
	ldrb r2, [r1, #0]	@ 000cd44c 0a78
.org 0xcd44e
	lsls r1, r2, #1	@ 000cd44e 5100
.org 0xcd450
	adds r1, r1, r2	@ 000cd450 8918
.org 0xcd452
	lsls r1, r1, #3	@ 000cd452 c900
.org 0xcd454
	ldr r2, [pc, #96]	@ 000cd454 184a
.org 0xcd456
	adds r1, r1, r2	@ 000cd456 8918
.org 0xcd458
	bl 0x5784	@ 000cd458 38f794f9
.org 0xcd45c
	ldr r0, [pc, #92]	@ 000cd45c 1748
.org 0xcd45e
	adds r1, r4, #0	@ 000cd45e 211c
.org 0xcd460
	adds r1, #84	@ 000cd460 5431
.org 0xcd462
	bl 0x1fb14	@ 000cd462 52f757fb
.org 0xcd466
	movs r1, #192	@ 000cd466 c021
.org 0xcd468
	lsls r1, r1, #6	@ 000cd468 8901
.org 0xcd46a
	cmp r0, r1	@ 000cd46a 8842
.org 0xcd46c
	bls.n 0xcd4a2	@ 000cd46c 19d9
.org 0xcd46e
	ldrb r1, [r4, #10]	@ 000cd46e a17a
.org 0xcd470
	movs r0, #254	@ 000cd470 fe20
.org 0xcd472
	ands r0, r1	@ 000cd472 0840
.org 0xcd474
	movs r1, #253	@ 000cd474 fd21
.org 0xcd476
	ands r0, r1	@ 000cd476 0840
.org 0xcd478
	strb r0, [r4, #10]	@ 000cd478 a072
.org 0xcd47a
	adds r0, r4, #0	@ 000cd47a 201c
.org 0xcd47c
	adds r0, #140	@ 000cd47c 8c30
.org 0xcd47e
	str r6, [r0, #0]	@ 000cd47e 0660
.org 0xcd480
	adds r0, #4	@ 000cd480 0430
.org 0xcd482
	str r6, [r0, #0]	@ 000cd482 0660
.org 0xcd484
	adds r0, #4	@ 000cd484 0430
.org 0xcd486
	strb r6, [r0, #0]	@ 000cd486 0670
.org 0xcd488
	ldrb r1, [r4, #10]	@ 000cd488 a17a
.org 0xcd48a
	movs r0, #251	@ 000cd48a fb20
.org 0xcd48c
	ands r0, r1	@ 000cd48c 0840
.org 0xcd48e
	strb r0, [r4, #10]	@ 000cd48e a072
.org 0xcd490
	ldr r1, [pc, #44]	@ 000cd490 0b49
.org 0xcd492
	ldrb r0, [r4, #9]	@ 000cd492 607a
.org 0xcd494
	lsls r0, r0, #2	@ 000cd494 8000
.org 0xcd496
	adds r0, r0, r1	@ 000cd496 4018
.org 0xcd498
	movs r1, #3	@ 000cd498 0321
.org 0xcd49a
	str r1, [r4, #12]	@ 000cd49a e160
.org 0xcd49c
	ldr r0, [r0, #0]	@ 000cd49c 0068
.org 0xcd49e
	ldr r0, [r0, #12]	@ 000cd49e c068
.org 0xcd4a0
	str r0, [r4, #20]	@ 000cd4a0 6061
.org 0xcd4a2
	pop {r4, r5, r6}	@ 000cd4a2 70bc
.org 0xcd4a4
	pop {r0}	@ 000cd4a4 01bc
.org 0xcd4a6
	bx r0	@ 000cd4a6 0047
