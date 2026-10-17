@ FUN_080b4734  entry 0x080b4734  size 398
.thumb
.org 0xb4734
FUN_080b4734:
	push {r4, r5, r6, r7, lr}	@ 000b4734 f0b5
.org 0xb4736
	sub sp, #8	@ 000b4736 82b0
.org 0xb4738
	adds r6, r0, #0	@ 000b4738 061c
.org 0xb473a
	ldrb r0, [r6, #15]	@ 000b473a f07b
.org 0xb473c
	cmp r0, #0	@ 000b473c 0028
.org 0xb473e
	bne.n 0xb47b6	@ 000b473e 3ad1
.org 0xb4740
	ldrb r0, [r6, #16]	@ 000b4740 307c
.org 0xb4742
	lsls r1, r0, #3	@ 000b4742 c100
.org 0xb4744
	adds r1, r1, r0	@ 000b4744 0918
.org 0xb4746
	ldr r0, [pc, #36]	@ 000b4746 0948
.org 0xb4748
	adds r1, r1, r0	@ 000b4748 0918
.org 0xb474a
	lsls r1, r1, #16	@ 000b474a 0904
.org 0xb474c
	lsrs r1, r1, #16	@ 000b474c 090c
.org 0xb474e
	adds r0, r6, #0	@ 000b474e 301c
.org 0xb4750
	bl 0x1cf00	@ 000b4750 68f7d6fb
.org 0xb4754
	adds r0, r6, #0	@ 000b4754 301c
.org 0xb4756
	adds r0, #188	@ 000b4756 bc30
.org 0xb4758
	ldrb r1, [r0, #0]	@ 000b4758 0178
.org 0xb475a
	movs r0, #1	@ 000b475a 0120
.org 0xb475c
	adds r2, r0, #0	@ 000b475c 021c
.org 0xb475e
	eors r2, r1	@ 000b475e 4a40
.org 0xb4760
	cmp r2, #0	@ 000b4760 002a
.org 0xb4762
	beq.n 0xb4770	@ 000b4762 05d0
.org 0xb4764
	ldrb r1, [r6, #10]	@ 000b4764 b17a
.org 0xb4766
	movs r0, #16	@ 000b4766 1020
.org 0xb4768
	orrs r0, r1	@ 000b4768 0843
.org 0xb476a
	b.n 0xb4776	@ 000b476a 04e0
.org 0xb476c
	.byte 0x06,0xc9,0xff,0xff	@ 000b476c data
.org 0xb4770
	ldrb r1, [r6, #10]	@ 000b4770 b17a
.org 0xb4772
	movs r0, #239	@ 000b4772 ef20
.org 0xb4774
	ands r0, r1	@ 000b4774 0840
.org 0xb4776
	strb r0, [r6, #10]	@ 000b4776 b072
.org 0xb4778
	movs r4, #1	@ 000b4778 0124
.org 0xb477a
	adds r1, r4, #0	@ 000b477a 211c
.org 0xb477c
	ands r1, r2	@ 000b477c 1140
.org 0xb477e
	adds r0, r6, #0	@ 000b477e 301c
.org 0xb4780
	adds r0, #76	@ 000b4780 4c30
.org 0xb4782
	movs r5, #0	@ 000b4782 0025
.org 0xb4784
	strb r1, [r0, #0]	@ 000b4784 0170
.org 0xb4786
	adds r3, r6, #0	@ 000b4786 331c
.org 0xb4788
	adds r3, #74	@ 000b4788 4a33
.org 0xb478a
	lsls r1, r1, #4	@ 000b478a 0901
.org 0xb478c
	ldrb r2, [r3, #0]	@ 000b478c 1a78
.org 0xb478e
	movs r0, #17	@ 000b478e 1120
.org 0xb4790
	negs r0, r0	@ 000b4790 4042
.org 0xb4792
	ands r0, r2	@ 000b4792 1040
.org 0xb4794
	orrs r0, r1	@ 000b4794 0843
.org 0xb4796
	strb r0, [r3, #0]	@ 000b4796 1870
.org 0xb4798
	adds r0, r6, #0	@ 000b4798 301c
.org 0xb479a
	adds r0, #84	@ 000b479a 5430
.org 0xb479c
	ldrb r2, [r6, #16]	@ 000b479c 327c
.org 0xb479e
	ldrb r3, [r6, #10]	@ 000b479e b37a
.org 0xb47a0
	lsrs r3, r3, #4	@ 000b47a0 1b09
.org 0xb47a2
	ands r3, r4	@ 000b47a2 2340
.org 0xb47a4
	movs r1, #9	@ 000b47a4 0921
.org 0xb47a6
	bl 0xdd574	@ 000b47a6 28f0e5fe
.org 0xb47aa
	str r5, [r6, #96]	@ 000b47aa 3566
.org 0xb47ac
	movs r0, #16	@ 000b47ac 1020
.org 0xb47ae
	strb r0, [r6, #18]	@ 000b47ae b074
.org 0xb47b0
	ldrb r0, [r6, #15]	@ 000b47b0 f07b
.org 0xb47b2
	adds r0, #1	@ 000b47b2 0130
.org 0xb47b4
	strb r0, [r6, #15]	@ 000b47b4 f073
.org 0xb47b6
	adds r0, r6, #0	@ 000b47b6 301c
.org 0xb47b8
	bl 0x1cff0	@ 000b47b8 68f71afc
.org 0xb47bc
	ldr r1, [r6, #88]	@ 000b47bc b16d
.org 0xb47be
	ldr r0, [r6, #96]	@ 000b47be 306e
.org 0xb47c0
	adds r1, r1, r0	@ 000b47c0 0918
.org 0xb47c2
	str r1, [r6, #88]	@ 000b47c2 b165
.org 0xb47c4
	adds r0, #64	@ 000b47c4 4030
.org 0xb47c6
	str r0, [r6, #96]	@ 000b47c6 3066
.org 0xb47c8
	ldr r0, [r6, #84]	@ 000b47c8 706d
.org 0xb47ca
	bl 0x7c7c	@ 000b47ca 53f757fa
.org 0xb47ce
	lsls r0, r0, #16	@ 000b47ce 0004
.org 0xb47d0
	cmp r0, #0	@ 000b47d0 0028
.org 0xb47d2
	beq.n 0xb47de	@ 000b47d2 04d0
.org 0xb47d4
	ldr r0, [r6, #84]	@ 000b47d4 706d
.org 0xb47d6
	ldr r1, [r6, #88]	@ 000b47d6 b16d
.org 0xb47d8
	bl 0x8534	@ 000b47d8 53f7acfe
.org 0xb47dc
	str r0, [r6, #88]	@ 000b47dc b065
.org 0xb47de
	ldrb r0, [r6, #18]	@ 000b47de b07c
.org 0xb47e0
	subs r0, #1	@ 000b47e0 0138
.org 0xb47e2
	strb r0, [r6, #18]	@ 000b47e2 b074
.org 0xb47e4
	lsls r0, r0, #24	@ 000b47e4 0006
.org 0xb47e6
	lsrs r0, r0, #24	@ 000b47e6 000e
.org 0xb47e8
	cmp r0, #255	@ 000b47e8 ff28
.org 0xb47ea
	bne.n 0xb48d0	@ 000b47ea 71d1
.org 0xb47ec
	ldr r0, [r6, #84]	@ 000b47ec 706d
.org 0xb47ee
	str r0, [sp, #0]	@ 000b47ee 0090
.org 0xb47f0
	ldr r0, [r6, #88]	@ 000b47f0 b06d
.org 0xb47f2
	ldr r1, [pc, #32]	@ 000b47f2 0849
.org 0xb47f4
	adds r0, r0, r1	@ 000b47f4 4018
.org 0xb47f6
	str r0, [sp, #4]	@ 000b47f6 0190
.org 0xb47f8
	ldr r7, [pc, #28]	@ 000b47f8 074f
.org 0xb47fa
	adds r2, r6, #0	@ 000b47fa 321c
.org 0xb47fc
	adds r2, #188	@ 000b47fc bc32
.org 0xb47fe
	ldrb r4, [r2, #0]	@ 000b47fe 1478
.org 0xb4800
	ldrb r1, [r6, #10]	@ 000b4800 b17a
.org 0xb4802
	movs r3, #16	@ 000b4802 1023
.org 0xb4804
	adds r0, r3, #0	@ 000b4804 181c
.org 0xb4806
	ands r0, r1	@ 000b4806 0840
.org 0xb4808
	adds r5, r2, #0	@ 000b4808 151c
.org 0xb480a
	cmp r0, #0	@ 000b480a 0028
.org 0xb480c
	beq.n 0xb481c	@ 000b480c 06d0
.org 0xb480e
	orrs r3, r4	@ 000b480e 2343
.org 0xb4810
	b.n 0xb481e	@ 000b4810 05e0
.org 0xb4812
	.byte 0x00	@ 000b4812 data
.org 0xb4813
	.byte 0x00	@ 000b4813 data
.org 0xb4814
	.byte 0x00,0xf8,0xff,0xff	@ 000b4814 data
.org 0xb4818
	.byte 0xb8,0x38,0x86,0x08	@ 000b4818 data
.org 0xb481c
	adds r3, r4, #0	@ 000b481c 231c
.org 0xb481e
	mov r0, sp	@ 000b481e 6846
.org 0xb4820
	adds r1, r7, #0	@ 000b4820 391c
.org 0xb4822
	movs r2, #0	@ 000b4822 0022
.org 0xb4824
	bl 0xd4c8c	@ 000b4824 20f032fa
.org 0xb4828
	ldrb r0, [r6, #16]	@ 000b4828 307c
.org 0xb482a
	cmp r0, #0	@ 000b482a 0028
.org 0xb482c
	bne.n 0xb4856	@ 000b482c 13d1
.org 0xb482e
	mov r4, sp	@ 000b482e 6c46
.org 0xb4830
	ldr r7, [pc, #16]	@ 000b4830 044f
.org 0xb4832
	ldrb r2, [r5, #0]	@ 000b4832 2a78
.org 0xb4834
	ldrb r1, [r6, #10]	@ 000b4834 b17a
.org 0xb4836
	movs r3, #16	@ 000b4836 1023
.org 0xb4838
	adds r0, r3, #0	@ 000b4838 181c
.org 0xb483a
	ands r0, r1	@ 000b483a 0840
.org 0xb483c
	cmp r0, #0	@ 000b483c 0028
.org 0xb483e
	bne.n 0xb4848	@ 000b483e 03d1
.org 0xb4840
	orrs r3, r2	@ 000b4840 1343
.org 0xb4842
	b.n 0xb484a	@ 000b4842 02e0
.org 0xb4844
	.byte 0xf0,0x38,0x86,0x08	@ 000b4844 data
.org 0xb4848
	adds r3, r2, #0	@ 000b4848 131c
.org 0xb484a
	adds r0, r4, #0	@ 000b484a 201c
.org 0xb484c
	adds r1, r7, #0	@ 000b484c 391c
.org 0xb484e
	movs r2, #0	@ 000b484e 0022
.org 0xb4850
	bl 0xd4c8c	@ 000b4850 20f01cfa
.org 0xb4854
	b.n 0xb487c	@ 000b4854 12e0
.org 0xb4856
	mov r4, sp	@ 000b4856 6c46
.org 0xb4858
	ldr r7, [pc, #16]	@ 000b4858 044f
.org 0xb485a
	ldrb r2, [r5, #0]	@ 000b485a 2a78
.org 0xb485c
	ldrb r1, [r6, #10]	@ 000b485c b17a
.org 0xb485e
	movs r3, #16	@ 000b485e 1023
.org 0xb4860
	adds r0, r3, #0	@ 000b4860 181c
.org 0xb4862
	ands r0, r1	@ 000b4862 0840
.org 0xb4864
	cmp r0, #0	@ 000b4864 0028
.org 0xb4866
	bne.n 0xb4870	@ 000b4866 03d1
.org 0xb4868
	orrs r3, r2	@ 000b4868 1343
.org 0xb486a
	b.n 0xb4872	@ 000b486a 02e0
.org 0xb486c
	.byte 0x28,0x39,0x86,0x08	@ 000b486c data
.org 0xb4870
	adds r3, r2, #0	@ 000b4870 131c
.org 0xb4872
	adds r0, r4, #0	@ 000b4872 201c
.org 0xb4874
	adds r1, r7, #0	@ 000b4874 391c
.org 0xb4876
	movs r2, #0	@ 000b4876 0022
.org 0xb4878
	bl 0xd4c8c	@ 000b4878 20f008fa
.org 0xb487c
	movs r0, #1	@ 000b487c 0120
.org 0xb487e
	mov r1, sp	@ 000b487e 6946
.org 0xb4880
	bl 0xd0c88	@ 000b4880 1cf002fa
.org 0xb4884
	movs r0, #42	@ 000b4884 2a20
.org 0xb4886
	bl 0x2b10	@ 000b4886 4ef743f9
.org 0xb488a
	ldrb r0, [r6, #16]	@ 000b488a 307c
.org 0xb488c
	cmp r0, #0	@ 000b488c 0028
.org 0xb488e
	bne.n 0xb489c	@ 000b488e 05d1
.org 0xb4890
	movs r0, #3	@ 000b4890 0320
.org 0xb4892
	movs r1, #41	@ 000b4892 2921
.org 0xb4894
	mov r2, sp	@ 000b4894 6a46
.org 0xb4896
	bl 0x2ab88	@ 000b4896 76f777f9
.org 0xb489a
	b.n 0xb48a6	@ 000b489a 04e0
.org 0xb489c
	movs r0, #3	@ 000b489c 0320
.org 0xb489e
	movs r1, #40	@ 000b489e 2821
.org 0xb48a0
	mov r2, sp	@ 000b48a0 6a46
.org 0xb48a2
	bl 0x2ab88	@ 000b48a2 76f771f9
.org 0xb48a6
	ldr r2, [pc, #48]	@ 000b48a6 0c4a
.org 0xb48a8
	ldrh r1, [r2, #12]	@ 000b48a8 9189
.org 0xb48aa
	ldr r0, [pc, #48]	@ 000b48aa 0c48
.org 0xb48ac
	cmp r1, r0	@ 000b48ac 8142
.org 0xb48ae
	bhi.n 0xb48b4	@ 000b48ae 01d8
.org 0xb48b0
	adds r0, r1, #1	@ 000b48b0 481c
.org 0xb48b2
	strh r0, [r2, #12]	@ 000b48b2 9081
.org 0xb48b4
	adds r1, r6, #0	@ 000b48b4 311c
.org 0xb48b6
	adds r1, #84	@ 000b48b6 5431
.org 0xb48b8
	adds r0, r6, #0	@ 000b48b8 301c
.org 0xb48ba
	bl 0x2abe0	@ 000b48ba 76f791f9
.org 0xb48be
	ldr r1, [pc, #32]	@ 000b48be 0849
.org 0xb48c0
	ldrb r0, [r6, #9]	@ 000b48c0 707a
