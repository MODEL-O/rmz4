@ FUN_080c7480  entry 0x080c7480  size 338
.thumb
.org 0xc7480
FUN_080c7480:
	push {r4, r5, r6, r7, lr}	@ 000c7480 f0b5
.org 0xc7482
	mov r7, sl	@ 000c7482 5746
.org 0xc7484
	mov r6, r9	@ 000c7484 4e46
.org 0xc7486
	mov r5, r8	@ 000c7486 4546
.org 0xc7488
	push {r5, r6, r7}	@ 000c7488 e0b4
.org 0xc748a
	sub sp, #40	@ 000c748a 8ab0
.org 0xc748c
	adds r6, r0, #0	@ 000c748c 061c
.org 0xc748e
	ldr r7, [r6, #40]	@ 000c748e b76a
.org 0xc7490
	movs r0, #0	@ 000c7490 0020
.org 0xc7492
	mov r9, r0	@ 000c7492 8146
.org 0xc7494
	mov r8, r0	@ 000c7494 8046
.org 0xc7496
	mov sl, r0	@ 000c7496 8246
.org 0xc7498
	ldr r0, [r6, #84]	@ 000c7498 706d
.org 0xc749a
	ldr r1, [r6, #88]	@ 000c749a b16d
.org 0xc749c
	str r0, [sp, #24]	@ 000c749c 0690
.org 0xc749e
	str r1, [sp, #28]	@ 000c749e 0791
.org 0xc74a0
	adds r0, r6, #0	@ 000c74a0 301c
.org 0xc74a2
	bl 0x1cff0	@ 000c74a2 55f7a5fd
.org 0xc74a6
	mov r1, r9	@ 000c74a6 4946
.org 0xc74a8
	str r1, [sp, #0]	@ 000c74a8 0091
.org 0xc74aa
	str r1, [sp, #4]	@ 000c74aa 0191
.org 0xc74ac
	movs r0, #128	@ 000c74ac 8020
.org 0xc74ae
	lsls r0, r0, #4	@ 000c74ae 0001
.org 0xc74b0
	str r0, [sp, #8]	@ 000c74b0 0290
.org 0xc74b2
	add r4, sp, #8	@ 000c74b2 02ac
.org 0xc74b4
	str r0, [r4, #4]	@ 000c74b4 6060
.org 0xc74b6
	ldr r1, [r6, #84]	@ 000c74b6 716d
.org 0xc74b8
	ldr r0, [r6, #92]	@ 000c74b8 f06d
.org 0xc74ba
	adds r0, r1, r0	@ 000c74ba 0818
.org 0xc74bc
	str r0, [sp, #32]	@ 000c74bc 0890
.org 0xc74be
	ldr r1, [r6, #88]	@ 000c74be b16d
.org 0xc74c0
	ldr r0, [r6, #96]	@ 000c74c0 306e
.org 0xc74c2
	adds r0, r1, r0	@ 000c74c2 0818
.org 0xc74c4
	str r0, [sp, #36]	@ 000c74c4 0990
.org 0xc74c6
	ldr r0, [r6, #84]	@ 000c74c6 706d
.org 0xc74c8
	ldr r1, [r6, #88]	@ 000c74c8 b16d
.org 0xc74ca
	str r0, [sp, #16]	@ 000c74ca 0490
.org 0xc74cc
	str r1, [sp, #20]	@ 000c74cc 0591
.org 0xc74ce
	add r5, sp, #16	@ 000c74ce 04ad
.org 0xc74d0
	adds r0, r7, #0	@ 000c74d0 381c
.org 0xc74d2
	adds r1, r5, #0	@ 000c74d2 291c
.org 0xc74d4
	mov r2, sp	@ 000c74d4 6a46
.org 0xc74d6
	adds r3, r4, #0	@ 000c74d6 231c
.org 0xc74d8
	bl 0x66454	@ 000c74d8 9ef7bcff
.org 0xc74dc
	adds r3, r4, #0	@ 000c74dc 231c
.org 0xc74de
	cmp r0, #0	@ 000c74de 0028
.org 0xc74e0
	beq.n 0xc74f4	@ 000c74e0 08d0
.org 0xc74e2
	movs r0, #1	@ 000c74e2 0120
.org 0xc74e4
	mov r9, r0	@ 000c74e4 8146
.org 0xc74e6
	adds r0, r6, #0	@ 000c74e6 301c
.org 0xc74e8
	adds r0, #181	@ 000c74e8 b530
.org 0xc74ea
	ldrb r0, [r0, #0]	@ 000c74ea 0078
.org 0xc74ec
	cmp r0, #0	@ 000c74ec 0028
.org 0xc74ee
	bne.n 0xc74f4	@ 000c74ee 01d1
.org 0xc74f0
	movs r1, #1	@ 000c74f0 0121
.org 0xc74f2
	mov r8, r1	@ 000c74f2 8846
.org 0xc74f4
	ldr r0, [sp, #32]	@ 000c74f4 0898
.org 0xc74f6
	ldr r1, [sp, #36]	@ 000c74f6 0999
.org 0xc74f8
	str r0, [sp, #16]	@ 000c74f8 0490
.org 0xc74fa
	str r1, [sp, #20]	@ 000c74fa 0591
.org 0xc74fc
	adds r0, r7, #0	@ 000c74fc 381c
.org 0xc74fe
	adds r1, r5, #0	@ 000c74fe 291c
.org 0xc7500
	mov r2, sp	@ 000c7500 6a46
.org 0xc7502
	bl 0x66454	@ 000c7502 9ef7a7ff
.org 0xc7506
	cmp r0, #0	@ 000c7506 0028
.org 0xc7508
	beq.n 0xc751a	@ 000c7508 07d0
.org 0xc750a
	movs r1, #1	@ 000c750a 0121
.org 0xc750c
	mov r9, r1	@ 000c750c 8946
.org 0xc750e
	adds r0, r6, #0	@ 000c750e 301c
.org 0xc7510
	adds r0, #181	@ 000c7510 b530
.org 0xc7512
	ldrb r0, [r0, #0]	@ 000c7512 0078
.org 0xc7514
	cmp r0, #0	@ 000c7514 0028
.org 0xc7516
	bne.n 0xc751a	@ 000c7516 00d1
.org 0xc7518
	mov r8, r1	@ 000c7518 8846
.org 0xc751a
	ldr r0, [sp, #32]	@ 000c751a 0898
.org 0xc751c
	str r0, [sp, #16]	@ 000c751c 0490
.org 0xc751e
	ldr r1, [sp, #28]	@ 000c751e 0799
.org 0xc7520
	str r1, [r5, #4]	@ 000c7520 6960
.org 0xc7522
	ldr r0, [sp, #16]	@ 000c7522 0498
.org 0xc7524
	ldr r2, [sp, #0]	@ 000c7524 009a
.org 0xc7526
	adds r0, r0, r2	@ 000c7526 8018
.org 0xc7528
	ldr r2, [sp, #4]	@ 000c7528 019a
.org 0xc752a
	adds r1, r1, r2	@ 000c752a 8918
.org 0xc752c
	bl 0x7c7c	@ 000c752c 40f7a6fb
.org 0xc7530
	lsls r0, r0, #16	@ 000c7530 0004
.org 0xc7532
	cmp r0, #0	@ 000c7532 0028
.org 0xc7534
	beq.n 0xc753a	@ 000c7534 01d0
.org 0xc7536
	movs r1, #1	@ 000c7536 0121
.org 0xc7538
	mov r8, r1	@ 000c7538 8846
.org 0xc753a
	ldr r0, [sp, #24]	@ 000c753a 0698
.org 0xc753c
	str r0, [sp, #16]	@ 000c753c 0490
.org 0xc753e
	ldr r1, [sp, #36]	@ 000c753e 0999
.org 0xc7540
	str r1, [r5, #4]	@ 000c7540 6960
.org 0xc7542
	ldr r0, [sp, #16]	@ 000c7542 0498
.org 0xc7544
	ldr r2, [sp, #0]	@ 000c7544 009a
.org 0xc7546
	adds r0, r0, r2	@ 000c7546 8018
.org 0xc7548
	ldr r2, [sp, #4]	@ 000c7548 019a
.org 0xc754a
	adds r1, r1, r2	@ 000c754a 8918
.org 0xc754c
	bl 0x7c7c	@ 000c754c 40f796fb
.org 0xc7550
	lsls r0, r0, #16	@ 000c7550 0004
.org 0xc7552
	cmp r0, #0	@ 000c7552 0028
.org 0xc7554
	beq.n 0xc755a	@ 000c7554 01d0
.org 0xc7556
	movs r1, #1	@ 000c7556 0121
.org 0xc7558
	mov sl, r1	@ 000c7558 8a46
.org 0xc755a
	mov r0, r8	@ 000c755a 4046
.org 0xc755c
	cmp r0, #0	@ 000c755c 0028
.org 0xc755e
	bne.n 0xc7566	@ 000c755e 02d1
.org 0xc7560
	mov r1, sl	@ 000c7560 5146
.org 0xc7562
	cmp r1, #0	@ 000c7562 0029
.org 0xc7564
	beq.n 0xc75bc	@ 000c7564 2ad0
.org 0xc7566
	adds r1, r6, #0	@ 000c7566 311c
.org 0xc7568
	adds r1, #180	@ 000c7568 b431
.org 0xc756a
	ldrb r0, [r1, #0]	@ 000c756a 0878
.org 0xc756c
	subs r0, #1	@ 000c756c 0138
.org 0xc756e
	strb r0, [r1, #0]	@ 000c756e 0870
.org 0xc7570
	lsls r0, r0, #24	@ 000c7570 0006
.org 0xc7572
	cmp r0, #0	@ 000c7572 0028
.org 0xc7574
	bne.n 0xc7594	@ 000c7574 0ed1
.org 0xc7576
	ldr r1, [pc, #24]	@ 000c7576 0649
.org 0xc7578
	ldrb r0, [r6, #9]	@ 000c7578 707a
.org 0xc757a
	lsls r0, r0, #2	@ 000c757a 8000
.org 0xc757c
	adds r0, r0, r1	@ 000c757c 4018
.org 0xc757e
	movs r1, #2	@ 000c757e 0221
.org 0xc7580
	str r1, [r6, #12]	@ 000c7580 f160
.org 0xc7582
	ldr r0, [r0, #0]	@ 000c7582 0068
.org 0xc7584
	ldr r0, [r0, #8]	@ 000c7584 8068
.org 0xc7586
	str r0, [r6, #20]	@ 000c7586 7061
.org 0xc7588
	adds r0, r6, #0	@ 000c7588 301c
.org 0xc758a
	bl 0xc7648	@ 000c758a 00f05df8
.org 0xc758e
	b.n 0xc75cc	@ 000c758e 1de0
.org 0xc7590
	.byte 0xf4,0x49,0x86,0x08	@ 000c7590 data
.org 0xc7594
	ldr r0, [pc, #32]	@ 000c7594 0848
.org 0xc7596
	bl 0x2b10	@ 000c7596 3bf7bbfa
.org 0xc759a
	mov r1, r8	@ 000c759a 4146
.org 0xc759c
	lsls r0, r1, #1	@ 000c759c 4800
.org 0xc759e
	movs r2, #1	@ 000c759e 0122
.org 0xc75a0
	subs r0, r2, r0	@ 000c75a0 101a
.org 0xc75a2
	ldr r1, [r6, #92]	@ 000c75a2 f16d
.org 0xc75a4
	muls r0, r1	@ 000c75a4 4843
.org 0xc75a6
	str r0, [r6, #92]	@ 000c75a6 f065
.org 0xc75a8
	mov r1, sl	@ 000c75a8 5146
.org 0xc75aa
	lsls r0, r1, #1	@ 000c75aa 4800
.org 0xc75ac
	subs r2, r2, r0	@ 000c75ac 121a
.org 0xc75ae
	ldr r0, [r6, #96]	@ 000c75ae 306e
.org 0xc75b0
	muls r0, r2	@ 000c75b0 5043
.org 0xc75b2
	str r0, [r6, #96]	@ 000c75b2 3066
.org 0xc75b4
	b.n 0xc75c4	@ 000c75b4 06e0
.org 0xc75b6
	.byte 0x00	@ 000c75b6 data
.org 0xc75b7
	.byte 0x00	@ 000c75b7 data
.org 0xc75b8
	.byte 0x0d,0x01,0x00,0x00	@ 000c75b8 data
.org 0xc75bc
	ldr r0, [sp, #32]	@ 000c75bc 0898
.org 0xc75be
	ldr r1, [sp, #36]	@ 000c75be 0999
.org 0xc75c0
	str r0, [r6, #84]	@ 000c75c0 7065
.org 0xc75c2
	str r1, [r6, #88]	@ 000c75c2 b165
.org 0xc75c4
	adds r0, r6, #0	@ 000c75c4 301c
.org 0xc75c6
	adds r0, #181	@ 000c75c6 b530
.org 0xc75c8
	mov r1, r9	@ 000c75c8 4946
.org 0xc75ca
	strb r1, [r0, #0]	@ 000c75ca 0170
.org 0xc75cc
	add sp, #40	@ 000c75cc 0ab0
.org 0xc75ce
	pop {r3, r4, r5}	@ 000c75ce 38bc
.org 0xc75d0
	mov r8, r3	@ 000c75d0 9846
