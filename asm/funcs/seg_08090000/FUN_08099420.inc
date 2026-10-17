@ FUN_08099420  entry 0x08099420  size 290
.thumb
.org 0x99420
FUN_08099420:
	push {r4, r5, lr}	@ 00099420 30b5
.org 0x99422
	sub sp, #8	@ 00099422 82b0
.org 0x99424
	adds r5, r0, #0	@ 00099424 051c
.org 0x99426
	ldrb r0, [r5, #15]	@ 00099426 e87b
.org 0x99428
	cmp r0, #0	@ 00099428 0028
.org 0x9942a
	bne.n 0x994a8	@ 0009942a 3dd1
.org 0x9942c
	adds r0, r5, #0	@ 0009942c 281c
.org 0x9942e
	bl 0x1cd28	@ 0009942e 83f77bfc
.org 0x99432
	ldr r1, [pc, #24]	@ 00099432 0649
.org 0x99434
	adds r0, r5, #0	@ 00099434 281c
.org 0x99436
	bl 0x1cf00	@ 00099436 83f763fd
.org 0x9943a
	adds r0, r5, #0	@ 0009943a 281c
.org 0x9943c
	adds r0, #188	@ 0009943c bc30
.org 0x9943e
	ldrb r2, [r0, #0]	@ 0009943e 0278
.org 0x99440
	cmp r2, #0	@ 00099440 002a
.org 0x99442
	beq.n 0x99450	@ 00099442 05d0
.org 0x99444
	ldrb r1, [r5, #10]	@ 00099444 a97a
.org 0x99446
	movs r0, #16	@ 00099446 1020
.org 0x99448
	orrs r0, r1	@ 00099448 0843
.org 0x9944a
	b.n 0x99456	@ 0009944a 04e0
.org 0x9944c
	.byte 0x05,0x68,0x00,0x00	@ 0009944c data
.org 0x99450
	ldrb r1, [r5, #10]	@ 00099450 a97a
.org 0x99452
	movs r0, #239	@ 00099452 ef20
.org 0x99454
	ands r0, r1	@ 00099454 0840
.org 0x99456
	strb r0, [r5, #10]	@ 00099456 a872
.org 0x99458
	movs r4, #1	@ 00099458 0124
.org 0x9945a
	adds r1, r4, #0	@ 0009945a 211c
.org 0x9945c
	ands r1, r2	@ 0009945c 1140
.org 0x9945e
	adds r0, r5, #0	@ 0009945e 281c
.org 0x99460
	adds r0, #76	@ 00099460 4c30
.org 0x99462
	strb r1, [r0, #0]	@ 00099462 0170
.org 0x99464
	adds r3, r5, #0	@ 00099464 2b1c
.org 0x99466
	adds r3, #74	@ 00099466 4a33
.org 0x99468
	lsls r1, r1, #4	@ 00099468 0901
.org 0x9946a
	ldrb r2, [r3, #0]	@ 0009946a 1a78
.org 0x9946c
	movs r0, #17	@ 0009946c 1120
.org 0x9946e
	negs r0, r0	@ 0009946e 4042
.org 0x99470
	ands r0, r2	@ 00099470 1040
.org 0x99472
	orrs r0, r1	@ 00099472 0843
.org 0x99474
	strb r0, [r3, #0]	@ 00099474 1870
.org 0x99476
	adds r0, r5, #0	@ 00099476 281c
.org 0x99478
	adds r0, #84	@ 00099478 5430
.org 0x9947a
	ldrb r3, [r5, #10]	@ 0009947a ab7a
.org 0x9947c
	lsrs r3, r3, #4	@ 0009947c 1b09
.org 0x9947e
	ands r3, r4	@ 0009947e 2340
.org 0x99480
	movs r1, #1	@ 00099480 0121
.org 0x99482
	movs r2, #0	@ 00099482 0022
.org 0x99484
	bl 0xdd574	@ 00099484 44f076f8
.org 0x99488
	ldrb r1, [r5, #10]	@ 00099488 a97a
.org 0x9948a
	movs r0, #16	@ 0009948a 1020
.org 0x9948c
	ands r0, r1	@ 0009948c 0840
.org 0x9948e
	cmp r0, #0	@ 0009948e 0028
.org 0x99490
	beq.n 0x99496	@ 00099490 01d0
.org 0x99492
	movs r0, #192	@ 00099492 c020
.org 0x99494
	b.n 0x9949a	@ 00099494 01e0
.org 0x99496
	movs r0, #192	@ 00099496 c020
.org 0x99498
	negs r0, r0	@ 00099498 4042
.org 0x9949a
	str r0, [r5, #92]	@ 0009949a e865
.org 0x9949c
	movs r0, #0	@ 0009949c 0020
.org 0x9949e
	str r0, [r5, #96]	@ 0009949e 2866
.org 0x994a0
	strb r0, [r5, #18]	@ 000994a0 a874
.org 0x994a2
	ldrb r0, [r5, #15]	@ 000994a2 e87b
.org 0x994a4
	adds r0, #1	@ 000994a4 0130
.org 0x994a6
	strb r0, [r5, #15]	@ 000994a6 e873
.org 0x994a8
	adds r0, r5, #0	@ 000994a8 281c
.org 0x994aa
	bl 0x1cff0	@ 000994aa 83f7a1fd
.org 0x994ae
	ldrb r1, [r5, #18]	@ 000994ae a97c
.org 0x994b0
	adds r0, r5, #0	@ 000994b0 281c
.org 0x994b2
	adds r0, #36	@ 000994b2 2430
.org 0x994b4
	strb r1, [r0, #0]	@ 000994b4 0170
.org 0x994b6
	ldrb r0, [r5, #18]	@ 000994b6 a87c
.org 0x994b8
	subs r0, #2	@ 000994b8 0238
.org 0x994ba
	strb r0, [r5, #18]	@ 000994ba a874
.org 0x994bc
	lsls r0, r0, #24	@ 000994bc 0006
.org 0x994be
	lsrs r0, r0, #24	@ 000994be 000e
.org 0x994c0
	cmp r0, #220	@ 000994c0 dc28
.org 0x994c2
	bhi.n 0x994c8	@ 000994c2 01d8
.org 0x994c4
	movs r0, #221	@ 000994c4 dd20
.org 0x994c6
	strb r0, [r5, #18]	@ 000994c6 a874
.org 0x994c8
	ldr r0, [r5, #84]	@ 000994c8 686d
.org 0x994ca
	ldr r1, [r5, #92]	@ 000994ca e96d
.org 0x994cc
	adds r0, r0, r1	@ 000994cc 4018
.org 0x994ce
	str r0, [r5, #84]	@ 000994ce 6865
.org 0x994d0
	ldr r1, [r5, #88]	@ 000994d0 a96d
.org 0x994d2
	ldr r2, [r5, #96]	@ 000994d2 2a6e
.org 0x994d4
	adds r1, r1, r2	@ 000994d4 8918
.org 0x994d6
	str r1, [r5, #88]	@ 000994d6 a965
.org 0x994d8
	adds r2, #64	@ 000994d8 4032
.org 0x994da
	str r2, [r5, #96]	@ 000994da 2a66
.org 0x994dc
	movs r2, #192	@ 000994dc c022
.org 0x994de
	lsls r2, r2, #4	@ 000994de 1201
.org 0x994e0
	adds r1, r1, r2	@ 000994e0 8918
.org 0x994e2
	bl 0x7c7c	@ 000994e2 6ef7cbfb
.org 0x994e6
	lsls r0, r0, #16	@ 000994e6 0004
.org 0x994e8
	cmp r0, #0	@ 000994e8 0028
.org 0x994ea
	beq.n 0x9953e	@ 000994ea 28d0
.org 0x994ec
	ldr r0, [r5, #84]	@ 000994ec 686d
.org 0x994ee
	str r0, [sp, #0]	@ 000994ee 0090
.org 0x994f0
	ldr r0, [r5, #88]	@ 000994f0 a86d
.org 0x994f2
	movs r1, #192	@ 000994f2 c021
.org 0x994f4
	lsls r1, r1, #3	@ 000994f4 c900
.org 0x994f6
	adds r0, r0, r1	@ 000994f6 4018
.org 0x994f8
	str r0, [sp, #4]	@ 000994f8 0190
.org 0x994fa
	movs r0, #1	@ 000994fa 0120
.org 0x994fc
	mov r1, sp	@ 000994fc 6946
.org 0x994fe
	bl 0xd0c88	@ 000994fe 37f0c3fb
.org 0x99502
	movs r0, #42	@ 00099502 2a20
.org 0x99504
	bl 0x2b10	@ 00099504 69f704fb
.org 0x99508
	adds r4, r5, #0	@ 00099508 2c1c
.org 0x9950a
	adds r4, #84	@ 0009950a 5434
.org 0x9950c
	movs r0, #3	@ 0009950c 0320
.org 0x9950e
	movs r1, #21	@ 0009950e 1521
.org 0x99510
	adds r2, r4, #0	@ 00099510 221c
.org 0x99512
	bl 0x2ab88	@ 00099512 91f739fb
.org 0x99516
	ldr r2, [pc, #48]	@ 00099516 0c4a
.org 0x99518
	ldrh r1, [r2, #12]	@ 00099518 9189
.org 0x9951a
	ldr r0, [pc, #48]	@ 0009951a 0c48
.org 0x9951c
	cmp r1, r0	@ 0009951c 8142
.org 0x9951e
	bhi.n 0x99524	@ 0009951e 01d8
.org 0x99520
	adds r0, r1, #1	@ 00099520 481c
.org 0x99522
	strh r0, [r2, #12]	@ 00099522 9081
.org 0x99524
	adds r0, r5, #0	@ 00099524 281c
.org 0x99526
	adds r1, r4, #0	@ 00099526 211c
.org 0x99528
	bl 0x2abe0	@ 00099528 91f75afb
.org 0x9952c
	ldr r1, [pc, #32]	@ 0009952c 0849
.org 0x9952e
	ldrb r0, [r5, #9]	@ 0009952e 687a
.org 0x99530
	lsls r0, r0, #2	@ 00099530 8000
.org 0x99532
	adds r0, r0, r1	@ 00099532 4018
.org 0x99534
	movs r1, #4	@ 00099534 0421
.org 0x99536
	str r1, [r5, #12]	@ 00099536 e960
.org 0x99538
	ldr r0, [r0, #0]	@ 00099538 0068
.org 0x9953a
	ldr r0, [r0, #16]	@ 0009953a 0069
.org 0x9953c
	str r0, [r5, #20]	@ 0009953c 6861
.org 0x9953e
	add sp, #8	@ 0009953e 02b0
.org 0x99540
	pop {r4, r5}	@ 00099540 30bc
