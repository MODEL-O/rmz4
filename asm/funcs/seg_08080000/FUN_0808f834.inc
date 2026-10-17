@ FUN_0808f834  entry 0x0808f834  size 294
.thumb
.org 0x8f834
FUN_0808f834:
	push {r4, r5, r6, r7, lr}	@ 0008f834 f0b5
.org 0x8f836
	sub sp, #8	@ 0008f836 82b0
.org 0x8f838
	adds r7, r0, #0	@ 0008f838 071c
.org 0x8f83a
	ldrb r0, [r7, #10]	@ 0008f83a b87a
.org 0x8f83c
	lsrs r5, r0, #4	@ 0008f83c 0509
.org 0x8f83e
	movs r0, #1	@ 0008f83e 0120
.org 0x8f840
	ands r5, r0	@ 0008f840 0540
.org 0x8f842
	ldrb r4, [r7, #15]	@ 0008f842 fc7b
.org 0x8f844
	cmp r4, #0	@ 0008f844 002c
.org 0x8f846
	bne.n 0x8f89c	@ 0008f846 29d1
.org 0x8f848
	ldr r0, [r7, #84]	@ 0008f848 786d
.org 0x8f84a
	str r0, [sp, #0]	@ 0008f84a 0090
.org 0x8f84c
	ldr r0, [r7, #88]	@ 0008f84c b86d
.org 0x8f84e
	str r0, [sp, #4]	@ 0008f84e 0190
.org 0x8f850
	movs r2, #128	@ 0008f850 8022
.org 0x8f852
	lsls r2, r2, #2	@ 0008f852 9200
.org 0x8f854
	adds r0, r7, #0	@ 0008f854 381c
.org 0x8f856
	adds r0, #186	@ 0008f856 ba30
.org 0x8f858
	ldrb r3, [r0, #0]	@ 0008f858 0378
.org 0x8f85a
	movs r0, #0	@ 0008f85a 0020
.org 0x8f85c
	mov r1, sp	@ 0008f85c 6946
.org 0x8f85e
	bl 0xd0dc4	@ 0008f85e 41f0b1fa
.org 0x8f862
	adds r0, r7, #0	@ 0008f862 381c
.org 0x8f864
	adds r0, #84	@ 0008f864 5430
.org 0x8f866
	movs r1, #0	@ 0008f866 0021
.org 0x8f868
	adds r2, r5, #0	@ 0008f868 2a1c
.org 0x8f86a
	bl 0xdaae0	@ 0008f86a 4bf039f9
.org 0x8f86e
	adds r0, r7, #0	@ 0008f86e 381c
.org 0x8f870
	adds r0, #140	@ 0008f870 8c30
.org 0x8f872
	str r4, [r0, #0]	@ 0008f872 0460
.org 0x8f874
	adds r0, #4	@ 0008f874 0430
.org 0x8f876
	str r4, [r0, #0]	@ 0008f876 0460
.org 0x8f878
	adds r0, #4	@ 0008f878 0430
.org 0x8f87a
	strb r4, [r0, #0]	@ 0008f87a 0470
.org 0x8f87c
	ldrb r1, [r7, #10]	@ 0008f87c b97a
.org 0x8f87e
	movs r0, #251	@ 0008f87e fb20
.org 0x8f880
	ands r0, r1	@ 0008f880 0840
.org 0x8f882
	strb r0, [r7, #10]	@ 0008f882 b872
.org 0x8f884
	ldr r1, [pc, #212]	@ 0008f884 3549
.org 0x8f886
	adds r0, r7, #0	@ 0008f886 381c
.org 0x8f888
	bl 0x1cf00	@ 0008f888 8df73afb
.org 0x8f88c
	movs r0, #128	@ 0008f88c 8020
.org 0x8f88e
	negs r0, r0	@ 0008f88e 4042
.org 0x8f890
	str r0, [r7, #96]	@ 0008f890 3866
.org 0x8f892
	movs r0, #24	@ 0008f892 1820
.org 0x8f894
	strb r0, [r7, #18]	@ 0008f894 b874
.org 0x8f896
	ldrb r0, [r7, #15]	@ 0008f896 f87b
.org 0x8f898
	adds r0, #1	@ 0008f898 0130
.org 0x8f89a
	strb r0, [r7, #15]	@ 0008f89a f873
.org 0x8f89c
	adds r0, r7, #0	@ 0008f89c 381c
.org 0x8f89e
	bl 0x1cff0	@ 0008f89e 8df7a7fb
.org 0x8f8a2
	ldr r0, [r7, #96]	@ 0008f8a2 386e
.org 0x8f8a4
	adds r0, #32	@ 0008f8a4 2030
.org 0x8f8a6
	str r0, [r7, #96]	@ 0008f8a6 3866
.org 0x8f8a8
	movs r1, #224	@ 0008f8a8 e021
.org 0x8f8aa
	lsls r1, r1, #2	@ 0008f8aa 8900
.org 0x8f8ac
	cmp r0, r1	@ 0008f8ac 8842
.org 0x8f8ae
	ble.n 0x8f8b2	@ 0008f8ae 00dd
.org 0x8f8b0
	str r1, [r7, #96]	@ 0008f8b0 3966
.org 0x8f8b2
	ldr r0, [r7, #88]	@ 0008f8b2 b86d
.org 0x8f8b4
	ldr r1, [r7, #96]	@ 0008f8b4 396e
.org 0x8f8b6
	adds r0, r0, r1	@ 0008f8b6 4018
.org 0x8f8b8
	str r0, [r7, #88]	@ 0008f8b8 b865
.org 0x8f8ba
	ldrb r0, [r7, #18]	@ 0008f8ba b87c
.org 0x8f8bc
	subs r0, #1	@ 0008f8bc 0138
.org 0x8f8be
	strb r0, [r7, #18]	@ 0008f8be b874
.org 0x8f8c0
	lsls r0, r0, #24	@ 0008f8c0 0006
.org 0x8f8c2
	cmp r0, #0	@ 0008f8c2 0028
.org 0x8f8c4
	bne.n 0x8f952	@ 0008f8c4 45d1
.org 0x8f8c6
	movs r0, #49	@ 0008f8c6 3120
.org 0x8f8c8
	bl 0x2b10	@ 0008f8c8 73f722f9
.org 0x8f8cc
	ldrb r1, [r7, #10]	@ 0008f8cc b97a
.org 0x8f8ce
	movs r0, #254	@ 0008f8ce fe20
.org 0x8f8d0
	ands r0, r1	@ 0008f8d0 0840
.org 0x8f8d2
	strb r0, [r7, #10]	@ 0008f8d2 b872
.org 0x8f8d4
	ldr r6, [pc, #136]	@ 0008f8d4 224e
.org 0x8f8d6
	ldr r0, [r6, #0]	@ 0008f8d6 3068
.org 0x8f8d8
	ldr r5, [pc, #136]	@ 0008f8d8 224d
.org 0x8f8da
	muls r0, r5	@ 0008f8da 6843
.org 0x8f8dc
	ldr r2, [pc, #136]	@ 0008f8dc 224a
.org 0x8f8de
	adds r0, r0, r2	@ 0008f8de 8018
.org 0x8f8e0
	lsls r0, r0, #1	@ 0008f8e0 4000
.org 0x8f8e2
	lsrs r4, r0, #1	@ 0008f8e2 4408
.org 0x8f8e4
	lsrs r0, r0, #17	@ 0008f8e4 400c
.org 0x8f8e6
	movs r3, #7	@ 0008f8e6 0723
.org 0x8f8e8
	ands r0, r3	@ 0008f8e8 1840
.org 0x8f8ea
	subs r0, #3	@ 0008f8ea 0338
.org 0x8f8ec
	lsls r0, r0, #8	@ 0008f8ec 0002
.org 0x8f8ee
	ldr r1, [r7, #84]	@ 0008f8ee 796d
.org 0x8f8f0
	adds r1, r1, r0	@ 0008f8f0 0918
.org 0x8f8f2
	str r1, [sp, #0]	@ 0008f8f2 0091
.org 0x8f8f4
	adds r0, r4, #0	@ 0008f8f4 201c
.org 0x8f8f6
	muls r0, r5	@ 0008f8f6 6843
.org 0x8f8f8
	adds r0, r0, r2	@ 0008f8f8 8018
.org 0x8f8fa
	lsls r0, r0, #1	@ 0008f8fa 4000
.org 0x8f8fc
	lsrs r1, r0, #1	@ 0008f8fc 4108
.org 0x8f8fe
	str r1, [r6, #0]	@ 0008f8fe 3160
.org 0x8f900
	lsrs r0, r0, #17	@ 0008f900 400c
.org 0x8f902
	ands r0, r3	@ 0008f902 1840
.org 0x8f904
	subs r0, #3	@ 0008f904 0338
.org 0x8f906
	lsls r0, r0, #8	@ 0008f906 0002
.org 0x8f908
	ldr r1, [r7, #88]	@ 0008f908 b96d
.org 0x8f90a
	adds r1, r1, r0	@ 0008f90a 0918
.org 0x8f90c
	str r1, [sp, #4]	@ 0008f90c 0191
.org 0x8f90e
	movs r0, #1	@ 0008f90e 0120
.org 0x8f910
	mov r1, sp	@ 0008f910 6946
.org 0x8f912
	bl 0xd0c88	@ 0008f912 41f0b9f9
.org 0x8f916
	adds r0, r7, #0	@ 0008f916 381c
.org 0x8f918
	bl 0x8fb98	@ 0008f918 00f03ef9
.org 0x8f91c
	adds r4, r7, #0	@ 0008f91c 3c1c
.org 0x8f91e
	adds r4, #84	@ 0008f91e 5434
.org 0x8f920
	movs r0, #4	@ 0008f920 0420
.org 0x8f922
	movs r1, #14	@ 0008f922 0e21
.org 0x8f924
	adds r2, r4, #0	@ 0008f924 221c
.org 0x8f926
	bl 0x2ab88	@ 0008f926 9bf72ff9
.org 0x8f92a
	ldr r2, [pc, #64]	@ 0008f92a 104a
.org 0x8f92c
	ldrh r1, [r2, #12]	@ 0008f92c 9189
.org 0x8f92e
	ldr r0, [pc, #64]	@ 0008f92e 1048
.org 0x8f930
	cmp r1, r0	@ 0008f930 8142
.org 0x8f932
	bhi.n 0x8f938	@ 0008f932 01d8
.org 0x8f934
	adds r0, r1, #1	@ 0008f934 481c
.org 0x8f936
	strh r0, [r2, #12]	@ 0008f936 9081
.org 0x8f938
	adds r0, r7, #0	@ 0008f938 381c
.org 0x8f93a
	adds r1, r4, #0	@ 0008f93a 211c
.org 0x8f93c
	bl 0x2abe0	@ 0008f93c 9bf750f9
.org 0x8f940
	ldr r1, [pc, #48]	@ 0008f940 0c49
.org 0x8f942
	ldrb r0, [r7, #9]	@ 0008f942 787a
.org 0x8f944
	lsls r0, r0, #2	@ 0008f944 8000
.org 0x8f946
	adds r0, r0, r1	@ 0008f946 4018
.org 0x8f948
	movs r1, #4	@ 0008f948 0421
.org 0x8f94a
	str r1, [r7, #12]	@ 0008f94a f960
.org 0x8f94c
	ldr r0, [r0, #0]	@ 0008f94c 0068
.org 0x8f94e
	ldr r0, [r0, #16]	@ 0008f94e 0069
.org 0x8f950
	str r0, [r7, #20]	@ 0008f950 7861
.org 0x8f952
	add sp, #8	@ 0008f952 02b0
.org 0x8f954
	pop {r4, r5, r6, r7}	@ 0008f954 f0bc
.org 0x8f956
	pop {r0}	@ 0008f956 01bc
.org 0x8f958
	bx r0	@ 0008f958 0047
