@ FUN_0806f688  entry 0x0806f688  size 916
.thumb
.org 0x6f688
FUN_0806f688:
	push {r4, r5, r6, r7, lr}	@ 0006f688 f0b5
.org 0x6f68a
	mov r7, sl	@ 0006f68a 5746
.org 0x6f68c
	mov r6, r9	@ 0006f68c 4e46
.org 0x6f68e
	mov r5, r8	@ 0006f68e 4546
.org 0x6f690
	push {r5, r6, r7}	@ 0006f690 e0b4
.org 0x6f692
	sub sp, #32	@ 0006f692 88b0
.org 0x6f694
	adds r7, r0, #0	@ 0006f694 071c
.org 0x6f696
	ldrb r1, [r7, #14]	@ 0006f696 b97b
.org 0x6f698
	cmp r1, #0	@ 0006f698 0029
.org 0x6f69a
	bne.n 0x6f6ea	@ 0006f69a 26d1
.org 0x6f69c
	adds r0, #140	@ 0006f69c 8c30
.org 0x6f69e
	str r1, [r0, #0]	@ 0006f69e 0160
.org 0x6f6a0
	adds r0, #4	@ 0006f6a0 0430
.org 0x6f6a2
	str r1, [r0, #0]	@ 0006f6a2 0160
.org 0x6f6a4
	adds r0, #4	@ 0006f6a4 0430
.org 0x6f6a6
	strb r1, [r0, #0]	@ 0006f6a6 0170
.org 0x6f6a8
	ldrb r1, [r7, #10]	@ 0006f6a8 b97a
.org 0x6f6aa
	movs r0, #251	@ 0006f6aa fb20
.org 0x6f6ac
	ands r0, r1	@ 0006f6ac 0840
.org 0x6f6ae
	strb r0, [r7, #10]	@ 0006f6ae b872
.org 0x6f6b0
	ldr r3, [pc, #164]	@ 0006f6b0 294b
.org 0x6f6b2
	ldrh r2, [r3, #8]	@ 0006f6b2 1a89
.org 0x6f6b4
	movs r4, #1	@ 0006f6b4 0124
.org 0x6f6b6
	adds r0, r4, #0	@ 0006f6b6 201c
.org 0x6f6b8
	ands r0, r2	@ 0006f6b8 1040
.org 0x6f6ba
	cmp r0, #0	@ 0006f6ba 0028
.org 0x6f6bc
	beq.n 0x6f6d2	@ 0006f6bc 09d0
.org 0x6f6be
	ldrb r1, [r3, #18]	@ 0006f6be 997c
.org 0x6f6c0
	adds r0, r4, #0	@ 0006f6c0 201c
.org 0x6f6c2
	ands r0, r1	@ 0006f6c2 0840
.org 0x6f6c4
	cmp r0, #0	@ 0006f6c4 0028
.org 0x6f6c6
	bne.n 0x6f6d2	@ 0006f6c6 04d1
.org 0x6f6c8
	ldr r0, [pc, #144]	@ 0006f6c8 2448
.org 0x6f6ca
	ands r0, r2	@ 0006f6ca 1040
.org 0x6f6cc
	movs r1, #16	@ 0006f6cc 1021
.org 0x6f6ce
	orrs r0, r1	@ 0006f6ce 0843
.org 0x6f6d0
	strh r0, [r3, #8]	@ 0006f6d0 1881
.org 0x6f6d2
	adds r2, r7, #0	@ 0006f6d2 3a1c
.org 0x6f6d4
	adds r2, #73	@ 0006f6d4 4932
.org 0x6f6d6
	ldrb r0, [r2, #0]	@ 0006f6d6 1078
.org 0x6f6d8
	movs r1, #12	@ 0006f6d8 0c21
.org 0x6f6da
	orrs r0, r1	@ 0006f6da 0843
.org 0x6f6dc
	strb r0, [r2, #0]	@ 0006f6dc 1070
.org 0x6f6de
	movs r0, #16	@ 0006f6de 1020
.org 0x6f6e0
	strb r0, [r7, #18]	@ 0006f6e0 b874
.org 0x6f6e2
	strb r0, [r7, #19]	@ 0006f6e2 f874
.org 0x6f6e4
	ldrb r0, [r7, #14]	@ 0006f6e4 b87b
.org 0x6f6e6
	adds r0, #1	@ 0006f6e6 0130
.org 0x6f6e8
	strb r0, [r7, #14]	@ 0006f6e8 b873
.org 0x6f6ea
	adds r0, r7, #0	@ 0006f6ea 381c
.org 0x6f6ec
	bl 0x1cff0	@ 0006f6ec adf780fc
.org 0x6f6f0
	ldrb r3, [r7, #13]	@ 0006f6f0 7b7b
.org 0x6f6f2
	adds r4, r3, #0	@ 0006f6f2 1c1c
.org 0x6f6f4
	cmp r4, #0	@ 0006f6f4 002c
.org 0x6f6f6
	bne.n 0x6f77a	@ 0006f6f6 40d1
.org 0x6f6f8
	adds r6, r7, #0	@ 0006f6f8 3e1c
.org 0x6f6fa
	adds r6, #140	@ 0006f6fa 8c36
.org 0x6f6fc
	ldr r0, [r6, #0]	@ 0006f6fc 3068
.org 0x6f6fe
	movs r1, #2	@ 0006f6fe 0221
.org 0x6f700
	negs r1, r1	@ 0006f700 4942
.org 0x6f702
	ands r0, r1	@ 0006f702 0840
.org 0x6f704
	str r0, [r6, #0]	@ 0006f704 3060
.org 0x6f706
	adds r5, r7, #0	@ 0006f706 3d1c
.org 0x6f708
	adds r5, #144	@ 0006f708 9035
.org 0x6f70a
	ldr r0, [r5, #0]	@ 0006f70a 2868
.org 0x6f70c
	ands r0, r1	@ 0006f70c 0840
.org 0x6f70e
	str r0, [r5, #0]	@ 0006f70e 2860
.org 0x6f710
	adds r0, r7, #0	@ 0006f710 381c
.org 0x6f712
	bl 0x1d330	@ 0006f712 adf70dfe
.org 0x6f716
	ldrb r0, [r7, #19]	@ 0006f716 f87c
.org 0x6f718
	subs r0, #1	@ 0006f718 0138
.org 0x6f71a
	strb r0, [r7, #19]	@ 0006f71a f874
.org 0x6f71c
	movs r1, #255	@ 0006f71c ff21
.org 0x6f71e
	lsls r0, r0, #24	@ 0006f71e 0006
.org 0x6f720
	lsrs r0, r0, #24	@ 0006f720 000e
.org 0x6f722
	cmp r0, #255	@ 0006f722 ff28
.org 0x6f724
	beq.n 0x6f728	@ 0006f724 00d0
.org 0x6f726
	b.n 0x6fa14	@ 0006f726 75e1
.org 0x6f728
	ldrb r0, [r7, #18]	@ 0006f728 b87c
.org 0x6f72a
	subs r0, #1	@ 0006f72a 0138
.org 0x6f72c
	strb r0, [r7, #18]	@ 0006f72c b874
.org 0x6f72e
	ands r0, r1	@ 0006f72e 0840
.org 0x6f730
	cmp r0, #0	@ 0006f730 0028
.org 0x6f732
	bne.n 0x6f760	@ 0006f732 15d1
.org 0x6f734
	movs r0, #176	@ 0006f734 b020
.org 0x6f736
	lsls r0, r0, #1	@ 0006f736 4000
.org 0x6f738
	bl 0x2b10	@ 0006f738 93f7eaf9
.org 0x6f73c
	movs r0, #83	@ 0006f73c 5320
.org 0x6f73e
	bl 0x2b10	@ 0006f73e 93f7e7f9
.org 0x6f742
	movs r0, #180	@ 0006f742 b420
.org 0x6f744
	strb r0, [r7, #18]	@ 0006f744 b874
.org 0x6f746
	strb r4, [r7, #19]	@ 0006f746 fc74
.org 0x6f748
	adds r1, r7, #0	@ 0006f748 391c
.org 0x6f74a
	adds r1, #180	@ 0006f74a b431
.org 0x6f74c
	movs r0, #16	@ 0006f74c 1020
.org 0x6f74e
	strb r0, [r1, #26]	@ 0006f74e 8876
.org 0x6f750
	ldrb r0, [r7, #13]	@ 0006f750 787b
.org 0x6f752
	adds r0, #1	@ 0006f752 0130
.org 0x6f754
	b.n 0x6fa12	@ 0006f754 5de1
.org 0x6f756
	.byte 0x00	@ 0006f756 data
.org 0x6f757
	.byte 0x00	@ 0006f757 data
.org 0x6f758
	.byte 0x10,0xe9,0x02,0x02	@ 0006f758 data
.org 0x6f75c
	.byte 0xfe,0xff,0x00,0x00	@ 0006f75c data
.org 0x6f760
	ldr r0, [r6, #0]	@ 0006f760 3068
.org 0x6f762
	movs r1, #1	@ 0006f762 0121
.org 0x6f764
	orrs r0, r1	@ 0006f764 0843
.org 0x6f766
	str r0, [r6, #0]	@ 0006f766 3060
.org 0x6f768
	ldr r0, [r5, #0]	@ 0006f768 2868
.org 0x6f76a
	orrs r0, r1	@ 0006f76a 0843
.org 0x6f76c
	str r0, [r5, #0]	@ 0006f76c 2860
.org 0x6f76e
	adds r0, r7, #0	@ 0006f76e 381c
.org 0x6f770
	bl 0x1d3fc	@ 0006f770 adf744fe
.org 0x6f774
	ldrb r0, [r7, #18]	@ 0006f774 b87c
.org 0x6f776
	strb r0, [r7, #19]	@ 0006f776 f874
.org 0x6f778
	b.n 0x6fa14	@ 0006f778 4ce1
.org 0x6f77a
	cmp r4, #1	@ 0006f77a 012c
.org 0x6f77c
	beq.n 0x6f780	@ 0006f77c 00d0
.org 0x6f77e
	b.n 0x6f9ec	@ 0006f77e 35e1
.org 0x6f780
	ldrb r1, [r7, #18]	@ 0006f780 b97c
.org 0x6f782
	cmp r1, #119	@ 0006f782 7729
.org 0x6f784
	bhi.n 0x6f7d2	@ 0006f784 25d8
.org 0x6f786
	adds r2, r7, #0	@ 0006f786 3a1c
.org 0x6f788
	adds r2, #180	@ 0006f788 b432
.org 0x6f78a
	movs r0, #8	@ 0006f78a 0820
.org 0x6f78c
	strb r0, [r2, #26]	@ 0006f78c 9076
.org 0x6f78e
	ldrb r1, [r7, #18]	@ 0006f78e b97c
.org 0x6f790
	adds r0, r4, #0	@ 0006f790 201c
.org 0x6f792
	ands r0, r1	@ 0006f792 0840
.org 0x6f794
	mov sl, r2	@ 0006f794 9246
.org 0x6f796
	cmp r0, #0	@ 0006f796 0028
.org 0x6f798
	beq.n 0x6f7b8	@ 0006f798 0ed0
.org 0x6f79a
	adds r1, r7, #0	@ 0006f79a 391c
.org 0x6f79c
	adds r1, #140	@ 0006f79c 8c31
.org 0x6f79e
	ldr r0, [r1, #0]	@ 0006f79e 0868
.org 0x6f7a0
	movs r2, #2	@ 0006f7a0 0222
.org 0x6f7a2
	negs r2, r2	@ 0006f7a2 5242
.org 0x6f7a4
	ands r0, r2	@ 0006f7a4 1040
.org 0x6f7a6
	str r0, [r1, #0]	@ 0006f7a6 0860
.org 0x6f7a8
	adds r1, #4	@ 0006f7a8 0431
.org 0x6f7aa
	ldr r0, [r1, #0]	@ 0006f7aa 0868
.org 0x6f7ac
	ands r0, r2	@ 0006f7ac 1040
.org 0x6f7ae
	str r0, [r1, #0]	@ 0006f7ae 0860
.org 0x6f7b0
	adds r0, r7, #0	@ 0006f7b0 381c
.org 0x6f7b2
	bl 0x1d330	@ 0006f7b2 adf7bdfd
.org 0x6f7b6
	b.n 0x6f81c	@ 0006f7b6 31e0
.org 0x6f7b8
	adds r1, r7, #0	@ 0006f7b8 391c
.org 0x6f7ba
	adds r1, #140	@ 0006f7ba 8c31
.org 0x6f7bc
	ldr r0, [r1, #0]	@ 0006f7bc 0868
.org 0x6f7be
	orrs r0, r4	@ 0006f7be 2043
.org 0x6f7c0
	str r0, [r1, #0]	@ 0006f7c0 0860
.org 0x6f7c2
	adds r1, #4	@ 0006f7c2 0431
.org 0x6f7c4
	ldr r0, [r1, #0]	@ 0006f7c4 0868
.org 0x6f7c6
	orrs r0, r4	@ 0006f7c6 2043
.org 0x6f7c8
	str r0, [r1, #0]	@ 0006f7c8 0860
.org 0x6f7ca
	adds r0, r7, #0	@ 0006f7ca 381c
.org 0x6f7cc
	bl 0x1d3fc	@ 0006f7cc adf716fe
.org 0x6f7d0
	b.n 0x6f81c	@ 0006f7d0 24e0
.org 0x6f7d2
	movs r0, #3	@ 0006f7d2 0320
.org 0x6f7d4
	ands r0, r1	@ 0006f7d4 0840
.org 0x6f7d6
	cmp r0, #0	@ 0006f7d6 0028
.org 0x6f7d8
	beq.n 0x6f7fe	@ 0006f7d8 11d0
.org 0x6f7da
	adds r1, r7, #0	@ 0006f7da 391c
.org 0x6f7dc
	adds r1, #140	@ 0006f7dc 8c31
.org 0x6f7de
	ldr r0, [r1, #0]	@ 0006f7de 0868
.org 0x6f7e0
	movs r2, #2	@ 0006f7e0 0222
.org 0x6f7e2
	negs r2, r2	@ 0006f7e2 5242
.org 0x6f7e4
	ands r0, r2	@ 0006f7e4 1040
.org 0x6f7e6
	str r0, [r1, #0]	@ 0006f7e6 0860
.org 0x6f7e8
	adds r1, #4	@ 0006f7e8 0431
.org 0x6f7ea
	ldr r0, [r1, #0]	@ 0006f7ea 0868
.org 0x6f7ec
	ands r0, r2	@ 0006f7ec 1040
.org 0x6f7ee
	str r0, [r1, #0]	@ 0006f7ee 0860
.org 0x6f7f0
	adds r0, r7, #0	@ 0006f7f0 381c
.org 0x6f7f2
	bl 0x1d330	@ 0006f7f2 adf79dfd
.org 0x6f7f6
	movs r0, #180	@ 0006f7f6 b420
.org 0x6f7f8
	adds r0, r0, r7	@ 0006f7f8 c019
.org 0x6f7fa
	mov sl, r0	@ 0006f7fa 8246
.org 0x6f7fc
	b.n 0x6f81c	@ 0006f7fc 0ee0
.org 0x6f7fe
	adds r1, r7, #0	@ 0006f7fe 391c
.org 0x6f800
	adds r1, #140	@ 0006f800 8c31
.org 0x6f802
	ldr r0, [r1, #0]	@ 0006f802 0868
.org 0x6f804
	orrs r0, r4	@ 0006f804 2043
.org 0x6f806
	str r0, [r1, #0]	@ 0006f806 0860
.org 0x6f808
	adds r1, #4	@ 0006f808 0431
.org 0x6f80a
	ldr r0, [r1, #0]	@ 0006f80a 0868
.org 0x6f80c
	orrs r0, r4	@ 0006f80c 2043
.org 0x6f80e
	str r0, [r1, #0]	@ 0006f80e 0860
.org 0x6f810
	adds r0, r7, #0	@ 0006f810 381c
.org 0x6f812
	bl 0x1d3fc	@ 0006f812 adf7f3fd
.org 0x6f816
	movs r1, #180	@ 0006f816 b421
.org 0x6f818
	adds r1, r1, r7	@ 0006f818 c919
.org 0x6f81a
	mov sl, r1	@ 0006f81a 8a46
.org 0x6f81c
	ldrb r0, [r7, #18]	@ 0006f81c b87c
.org 0x6f81e
	mov r2, sl	@ 0006f81e 5246
.org 0x6f820
	ldrb r1, [r2, #26]	@ 0006f820 917e
.org 0x6f822
	bl 0x129198	@ 0006f822 b9f0b9fc
.org 0x6f826
	lsls r0, r0, #24	@ 0006f826 0006
.org 0x6f828
	cmp r0, #0	@ 0006f828 0028
.org 0x6f82a
	bne.n 0x6f8b0	@ 0006f82a 41d1
.org 0x6f82c
	ldr r5, [pc, #388]	@ 0006f82c 614d
.org 0x6f82e
	ldr r0, [r5, #0]	@ 0006f82e 2868
.org 0x6f830
	ldr r1, [pc, #388]	@ 0006f830 6149
.org 0x6f832
	mov r9, r1	@ 0006f832 8946
.org 0x6f834
	mov r2, r9	@ 0006f834 4a46
.org 0x6f836
	muls r2, r0	@ 0006f836 4243
.org 0x6f838
	adds r0, r2, #0	@ 0006f838 101c
.org 0x6f83a
	ldr r6, [pc, #384]	@ 0006f83a 604e
.org 0x6f83c
	adds r0, r0, r6	@ 0006f83c 8019
.org 0x6f83e
	lsls r0, r0, #1	@ 0006f83e 4000
.org 0x6f840
	lsrs r1, r0, #1	@ 0006f840 4108
.org 0x6f842
	mov r8, r1	@ 0006f842 8846
.org 0x6f844
	str r1, [r5, #0]	@ 0006f844 2960
.org 0x6f846
	lsrs r0, r0, #17	@ 0006f846 400c
.org 0x6f848
	movs r1, #48	@ 0006f848 3021
.org 0x6f84a
	bl 0x129198	@ 0006f84a b9f0a5fc
.org 0x6f84e
	movs r4, #24	@ 0006f84e 1824
.org 0x6f850
	subs r0, r4, r0	@ 0006f850 201a
.org 0x6f852
	lsls r0, r0, #8	@ 0006f852 0002
.org 0x6f854
	ldr r1, [r7, #84]	@ 0006f854 796d
.org 0x6f856
	adds r1, r1, r0	@ 0006f856 0918
.org 0x6f858
	str r1, [sp, #0]	@ 0006f858 0091
.org 0x6f85a
	mov r2, r9	@ 0006f85a 4a46
.org 0x6f85c
	mov r0, r8	@ 0006f85c 4046
.org 0x6f85e
	muls r0, r2	@ 0006f85e 5043
.org 0x6f860
	adds r0, r0, r6	@ 0006f860 8019
.org 0x6f862
	lsls r0, r0, #1	@ 0006f862 4000
.org 0x6f864
	lsrs r1, r0, #1	@ 0006f864 4108
.org 0x6f866
	mov r8, r1	@ 0006f866 8846
.org 0x6f868
	str r1, [r5, #0]	@ 0006f868 2960
.org 0x6f86a
	lsrs r0, r0, #17	@ 0006f86a 400c
.org 0x6f86c
	movs r1, #48	@ 0006f86c 3021
.org 0x6f86e
	bl 0x129198	@ 0006f86e b9f093fc
.org 0x6f872
	subs r4, r4, r0	@ 0006f872 241a
.org 0x6f874
	lsls r4, r4, #8	@ 0006f874 2402
.org 0x6f876
	ldr r0, [r7, #88]	@ 0006f876 b86d
.org 0x6f878
	adds r0, r0, r4	@ 0006f878 0019
.org 0x6f87a
	str r0, [sp, #4]	@ 0006f87a 0190
.org 0x6f87c
	mov r2, r9	@ 0006f87c 4a46
.org 0x6f87e
	mov r1, r8	@ 0006f87e 4146
.org 0x6f880
	muls r1, r2	@ 0006f880 5143
.org 0x6f882
	adds r1, r1, r6	@ 0006f882 8919
.org 0x6f884
	lsls r1, r1, #1	@ 0006f884 4900
.org 0x6f886
	lsrs r0, r1, #1	@ 0006f886 4808
.org 0x6f888
	str r0, [r5, #0]	@ 0006f888 2860
.org 0x6f88a
	lsrs r1, r1, #17	@ 0006f88a 490c
.org 0x6f88c
	movs r0, #63	@ 0006f88c 3f20
.org 0x6f88e
	ands r1, r0	@ 0006f88e 0140
.org 0x6f890
	ldrb r0, [r7, #19]	@ 0006f890 f87c
.org 0x6f892
	adds r1, r1, r0	@ 0006f892 0918
.org 0x6f894
	lsls r1, r1, #24	@ 0006f894 0906
.org 0x6f896
	lsrs r1, r1, #24	@ 0006f896 090e
.org 0x6f898
	movs r2, #224	@ 0006f898 e022
.org 0x6f89a
	lsls r2, r2, #1	@ 0006f89a 5200
.org 0x6f89c
	mov r0, sp	@ 0006f89c 6846
.org 0x6f89e
	movs r3, #129	@ 0006f89e 8123
.org 0x6f8a0
	bl 0xe1c2c	@ 0006f8a0 72f0c4f9
.org 0x6f8a4
	movs r0, #53	@ 0006f8a4 3520
.org 0x6f8a6
	bl 0x2b10	@ 0006f8a6 93f733f9
.org 0x6f8aa
	ldrb r0, [r7, #19]	@ 0006f8aa f87c
.org 0x6f8ac
	adds r0, #64	@ 0006f8ac 4030
.org 0x6f8ae
	strb r0, [r7, #19]	@ 0006f8ae f874
.org 0x6f8b0
	ldrb r0, [r7, #18]	@ 0006f8b0 b87c
.org 0x6f8b2
	mov r1, sl	@ 0006f8b2 5146
.org 0x6f8b4
	ldrb r4, [r1, #26]	@ 0006f8b4 8c7e
.org 0x6f8b6
	adds r1, r4, #0	@ 0006f8b6 211c
.org 0x6f8b8
	bl 0x129198	@ 0006f8b8 b9f06efc
.org 0x6f8bc
	lsls r0, r0, #24	@ 0006f8bc 0006
.org 0x6f8be
	lsrs r0, r0, #24	@ 0006f8be 000e
.org 0x6f8c0
	lsrs r4, r4, #1	@ 0006f8c0 6408
.org 0x6f8c2
	cmp r0, r4	@ 0006f8c2 a042
.org 0x6f8c4
	bne.n 0x6f92a	@ 0006f8c4 31d1
.org 0x6f8c6
	ldr r5, [pc, #236]	@ 0006f8c6 3b4d
.org 0x6f8c8
	ldr r0, [r5, #0]	@ 0006f8c8 2868
.org 0x6f8ca
	ldr r2, [pc, #236]	@ 0006f8ca 3b4a
.org 0x6f8cc
	mov r9, r2	@ 0006f8cc 9146
.org 0x6f8ce
	mov r1, r9	@ 0006f8ce 4946
.org 0x6f8d0
	muls r1, r0	@ 0006f8d0 4143
.org 0x6f8d2
	adds r0, r1, #0	@ 0006f8d2 081c
.org 0x6f8d4
	ldr r2, [pc, #228]	@ 0006f8d4 394a
.org 0x6f8d6
	mov r8, r2	@ 0006f8d6 9046
.org 0x6f8d8
	add r0, r8	@ 0006f8d8 4044
.org 0x6f8da
	lsls r0, r0, #1	@ 0006f8da 4000
.org 0x6f8dc
	lsrs r6, r0, #1	@ 0006f8dc 4608
.org 0x6f8de
	str r6, [r5, #0]	@ 0006f8de 2e60
.org 0x6f8e0
	lsrs r0, r0, #17	@ 0006f8e0 400c
.org 0x6f8e2
	movs r1, #48	@ 0006f8e2 3021
.org 0x6f8e4
	bl 0x129198	@ 0006f8e4 b9f058fc
.org 0x6f8e8
	movs r4, #24	@ 0006f8e8 1824
.org 0x6f8ea
	subs r0, r4, r0	@ 0006f8ea 201a
.org 0x6f8ec
	lsls r0, r0, #8	@ 0006f8ec 0002
.org 0x6f8ee
	ldr r1, [r7, #84]	@ 0006f8ee 796d
.org 0x6f8f0
	adds r1, r1, r0	@ 0006f8f0 0918
.org 0x6f8f2
	str r1, [sp, #8]	@ 0006f8f2 0291
.org 0x6f8f4
	mov r0, r9	@ 0006f8f4 4846
.org 0x6f8f6
	muls r0, r6	@ 0006f8f6 7043
.org 0x6f8f8
	add r0, r8	@ 0006f8f8 4044
.org 0x6f8fa
	lsls r0, r0, #1	@ 0006f8fa 4000
.org 0x6f8fc
	lsrs r1, r0, #1	@ 0006f8fc 4108
.org 0x6f8fe
	str r1, [r5, #0]	@ 0006f8fe 2960
.org 0x6f900
	lsrs r0, r0, #17	@ 0006f900 400c
.org 0x6f902
	movs r1, #48	@ 0006f902 3021
.org 0x6f904
	bl 0x129198	@ 0006f904 b9f048fc
.org 0x6f908
	subs r4, r4, r0	@ 0006f908 241a
.org 0x6f90a
	lsls r4, r4, #8	@ 0006f90a 2402
.org 0x6f90c
	ldr r1, [r7, #88]	@ 0006f90c b96d
.org 0x6f90e
	adds r1, r1, r4	@ 0006f90e 0919
.org 0x6f910
	add r0, sp, #8	@ 0006f910 02a8
.org 0x6f912
	str r1, [r0, #4]	@ 0006f912 4160
.org 0x6f914
	movs r1, #0	@ 0006f914 0021
.org 0x6f916
	movs r2, #0	@ 0006f916 0022
.org 0x6f918
	movs r3, #129	@ 0006f918 8123
.org 0x6f91a
	bl 0xe1c2c	@ 0006f91a 72f087f9
.org 0x6f91e
	ldrb r0, [r7, #18]	@ 0006f91e b87c
.org 0x6f920
	cmp r0, #111	@ 0006f920 6f28
.org 0x6f922
	bhi.n 0x6f92a	@ 0006f922 02d8
.org 0x6f924
	movs r0, #53	@ 0006f924 3520
.org 0x6f926
	bl 0x2b10	@ 0006f926 93f7f3f8
.org 0x6f92a
	ldrb r0, [r7, #18]	@ 0006f92a b87c
.org 0x6f92c
	mov r1, sl	@ 0006f92c 5146
.org 0x6f92e
	ldrb r4, [r1, #26]	@ 0006f92e 8c7e
.org 0x6f930
	adds r1, r4, #0	@ 0006f930 211c
.org 0x6f932
	bl 0x129198	@ 0006f932 b9f031fc
.org 0x6f936
	lsls r0, r0, #24	@ 0006f936 0006
.org 0x6f938
	lsrs r1, r0, #24	@ 0006f938 010e
.org 0x6f93a
	lsrs r2, r4, #2	@ 0006f93a a208
.org 0x6f93c
	cmp r1, r2	@ 0006f93c 9142
.org 0x6f93e
	beq.n 0x6f948	@ 0006f93e 03d0
.org 0x6f940
	lsls r0, r2, #1	@ 0006f940 5000
.org 0x6f942
	adds r0, r0, r2	@ 0006f942 8018
.org 0x6f944
	cmp r1, r0	@ 0006f944 8142
.org 0x6f946
	bne.n 0x6f9a0	@ 0006f946 2bd1
.org 0x6f948
	ldr r5, [pc, #104]	@ 0006f948 1a4d
.org 0x6f94a
	ldr r0, [r5, #0]	@ 0006f94a 2868
.org 0x6f94c
	ldr r2, [pc, #104]	@ 0006f94c 1a4a
.org 0x6f94e
	mov r9, r2	@ 0006f94e 9146
.org 0x6f950
	mov r1, r9	@ 0006f950 4946
.org 0x6f952
	muls r1, r0	@ 0006f952 4143
.org 0x6f954
	adds r0, r1, #0	@ 0006f954 081c
.org 0x6f956
	ldr r2, [pc, #100]	@ 0006f956 194a
.org 0x6f958
	mov r8, r2	@ 0006f958 9046
.org 0x6f95a
	add r0, r8	@ 0006f95a 4044
.org 0x6f95c
	lsls r0, r0, #1	@ 0006f95c 4000
.org 0x6f95e
	lsrs r6, r0, #1	@ 0006f95e 4608
.org 0x6f960
	str r6, [r5, #0]	@ 0006f960 2e60
.org 0x6f962
	lsrs r0, r0, #17	@ 0006f962 400c
.org 0x6f964
	movs r1, #48	@ 0006f964 3021
.org 0x6f966
	bl 0x129198	@ 0006f966 b9f017fc
.org 0x6f96a
	movs r4, #24	@ 0006f96a 1824
.org 0x6f96c
	subs r0, r4, r0	@ 0006f96c 201a
.org 0x6f96e
	lsls r0, r0, #8	@ 0006f96e 0002
.org 0x6f970
	ldr r1, [r7, #84]	@ 0006f970 796d
.org 0x6f972
	adds r1, r1, r0	@ 0006f972 0918
.org 0x6f974
	str r1, [sp, #16]	@ 0006f974 0491
.org 0x6f976
	mov r0, r9	@ 0006f976 4846
.org 0x6f978
	muls r0, r6	@ 0006f978 7043
.org 0x6f97a
	add r0, r8	@ 0006f97a 4044
.org 0x6f97c
	lsls r0, r0, #1	@ 0006f97c 4000
.org 0x6f97e
	lsrs r1, r0, #1	@ 0006f97e 4108
.org 0x6f980
	str r1, [r5, #0]	@ 0006f980 2960
.org 0x6f982
	lsrs r0, r0, #17	@ 0006f982 400c
.org 0x6f984
	movs r1, #48	@ 0006f984 3021
.org 0x6f986
	bl 0x129198	@ 0006f986 b9f007fc
.org 0x6f98a
	subs r4, r4, r0	@ 0006f98a 241a
.org 0x6f98c
	lsls r4, r4, #8	@ 0006f98c 2402
.org 0x6f98e
	ldr r1, [r7, #88]	@ 0006f98e b96d
.org 0x6f990
	adds r1, r1, r4	@ 0006f990 0919
.org 0x6f992
	add r0, sp, #16	@ 0006f992 04a8
.org 0x6f994
	str r1, [r0, #4]	@ 0006f994 4160
.org 0x6f996
	movs r1, #0	@ 0006f996 0021
.org 0x6f998
	movs r2, #0	@ 0006f998 0022
.org 0x6f99a
	movs r3, #129	@ 0006f99a 8123
.org 0x6f99c
	bl 0xe1c2c	@ 0006f99c 72f046f9
.org 0x6f9a0
	ldrb r1, [r7, #18]	@ 0006f9a0 b97c
.org 0x6f9a2
	movs r0, #3	@ 0006f9a2 0320
.org 0x6f9a4
	ands r0, r1	@ 0006f9a4 0840
.org 0x6f9a6
	cmp r0, #1	@ 0006f9a6 0128
.org 0x6f9a8
	bhi.n 0x6f9c0	@ 0006f9a8 0ad8
.org 0x6f9aa
	ldr r0, [r7, #84]	@ 0006f9aa 786d
.org 0x6f9ac
	movs r2, #128	@ 0006f9ac 8022
.org 0x6f9ae
	lsls r2, r2, #2	@ 0006f9ae 9200
.org 0x6f9b0
	b.n 0x6f9c4	@ 0006f9b0 08e0
.org 0x6f9b2
	.byte 0x00	@ 0006f9b2 data
.org 0x6f9b3
	.byte 0x00	@ 0006f9b3 data
.org 0x6f9b4
	.byte 0x38,0xdc,0x02,0x02	@ 0006f9b4 data
.org 0x6f9b8
	.byte 0xfd,0x43,0x03,0x00	@ 0006f9b8 data
.org 0x6f9bc
	.byte 0xc3,0x9e,0x26,0x00	@ 0006f9bc data
.org 0x6f9c0
	ldr r0, [r7, #84]	@ 0006f9c0 786d
.org 0x6f9c2
	ldr r2, [pc, #36]	@ 0006f9c2 094a
.org 0x6f9c4
	adds r0, r0, r2	@ 0006f9c4 8018
.org 0x6f9c6
	str r0, [r7, #84]	@ 0006f9c6 7865
.org 0x6f9c8
	ldr r0, [r7, #88]	@ 0006f9c8 b86d
.org 0x6f9ca
	movs r2, #128	@ 0006f9ca 8022
.org 0x6f9cc
	lsls r2, r2, #1	@ 0006f9cc 5200
.org 0x6f9ce
	adds r0, r0, r2	@ 0006f9ce 8018
.org 0x6f9d0
	str r0, [r7, #88]	@ 0006f9d0 b865
.org 0x6f9d2
	subs r0, r1, #1	@ 0006f9d2 481e
.org 0x6f9d4
	strb r0, [r7, #18]	@ 0006f9d4 b874
.org 0x6f9d6
	lsls r0, r0, #24	@ 0006f9d6 0006
.org 0x6f9d8
	lsrs r0, r0, #24	@ 0006f9d8 000e
.org 0x6f9da
	cmp r0, #255	@ 0006f9da ff28
.org 0x6f9dc
	bne.n 0x6fa14	@ 0006f9dc 1ad1
.org 0x6f9de
	movs r0, #60	@ 0006f9de 3c20
.org 0x6f9e0
	strb r0, [r7, #18]	@ 0006f9e0 b874
.org 0x6f9e2
	ldrb r0, [r7, #13]	@ 0006f9e2 787b
.org 0x6f9e4
	adds r0, #1	@ 0006f9e4 0130
.org 0x6f9e6
	b.n 0x6fa12	@ 0006f9e6 14e0
.org 0x6f9e8
	.byte 0x00,0xfe,0xff,0xff	@ 0006f9e8 data
.org 0x6f9ec
	cmp r4, #2	@ 0006f9ec 022c
.org 0x6f9ee
	bne.n 0x6fa14	@ 0006f9ee 11d1
.org 0x6f9f0
	ldrb r0, [r7, #18]	@ 0006f9f0 b87c
.org 0x6f9f2
	subs r0, #1	@ 0006f9f2 0138
.org 0x6f9f4
	strb r0, [r7, #18]	@ 0006f9f4 b874
.org 0x6f9f6
	lsls r0, r0, #24	@ 0006f9f6 0006
.org 0x6f9f8
	lsrs r0, r0, #24	@ 0006f9f8 000e
.org 0x6f9fa
	cmp r0, #255	@ 0006f9fa ff28
.org 0x6f9fc
	bne.n 0x6fa14	@ 0006f9fc 0ad1
.org 0x6f9fe
	ldrb r1, [r7, #10]	@ 0006f9fe b97a
.org 0x6fa00
	movs r0, #254	@ 0006fa00 fe20
.org 0x6fa02
	ands r0, r1	@ 0006fa02 0840
.org 0x6fa04
	strb r0, [r7, #10]	@ 0006fa04 b872
.org 0x6fa06
	ldr r2, [pc, #48]	@ 0006fa06 0c4a
.org 0x6fa08
	ldrb r0, [r2, #18]	@ 0006fa08 907c
.org 0x6fa0a
	movs r1, #2	@ 0006fa0a 0221
.org 0x6fa0c
	orrs r0, r1	@ 0006fa0c 0843
.org 0x6fa0e
	strb r0, [r2, #18]	@ 0006fa0e 9074
.org 0x6fa10
	adds r0, r3, #1	@ 0006fa10 581c
.org 0x6fa12
	strb r0, [r7, #13]	@ 0006fa12 7873
.org 0x6fa14
	ldr r0, [r7, #84]	@ 0006fa14 786d
.org 0x6fa16
	str r0, [sp, #24]	@ 0006fa16 0690
.org 0x6fa18
	ldr r1, [r7, #88]	@ 0006fa18 b96d
.org 0x6fa1a
	movs r0, #192	@ 0006fa1a c020
