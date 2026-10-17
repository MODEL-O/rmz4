@ FUN_0802e6a8  entry 0x0802e6a8  size 1462
.thumb
.org 0x2e6a8
FUN_0802e6a8:
	push {r4, r5, r6, r7, lr}	@ 0002e6a8 f0b5
.org 0x2e6aa
	mov r7, sl	@ 0002e6aa 5746
.org 0x2e6ac
	mov r6, r9	@ 0002e6ac 4e46
.org 0x2e6ae
	mov r5, r8	@ 0002e6ae 4546
.org 0x2e6b0
	push {r5, r6, r7}	@ 0002e6b0 e0b4
.org 0x2e6b2
	sub sp, #36	@ 0002e6b2 89b0
.org 0x2e6b4
	adds r5, r0, #0	@ 0002e6b4 051c
.org 0x2e6b6
	mov r9, r1	@ 0002e6b6 8946
.org 0x2e6b8
	movs r0, #221	@ 0002e6b8 dd20
.org 0x2e6ba
	lsls r0, r0, #1	@ 0002e6ba 4000
.org 0x2e6bc
	adds r1, r5, r0	@ 0002e6bc 2918
.org 0x2e6be
	movs r0, #0	@ 0002e6be 0020
.org 0x2e6c0
	strb r0, [r1, #0]	@ 0002e6c0 0870
.org 0x2e6c2
	movs r1, #161	@ 0002e6c2 a121
.org 0x2e6c4
	lsls r1, r1, #1	@ 0002e6c4 4900
.org 0x2e6c6
	adds r2, r5, r1	@ 0002e6c6 6a18
.org 0x2e6c8
	ldrb r1, [r2, #0]	@ 0002e6c8 1178
.org 0x2e6ca
	subs r0, #33	@ 0002e6ca 2138
.org 0x2e6cc
	ands r0, r1	@ 0002e6cc 0840
.org 0x2e6ce
	strb r0, [r2, #0]	@ 0002e6ce 1070
.org 0x2e6d0
	ldr r2, [r5, #84]	@ 0002e6d0 6a6d
.org 0x2e6d2
	str r2, [sp, #0]	@ 0002e6d2 0092
.org 0x2e6d4
	ldrb r1, [r5, #10]	@ 0002e6d4 a97a
.org 0x2e6d6
	movs r0, #16	@ 0002e6d6 1020
.org 0x2e6d8
	ands r0, r1	@ 0002e6d8 0840
.org 0x2e6da
	cmp r0, #0	@ 0002e6da 0028
.org 0x2e6dc
	beq.n 0x2e6fa	@ 0002e6dc 0dd0
.org 0x2e6de
	mov r3, r9	@ 0002e6de 4b46
.org 0x2e6e0
	movs r4, #0	@ 0002e6e0 0024
.org 0x2e6e2
	ldrsh r0, [r3, r4]	@ 0002e6e2 185f
.org 0x2e6e4
	subs r0, r2, r0	@ 0002e6e4 101a
.org 0x2e6e6
	ldrh r1, [r3, #4]	@ 0002e6e6 9988
.org 0x2e6e8
	lsls r1, r1, #16	@ 0002e6e8 0904
.org 0x2e6ea
	asrs r1, r1, #17	@ 0002e6ea 4914
.org 0x2e6ec
	adds r0, r0, r1	@ 0002e6ec 4018
.org 0x2e6ee
	adds r0, #1	@ 0002e6ee 0130
.org 0x2e6f0
	str r0, [sp, #4]	@ 0002e6f0 0190
.org 0x2e6f2
	movs r6, #0	@ 0002e6f2 0026
.org 0x2e6f4
	ldrsh r0, [r3, r6]	@ 0002e6f4 985f
.org 0x2e6f6
	subs r0, r2, r0	@ 0002e6f6 101a
.org 0x2e6f8
	b.n 0x2e716	@ 0002e6f8 0de0
.org 0x2e6fa
	mov r1, r9	@ 0002e6fa 4946
.org 0x2e6fc
	movs r3, #0	@ 0002e6fc 0023
.org 0x2e6fe
	ldrsh r0, [r1, r3]	@ 0002e6fe c85e
.org 0x2e700
	adds r0, r2, r0	@ 0002e700 1018
.org 0x2e702
	ldrh r1, [r1, #4]	@ 0002e702 8988
.org 0x2e704
	lsls r1, r1, #16	@ 0002e704 0904
.org 0x2e706
	asrs r1, r1, #17	@ 0002e706 4914
.org 0x2e708
	adds r0, r0, r1	@ 0002e708 4018
.org 0x2e70a
	adds r0, #1	@ 0002e70a 0130
.org 0x2e70c
	str r0, [sp, #4]	@ 0002e70c 0190
.org 0x2e70e
	mov r4, r9	@ 0002e70e 4c46
.org 0x2e710
	movs r6, #0	@ 0002e710 0026
.org 0x2e712
	ldrsh r0, [r4, r6]	@ 0002e712 a05f
.org 0x2e714
	adds r0, r2, r0	@ 0002e714 1018
.org 0x2e716
	subs r0, r0, r1	@ 0002e716 401a
.org 0x2e718
	subs r0, #1	@ 0002e718 0138
.org 0x2e71a
	str r0, [sp, #8]	@ 0002e71a 0290
.org 0x2e71c
	add r3, sp, #12	@ 0002e71c 03ab
.org 0x2e71e
	mov r1, r9	@ 0002e71e 4946
.org 0x2e720
	movs r2, #2	@ 0002e720 0222
.org 0x2e722
	ldrsh r0, [r1, r2]	@ 0002e722 885e
.org 0x2e724
	ldr r1, [r5, #88]	@ 0002e724 a96d
.org 0x2e726
	adds r0, r1, r0	@ 0002e726 0818
.org 0x2e728
	mov r4, r9	@ 0002e728 4c46
.org 0x2e72a
	ldrh r2, [r4, #6]	@ 0002e72a e288
.org 0x2e72c
	lsls r2, r2, #16	@ 0002e72c 1204
.org 0x2e72e
	asrs r2, r2, #17	@ 0002e72e 5214
.org 0x2e730
	adds r0, r0, r2	@ 0002e730 8018
.org 0x2e732
	str r0, [sp, #12]	@ 0002e732 0390
.org 0x2e734
	movs r6, #2	@ 0002e734 0226
.org 0x2e736
	ldrsh r0, [r4, r6]	@ 0002e736 a05f
.org 0x2e738
	adds r0, r1, r0	@ 0002e738 0818
.org 0x2e73a
	str r0, [r3, #4]	@ 0002e73a 5860
.org 0x2e73c
	movs r6, #2	@ 0002e73c 0226
.org 0x2e73e
	ldrsh r0, [r4, r6]	@ 0002e73e a05f
.org 0x2e740
	adds r1, r1, r0	@ 0002e740 0918
.org 0x2e742
	subs r1, r1, r2	@ 0002e742 891a
.org 0x2e744
	str r1, [r3, #8]	@ 0002e744 9960
.org 0x2e746
	adds r0, r5, #0	@ 0002e746 281c
.org 0x2e748
	adds r0, #180	@ 0002e748 b430
.org 0x2e74a
	ldr r1, [r0, #108]	@ 0002e74a c16e
.org 0x2e74c
	mov sl, r3	@ 0002e74c 9a46
.org 0x2e74e
	str r0, [sp, #24]	@ 0002e74e 0690
.org 0x2e750
	cmp r1, #0	@ 0002e750 0029
.org 0x2e752
	bgt.n 0x2e77a	@ 0002e752 12dc
.org 0x2e754
	movs r1, #150	@ 0002e754 9621
.org 0x2e756
	lsls r1, r1, #2	@ 0002e756 8900
.org 0x2e758
	adds r0, r5, r1	@ 0002e758 6818
.org 0x2e75a
	ldr r0, [r0, #0]	@ 0002e75a 0068
.org 0x2e75c
	movs r2, #16	@ 0002e75c 1022
.org 0x2e75e
	ands r0, r2	@ 0002e75e 1040
.org 0x2e760
	cmp r0, #0	@ 0002e760 0028
.org 0x2e762
	bne.n 0x2e77a	@ 0002e762 0ad1
.org 0x2e764
	ldrb r1, [r5, #10]	@ 0002e764 a97a
.org 0x2e766
	adds r0, r2, #0	@ 0002e766 101c
.org 0x2e768
	ands r0, r1	@ 0002e768 0840
.org 0x2e76a
	cmp r0, #0	@ 0002e76a 0028
.org 0x2e76c
	bne.n 0x2e808	@ 0002e76c 4cd1
.org 0x2e76e
	movs r2, #186	@ 0002e76e ba22
.org 0x2e770
	lsls r2, r2, #1	@ 0002e770 5200
.org 0x2e772
	adds r0, r5, r2	@ 0002e772 a818
.org 0x2e774
	ldrb r0, [r0, #0]	@ 0002e774 0078
.org 0x2e776
	cmp r0, #0	@ 0002e776 0028
.org 0x2e778
	beq.n 0x2e808	@ 0002e778 46d0
.org 0x2e77a
	movs r3, #0	@ 0002e77a 0023
.org 0x2e77c
	mov r8, r3	@ 0002e77c 9846
.org 0x2e77e
	movs r6, #0	@ 0002e77e 0026
.org 0x2e780
	b.n 0x2e7c0	@ 0002e780 1ee0
.org 0x2e782
	ldr r0, [sp, #4]	@ 0002e782 0198
.org 0x2e784
	ldr r1, [r4, #0]	@ 0002e784 2168
.org 0x2e786
	str r3, [sp, #32]	@ 0002e786 0893
.org 0x2e788
	bl 0x7d28	@ 0002e788 d9f7cefa
.org 0x2e78c
	lsls r0, r0, #16	@ 0002e78c 0004
.org 0x2e78e
	lsrs r2, r0, #16	@ 0002e78e 020c
.org 0x2e790
	movs r0, #16	@ 0002e790 1020
.org 0x2e792
	ands r0, r2	@ 0002e792 1040
.org 0x2e794
	ldr r3, [sp, #32]	@ 0002e794 089b
.org 0x2e796
	cmp r0, #0	@ 0002e796 0028
.org 0x2e798
	beq.n 0x2e7a2	@ 0002e798 03d0
.org 0x2e79a
	adds r0, r3, #1	@ 0002e79a 581c
.org 0x2e79c
	lsls r0, r0, #24	@ 0002e79c 0006
.org 0x2e79e
	lsrs r3, r0, #24	@ 0002e79e 030e
.org 0x2e7a0
	b.n 0x2e7ba	@ 0002e7a0 0be0
.org 0x2e7a2
	adds r0, r2, #0	@ 0002e7a2 101c
.org 0x2e7a4
	ands r0, r7	@ 0002e7a4 3840
.org 0x2e7a6
	cmp r0, #0	@ 0002e7a6 0028
.org 0x2e7a8
	bne.n 0x2e7b6	@ 0002e7a8 05d1
.org 0x2e7aa
	mov r0, r8	@ 0002e7aa 4046
.org 0x2e7ac
	adds r0, #1	@ 0002e7ac 0130
.org 0x2e7ae
	lsls r0, r0, #24	@ 0002e7ae 0006
.org 0x2e7b0
	lsrs r0, r0, #24	@ 0002e7b0 000e
.org 0x2e7b2
	mov r8, r0	@ 0002e7b2 8046
.org 0x2e7b4
	b.n 0x2e7ba	@ 0002e7b4 01e0
.org 0x2e7b6
	cmp r0, #1	@ 0002e7b6 0128
.org 0x2e7b8
	beq.n 0x2e7e2	@ 0002e7b8 13d0
.org 0x2e7ba
	adds r0, r6, #1	@ 0002e7ba 701c
.org 0x2e7bc
	lsls r0, r0, #24	@ 0002e7bc 0006
.org 0x2e7be
	lsrs r6, r0, #24	@ 0002e7be 060e
.org 0x2e7c0
	cmp r6, #2	@ 0002e7c0 022e
.org 0x2e7c2
	bhi.n 0x2e7e2	@ 0002e7c2 0ed8
.org 0x2e7c4
	ldr r1, [sp, #4]	@ 0002e7c4 0199
.org 0x2e7c6
	lsls r0, r6, #2	@ 0002e7c6 b000
.org 0x2e7c8
	mov r2, sl	@ 0002e7c8 5246
.org 0x2e7ca
	adds r4, r2, r0	@ 0002e7ca 1418
.org 0x2e7cc
	ldr r2, [r4, #0]	@ 0002e7cc 2268
.org 0x2e7ce
	adds r0, r5, #0	@ 0002e7ce 281c
.org 0x2e7d0
	str r3, [sp, #32]	@ 0002e7d0 0893
.org 0x2e7d2
	bl 0x2e2d0	@ 0002e7d2 fff77dfd
.org 0x2e7d6
	movs r7, #15	@ 0002e7d6 0f27
.org 0x2e7d8
	adds r1, r7, #0	@ 0002e7d8 391c
.org 0x2e7da
	ands r1, r0	@ 0002e7da 0140
.org 0x2e7dc
	ldr r3, [sp, #32]	@ 0002e7dc 089b
.org 0x2e7de
	cmp r1, #1	@ 0002e7de 0129
.org 0x2e7e0
	bne.n 0x2e782	@ 0002e7e0 cfd1
.org 0x2e7e2
	cmp r3, #0	@ 0002e7e2 002b
.org 0x2e7e4
	beq.n 0x2e808	@ 0002e7e4 10d0
.org 0x2e7e6
	mov r4, r8	@ 0002e7e6 4446
.org 0x2e7e8
	adds r0, r3, r4	@ 0002e7e8 1819
.org 0x2e7ea
	cmp r0, #3	@ 0002e7ea 0328
.org 0x2e7ec
	bne.n 0x2e808	@ 0002e7ec 0cd1
.org 0x2e7ee
	adds r0, r5, #0	@ 0002e7ee 281c
.org 0x2e7f0
	adds r0, #148	@ 0002e7f0 9430
.org 0x2e7f2
	ldrb r0, [r0, #0]	@ 0002e7f2 0078
.org 0x2e7f4
	cmp r0, #0	@ 0002e7f4 0028
.org 0x2e7f6
	bne.n 0x2e7fa	@ 0002e7f6 00d1
.org 0x2e7f8
	b.n 0x2ea90	@ 0002e7f8 4ae1
.org 0x2e7fa
	movs r6, #187	@ 0002e7fa bb26
.org 0x2e7fc
	lsls r6, r6, #1	@ 0002e7fc 7600
.org 0x2e7fe
	adds r0, r5, r6	@ 0002e7fe a819
.org 0x2e800
	ldrb r0, [r0, #0]	@ 0002e800 0078
.org 0x2e802
	cmp r0, #0	@ 0002e802 0028
.org 0x2e804
	beq.n 0x2e808	@ 0002e804 00d0
.org 0x2e806
	b.n 0x2ea90	@ 0002e806 43e1
.org 0x2e808
	ldr r1, [sp, #24]	@ 0002e808 0699
.org 0x2e80a
	ldr r0, [r1, #108]	@ 0002e80a c86e
.org 0x2e80c
	cmp r0, #0	@ 0002e80c 0028
.org 0x2e80e
	blt.n 0x2e836	@ 0002e80e 12db
.org 0x2e810
	movs r2, #150	@ 0002e810 9622
.org 0x2e812
	lsls r2, r2, #2	@ 0002e812 9200
.org 0x2e814
	adds r0, r5, r2	@ 0002e814 a818
.org 0x2e816
	ldr r0, [r0, #0]	@ 0002e816 0068
.org 0x2e818
	movs r1, #32	@ 0002e818 2021
.org 0x2e81a
	ands r0, r1	@ 0002e81a 0840
.org 0x2e81c
	cmp r0, #0	@ 0002e81c 0028
.org 0x2e81e
	bne.n 0x2e836	@ 0002e81e 0ad1
.org 0x2e820
	ldrb r1, [r5, #10]	@ 0002e820 a97a
.org 0x2e822
	movs r0, #16	@ 0002e822 1020
.org 0x2e824
	ands r0, r1	@ 0002e824 0840
.org 0x2e826
	cmp r0, #0	@ 0002e826 0028
.org 0x2e828
	bne.n 0x2e8c6	@ 0002e828 4dd1
.org 0x2e82a
	movs r3, #186	@ 0002e82a ba23
.org 0x2e82c
	lsls r3, r3, #1	@ 0002e82c 5b00
.org 0x2e82e
	adds r0, r5, r3	@ 0002e82e e818
.org 0x2e830
	ldrb r0, [r0, #0]	@ 0002e830 0078
.org 0x2e832
	cmp r0, #0	@ 0002e832 0028
.org 0x2e834
	beq.n 0x2e8c6	@ 0002e834 47d0
.org 0x2e836
	movs r4, #0	@ 0002e836 0024
.org 0x2e838
	mov r8, r4	@ 0002e838 a046
.org 0x2e83a
	movs r3, #0	@ 0002e83a 0023
.org 0x2e83c
	movs r6, #0	@ 0002e83c 0026
.org 0x2e83e
	b.n 0x2e87e	@ 0002e83e 1ee0
.org 0x2e840
	ldr r0, [sp, #8]	@ 0002e840 0298
.org 0x2e842
	ldr r1, [r4, #0]	@ 0002e842 2168
.org 0x2e844
	str r3, [sp, #32]	@ 0002e844 0893
.org 0x2e846
	bl 0x7d28	@ 0002e846 d9f76ffa
.org 0x2e84a
	lsls r0, r0, #16	@ 0002e84a 0004
.org 0x2e84c
	lsrs r2, r0, #16	@ 0002e84c 020c
.org 0x2e84e
	movs r0, #16	@ 0002e84e 1020
.org 0x2e850
	ands r0, r2	@ 0002e850 1040
.org 0x2e852
	ldr r3, [sp, #32]	@ 0002e852 089b
.org 0x2e854
	cmp r0, #0	@ 0002e854 0028
.org 0x2e856
	beq.n 0x2e860	@ 0002e856 03d0
.org 0x2e858
	adds r0, r3, #1	@ 0002e858 581c
.org 0x2e85a
	lsls r0, r0, #24	@ 0002e85a 0006
.org 0x2e85c
	lsrs r3, r0, #24	@ 0002e85c 030e
.org 0x2e85e
	b.n 0x2e878	@ 0002e85e 0be0
.org 0x2e860
	adds r0, r2, #0	@ 0002e860 101c
.org 0x2e862
	ands r0, r7	@ 0002e862 3840
.org 0x2e864
	cmp r0, #0	@ 0002e864 0028
.org 0x2e866
	bne.n 0x2e874	@ 0002e866 05d1
.org 0x2e868
	mov r0, r8	@ 0002e868 4046
.org 0x2e86a
	adds r0, #1	@ 0002e86a 0130
.org 0x2e86c
	lsls r0, r0, #24	@ 0002e86c 0006
.org 0x2e86e
	lsrs r0, r0, #24	@ 0002e86e 000e
.org 0x2e870
	mov r8, r0	@ 0002e870 8046
.org 0x2e872
	b.n 0x2e878	@ 0002e872 01e0
.org 0x2e874
	cmp r0, #1	@ 0002e874 0128
.org 0x2e876
	beq.n 0x2e8a0	@ 0002e876 13d0
.org 0x2e878
	adds r0, r6, #1	@ 0002e878 701c
.org 0x2e87a
	lsls r0, r0, #24	@ 0002e87a 0006
.org 0x2e87c
	lsrs r6, r0, #24	@ 0002e87c 060e
.org 0x2e87e
	cmp r6, #2	@ 0002e87e 022e
.org 0x2e880
	bhi.n 0x2e8a0	@ 0002e880 0ed8
.org 0x2e882
	ldr r1, [sp, #8]	@ 0002e882 0299
.org 0x2e884
	lsls r0, r6, #2	@ 0002e884 b000
.org 0x2e886
	mov r2, sl	@ 0002e886 5246
.org 0x2e888
	adds r4, r2, r0	@ 0002e888 1418
.org 0x2e88a
	ldr r2, [r4, #0]	@ 0002e88a 2268
.org 0x2e88c
	adds r0, r5, #0	@ 0002e88c 281c
.org 0x2e88e
	str r3, [sp, #32]	@ 0002e88e 0893
.org 0x2e890
	bl 0x2e2d0	@ 0002e890 fff71efd
.org 0x2e894
	movs r7, #15	@ 0002e894 0f27
.org 0x2e896
	adds r1, r7, #0	@ 0002e896 391c
.org 0x2e898
	ands r1, r0	@ 0002e898 0140
.org 0x2e89a
	ldr r3, [sp, #32]	@ 0002e89a 089b
.org 0x2e89c
	cmp r1, #1	@ 0002e89c 0129
.org 0x2e89e
	bne.n 0x2e840	@ 0002e89e cfd1
.org 0x2e8a0
	cmp r3, #0	@ 0002e8a0 002b
.org 0x2e8a2
	beq.n 0x2e8c6	@ 0002e8a2 10d0
.org 0x2e8a4
	mov r4, r8	@ 0002e8a4 4446
.org 0x2e8a6
	adds r0, r3, r4	@ 0002e8a6 1819
.org 0x2e8a8
	cmp r0, #3	@ 0002e8a8 0328
.org 0x2e8aa
	bne.n 0x2e8c6	@ 0002e8aa 0cd1
.org 0x2e8ac
	adds r0, r5, #0	@ 0002e8ac 281c
.org 0x2e8ae
	adds r0, #148	@ 0002e8ae 9430
.org 0x2e8b0
	ldrb r0, [r0, #0]	@ 0002e8b0 0078
.org 0x2e8b2
	cmp r0, #0	@ 0002e8b2 0028
.org 0x2e8b4
	bne.n 0x2e8b8	@ 0002e8b4 00d1
.org 0x2e8b6
	b.n 0x2ea90	@ 0002e8b6 ebe0
.org 0x2e8b8
	movs r6, #187	@ 0002e8b8 bb26
.org 0x2e8ba
	lsls r6, r6, #1	@ 0002e8ba 7600
.org 0x2e8bc
	adds r0, r5, r6	@ 0002e8bc a819
.org 0x2e8be
	ldrb r0, [r0, #0]	@ 0002e8be 0078
.org 0x2e8c0
	cmp r0, #0	@ 0002e8c0 0028
.org 0x2e8c2
	beq.n 0x2e8c6	@ 0002e8c2 00d0
.org 0x2e8c4
	b.n 0x2ea90	@ 0002e8c4 e4e0
.org 0x2e8c6
	mov r1, r9	@ 0002e8c6 4946
.org 0x2e8c8
	movs r2, #2	@ 0002e8c8 0222
.org 0x2e8ca
	ldrsh r0, [r1, r2]	@ 0002e8ca 885e
.org 0x2e8cc
	ldr r1, [r5, #88]	@ 0002e8cc a96d
.org 0x2e8ce
	adds r0, r1, r0	@ 0002e8ce 0818
.org 0x2e8d0
	mov r3, r9	@ 0002e8d0 4b46
.org 0x2e8d2
	ldrh r2, [r3, #6]	@ 0002e8d2 da88
.org 0x2e8d4
	lsls r2, r2, #16	@ 0002e8d4 1204
.org 0x2e8d6
	asrs r2, r2, #17	@ 0002e8d6 5214
.org 0x2e8d8
	adds r0, r0, r2	@ 0002e8d8 8018
.org 0x2e8da
	adds r0, #1	@ 0002e8da 0130
.org 0x2e8dc
	str r0, [sp, #12]	@ 0002e8dc 0390
.org 0x2e8de
	movs r4, #2	@ 0002e8de 0224
.org 0x2e8e0
	ldrsh r0, [r3, r4]	@ 0002e8e0 185f
.org 0x2e8e2
	adds r1, r1, r0	@ 0002e8e2 0918
.org 0x2e8e4
	subs r1, r1, r2	@ 0002e8e4 891a
.org 0x2e8e6
	subs r1, #1	@ 0002e8e6 0139
.org 0x2e8e8
	mov r6, sl	@ 0002e8e8 5646
.org 0x2e8ea
	str r1, [r6, #8]	@ 0002e8ea b160
.org 0x2e8ec
	ldrb r1, [r5, #10]	@ 0002e8ec a97a
.org 0x2e8ee
	movs r0, #16	@ 0002e8ee 1020
.org 0x2e8f0
	ands r0, r1	@ 0002e8f0 0840
.org 0x2e8f2
	cmp r0, #0	@ 0002e8f2 0028
.org 0x2e8f4
	beq.n 0x2e912	@ 0002e8f4 0dd0
.org 0x2e8f6
	movs r0, #0	@ 0002e8f6 0020
.org 0x2e8f8
	ldrsh r1, [r3, r0]	@ 0002e8f8 195e
.org 0x2e8fa
	ldr r2, [r5, #84]	@ 0002e8fa 6a6d
.org 0x2e8fc
	subs r1, r2, r1	@ 0002e8fc 511a
.org 0x2e8fe
	ldrh r0, [r3, #4]	@ 0002e8fe 9888
.org 0x2e900
	lsls r0, r0, #16	@ 0002e900 0004
.org 0x2e902
	asrs r0, r0, #17	@ 0002e902 4014
.org 0x2e904
	adds r1, r1, r0	@ 0002e904 0918
.org 0x2e906
	str r1, [sp, #4]	@ 0002e906 0191
.org 0x2e908
	movs r4, #0	@ 0002e908 0024
.org 0x2e90a
	ldrsh r1, [r3, r4]	@ 0002e90a 195f
.org 0x2e90c
	subs r2, r2, r1	@ 0002e90c 521a
.org 0x2e90e
	subs r2, r2, r0	@ 0002e90e 121a
.org 0x2e910
	b.n 0x2e92e	@ 0002e910 0de0
.org 0x2e912
	mov r6, r9	@ 0002e912 4e46
.org 0x2e914
	movs r0, #0	@ 0002e914 0020
.org 0x2e916
	ldrsh r1, [r6, r0]	@ 0002e916 315e
.org 0x2e918
	ldr r2, [r5, #84]	@ 0002e918 6a6d
.org 0x2e91a
	adds r1, r2, r1	@ 0002e91a 5118
.org 0x2e91c
	ldrh r0, [r6, #4]	@ 0002e91c b088
.org 0x2e91e
	lsls r0, r0, #16	@ 0002e91e 0004
.org 0x2e920
	asrs r0, r0, #17	@ 0002e920 4014
.org 0x2e922
	subs r1, r1, r0	@ 0002e922 091a
.org 0x2e924
	str r1, [sp, #4]	@ 0002e924 0191
.org 0x2e926
	movs r3, #0	@ 0002e926 0023
.org 0x2e928
	ldrsh r1, [r6, r3]	@ 0002e928 f15e
.org 0x2e92a
	adds r2, r2, r1	@ 0002e92a 5218
.org 0x2e92c
	adds r2, r2, r0	@ 0002e92c 1218
.org 0x2e92e
	str r2, [sp, #8]	@ 0002e92e 0292
.org 0x2e930
	movs r4, #0	@ 0002e930 0024
.org 0x2e932
	mov r8, r4	@ 0002e932 a046
.org 0x2e934
	movs r3, #0	@ 0002e934 0023
.org 0x2e936
	movs r6, #0	@ 0002e936 0026
.org 0x2e938
	lsls r0, r6, #2	@ 0002e938 b000
.org 0x2e93a
	add r0, sp	@ 0002e93a 6844
.org 0x2e93c
	ldr r0, [r0, #0]	@ 0002e93c 0068
.org 0x2e93e
	mov r2, sl	@ 0002e93e 5246
.org 0x2e940
	ldr r1, [r2, #8]	@ 0002e940 9168
.org 0x2e942
	str r3, [sp, #32]	@ 0002e942 0893
.org 0x2e944
	bl 0x7d28	@ 0002e944 d9f7f0f9
.org 0x2e948
	lsls r0, r0, #16	@ 0002e948 0004
.org 0x2e94a
	lsrs r2, r0, #16	@ 0002e94a 020c
.org 0x2e94c
	movs r0, #16	@ 0002e94c 1020
.org 0x2e94e
	ands r0, r2	@ 0002e94e 1040
.org 0x2e950
	ldr r3, [sp, #32]	@ 0002e950 089b
.org 0x2e952
	cmp r0, #0	@ 0002e952 0028
.org 0x2e954
	beq.n 0x2e95c	@ 0002e954 02d0
.org 0x2e956
	adds r0, r3, #1	@ 0002e956 581c
.org 0x2e958
	lsls r0, r0, #24	@ 0002e958 0006
.org 0x2e95a
	lsrs r3, r0, #24	@ 0002e95a 030e
.org 0x2e95c
	movs r1, #15	@ 0002e95c 0f21
.org 0x2e95e
	ands r1, r2	@ 0002e95e 1140
.org 0x2e960
	cmp r1, #0	@ 0002e960 0029
.org 0x2e962
	bne.n 0x2e96e	@ 0002e962 04d1
.org 0x2e964
	mov r0, r8	@ 0002e964 4046
.org 0x2e966
	adds r0, #1	@ 0002e966 0130
.org 0x2e968
	lsls r0, r0, #24	@ 0002e968 0006
.org 0x2e96a
	lsrs r0, r0, #24	@ 0002e96a 000e
.org 0x2e96c
	mov r8, r0	@ 0002e96c 8046
.org 0x2e96e
	cmp r1, #15	@ 0002e96e 0f29
.org 0x2e970
	bne.n 0x2e97c	@ 0002e970 04d1
.org 0x2e972
	mov r0, r8	@ 0002e972 4046
.org 0x2e974
	adds r0, #1	@ 0002e974 0130
.org 0x2e976
	lsls r0, r0, #24	@ 0002e976 0006
.org 0x2e978
	lsrs r0, r0, #24	@ 0002e978 000e
.org 0x2e97a
	mov r8, r0	@ 0002e97a 8046
.org 0x2e97c
	adds r0, r6, #1	@ 0002e97c 701c
.org 0x2e97e
	lsls r0, r0, #24	@ 0002e97e 0006
.org 0x2e980
	lsrs r6, r0, #24	@ 0002e980 060e
.org 0x2e982
	cmp r6, #2	@ 0002e982 022e
.org 0x2e984
	bls.n 0x2e938	@ 0002e984 d8d9
.org 0x2e986
	cmp r3, #0	@ 0002e986 002b
.org 0x2e988
	beq.n 0x2e9a8	@ 0002e988 0ed0
.org 0x2e98a
	mov r4, r8	@ 0002e98a 4446
.org 0x2e98c
	adds r0, r3, r4	@ 0002e98c 1819
.org 0x2e98e
	cmp r0, #3	@ 0002e98e 0328
.org 0x2e990
	bne.n 0x2e9a8	@ 0002e990 0ad1
.org 0x2e992
	adds r0, r5, #0	@ 0002e992 281c
.org 0x2e994
	adds r0, #148	@ 0002e994 9430
.org 0x2e996
	ldrb r0, [r0, #0]	@ 0002e996 0078
.org 0x2e998
	cmp r0, #0	@ 0002e998 0028
.org 0x2e99a
	beq.n 0x2ea90	@ 0002e99a 79d0
.org 0x2e99c
	movs r6, #187	@ 0002e99c bb26
.org 0x2e99e
	lsls r6, r6, #1	@ 0002e99e 7600
.org 0x2e9a0
	adds r0, r5, r6	@ 0002e9a0 a819
.org 0x2e9a2
	ldrb r0, [r0, #0]	@ 0002e9a2 0078
.org 0x2e9a4
	cmp r0, #0	@ 0002e9a4 0028
.org 0x2e9a6
	bne.n 0x2ea90	@ 0002e9a6 73d1
.org 0x2e9a8
	ldr r1, [pc, #80]	@ 0002e9a8 1449
.org 0x2e9aa
	adds r0, r5, r1	@ 0002e9aa 6818
.org 0x2e9ac
	ldrb r1, [r0, #0]	@ 0002e9ac 0178
.org 0x2e9ae
	str r0, [sp, #28]	@ 0002e9ae 0790
.org 0x2e9b0
	cmp r1, #0	@ 0002e9b0 0029
.org 0x2e9b2
	beq.n 0x2ea00	@ 0002e9b2 25d0
.org 0x2e9b4
	ldr r0, [sp, #4]	@ 0002e9b4 0198
.org 0x2e9b6
	mov r6, sl	@ 0002e9b6 5646
.org 0x2e9b8
	ldr r1, [sp, #12]	@ 0002e9b8 0399
.org 0x2e9ba
	bl 0x7e98	@ 0002e9ba d9f76dfa
.org 0x2e9be
	movs r4, #1	@ 0002e9be 0124
.org 0x2e9c0
	negs r4, r4	@ 0002e9c0 6442
.org 0x2e9c2
	cmp r0, r4	@ 0002e9c2 a042
.org 0x2e9c4
	beq.n 0x2e9d2	@ 0002e9c4 05d0
.org 0x2e9c6
	ldr r0, [sp, #8]	@ 0002e9c6 0298
.org 0x2e9c8
	ldr r1, [sp, #12]	@ 0002e9c8 0399
.org 0x2e9ca
	bl 0x7e98	@ 0002e9ca d9f765fa
.org 0x2e9ce
	cmp r0, r4	@ 0002e9ce a042
.org 0x2e9d0
	bne.n 0x2ea00	@ 0002e9d0 16d1
.org 0x2e9d2
	ldr r1, [sp, #4]	@ 0002e9d2 0199
.org 0x2e9d4
	ldr r2, [r6, #8]	@ 0002e9d4 b268
.org 0x2e9d6
	adds r2, #1	@ 0002e9d6 0132
.org 0x2e9d8
	adds r0, r5, #0	@ 0002e9d8 281c
.org 0x2e9da
	bl 0x2e1f0	@ 0002e9da fff709fc
.org 0x2e9de
	lsls r0, r0, #16	@ 0002e9de 0004
.org 0x2e9e0
	cmp r0, #0	@ 0002e9e0 0028
.org 0x2e9e2
	bne.n 0x2e9f8	@ 0002e9e2 09d1
.org 0x2e9e4
	ldr r1, [sp, #8]	@ 0002e9e4 0299
.org 0x2e9e6
	mov r3, sl	@ 0002e9e6 5346
.org 0x2e9e8
	ldr r2, [r3, #8]	@ 0002e9e8 9a68
.org 0x2e9ea
	adds r2, #1	@ 0002e9ea 0132
.org 0x2e9ec
	adds r0, r5, #0	@ 0002e9ec 281c
.org 0x2e9ee
	bl 0x2e1f0	@ 0002e9ee fff7fffb
.org 0x2e9f2
	lsls r0, r0, #16	@ 0002e9f2 0004
.org 0x2e9f4
	cmp r0, #0	@ 0002e9f4 0028
.org 0x2e9f6
	beq.n 0x2ea00	@ 0002e9f6 03d0
.org 0x2e9f8
	movs r0, #2	@ 0002e9f8 0220
.org 0x2e9fa
	b.n 0x2ec5e	@ 0002e9fa 30e1
.org 0x2e9fc
	.byte 0xb9,0x01,0x00,0x00	@ 0002e9fc data
.org 0x2ea00
	movs r4, #0	@ 0002ea00 0024
.org 0x2ea02
	movs r3, #0	@ 0002ea02 0023
.org 0x2ea04
	mov r8, r3	@ 0002ea04 9846
.org 0x2ea06
	movs r7, #0	@ 0002ea06 0027
.org 0x2ea08
	movs r6, #0	@ 0002ea08 0026
.org 0x2ea0a
	lsls r0, r6, #2	@ 0002ea0a b000
.org 0x2ea0c
	add r0, sp	@ 0002ea0c 6844
.org 0x2ea0e
	ldr r0, [r0, #0]	@ 0002ea0e 0068
.org 0x2ea10
	ldr r1, [sp, #12]	@ 0002ea10 0399
.org 0x2ea12
	str r3, [sp, #32]	@ 0002ea12 0893
.org 0x2ea14
	bl 0x7d28	@ 0002ea14 d9f788f9
.org 0x2ea18
	lsls r0, r0, #16	@ 0002ea18 0004
.org 0x2ea1a
	lsrs r2, r0, #16	@ 0002ea1a 020c
.org 0x2ea1c
	movs r0, #128	@ 0002ea1c 8020
.org 0x2ea1e
	lsls r0, r0, #3	@ 0002ea1e c000
.org 0x2ea20
	adds r1, r0, #0	@ 0002ea20 011c
.org 0x2ea22
	adds r0, r2, #0	@ 0002ea22 101c
.org 0x2ea24
	ands r0, r1	@ 0002ea24 0840
.org 0x2ea26
	ldr r3, [sp, #32]	@ 0002ea26 089b
.org 0x2ea28
	cmp r0, #0	@ 0002ea28 0028
.org 0x2ea2a
	beq.n 0x2ea32	@ 0002ea2a 02d0
.org 0x2ea2c
	adds r0, r4, #1	@ 0002ea2c 601c
.org 0x2ea2e
	lsls r0, r0, #24	@ 0002ea2e 0006
.org 0x2ea30
	lsrs r4, r0, #24	@ 0002ea30 040e
.org 0x2ea32
	movs r0, #16	@ 0002ea32 1020
.org 0x2ea34
	ands r0, r2	@ 0002ea34 1040
.org 0x2ea36
	cmp r0, #0	@ 0002ea36 0028
.org 0x2ea38
	beq.n 0x2ea40	@ 0002ea38 02d0
.org 0x2ea3a
	adds r0, r3, #1	@ 0002ea3a 581c
.org 0x2ea3c
	lsls r0, r0, #24	@ 0002ea3c 0006
.org 0x2ea3e
	lsrs r3, r0, #24	@ 0002ea3e 030e
.org 0x2ea40
	movs r0, #15	@ 0002ea40 0f20
.org 0x2ea42
	ands r0, r2	@ 0002ea42 1040
.org 0x2ea44
	cmp r0, #0	@ 0002ea44 0028
.org 0x2ea46
	bne.n 0x2ea52	@ 0002ea46 04d1
.org 0x2ea48
	mov r0, r8	@ 0002ea48 4046
.org 0x2ea4a
	adds r0, #1	@ 0002ea4a 0130
.org 0x2ea4c
	lsls r0, r0, #24	@ 0002ea4c 0006
.org 0x2ea4e
	lsrs r0, r0, #24	@ 0002ea4e 000e
.org 0x2ea50
	mov r8, r0	@ 0002ea50 8046
.org 0x2ea52
	movs r1, #128	@ 0002ea52 8021
.org 0x2ea54
	lsls r1, r1, #5	@ 0002ea54 4901
.org 0x2ea56
	adds r0, r1, #0	@ 0002ea56 081c
.org 0x2ea58
	ands r2, r0	@ 0002ea58 0240
.org 0x2ea5a
	cmp r2, #0	@ 0002ea5a 002a
.org 0x2ea5c
	beq.n 0x2ea64	@ 0002ea5c 02d0
.org 0x2ea5e
	adds r0, r7, #1	@ 0002ea5e 781c
.org 0x2ea60
	lsls r0, r0, #24	@ 0002ea60 0006
.org 0x2ea62
	lsrs r7, r0, #24	@ 0002ea62 070e
.org 0x2ea64
	adds r0, r6, #1	@ 0002ea64 701c
.org 0x2ea66
	lsls r0, r0, #24	@ 0002ea66 0006
.org 0x2ea68
	lsrs r6, r0, #24	@ 0002ea68 060e
.org 0x2ea6a
	cmp r6, #2	@ 0002ea6a 022e
.org 0x2ea6c
	bls.n 0x2ea0a	@ 0002ea6c cdd9
.org 0x2ea6e
	cmp r3, #0	@ 0002ea6e 002b
.org 0x2ea70
	beq.n 0x2ea94	@ 0002ea70 10d0
.org 0x2ea72
	mov r2, r8	@ 0002ea72 4246
.org 0x2ea74
	adds r0, r3, r2	@ 0002ea74 9818
.org 0x2ea76
	cmp r0, #3	@ 0002ea76 0328
.org 0x2ea78
	bne.n 0x2ea94	@ 0002ea78 0cd1
.org 0x2ea7a
	adds r0, r5, #0	@ 0002ea7a 281c
.org 0x2ea7c
	adds r0, #148	@ 0002ea7c 9430
.org 0x2ea7e
	ldrb r0, [r0, #0]	@ 0002ea7e 0078
.org 0x2ea80
	cmp r0, #0	@ 0002ea80 0028
.org 0x2ea82
	beq.n 0x2ea90	@ 0002ea82 05d0
.org 0x2ea84
	movs r3, #187	@ 0002ea84 bb23
.org 0x2ea86
	lsls r3, r3, #1	@ 0002ea86 5b00
.org 0x2ea88
	adds r0, r5, r3	@ 0002ea88 e818
.org 0x2ea8a
	ldrb r0, [r0, #0]	@ 0002ea8a 0078
.org 0x2ea8c
	cmp r0, #0	@ 0002ea8c 0028
.org 0x2ea8e
	beq.n 0x2ea94	@ 0002ea8e 01d0
.org 0x2ea90
	movs r0, #1	@ 0002ea90 0120
.org 0x2ea92
	b.n 0x2ec5e	@ 0002ea92 e4e0
.org 0x2ea94
	cmp r4, #0	@ 0002ea94 002c
.org 0x2ea96
	beq.n 0x2eab0	@ 0002ea96 0bd0
.org 0x2ea98
	mov r6, r8	@ 0002ea98 4646
.org 0x2ea9a
	adds r0, r4, r6	@ 0002ea9a a019
.org 0x2ea9c
	cmp r0, #3	@ 0002ea9c 0328
.org 0x2ea9e
	bne.n 0x2eab0	@ 0002ea9e 07d1
.org 0x2eaa0
	ldr r0, [r5, #88]	@ 0002eaa0 a86d
.org 0x2eaa2
	adds r0, #32	@ 0002eaa2 2030
.org 0x2eaa4
	str r0, [r5, #88]	@ 0002eaa4 a865
.org 0x2eaa6
	movs r0, #221	@ 0002eaa6 dd20
.org 0x2eaa8
	lsls r0, r0, #1	@ 0002eaa8 4000
.org 0x2eaaa
	adds r1, r5, r0	@ 0002eaaa 2918
.org 0x2eaac
	movs r0, #1	@ 0002eaac 0120
.org 0x2eaae
	strb r0, [r1, #0]	@ 0002eaae 0870
.org 0x2eab0
	ldr r1, [sp, #24]	@ 0002eab0 0699
.org 0x2eab2
	ldrb r0, [r1, #18]	@ 0002eab2 887c
.org 0x2eab4
	cmp r0, #23	@ 0002eab4 1728
.org 0x2eab6
	beq.n 0x2eb26	@ 0002eab6 36d0
.org 0x2eab8
	ldr r2, [pc, #236]	@ 0002eab8 3b4a
.org 0x2eaba
	adds r0, r5, r2	@ 0002eaba a818
.org 0x2eabc
	ldrh r1, [r0, #0]	@ 0002eabc 0188
.org 0x2eabe
	movs r0, #128	@ 0002eabe 8020
.org 0x2eac0
	lsls r0, r0, #8	@ 0002eac0 0002
.org 0x2eac2
	ands r0, r1	@ 0002eac2 0840
.org 0x2eac4
	cmp r0, #0	@ 0002eac4 0028
.org 0x2eac6
	bne.n 0x2eb26	@ 0002eac6 2ed1
.org 0x2eac8
	cmp r7, #0	@ 0002eac8 002f
.org 0x2eaca
	beq.n 0x2eae2	@ 0002eaca 0ad0
.org 0x2eacc
	mov r3, r8	@ 0002eacc 4346
.org 0x2eace
	adds r0, r7, r3	@ 0002eace f818
.org 0x2ead0
	cmp r0, #3	@ 0002ead0 0328
.org 0x2ead2
	bne.n 0x2eae2	@ 0002ead2 06d1
.org 0x2ead4
	movs r4, #161	@ 0002ead4 a124
.org 0x2ead6
	lsls r4, r4, #1	@ 0002ead6 6400
.org 0x2ead8
	adds r2, r5, r4	@ 0002ead8 2a19
.org 0x2eada
	ldrb r0, [r2, #0]	@ 0002eada 1078
.org 0x2eadc
	movs r1, #32	@ 0002eadc 2021
.org 0x2eade
	orrs r0, r1	@ 0002eade 0843
.org 0x2eae0
	strb r0, [r2, #0]	@ 0002eae0 1070
.org 0x2eae2
	ldr r1, [sp, #4]	@ 0002eae2 0199
.org 0x2eae4
	ldr r2, [sp, #12]	@ 0002eae4 039a
.org 0x2eae6
	adds r0, r5, #0	@ 0002eae6 281c
.org 0x2eae8
	bl 0x2e2d0	@ 0002eae8 fff7f2fb
.org 0x2eaec
	movs r4, #128	@ 0002eaec 8024
.org 0x2eaee
	lsls r4, r4, #5	@ 0002eaee 6401
.org 0x2eaf0
	adds r1, r4, #0	@ 0002eaf0 211c
.org 0x2eaf2
	ands r1, r0	@ 0002eaf2 0140
.org 0x2eaf4
	cmp r1, #0	@ 0002eaf4 0029
.org 0x2eaf6
	beq.n 0x2eb06	@ 0002eaf6 06d0
.org 0x2eaf8
	movs r6, #161	@ 0002eaf8 a126
.org 0x2eafa
	lsls r6, r6, #1	@ 0002eafa 7600
.org 0x2eafc
	adds r2, r5, r6	@ 0002eafc aa19
.org 0x2eafe
	ldrb r0, [r2, #0]	@ 0002eafe 1078
.org 0x2eb00
	movs r1, #32	@ 0002eb00 2021
.org 0x2eb02
	orrs r0, r1	@ 0002eb02 0843
.org 0x2eb04
	strb r0, [r2, #0]	@ 0002eb04 1070
.org 0x2eb06
	ldr r1, [sp, #8]	@ 0002eb06 0299
.org 0x2eb08
	ldr r2, [sp, #12]	@ 0002eb08 039a
.org 0x2eb0a
	adds r0, r5, #0	@ 0002eb0a 281c
.org 0x2eb0c
	bl 0x2e2d0	@ 0002eb0c fff7e0fb
.org 0x2eb10
	adds r1, r4, #0	@ 0002eb10 211c
.org 0x2eb12
	ands r1, r0	@ 0002eb12 0140
.org 0x2eb14
	cmp r1, #0	@ 0002eb14 0029
.org 0x2eb16
	beq.n 0x2eb26	@ 0002eb16 06d0
.org 0x2eb18
	movs r0, #161	@ 0002eb18 a120
.org 0x2eb1a
	lsls r0, r0, #1	@ 0002eb1a 4000
.org 0x2eb1c
	adds r2, r5, r0	@ 0002eb1c 2a18
.org 0x2eb1e
	ldrb r0, [r2, #0]	@ 0002eb1e 1078
.org 0x2eb20
	movs r1, #32	@ 0002eb20 2021
.org 0x2eb22
	orrs r0, r1	@ 0002eb22 0843
.org 0x2eb24
	strb r0, [r2, #0]	@ 0002eb24 1070
.org 0x2eb26
	movs r1, #158	@ 0002eb26 9e21
.org 0x2eb28
	lsls r1, r1, #2	@ 0002eb28 8900
.org 0x2eb2a
	adds r0, r5, r1	@ 0002eb2a 6818
.org 0x2eb2c
	ldrb r0, [r0, #0]	@ 0002eb2c 0078
.org 0x2eb2e
	cmp r0, #0	@ 0002eb2e 0028
.org 0x2eb30
	beq.n 0x2eb40	@ 0002eb30 06d0
.org 0x2eb32
	movs r3, #161	@ 0002eb32 a123
.org 0x2eb34
	lsls r3, r3, #1	@ 0002eb34 5b00
.org 0x2eb36
	adds r2, r5, r3	@ 0002eb36 ea18
.org 0x2eb38
	ldrb r0, [r2, #0]	@ 0002eb38 1078
.org 0x2eb3a
	movs r1, #32	@ 0002eb3a 2021
.org 0x2eb3c
	orrs r0, r1	@ 0002eb3c 0843
.org 0x2eb3e
	strb r0, [r2, #0]	@ 0002eb3e 1070
.org 0x2eb40
	ldr r4, [sp, #28]	@ 0002eb40 079c
.org 0x2eb42
	ldrb r0, [r4, #0]	@ 0002eb42 2078
.org 0x2eb44
	movs r6, #222	@ 0002eb44 de26
.org 0x2eb46
	lsls r6, r6, #1	@ 0002eb46 7600
.org 0x2eb48
	adds r6, r6, r5	@ 0002eb48 7619
.org 0x2eb4a
	mov r8, r6	@ 0002eb4a b046
.org 0x2eb4c
	cmp r0, #0	@ 0002eb4c 0028
.org 0x2eb4e
	beq.n 0x2ebbe	@ 0002eb4e 36d0
.org 0x2eb50
	movs r6, #0	@ 0002eb50 0026
.org 0x2eb52
	ldr r7, [pc, #88]	@ 0002eb52 164f
.org 0x2eb54
	lsls r0, r6, #2	@ 0002eb54 b000
.org 0x2eb56
	mov r1, sp	@ 0002eb56 6946
.org 0x2eb58
	adds r4, r1, r0	@ 0002eb58 0c18
.org 0x2eb5a
	ldr r0, [r4, #0]	@ 0002eb5a 2068
.org 0x2eb5c
	ldr r1, [sp, #12]	@ 0002eb5c 0399
.org 0x2eb5e
	bl 0x7020	@ 0002eb5e d8f75ffa
.org 0x2eb62
	lsls r0, r0, #16	@ 0002eb62 0004
.org 0x2eb64
	movs r1, #192	@ 0002eb64 c021
.org 0x2eb66
	lsls r1, r1, #23	@ 0002eb66 c905
.org 0x2eb68
	ands r1, r0	@ 0002eb68 0140
.org 0x2eb6a
	cmp r1, #0	@ 0002eb6a 0029
.org 0x2eb6c
	beq.n 0x2ebb4	@ 0002eb6c 22d0
.org 0x2eb6e
	ldr r0, [r4, #0]	@ 0002eb6e 2068
.org 0x2eb70
	ands r0, r7	@ 0002eb70 3840
.org 0x2eb72
	movs r2, #128	@ 0002eb72 8022
.org 0x2eb74
	lsls r2, r2, #4	@ 0002eb74 1201
.org 0x2eb76
	adds r0, r0, r2	@ 0002eb76 8018
.org 0x2eb78
	ldr r1, [sp, #12]	@ 0002eb78 0399
.org 0x2eb7a
	ands r1, r7	@ 0002eb7a 3940
.org 0x2eb7c
	ldr r3, [pc, #48]	@ 0002eb7c 0c4b
.org 0x2eb7e
	adds r1, r1, r3	@ 0002eb7e c918
.org 0x2eb80
	bl 0x8b7c	@ 0002eb80 d9f7fcff
.org 0x2eb84
	ldr r1, [r5, #84]	@ 0002eb84 696d
.org 0x2eb86
	adds r0, r1, r0	@ 0002eb86 0818
.org 0x2eb88
	str r0, [r5, #84]	@ 0002eb88 6865
.org 0x2eb8a
	cmp r6, #0	@ 0002eb8a 002e
.org 0x2eb8c
	bne.n 0x2ebbe	@ 0002eb8c 17d1
.org 0x2eb8e
	ldr r1, [r5, #88]	@ 0002eb8e a96d
.org 0x2eb90
	bl 0x7e98	@ 0002eb90 d9f782f9
.org 0x2eb94
	cmp r0, #0	@ 0002eb94 0028
.org 0x2eb96
	bge.n 0x2ebbe	@ 0002eb96 12da
.org 0x2eb98
	ldr r0, [r5, #84]	@ 0002eb98 686d
.org 0x2eb9a
	ldr r1, [r5, #88]	@ 0002eb9a a96d
.org 0x2eb9c
	bl 0x7e98	@ 0002eb9c d9f77cf9
.org 0x2eba0
	ldr r1, [r5, #88]	@ 0002eba0 a96d
.org 0x2eba2
	adds r1, r1, r0	@ 0002eba2 0918
.org 0x2eba4
	str r1, [r5, #88]	@ 0002eba4 a965
.org 0x2eba6
	b.n 0x2ebbe	@ 0002eba6 0ae0
.org 0x2eba8
	.byte 0x52,0x02,0x00,0x00	@ 0002eba8 data
.org 0x2ebac
	.byte 0x00,0xf0,0xff,0xff	@ 0002ebac data
.org 0x2ebb0
	.byte 0xff,0x0f,0x00,0x00	@ 0002ebb0 data
.org 0x2ebb4
	adds r0, r6, #1	@ 0002ebb4 701c
.org 0x2ebb6
	lsls r0, r0, #24	@ 0002ebb6 0006
.org 0x2ebb8
	lsrs r6, r0, #24	@ 0002ebb8 060e
.org 0x2ebba
	cmp r6, #2	@ 0002ebba 022e
.org 0x2ebbc
	bls.n 0x2eb54	@ 0002ebbc cad9
.org 0x2ebbe
	ldrb r1, [r5, #10]	@ 0002ebbe a97a
.org 0x2ebc0
	movs r0, #16	@ 0002ebc0 1020
.org 0x2ebc2
	ands r0, r1	@ 0002ebc2 0840
.org 0x2ebc4
	cmp r0, #0	@ 0002ebc4 0028
.org 0x2ebc6
	beq.n 0x2ebe6	@ 0002ebc6 0ed0
.org 0x2ebc8
	mov r4, r9	@ 0002ebc8 4c46
.org 0x2ebca
	movs r6, #0	@ 0002ebca 0026
.org 0x2ebcc
	ldrsh r0, [r4, r6]	@ 0002ebcc a05f
.org 0x2ebce
	ldr r2, [r5, #84]	@ 0002ebce 6a6d
.org 0x2ebd0
	subs r0, r2, r0	@ 0002ebd0 101a
.org 0x2ebd2
	ldrh r1, [r4, #4]	@ 0002ebd2 a188
.org 0x2ebd4
	lsls r1, r1, #16	@ 0002ebd4 0904
.org 0x2ebd6
	asrs r1, r1, #17	@ 0002ebd6 4914
.org 0x2ebd8
	adds r0, r0, r1	@ 0002ebd8 4018
.org 0x2ebda
	adds r0, #1	@ 0002ebda 0130
.org 0x2ebdc
	str r0, [sp, #4]	@ 0002ebdc 0190
.org 0x2ebde
	movs r3, #0	@ 0002ebde 0023
.org 0x2ebe0
	ldrsh r0, [r4, r3]	@ 0002ebe0 e05e
.org 0x2ebe2
	subs r0, r2, r0	@ 0002ebe2 101a
.org 0x2ebe4
	b.n 0x2ec02	@ 0002ebe4 0de0
.org 0x2ebe6
	mov r4, r9	@ 0002ebe6 4c46
.org 0x2ebe8
	movs r6, #0	@ 0002ebe8 0026
.org 0x2ebea
	ldrsh r0, [r4, r6]	@ 0002ebea a05f
.org 0x2ebec
	ldr r2, [r5, #84]	@ 0002ebec 6a6d
.org 0x2ebee
	adds r0, r2, r0	@ 0002ebee 1018
.org 0x2ebf0
	ldrh r1, [r4, #4]	@ 0002ebf0 a188
.org 0x2ebf2
	lsls r1, r1, #16	@ 0002ebf2 0904
.org 0x2ebf4
	asrs r1, r1, #17	@ 0002ebf4 4914
.org 0x2ebf6
	adds r0, r0, r1	@ 0002ebf6 4018
.org 0x2ebf8
	adds r0, #1	@ 0002ebf8 0130
.org 0x2ebfa
	str r0, [sp, #4]	@ 0002ebfa 0190
.org 0x2ebfc
	movs r3, #0	@ 0002ebfc 0023
.org 0x2ebfe
	ldrsh r0, [r4, r3]	@ 0002ebfe e05e
.org 0x2ec00
	adds r0, r2, r0	@ 0002ec00 1018
.org 0x2ec02
	subs r0, r0, r1	@ 0002ec02 401a
.org 0x2ec04
	subs r0, #1	@ 0002ec04 0138
.org 0x2ec06
	str r0, [sp, #8]	@ 0002ec06 0290
.org 0x2ec08
	ldr r4, [sp, #24]	@ 0002ec08 069c
.org 0x2ec0a
	ldrb r0, [r4, #18]	@ 0002ec0a a07c
.org 0x2ec0c
	cmp r0, #24	@ 0002ec0c 1828
.org 0x2ec0e
	bne.n 0x2ec20	@ 0002ec0e 07d1
.org 0x2ec10
	ldr r6, [sp, #28]	@ 0002ec10 079e
.org 0x2ec12
	ldrb r0, [r6, #0]	@ 0002ec12 3078
.org 0x2ec14
	cmp r0, #0	@ 0002ec14 0028
.org 0x2ec16
	beq.n 0x2ec20	@ 0002ec16 03d0
.org 0x2ec18
	movs r0, #0	@ 0002ec18 0020
.org 0x2ec1a
	mov r1, r8	@ 0002ec1a 4146
.org 0x2ec1c
	str r0, [r1, #0]	@ 0002ec1c 0860
.org 0x2ec1e
	b.n 0x2ec5c	@ 0002ec1e 1de0
.org 0x2ec20
	mov r3, r8	@ 0002ec20 4346
.org 0x2ec22
	ldr r0, [r3, #0]	@ 0002ec22 1868
.org 0x2ec24
	cmp r0, #0	@ 0002ec24 0028
.org 0x2ec26
	beq.n 0x2ec5c	@ 0002ec26 19d0
.org 0x2ec28
	adds r0, r2, r0	@ 0002ec28 1018
.org 0x2ec2a
	str r0, [r5, #84]	@ 0002ec2a 6865
.org 0x2ec2c
	ldr r0, [r3, #0]	@ 0002ec2c 1868
.org 0x2ec2e
	cmp r0, #0	@ 0002ec2e 0028
.org 0x2ec30
	ble.n 0x2ec42	@ 0002ec30 07dd
.org 0x2ec32
	ldr r0, [sp, #4]	@ 0002ec32 0198
.org 0x2ec34
	ldr r1, [r5, #88]	@ 0002ec34 a96d
.org 0x2ec36
	bl 0x8264	@ 0002ec36 d9f715fb
.org 0x2ec3a
	adds r1, r0, #0	@ 0002ec3a 011c
.org 0x2ec3c
	cmp r1, #0	@ 0002ec3c 0029
.org 0x2ec3e
	bge.n 0x2ec56	@ 0002ec3e 0ada
.org 0x2ec40
	b.n 0x2ec50	@ 0002ec40 06e0
.org 0x2ec42
	ldr r0, [sp, #8]	@ 0002ec42 0298
.org 0x2ec44
	ldr r1, [r5, #88]	@ 0002ec44 a96d
.org 0x2ec46
	bl 0x8448	@ 0002ec46 d9f7fffb
.org 0x2ec4a
	adds r1, r0, #0	@ 0002ec4a 011c
.org 0x2ec4c
	cmp r1, #0	@ 0002ec4c 0029
.org 0x2ec4e
	ble.n 0x2ec56	@ 0002ec4e 02dd
.org 0x2ec50
	ldr r0, [r5, #84]	@ 0002ec50 686d
.org 0x2ec52
	adds r0, r0, r1	@ 0002ec52 4018
.org 0x2ec54
	str r0, [r5, #84]	@ 0002ec54 6865
.org 0x2ec56
	movs r0, #0	@ 0002ec56 0020
.org 0x2ec58
	mov r4, r8	@ 0002ec58 4446
.org 0x2ec5a
	str r0, [r4, #0]	@ 0002ec5a 2060
.org 0x2ec5c
	movs r0, #0	@ 0002ec5c 0020
