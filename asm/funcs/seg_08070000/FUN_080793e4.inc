@ FUN_080793e4  entry 0x080793e4  size 214
.thumb
.org 0x793e4
FUN_080793e4:
	push {r4, r5, lr}	@ 000793e4 30b5
.org 0x793e6
	sub sp, #8	@ 000793e6 82b0
.org 0x793e8
	adds r5, r0, #0	@ 000793e8 051c
.org 0x793ea
	adds r0, #140	@ 000793ea 8c30
.org 0x793ec
	ldr r0, [r0, #0]	@ 000793ec 0068
.org 0x793ee
	movs r1, #128	@ 000793ee 8021
.org 0x793f0
	lsls r1, r1, #2	@ 000793f0 8900
.org 0x793f2
	ands r0, r1	@ 000793f2 0840
.org 0x793f4
	cmp r0, #0	@ 000793f4 0028
.org 0x793f6
	bne.n 0x79404	@ 000793f6 05d1
.org 0x793f8
	adds r0, r5, #0	@ 000793f8 281c
.org 0x793fa
	adds r0, #164	@ 000793fa a430
.org 0x793fc
	movs r1, #0	@ 000793fc 0021
.org 0x793fe
	ldrsh r0, [r0, r1]	@ 000793fe 405e
.org 0x79400
	cmp r0, #0	@ 00079400 0028
.org 0x79402
	bne.n 0x79434	@ 00079402 17d1
.org 0x79404
	ldr r0, [pc, #36]	@ 00079404 0948
.org 0x79406
	ldrh r1, [r0, #8]	@ 00079406 0189
.org 0x79408
	movs r0, #8	@ 00079408 0820
.org 0x7940a
	ands r0, r1	@ 0007940a 0840
.org 0x7940c
	cmp r0, #0	@ 0007940c 0028
.org 0x7940e
	bne.n 0x79434	@ 0007940e 11d1
.org 0x79410
	ldr r1, [pc, #28]	@ 00079410 0749
.org 0x79412
	ldrb r0, [r5, #9]	@ 00079412 687a
.org 0x79414
	lsls r0, r0, #2	@ 00079414 8000
.org 0x79416
	adds r0, r0, r1	@ 00079416 4018
.org 0x79418
	movs r1, #2	@ 00079418 0221
.org 0x7941a
	str r1, [r5, #12]	@ 0007941a e960
.org 0x7941c
	ldr r0, [r0, #0]	@ 0007941c 0068
.org 0x7941e
	ldr r0, [r0, #8]	@ 0007941e 8068
.org 0x79420
	str r0, [r5, #20]	@ 00079420 6861
.org 0x79422
	adds r0, r5, #0	@ 00079422 281c
.org 0x79424
	bl 0x794d0	@ 00079424 00f054f8
.org 0x79428
	b.n 0x794bc	@ 00079428 48e0
.org 0x7942a
	.byte 0x00	@ 0007942a data
.org 0x7942b
	.byte 0x00	@ 0007942b data
.org 0x7942c
	.byte 0x10,0xe9,0x02,0x02	@ 0007942c data
.org 0x79430
	.byte 0x70,0x7d,0x85,0x08	@ 00079430 data
.org 0x79434
	adds r0, r5, #0	@ 00079434 281c
.org 0x79436
	adds r0, #188	@ 00079436 bc30
.org 0x79438
	ldr r1, [r5, #84]	@ 00079438 696d
.org 0x7943a
	ldr r2, [r5, #88]	@ 0007943a aa6d
.org 0x7943c
	str r1, [r0, #0]	@ 0007943c 0160
.org 0x7943e
	str r2, [r0, #4]	@ 0007943e 4260
.org 0x79440
	subs r0, #8	@ 00079440 0838
.org 0x79442
	ldr r1, [r0, #20]	@ 00079442 4169
.org 0x79444
	adds r4, r0, #0	@ 00079444 041c
.org 0x79446
	cmp r1, #0	@ 00079446 0029
.org 0x79448
	beq.n 0x79454	@ 00079448 04d0
.org 0x7944a
	ldrb r0, [r1, #12]	@ 0007944a 087b
.org 0x7944c
	cmp r0, #1	@ 0007944c 0128
.org 0x7944e
	bls.n 0x79454	@ 0007944e 01d9
.org 0x79450
	movs r0, #0	@ 00079450 0020
.org 0x79452
	str r0, [r4, #20]	@ 00079452 6061
.org 0x79454
	ldr r0, [r4, #24]	@ 00079454 a069
.org 0x79456
	cmp r0, #0	@ 00079456 0028
.org 0x79458
	beq.n 0x79464	@ 00079458 04d0
.org 0x7945a
	ldrb r0, [r0, #12]	@ 0007945a 007b
.org 0x7945c
	cmp r0, #1	@ 0007945c 0128
.org 0x7945e
	bls.n 0x79464	@ 0007945e 01d9
.org 0x79460
	movs r0, #0	@ 00079460 0020
.org 0x79462
	str r0, [r4, #24]	@ 00079462 a061
.org 0x79464
	ldr r1, [pc, #92]	@ 00079464 1749
.org 0x79466
	ldrb r0, [r5, #13]	@ 00079466 687b
.org 0x79468
	lsls r0, r0, #2	@ 00079468 8000
.org 0x7946a
	adds r0, r0, r1	@ 0007946a 4018
.org 0x7946c
	ldr r1, [r0, #0]	@ 0007946c 0168
.org 0x7946e
	adds r0, r5, #0	@ 0007946e 281c
.org 0x79470
	bl 0x128f80	@ 00079470 aff086fd
.org 0x79474
	ldrb r0, [r5, #13]	@ 00079474 687b
.org 0x79476
	cmp r0, #0	@ 00079476 0028
.org 0x79478
	beq.n 0x794bc	@ 00079478 20d0
.org 0x7947a
	adds r2, r5, #0	@ 0007947a 2a1c
.org 0x7947c
	adds r2, #213	@ 0007947c d532
.org 0x7947e
	ldrb r0, [r2, #0]	@ 0007947e 1078
.org 0x79480
	cmp r0, #0	@ 00079480 0028
.org 0x79482
	beq.n 0x79496	@ 00079482 08d0
.org 0x79484
	ldr r1, [pc, #64]	@ 00079484 1049
.org 0x79486
	lsls r0, r0, #1	@ 00079486 4000
.org 0x79488
	adds r0, r0, r1	@ 00079488 4018
.org 0x7948a
	movs r3, #0	@ 0007948a 0023
.org 0x7948c
	ldrsh r1, [r0, r3]	@ 0007948c c15e
.org 0x7948e
	lsls r1, r1, #2	@ 0007948e 8900
.org 0x79490
	ldr r0, [r4, #4]	@ 00079490 6068
.org 0x79492
	adds r0, r0, r1	@ 00079492 4018
.org 0x79494
	str r0, [r5, #88]	@ 00079494 a865
.org 0x79496
	ldrb r0, [r2, #0]	@ 00079496 1078
.org 0x79498
	adds r0, #1	@ 00079498 0130
.org 0x7949a
	movs r4, #0	@ 0007949a 0024
.org 0x7949c
	strb r0, [r2, #0]	@ 0007949c 1070
.org 0x7949e
	ldr r0, [r5, #84]	@ 0007949e 686d
.org 0x794a0
	ldr r1, [pc, #40]	@ 000794a0 0a49
.org 0x794a2
	adds r0, r0, r1	@ 000794a2 4018
.org 0x794a4
	str r0, [sp, #0]	@ 000794a4 0090
.org 0x794a6
	ldr r0, [r5, #88]	@ 000794a6 a86d
.org 0x794a8
	movs r3, #185	@ 000794a8 b923
.org 0x794aa
	lsls r3, r3, #8	@ 000794aa 1b02
.org 0x794ac
	adds r0, r0, r3	@ 000794ac c018
.org 0x794ae
	str r0, [sp, #4]	@ 000794ae 0190
.org 0x794b0
	mov r0, sp	@ 000794b0 6846
.org 0x794b2
	bl 0x1c550	@ 000794b2 a3f74df8
.org 0x794b6
	adds r0, r5, #0	@ 000794b6 281c
.org 0x794b8
	adds r0, #215	@ 000794b8 d730
