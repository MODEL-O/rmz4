@ FUN_0811f85c  entry 0x0811f85c  size 272
.thumb
.org 0x11f85c
FUN_0811f85c:
	push {r4, r5, r6, lr}	@ 0011f85c 70b5
.org 0x11f85e
	mov r6, r8	@ 0011f85e 4646
.org 0x11f860
	push {r6}	@ 0011f860 40b4
.org 0x11f862
	sub sp, #4	@ 0011f862 81b0
.org 0x11f864
	adds r5, r0, #0	@ 0011f864 051c
.org 0x11f866
	movs r4, #0	@ 0011f866 0024
.org 0x11f868
	movs r6, #0	@ 0011f868 0026
.org 0x11f86a
	strh r6, [r5, #4]	@ 0011f86a ae80
.org 0x11f86c
	ldr r1, [pc, #252]	@ 0011f86c 3f49
.org 0x11f86e
	adds r0, r5, r1	@ 0011f86e 6818
.org 0x11f870
	strb r4, [r0, #2]	@ 0011f870 8470
.org 0x11f872
	strb r4, [r0, #5]	@ 0011f872 4471
.org 0x11f874
	strb r4, [r0, #17]	@ 0011f874 4474
.org 0x11f876
	strb r4, [r0, #19]	@ 0011f876 c474
.org 0x11f878
	strb r4, [r0, #20]	@ 0011f878 0475
.org 0x11f87a
	adds r0, r5, #0	@ 0011f87a 281c
.org 0x11f87c
	bl 0x11fb7c	@ 0011f87c 00f07ef9
.org 0x11f880
	ldr r4, [pc, #236]	@ 0011f880 3b4c
.org 0x11f882
	ldrh r1, [r4, #0]	@ 0011f882 2188
.org 0x11f884
	ldr r0, [pc, #236]	@ 0011f884 3b48
.org 0x11f886
	ands r0, r1	@ 0011f886 0840
.org 0x11f888
	ldr r1, [pc, #236]	@ 0011f888 3b49
.org 0x11f88a
	ands r0, r1	@ 0011f88a 0840
.org 0x11f88c
	movs r2, #152	@ 0011f88c 9822
.org 0x11f88e
	lsls r2, r2, #5	@ 0011f88e 5201
.org 0x11f890
	adds r1, r2, #0	@ 0011f890 111c
.org 0x11f892
	orrs r0, r1	@ 0011f892 0843
.org 0x11f894
	strh r0, [r4, #0]	@ 0011f894 2080
.org 0x11f896
	ldr r1, [pc, #228]	@ 0011f896 3949
.org 0x11f898
	adds r0, r1, #0	@ 0011f898 081c
.org 0x11f89a
	strh r0, [r4, #6]	@ 0011f89a e080
.org 0x11f89c
	str r6, [r4, #16]	@ 0011f89c 2661
.org 0x11f89e
	ldr r0, [pc, #224]	@ 0011f89e 3848
.org 0x11f8a0
	movs r1, #128	@ 0011f8a0 8021
.org 0x11f8a2
	lsls r1, r1, #7	@ 0011f8a2 c901
.org 0x11f8a4
	bl 0x1d30	@ 0011f8a4 e2f644fa
.org 0x11f8a8
	ldr r0, [pc, #216]	@ 0011f8a8 3648
.org 0x11f8aa
	movs r1, #0	@ 0011f8aa 0021
.org 0x11f8ac
	bl 0x2208	@ 0011f8ac e2f6acfc
.org 0x11f8b0
	ldr r2, [pc, #212]	@ 0011f8b0 354a
.org 0x11f8b2
	adds r2, r2, r5	@ 0011f8b2 5219
.org 0x11f8b4
	mov r8, r2	@ 0011f8b4 9046
.org 0x11f8b6
	ldr r1, [pc, #212]	@ 0011f8b6 3549
.org 0x11f8b8
	str r6, [sp, #0]	@ 0011f8b8 0096
.org 0x11f8ba
	mov r0, r8	@ 0011f8ba 4046
.org 0x11f8bc
	movs r2, #38	@ 0011f8bc 2622
.org 0x11f8be
	movs r3, #0	@ 0011f8be 0023
.org 0x11f8c0
	bl 0x27b8	@ 0011f8c0 e2f67aff
.org 0x11f8c4
	ldr r0, [pc, #200]	@ 0011f8c4 3248
.org 0x11f8c6
	ldr r1, [pc, #204]	@ 0011f8c6 3349
.org 0x11f8c8
	adds r1, #134	@ 0011f8c8 8631
.org 0x11f8ca
	ldrh r1, [r1, #0]	@ 0011f8ca 0988
.org 0x11f8cc
	ldrh r2, [r0, #6]	@ 0011f8cc c288
.org 0x11f8ce
	lsrs r2, r2, #6	@ 0011f8ce 9209
.org 0x11f8d0
	subs r1, r1, r2	@ 0011f8d0 891a
.org 0x11f8d2
	lsls r1, r1, #5	@ 0011f8d2 4901
.org 0x11f8d4
	movs r2, #128	@ 0011f8d4 8022
.org 0x11f8d6
	lsls r2, r2, #9	@ 0011f8d6 5202
.org 0x11f8d8
	adds r1, r1, r2	@ 0011f8d8 8918
.org 0x11f8da
	bl 0x1d30	@ 0011f8da e2f629fa
.org 0x11f8de
	ldr r0, [pc, #184]	@ 0011f8de 2e48
.org 0x11f8e0
	ldr r1, [pc, #184]	@ 0011f8e0 2e49
.org 0x11f8e2
	adds r1, #134	@ 0011f8e2 8631
.org 0x11f8e4
	ldrh r1, [r1, #0]	@ 0011f8e4 0988
.org 0x11f8e6
	ldrb r2, [r0, #7]	@ 0011f8e6 c279
.org 0x11f8e8
	subs r1, r1, r2	@ 0011f8e8 891a
.org 0x11f8ea
	lsls r1, r1, #5	@ 0011f8ea 4901
.org 0x11f8ec
	movs r2, #128	@ 0011f8ec 8022
.org 0x11f8ee
	lsls r2, r2, #2	@ 0011f8ee 9200
.org 0x11f8f0
	adds r1, r1, r2	@ 0011f8f0 8918
.org 0x11f8f2
	bl 0x2208	@ 0011f8f2 e2f689fc
.org 0x11f8f6
	adds r0, r5, #0	@ 0011f8f6 281c
.org 0x11f8f8
	movs r1, #0	@ 0011f8f8 0021
.org 0x11f8fa
	movs r2, #0	@ 0011f8fa 0022
.org 0x11f8fc
	bl 0x10c778	@ 0011f8fc ecf73cff
.org 0x11f900
	adds r0, r5, #0	@ 0011f900 281c
.org 0x11f902
	movs r1, #1	@ 0011f902 0121
.org 0x11f904
	movs r2, #0	@ 0011f904 0022
.org 0x11f906
	bl 0x10c778	@ 0011f906 ecf737ff
.org 0x11f90a
	adds r0, r5, #0	@ 0011f90a 281c
.org 0x11f90c
	movs r1, #1	@ 0011f90c 0121
.org 0x11f90e
	movs r2, #1	@ 0011f90e 0122
.org 0x11f910
	bl 0x10c778	@ 0011f910 ecf732ff
.org 0x11f914
	adds r0, r5, #0	@ 0011f914 281c
.org 0x11f916
	movs r1, #0	@ 0011f916 0021
.org 0x11f918
	bl 0x10ca08	@ 0011f918 edf776f8
.org 0x11f91c
	adds r0, r5, #0	@ 0011f91c 281c
.org 0x11f91e
	movs r1, #1	@ 0011f91e 0121
.org 0x11f920
	bl 0x10ca08	@ 0011f920 edf772f8
.org 0x11f924
	adds r0, r5, #0	@ 0011f924 281c
.org 0x11f926
	movs r1, #2	@ 0011f926 0221
.org 0x11f928
	bl 0x10ca08	@ 0011f928 edf76ef8
.org 0x11f92c
	adds r0, r5, #0	@ 0011f92c 281c
.org 0x11f92e
	movs r1, #3	@ 0011f92e 0321
.org 0x11f930
	bl 0x10ca08	@ 0011f930 edf76af8
.org 0x11f934
	movs r0, #47	@ 0011f934 2f20
.org 0x11f936
	movs r1, #0	@ 0011f936 0021
.org 0x11f938
	bl 0x249c	@ 0011f938 e2f6b0fd
.org 0x11f93c
	ldrh r0, [r4, #6]	@ 0011f93c e088
.org 0x11f93e
	movs r1, #248	@ 0011f93e f821
.org 0x11f940
	lsls r1, r1, #5	@ 0011f940 4901
.org 0x11f942
	ands r1, r0	@ 0011f942 0140
.org 0x11f944
	lsls r1, r1, #3	@ 0011f944 c900
.org 0x11f946
	movs r2, #128	@ 0011f946 8022
.org 0x11f948
	lsls r2, r2, #5	@ 0011f948 5201
.org 0x11f94a
	mov r0, r8	@ 0011f94a 4046
.org 0x11f94c
	bl 0x1f1c	@ 0011f94c e2f6e6fa
.org 0x11f950
	movs r0, #149	@ 0011f950 9520
.org 0x11f952
	bl 0x2b10	@ 0011f952 e3f6ddf8
.org 0x11f956
	movs r0, #1	@ 0011f956 0120
.org 0x11f958
	strb r0, [r5, #1]	@ 0011f958 6870
.org 0x11f95a
	adds r0, r5, #0	@ 0011f95a 281c
.org 0x11f95c
	bl 0x11f9a0	@ 0011f95c 00f020f8
.org 0x11f960
	add sp, #4	@ 0011f960 01b0
.org 0x11f962
	pop {r3}	@ 0011f962 08bc
.org 0x11f964
	mov r8, r3	@ 0011f964 9846
.org 0x11f966
	pop {r4, r5, r6}	@ 0011f966 70bc
.org 0x11f968
	pop {r0}	@ 0011f968 01bc
.org 0x11f96a
	bx r0	@ 0011f96a 0047
