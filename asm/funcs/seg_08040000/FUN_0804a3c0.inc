@ FUN_0804a3c0  entry 0x0804a3c0  size 552
.thumb
.org 0x4a3c0
FUN_0804a3c0:
	push {r4, r5, r6, r7, lr}	@ 0004a3c0 f0b5
.org 0x4a3c2
	mov r7, r8	@ 0004a3c2 4746
.org 0x4a3c4
	push {r7}	@ 0004a3c4 80b4
.org 0x4a3c6
	adds r5, r0, #0	@ 0004a3c6 051c
.org 0x4a3c8
	ldr r0, [r5, #40]	@ 0004a3c8 a86a
.org 0x4a3ca
	mov r8, r0	@ 0004a3ca 8046
.org 0x4a3cc
	adds r0, r5, #0	@ 0004a3cc 281c
.org 0x4a3ce
	bl 0x1cff0	@ 0004a3ce d2f70ffe
.org 0x4a3d2
	ldrb r6, [r5, #13]	@ 0004a3d2 6e7b
.org 0x4a3d4
	cmp r6, #0	@ 0004a3d4 002e
.org 0x4a3d6
	beq.n 0x4a3da	@ 0004a3d6 00d0
.org 0x4a3d8
	b.n 0x4a4e2	@ 0004a3d8 83e0
.org 0x4a3da
	ldrb r0, [r5, #18]	@ 0004a3da a87c
.org 0x4a3dc
	subs r0, #1	@ 0004a3dc 0138
.org 0x4a3de
	strb r0, [r5, #18]	@ 0004a3de a874
.org 0x4a3e0
	lsls r0, r0, #24	@ 0004a3e0 0006
.org 0x4a3e2
	lsrs r0, r0, #24	@ 0004a3e2 000e
.org 0x4a3e4
	cmp r0, #255	@ 0004a3e4 ff28
.org 0x4a3e6
	beq.n 0x4a3ea	@ 0004a3e6 00d0
.org 0x4a3e8
	b.n 0x4a5f6	@ 0004a3e8 05e1
.org 0x4a3ea
	adds r4, r5, #0	@ 0004a3ea 2c1c
.org 0x4a3ec
	adds r4, #84	@ 0004a3ec 5434
.org 0x4a3ee
	mov r0, r8	@ 0004a3ee 4046
.org 0x4a3f0
	adds r1, r4, #0	@ 0004a3f0 211c
.org 0x4a3f2
	bl 0x41318	@ 0004a3f2 f6f791ff
.org 0x4a3f6
	lsls r0, r0, #24	@ 0004a3f6 0006
.org 0x4a3f8
	lsrs r7, r0, #24	@ 0004a3f8 070e
.org 0x4a3fa
	mov ip, r4	@ 0004a3fa a446
.org 0x4a3fc
	cmp r7, #0	@ 0004a3fc 002f
.org 0x4a3fe
	beq.n 0x4a438	@ 0004a3fe 1bd0
.org 0x4a400
	ldrb r1, [r5, #10]	@ 0004a400 a97a
.org 0x4a402
	movs r0, #254	@ 0004a402 fe20
.org 0x4a404
	ands r0, r1	@ 0004a404 0840
.org 0x4a406
	movs r1, #253	@ 0004a406 fd21
.org 0x4a408
	ands r0, r1	@ 0004a408 0840
.org 0x4a40a
	strb r0, [r5, #10]	@ 0004a40a a872
.org 0x4a40c
	adds r0, r5, #0	@ 0004a40c 281c
.org 0x4a40e
	adds r0, #140	@ 0004a40e 8c30
.org 0x4a410
	str r6, [r0, #0]	@ 0004a410 0660
.org 0x4a412
	adds r0, #4	@ 0004a412 0430
.org 0x4a414
	str r6, [r0, #0]	@ 0004a414 0660
.org 0x4a416
	adds r0, #4	@ 0004a416 0430
.org 0x4a418
	strb r6, [r0, #0]	@ 0004a418 0670
.org 0x4a41a
	ldrb r1, [r5, #10]	@ 0004a41a a97a
.org 0x4a41c
	movs r0, #251	@ 0004a41c fb20
.org 0x4a41e
	ands r0, r1	@ 0004a41e 0840
.org 0x4a420
	strb r0, [r5, #10]	@ 0004a420 a872
.org 0x4a422
	ldr r1, [pc, #16]	@ 0004a422 0449
.org 0x4a424
	ldrb r0, [r5, #9]	@ 0004a424 687a
.org 0x4a426
	lsls r0, r0, #2	@ 0004a426 8000
.org 0x4a428
	adds r0, r0, r1	@ 0004a428 4018
.org 0x4a42a
	movs r1, #3	@ 0004a42a 0321
.org 0x4a42c
	str r1, [r5, #12]	@ 0004a42c e960
.org 0x4a42e
	ldr r0, [r0, #0]	@ 0004a42e 0068
.org 0x4a430
	ldr r0, [r0, #12]	@ 0004a430 c068
.org 0x4a432
	b.n 0x4a5f4	@ 0004a432 dfe0
.org 0x4a434
	.byte 0xf8,0x39,0x85,0x08	@ 0004a434 data
.org 0x4a438
	ldr r1, [r5, #84]	@ 0004a438 696d
.org 0x4a43a
	mov r2, r8	@ 0004a43a 4246
.org 0x4a43c
	ldr r0, [r2, #84]	@ 0004a43c 506d
.org 0x4a43e
	cmp r1, r0	@ 0004a43e 8142
.org 0x4a440
	ble.n 0x4a472	@ 0004a440 17dd
.org 0x4a442
	movs r0, #128	@ 0004a442 8020
.org 0x4a444
	lsls r0, r0, #3	@ 0004a444 c000
.org 0x4a446
	str r0, [r5, #92]	@ 0004a446 e865
.org 0x4a448
	movs r2, #1	@ 0004a448 0122
.org 0x4a44a
	ldrb r0, [r5, #10]	@ 0004a44a a87a
.org 0x4a44c
	movs r1, #16	@ 0004a44c 1021
.org 0x4a44e
	orrs r0, r1	@ 0004a44e 0843
.org 0x4a450
	strb r0, [r5, #10]	@ 0004a450 a872
.org 0x4a452
	adds r0, r5, #0	@ 0004a452 281c
.org 0x4a454
	adds r0, #76	@ 0004a454 4c30
.org 0x4a456
	strb r2, [r0, #0]	@ 0004a456 0270
.org 0x4a458
	adds r3, r5, #0	@ 0004a458 2b1c
.org 0x4a45a
	adds r3, #74	@ 0004a45a 4a33
.org 0x4a45c
	movs r2, #16	@ 0004a45c 1022
.org 0x4a45e
	ldrb r1, [r3, #0]	@ 0004a45e 1978
.org 0x4a460
	movs r0, #17	@ 0004a460 1120
.org 0x4a462
	negs r0, r0	@ 0004a462 4042
.org 0x4a464
	ands r0, r1	@ 0004a464 0840
.org 0x4a466
	orrs r0, r2	@ 0004a466 1043
.org 0x4a468
	strb r0, [r3, #0]	@ 0004a468 1870
.org 0x4a46a
	adds r0, r5, #0	@ 0004a46a 281c
.org 0x4a46c
	adds r0, #189	@ 0004a46c bd30
.org 0x4a46e
	strb r7, [r0, #0]	@ 0004a46e 0770
.org 0x4a470
	b.n 0x4a49a	@ 0004a470 13e0
.org 0x4a472
	ldr r0, [pc, #152]	@ 0004a472 2648
.org 0x4a474
	str r0, [r5, #92]	@ 0004a474 e865
.org 0x4a476
	ldrb r1, [r5, #10]	@ 0004a476 a97a
.org 0x4a478
	movs r0, #239	@ 0004a478 ef20
.org 0x4a47a
	ands r0, r1	@ 0004a47a 0840
.org 0x4a47c
	strb r0, [r5, #10]	@ 0004a47c a872
.org 0x4a47e
	adds r0, r5, #0	@ 0004a47e 281c
.org 0x4a480
	adds r0, #76	@ 0004a480 4c30
.org 0x4a482
	strb r7, [r0, #0]	@ 0004a482 0770
.org 0x4a484
	adds r2, r5, #0	@ 0004a484 2a1c
.org 0x4a486
	adds r2, #74	@ 0004a486 4a32
.org 0x4a488
	ldrb r1, [r2, #0]	@ 0004a488 1178
.org 0x4a48a
	movs r0, #17	@ 0004a48a 1120
.org 0x4a48c
	negs r0, r0	@ 0004a48c 4042
.org 0x4a48e
	ands r0, r1	@ 0004a48e 0840
.org 0x4a490
	strb r0, [r2, #0]	@ 0004a490 1070
.org 0x4a492
	adds r1, r5, #0	@ 0004a492 291c
.org 0x4a494
	adds r1, #189	@ 0004a494 bd31
.org 0x4a496
	movs r0, #128	@ 0004a496 8020
.org 0x4a498
	strb r0, [r1, #0]	@ 0004a498 0870
.org 0x4a49a
	movs r0, #0	@ 0004a49a 0020
.org 0x4a49c
	str r0, [r5, #96]	@ 0004a49c 2866
.org 0x4a49e
	ldrb r1, [r5, #10]	@ 0004a49e a97a
.org 0x4a4a0
	movs r0, #4	@ 0004a4a0 0420
.org 0x4a4a2
	orrs r0, r1	@ 0004a4a2 0843
.org 0x4a4a4
	strb r0, [r5, #10]	@ 0004a4a4 a872
.org 0x4a4a6
	adds r4, r5, #0	@ 0004a4a6 2c1c
.org 0x4a4a8
	adds r4, #116	@ 0004a4a8 7434
.org 0x4a4aa
	ldr r1, [pc, #100]	@ 0004a4aa 1949
.org 0x4a4ac
	adds r0, r4, #0	@ 0004a4ac 201c
.org 0x4a4ae
	mov r2, ip	@ 0004a4ae 6246
.org 0x4a4b0
	movs r3, #8	@ 0004a4b0 0823
.org 0x4a4b2
	bl 0x5760	@ 0004a4b2 bbf755f9
.org 0x4a4b6
	str r5, [r4, #44]	@ 0004a4b6 e562
.org 0x4a4b8
	ldr r0, [pc, #88]	@ 0004a4b8 1648
.org 0x4a4ba
	str r0, [r4, #36]	@ 0004a4ba 6062
.org 0x4a4bc
	ldrb r1, [r5, #10]	@ 0004a4bc a97a
.org 0x4a4be
	movs r0, #1	@ 0004a4be 0120
.org 0x4a4c0
	orrs r0, r1	@ 0004a4c0 0843
.org 0x4a4c2
	strb r0, [r5, #10]	@ 0004a4c2 a872
.org 0x4a4c4
	adds r1, r5, #0	@ 0004a4c4 291c
.org 0x4a4c6
	adds r1, #180	@ 0004a4c6 b431
.org 0x4a4c8
	ldr r0, [r5, #84]	@ 0004a4c8 686d
.org 0x4a4ca
	str r0, [r1, #0]	@ 0004a4ca 0860
.org 0x4a4cc
	adds r1, #4	@ 0004a4cc 0431
.org 0x4a4ce
	ldr r0, [r5, #88]	@ 0004a4ce a86d
.org 0x4a4d0
	str r0, [r1, #0]	@ 0004a4d0 0860
.org 0x4a4d2
	mov r0, r8	@ 0004a4d2 4046
.org 0x4a4d4
	bl 0x3aa4c	@ 0004a4d4 f0f7bafa
.org 0x4a4d8
	adds r1, r5, #0	@ 0004a4d8 291c
.org 0x4a4da
	adds r1, #190	@ 0004a4da be31
.org 0x4a4dc
	movs r0, #1	@ 0004a4dc 0120
.org 0x4a4de
	strb r0, [r1, #0]	@ 0004a4de 0870
.org 0x4a4e0
	strb r0, [r5, #13]	@ 0004a4e0 6873
.org 0x4a4e2
	ldrb r2, [r5, #14]	@ 0004a4e2 aa7b
.org 0x4a4e4
	adds r0, r2, #0	@ 0004a4e4 101c
.org 0x4a4e6
	cmp r0, #0	@ 0004a4e6 0028
.org 0x4a4e8
	bne.n 0x4a518	@ 0004a4e8 16d1
.org 0x4a4ea
	ldr r0, [r5, #84]	@ 0004a4ea 686d
.org 0x4a4ec
	ldr r1, [r5, #92]	@ 0004a4ec e96d
.org 0x4a4ee
	adds r0, r0, r1	@ 0004a4ee 4018
.org 0x4a4f0
	str r0, [r5, #84]	@ 0004a4f0 6865
.org 0x4a4f2
	ldrb r0, [r5, #19]	@ 0004a4f2 e87c
.org 0x4a4f4
	subs r0, #1	@ 0004a4f4 0138
.org 0x4a4f6
	strb r0, [r5, #19]	@ 0004a4f6 e874
.org 0x4a4f8
	lsls r0, r0, #24	@ 0004a4f8 0006
.org 0x4a4fa
	lsrs r0, r0, #24	@ 0004a4fa 000e
.org 0x4a4fc
	cmp r0, #255	@ 0004a4fc ff28
.org 0x4a4fe
	bne.n 0x4a598	@ 0004a4fe 4bd1
.org 0x4a500
	movs r0, #40	@ 0004a500 2820
.org 0x4a502
	strb r0, [r5, #18]	@ 0004a502 a874
.org 0x4a504
	adds r0, r2, #1	@ 0004a504 501c
.org 0x4a506
	strb r0, [r5, #14]	@ 0004a506 a873
.org 0x4a508
	b.n 0x4a598	@ 0004a508 46e0
.org 0x4a50a
	.byte 0x00	@ 0004a50a data
.org 0x4a50b
	.byte 0x00	@ 0004a50b data
.org 0x4a50c
	.byte 0x00,0xfc,0xff,0xff	@ 0004a50c data
.org 0x4a510
	.byte 0x20,0x73,0x85,0x08	@ 0004a510 data
.org 0x4a514
	.byte 0x69,0xa6,0x04,0x08	@ 0004a514 data
.org 0x4a518
	cmp r0, #1	@ 0004a518 0128
.org 0x4a51a
	bne.n 0x4a588	@ 0004a51a 35d1
.org 0x4a51c
	adds r0, r5, #0	@ 0004a51c 281c
.org 0x4a51e
	adds r0, #180	@ 0004a51e b430
.org 0x4a520
	ldr r1, [r5, #84]	@ 0004a520 696d
.org 0x4a522
	ldr r0, [r0, #0]	@ 0004a522 0068
.org 0x4a524
	cmp r1, r0	@ 0004a524 8142
.org 0x4a526
	ble.n 0x4a532	@ 0004a526 04dd
.org 0x4a528
	adds r1, r5, #0	@ 0004a528 291c
.org 0x4a52a
	adds r1, #189	@ 0004a52a bd31
.org 0x4a52c
	ldrb r0, [r1, #0]	@ 0004a52c 0878
.org 0x4a52e
	subs r0, #4	@ 0004a52e 0438
.org 0x4a530
	b.n 0x4a53a	@ 0004a530 03e0
.org 0x4a532
	adds r1, r5, #0	@ 0004a532 291c
.org 0x4a534
	adds r1, #189	@ 0004a534 bd31
.org 0x4a536
	ldrb r0, [r1, #0]	@ 0004a536 0878
.org 0x4a538
	adds r0, #4	@ 0004a538 0430
.org 0x4a53a
	strb r0, [r1, #0]	@ 0004a53a 0870
.org 0x4a53c
	adds r3, r1, #0	@ 0004a53c 0b1c
.org 0x4a53e
	ldr r1, [pc, #68]	@ 0004a53e 1149
.org 0x4a540
	ldrb r0, [r3, #0]	@ 0004a540 1878
.org 0x4a542
	adds r0, #64	@ 0004a542 4030
.org 0x4a544
	lsls r0, r0, #24	@ 0004a544 0006
.org 0x4a546
	lsrs r0, r0, #23	@ 0004a546 c00d
.org 0x4a548
	adds r0, r0, r1	@ 0004a548 4018
.org 0x4a54a
	movs r4, #0	@ 0004a54a 0024
.org 0x4a54c
	ldrsh r2, [r0, r4]	@ 0004a54c 025f
.org 0x4a54e
	lsls r2, r2, #2	@ 0004a54e 9200
.org 0x4a550
	str r2, [r5, #92]	@ 0004a550 ea65
.org 0x4a552
	ldrb r0, [r3, #0]	@ 0004a552 1878
.org 0x4a554
	lsls r0, r0, #1	@ 0004a554 4000
.org 0x4a556
	adds r0, r0, r1	@ 0004a556 4018
.org 0x4a558
	movs r3, #0	@ 0004a558 0023
.org 0x4a55a
	ldrsh r1, [r0, r3]	@ 0004a55a c15e
.org 0x4a55c
	lsls r1, r1, #2	@ 0004a55c 8900
.org 0x4a55e
	str r1, [r5, #96]	@ 0004a55e 2966
.org 0x4a560
	ldr r0, [r5, #84]	@ 0004a560 686d
.org 0x4a562
	adds r0, r0, r2	@ 0004a562 8018
.org 0x4a564
	str r0, [r5, #84]	@ 0004a564 6865
.org 0x4a566
	ldr r0, [r5, #88]	@ 0004a566 a86d
.org 0x4a568
	adds r0, r0, r1	@ 0004a568 4018
.org 0x4a56a
	str r0, [r5, #88]	@ 0004a56a a865
.org 0x4a56c
	ldrb r0, [r5, #18]	@ 0004a56c a87c
.org 0x4a56e
	subs r0, #1	@ 0004a56e 0138
.org 0x4a570
	strb r0, [r5, #18]	@ 0004a570 a874
.org 0x4a572
	lsls r0, r0, #24	@ 0004a572 0006
.org 0x4a574
	lsrs r0, r0, #24	@ 0004a574 000e
.org 0x4a576
	cmp r0, #255	@ 0004a576 ff28
.org 0x4a578
	bne.n 0x4a598	@ 0004a578 0ed1
.org 0x4a57a
	ldrb r0, [r5, #14]	@ 0004a57a a87b
.org 0x4a57c
	adds r0, #1	@ 0004a57c 0130
.org 0x4a57e
	strb r0, [r5, #14]	@ 0004a57e a873
.org 0x4a580
	b.n 0x4a598	@ 0004a580 0ae0
.org 0x4a582
	.byte 0x00	@ 0004a582 data
.org 0x4a583
	.byte 0x00	@ 0004a583 data
.org 0x4a584
	.byte 0x0c,0x93,0x12,0x08	@ 0004a584 data
.org 0x4a588
	ldr r0, [r5, #84]	@ 0004a588 686d
.org 0x4a58a
	ldr r1, [r5, #92]	@ 0004a58a e96d
.org 0x4a58c
	adds r0, r0, r1	@ 0004a58c 4018
.org 0x4a58e
	str r0, [r5, #84]	@ 0004a58e 6865
.org 0x4a590
	ldr r0, [r5, #88]	@ 0004a590 a86d
.org 0x4a592
	ldr r1, [r5, #96]	@ 0004a592 296e
.org 0x4a594
	adds r0, r0, r1	@ 0004a594 4018
.org 0x4a596
	str r0, [r5, #88]	@ 0004a596 a865
.org 0x4a598
	adds r4, r5, #0	@ 0004a598 2c1c
.org 0x4a59a
	adds r4, #140	@ 0004a59a 8c34
.org 0x4a59c
	ldr r0, [r4, #0]	@ 0004a59c 2068
.org 0x4a59e
	movs r1, #4	@ 0004a59e 0421
.org 0x4a5a0
	ands r0, r1	@ 0004a5a0 0840
.org 0x4a5a2
	cmp r0, #0	@ 0004a5a2 0028
.org 0x4a5a4
	beq.n 0x4a5b0	@ 0004a5a4 04d0
.org 0x4a5a6
	adds r0, r5, #0	@ 0004a5a6 281c
.org 0x4a5a8
	adds r0, #116	@ 0004a5a8 7430
.org 0x4a5aa
	ldr r1, [pc, #84]	@ 0004a5aa 1549
.org 0x4a5ac
	bl 0x5784	@ 0004a5ac bbf7eaf8
.org 0x4a5b0
	ldr r0, [r4, #0]	@ 0004a5b0 2068
.org 0x4a5b2
	movs r1, #128	@ 0004a5b2 8021
.org 0x4a5b4
	lsls r1, r1, #5	@ 0004a5b4 4901
.org 0x4a5b6
	ands r0, r1	@ 0004a5b6 0840
.org 0x4a5b8
	cmp r0, #0	@ 0004a5b8 0028
.org 0x4a5ba
	bne.n 0x4a5ca	@ 0004a5ba 06d1
.org 0x4a5bc
	ldr r0, [r5, #84]	@ 0004a5bc 686d
.org 0x4a5be
	ldr r1, [r5, #88]	@ 0004a5be a96d
.org 0x4a5c0
	bl 0x4a6c4	@ 0004a5c0 00f080f8
.org 0x4a5c4
	lsls r0, r0, #16	@ 0004a5c4 0004
.org 0x4a5c6
	cmp r0, #0	@ 0004a5c6 0028
.org 0x4a5c8
	beq.n 0x4a5f6	@ 0004a5c8 15d0
.org 0x4a5ca
	adds r1, r5, #0	@ 0004a5ca 291c
.org 0x4a5cc
	adds r1, #84	@ 0004a5cc 5431
.org 0x4a5ce
	movs r0, #1	@ 0004a5ce 0120
.org 0x4a5d0
	bl 0xd0c88	@ 0004a5d0 86f05afb
.org 0x4a5d4
	movs r0, #53	@ 0004a5d4 3520
.org 0x4a5d6
	bl 0x2b10	@ 0004a5d6 b8f79bfa
.org 0x4a5da
	adds r0, r5, #0	@ 0004a5da 281c
.org 0x4a5dc
	adds r0, #116	@ 0004a5dc 7430
.org 0x4a5de
	ldr r1, [pc, #36]	@ 0004a5de 0949
.org 0x4a5e0
	bl 0x5784	@ 0004a5e0 bbf7d0f8
.org 0x4a5e4
	ldr r1, [pc, #32]	@ 0004a5e4 0849
.org 0x4a5e6
	ldrb r0, [r5, #9]	@ 0004a5e6 687a
