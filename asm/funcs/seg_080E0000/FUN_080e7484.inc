@ FUN_080e7484  entry 0x080e7484  size 314
.thumb
.org 0xe7484
FUN_080e7484:
	push {r4, r5, r6, r7, lr}	@ 000e7484 f0b5
.org 0xe7486
	mov r7, r9	@ 000e7486 4f46
.org 0xe7488
	mov r6, r8	@ 000e7488 4646
.org 0xe748a
	push {r6, r7}	@ 000e748a c0b4
.org 0xe748c
	sub sp, #8	@ 000e748c 82b0
.org 0xe748e
	adds r6, r0, #0	@ 000e748e 061c
.org 0xe7490
	ldrb r0, [r6, #17]	@ 000e7490 707c
.org 0xe7492
	cmp r0, #0	@ 000e7492 0028
.org 0xe7494
	bne.n 0xe74e4	@ 000e7494 26d1
.org 0xe7496
	ldr r0, [r6, #84]	@ 000e7496 706d
.org 0xe7498
	str r0, [sp, #0]	@ 000e7498 0090
.org 0xe749a
	ldr r0, [r6, #88]	@ 000e749a b06d
.org 0xe749c
	ldr r1, [pc, #216]	@ 000e749c 3649
.org 0xe749e
	adds r0, r0, r1	@ 000e749e 4018
.org 0xe74a0
	str r0, [sp, #4]	@ 000e74a0 0190
.org 0xe74a2
	movs r0, #1	@ 000e74a2 0120
.org 0xe74a4
	mov r1, sp	@ 000e74a4 6946
.org 0xe74a6
	bl 0xd0c88	@ 000e74a6 e9f7effb
.org 0xe74aa
	movs r0, #42	@ 000e74aa 2a20
.org 0xe74ac
	bl 0x2b10	@ 000e74ac 1bf730fb
.org 0xe74b0
	movs r4, #1	@ 000e74b0 0124
.org 0xe74b2
	strb r4, [r6, #17]	@ 000e74b2 7474
.org 0xe74b4
	adds r5, r6, #0	@ 000e74b4 351c
.org 0xe74b6
	adds r5, #84	@ 000e74b6 5435
.org 0xe74b8
	ldr r1, [pc, #192]	@ 000e74b8 3049
.org 0xe74ba
	ldrb r2, [r6, #10]	@ 000e74ba b27a
.org 0xe74bc
	lsrs r2, r2, #4	@ 000e74bc 1209
.org 0xe74be
	ands r2, r4	@ 000e74be 2240
.org 0xe74c0
	adds r0, r5, #0	@ 000e74c0 281c
.org 0xe74c2
	bl 0xe70d4	@ 000e74c2 fff707fe
.org 0xe74c6
	ldr r1, [pc, #184]	@ 000e74c6 2e49
.org 0xe74c8
	ldrb r2, [r6, #10]	@ 000e74c8 b27a
.org 0xe74ca
	lsrs r2, r2, #4	@ 000e74ca 1209
.org 0xe74cc
	ands r2, r4	@ 000e74cc 2240
.org 0xe74ce
	adds r0, r5, #0	@ 000e74ce 281c
.org 0xe74d0
	bl 0xe70d4	@ 000e74d0 fff700fe
.org 0xe74d4
	movs r1, #129	@ 000e74d4 8121
.org 0xe74d6
	lsls r1, r1, #2	@ 000e74d6 8900
.org 0xe74d8
	ldrb r2, [r6, #10]	@ 000e74d8 b27a
.org 0xe74da
	lsrs r2, r2, #4	@ 000e74da 1209
.org 0xe74dc
	ands r2, r4	@ 000e74dc 2240
.org 0xe74de
	adds r0, r5, #0	@ 000e74de 281c
.org 0xe74e0
	bl 0xe70d4	@ 000e74e0 fff7f8fd
.org 0xe74e4
	ldr r0, [pc, #156]	@ 000e74e4 2748
.org 0xe74e6
	ldrb r2, [r6, #17]	@ 000e74e6 727c
.org 0xe74e8
	subs r2, #1	@ 000e74e8 013a
.org 0xe74ea
	lsls r2, r2, #2	@ 000e74ea 9200
.org 0xe74ec
	adds r2, r2, r0	@ 000e74ec 1218
.org 0xe74ee
	ldr r4, [pc, #152]	@ 000e74ee 264c
.org 0xe74f0
	ldr r0, [r4, #0]	@ 000e74f0 2068
.org 0xe74f2
	ldr r1, [pc, #152]	@ 000e74f2 2649
.org 0xe74f4
	mov r9, r1	@ 000e74f4 8946
.org 0xe74f6
	mov r1, r9	@ 000e74f6 4946
.org 0xe74f8
	muls r1, r0	@ 000e74f8 4143
.org 0xe74fa
	adds r0, r1, #0	@ 000e74fa 081c
.org 0xe74fc
	ldr r1, [pc, #144]	@ 000e74fc 2449
.org 0xe74fe
	mov r8, r1	@ 000e74fe 8846
.org 0xe7500
	add r0, r8	@ 000e7500 4044
.org 0xe7502
	lsls r0, r0, #1	@ 000e7502 4000
.org 0xe7504
	lsrs r3, r0, #1	@ 000e7504 4308
.org 0xe7506
	str r3, [r4, #0]	@ 000e7506 2360
.org 0xe7508
	lsrs r0, r0, #17	@ 000e7508 400c
.org 0xe750a
	movs r1, #255	@ 000e750a ff21
.org 0xe750c
	mov ip, r1	@ 000e750c 8c46
.org 0xe750e
	ands r0, r1	@ 000e750e 0840
.org 0xe7510
	adds r1, #1	@ 000e7510 0131
.org 0xe7512
	adds r0, r0, r1	@ 000e7512 4018
.org 0xe7514
	ldr r1, [r2, #0]	@ 000e7514 1168
.org 0xe7516
	muls r0, r1	@ 000e7516 4843
.org 0xe7518
	ldrb r5, [r6, #17]	@ 000e7518 757c
.org 0xe751a
	cmp r0, #0	@ 000e751a 0028
.org 0xe751c
	bge.n 0xe7520	@ 000e751c 00da
.org 0xe751e
	adds r0, #255	@ 000e751e ff30
.org 0xe7520
	asrs r7, r0, #8	@ 000e7520 0712
.org 0xe7522
	str r7, [r6, #92]	@ 000e7522 f765
.org 0xe7524
	mov r0, r9	@ 000e7524 4846
.org 0xe7526
	muls r0, r3	@ 000e7526 5843
.org 0xe7528
	add r0, r8	@ 000e7528 4044
.org 0xe752a
	lsls r0, r0, #1	@ 000e752a 4000
.org 0xe752c
	lsrs r1, r0, #1	@ 000e752c 4108
.org 0xe752e
	str r1, [r4, #0]	@ 000e752e 2160
.org 0xe7530
	lsrs r0, r0, #17	@ 000e7530 400c
.org 0xe7532
	mov r1, ip	@ 000e7532 6146
.org 0xe7534
	ands r0, r1	@ 000e7534 0840
.org 0xe7536
	movs r1, #192	@ 000e7536 c021
.org 0xe7538
	lsls r1, r1, #1	@ 000e7538 4900
.org 0xe753a
	adds r0, r0, r1	@ 000e753a 4018
.org 0xe753c
	lsls r0, r0, #8	@ 000e753c 0002
.org 0xe753e
	negs r0, r0	@ 000e753e 4042
.org 0xe7540
	cmp r0, #0	@ 000e7540 0028
.org 0xe7542
	bge.n 0xe7546	@ 000e7542 00da
.org 0xe7544
	adds r0, #255	@ 000e7544 ff30
.org 0xe7546
	asrs r0, r0, #8	@ 000e7546 0012
.org 0xe7548
	str r0, [r6, #96]	@ 000e7548 3066
.org 0xe754a
	ldrb r1, [r6, #10]	@ 000e754a b17a
.org 0xe754c
	movs r0, #16	@ 000e754c 1020
.org 0xe754e
	ands r0, r1	@ 000e754e 0840
.org 0xe7550
	cmp r0, #0	@ 000e7550 0028
.org 0xe7552
	beq.n 0xe7598	@ 000e7552 21d0
.org 0xe7554
	ldr r2, [pc, #60]	@ 000e7554 0f4a
.org 0xe7556
	subs r0, r5, #1	@ 000e7556 681e
.org 0xe7558
	lsls r0, r0, #3	@ 000e7558 c000
.org 0xe755a
	adds r0, r0, r2	@ 000e755a 8018
.org 0xe755c
	ldr r1, [r0, #0]	@ 000e755c 0168
.org 0xe755e
	lsls r1, r1, #8	@ 000e755e 0902
.org 0xe7560
	ldr r0, [r6, #84]	@ 000e7560 706d
.org 0xe7562
	subs r0, r0, r1	@ 000e7562 401a
.org 0xe7564
	str r0, [r6, #84]	@ 000e7564 7065
.org 0xe7566
	lsls r0, r7, #8	@ 000e7566 3802
.org 0xe7568
	negs r0, r0	@ 000e7568 4042
.org 0xe756a
	cmp r0, #0	@ 000e756a 0028
.org 0xe756c
	bge.n 0xe7570	@ 000e756c 00da
.org 0xe756e
	adds r0, #255	@ 000e756e ff30
.org 0xe7570
	asrs r0, r0, #8	@ 000e7570 0012
.org 0xe7572
	str r0, [r6, #92]	@ 000e7572 f065
.org 0xe7574
	b.n 0xe75aa	@ 000e7574 19e0
.org 0xe7576
	.byte 0x00	@ 000e7576 data
.org 0xe7577
	.byte 0x00	@ 000e7577 data
.org 0xe7578
	.byte 0x00,0xf3,0xff,0xff	@ 000e7578 data
.org 0xe757c
	.byte 0x02,0x02,0x00,0x00	@ 000e757c data
.org 0xe7580
	.byte 0x03,0x02,0x00,0x00	@ 000e7580 data
.org 0xe7584
	.byte 0x9c,0x90,0x86,0x08	@ 000e7584 data
.org 0xe7588
	.byte 0x38,0xdc,0x02,0x02	@ 000e7588 data
.org 0xe758c
	.byte 0xfd,0x43,0x03,0x00	@ 000e758c data
.org 0xe7590
	.byte 0xc3,0x9e,0x26,0x00	@ 000e7590 data
.org 0xe7594
	.byte 0x7c,0x90,0x86,0x08	@ 000e7594 data
.org 0xe7598
	ldr r2, [pc, #68]	@ 000e7598 114a
.org 0xe759a
	subs r0, r5, #1	@ 000e759a 681e
.org 0xe759c
	lsls r0, r0, #3	@ 000e759c c000
.org 0xe759e
	adds r0, r0, r2	@ 000e759e 8018
.org 0xe75a0
	ldr r1, [r0, #0]	@ 000e75a0 0168
.org 0xe75a2
	lsls r1, r1, #8	@ 000e75a2 0902
.org 0xe75a4
	ldr r0, [r6, #84]	@ 000e75a4 706d
.org 0xe75a6
	adds r0, r0, r1	@ 000e75a6 4018
.org 0xe75a8
	str r0, [r6, #84]	@ 000e75a8 7065
.org 0xe75aa
	subs r0, r5, #1	@ 000e75aa 681e
.org 0xe75ac
	lsls r0, r0, #3	@ 000e75ac c000
.org 0xe75ae
	adds r1, r2, #4	@ 000e75ae 111d
.org 0xe75b0
	adds r0, r0, r1	@ 000e75b0 4018
.org 0xe75b2
	ldr r1, [r0, #0]	@ 000e75b2 0168
.org 0xe75b4
	lsls r1, r1, #8	@ 000e75b4 0902
.org 0xe75b6
	ldr r0, [r6, #88]	@ 000e75b6 b06d
.org 0xe75b8
	adds r0, r0, r1	@ 000e75b8 4018
.org 0xe75ba
	str r0, [r6, #88]	@ 000e75ba b065
.org 0xe75bc
	ldr r1, [pc, #36]	@ 000e75bc 0949
