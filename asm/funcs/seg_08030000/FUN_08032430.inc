@ FUN_08032430  entry 0x08032430  size 240
.thumb
.org 0x32430
FUN_08032430:
	push {r4, r5, lr}	@ 00032430 30b5
.org 0x32432
	adds r5, r0, #0	@ 00032432 051c
.org 0x32434
	movs r4, #1	@ 00032434 0124
.org 0x32436
	strb r4, [r5, #15]	@ 00032436 ec73
.org 0x32438
	movs r0, #10	@ 00032438 0a20
.org 0x3243a
	bl 0x2b10	@ 0003243a d0f769fb
.org 0x3243e
	ldrb r1, [r5, #10]	@ 0003243e a97a
.org 0x32440
	lsrs r1, r1, #4	@ 00032440 0909
.org 0x32442
	ands r1, r4	@ 00032442 2140
.org 0x32444
	movs r2, #161	@ 00032444 a122
.org 0x32446
	lsls r2, r2, #1	@ 00032446 5200
.org 0x32448
	adds r0, r5, r2	@ 00032448 a818
.org 0x3244a
	ldrb r0, [r0, #0]	@ 0003244a 0078
.org 0x3244c
	lsls r0, r0, #31	@ 0003244c c007
.org 0x3244e
	lsrs r0, r0, #31	@ 0003244e c00f
.org 0x32450
	cmp r1, r0	@ 00032450 8142
.org 0x32452
	beq.n 0x32460	@ 00032452 05d0
.org 0x32454
	movs r1, #150	@ 00032454 9621
.org 0x32456
	lsls r1, r1, #7	@ 00032456 c901
.org 0x32458
	adds r0, r5, #0	@ 00032458 281c
.org 0x3245a
	bl 0x1cf00	@ 0003245a eaf751fd
.org 0x3245e
	b.n 0x3246a	@ 0003245e 04e0
.org 0x32460
	movs r1, #148	@ 00032460 9421
.org 0x32462
	lsls r1, r1, #7	@ 00032462 c901
.org 0x32464
	adds r0, r5, #0	@ 00032464 281c
.org 0x32466
	bl 0x1cf00	@ 00032466 eaf74bfd
.org 0x3246a
	adds r0, r5, #0	@ 0003246a 281c
.org 0x3246c
	adds r0, #180	@ 0003246c b430
.org 0x3246e
	ldrb r1, [r0, #17]	@ 0003246e 417c
.org 0x32470
	adds r2, r0, #0	@ 00032470 021c
.org 0x32472
	cmp r1, #10	@ 00032472 0a29
.org 0x32474
	bne.n 0x324a6	@ 00032474 17d1
.org 0x32476
	movs r0, #161	@ 00032476 a120
.org 0x32478
	lsls r0, r0, #1	@ 00032478 4000
.org 0x3247a
	adds r3, r5, r0	@ 0003247a 2b18
.org 0x3247c
	ldrb r1, [r3, #0]	@ 0003247c 1978
.org 0x3247e
	movs r0, #64	@ 0003247e 4020
.org 0x32480
	ands r0, r1	@ 00032480 0840
.org 0x32482
	lsls r0, r0, #24	@ 00032482 0006
.org 0x32484
	lsrs r0, r0, #24	@ 00032484 000e
.org 0x32486
	cmp r0, #0	@ 00032486 0028
.org 0x32488
	beq.n 0x3249e	@ 00032488 09d0
.org 0x3248a
	movs r0, #65	@ 0003248a 4120
.org 0x3248c
	negs r0, r0	@ 0003248c 4042
.org 0x3248e
	ands r0, r1	@ 0003248e 0840
.org 0x32490
	strb r0, [r3, #0]	@ 00032490 1870
.org 0x32492
	ldr r0, [r2, #116]	@ 00032492 506f
.org 0x32494
	asrs r0, r0, #2	@ 00032494 8010
.org 0x32496
	str r0, [r5, #92]	@ 00032496 e865
.org 0x32498
	ldr r0, [r2, #120]	@ 00032498 906f
.org 0x3249a
	asrs r0, r0, #2	@ 0003249a 8010
.org 0x3249c
	b.n 0x324a0	@ 0003249c 00e0
.org 0x3249e
	str r0, [r5, #92]	@ 0003249e e865
.org 0x324a0
	str r0, [r5, #96]	@ 000324a0 2866
.org 0x324a2
	movs r0, #0	@ 000324a2 0020
.org 0x324a4
	b.n 0x324ee	@ 000324a4 23e0
.org 0x324a6
	movs r0, #161	@ 000324a6 a120
.org 0x324a8
	lsls r0, r0, #1	@ 000324a8 4000
.org 0x324aa
	adds r3, r5, r0	@ 000324aa 2b18
.org 0x324ac
	ldrb r1, [r3, #0]	@ 000324ac 1978
.org 0x324ae
	movs r0, #64	@ 000324ae 4020
.org 0x324b0
	ands r0, r1	@ 000324b0 0840
.org 0x324b2
	cmp r0, #0	@ 000324b2 0028
.org 0x324b4
	beq.n 0x324d4	@ 000324b4 0ed0
.org 0x324b6
	movs r0, #65	@ 000324b6 4120
.org 0x324b8
	negs r0, r0	@ 000324b8 4042
.org 0x324ba
	ands r0, r1	@ 000324ba 0840
.org 0x324bc
	strb r0, [r3, #0]	@ 000324bc 1870
.org 0x324be
	ldr r1, [r2, #116]	@ 000324be 516f
.org 0x324c0
	str r1, [r5, #92]	@ 000324c0 e965
.org 0x324c2
	ldr r0, [r2, #120]	@ 000324c2 906f
.org 0x324c4
	str r0, [r5, #96]	@ 000324c4 2866
.org 0x324c6
	str r1, [r2, #104]	@ 000324c6 9166
.org 0x324c8
	movs r0, #2	@ 000324c8 0220
.org 0x324ca
	strb r0, [r5, #15]	@ 000324ca e873
.org 0x324cc
	adds r0, r5, #0	@ 000324cc 281c
.org 0x324ce
	bl 0x325a0	@ 000324ce 00f067f8
.org 0x324d2
	b.n 0x32522	@ 000324d2 26e0
.org 0x324d4
	movs r0, #1	@ 000324d4 0120
.org 0x324d6
	ands r0, r1	@ 000324d6 0840
.org 0x324d8
	cmp r0, #0	@ 000324d8 0028
.org 0x324da
	beq.n 0x324e4	@ 000324da 03d0
.org 0x324dc
	ldr r0, [pc, #0]	@ 000324dc 0048
.org 0x324de
	b.n 0x324e8	@ 000324de 03e0
.org 0x324e0
	.byte 0x00,0xff,0xff,0xff	@ 000324e0 data
.org 0x324e4
	movs r0, #128	@ 000324e4 8020
.org 0x324e6
	lsls r0, r0, #1	@ 000324e6 4000
.org 0x324e8
	str r0, [r5, #92]	@ 000324e8 e865
.org 0x324ea
	movs r0, #0	@ 000324ea 0020
.org 0x324ec
	str r0, [r5, #96]	@ 000324ec 2866
.org 0x324ee
	str r0, [r2, #124]	@ 000324ee d067
.org 0x324f0
	movs r2, #154	@ 000324f0 9a22
.org 0x324f2
	lsls r2, r2, #1	@ 000324f2 5200
.org 0x324f4
	adds r1, r5, r2	@ 000324f4 a918
.org 0x324f6
	str r0, [r1, #0]	@ 000324f6 0860
.org 0x324f8
	adds r2, #4	@ 000324f8 0432
.org 0x324fa
	adds r1, r5, r2	@ 000324fa a918
.org 0x324fc
	strh r0, [r1, #0]	@ 000324fc 0880
.org 0x324fe
	ldr r1, [pc, #20]	@ 000324fe 0549
.org 0x32500
	adds r0, r5, r1	@ 00032500 6818
.org 0x32502
	ldrb r0, [r0, #0]	@ 00032502 0078
.org 0x32504
	cmp r0, #0	@ 00032504 0028
.org 0x32506
	beq.n 0x32518	@ 00032506 07d0
.org 0x32508
	movs r0, #1	@ 00032508 0120
.org 0x3250a
	strb r0, [r5, #15]	@ 0003250a e873
.org 0x3250c
	adds r0, r5, #0	@ 0003250c 281c
.org 0x3250e
	bl 0x32528	@ 0003250e 00f00bf8
.org 0x32512
	b.n 0x32522	@ 00032512 06e0
.org 0x32514
	.byte 0xb9,0x01,0x00,0x00	@ 00032514 data
.org 0x32518
	movs r0, #2	@ 00032518 0220
.org 0x3251a
	strb r0, [r5, #15]	@ 0003251a e873
.org 0x3251c
	adds r0, r5, #0	@ 0003251c 281c
.org 0x3251e
	bl 0x325a0	@ 0003251e 00f03ff8
