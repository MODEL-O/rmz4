@ FUN_0800a6f0  entry 0x0800a6f0  size 384
.thumb
.org 0xa6f0
FUN_0800a6f0:
	push {r4, r5, r6, lr}	@ 0000a6f0 70b5
.org 0xa6f2
	mov r6, r9	@ 0000a6f2 4e46
.org 0xa6f4
	mov r5, r8	@ 0000a6f4 4546
.org 0xa6f6
	push {r5, r6}	@ 0000a6f6 60b4
.org 0xa6f8
	ldr r5, [pc, #296]	@ 0000a6f8 4a4d
.org 0xa6fa
	ldr r1, [pc, #300]	@ 0000a6fa 4b49
.org 0xa6fc
	adds r0, r5, r1	@ 0000a6fc 6818
.org 0xa6fe
	ldrh r1, [r0, #0]	@ 0000a6fe 0188
.org 0xa700
	lsrs r0, r1, #8	@ 0000a700 080a
.org 0xa702
	cmp r0, #1	@ 0000a702 0128
.org 0xa704
	bne.n 0xa7aa	@ 0000a704 51d1
.org 0xa706
	movs r2, #255	@ 0000a706 ff22
.org 0xa708
	adds r0, r2, #0	@ 0000a708 101c
.org 0xa70a
	ands r0, r1	@ 0000a70a 0840
.org 0xa70c
	cmp r0, #0	@ 0000a70c 0028
.org 0xa70e
	bne.n 0xa7aa	@ 0000a70e 4cd1
.org 0xa710
	ldr r1, [pc, #280]	@ 0000a710 4649
.org 0xa712
	adds r0, r5, r1	@ 0000a712 6818
.org 0xa714
	ldrh r1, [r0, #0]	@ 0000a714 0188
.org 0xa716
	lsrs r0, r1, #8	@ 0000a716 080a
.org 0xa718
	cmp r0, #1	@ 0000a718 0128
.org 0xa71a
	bne.n 0xa7aa	@ 0000a71a 46d1
.org 0xa71c
	adds r0, r2, #0	@ 0000a71c 101c
.org 0xa71e
	ands r0, r1	@ 0000a71e 0840
.org 0xa720
	cmp r0, #1	@ 0000a720 0128
.org 0xa722
	bne.n 0xa7aa	@ 0000a722 42d1
.org 0xa724
	ldr r1, [pc, #264]	@ 0000a724 4249
.org 0xa726
	adds r0, r5, r1	@ 0000a726 6818
.org 0xa728
	ldrb r0, [r0, #0]	@ 0000a728 0078
.org 0xa72a
	cmp r0, #2	@ 0000a72a 0228
.org 0xa72c
	beq.n 0xa7aa	@ 0000a72c 3dd0
.org 0xa72e
	ldr r4, [pc, #260]	@ 0000a72e 414c
.org 0xa730
	ldr r6, [pc, #260]	@ 0000a730 414e
.org 0xa732
	ldr r0, [pc, #264]	@ 0000a732 4248
.org 0xa734
	adds r5, r5, r0	@ 0000a734 2d18
.org 0xa736
	ldrb r0, [r5, #0]	@ 0000a736 2878
.org 0xa738
	lsrs r0, r0, #1	@ 0000a738 4008
.org 0xa73a
	adds r0, r0, r6	@ 0000a73a 8019
.org 0xa73c
	ldrb r0, [r0, #0]	@ 0000a73c 0078
.org 0xa73e
	lsls r1, r0, #2	@ 0000a73e 8100
.org 0xa740
	adds r1, r1, r0	@ 0000a740 0918
.org 0xa742
	lsls r1, r1, #2	@ 0000a742 8900
.org 0xa744
	adds r1, r1, r4	@ 0000a744 0919
.org 0xa746
	ldr r0, [r4, #0]	@ 0000a746 2068
.org 0xa748
	adds r0, r0, r1	@ 0000a748 4018
.org 0xa74a
	movs r1, #128	@ 0000a74a 8021
.org 0xa74c
	lsls r1, r1, #7	@ 0000a74c c901
.org 0xa74e
	mov r9, r1	@ 0000a74e 8946
.org 0xa750
	bl 0x1ea4	@ 0000a750 f7f7a8fb
.org 0xa754
	ldrb r0, [r5, #0]	@ 0000a754 2878
.org 0xa756
	lsrs r0, r0, #1	@ 0000a756 4008
.org 0xa758
	adds r0, r0, r6	@ 0000a758 8019
.org 0xa75a
	ldrb r0, [r0, #0]	@ 0000a75a 0078
.org 0xa75c
	lsls r1, r0, #2	@ 0000a75c 8100
.org 0xa75e
	adds r1, r1, r0	@ 0000a75e 0918
.org 0xa760
	lsls r1, r1, #2	@ 0000a760 8900
.org 0xa762
	adds r1, r1, r4	@ 0000a762 0919
.org 0xa764
	ldr r0, [r4, #0]	@ 0000a764 2068
.org 0xa766
	adds r0, r0, r1	@ 0000a766 4018
.org 0xa768
	adds r0, #12	@ 0000a768 0c30
.org 0xa76a
	movs r1, #0	@ 0000a76a 0021
.org 0xa76c
	bl 0x2208	@ 0000a76c f7f74cfd
.org 0xa770
	ldrb r0, [r5, #0]	@ 0000a770 2878
.org 0xa772
	lsrs r0, r0, #1	@ 0000a772 4008
.org 0xa774
	adds r0, r0, r6	@ 0000a774 8019
.org 0xa776
	ldrb r0, [r0, #0]	@ 0000a776 0078
.org 0xa778
	lsls r1, r0, #2	@ 0000a778 8100
.org 0xa77a
	adds r1, r1, r0	@ 0000a77a 0918
.org 0xa77c
	lsls r1, r1, #2	@ 0000a77c 8900
.org 0xa77e
	ldr r0, [pc, #192]	@ 0000a77e 3048
.org 0xa780
	mov r8, r0	@ 0000a780 8046
.org 0xa782
	add r1, r8	@ 0000a782 4144
.org 0xa784
	ldr r0, [r4, #0]	@ 0000a784 2068
.org 0xa786
	adds r0, r0, r1	@ 0000a786 4018
.org 0xa788
	mov r1, r9	@ 0000a788 4946
.org 0xa78a
	bl 0x1ea4	@ 0000a78a f7f78bfb
.org 0xa78e
	ldrb r0, [r5, #0]	@ 0000a78e 2878
.org 0xa790
	lsrs r0, r0, #1	@ 0000a790 4008
.org 0xa792
	adds r0, r0, r6	@ 0000a792 8019
.org 0xa794
	ldrb r0, [r0, #0]	@ 0000a794 0078
.org 0xa796
	lsls r1, r0, #2	@ 0000a796 8100
.org 0xa798
	adds r1, r1, r0	@ 0000a798 0918
.org 0xa79a
	lsls r1, r1, #2	@ 0000a79a 8900
.org 0xa79c
	add r1, r8	@ 0000a79c 4144
.org 0xa79e
	ldr r0, [r4, #0]	@ 0000a79e 2068
.org 0xa7a0
	adds r0, r0, r1	@ 0000a7a0 4018
.org 0xa7a2
	adds r0, #12	@ 0000a7a2 0c30
.org 0xa7a4
	movs r1, #0	@ 0000a7a4 0021
.org 0xa7a6
	bl 0x2208	@ 0000a7a6 f7f72ffd
.org 0xa7aa
	ldr r2, [pc, #120]	@ 0000a7aa 1e4a
.org 0xa7ac
	ldr r1, [pc, #120]	@ 0000a7ac 1e49
.org 0xa7ae
	adds r0, r2, r1	@ 0000a7ae 5018
.org 0xa7b0
	ldrh r1, [r0, #0]	@ 0000a7b0 0188
.org 0xa7b2
	lsrs r0, r1, #8	@ 0000a7b2 080a
.org 0xa7b4
	cmp r0, #1	@ 0000a7b4 0128
.org 0xa7b6
	bne.n 0xa88c	@ 0000a7b6 69d1
.org 0xa7b8
	movs r3, #255	@ 0000a7b8 ff23
.org 0xa7ba
	adds r0, r3, #0	@ 0000a7ba 181c
.org 0xa7bc
	ands r0, r1	@ 0000a7bc 0840
.org 0xa7be
	cmp r0, #3	@ 0000a7be 0328
.org 0xa7c0
	bne.n 0xa88c	@ 0000a7c0 64d1
.org 0xa7c2
	ldr r1, [pc, #104]	@ 0000a7c2 1a49
.org 0xa7c4
	adds r0, r2, r1	@ 0000a7c4 5018
.org 0xa7c6
	ldrh r1, [r0, #0]	@ 0000a7c6 0188
.org 0xa7c8
	lsrs r0, r1, #8	@ 0000a7c8 080a
.org 0xa7ca
	cmp r0, #1	@ 0000a7ca 0128
.org 0xa7cc
	bne.n 0xa88c	@ 0000a7cc 5ed1
.org 0xa7ce
	adds r0, r3, #0	@ 0000a7ce 181c
.org 0xa7d0
	ands r0, r1	@ 0000a7d0 0840
.org 0xa7d2
	cmp r0, #2	@ 0000a7d2 0228
.org 0xa7d4
	bne.n 0xa88c	@ 0000a7d4 5ad1
.org 0xa7d6
	ldr r0, [pc, #108]	@ 0000a7d6 1b48
.org 0xa7d8
	adds r6, r2, r0	@ 0000a7d8 1618
.org 0xa7da
	ldrb r0, [r6, #0]	@ 0000a7da 3078
.org 0xa7dc
	cmp r0, #19	@ 0000a7dc 1328
.org 0xa7de
	bhi.n 0xa84c	@ 0000a7de 35d8
.org 0xa7e0
	ldr r5, [pc, #80]	@ 0000a7e0 144d
.org 0xa7e2
	movs r1, #5	@ 0000a7e2 0521
.org 0xa7e4
	bl 0x129120	@ 0000a7e4 1ef19cfc
.org 0xa7e8
	lsls r0, r0, #24	@ 0000a7e8 0006
.org 0xa7ea
	lsrs r0, r0, #24	@ 0000a7ea 000e
.org 0xa7ec
	lsls r1, r0, #2	@ 0000a7ec 8100
.org 0xa7ee
	adds r1, r1, r0	@ 0000a7ee 0918
.org 0xa7f0
	lsls r1, r1, #2	@ 0000a7f0 8900
.org 0xa7f2
	ldr r4, [pc, #84]	@ 0000a7f2 154c
.org 0xa7f4
	adds r1, r1, r4	@ 0000a7f4 0919
.org 0xa7f6
	ldr r0, [r5, #0]	@ 0000a7f6 2868
.org 0xa7f8
	adds r0, r0, r1	@ 0000a7f8 4018
.org 0xa7fa
	movs r1, #128	@ 0000a7fa 8021
.org 0xa7fc
	lsls r1, r1, #7	@ 0000a7fc c901
.org 0xa7fe
	bl 0x1ea4	@ 0000a7fe f7f751fb
.org 0xa802
	ldrb r0, [r6, #0]	@ 0000a802 3078
.org 0xa804
	movs r1, #5	@ 0000a804 0521
.org 0xa806
	bl 0x129120	@ 0000a806 1ef18bfc
.org 0xa80a
	lsls r0, r0, #24	@ 0000a80a 0006
.org 0xa80c
	lsrs r0, r0, #24	@ 0000a80c 000e
.org 0xa80e
	lsls r1, r0, #2	@ 0000a80e 8100
.org 0xa810
	adds r1, r1, r0	@ 0000a810 0918
.org 0xa812
	lsls r1, r1, #2	@ 0000a812 8900
.org 0xa814
	adds r1, r1, r4	@ 0000a814 0919
.org 0xa816
	ldr r0, [r5, #0]	@ 0000a816 2868
.org 0xa818
	adds r0, r0, r1	@ 0000a818 4018
.org 0xa81a
	adds r0, #12	@ 0000a81a 0c30
.org 0xa81c
	movs r1, #0	@ 0000a81c 0021
.org 0xa81e
	bl 0x2208	@ 0000a81e f7f7f3fc
.org 0xa822
	b.n 0xa88c	@ 0000a822 33e0
.org 0xa824
	.byte 0xb0,0x0a,0x00,0x02	@ 0000a824 data
.org 0xa828
	.byte 0xd4,0x07,0x00,0x00	@ 0000a828 data
.org 0xa82c
	.byte 0xd6,0x07,0x00,0x00	@ 0000a82c data
.org 0xa830
	.byte 0x24,0xd0,0x02,0x00	@ 0000a830 data
.org 0xa834
	.byte 0x48,0x20,0xdf,0x08	@ 0000a834 data
.org 0xa838
	.byte 0x2c,0xdb,0x82,0x08	@ 0000a838 data
.org 0xa83c
	.byte 0x2c,0xd0,0x02,0x00	@ 0000a83c data
.org 0xa840
	.byte 0x84,0x20,0xdf,0x08	@ 0000a840 data
.org 0xa844
	.byte 0x2f,0xd0,0x02,0x00	@ 0000a844 data
.org 0xa848
	.byte 0xc0,0x20,0xdf,0x08	@ 0000a848 data
.org 0xa84c
	ldr r5, [pc, #72]	@ 0000a84c 124d
.org 0xa84e
	ldrb r0, [r6, #0]	@ 0000a84e 3078
.org 0xa850
	subs r0, #20	@ 0000a850 1438
.org 0xa852
	movs r1, #3	@ 0000a852 0321
.org 0xa854
	bl 0x128fb8	@ 0000a854 1ef1b0fb
.org 0xa858
	lsls r1, r0, #2	@ 0000a858 8100
.org 0xa85a
	adds r1, r1, r0	@ 0000a85a 0918
.org 0xa85c
	lsls r1, r1, #2	@ 0000a85c 8900
.org 0xa85e
	ldr r4, [pc, #60]	@ 0000a85e 0f4c
.org 0xa860
	adds r1, r1, r4	@ 0000a860 0919
.org 0xa862
	ldr r0, [r5, #0]	@ 0000a862 2868
.org 0xa864
	adds r0, r0, r1	@ 0000a864 4018
.org 0xa866
	movs r1, #128	@ 0000a866 8021
.org 0xa868
	lsls r1, r1, #7	@ 0000a868 c901
.org 0xa86a
	bl 0x1ea4	@ 0000a86a f7f71bfb
.org 0xa86e
	ldrb r0, [r6, #0]	@ 0000a86e 3078
