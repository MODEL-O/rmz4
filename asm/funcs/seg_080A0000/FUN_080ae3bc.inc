@ FUN_080ae3bc  entry 0x080ae3bc  size 282
.thumb
.org 0xae3bc
FUN_080ae3bc:
	push {r4, r5, r6, r7, lr}	@ 000ae3bc f0b5
.org 0xae3be
	adds r6, r0, #0	@ 000ae3be 061c
.org 0xae3c0
	ldr r5, [r6, #40]	@ 000ae3c0 b56a
.org 0xae3c2
	ldrb r0, [r6, #14]	@ 000ae3c2 b07b
.org 0xae3c4
	cmp r0, #0	@ 000ae3c4 0028
.org 0xae3c6
	bne.n 0xae3f2	@ 000ae3c6 14d1
.org 0xae3c8
	adds r0, r6, #0	@ 000ae3c8 301c
.org 0xae3ca
	bl 0x1ce54	@ 000ae3ca 6ef743fd
.org 0xae3ce
	ldrb r1, [r6, #10]	@ 000ae3ce b17a
.org 0xae3d0
	movs r0, #1	@ 000ae3d0 0120
.org 0xae3d2
	orrs r0, r1	@ 000ae3d2 0843
.org 0xae3d4
	strb r0, [r6, #10]	@ 000ae3d4 b072
.org 0xae3d6
	ldr r1, [pc, #172]	@ 000ae3d6 2b49
.org 0xae3d8
	adds r0, r6, #0	@ 000ae3d8 301c
.org 0xae3da
	bl 0x1cf00	@ 000ae3da 6ef791fd
.org 0xae3de
	adds r2, r6, #0	@ 000ae3de 321c
.org 0xae3e0
	adds r2, #188	@ 000ae3e0 bc32
.org 0xae3e2
	movs r1, #0	@ 000ae3e2 0021
.org 0xae3e4
	movs r0, #32	@ 000ae3e4 2020
.org 0xae3e6
	strh r0, [r2, #0]	@ 000ae3e6 1080
.org 0xae3e8
	strb r1, [r6, #18]	@ 000ae3e8 b174
.org 0xae3ea
	strb r1, [r6, #15]	@ 000ae3ea f173
.org 0xae3ec
	ldrb r0, [r6, #14]	@ 000ae3ec b07b
.org 0xae3ee
	adds r0, #1	@ 000ae3ee 0130
.org 0xae3f0
	strb r0, [r6, #14]	@ 000ae3f0 b073
.org 0xae3f2
	adds r0, r6, #0	@ 000ae3f2 301c
.org 0xae3f4
	bl 0x1cff0	@ 000ae3f4 6ef7fcfd
.org 0xae3f8
	adds r2, r6, #0	@ 000ae3f8 321c
.org 0xae3fa
	adds r2, #188	@ 000ae3fa bc32
.org 0xae3fc
	ldrh r0, [r2, #0]	@ 000ae3fc 1088
.org 0xae3fe
	adds r0, #16	@ 000ae3fe 1030
.org 0xae400
	strh r0, [r2, #0]	@ 000ae400 1080
.org 0xae402
	lsls r0, r0, #16	@ 000ae402 0004
.org 0xae404
	lsrs r0, r0, #16	@ 000ae404 000c
.org 0xae406
	movs r1, #128	@ 000ae406 8021
.org 0xae408
	lsls r1, r1, #1	@ 000ae408 4900
.org 0xae40a
	cmp r0, r1	@ 000ae40a 8842
.org 0xae40c
	bls.n 0xae410	@ 000ae40c 00d9
.org 0xae40e
	strh r1, [r2, #0]	@ 000ae40e 1180
.org 0xae410
	ldrh r0, [r2, #0]	@ 000ae410 1088
.org 0xae412
	adds r1, r6, #0	@ 000ae412 311c
.org 0xae414
	adds r1, #80	@ 000ae414 5031
.org 0xae416
	strh r0, [r1, #0]	@ 000ae416 0880
.org 0xae418
	ldrh r0, [r2, #0]	@ 000ae418 1088
.org 0xae41a
	adds r1, #2	@ 000ae41a 0231
.org 0xae41c
	strh r0, [r1, #0]	@ 000ae41c 0880
.org 0xae41e
	ldrb r7, [r6, #15]	@ 000ae41e f77b
.org 0xae420
	cmp r7, #0	@ 000ae420 002f
.org 0xae422
	bne.n 0xae498	@ 000ae422 39d1
.org 0xae424
	ldr r1, [pc, #96]	@ 000ae424 1849
.org 0xae426
	ldrb r0, [r6, #18]	@ 000ae426 b07c
.org 0xae428
	lsls r0, r0, #2	@ 000ae428 8000
.org 0xae42a
	adds r0, r0, r1	@ 000ae42a 4018
.org 0xae42c
	ldr r1, [r5, #84]	@ 000ae42c 696d
.org 0xae42e
	ldr r0, [r0, #0]	@ 000ae42e 0068
.org 0xae430
	adds r2, r1, r0	@ 000ae430 0a18
.org 0xae432
	str r2, [r6, #84]	@ 000ae432 7265
.org 0xae434
	ldr r1, [pc, #84]	@ 000ae434 1549
.org 0xae436
	ldrb r0, [r6, #18]	@ 000ae436 b07c
.org 0xae438
	lsls r0, r0, #2	@ 000ae438 8000
.org 0xae43a
	adds r0, r0, r1	@ 000ae43a 4018
.org 0xae43c
	ldr r1, [r5, #88]	@ 000ae43c a96d
.org 0xae43e
	ldr r0, [r0, #0]	@ 000ae43e 0068
.org 0xae440
	adds r1, r1, r0	@ 000ae440 0918
.org 0xae442
	str r1, [r6, #88]	@ 000ae442 b165
.org 0xae444
	ldrb r0, [r6, #18]	@ 000ae444 b07c
.org 0xae446
	adds r0, #1	@ 000ae446 0130
.org 0xae448
	strb r0, [r6, #18]	@ 000ae448 b074
.org 0xae44a
	lsls r0, r0, #24	@ 000ae44a 0006
.org 0xae44c
	lsrs r0, r0, #24	@ 000ae44c 000e
.org 0xae44e
	cmp r0, #4	@ 000ae44e 0428
.org 0xae450
	bls.n 0xae4e4	@ 000ae450 48d9
.org 0xae452
	ldr r0, [r5, #84]	@ 000ae452 686d
.org 0xae454
	ldr r3, [pc, #56]	@ 000ae454 0e4b
.org 0xae456
	adds r0, r0, r3	@ 000ae456 c018
.org 0xae458
	str r0, [r6, #92]	@ 000ae458 f065
.org 0xae45a
	ldr r4, [r5, #88]	@ 000ae45a ac6d
.org 0xae45c
	ldr r3, [pc, #52]	@ 000ae45c 0d4b
.org 0xae45e
	adds r4, r4, r3	@ 000ae45e e418
.org 0xae460
	subs r0, r0, r2	@ 000ae460 801a
.org 0xae462
	str r0, [r6, #92]	@ 000ae462 f065
.org 0xae464
	subs r4, r4, r1	@ 000ae464 641a
.org 0xae466
	str r4, [r6, #96]	@ 000ae466 3466
.org 0xae468
	movs r5, #24	@ 000ae468 1825
.org 0xae46a
	movs r1, #24	@ 000ae46a 1821
.org 0xae46c
	bl 0x128fb8	@ 000ae46c 7af0a4fd
.org 0xae470
	str r0, [r6, #92]	@ 000ae470 f065
.org 0xae472
	adds r0, r4, #0	@ 000ae472 201c
.org 0xae474
	movs r1, #24	@ 000ae474 1821
.org 0xae476
	bl 0x128fb8	@ 000ae476 7af09ffd
.org 0xae47a
	str r0, [r6, #96]	@ 000ae47a 3066
.org 0xae47c
	strb r5, [r6, #18]	@ 000ae47c b574
.org 0xae47e
	adds r0, r7, #1	@ 000ae47e 781c
.org 0xae480
	strb r0, [r6, #15]	@ 000ae480 f073
.org 0xae482
	b.n 0xae4e4	@ 000ae482 2fe0
.org 0xae484
	.byte 0x02,0xa2,0x00,0x00	@ 000ae484 data
.org 0xae488
	.byte 0xd0,0x2f,0x86,0x08	@ 000ae488 data
.org 0xae48c
	.byte 0xe4,0x2f,0x86,0x08	@ 000ae48c data
.org 0xae490
	.byte 0x00,0x98,0xff,0xff	@ 000ae490 data
.org 0xae494
	.byte 0x00,0xbe,0xff,0xff	@ 000ae494 data
.org 0xae498
	ldr r2, [r6, #84]	@ 000ae498 726d
.org 0xae49a
	ldr r0, [r6, #92]	@ 000ae49a f06d
.org 0xae49c
	adds r2, r2, r0	@ 000ae49c 1218
.org 0xae49e
	str r2, [r6, #84]	@ 000ae49e 7265
.org 0xae4a0
	ldr r3, [r6, #88]	@ 000ae4a0 b36d
.org 0xae4a2
	ldr r0, [r6, #96]	@ 000ae4a2 306e
.org 0xae4a4
	adds r3, r3, r0	@ 000ae4a4 1b18
.org 0xae4a6
	str r3, [r6, #88]	@ 000ae4a6 b365
.org 0xae4a8
	adds r4, r5, #0	@ 000ae4a8 2c1c
.org 0xae4aa
	adds r4, #188	@ 000ae4aa bc34
.org 0xae4ac
	ldr r0, [r5, #84]	@ 000ae4ac 686d
.org 0xae4ae
	ldr r1, [r4, #0]	@ 000ae4ae 2168
.org 0xae4b0
	subs r0, r0, r1	@ 000ae4b0 401a
.org 0xae4b2
	adds r2, r2, r0	@ 000ae4b2 1218
.org 0xae4b4
	str r2, [r6, #84]	@ 000ae4b4 7265
.org 0xae4b6
	ldr r0, [r5, #88]	@ 000ae4b6 a86d
.org 0xae4b8
	ldr r1, [r4, #4]	@ 000ae4b8 6168
.org 0xae4ba
	subs r0, r0, r1	@ 000ae4ba 401a
.org 0xae4bc
	adds r3, r3, r0	@ 000ae4bc 1b18
.org 0xae4be
	str r3, [r6, #88]	@ 000ae4be b365
.org 0xae4c0
	ldrb r0, [r6, #18]	@ 000ae4c0 b07c
.org 0xae4c2
	subs r0, #1	@ 000ae4c2 0138
.org 0xae4c4
	strb r0, [r6, #18]	@ 000ae4c4 b074
.org 0xae4c6
	lsls r0, r0, #24	@ 000ae4c6 0006
.org 0xae4c8
	lsrs r0, r0, #24	@ 000ae4c8 000e
.org 0xae4ca
	cmp r0, #255	@ 000ae4ca ff28
.org 0xae4cc
	bne.n 0xae4e4	@ 000ae4cc 0ad1
.org 0xae4ce
	ldr r0, [r5, #84]	@ 000ae4ce 686d
.org 0xae4d0
	ldr r1, [pc, #24]	@ 000ae4d0 0649
.org 0xae4d2
	adds r0, r0, r1	@ 000ae4d2 4018
.org 0xae4d4
	str r0, [r6, #84]	@ 000ae4d4 7065
