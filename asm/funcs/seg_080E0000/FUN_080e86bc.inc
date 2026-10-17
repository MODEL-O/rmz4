@ FUN_080e86bc  entry 0x080e86bc  size 282
.thumb
.org 0xe86bc
FUN_080e86bc:
	push {r4, r5, lr}	@ 000e86bc 30b5
.org 0xe86be
	adds r4, r0, #0	@ 000e86be 041c
.org 0xe86c0
	bl 0x1cc9c	@ 000e86c0 34f7ecfa
.org 0xe86c4
	ldrb r1, [r4, #10]	@ 000e86c4 a17a
.org 0xe86c6
	movs r0, #1	@ 000e86c6 0120
.org 0xe86c8
	movs r5, #0	@ 000e86c8 0025
.org 0xe86ca
	adds r2, r0, #0	@ 000e86ca 021c
.org 0xe86cc
	orrs r2, r1	@ 000e86cc 0a43
.org 0xe86ce
	movs r0, #2	@ 000e86ce 0220
.org 0xe86d0
	orrs r2, r0	@ 000e86d0 0243
.org 0xe86d2
	orrs r2, r5	@ 000e86d2 2a43
.org 0xe86d4
	strb r2, [r4, #10]	@ 000e86d4 a272
.org 0xe86d6
	ldr r1, [pc, #40]	@ 000e86d6 0a49
.org 0xe86d8
	ldrb r0, [r4, #9]	@ 000e86d8 607a
.org 0xe86da
	lsls r0, r0, #2	@ 000e86da 8000
.org 0xe86dc
	adds r0, r0, r1	@ 000e86dc 4018
.org 0xe86de
	movs r1, #1	@ 000e86de 0121
.org 0xe86e0
	str r1, [r4, #12]	@ 000e86e0 e160
.org 0xe86e2
	ldr r0, [r0, #0]	@ 000e86e2 0068
.org 0xe86e4
	ldr r0, [r0, #4]	@ 000e86e4 4068
.org 0xe86e6
	str r0, [r4, #20]	@ 000e86e6 6061
.org 0xe86e8
	ldrb r3, [r4, #16]	@ 000e86e8 237c
.org 0xe86ea
	adds r0, r3, #0	@ 000e86ea 181c
.org 0xe86ec
	cmp r0, #4	@ 000e86ec 0428
.org 0xe86ee
	bhi.n 0xe8708	@ 000e86ee 0bd8
.org 0xe86f0
	adds r0, r4, #0	@ 000e86f0 201c
.org 0xe86f2
	adds r0, #34	@ 000e86f2 2230
.org 0xe86f4
	strb r3, [r0, #0]	@ 000e86f4 0370
.org 0xe86f6
	ldr r1, [pc, #12]	@ 000e86f6 0349
.org 0xe86f8
	adds r0, r4, #0	@ 000e86f8 201c
.org 0xe86fa
	bl 0x1cf00	@ 000e86fa 34f701fc
.org 0xe86fe
	b.n 0xe87e6	@ 000e86fe 72e0
.org 0xe8700
	.byte 0x64,0x6f,0x86,0x08	@ 000e8700 data
.org 0xe8704
	.byte 0x02,0xf6,0x00,0x00	@ 000e8704 data
.org 0xe8708
	cmp r0, #5	@ 000e8708 0528
.org 0xe870a
	bne.n 0xe87b0	@ 000e870a 51d1
.org 0xe870c
	ldrb r0, [r4, #17]	@ 000e870c 607c
.org 0xe870e
	ands r1, r0	@ 000e870e 0140
.org 0xe8710
	cmp r1, #0	@ 000e8710 0029
.org 0xe8712
	beq.n 0xe871a	@ 000e8712 02d0
.org 0xe8714
	movs r0, #16	@ 000e8714 1020
.org 0xe8716
	orrs r2, r0	@ 000e8716 0243
.org 0xe8718
	b.n 0xe871e	@ 000e8718 01e0
.org 0xe871a
	movs r0, #239	@ 000e871a ef20
.org 0xe871c
	ands r2, r0	@ 000e871c 0240
.org 0xe871e
	strb r2, [r4, #10]	@ 000e871e a272
.org 0xe8720
	adds r0, r4, #0	@ 000e8720 201c
.org 0xe8722
	adds r0, #76	@ 000e8722 4c30
.org 0xe8724
	strb r1, [r0, #0]	@ 000e8724 0170
.org 0xe8726
	adds r3, r4, #0	@ 000e8726 231c
.org 0xe8728
	adds r3, #74	@ 000e8728 4a33
.org 0xe872a
	lsls r1, r1, #4	@ 000e872a 0901
.org 0xe872c
	ldrb r2, [r3, #0]	@ 000e872c 1a78
.org 0xe872e
	movs r0, #17	@ 000e872e 1120
.org 0xe8730
	negs r0, r0	@ 000e8730 4042
.org 0xe8732
	ands r0, r2	@ 000e8732 1040
.org 0xe8734
	orrs r0, r1	@ 000e8734 0843
.org 0xe8736
	strb r0, [r3, #0]	@ 000e8736 1870
.org 0xe8738
	ldrb r0, [r4, #17]	@ 000e8738 607c
.org 0xe873a
	lsrs r2, r0, #1	@ 000e873a 4208
.org 0xe873c
	cmp r2, #0	@ 000e873c 002a
.org 0xe873e
	beq.n 0xe8748	@ 000e873e 03d0
.org 0xe8740
	ldrb r0, [r4, #10]	@ 000e8740 a07a
.org 0xe8742
	movs r1, #32	@ 000e8742 2021
.org 0xe8744
	orrs r0, r1	@ 000e8744 0843
.org 0xe8746
	b.n 0xe874e	@ 000e8746 02e0
.org 0xe8748
	ldrb r1, [r4, #10]	@ 000e8748 a17a
.org 0xe874a
	movs r0, #223	@ 000e874a df20
.org 0xe874c
	ands r0, r1	@ 000e874c 0840
.org 0xe874e
	strb r0, [r4, #10]	@ 000e874e a072
.org 0xe8750
	movs r1, #1	@ 000e8750 0121
.org 0xe8752
	ands r1, r2	@ 000e8752 1140
.org 0xe8754
	adds r0, r4, #0	@ 000e8754 201c
.org 0xe8756
	adds r0, #77	@ 000e8756 4d30
.org 0xe8758
	strb r1, [r0, #0]	@ 000e8758 0170
.org 0xe875a
	lsls r1, r1, #5	@ 000e875a 4901
.org 0xe875c
	ldrb r2, [r3, #0]	@ 000e875c 1a78
.org 0xe875e
	movs r0, #33	@ 000e875e 2120
.org 0xe8760
	negs r0, r0	@ 000e8760 4042
.org 0xe8762
	ands r0, r2	@ 000e8762 1040
.org 0xe8764
	orrs r0, r1	@ 000e8764 0843
.org 0xe8766
	strb r0, [r3, #0]	@ 000e8766 1870
.org 0xe8768
	ldr r1, [pc, #56]	@ 000e8768 0e49
.org 0xe876a
	adds r0, r4, #0	@ 000e876a 201c
.org 0xe876c
	bl 0x1cf00	@ 000e876c 34f7c8fb
.org 0xe8770
	ldr r3, [r4, #88]	@ 000e8770 a36d
.org 0xe8772
	ldr r0, [pc, #52]	@ 000e8772 0d48
.org 0xe8774
	adds r3, r3, r0	@ 000e8774 1b18
.org 0xe8776
	str r3, [r4, #88]	@ 000e8776 a365
.org 0xe8778
	ldr r1, [r4, #84]	@ 000e8778 616d
.org 0xe877a
	movs r0, #180	@ 000e877a b420
.org 0xe877c
	lsls r0, r0, #7	@ 000e877c c001
.org 0xe877e
	adds r1, r1, r0	@ 000e877e 0918
.org 0xe8780
	str r1, [r4, #84]	@ 000e8780 6165
.org 0xe8782
	ldr r2, [pc, #40]	@ 000e8782 0a4a
.org 0xe8784
	ldrb r0, [r4, #17]	@ 000e8784 607c
.org 0xe8786
	lsls r0, r0, #3	@ 000e8786 c000
.org 0xe8788
	adds r0, r0, r2	@ 000e8788 8018
.org 0xe878a
	ldr r0, [r0, #0]	@ 000e878a 0068
.org 0xe878c
	lsls r0, r0, #8	@ 000e878c 0002
.org 0xe878e
	adds r1, r1, r0	@ 000e878e 0918
.org 0xe8790
	str r1, [r4, #84]	@ 000e8790 6165
.org 0xe8792
	ldrb r0, [r4, #17]	@ 000e8792 607c
.org 0xe8794
	lsls r0, r0, #3	@ 000e8794 c000
.org 0xe8796
	adds r2, #4	@ 000e8796 0432
.org 0xe8798
	adds r0, r0, r2	@ 000e8798 8018
.org 0xe879a
	ldr r0, [r0, #0]	@ 000e879a 0068
.org 0xe879c
	lsls r0, r0, #8	@ 000e879c 0002
.org 0xe879e
	adds r3, r3, r0	@ 000e879e 1b18
.org 0xe87a0
	str r3, [r4, #88]	@ 000e87a0 a365
.org 0xe87a2
	b.n 0xe87e6	@ 000e87a2 20e0
.org 0xe87a4
	.byte 0x0a,0x43,0x00,0x00	@ 000e87a4 data
.org 0xe87a8
	.byte 0x00,0xce,0xff,0xff	@ 000e87a8 data
.org 0xe87ac
	.byte 0xd8,0x91,0x86,0x08	@ 000e87ac data
.org 0xe87b0
	ldr r1, [pc, #16]	@ 000e87b0 0449
.org 0xe87b2
	adds r0, r4, #0	@ 000e87b2 201c
.org 0xe87b4
	bl 0x1cf00	@ 000e87b4 34f7a4fb
.org 0xe87b8
	ldrb r0, [r4, #17]	@ 000e87b8 607c
.org 0xe87ba
	cmp r0, #0	@ 000e87ba 0028
.org 0xe87bc
	bne.n 0xe87cc	@ 000e87bc 06d1
.org 0xe87be
	ldr r0, [r4, #84]	@ 000e87be 606d
.org 0xe87c0
	ldr r1, [pc, #4]	@ 000e87c0 0149
.org 0xe87c2
	b.n 0xe87d2	@ 000e87c2 06e0
.org 0xe87c4
	.byte 0x03,0xf6,0x00,0x00	@ 000e87c4 data
.org 0xe87c8
	.byte 0x00,0xd0,0xff,0xff	@ 000e87c8 data
.org 0xe87cc
	ldr r0, [r4, #84]	@ 000e87cc 606d
.org 0xe87ce
	movs r1, #192	@ 000e87ce c021
.org 0xe87d0
	lsls r1, r1, #6	@ 000e87d0 8901
.org 0xe87d2
	adds r0, r0, r1	@ 000e87d2 4018
.org 0xe87d4
	str r0, [r4, #84]	@ 000e87d4 6065
