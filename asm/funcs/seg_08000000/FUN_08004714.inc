@ FUN_08004714  entry 0x08004714  size 714
.thumb
.org 0x4714
FUN_08004714:
	push {r4, r5, r6, r7, lr}	@ 00004714 f0b5
.org 0x4716
	mov r7, sl	@ 00004716 5746
.org 0x4718
	mov r6, r9	@ 00004718 4e46
.org 0x471a
	mov r5, r8	@ 0000471a 4546
.org 0x471c
	push {r5, r6, r7}	@ 0000471c e0b4
.org 0x471e
	sub sp, #64	@ 0000471e 90b0
.org 0x4720
	str r0, [sp, #0]	@ 00004720 0090
.org 0x4722
	adds r5, r1, #0	@ 00004722 0d1c
.org 0x4724
	str r2, [sp, #4]	@ 00004724 0192
.org 0x4726
	ldr r0, [sp, #96]	@ 00004726 1898
.org 0x4728
	ldr r2, [sp, #100]	@ 00004728 199a
.org 0x472a
	ldr r4, [r5, #0]	@ 0000472a 2c68
.org 0x472c
	ldr r1, [sp, #0]	@ 0000472c 0099
.org 0x472e
	str r4, [r1, #0]	@ 0000472e 0c60
.org 0x4730
	ldr r1, [r5, #4]	@ 00004730 6968
.org 0x4732
	ldr r6, [sp, #0]	@ 00004732 009e
.org 0x4734
	str r1, [r6, #4]	@ 00004734 7160
.org 0x4736
	str r3, [r6, #12]	@ 00004736 f360
.org 0x4738
	str r0, [r6, #16]	@ 00004738 3061
.org 0x473a
	str r2, [r6, #20]	@ 0000473a 7261
.org 0x473c
	ldr r2, [pc, #20]	@ 0000473c 054a
.org 0x473e
	adds r0, r4, #0	@ 0000473e 201c
.org 0x4740
	ands r0, r2	@ 00004740 1040
.org 0x4742
	strh r0, [r6, #8]	@ 00004742 3081
.org 0x4744
	ands r1, r2	@ 00004744 1140
.org 0x4746
	strh r1, [r6, #10]	@ 00004746 7181
.org 0x4748
	subs r4, #16	@ 00004748 103c
.org 0x474a
	cmp r4, #0	@ 0000474a 002c
.org 0x474c
	ble.n 0x4758	@ 0000474c 04dd
.org 0x474e
	str r4, [sp, #12]	@ 0000474e 0394
.org 0x4750
	b.n 0x475c	@ 00004750 04e0
.org 0x4752
	.byte 0x00	@ 00004752 data
.org 0x4753
	.byte 0x00	@ 00004753 data
.org 0x4754
	.byte 0xff,0x01,0x00,0x00	@ 00004754 data
.org 0x4758
	movs r0, #0	@ 00004758 0020
.org 0x475a
	str r0, [sp, #12]	@ 0000475a 0390
.org 0x475c
	ldr r0, [r5, #4]	@ 0000475c 6868
.org 0x475e
	subs r0, #16	@ 0000475e 1038
.org 0x4760
	cmp r0, #0	@ 00004760 0028
.org 0x4762
	ble.n 0x4768	@ 00004762 01dd
.org 0x4764
	str r0, [sp, #16]	@ 00004764 0490
.org 0x4766
	b.n 0x476c	@ 00004766 01e0
.org 0x4768
	movs r1, #0	@ 00004768 0021
.org 0x476a
	str r1, [sp, #16]	@ 0000476a 0491
.org 0x476c
	ldr r0, [sp, #12]	@ 0000476c 0398
.org 0x476e
	movs r1, #240	@ 0000476e f021
.org 0x4770
	bl 0x128fb8	@ 00004770 24f122fc
.org 0x4774
	adds r4, r0, #0	@ 00004774 041c
.org 0x4776
	adds r4, #4	@ 00004776 0434
.org 0x4778
	ldr r2, [sp, #0]	@ 00004778 009a
.org 0x477a
	ldr r6, [r2, #20]	@ 0000477a 5669
.org 0x477c
	adds r4, r6, r4	@ 0000477c 3419
.org 0x477e
	ldr r5, [sp, #16]	@ 0000477e 049d
.org 0x4780
	adds r0, r5, #0	@ 00004780 281c
.org 0x4782
	movs r1, #160	@ 00004782 a021
.org 0x4784
	bl 0x128fb8	@ 00004784 24f118fc
.org 0x4788
	ldrb r1, [r6, #0]	@ 00004788 3178
.org 0x478a
	muls r0, r1	@ 0000478a 4843
.org 0x478c
	adds r4, r4, r0	@ 0000478c 2418
.org 0x478e
	str r4, [sp, #8]	@ 0000478e 0294
.org 0x4790
	ldr r0, [sp, #12]	@ 00004790 0398
.org 0x4792
	movs r1, #240	@ 00004792 f021
.org 0x4794
	bl 0x129050	@ 00004794 24f15cfc
.org 0x4798
	adds r4, r0, #0	@ 00004798 041c
.org 0x479a
	lsls r4, r4, #12	@ 0000479a 2403
.org 0x479c
	lsrs r4, r4, #16	@ 0000479c 240c
.org 0x479e
	adds r0, r5, #0	@ 0000479e 281c
.org 0x47a0
	movs r1, #160	@ 000047a0 a021
.org 0x47a2
	bl 0x129050	@ 000047a2 24f155fc
.org 0x47a6
	lsls r0, r0, #12	@ 000047a6 0003
.org 0x47a8
	ldr r3, [sp, #8]	@ 000047a8 029b
.org 0x47aa
	ldrb r2, [r3, #0]	@ 000047aa 1a78
.org 0x47ac
	lsls r1, r2, #2	@ 000047ac 9100
.org 0x47ae
	adds r1, r1, r2	@ 000047ae 8918
.org 0x47b0
	lsls r2, r1, #4	@ 000047b0 0a01
.org 0x47b2
	subs r2, r2, r1	@ 000047b2 521a
.org 0x47b4
	lsls r2, r2, #2	@ 000047b4 9200
.org 0x47b6
	ldr r1, [sp, #0]	@ 000047b6 0099
.org 0x47b8
	ldr r3, [r1, #16]	@ 000047b8 0b69
.org 0x47ba
	adds r2, r3, r2	@ 000047ba 9a18
.org 0x47bc
	lsls r4, r4, #16	@ 000047bc 2404
.org 0x47be
	asrs r4, r4, #16	@ 000047be 2414
.org 0x47c0
	lsls r5, r4, #1	@ 000047c0 6500
.org 0x47c2
	adds r2, r2, r5	@ 000047c2 5219
.org 0x47c4
	asrs r0, r0, #16	@ 000047c4 0014
.org 0x47c6
	lsls r1, r0, #4	@ 000047c6 0101
.org 0x47c8
	subs r1, r1, r0	@ 000047c8 091a
.org 0x47ca
	lsls r1, r1, #1	@ 000047ca 4900
.org 0x47cc
	adds r7, r2, r1	@ 000047cc 5718
.org 0x47ce
	ldr r2, [sp, #12]	@ 000047ce 039a
.org 0x47d0
	asrs r2, r2, #4	@ 000047d0 1211
.org 0x47d2
	str r2, [sp, #12]	@ 000047d2 0392
.org 0x47d4
	ldr r1, [sp, #16]	@ 000047d4 0499
.org 0x47d6
	asrs r1, r1, #4	@ 000047d6 0911
.org 0x47d8
	str r1, [sp, #16]	@ 000047d8 0491
.org 0x47da
	movs r2, #0	@ 000047da 0022
.org 0x47dc
	mov r9, r2	@ 000047dc 9146
.org 0x47de
	movs r1, #0	@ 000047de 0021
.org 0x47e0
	str r1, [sp, #20]	@ 000047e0 0591
.org 0x47e2
	mov r8, r1	@ 000047e2 8846
.org 0x47e4
	str r6, [sp, #48]	@ 000047e4 0c96
.org 0x47e6
	str r3, [sp, #44]	@ 000047e6 0b93
.org 0x47e8
	str r0, [sp, #28]	@ 000047e8 0790
.org 0x47ea
	movs r0, #10	@ 000047ea 0a20
.org 0x47ec
	ldr r3, [sp, #28]	@ 000047ec 079b
.org 0x47ee
	subs r0, r0, r3	@ 000047ee c01a
.org 0x47f0
	str r0, [sp, #32]	@ 000047f0 0890
.org 0x47f2
	str r4, [sp, #36]	@ 000047f2 0994
.org 0x47f4
	str r5, [sp, #24]	@ 000047f4 0695
.org 0x47f6
	movs r6, #15	@ 000047f6 0f26
.org 0x47f8
	subs r4, r6, r4	@ 000047f8 341b
.org 0x47fa
	str r4, [sp, #40]	@ 000047fa 0a94
.org 0x47fc
	movs r1, #0	@ 000047fc 0021
.org 0x47fe
	mov r0, r9	@ 000047fe 4846
.org 0x4800
	lsls r0, r0, #16	@ 00004800 0004
.org 0x4802
	str r0, [sp, #56]	@ 00004802 0e90
.org 0x4804
	lsls r2, r2, #16	@ 00004804 1204
.org 0x4806
	str r2, [sp, #60]	@ 00004806 0f92
.org 0x4808
	asrs r2, r2, #16	@ 00004808 1214
.org 0x480a
	mov sl, r2	@ 0000480a 9246
.org 0x480c
	ldr r2, [sp, #56]	@ 0000480c 0e9a
.org 0x480e
	lsrs r2, r2, #16	@ 0000480e 120c
.org 0x4810
	mov ip, r2	@ 00004810 9446
.org 0x4812
	lsls r1, r1, #16	@ 00004812 0904
.org 0x4814
	mov r9, r1	@ 00004814 8946
.org 0x4816
	mov r3, sl	@ 00004816 5346
.org 0x4818
	cmp r3, #0	@ 00004818 002b
.org 0x481a
	bne.n 0x482c	@ 0000481a 07d1
.org 0x481c
	lsls r0, r2, #16	@ 0000481c 1004
.org 0x481e
	asrs r1, r0, #16	@ 0000481e 0114
.org 0x4820
	adds r2, r0, #0	@ 00004820 021c
.org 0x4822
	ldr r4, [sp, #32]	@ 00004822 089c
.org 0x4824
	cmp r1, r4	@ 00004824 a142
.org 0x4826
	blt.n 0x482a	@ 00004826 00db
.org 0x4828
	b.n 0x4940	@ 00004828 8ae0
.org 0x482a
	b.n 0x485a	@ 0000482a 16e0
.org 0x482c
	mov r6, sl	@ 0000482c 5646
.org 0x482e
	cmp r6, #1	@ 0000482e 012e
.org 0x4830
	bne.n 0x484e	@ 00004830 0dd1
.org 0x4832
	mov r1, ip	@ 00004832 6146
.org 0x4834
	lsls r0, r1, #16	@ 00004834 0804
.org 0x4836
	asrs r1, r0, #16	@ 00004836 0114
.org 0x4838
	adds r2, r0, #0	@ 00004838 021c
.org 0x483a
	cmp r1, #12	@ 0000483a 0c29
.org 0x483c
	ble.n 0x4840	@ 0000483c 00dd
.org 0x483e
	b.n 0x4940	@ 0000483e 7fe0
.org 0x4840
	adds r0, r1, #0	@ 00004840 081c
.org 0x4842
	subs r0, #10	@ 00004842 0a38
.org 0x4844
	ldr r3, [sp, #28]	@ 00004844 079b
.org 0x4846
	adds r0, r0, r3	@ 00004846 c018
.org 0x4848
	cmp r0, #9	@ 00004848 0928
.org 0x484a
	bgt.n 0x4940	@ 0000484a 79dc
.org 0x484c
	b.n 0x485a	@ 0000484c 05e0
.org 0x484e
	mov r4, ip	@ 0000484e 6446
.org 0x4850
	lsls r0, r4, #16	@ 00004850 2004
.org 0x4852
	asrs r1, r0, #16	@ 00004852 0114
.org 0x4854
	adds r2, r0, #0	@ 00004854 021c
.org 0x4856
	cmp r1, #12	@ 00004856 0c29
.org 0x4858
	bgt.n 0x4940	@ 00004858 72dc
.org 0x485a
	asrs r0, r2, #16	@ 0000485a 1014
.org 0x485c
	ldr r1, [sp, #16]	@ 0000485c 0499
.org 0x485e
	adds r6, r1, r0	@ 0000485e 0e18
.org 0x4860
	movs r0, #31	@ 00004860 1f20
.org 0x4862
	ands r6, r0	@ 00004862 0640
.org 0x4864
	ldr r2, [sp, #20]	@ 00004864 059a
.org 0x4866
	lsls r0, r2, #16	@ 00004866 1004
.org 0x4868
	lsrs r3, r0, #16	@ 00004868 030c
.org 0x486a
	mov r8, r3	@ 0000486a 9846
.org 0x486c
	str r0, [sp, #52]	@ 0000486c 0d90
.org 0x486e
	mov r4, r9	@ 0000486e 4c46
.org 0x4870
	cmp r4, #0	@ 00004870 002c
.org 0x4872
	bne.n 0x4880	@ 00004872 05d1
.org 0x4874
	lsls r0, r3, #16	@ 00004874 1804
.org 0x4876
	asrs r0, r0, #16	@ 00004876 0014
.org 0x4878
	ldr r1, [sp, #40]	@ 00004878 0a99
.org 0x487a
	cmp r0, r1	@ 0000487a 8842
.org 0x487c
	bge.n 0x490a	@ 0000487c 45da
.org 0x487e
	b.n 0x48a8	@ 0000487e 13e0
.org 0x4880
	mov r2, r9	@ 00004880 4a46
.org 0x4882
	asrs r0, r2, #16	@ 00004882 1014
.org 0x4884
	cmp r0, #1	@ 00004884 0128
.org 0x4886
	bne.n 0x489e	@ 00004886 0ad1
.org 0x4888
	mov r3, r8	@ 00004888 4346
.org 0x488a
	lsls r0, r3, #16	@ 0000488a 1804
.org 0x488c
	asrs r0, r0, #16	@ 0000488c 0014
.org 0x488e
	cmp r0, #19	@ 0000488e 1328
.org 0x4890
	bgt.n 0x490a	@ 00004890 3bdc
.org 0x4892
	subs r0, #15	@ 00004892 0f38
.org 0x4894
	ldr r4, [sp, #36]	@ 00004894 099c
.org 0x4896
	adds r0, r0, r4	@ 00004896 0019
.org 0x4898
	cmp r0, #14	@ 00004898 0e28
.org 0x489a
	bgt.n 0x490a	@ 0000489a 36dc
.org 0x489c
	b.n 0x48a8	@ 0000489c 04e0
.org 0x489e
	mov r1, r8	@ 0000489e 4146
.org 0x48a0
	lsls r0, r1, #16	@ 000048a0 0804
.org 0x48a2
	asrs r0, r0, #16	@ 000048a2 0014
.org 0x48a4
	cmp r0, #19	@ 000048a4 1328
.org 0x48a6
	bgt.n 0x490a	@ 000048a6 30dc
.org 0x48a8
	mov r2, r8	@ 000048a8 4246
.org 0x48aa
	lsls r5, r2, #16	@ 000048aa 1504
.org 0x48ac
	asrs r5, r5, #16	@ 000048ac 2d14
.org 0x48ae
	ldr r3, [sp, #12]	@ 000048ae 039b
.org 0x48b0
	adds r1, r3, r5	@ 000048b0 5919
.org 0x48b2
	movs r2, #31	@ 000048b2 1f22
.org 0x48b4
	ldrh r0, [r7, #0]	@ 000048b4 3888
.org 0x48b6
	lsls r0, r0, #3	@ 000048b6 c000
.org 0x48b8
	ldr r4, [sp, #0]	@ 000048b8 009c
.org 0x48ba
	ldr r3, [r4, #12]	@ 000048ba e368
.org 0x48bc
	adds r3, r3, r0	@ 000048bc 1b18
.org 0x48be
	ands r1, r2	@ 000048be 1140
.org 0x48c0
	lsls r4, r6, #7	@ 000048c0 f401
.org 0x48c2
	lsls r1, r1, #1	@ 000048c2 4900
.org 0x48c4
	ldr r0, [sp, #4]	@ 000048c4 0198
.org 0x48c6
	adds r1, r1, r0	@ 000048c6 0918
.org 0x48c8
	adds r4, r4, r1	@ 000048c8 6418
.org 0x48ca
	ldrh r0, [r3, #0]	@ 000048ca 1888
.org 0x48cc
	movs r1, #255	@ 000048cc ff21
.org 0x48ce
	ands r1, r0	@ 000048ce 0140
.org 0x48d0
	ldrh r2, [r3, #2]	@ 000048d0 5a88
.org 0x48d2
	movs r0, #255	@ 000048d2 ff20
.org 0x48d4
	ands r0, r2	@ 000048d4 1040
.org 0x48d6
	lsls r0, r0, #8	@ 000048d6 0002
.org 0x48d8
	orrs r1, r0	@ 000048d8 0143
.org 0x48da
	strh r1, [r4, #0]	@ 000048da 2180
.org 0x48dc
	adds r4, #64	@ 000048dc 4034
.org 0x48de
	ldrh r0, [r3, #4]	@ 000048de 9888
.org 0x48e0
	movs r1, #255	@ 000048e0 ff21
.org 0x48e2
	ands r1, r0	@ 000048e2 0140
.org 0x48e4
	ldrh r2, [r3, #6]	@ 000048e4 da88
.org 0x48e6
	movs r0, #255	@ 000048e6 ff20
.org 0x48e8
	ands r0, r2	@ 000048e8 1040
.org 0x48ea
	lsls r0, r0, #8	@ 000048ea 0002
.org 0x48ec
	orrs r1, r0	@ 000048ec 0143
.org 0x48ee
	strh r1, [r4, #0]	@ 000048ee 2180
.org 0x48f0
	adds r7, #2	@ 000048f0 0237
.org 0x48f2
	adds r5, #1	@ 000048f2 0135
.org 0x48f4
	lsls r5, r5, #16	@ 000048f4 2d04
.org 0x48f6
	lsrs r5, r5, #16	@ 000048f6 2d0c
.org 0x48f8
	mov r8, r5	@ 000048f8 a846
.org 0x48fa
	mov r1, r9	@ 000048fa 4946
.org 0x48fc
	cmp r1, #0	@ 000048fc 0029
.org 0x48fe
	bne.n 0x4880	@ 000048fe bfd1
.org 0x4900
	lsls r0, r5, #16	@ 00004900 2804
.org 0x4902
	asrs r0, r0, #16	@ 00004902 0014
.org 0x4904
	ldr r2, [sp, #40]	@ 00004904 0a9a
.org 0x4906
	cmp r0, r2	@ 00004906 9042
.org 0x4908
	blt.n 0x48a8	@ 00004908 cedb
.org 0x490a
	mov r3, r8	@ 0000490a 4346
.org 0x490c
	lsls r0, r3, #16	@ 0000490c 1804
.org 0x490e
	asrs r0, r0, #16	@ 0000490e 0014
.org 0x4910
	ldr r4, [sp, #52]	@ 00004910 0d9c
.org 0x4912
	asrs r1, r4, #16	@ 00004912 2114
.org 0x4914
	subs r0, r0, r1	@ 00004914 401a
.org 0x4916
	movs r6, #15	@ 00004916 0f26
.org 0x4918
	subs r0, r6, r0	@ 00004918 301a
.org 0x491a
	lsls r0, r0, #1	@ 0000491a 4000
.org 0x491c
	adds r7, r7, r0	@ 0000491c 3f18
.org 0x491e
	mov r1, ip	@ 0000491e 6146
.org 0x4920
	lsls r0, r1, #16	@ 00004920 0804
.org 0x4922
	movs r2, #128	@ 00004922 8022
.org 0x4924
	lsls r2, r2, #9	@ 00004924 5202
.org 0x4926
	adds r0, r0, r2	@ 00004926 8018
.org 0x4928
	lsrs r0, r0, #16	@ 00004928 000c
.org 0x492a
	mov ip, r0	@ 0000492a 8446
.org 0x492c
	mov r3, sl	@ 0000492c 5346
.org 0x492e
	cmp r3, #0	@ 0000492e 002b
.org 0x4930
	beq.n 0x4934	@ 00004930 00d0
.org 0x4932
	b.n 0x482c	@ 00004932 7be7
.org 0x4934
	lsls r0, r0, #16	@ 00004934 0004
.org 0x4936
	asrs r1, r0, #16	@ 00004936 0114
.org 0x4938
	adds r2, r0, #0	@ 00004938 021c
.org 0x493a
	ldr r4, [sp, #32]	@ 0000493a 089c
.org 0x493c
	cmp r1, r4	@ 0000493c a142
.org 0x493e
	blt.n 0x485a	@ 0000493e 8cdb
.org 0x4940
	mov r6, r8	@ 00004940 4646
.org 0x4942
	str r6, [sp, #20]	@ 00004942 0596
.org 0x4944
	mov r1, r9	@ 00004944 4946
.org 0x4946
	asrs r0, r1, #16	@ 00004946 0814
.org 0x4948
	cmp r0, #2	@ 00004948 0228
.org 0x494a
	beq.n 0x4996	@ 0000494a 24d0
.org 0x494c
	ldr r3, [sp, #8]	@ 0000494c 029b
.org 0x494e
	adds r3, #1	@ 0000494e 0133
.org 0x4950
	str r3, [sp, #8]	@ 00004950 0293
.org 0x4952
	mov r4, sl	@ 00004952 5446
.org 0x4954
	cmp r4, #0	@ 00004954 002c
.org 0x4956
	bne.n 0x4974	@ 00004956 0dd1
.org 0x4958
	ldrb r1, [r3, #0]	@ 00004958 1978
.org 0x495a
	lsls r0, r1, #2	@ 0000495a 8800
.org 0x495c
	adds r0, r0, r1	@ 0000495c 4018
.org 0x495e
	lsls r1, r0, #4	@ 0000495e 0101
.org 0x4960
	subs r1, r1, r0	@ 00004960 091a
.org 0x4962
	lsls r1, r1, #2	@ 00004962 8900
.org 0x4964
	ldr r6, [sp, #44]	@ 00004964 0b9e
.org 0x4966
	adds r1, r6, r1	@ 00004966 7118
.org 0x4968
	ldr r3, [sp, #28]	@ 00004968 079b
.org 0x496a
	lsls r0, r3, #4	@ 0000496a 1801
.org 0x496c
	subs r0, r0, r3	@ 0000496c c01a
.org 0x496e
	lsls r0, r0, #1	@ 0000496e 4000
.org 0x4970
	adds r7, r1, r0	@ 00004970 0f18
.org 0x4972
	b.n 0x4986	@ 00004972 08e0
.org 0x4974
	ldr r4, [sp, #8]	@ 00004974 029c
.org 0x4976
	ldrb r0, [r4, #0]	@ 00004976 2078
.org 0x4978
	lsls r1, r0, #2	@ 00004978 8100
.org 0x497a
	adds r1, r1, r0	@ 0000497a 0918
.org 0x497c
	lsls r0, r1, #4	@ 0000497c 0801
.org 0x497e
	subs r0, r0, r1	@ 0000497e 401a
.org 0x4980
	lsls r0, r0, #2	@ 00004980 8000
.org 0x4982
	ldr r6, [sp, #44]	@ 00004982 0b9e
.org 0x4984
	adds r7, r6, r0	@ 00004984 3718
.org 0x4986
	movs r0, #128	@ 00004986 8020
.org 0x4988
	lsls r0, r0, #9	@ 00004988 4002
.org 0x498a
	add r0, r9	@ 0000498a 4844
.org 0x498c
	lsrs r1, r0, #16	@ 0000498c 010c
.org 0x498e
	asrs r0, r0, #16	@ 0000498e 0014
.org 0x4990
	cmp r0, #2	@ 00004990 0228
.org 0x4992
	bgt.n 0x4996	@ 00004992 00dc
.org 0x4994
	b.n 0x480c	@ 00004994 3ae7
.org 0x4996
	ldr r0, [sp, #60]	@ 00004996 0f98
.org 0x4998
	asrs r3, r0, #16	@ 00004998 0314
.org 0x499a
	cmp r3, #2	@ 0000499a 022b
.org 0x499c
	beq.n 0x49d4	@ 0000499c 1ad0
.org 0x499e
	ldr r1, [sp, #48]	@ 0000499e 0c99
.org 0x49a0
	ldrb r0, [r1, #0]	@ 000049a0 0878
.org 0x49a2
	ldr r4, [sp, #8]	@ 000049a2 029c
.org 0x49a4
	adds r0, r4, r0	@ 000049a4 2018
.org 0x49a6
	subs r0, #2	@ 000049a6 0238
.org 0x49a8
	str r0, [sp, #8]	@ 000049a8 0290
.org 0x49aa
	ldrb r0, [r0, #0]	@ 000049aa 0078
.org 0x49ac
	lsls r1, r0, #2	@ 000049ac 8100
.org 0x49ae
	adds r1, r1, r0	@ 000049ae 0918
.org 0x49b0
	lsls r0, r1, #4	@ 000049b0 0801
.org 0x49b2
	subs r0, r0, r1	@ 000049b2 401a
.org 0x49b4
	lsls r0, r0, #2	@ 000049b4 8000
.org 0x49b6
	ldr r6, [sp, #44]	@ 000049b6 0b9e
.org 0x49b8
	adds r0, r6, r0	@ 000049b8 3018
.org 0x49ba
	ldr r1, [sp, #24]	@ 000049ba 0699
.org 0x49bc
	adds r7, r0, r1	@ 000049bc 4718
.org 0x49be
	lsrs r2, r2, #16	@ 000049be 120c
.org 0x49c0
	mov r9, r2	@ 000049c0 9146
.org 0x49c2
	movs r2, #0	@ 000049c2 0022
.org 0x49c4
	str r2, [sp, #20]	@ 000049c4 0592
.org 0x49c6
	adds r0, r3, #1	@ 000049c6 581c
.org 0x49c8
	lsls r0, r0, #16	@ 000049c8 0004
.org 0x49ca
	lsrs r2, r0, #16	@ 000049ca 020c
.org 0x49cc
	asrs r0, r0, #16	@ 000049cc 0014
.org 0x49ce
	cmp r0, #2	@ 000049ce 0228
.org 0x49d0
	bgt.n 0x49d4	@ 000049d0 00dc
.org 0x49d2
	b.n 0x47fc	@ 000049d2 13e7
.org 0x49d4
	add sp, #64	@ 000049d4 10b0
.org 0x49d6
	pop {r3, r4, r5}	@ 000049d6 38bc
.org 0x49d8
	mov r8, r3	@ 000049d8 9846
.org 0x49da
	mov r9, r4	@ 000049da a146
.org 0x49dc
	mov sl, r5	@ 000049dc aa46
