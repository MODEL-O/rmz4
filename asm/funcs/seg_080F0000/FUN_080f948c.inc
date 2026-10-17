@ FUN_080f948c  entry 0x080f948c  size 406
.thumb
.org 0xf948c
FUN_080f948c:
	push {r4, r5, r6, r7, lr}	@ 000f948c f0b5
.org 0xf948e
	adds r7, r0, #0	@ 000f948e 071c
.org 0xf9490
	adds r5, r7, #0	@ 000f9490 3d1c
.org 0xf9492
	adds r5, #140	@ 000f9492 8c35
.org 0xf9494
	ldr r0, [r5, #0]	@ 000f9494 2868
.org 0xf9496
	movs r6, #1	@ 000f9496 0126
.org 0xf9498
	ands r0, r6	@ 000f9498 3040
.org 0xf949a
	cmp r0, #0	@ 000f949a 0028
.org 0xf949c
	beq.n 0xf94a4	@ 000f949c 02d0
.org 0xf949e
	movs r0, #50	@ 000f949e 3220
.org 0xf94a0
	bl 0x6984	@ 000f94a0 0df770fa
.org 0xf94a4
	ldr r4, [r5, #0]	@ 000f94a4 2c68
.org 0xf94a6
	movs r0, #128	@ 000f94a6 8020
.org 0xf94a8
	lsls r0, r0, #2	@ 000f94a8 8000
.org 0xf94aa
	ands r4, r0	@ 000f94aa 0440
.org 0xf94ac
	cmp r4, #0	@ 000f94ac 002c
.org 0xf94ae
	beq.n 0xf94ea	@ 000f94ae 1cd0
.org 0xf94b0
	ldr r1, [pc, #36]	@ 000f94b0 0949
.org 0xf94b2
	ldrb r0, [r7, #9]	@ 000f94b2 787a
.org 0xf94b4
	lsls r0, r0, #2	@ 000f94b4 8000
.org 0xf94b6
	adds r0, r0, r1	@ 000f94b6 4018
.org 0xf94b8
	movs r1, #2	@ 000f94b8 0221
.org 0xf94ba
	str r1, [r7, #12]	@ 000f94ba f960
.org 0xf94bc
	ldr r0, [r0, #0]	@ 000f94bc 0068
.org 0xf94be
	ldr r0, [r0, #8]	@ 000f94be 8068
.org 0xf94c0
	str r0, [r7, #20]	@ 000f94c0 7861
.org 0xf94c2
	ldr r1, [r5, #0]	@ 000f94c2 2968
.org 0xf94c4
	movs r0, #128	@ 000f94c4 8020
.org 0xf94c6
	lsls r0, r0, #9	@ 000f94c6 4002
.org 0xf94c8
	ands r1, r0	@ 000f94c8 0140
.org 0xf94ca
	cmp r1, #0	@ 000f94ca 0029
.org 0xf94cc
	beq.n 0xf94dc	@ 000f94cc 06d0
.org 0xf94ce
	movs r0, #0	@ 000f94ce 0020
.org 0xf94d0
	strb r6, [r7, #13]	@ 000f94d0 7e73
.org 0xf94d2
	strb r0, [r7, #14]	@ 000f94d2 b873
.org 0xf94d4
	strb r0, [r7, #15]	@ 000f94d4 f873
.org 0xf94d6
	b.n 0xf94e2	@ 000f94d6 04e0
.org 0xf94d8
	.byte 0xfc,0x92,0x86,0x08	@ 000f94d8 data
.org 0xf94dc
	strb r1, [r7, #13]	@ 000f94dc 7973
.org 0xf94de
	strb r1, [r7, #14]	@ 000f94de b973
.org 0xf94e0
	strb r1, [r7, #15]	@ 000f94e0 f973
.org 0xf94e2
	adds r0, r7, #0	@ 000f94e2 381c
.org 0xf94e4
	bl 0xf9a70	@ 000f94e4 00f0c4fa
.org 0xf94e8
	b.n 0xf964a	@ 000f94e8 afe0
.org 0xf94ea
	ldr r0, [pc, #80]	@ 000f94ea 1448
.org 0xf94ec
	adds r0, #38	@ 000f94ec 2630
.org 0xf94ee
	ldrb r0, [r0, #0]	@ 000f94ee 0078
.org 0xf94f0
	cmp r0, #1	@ 000f94f0 0128
.org 0xf94f2
	bhi.n 0xf9548	@ 000f94f2 29d8
.org 0xf94f4
	ldr r0, [pc, #72]	@ 000f94f4 1248
.org 0xf94f6
	adds r1, r7, #0	@ 000f94f6 391c
.org 0xf94f8
	adds r1, #84	@ 000f94f8 5431
.org 0xf94fa
	bl 0x1fb14	@ 000f94fa 26f70bfb
.org 0xf94fe
	movs r1, #128	@ 000f94fe 8021
.org 0xf9500
	lsls r1, r1, #8	@ 000f9500 0902
.org 0xf9502
	cmp r0, r1	@ 000f9502 8842
.org 0xf9504
	bls.n 0xf9548	@ 000f9504 20d9
.org 0xf9506
	ldrb r1, [r7, #10]	@ 000f9506 b97a
.org 0xf9508
	movs r0, #254	@ 000f9508 fe20
.org 0xf950a
	ands r0, r1	@ 000f950a 0840
.org 0xf950c
	movs r1, #253	@ 000f950c fd21
.org 0xf950e
	ands r0, r1	@ 000f950e 0840
.org 0xf9510
	strb r0, [r7, #10]	@ 000f9510 b872
.org 0xf9512
	str r4, [r5, #0]	@ 000f9512 2c60
.org 0xf9514
	adds r0, r7, #0	@ 000f9514 381c
.org 0xf9516
	adds r0, #144	@ 000f9516 9030
.org 0xf9518
	str r4, [r0, #0]	@ 000f9518 0460
.org 0xf951a
	adds r0, #4	@ 000f951a 0430
.org 0xf951c
	strb r4, [r0, #0]	@ 000f951c 0470
.org 0xf951e
	ldrb r1, [r7, #10]	@ 000f951e b97a
.org 0xf9520
	movs r0, #251	@ 000f9520 fb20
.org 0xf9522
	ands r0, r1	@ 000f9522 0840
.org 0xf9524
	strb r0, [r7, #10]	@ 000f9524 b872
.org 0xf9526
	ldr r1, [pc, #28]	@ 000f9526 0749
.org 0xf9528
	ldrb r0, [r7, #9]	@ 000f9528 787a
.org 0xf952a
	lsls r0, r0, #2	@ 000f952a 8000
.org 0xf952c
	adds r0, r0, r1	@ 000f952c 4018
.org 0xf952e
	movs r1, #3	@ 000f952e 0321
.org 0xf9530
	str r1, [r7, #12]	@ 000f9530 f960
.org 0xf9532
	ldr r0, [r0, #0]	@ 000f9532 0068
.org 0xf9534
	ldr r0, [r0, #12]	@ 000f9534 c068
.org 0xf9536
	str r0, [r7, #20]	@ 000f9536 7861
.org 0xf9538
	b.n 0xf964a	@ 000f9538 87e0
.org 0xf953a
	.byte 0x00	@ 000f953a data
.org 0xf953b
	.byte 0x00	@ 000f953b data
.org 0xf953c
	.byte 0xb0,0xe8,0x02,0x02	@ 000f953c data
.org 0xf9540
	.byte 0xf8,0xe9,0x02,0x02	@ 000f9540 data
.org 0xf9544
	.byte 0xfc,0x92,0x86,0x08	@ 000f9544 data
.org 0xf9548
	adds r0, r7, #0	@ 000f9548 381c
.org 0xf954a
	adds r0, #140	@ 000f954a 8c30
.org 0xf954c
	ldr r0, [r0, #0]	@ 000f954c 0068
.org 0xf954e
	movs r1, #1	@ 000f954e 0121
.org 0xf9550
	ands r0, r1	@ 000f9550 0840
.org 0xf9552
	cmp r0, #0	@ 000f9552 0028
.org 0xf9554
	beq.n 0xf9576	@ 000f9554 0fd0
.org 0xf9556
	ldr r0, [r7, #44]	@ 000f9556 f86a
.org 0xf9558
	cmp r0, #0	@ 000f9558 0028
.org 0xf955a
	bne.n 0xf957c	@ 000f955a 0fd1
.org 0xf955c
	ldr r2, [pc, #176]	@ 000f955c 2c4a
.org 0xf955e
	movs r0, #0	@ 000f955e 0020
.org 0xf9560
	adds r1, r7, #0	@ 000f9560 391c
.org 0xf9562
	bl 0x2adac	@ 000f9562 31f723fc
.org 0xf9566
	str r0, [r7, #44]	@ 000f9566 f862
.org 0xf9568
	cmp r0, #0	@ 000f9568 0028
.org 0xf956a
	beq.n 0xf963a	@ 000f956a 66d0
.org 0xf956c
	adds r0, r7, #0	@ 000f956c 381c
.org 0xf956e
	adds r0, #116	@ 000f956e 7430
.org 0xf9570
	ldr r1, [pc, #160]	@ 000f9570 2849
.org 0xf9572
	bl 0x5784	@ 000f9572 0cf707f9
.org 0xf9576
	ldr r0, [r7, #44]	@ 000f9576 f86a
.org 0xf9578
	cmp r0, #0	@ 000f9578 0028
.org 0xf957a
	beq.n 0xf963a	@ 000f957a 5ed0
.org 0xf957c
	bl 0x2b3e4	@ 000f957c 31f732ff
.org 0xf9580
	cmp r0, #0	@ 000f9580 0028
.org 0xf9582
	bne.n 0xf962c	@ 000f9582 53d1
.org 0xf9584
	ldrb r0, [r7, #30]	@ 000f9584 b87f
.org 0xf9586
	lsls r0, r0, #8	@ 000f9586 0002
.org 0xf9588
	adds r5, r7, #0	@ 000f9588 3d1c
.org 0xf958a
	adds r5, #112	@ 000f958a 7035
.org 0xf958c
	ldrb r1, [r5, #0]	@ 000f958c 2978
.org 0xf958e
	orrs r1, r0	@ 000f958e 0143
.org 0xf9590
	adds r6, r7, #0	@ 000f9590 3e1c
.org 0xf9592
	adds r6, #113	@ 000f9592 7136
.org 0xf9594
	movs r2, #0	@ 000f9594 0022
.org 0xf9596
	ldrsb r2, [r6, r2]	@ 000f9596 b256
.org 0xf9598
	lsls r2, r2, #16	@ 000f9598 1204
.org 0xf959a
	lsrs r2, r2, #16	@ 000f959a 120c
.org 0xf959c
	adds r0, r7, #0	@ 000f959c 381c
.org 0xf959e
	adds r0, #114	@ 000f959e 7230
.org 0xf95a0
	movs r3, #0	@ 000f95a0 0023
.org 0xf95a2
	ldrsb r3, [r0, r3]	@ 000f95a2 c356
.org 0xf95a4
	adds r3, #1	@ 000f95a4 0133
.org 0xf95a6
	lsls r3, r3, #16	@ 000f95a6 1b04
.org 0xf95a8
	lsrs r3, r3, #16	@ 000f95a8 1b0c
.org 0xf95aa
	adds r0, r7, #0	@ 000f95aa 381c
.org 0xf95ac
	bl 0x1cfc8	@ 000f95ac 23f70cfd
.org 0xf95b0
	adds r0, r7, #0	@ 000f95b0 381c
.org 0xf95b2
	bl 0x1cff0	@ 000f95b2 23f71dfd
.org 0xf95b6
	adds r0, r7, #0	@ 000f95b6 381c
.org 0xf95b8
	adds r0, #116	@ 000f95b8 7430
.org 0xf95ba
	ldr r4, [pc, #92]	@ 000f95ba 174c
.org 0xf95bc
	ldr r2, [pc, #92]	@ 000f95bc 174a
.org 0xf95be
	ldrb r3, [r7, #30]	@ 000f95be bb7f
.org 0xf95c0
	lsls r3, r3, #8	@ 000f95c0 1b02
.org 0xf95c2
	ldrb r1, [r5, #0]	@ 000f95c2 2978
.org 0xf95c4
	orrs r3, r1	@ 000f95c4 0b43
.org 0xf95c6
	ldr r5, [pc, #88]	@ 000f95c6 164d
.org 0xf95c8
	adds r1, r3, r5	@ 000f95c8 5919
.org 0xf95ca
	lsls r1, r1, #1	@ 000f95ca 4900
.org 0xf95cc
	adds r1, r1, r2	@ 000f95cc 8918
.org 0xf95ce
	ldrh r1, [r1, #0]	@ 000f95ce 0988
.org 0xf95d0
	lsls r1, r1, #2	@ 000f95d0 8900
.org 0xf95d2
	adds r1, r1, r4	@ 000f95d2 0919
.org 0xf95d4
	ldrb r6, [r6, #0]	@ 000f95d4 3678
.org 0xf95d6
	lsls r6, r6, #24	@ 000f95d6 3606
.org 0xf95d8
	asrs r6, r6, #24	@ 000f95d8 3616
.org 0xf95da
	ldr r1, [r1, #0]	@ 000f95da 0968
.org 0xf95dc
	lsls r4, r6, #2	@ 000f95dc b400
.org 0xf95de
	adds r4, r4, r1	@ 000f95de 6418
.org 0xf95e0
	ldr r5, [pc, #64]	@ 000f95e0 104d
.org 0xf95e2
	ldr r2, [r7, #44]	@ 000f95e2 fa6a
.org 0xf95e4
	negs r1, r2	@ 000f95e4 5142
.org 0xf95e6
	orrs r1, r2	@ 000f95e6 1143
.org 0xf95e8
	asrs r1, r1, #31	@ 000f95e8 c917
.org 0xf95ea
	movs r2, #4	@ 000f95ea 0422
.org 0xf95ec
	ands r1, r2	@ 000f95ec 1140
.org 0xf95ee
	adds r1, r1, r5	@ 000f95ee 4919
.org 0xf95f0
	ldr r1, [r1, #0]	@ 000f95f0 0968
.org 0xf95f2
	lsls r3, r3, #2	@ 000f95f2 9b00
.org 0xf95f4
	adds r3, r3, r1	@ 000f95f4 5b18
.org 0xf95f6
	ldr r1, [pc, #48]	@ 000f95f6 0c49
.org 0xf95f8
	adds r3, r3, r1	@ 000f95f8 5b18
.org 0xf95fa
	ldr r1, [r3, #0]	@ 000f95fa 1968
.org 0xf95fc
	adds r1, r1, r6	@ 000f95fc 8919
.org 0xf95fe
	ldrb r1, [r1, #0]	@ 000f95fe 0978
.org 0xf9600
	lsls r2, r1, #1	@ 000f9600 4a00
.org 0xf9602
	adds r2, r2, r1	@ 000f9602 5218
.org 0xf9604
	lsls r2, r2, #3	@ 000f9604 d200
.org 0xf9606
	ldr r1, [r4, #0]	@ 000f9606 2168
.org 0xf9608
	adds r1, r1, r2	@ 000f9608 8918
.org 0xf960a
	bl 0x5784	@ 000f960a 0cf7bbf8
.org 0xf960e
	b.n 0xf964a	@ 000f960e 1ce0
.org 0xf9610
	.byte 0x78,0xa6,0x86,0x08	@ 000f9610 data
.org 0xf9614
	.byte 0x98,0xa5,0x86,0x08	@ 000f9614 data
.org 0xf9618
	.byte 0x94,0xa5,0x86,0x08	@ 000f9618 data
.org 0xf961c
	.byte 0xa0,0xa5,0x86,0x08	@ 000f961c data
.org 0xf9620
	.byte 0x00,0x7f,0xff,0xff	@ 000f9620 data
