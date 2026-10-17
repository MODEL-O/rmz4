@ FUN_080e4578  entry 0x080e4578  size 318
.thumb
.org 0xe4578
FUN_080e4578:
	push {r4, r5, r6, r7, lr}	@ 000e4578 f0b5
.org 0xe457a
	adds r5, r0, #0	@ 000e457a 051c
.org 0xe457c
	ldr r2, [pc, #60]	@ 000e457c 0f4a
.org 0xe457e
	ldr r1, [r2, #0]	@ 000e457e 1168
.org 0xe4580
	ldr r0, [pc, #60]	@ 000e4580 0f48
.org 0xe4582
	muls r0, r1	@ 000e4582 4843
.org 0xe4584
	ldr r1, [pc, #60]	@ 000e4584 0f49
.org 0xe4586
	adds r0, r0, r1	@ 000e4586 4018
.org 0xe4588
	lsls r0, r0, #1	@ 000e4588 4000
.org 0xe458a
	lsrs r1, r0, #1	@ 000e458a 4108
.org 0xe458c
	str r1, [r2, #0]	@ 000e458c 1160
.org 0xe458e
	lsrs r0, r0, #17	@ 000e458e 400c
.org 0xe4590
	movs r1, #3	@ 000e4590 0321
.org 0xe4592
	bl 0x129198	@ 000e4592 44f001fe
.org 0xe4596
	lsls r0, r0, #24	@ 000e4596 0006
.org 0xe4598
	lsrs r4, r0, #24	@ 000e4598 040e
.org 0xe459a
	adds r0, r5, #0	@ 000e459a 281c
.org 0xe459c
	bl 0x1cc9c	@ 000e459c 38f77efb
.org 0xe45a0
	ldrb r1, [r5, #10]	@ 000e45a0 a97a
.org 0xe45a2
	movs r0, #1	@ 000e45a2 0120
.org 0xe45a4
	orrs r0, r1	@ 000e45a4 0843
.org 0xe45a6
	movs r1, #2	@ 000e45a6 0221
.org 0xe45a8
	orrs r0, r1	@ 000e45a8 0843
.org 0xe45aa
	strb r0, [r5, #10]	@ 000e45aa a872
.org 0xe45ac
	adds r0, r5, #0	@ 000e45ac 281c
.org 0xe45ae
	bl 0x1ceec	@ 000e45ae 38f79dfc
.org 0xe45b2
	cmp r4, #0	@ 000e45b2 002c
.org 0xe45b4
	bne.n 0xe45cc	@ 000e45b4 0ad1
.org 0xe45b6
	ldr r1, [pc, #16]	@ 000e45b6 0449
.org 0xe45b8
	b.n 0xe45d2	@ 000e45b8 0be0
.org 0xe45ba
	.byte 0x00	@ 000e45ba data
.org 0xe45bb
	.byte 0x00	@ 000e45bb data
.org 0xe45bc
	.byte 0x38,0xdc,0x02,0x02	@ 000e45bc data
.org 0xe45c0
	.byte 0xfd,0x43,0x03,0x00	@ 000e45c0 data
.org 0xe45c4
	.byte 0xc3,0x9e,0x26,0x00	@ 000e45c4 data
.org 0xe45c8
	.byte 0x0b,0xb1,0x00,0x00	@ 000e45c8 data
.org 0xe45cc
	cmp r4, #1	@ 000e45cc 012c
.org 0xe45ce
	bne.n 0xe45e0	@ 000e45ce 07d1
.org 0xe45d0
	ldr r1, [pc, #8]	@ 000e45d0 0249
.org 0xe45d2
	adds r0, r5, #0	@ 000e45d2 281c
.org 0xe45d4
	bl 0x1cf00	@ 000e45d4 38f794fc
.org 0xe45d8
	b.n 0xe45e8	@ 000e45d8 06e0
.org 0xe45da
	.byte 0x00	@ 000e45da data
.org 0xe45db
	.byte 0x00	@ 000e45db data
.org 0xe45dc
	.byte 0x0c,0xb1,0x00,0x00	@ 000e45dc data
.org 0xe45e0
	ldr r1, [pc, #48]	@ 000e45e0 0c49
.org 0xe45e2
	adds r0, r5, #0	@ 000e45e2 281c
.org 0xe45e4
	bl 0x1cf00	@ 000e45e4 38f78cfc
.org 0xe45e8
	adds r0, r5, #0	@ 000e45e8 281c
.org 0xe45ea
	bl 0x1cff0	@ 000e45ea 38f701fd
.org 0xe45ee
	ldr r2, [pc, #40]	@ 000e45ee 0a4a
.org 0xe45f0
	ldr r1, [r2, #0]	@ 000e45f0 1168
.org 0xe45f2
	ldr r0, [pc, #40]	@ 000e45f2 0a48
.org 0xe45f4
	muls r0, r1	@ 000e45f4 4843
.org 0xe45f6
	ldr r6, [pc, #40]	@ 000e45f6 0a4e
.org 0xe45f8
	adds r0, r0, r6	@ 000e45f8 8019
.org 0xe45fa
	lsls r0, r0, #1	@ 000e45fa 4000
.org 0xe45fc
	lsrs r1, r0, #1	@ 000e45fc 4108
.org 0xe45fe
	str r1, [r2, #0]	@ 000e45fe 1160
.org 0xe4600
	lsrs r2, r0, #17	@ 000e4600 420c
.org 0xe4602
	movs r0, #1	@ 000e4602 0120
.org 0xe4604
	ands r2, r0	@ 000e4604 0240
.org 0xe4606
	cmp r2, #0	@ 000e4606 002a
.org 0xe4608
	beq.n 0xe4624	@ 000e4608 0cd0
.org 0xe460a
	ldrb r1, [r5, #10]	@ 000e460a a97a
.org 0xe460c
	movs r0, #16	@ 000e460c 1020
.org 0xe460e
	orrs r0, r1	@ 000e460e 0843
.org 0xe4610
	b.n 0xe462a	@ 000e4610 0be0
.org 0xe4612
	.byte 0x00	@ 000e4612 data
.org 0xe4613
	.byte 0x00	@ 000e4613 data
.org 0xe4614
	.byte 0x0d,0xb1,0x00,0x00	@ 000e4614 data
.org 0xe4618
	.byte 0x38,0xdc,0x02,0x02	@ 000e4618 data
.org 0xe461c
	.byte 0xfd,0x43,0x03,0x00	@ 000e461c data
.org 0xe4620
	.byte 0xc3,0x9e,0x26,0x00	@ 000e4620 data
.org 0xe4624
	ldrb r1, [r5, #10]	@ 000e4624 a97a
.org 0xe4626
	movs r0, #239	@ 000e4626 ef20
.org 0xe4628
	ands r0, r1	@ 000e4628 0840
.org 0xe462a
	strb r0, [r5, #10]	@ 000e462a a872
.org 0xe462c
	movs r4, #1	@ 000e462c 0124
.org 0xe462e
	adds r1, r2, #0	@ 000e462e 111c
.org 0xe4630
	adds r0, r5, #0	@ 000e4630 281c
.org 0xe4632
	adds r0, #76	@ 000e4632 4c30
.org 0xe4634
	strb r1, [r0, #0]	@ 000e4634 0170
.org 0xe4636
	adds r3, r5, #0	@ 000e4636 2b1c
.org 0xe4638
	adds r3, #74	@ 000e4638 4a33
.org 0xe463a
	lsls r1, r1, #4	@ 000e463a 0901
.org 0xe463c
	ldrb r2, [r3, #0]	@ 000e463c 1a78
.org 0xe463e
	movs r0, #17	@ 000e463e 1120
.org 0xe4640
	negs r0, r0	@ 000e4640 4042
.org 0xe4642
	ands r0, r2	@ 000e4642 1040
.org 0xe4644
	orrs r0, r1	@ 000e4644 0843
.org 0xe4646
	strb r0, [r3, #0]	@ 000e4646 1870
.org 0xe4648
	ldr r2, [pc, #32]	@ 000e4648 084a
.org 0xe464a
	ldr r1, [r2, #0]	@ 000e464a 1168
.org 0xe464c
	ldr r0, [pc, #32]	@ 000e464c 0848
.org 0xe464e
	muls r0, r1	@ 000e464e 4843
.org 0xe4650
	ldr r1, [pc, #32]	@ 000e4650 0849
.org 0xe4652
	adds r0, r0, r1	@ 000e4652 4018
.org 0xe4654
	lsls r0, r0, #1	@ 000e4654 4000
.org 0xe4656
	lsrs r1, r0, #1	@ 000e4656 4108
.org 0xe4658
	str r1, [r2, #0]	@ 000e4658 1160
.org 0xe465a
	lsrs r6, r0, #17	@ 000e465a 460c
.org 0xe465c
	ands r6, r4	@ 000e465c 2640
.org 0xe465e
	adds r7, r2, #0	@ 000e465e 171c
.org 0xe4660
	cmp r6, #0	@ 000e4660 002e
.org 0xe4662
	beq.n 0xe4678	@ 000e4662 09d0
.org 0xe4664
	ldrb r0, [r5, #10]	@ 000e4664 a87a
.org 0xe4666
	movs r1, #32	@ 000e4666 2021
.org 0xe4668
	orrs r0, r1	@ 000e4668 0843
.org 0xe466a
	b.n 0xe467e	@ 000e466a 08e0
.org 0xe466c
	.byte 0x38,0xdc,0x02,0x02	@ 000e466c data
.org 0xe4670
	.byte 0xfd,0x43,0x03,0x00	@ 000e4670 data
.org 0xe4674
	.byte 0xc3,0x9e,0x26,0x00	@ 000e4674 data
.org 0xe4678
	ldrb r1, [r5, #10]	@ 000e4678 a97a
.org 0xe467a
	movs r0, #223	@ 000e467a df20
.org 0xe467c
	ands r0, r1	@ 000e467c 0840
.org 0xe467e
	strb r0, [r5, #10]	@ 000e467e a872
.org 0xe4680
	movs r4, #1	@ 000e4680 0124
.org 0xe4682
	adds r1, r4, #0	@ 000e4682 211c
.org 0xe4684
	ands r1, r6	@ 000e4684 3140
.org 0xe4686
	adds r0, r5, #0	@ 000e4686 281c
.org 0xe4688
	adds r0, #77	@ 000e4688 4d30
.org 0xe468a
	strb r1, [r0, #0]	@ 000e468a 0170
.org 0xe468c
	lsls r1, r1, #5	@ 000e468c 4901
.org 0xe468e
	ldrb r2, [r3, #0]	@ 000e468e 1a78
.org 0xe4690
	movs r0, #33	@ 000e4690 2120
.org 0xe4692
	negs r0, r0	@ 000e4692 4042
.org 0xe4694
	ands r0, r2	@ 000e4694 1040
.org 0xe4696
	orrs r0, r1	@ 000e4696 0843
.org 0xe4698
	strb r0, [r3, #0]	@ 000e4698 1870
.org 0xe469a
	ldr r0, [r7, #0]	@ 000e469a 3868
.org 0xe469c
	ldr r3, [pc, #76]	@ 000e469c 134b
.org 0xe469e
	muls r0, r3	@ 000e469e 5843
.org 0xe46a0
	ldr r2, [pc, #76]	@ 000e46a0 134a
.org 0xe46a2
	adds r0, r0, r2	@ 000e46a2 8018
.org 0xe46a4
	lsls r0, r0, #1	@ 000e46a4 4000
.org 0xe46a6
	lsrs r1, r0, #1	@ 000e46a6 4108
.org 0xe46a8
	lsls r0, r0, #6	@ 000e46a8 8001
.org 0xe46aa
	lsrs r0, r0, #23	@ 000e46aa c00d
.org 0xe46ac
	movs r6, #128	@ 000e46ac 8026
.org 0xe46ae
	lsls r6, r6, #1	@ 000e46ae 7600
.org 0xe46b0
	adds r0, r0, r6	@ 000e46b0 8019
.org 0xe46b2
	str r0, [r5, #92]	@ 000e46b2 e865
.org 0xe46b4
	muls r1, r3	@ 000e46b4 5943
