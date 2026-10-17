@ FUN_0807f3a4  entry 0x0807f3a4  size 400
.thumb
.org 0x7f3a4
FUN_0807f3a4:
	push {r4, r5, r6, r7, lr}	@ 0007f3a4 f0b5
.org 0x7f3a6
	mov r7, r8	@ 0007f3a6 4746
.org 0x7f3a8
	push {r7}	@ 0007f3a8 80b4
.org 0x7f3aa
	adds r4, r0, #0	@ 0007f3aa 041c
.org 0x7f3ac
	ldrb r0, [r4, #14]	@ 0007f3ac a07b
.org 0x7f3ae
	cmp r0, #0	@ 0007f3ae 0028
.org 0x7f3b0
	bne.n 0x7f40c	@ 0007f3b0 2cd1
.org 0x7f3b2
	ldr r1, [pc, #72]	@ 0007f3b2 1249
.org 0x7f3b4
	adds r0, r4, #0	@ 0007f3b4 201c
.org 0x7f3b6
	bl 0x1cf00	@ 0007f3b6 9df7a3fd
.org 0x7f3ba
	adds r6, r4, #0	@ 0007f3ba 261c
.org 0x7f3bc
	adds r6, #180	@ 0007f3bc b436
.org 0x7f3be
	adds r7, r4, #0	@ 0007f3be 271c
.org 0x7f3c0
	adds r7, #212	@ 0007f3c0 d437
.org 0x7f3c2
	ldr r5, [pc, #60]	@ 0007f3c2 0f4d
.org 0x7f3c4
	ldr r1, [r5, #0]	@ 0007f3c4 2968
.org 0x7f3c6
	ldr r0, [pc, #60]	@ 0007f3c6 0f48
.org 0x7f3c8
	muls r0, r1	@ 0007f3c8 4843
.org 0x7f3ca
	ldr r1, [pc, #60]	@ 0007f3ca 0f49
.org 0x7f3cc
	adds r0, r0, r1	@ 0007f3cc 4018
.org 0x7f3ce
	lsls r0, r0, #1	@ 0007f3ce 4000
.org 0x7f3d0
	lsrs r1, r0, #1	@ 0007f3d0 4108
.org 0x7f3d2
	str r1, [r5, #0]	@ 0007f3d2 2960
.org 0x7f3d4
	lsrs r0, r0, #17	@ 0007f3d4 400c
.org 0x7f3d6
	movs r1, #6	@ 0007f3d6 0621
.org 0x7f3d8
	bl 0x129198	@ 0007f3d8 a9f0defe
.org 0x7f3dc
	adds r2, r0, #0	@ 0007f3dc 021c
.org 0x7f3de
	strb r2, [r7, #0]	@ 0007f3de 3a70
.org 0x7f3e0
	ldrb r1, [r6, #31]	@ 0007f3e0 f17f
.org 0x7f3e2
	lsls r0, r2, #24	@ 0007f3e2 1006
.org 0x7f3e4
	lsrs r0, r0, #24	@ 0007f3e4 000e
.org 0x7f3e6
	cmp r1, r0	@ 0007f3e6 8142
.org 0x7f3e8
	beq.n 0x7f3c4	@ 0007f3e8 ecd0
.org 0x7f3ea
	strb r2, [r6, #31]	@ 0007f3ea f277
.org 0x7f3ec
	movs r0, #89	@ 0007f3ec 5920
.org 0x7f3ee
	bl 0x2b10	@ 0007f3ee 83f78ffb
.org 0x7f3f2
	movs r0, #0	@ 0007f3f2 0020
.org 0x7f3f4
	movs r1, #16	@ 0007f3f4 1021
.org 0x7f3f6
	strb r1, [r4, #18]	@ 0007f3f6 a174
.org 0x7f3f8
	strb r0, [r4, #15]	@ 0007f3f8 e073
.org 0x7f3fa
	b.n 0x7f41e	@ 0007f3fa 10e0
.org 0x7f3fc
	.byte 0x01,0xc8,0x00,0x00	@ 0007f3fc data
.org 0x7f400
	.byte 0x38,0xdc,0x02,0x02	@ 0007f400 data
.org 0x7f404
	.byte 0xfd,0x43,0x03,0x00	@ 0007f404 data
.org 0x7f408
	.byte 0xc3,0x9e,0x26,0x00	@ 0007f408 data
.org 0x7f40c
	cmp r0, #1	@ 0007f40c 0128
.org 0x7f40e
	bne.n 0x7f422	@ 0007f40e 08d1
.org 0x7f410
	ldr r1, [pc, #152]	@ 0007f410 2649
.org 0x7f412
	adds r0, r4, #0	@ 0007f412 201c
.org 0x7f414
	bl 0x1cf00	@ 0007f414 9df774fd
.org 0x7f418
	movs r0, #89	@ 0007f418 5920
.org 0x7f41a
	bl 0x2b10	@ 0007f41a 83f779fb
.org 0x7f41e
	movs r0, #2	@ 0007f41e 0220
.org 0x7f420
	strb r0, [r4, #14]	@ 0007f420 a073
.org 0x7f422
	adds r0, r4, #0	@ 0007f422 201c
.org 0x7f424
	bl 0x1cff0	@ 0007f424 9df7e4fd
.org 0x7f428
	ldrb r0, [r4, #15]	@ 0007f428 e07b
.org 0x7f42a
	mov r8, r0	@ 0007f42a 8046
.org 0x7f42c
	cmp r0, #0	@ 0007f42c 0028
.org 0x7f42e
	beq.n 0x7f432	@ 0007f42e 00d0
.org 0x7f430
	b.n 0x7f544	@ 0007f430 88e0
.org 0x7f432
	adds r0, r4, #0	@ 0007f432 201c
.org 0x7f434
	adds r0, #116	@ 0007f434 7430
.org 0x7f436
	ldr r2, [pc, #120]	@ 0007f436 1e4a
.org 0x7f438
	adds r5, r4, #0	@ 0007f438 251c
.org 0x7f43a
	adds r5, #113	@ 0007f43a 7135
.org 0x7f43c
	movs r1, #0	@ 0007f43c 0021
.org 0x7f43e
	ldrsb r1, [r5, r1]	@ 0007f43e 6956
.org 0x7f440
	adds r1, r1, r2	@ 0007f440 8918
.org 0x7f442
	ldrb r2, [r1, #0]	@ 0007f442 0a78
.org 0x7f444
	lsls r1, r2, #1	@ 0007f444 5100
.org 0x7f446
	adds r1, r1, r2	@ 0007f446 8918
.org 0x7f448
	lsls r1, r1, #3	@ 0007f448 c900
.org 0x7f44a
	ldr r2, [pc, #104]	@ 0007f44a 1a4a
.org 0x7f44c
	adds r1, r1, r2	@ 0007f44c 8918
.org 0x7f44e
	bl 0x5784	@ 0007f44e 86f799f9
.org 0x7f452
	adds r3, r4, #0	@ 0007f452 231c
.org 0x7f454
	adds r3, #180	@ 0007f454 b433
.org 0x7f456
	ldr r1, [pc, #96]	@ 0007f456 1849
.org 0x7f458
	adds r2, r4, #0	@ 0007f458 221c
.org 0x7f45a
	adds r2, #212	@ 0007f45a d432
.org 0x7f45c
	ldrb r0, [r2, #0]	@ 0007f45c 1078
.org 0x7f45e
	lsls r0, r0, #2	@ 0007f45e 8000
.org 0x7f460
	adds r0, r0, r1	@ 0007f460 4018
.org 0x7f462
	ldr r1, [r3, #0]	@ 0007f462 1968
.org 0x7f464
	ldr r0, [r0, #0]	@ 0007f464 0068
.org 0x7f466
	adds r1, r1, r0	@ 0007f466 0918
.org 0x7f468
	ldr r0, [r4, #84]	@ 0007f468 606d
.org 0x7f46a
	adds r6, r3, #0	@ 0007f46a 1e1c
.org 0x7f46c
	adds r7, r2, #0	@ 0007f46c 171c
.org 0x7f46e
	cmp r0, r1	@ 0007f46e 8842
.org 0x7f470
	bge.n 0x7f4c0	@ 0007f470 26da
.org 0x7f472
	adds r1, r4, #0	@ 0007f472 211c
.org 0x7f474
	adds r1, #76	@ 0007f474 4c31
.org 0x7f476
	movs r0, #1	@ 0007f476 0120
.org 0x7f478
	strb r0, [r1, #0]	@ 0007f478 0870
.org 0x7f47a
	subs r2, #138	@ 0007f47a 8a3a
.org 0x7f47c
	ldrb r0, [r2, #0]	@ 0007f47c 1078
.org 0x7f47e
	movs r1, #16	@ 0007f47e 1021
.org 0x7f480
	orrs r0, r1	@ 0007f480 0843
.org 0x7f482
	strb r0, [r2, #0]	@ 0007f482 1070
.org 0x7f484
	ldrb r0, [r4, #10]	@ 0007f484 a07a
.org 0x7f486
	orrs r1, r0	@ 0007f486 0143
.org 0x7f488
	strb r1, [r4, #10]	@ 0007f488 a172
.org 0x7f48a
	adds r0, r4, #0	@ 0007f48a 201c
.org 0x7f48c
	adds r0, #114	@ 0007f48c 7230
.org 0x7f48e
	ldrb r0, [r0, #0]	@ 0007f48e 0078
.org 0x7f490
	lsls r0, r0, #24	@ 0007f490 0006
.org 0x7f492
	asrs r0, r0, #24	@ 0007f492 0016
.org 0x7f494
	cmp r0, #1	@ 0007f494 0128
.org 0x7f496
	bgt.n 0x7f4fe	@ 0007f496 32dc
.org 0x7f498
	ldr r1, [pc, #32]	@ 0007f498 0849
.org 0x7f49a
	movs r0, #0	@ 0007f49a 0020
.org 0x7f49c
	ldrsb r0, [r5, r0]	@ 0007f49c 2856
.org 0x7f49e
	lsls r0, r0, #2	@ 0007f49e 8000
.org 0x7f4a0
	adds r0, r0, r1	@ 0007f4a0 4018
.org 0x7f4a2
	ldr r1, [r4, #84]	@ 0007f4a2 616d
.org 0x7f4a4
	ldr r0, [r0, #0]	@ 0007f4a4 0068
.org 0x7f4a6
	adds r1, r1, r0	@ 0007f4a6 0918
.org 0x7f4a8
	b.n 0x7f4fc	@ 0007f4a8 28e0
.org 0x7f4aa
	.byte 0x00	@ 0007f4aa data
.org 0x7f4ab
	.byte 0x00	@ 0007f4ab data
.org 0x7f4ac
	.byte 0x01,0xc8,0x00,0x00	@ 0007f4ac data
.org 0x7f4b0
	.byte 0x24,0xdb,0x85,0x08	@ 0007f4b0 data
.org 0x7f4b4
	.byte 0xc4,0xd8,0x85,0x08	@ 0007f4b4 data
.org 0x7f4b8
	.byte 0x0c,0xdb,0x85,0x08	@ 0007f4b8 data
.org 0x7f4bc
	.byte 0xdc,0xda,0x85,0x08	@ 0007f4bc data
.org 0x7f4c0
	adds r0, r4, #0	@ 0007f4c0 201c
.org 0x7f4c2
	adds r0, #76	@ 0007f4c2 4c30
.org 0x7f4c4
	mov r1, r8	@ 0007f4c4 4146
.org 0x7f4c6
	strb r1, [r0, #0]	@ 0007f4c6 0170
.org 0x7f4c8
	adds r2, r4, #0	@ 0007f4c8 221c
.org 0x7f4ca
	adds r2, #74	@ 0007f4ca 4a32
.org 0x7f4cc
	ldrb r1, [r2, #0]	@ 0007f4cc 1178
.org 0x7f4ce
	movs r0, #17	@ 0007f4ce 1120
.org 0x7f4d0
	negs r0, r0	@ 0007f4d0 4042
.org 0x7f4d2
	ands r0, r1	@ 0007f4d2 0840
.org 0x7f4d4
	strb r0, [r2, #0]	@ 0007f4d4 1070
.org 0x7f4d6
	ldrb r1, [r4, #10]	@ 0007f4d6 a17a
.org 0x7f4d8
	movs r0, #239	@ 0007f4d8 ef20
.org 0x7f4da
	ands r0, r1	@ 0007f4da 0840
.org 0x7f4dc
	strb r0, [r4, #10]	@ 0007f4dc a072
.org 0x7f4de
	adds r0, r4, #0	@ 0007f4de 201c
.org 0x7f4e0
	adds r0, #114	@ 0007f4e0 7230
.org 0x7f4e2
	ldrb r0, [r0, #0]	@ 0007f4e2 0078
.org 0x7f4e4
	lsls r0, r0, #24	@ 0007f4e4 0006
.org 0x7f4e6
	asrs r0, r0, #24	@ 0007f4e6 0016
.org 0x7f4e8
	cmp r0, #1	@ 0007f4e8 0128
.org 0x7f4ea
	bgt.n 0x7f4fe	@ 0007f4ea 08dc
.org 0x7f4ec
	ldr r1, [pc, #72]	@ 0007f4ec 1249
.org 0x7f4ee
	movs r0, #0	@ 0007f4ee 0020
.org 0x7f4f0
	ldrsb r0, [r5, r0]	@ 0007f4f0 2856
.org 0x7f4f2
	lsls r0, r0, #2	@ 0007f4f2 8000
.org 0x7f4f4
	adds r0, r0, r1	@ 0007f4f4 4018
.org 0x7f4f6
	ldr r1, [r4, #84]	@ 0007f4f6 616d
.org 0x7f4f8
	ldr r0, [r0, #0]	@ 0007f4f8 0068
.org 0x7f4fa
	subs r1, r1, r0	@ 0007f4fa 091a
.org 0x7f4fc
	str r1, [r4, #84]	@ 0007f4fc 6165
.org 0x7f4fe
	adds r0, r4, #0	@ 0007f4fe 201c
.org 0x7f500
	adds r0, #115	@ 0007f500 7330
.org 0x7f502
	ldrb r0, [r0, #0]	@ 0007f502 0078
.org 0x7f504
	cmp r0, #3	@ 0007f504 0328
.org 0x7f506
	bne.n 0x7f55a	@ 0007f506 28d1
.org 0x7f508
	ldr r1, [pc, #48]	@ 0007f508 0c49
.org 0x7f50a
	ldrb r0, [r7, #0]	@ 0007f50a 3878
.org 0x7f50c
	lsls r0, r0, #2	@ 0007f50c 8000
.org 0x7f50e
	adds r0, r0, r1	@ 0007f50e 4018
.org 0x7f510
	ldr r1, [r6, #0]	@ 0007f510 3168
.org 0x7f512
	ldr r0, [r0, #0]	@ 0007f512 0068
.org 0x7f514
	adds r1, r1, r0	@ 0007f514 0918
.org 0x7f516
	ldr r0, [r4, #84]	@ 0007f516 606d
.org 0x7f518
	cmp r0, r1	@ 0007f518 8842
.org 0x7f51a
	bne.n 0x7f540	@ 0007f51a 11d1
.org 0x7f51c
	movs r1, #200	@ 0007f51c c821
.org 0x7f51e
	lsls r1, r1, #8	@ 0007f51e 0902
.org 0x7f520
	adds r0, r4, #0	@ 0007f520 201c
.org 0x7f522
	bl 0x1cf00	@ 0007f522 9df7edfc
.org 0x7f526
	adds r0, r4, #0	@ 0007f526 201c
.org 0x7f528
	bl 0x1cff0	@ 0007f528 9df762fd
.org 0x7f52c
	movs r0, #60	@ 0007f52c 3c20
.org 0x7f52e
	strb r0, [r4, #18]	@ 0007f52e a074
.org 0x7f530
	movs r0, #1	@ 0007f530 0120
.org 0x7f532
	strb r0, [r4, #15]	@ 0007f532 e073
