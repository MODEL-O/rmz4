@ FUN_080e46f8  entry 0x080e46f8  size 256
.thumb
.org 0xe46f8
FUN_080e46f8:
	push {r4, lr}	@ 000e46f8 10b5
.org 0xe46fa
	adds r4, r0, #0	@ 000e46fa 041c
.org 0xe46fc
	bl 0x1cff0	@ 000e46fc 38f778fc
.org 0xe4700
	ldrb r1, [r4, #14]	@ 000e4700 a17b
.org 0xe4702
	adds r2, r1, #0	@ 000e4702 0a1c
.org 0xe4704
	cmp r2, #0	@ 000e4704 002a
.org 0xe4706
	bne.n 0xe471c	@ 000e4706 09d1
.org 0xe4708
	adds r0, r4, #0	@ 000e4708 201c
.org 0xe470a
	adds r0, #115	@ 000e470a 7330
.org 0xe470c
	ldrb r0, [r0, #0]	@ 000e470c 0078
.org 0xe470e
	cmp r0, #3	@ 000e470e 0328
.org 0xe4710
	bne.n 0xe47f6	@ 000e4710 71d1
.org 0xe4712
	movs r0, #96	@ 000e4712 6020
.org 0xe4714
	strb r0, [r4, #18]	@ 000e4714 a074
.org 0xe4716
	adds r0, r1, #1	@ 000e4716 481c
.org 0xe4718
	strb r0, [r4, #14]	@ 000e4718 a073
.org 0xe471a
	b.n 0xe47f6	@ 000e471a 6ce0
.org 0xe471c
	cmp r2, #1	@ 000e471c 012a
.org 0xe471e
	bne.n 0xe47d4	@ 000e471e 59d1
.org 0xe4720
	ldrb r0, [r4, #18]	@ 000e4720 a07c
.org 0xe4722
	lsrs r0, r0, #1	@ 000e4722 4008
.org 0xe4724
	movs r1, #1	@ 000e4724 0121
.org 0xe4726
	ands r0, r1	@ 000e4726 0840
.org 0xe4728
	cmp r0, #0	@ 000e4728 0028
.org 0xe472a
	beq.n 0xe474a	@ 000e472a 0ed0
.org 0xe472c
	movs r2, #0	@ 000e472c 0022
.org 0xe472e
	ldrb r1, [r4, #10]	@ 000e472e a17a
.org 0xe4730
	movs r0, #239	@ 000e4730 ef20
.org 0xe4732
	ands r0, r1	@ 000e4732 0840
.org 0xe4734
	strb r0, [r4, #10]	@ 000e4734 a072
.org 0xe4736
	adds r0, r4, #0	@ 000e4736 201c
.org 0xe4738
	adds r0, #76	@ 000e4738 4c30
.org 0xe473a
	strb r2, [r0, #0]	@ 000e473a 0270
.org 0xe473c
	adds r1, r4, #0	@ 000e473c 211c
.org 0xe473e
	adds r1, #74	@ 000e473e 4a31
.org 0xe4740
	ldrb r2, [r1, #0]	@ 000e4740 0a78
.org 0xe4742
	movs r0, #17	@ 000e4742 1120
.org 0xe4744
	negs r0, r0	@ 000e4744 4042
.org 0xe4746
	ands r0, r2	@ 000e4746 1040
.org 0xe4748
	b.n 0xe4768	@ 000e4748 0ee0
.org 0xe474a
	ldrb r1, [r4, #10]	@ 000e474a a17a
.org 0xe474c
	movs r0, #16	@ 000e474c 1020
.org 0xe474e
	orrs r0, r1	@ 000e474e 0843
.org 0xe4750
	strb r0, [r4, #10]	@ 000e4750 a072
.org 0xe4752
	adds r0, r4, #0	@ 000e4752 201c
.org 0xe4754
	adds r0, #76	@ 000e4754 4c30
.org 0xe4756
	strb r2, [r0, #0]	@ 000e4756 0270
.org 0xe4758
	adds r1, r4, #0	@ 000e4758 211c
.org 0xe475a
	adds r1, #74	@ 000e475a 4a31
.org 0xe475c
	movs r3, #16	@ 000e475c 1023
.org 0xe475e
	ldrb r2, [r1, #0]	@ 000e475e 0a78
.org 0xe4760
	movs r0, #17	@ 000e4760 1120
.org 0xe4762
	negs r0, r0	@ 000e4762 4042
.org 0xe4764
	ands r0, r2	@ 000e4764 1040
.org 0xe4766
	orrs r0, r3	@ 000e4766 1843
.org 0xe4768
	strb r0, [r1, #0]	@ 000e4768 0870
.org 0xe476a
	adds r3, r1, #0	@ 000e476a 0b1c
.org 0xe476c
	ldrb r0, [r4, #18]	@ 000e476c a07c
.org 0xe476e
	lsrs r0, r0, #1	@ 000e476e 4008
.org 0xe4770
	cmp r0, #1	@ 000e4770 0128
.org 0xe4772
	bhi.n 0xe478e	@ 000e4772 0cd8
.org 0xe4774
	movs r2, #0	@ 000e4774 0022
.org 0xe4776
	ldrb r1, [r4, #10]	@ 000e4776 a17a
.org 0xe4778
	movs r0, #223	@ 000e4778 df20
.org 0xe477a
	ands r0, r1	@ 000e477a 0840
.org 0xe477c
	strb r0, [r4, #10]	@ 000e477c a072
.org 0xe477e
	adds r0, r4, #0	@ 000e477e 201c
.org 0xe4780
	adds r0, #77	@ 000e4780 4d30
.org 0xe4782
	strb r2, [r0, #0]	@ 000e4782 0270
.org 0xe4784
	ldrb r1, [r3, #0]	@ 000e4784 1978
.org 0xe4786
	movs r0, #33	@ 000e4786 2120
.org 0xe4788
	negs r0, r0	@ 000e4788 4042
.org 0xe478a
	ands r0, r1	@ 000e478a 0840
.org 0xe478c
	b.n 0xe47aa	@ 000e478c 0de0
.org 0xe478e
	movs r2, #1	@ 000e478e 0122
.org 0xe4790
	ldrb r1, [r4, #10]	@ 000e4790 a17a
.org 0xe4792
	movs r0, #32	@ 000e4792 2020
.org 0xe4794
	orrs r0, r1	@ 000e4794 0843
.org 0xe4796
	strb r0, [r4, #10]	@ 000e4796 a072
.org 0xe4798
	adds r0, r4, #0	@ 000e4798 201c
.org 0xe479a
	adds r0, #77	@ 000e479a 4d30
.org 0xe479c
	strb r2, [r0, #0]	@ 000e479c 0270
.org 0xe479e
	movs r2, #32	@ 000e479e 2022
.org 0xe47a0
	ldrb r1, [r3, #0]	@ 000e47a0 1978
.org 0xe47a2
	movs r0, #33	@ 000e47a2 2120
.org 0xe47a4
	negs r0, r0	@ 000e47a4 4042
.org 0xe47a6
	ands r0, r1	@ 000e47a6 0840
.org 0xe47a8
	orrs r0, r2	@ 000e47a8 1043
.org 0xe47aa
	strb r0, [r3, #0]	@ 000e47aa 1870
.org 0xe47ac
	ldrb r0, [r4, #18]	@ 000e47ac a07c
.org 0xe47ae
	subs r0, #1	@ 000e47ae 0138
.org 0xe47b0
	strb r0, [r4, #18]	@ 000e47b0 a074
.org 0xe47b2
	lsls r0, r0, #24	@ 000e47b2 0006
.org 0xe47b4
	lsrs r0, r0, #24	@ 000e47b4 000e
.org 0xe47b6
	cmp r0, #255	@ 000e47b6 ff28
.org 0xe47b8
	bne.n 0xe47f6	@ 000e47b8 1dd1
.org 0xe47ba
	ldr r1, [pc, #20]	@ 000e47ba 0549
.org 0xe47bc
	adds r0, r4, #0	@ 000e47bc 201c
.org 0xe47be
	bl 0x1cf00	@ 000e47be 38f79ffb
.org 0xe47c2
	adds r0, r4, #0	@ 000e47c2 201c
.org 0xe47c4
	bl 0x1cff0	@ 000e47c4 38f714fc
.org 0xe47c8
	ldrb r0, [r4, #14]	@ 000e47c8 a07b
.org 0xe47ca
	adds r0, #1	@ 000e47ca 0130
.org 0xe47cc
	strb r0, [r4, #14]	@ 000e47cc a073
.org 0xe47ce
	b.n 0xe47f6	@ 000e47ce 12e0
.org 0xe47d0
	.byte 0x01,0xd7,0x00,0x00	@ 000e47d0 data
.org 0xe47d4
	adds r0, r4, #0	@ 000e47d4 201c
.org 0xe47d6
	adds r0, #115	@ 000e47d6 7330
.org 0xe47d8
	ldrb r0, [r0, #0]	@ 000e47d8 0078
.org 0xe47da
	cmp r0, #3	@ 000e47da 0328
.org 0xe47dc
	bne.n 0xe47f6	@ 000e47dc 0bd1
.org 0xe47de
	ldr r1, [pc, #28]	@ 000e47de 0749
.org 0xe47e0
	ldrb r0, [r4, #9]	@ 000e47e0 607a
.org 0xe47e2
	lsls r0, r0, #2	@ 000e47e2 8000
.org 0xe47e4
	adds r0, r0, r1	@ 000e47e4 4018
.org 0xe47e6
	movs r1, #2	@ 000e47e6 0221
.org 0xe47e8
	str r1, [r4, #12]	@ 000e47e8 e160
.org 0xe47ea
	ldr r0, [r0, #0]	@ 000e47ea 0068
.org 0xe47ec
	ldr r0, [r0, #8]	@ 000e47ec 8068
.org 0xe47ee
	str r0, [r4, #20]	@ 000e47ee 6061
.org 0xe47f0
	adds r0, r4, #0	@ 000e47f0 201c
.org 0xe47f2
	bl 0xe429c	@ 000e47f2 fff753fd
.org 0xe47f6
	pop {r4}	@ 000e47f6 10bc
