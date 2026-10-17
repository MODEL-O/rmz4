@ FUN_080276dc  entry 0x080276dc  size 280
.thumb
.org 0x276dc
FUN_080276dc:
	push {r4, r5, r6, r7, lr}	@ 000276dc f0b5
.org 0x276de
	adds r5, r1, #0	@ 000276de 0d1c
.org 0x276e0
	lsls r0, r0, #24	@ 000276e0 0006
.org 0x276e2
	lsrs r7, r0, #24	@ 000276e2 070e
.org 0x276e4
	lsls r1, r7, #4	@ 000276e4 3901
.org 0x276e6
	ldr r0, [pc, #60]	@ 000276e6 0f48
.org 0x276e8
	adds r6, r1, r0	@ 000276e8 0e18
.org 0x276ea
	ldr r0, [r6, #0]	@ 000276ea 3068
.org 0x276ec
	cmp r0, #0	@ 000276ec 0028
.org 0x276ee
	beq.n 0x276f2	@ 000276ee 00d0
.org 0x276f0
	b.n 0x277f6	@ 000276f0 81e0
.org 0x276f2
	ldrb r0, [r5, #0]	@ 000276f2 2878
.org 0x276f4
	cmp r0, #0	@ 000276f4 0028
.org 0x276f6
	bne.n 0x2772c	@ 000276f6 19d1
.org 0x276f8
	ldrb r0, [r5, #2]	@ 000276f8 a878
.org 0x276fa
	cmp r0, #0	@ 000276fa 0028
.org 0x276fc
	beq.n 0x2772c	@ 000276fc 16d0
.org 0x276fe
	bl 0x2b4cc	@ 000276fe 03f0e5fe
.org 0x27702
	adds r4, r0, #0	@ 00027702 041c
.org 0x27704
	cmp r4, #0	@ 00027704 002c
.org 0x27706
	beq.n 0x27736	@ 00027706 16d0
.org 0x27708
	adds r1, r4, #0	@ 00027708 211c
.org 0x2770a
	adds r1, #37	@ 0002770a 2531
.org 0x2770c
	movs r0, #16	@ 0002770c 1020
.org 0x2770e
	strb r0, [r1, #0]	@ 0002770e 0870
.org 0x27710
	ldr r1, [pc, #20]	@ 00027710 0549
.org 0x27712
	ldrb r0, [r5, #1]	@ 00027712 6878
.org 0x27714
	strb r0, [r4, #9]	@ 00027714 6072
.org 0x27716
	ldrb r0, [r5, #1]	@ 00027716 6878
.org 0x27718
	lsls r0, r0, #2	@ 00027718 8000
.org 0x2771a
	adds r0, r0, r1	@ 0002771a 4018
.org 0x2771c
	ldr r0, [r0, #0]	@ 0002771c 0068
.org 0x2771e
	ldr r0, [r0, #0]	@ 0002771e 0068
.org 0x27720
	str r0, [r4, #20]	@ 00027720 6061
.org 0x27722
	b.n 0x27736	@ 00027722 08e0
.org 0x27724
	.byte 0x30,0xe9,0x02,0x02	@ 00027724 data
.org 0x27728
	.byte 0x40,0x2e,0x85,0x08	@ 00027728 data
.org 0x2772c
	ldrb r0, [r5, #0]	@ 0002772c 2878
.org 0x2772e
	ldrb r1, [r5, #1]	@ 0002772e 6978
.org 0x27730
	bl 0x1dd7c	@ 00027730 f6f724fb
.org 0x27734
	adds r4, r0, #0	@ 00027734 041c
.org 0x27736
	str r4, [r6, #0]	@ 00027736 3460
.org 0x27738
	cmp r4, #0	@ 00027738 002c
.org 0x2773a
	beq.n 0x277f6	@ 0002773a 5cd0
.org 0x2773c
	ldrb r1, [r4, #10]	@ 0002773c a17a
.org 0x2773e
	movs r0, #128	@ 0002773e 8020
.org 0x27740
	movs r2, #0	@ 00027740 0022
.org 0x27742
	orrs r1, r0	@ 00027742 0143
.org 0x27744
	strb r1, [r4, #10]	@ 00027744 a172
.org 0x27746
	str r6, [r4, #24]	@ 00027746 a661
.org 0x27748
	ldrb r0, [r5, #2]	@ 00027748 a878
.org 0x2774a
	strb r0, [r4, #16]	@ 0002774a 2074
.org 0x2774c
	ldrb r0, [r5, #3]	@ 0002774c e878
.org 0x2774e
	strb r0, [r4, #17]	@ 0002774e 6074
.org 0x27750
	ldr r0, [r5, #4]	@ 00027750 6868
.org 0x27752
	str r0, [r4, #84]	@ 00027752 6065
.org 0x27754
	ldr r0, [r5, #8]	@ 00027754 a868
.org 0x27756
	str r0, [r4, #88]	@ 00027756 a065
.org 0x27758
	movs r0, #12	@ 00027758 0c20
.org 0x2775a
	ldrsb r0, [r5, r0]	@ 0002775a 2856
.org 0x2775c
	cmp r0, #0	@ 0002775c 0028
.org 0x2775e
	beq.n 0x27766	@ 0002775e 02d0
.org 0x27760
	movs r0, #16	@ 00027760 1020
.org 0x27762
	orrs r1, r0	@ 00027762 0143
.org 0x27764
	b.n 0x2776a	@ 00027764 01e0
.org 0x27766
	movs r0, #239	@ 00027766 ef20
.org 0x27768
	ands r1, r0	@ 00027768 0140
.org 0x2776a
	strb r1, [r4, #10]	@ 0002776a a172
.org 0x2776c
	movs r0, #13	@ 0002776c 0d20
.org 0x2776e
	ldrsb r0, [r5, r0]	@ 0002776e 2856
.org 0x27770
	cmp r0, #0	@ 00027770 0028
.org 0x27772
	beq.n 0x2777c	@ 00027772 03d0
.org 0x27774
	ldrb r1, [r4, #10]	@ 00027774 a17a
.org 0x27776
	movs r0, #32	@ 00027776 2020
.org 0x27778
	orrs r0, r1	@ 00027778 0843
.org 0x2777a
	b.n 0x27782	@ 0002777a 02e0
.org 0x2777c
	ldrb r1, [r4, #10]	@ 0002777c a17a
.org 0x2777e
	movs r0, #223	@ 0002777e df20
.org 0x27780
	ands r0, r1	@ 00027780 0840
.org 0x27782
	strb r0, [r4, #10]	@ 00027782 a072
.org 0x27784
	movs r0, #0	@ 00027784 0020
.org 0x27786
	strb r7, [r6, #8]	@ 00027786 3772
.org 0x27788
	strb r0, [r6, #9]	@ 00027788 7072
.org 0x2778a
	strh r0, [r6, #14]	@ 0002778a f081
.org 0x2778c
	strh r0, [r6, #12]	@ 0002778c b081
.org 0x2778e
	strh r0, [r6, #10]	@ 0002778e 7081
.org 0x27790
	cmp r7, #0	@ 00027790 002f
.org 0x27792
	bne.n 0x277b6	@ 00027792 10d1
.org 0x27794
	ldr r0, [pc, #100]	@ 00027794 1948
.org 0x27796
	str r4, [r0, #0]	@ 00027796 0460
.org 0x27798
	ldr r0, [pc, #100]	@ 00027798 1948
.org 0x2779a
	str r4, [r0, #8]	@ 0002779a 8460
.org 0x2779c
	ldr r1, [pc, #100]	@ 0002779c 1949
.org 0x2779e
	adds r0, r4, #0	@ 0002779e 201c
.org 0x277a0
	bl 0x382b0	@ 000277a0 10f086fd
.org 0x277a4
	adds r0, r4, #0	@ 000277a4 201c
.org 0x277a6
	bl 0x3891c	@ 000277a6 11f0b9f8
.org 0x277aa
	adds r1, r0, #0	@ 000277aa 011c
.org 0x277ac
	lsls r1, r1, #24	@ 000277ac 0906
.org 0x277ae
	lsrs r1, r1, #24	@ 000277ae 090e
.org 0x277b0
	adds r0, r4, #0	@ 000277b0 201c
.org 0x277b2
	bl 0x2b53c	@ 000277b2 03f0c3fe
.org 0x277b6
	cmp r7, #1	@ 000277b6 012f
.org 0x277b8
	bne.n 0x277f6	@ 000277b8 1dd1
.org 0x277ba
	ldr r0, [pc, #76]	@ 000277ba 1348
.org 0x277bc
	movs r1, #232	@ 000277bc e821
.org 0x277be
	lsls r1, r1, #1	@ 000277be 4900
.org 0x277c0
	adds r0, r0, r1	@ 000277c0 4018
.org 0x277c2
	ldrh r1, [r0, #0]	@ 000277c2 0188
.org 0x277c4
	movs r5, #127	@ 000277c4 7f25
.org 0x277c6
	adds r0, r5, #0	@ 000277c6 281c
.org 0x277c8
	ands r0, r1	@ 000277c8 0840
.org 0x277ca
	cmp r0, #4	@ 000277ca 0428
.org 0x277cc
	bne.n 0x277ec	@ 000277cc 0ed1
.org 0x277ce
	ldr r0, [pc, #44]	@ 000277ce 0b48
.org 0x277d0
	ldr r0, [r0, #0]	@ 000277d0 0068
.org 0x277d2
	ldr r0, [r0, #84]	@ 000277d2 406d
.org 0x277d4
	ldr r1, [pc, #52]	@ 000277d4 0d49
.org 0x277d6
	adds r0, r0, r1	@ 000277d6 4018
.org 0x277d8
	movs r1, #240	@ 000277d8 f021
.org 0x277da
	lsls r1, r1, #10	@ 000277da 8902
.org 0x277dc
	bl 0x128fb8	@ 000277dc 01f1ecfb
.org 0x277e0
	lsls r1, r0, #4	@ 000277e0 0101
.org 0x277e2
	subs r1, r1, r0	@ 000277e2 091a
.org 0x277e4
	lsls r1, r1, #14	@ 000277e4 8903
.org 0x277e6
	ldr r0, [r4, #84]	@ 000277e6 606d
.org 0x277e8
	adds r1, r1, r0	@ 000277e8 0918
.org 0x277ea
	str r1, [r4, #84]	@ 000277ea 6165
.org 0x277ec
	ldr r2, [pc, #32]	@ 000277ec 084a
.org 0x277ee
	ldrb r1, [r2, #8]	@ 000277ee 117a
.org 0x277f0
	adds r0, r5, #0	@ 000277f0 281c
.org 0x277f2
	ands r0, r1	@ 000277f2 0840
