@ FUN_0808e3cc  entry 0x0808e3cc  size 414
.thumb
.org 0x8e3cc
FUN_0808e3cc:
	push {r4, r5, r6, r7, lr}	@ 0008e3cc f0b5
.org 0x8e3ce
	mov r7, sl	@ 0008e3ce 5746
.org 0x8e3d0
	mov r6, r9	@ 0008e3d0 4e46
.org 0x8e3d2
	mov r5, r8	@ 0008e3d2 4546
.org 0x8e3d4
	push {r5, r6, r7}	@ 0008e3d4 e0b4
.org 0x8e3d6
	sub sp, #4	@ 0008e3d6 81b0
.org 0x8e3d8
	adds r7, r0, #0	@ 0008e3d8 071c
.org 0x8e3da
	ldr r0, [r7, #40]	@ 0008e3da b86a
.org 0x8e3dc
	str r0, [sp, #0]	@ 0008e3dc 0090
.org 0x8e3de
	ldrb r5, [r7, #17]	@ 0008e3de 7d7c
.org 0x8e3e0
	ldrb r1, [r7, #13]	@ 0008e3e0 797b
.org 0x8e3e2
	mov sl, r1	@ 0008e3e2 8a46
.org 0x8e3e4
	ldrb r0, [r7, #15]	@ 0008e3e4 f87b
.org 0x8e3e6
	cmp r0, #0	@ 0008e3e6 0028
.org 0x8e3e8
	bne.n 0x8e468	@ 0008e3e8 3ed1
.org 0x8e3ea
	adds r0, r7, #0	@ 0008e3ea 381c
.org 0x8e3ec
	bl 0x8e95c	@ 0008e3ec 00f0b6fa
.org 0x8e3f0
	ldr r1, [pc, #376]	@ 0008e3f0 5e49
.org 0x8e3f2
	adds r0, r7, #0	@ 0008e3f2 381c
.org 0x8e3f4
	bl 0x1cf00	@ 0008e3f4 8ef784fd
.org 0x8e3f8
	adds r4, r7, #0	@ 0008e3f8 3c1c
.org 0x8e3fa
	adds r4, #192	@ 0008e3fa c034
.org 0x8e3fc
	ldr r2, [pc, #368]	@ 0008e3fc 5c4a
.org 0x8e3fe
	mov r0, sl	@ 0008e3fe 5046
.org 0x8e400
	lsls r3, r0, #3	@ 0008e400 c300
.org 0x8e402
	adds r1, r3, r2	@ 0008e402 9918
.org 0x8e404
	lsls r0, r5, #1	@ 0008e404 6800
.org 0x8e406
	subs r0, #1	@ 0008e406 0138
.org 0x8e408
	ldr r1, [r1, #0]	@ 0008e408 0968
.org 0x8e40a
	muls r0, r1	@ 0008e40a 4843
.org 0x8e40c
	ldr r1, [r7, #100]	@ 0008e40c 796e
.org 0x8e40e
	subs r0, r0, r1	@ 0008e40e 401a
.org 0x8e410
	str r0, [r4, #0]	@ 0008e410 2060
.org 0x8e412
	adds r2, #4	@ 0008e412 0432
.org 0x8e414
	adds r3, r3, r2	@ 0008e414 9b18
.org 0x8e416
	ldr r0, [r3, #0]	@ 0008e416 1868
.org 0x8e418
	ldr r1, [r7, #104]	@ 0008e418 b96e
.org 0x8e41a
	subs r0, r0, r1	@ 0008e41a 401a
.org 0x8e41c
	str r0, [r7, #92]	@ 0008e41c f865
.org 0x8e41e
	ldr r1, [pc, #340]	@ 0008e41e 5549
.org 0x8e420
	mov r2, sl	@ 0008e420 5246
.org 0x8e422
	lsls r0, r2, #1	@ 0008e422 5000
.org 0x8e424
	adds r0, r0, r1	@ 0008e424 4018
.org 0x8e426
	adds r1, r7, #0	@ 0008e426 391c
.org 0x8e428
	adds r1, #184	@ 0008e428 b831
.org 0x8e42a
	ldrh r0, [r0, #0]	@ 0008e42a 0088
.org 0x8e42c
	ldrh r1, [r1, #0]	@ 0008e42c 0988
.org 0x8e42e
	subs r0, r0, r1	@ 0008e42e 401a
.org 0x8e430
	adds r1, r7, #0	@ 0008e430 391c
.org 0x8e432
	adds r1, #188	@ 0008e432 bc31
.org 0x8e434
	strh r0, [r1, #0]	@ 0008e434 0880
.org 0x8e436
	ldr r0, [pc, #320]	@ 0008e436 5048
.org 0x8e438
	add r0, sl	@ 0008e438 5044
.org 0x8e43a
	ldrb r1, [r0, #0]	@ 0008e43a 0178
.org 0x8e43c
	adds r1, #128	@ 0008e43c 8031
.org 0x8e43e
	lsls r1, r1, #24	@ 0008e43e 0906
.org 0x8e440
	lsrs r1, r1, #24	@ 0008e440 090e
.org 0x8e442
	ldrb r0, [r7, #18]	@ 0008e442 b87c
.org 0x8e444
	adds r0, #128	@ 0008e444 8030
.org 0x8e446
	lsls r0, r0, #24	@ 0008e446 0006
.org 0x8e448
	lsrs r0, r0, #24	@ 0008e448 000e
.org 0x8e44a
	subs r1, r1, r0	@ 0008e44a 091a
.org 0x8e44c
	adds r0, r7, #0	@ 0008e44c 381c
.org 0x8e44e
	adds r0, #190	@ 0008e44e be30
.org 0x8e450
	strh r1, [r0, #0]	@ 0008e450 0180
.org 0x8e452
	adds r1, r7, #0	@ 0008e452 391c
.org 0x8e454
	adds r1, #186	@ 0008e454 ba31
.org 0x8e456
	movs r3, #0	@ 0008e456 0023
.org 0x8e458
	ldrsh r0, [r1, r3]	@ 0008e458 c85e
.org 0x8e45a
	cmp r0, #0	@ 0008e45a 0028
.org 0x8e45c
	bne.n 0x8e460	@ 0008e45c 00d1
.org 0x8e45e
	movs r0, #1	@ 0008e45e 0120
.org 0x8e460
	str r0, [r7, #96]	@ 0008e460 3866
.org 0x8e462
	ldrb r0, [r7, #15]	@ 0008e462 f87b
.org 0x8e464
	adds r0, #1	@ 0008e464 0130
.org 0x8e466
	strb r0, [r7, #15]	@ 0008e466 f873
.org 0x8e468
	adds r0, r7, #0	@ 0008e468 381c
.org 0x8e46a
	bl 0x1cff0	@ 0008e46a 8ef7c1fd
.org 0x8e46e
	adds r1, r7, #0	@ 0008e46e 391c
.org 0x8e470
	adds r1, #186	@ 0008e470 ba31
.org 0x8e472
	ldrh r2, [r1, #0]	@ 0008e472 0a88
.org 0x8e474
	movs r3, #0	@ 0008e474 0023
.org 0x8e476
	ldrsh r0, [r1, r3]	@ 0008e476 c85e
.org 0x8e478
	cmp r0, #0	@ 0008e478 0028
.org 0x8e47a
	beq.n 0x8e480	@ 0008e47a 01d0
.org 0x8e47c
	subs r0, r2, #1	@ 0008e47c 501e
.org 0x8e47e
	strh r0, [r1, #0]	@ 0008e47e 0880
.org 0x8e480
	movs r2, #0	@ 0008e480 0022
.org 0x8e482
	ldrsh r0, [r1, r2]	@ 0008e482 885e
.org 0x8e484
	lsls r0, r0, #6	@ 0008e484 8001
.org 0x8e486
	ldr r1, [r7, #96]	@ 0008e486 396e
.org 0x8e488
	bl 0x128fb8	@ 0008e488 9af096fd
.org 0x8e48c
	ldr r1, [pc, #236]	@ 0008e48c 3b49
.org 0x8e48e
	lsls r0, r0, #24	@ 0008e48e 0006
.org 0x8e490
	lsrs r0, r0, #23	@ 0008e490 c00d
.org 0x8e492
	adds r0, r0, r1	@ 0008e492 4018
.org 0x8e494
	ldrh r0, [r0, #0]	@ 0008e494 0088
.org 0x8e496
	mov r9, r0	@ 0008e496 8146
.org 0x8e498
	lsrs r0, r0, #2	@ 0008e498 8008
.org 0x8e49a
	lsls r0, r0, #24	@ 0008e49a 0006
.org 0x8e49c
	lsrs r0, r0, #23	@ 0008e49c c00d
.org 0x8e49e
	adds r0, r0, r1	@ 0008e49e 4018
.org 0x8e4a0
	ldrh r0, [r0, #0]	@ 0008e4a0 0088
.org 0x8e4a2
	mov r9, r0	@ 0008e4a2 8146
.org 0x8e4a4
	movs r3, #128	@ 0008e4a4 8023
.org 0x8e4a6
	lsls r3, r3, #1	@ 0008e4a6 5b00
.org 0x8e4a8
	mov r8, r3	@ 0008e4a8 9846
.org 0x8e4aa
	ldr r4, [pc, #196]	@ 0008e4aa 314c
.org 0x8e4ac
	mov r0, sl	@ 0008e4ac 5046
.org 0x8e4ae
	lsls r6, r0, #3	@ 0008e4ae c600
.org 0x8e4b0
	adds r1, r6, r4	@ 0008e4b0 3119
.org 0x8e4b2
	lsls r0, r5, #1	@ 0008e4b2 6800
.org 0x8e4b4
	subs r0, #1	@ 0008e4b4 0138
.org 0x8e4b6
	ldr r1, [r1, #0]	@ 0008e4b6 0968
.org 0x8e4b8
	muls r0, r1	@ 0008e4b8 4843
.org 0x8e4ba
	ldr r1, [sp, #0]	@ 0008e4ba 0099
.org 0x8e4bc
	ldr r5, [r1, #84]	@ 0008e4bc 4d6d
.org 0x8e4be
	adds r5, r5, r0	@ 0008e4be 2d18
.org 0x8e4c0
	adds r0, r7, #0	@ 0008e4c0 381c
.org 0x8e4c2
	adds r0, #192	@ 0008e4c2 c030
.org 0x8e4c4
	ldr r0, [r0, #0]	@ 0008e4c4 0068
.org 0x8e4c6
	mov r2, r9	@ 0008e4c6 4a46
.org 0x8e4c8
	muls r2, r0	@ 0008e4c8 4243
.org 0x8e4ca
	adds r0, r2, #0	@ 0008e4ca 101c
.org 0x8e4cc
	mov r1, r8	@ 0008e4cc 4146
.org 0x8e4ce
	bl 0x128fb8	@ 0008e4ce 9af073fd
.org 0x8e4d2
	subs r5, r5, r0	@ 0008e4d2 2d1a
.org 0x8e4d4
	str r5, [r7, #84]	@ 0008e4d4 7d65
.org 0x8e4d6
	adds r4, #4	@ 0008e4d6 0434
.org 0x8e4d8
	adds r6, r6, r4	@ 0008e4d8 3619
.org 0x8e4da
	ldr r3, [sp, #0]	@ 0008e4da 009b
.org 0x8e4dc
	ldr r4, [r3, #88]	@ 0008e4dc 9c6d
.org 0x8e4de
	ldr r0, [r6, #0]	@ 0008e4de 3068
.org 0x8e4e0
	adds r4, r4, r0	@ 0008e4e0 2418
.org 0x8e4e2
	ldr r0, [r7, #92]	@ 0008e4e2 f86d
.org 0x8e4e4
	mov r1, r9	@ 0008e4e4 4946
.org 0x8e4e6
	muls r1, r0	@ 0008e4e6 4143
.org 0x8e4e8
	adds r0, r1, #0	@ 0008e4e8 081c
.org 0x8e4ea
	mov r1, r8	@ 0008e4ea 4146
.org 0x8e4ec
	bl 0x128fb8	@ 0008e4ec 9af064fd
.org 0x8e4f0
	subs r4, r4, r0	@ 0008e4f0 241a
.org 0x8e4f2
	str r4, [r7, #88]	@ 0008e4f2 bc65
.org 0x8e4f4
	ldr r2, [sp, #0]	@ 0008e4f4 009a
.org 0x8e4f6
	ldr r0, [r2, #84]	@ 0008e4f6 506d
.org 0x8e4f8
	subs r5, r5, r0	@ 0008e4f8 2d1a
.org 0x8e4fa
	str r5, [r7, #100]	@ 0008e4fa 7d66
.org 0x8e4fc
	ldr r0, [r2, #88]	@ 0008e4fc 906d
.org 0x8e4fe
	subs r4, r4, r0	@ 0008e4fe 241a
.org 0x8e500
	str r4, [r7, #104]	@ 0008e500 bc66
.org 0x8e502
	ldr r0, [pc, #112]	@ 0008e502 1c48
.org 0x8e504
	mov r3, sl	@ 0008e504 5346
.org 0x8e506
	lsls r4, r3, #1	@ 0008e506 5c00
.org 0x8e508
	adds r4, r4, r0	@ 0008e508 2418
.org 0x8e50a
	adds r0, r7, #0	@ 0008e50a 381c
.org 0x8e50c
	adds r0, #188	@ 0008e50c bc30
.org 0x8e50e
	movs r1, #0	@ 0008e50e 0021
.org 0x8e510
	ldrsh r0, [r0, r1]	@ 0008e510 405e
.org 0x8e512
	mov r2, r9	@ 0008e512 4a46
.org 0x8e514
	muls r2, r0	@ 0008e514 4243
.org 0x8e516
	adds r0, r2, #0	@ 0008e516 101c
.org 0x8e518
	mov r1, r8	@ 0008e518 4146
.org 0x8e51a
	bl 0x128fb8	@ 0008e51a 9af04dfd
.org 0x8e51e
	ldrh r1, [r4, #0]	@ 0008e51e 2188
.org 0x8e520
	subs r1, r1, r0	@ 0008e520 091a
.org 0x8e522
	lsls r1, r1, #16	@ 0008e522 0904
.org 0x8e524
	lsrs r1, r1, #16	@ 0008e524 090c
.org 0x8e526
	adds r0, r7, #0	@ 0008e526 381c
.org 0x8e528
	adds r0, #80	@ 0008e528 5030
.org 0x8e52a
	strh r1, [r0, #0]	@ 0008e52a 0180
.org 0x8e52c
	adds r0, #2	@ 0008e52c 0230
.org 0x8e52e
	strh r1, [r0, #0]	@ 0008e52e 0180
.org 0x8e530
	adds r0, #102	@ 0008e530 6630
.org 0x8e532
	strh r1, [r0, #0]	@ 0008e532 0180
.org 0x8e534
	ldr r4, [pc, #64]	@ 0008e534 104c
.org 0x8e536
	add r4, sl	@ 0008e536 5444
.org 0x8e538
	adds r0, #6	@ 0008e538 0630
.org 0x8e53a
	movs r3, #0	@ 0008e53a 0023
.org 0x8e53c
	ldrsh r0, [r0, r3]	@ 0008e53c c05e
.org 0x8e53e
	mov r1, r9	@ 0008e53e 4946
.org 0x8e540
	muls r1, r0	@ 0008e540 4143
.org 0x8e542
	adds r0, r1, #0	@ 0008e542 081c
.org 0x8e544
	mov r1, r8	@ 0008e544 4146
.org 0x8e546
	bl 0x128fb8	@ 0008e546 9af037fd
.org 0x8e54a
	ldrb r1, [r4, #0]	@ 0008e54a 2178
.org 0x8e54c
	subs r1, r1, r0	@ 0008e54c 091a
.org 0x8e54e
	lsls r1, r1, #24	@ 0008e54e 0906
.org 0x8e550
	lsrs r1, r1, #24	@ 0008e550 090e
.org 0x8e552
	adds r0, r7, #0	@ 0008e552 381c
.org 0x8e554
	adds r0, #36	@ 0008e554 2430
.org 0x8e556
	strb r1, [r0, #0]	@ 0008e556 0170
.org 0x8e558
	strb r1, [r7, #18]	@ 0008e558 b974
.org 0x8e55a
	add sp, #4	@ 0008e55a 01b0
.org 0x8e55c
	pop {r3, r4, r5}	@ 0008e55c 38bc
.org 0x8e55e
	mov r8, r3	@ 0008e55e 9846
.org 0x8e560
	mov r9, r4	@ 0008e560 a146
.org 0x8e562
	mov sl, r5	@ 0008e562 aa46
.org 0x8e564
	pop {r4, r5, r6, r7}	@ 0008e564 f0bc
.org 0x8e566
	pop {r0}	@ 0008e566 01bc
.org 0x8e568
	bx r0	@ 0008e568 0047
