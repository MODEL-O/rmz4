@ FUN_0803f7d4  entry 0x0803f7d4  size 380
.thumb
.org 0x3f7d4
FUN_0803f7d4:
	push {r4, r5, r6, r7, lr}	@ 0003f7d4 f0b5
.org 0x3f7d6
	mov r7, r8	@ 0003f7d6 4746
.org 0x3f7d8
	push {r7}	@ 0003f7d8 80b4
.org 0x3f7da
	adds r4, r0, #0	@ 0003f7da 041c
.org 0x3f7dc
	ldr r0, [r4, #44]	@ 0003f7dc e06a
.org 0x3f7de
	adds r0, #250	@ 0003f7de fa30
.org 0x3f7e0
	ldrb r2, [r0, #0]	@ 0003f7e0 0278
.org 0x3f7e2
	cmp r2, #2	@ 0003f7e2 022a
.org 0x3f7e4
	bne.n 0x3f804	@ 0003f7e4 0ed1
.org 0x3f7e6
	ldr r1, [pc, #24]	@ 0003f7e6 0649
.org 0x3f7e8
	ldrb r0, [r4, #9]	@ 0003f7e8 607a
.org 0x3f7ea
	lsls r0, r0, #2	@ 0003f7ea 8000
.org 0x3f7ec
	adds r0, r0, r1	@ 0003f7ec 4018
.org 0x3f7ee
	str r2, [r4, #12]	@ 0003f7ee e260
.org 0x3f7f0
	ldr r0, [r0, #0]	@ 0003f7f0 0068
.org 0x3f7f2
	ldr r0, [r0, #8]	@ 0003f7f2 8068
.org 0x3f7f4
	str r0, [r4, #20]	@ 0003f7f4 6061
.org 0x3f7f6
	adds r0, r4, #0	@ 0003f7f6 201c
.org 0x3f7f8
	bl 0x3f97c	@ 0003f7f8 00f0c0f8
.org 0x3f7fc
	b.n 0x3f96e	@ 0003f7fc b7e0
.org 0x3f7fe
	.byte 0x00	@ 0003f7fe data
.org 0x3f7ff
	.byte 0x00	@ 0003f7ff data
.org 0x3f800
	.byte 0xf8,0x39,0x85,0x08	@ 0003f800 data
.org 0x3f804
	adds r5, r4, #0	@ 0003f804 251c
.org 0x3f806
	adds r5, #140	@ 0003f806 8c35
.org 0x3f808
	ldr r0, [r5, #0]	@ 0003f808 2868
.org 0x3f80a
	movs r1, #128	@ 0003f80a 8021
.org 0x3f80c
	lsls r1, r1, #5	@ 0003f80c 4901
.org 0x3f80e
	ands r0, r1	@ 0003f80e 0840
.org 0x3f810
	cmp r0, #0	@ 0003f810 0028
.org 0x3f812
	beq.n 0x3f81a	@ 0003f812 02d0
.org 0x3f814
	movs r0, #43	@ 0003f814 2b20
.org 0x3f816
	bl 0x2b10	@ 0003f816 c3f77bf9
.org 0x3f81a
	ldr r0, [r5, #0]	@ 0003f81a 2868
.org 0x3f81c
	movs r1, #4	@ 0003f81c 0421
.org 0x3f81e
	ands r0, r1	@ 0003f81e 0840
.org 0x3f820
	cmp r0, #0	@ 0003f820 0028
.org 0x3f822
	beq.n 0x3f83a	@ 0003f822 0ad0
.org 0x3f824
	movs r1, #0	@ 0003f824 0021
.org 0x3f826
	str r1, [r5, #0]	@ 0003f826 2960
.org 0x3f828
	adds r0, r4, #0	@ 0003f828 201c
.org 0x3f82a
	adds r0, #144	@ 0003f82a 9030
.org 0x3f82c
	str r1, [r0, #0]	@ 0003f82c 0160
.org 0x3f82e
	adds r0, #4	@ 0003f82e 0430
.org 0x3f830
	strb r1, [r0, #0]	@ 0003f830 0170
.org 0x3f832
	ldrb r1, [r4, #10]	@ 0003f832 a17a
.org 0x3f834
	movs r0, #251	@ 0003f834 fb20
.org 0x3f836
	ands r0, r1	@ 0003f836 0840
.org 0x3f838
	strb r0, [r4, #10]	@ 0003f838 a072
.org 0x3f83a
	adds r0, r4, #0	@ 0003f83a 201c
.org 0x3f83c
	bl 0x1cff0	@ 0003f83c ddf7d8fb
.org 0x3f840
	ldrb r0, [r4, #13]	@ 0003f840 607b
.org 0x3f842
	cmp r0, #3	@ 0003f842 0328
.org 0x3f844
	bne.n 0x3f84e	@ 0003f844 03d1
.org 0x3f846
	ldr r1, [r4, #92]	@ 0003f846 e16d
.org 0x3f848
	asrs r1, r1, #2	@ 0003f848 8910
.org 0x3f84a
	ldr r0, [r4, #84]	@ 0003f84a 606d
.org 0x3f84c
	b.n 0x3f852	@ 0003f84c 01e0
.org 0x3f84e
	ldr r0, [r4, #84]	@ 0003f84e 606d
.org 0x3f850
	ldr r1, [r4, #92]	@ 0003f850 e16d
.org 0x3f852
	adds r0, r0, r1	@ 0003f852 4018
.org 0x3f854
	str r0, [r4, #84]	@ 0003f854 6065
.org 0x3f856
	ldr r5, [pc, #68]	@ 0003f856 114d
.org 0x3f858
	ldr r0, [r5, #0]	@ 0003f858 2868
.org 0x3f85a
	ldr r1, [pc, #68]	@ 0003f85a 1149
.org 0x3f85c
	mov r8, r1	@ 0003f85c 8846
.org 0x3f85e
	mov r1, r8	@ 0003f85e 4146
.org 0x3f860
	muls r1, r0	@ 0003f860 4143
.org 0x3f862
	adds r0, r1, #0	@ 0003f862 081c
.org 0x3f864
	ldr r7, [pc, #60]	@ 0003f864 0f4f
.org 0x3f866
	adds r0, r0, r7	@ 0003f866 c019
.org 0x3f868
	lsls r0, r0, #1	@ 0003f868 4000
.org 0x3f86a
	lsrs r6, r0, #1	@ 0003f86a 4608
.org 0x3f86c
	str r6, [r5, #0]	@ 0003f86c 2e60
.org 0x3f86e
	lsrs r0, r0, #17	@ 0003f86e 400c
.org 0x3f870
	movs r1, #3	@ 0003f870 0321
.org 0x3f872
	bl 0x129198	@ 0003f872 e9f091fc
.org 0x3f876
	lsls r0, r0, #24	@ 0003f876 0006
.org 0x3f878
	lsrs r0, r0, #24	@ 0003f878 000e
.org 0x3f87a
	adds r1, r4, #0	@ 0003f87a 211c
.org 0x3f87c
	adds r1, #184	@ 0003f87c b831
.org 0x3f87e
	movs r2, #1	@ 0003f87e 0122
.org 0x3f880
	subs r0, r2, r0	@ 0003f880 101a
.org 0x3f882
	lsls r0, r0, #8	@ 0003f882 0002
.org 0x3f884
	ldr r1, [r1, #0]	@ 0003f884 0968
.org 0x3f886
	adds r1, r1, r0	@ 0003f886 0918
.org 0x3f888
	str r1, [r4, #88]	@ 0003f888 a165
.org 0x3f88a
	ldrb r0, [r4, #13]	@ 0003f88a 607b
.org 0x3f88c
	cmp r0, #1	@ 0003f88c 0128
.org 0x3f88e
	beq.n 0x3f8d8	@ 0003f88e 23d0
.org 0x3f890
	cmp r0, #1	@ 0003f890 0128
.org 0x3f892
	bgt.n 0x3f8a8	@ 0003f892 09dc
.org 0x3f894
	cmp r0, #0	@ 0003f894 0028
.org 0x3f896
	beq.n 0x3f8b2	@ 0003f896 0cd0
.org 0x3f898
	b.n 0x3f96e	@ 0003f898 69e0
.org 0x3f89a
	.byte 0x00	@ 0003f89a data
.org 0x3f89b
	.byte 0x00	@ 0003f89b data
.org 0x3f89c
	.byte 0x38,0xdc,0x02,0x02	@ 0003f89c data
.org 0x3f8a0
	.byte 0xfd,0x43,0x03,0x00	@ 0003f8a0 data
.org 0x3f8a4
	.byte 0xc3,0x9e,0x26,0x00	@ 0003f8a4 data
.org 0x3f8a8
	cmp r0, #2	@ 0003f8a8 0228
.org 0x3f8aa
	beq.n 0x3f900	@ 0003f8aa 29d0
.org 0x3f8ac
	cmp r0, #3	@ 0003f8ac 0328
.org 0x3f8ae
	beq.n 0x3f94c	@ 0003f8ae 4dd0
.org 0x3f8b0
	b.n 0x3f96e	@ 0003f8b0 5de0
.org 0x3f8b2
	ldrb r0, [r4, #18]	@ 0003f8b2 a07c
.org 0x3f8b4
	subs r0, #1	@ 0003f8b4 0138
.org 0x3f8b6
	strb r0, [r4, #18]	@ 0003f8b6 a074
.org 0x3f8b8
	lsls r0, r0, #24	@ 0003f8b8 0006
.org 0x3f8ba
	lsrs r0, r0, #24	@ 0003f8ba 000e
.org 0x3f8bc
	cmp r0, #255	@ 0003f8bc ff28
.org 0x3f8be
	bne.n 0x3f96e	@ 0003f8be 56d1
.org 0x3f8c0
	ldr r1, [pc, #16]	@ 0003f8c0 0449
.org 0x3f8c2
	adds r0, r4, #0	@ 0003f8c2 201c
.org 0x3f8c4
	bl 0x1cf00	@ 0003f8c4 ddf71cfb
.org 0x3f8c8
	adds r0, r4, #0	@ 0003f8c8 201c
.org 0x3f8ca
	bl 0x1cff0	@ 0003f8ca ddf791fb
.org 0x3f8ce
	movs r0, #4	@ 0003f8ce 0420
.org 0x3f8d0
	strb r0, [r4, #18]	@ 0003f8d0 a074
.org 0x3f8d2
	b.n 0x3f93e	@ 0003f8d2 34e0
.org 0x3f8d4
	.byte 0x0f,0x80,0x00,0x00	@ 0003f8d4 data
.org 0x3f8d8
	ldrb r0, [r4, #18]	@ 0003f8d8 a07c
.org 0x3f8da
	subs r0, #1	@ 0003f8da 0138
.org 0x3f8dc
	strb r0, [r4, #18]	@ 0003f8dc a074
.org 0x3f8de
	lsls r0, r0, #24	@ 0003f8de 0006
.org 0x3f8e0
	lsrs r0, r0, #24	@ 0003f8e0 000e
.org 0x3f8e2
	cmp r0, #255	@ 0003f8e2 ff28
.org 0x3f8e4
	bne.n 0x3f96e	@ 0003f8e4 43d1
.org 0x3f8e6
	ldr r1, [pc, #20]	@ 0003f8e6 0549
.org 0x3f8e8
	adds r0, r4, #0	@ 0003f8e8 201c
.org 0x3f8ea
	bl 0x1cf00	@ 0003f8ea ddf709fb
.org 0x3f8ee
	adds r0, r4, #0	@ 0003f8ee 201c
.org 0x3f8f0
	bl 0x1cff0	@ 0003f8f0 ddf77efb
.org 0x3f8f4
	movs r0, #4	@ 0003f8f4 0420
.org 0x3f8f6
	strb r0, [r4, #18]	@ 0003f8f6 a074
.org 0x3f8f8
	b.n 0x3f93e	@ 0003f8f8 21e0
.org 0x3f8fa
	.byte 0x00	@ 0003f8fa data
.org 0x3f8fb
	.byte 0x00	@ 0003f8fb data
.org 0x3f8fc
	.byte 0x0e,0x80,0x00,0x00	@ 0003f8fc data
.org 0x3f900
	ldrb r0, [r4, #18]	@ 0003f900 a07c
.org 0x3f902
	subs r0, #1	@ 0003f902 0138
.org 0x3f904
	strb r0, [r4, #18]	@ 0003f904 a074
.org 0x3f906
	lsls r0, r0, #24	@ 0003f906 0006
.org 0x3f908
	lsrs r0, r0, #24	@ 0003f908 000e
.org 0x3f90a
	cmp r0, #255	@ 0003f90a ff28
.org 0x3f90c
	bne.n 0x3f96e	@ 0003f90c 2fd1
.org 0x3f90e
	mov r0, r8	@ 0003f90e 4046
.org 0x3f910
	muls r0, r6	@ 0003f910 7043
.org 0x3f912
	adds r0, r0, r7	@ 0003f912 c019
.org 0x3f914
	lsls r0, r0, #1	@ 0003f914 4000
.org 0x3f916
	lsrs r1, r0, #1	@ 0003f916 4108
.org 0x3f918
	str r1, [r5, #0]	@ 0003f918 2960
.org 0x3f91a
	lsrs r0, r0, #17	@ 0003f91a 400c
.org 0x3f91c
	ands r0, r2	@ 0003f91c 1040
.org 0x3f91e
	cmp r0, #0	@ 0003f91e 0028
.org 0x3f920
	beq.n 0x3f930	@ 0003f920 06d0
.org 0x3f922
	ldr r1, [pc, #8]	@ 0003f922 0249
.org 0x3f924
	adds r0, r4, #0	@ 0003f924 201c
.org 0x3f926
	bl 0x1cf00	@ 0003f926 ddf7ebfa
.org 0x3f92a
	b.n 0x3f938	@ 0003f92a 05e0
.org 0x3f92c
	.byte 0x10,0x80,0x00,0x00	@ 0003f92c data
.org 0x3f930
	ldr r1, [pc, #20]	@ 0003f930 0549
.org 0x3f932
	adds r0, r4, #0	@ 0003f932 201c
.org 0x3f934
	bl 0x1cf00	@ 0003f934 ddf7e4fa
.org 0x3f938
	adds r0, r4, #0	@ 0003f938 201c
.org 0x3f93a
	bl 0x1cff0	@ 0003f93a ddf759fb
.org 0x3f93e
	ldrb r0, [r4, #13]	@ 0003f93e 607b
.org 0x3f940
	adds r0, #1	@ 0003f940 0130
.org 0x3f942
	strb r0, [r4, #13]	@ 0003f942 6073
.org 0x3f944
	b.n 0x3f96e	@ 0003f944 13e0
.org 0x3f946
	.byte 0x00	@ 0003f946 data
.org 0x3f947
	.byte 0x00	@ 0003f947 data
.org 0x3f948
	.byte 0x11,0x80,0x00,0x00	@ 0003f948 data
.org 0x3f94c
	adds r0, r4, #0	@ 0003f94c 201c
.org 0x3f94e
	adds r0, #115	@ 0003f94e 7330
