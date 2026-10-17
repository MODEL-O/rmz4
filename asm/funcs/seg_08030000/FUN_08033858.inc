@ FUN_08033858  entry 0x08033858  size 268
.thumb
.org 0x33858
FUN_08033858:
	push {r4, r5, r6, lr}	@ 00033858 70b5
.org 0x3385a
	sub sp, #4	@ 0003385a 81b0
.org 0x3385c
	adds r5, r0, #0	@ 0003385c 051c
.org 0x3385e
	movs r0, #129	@ 0003385e 8120
.org 0x33860
	lsls r0, r0, #1	@ 00033860 4000
.org 0x33862
	adds r6, r5, r0	@ 00033862 2e18
.org 0x33864
	ldrb r4, [r6, #0]	@ 00033864 3478
.org 0x33866
	cmp r4, #0	@ 00033866 002c
.org 0x33868
	bne.n 0x33884	@ 00033868 0cd1
.org 0x3386a
	movs r1, #224	@ 0003386a e021
.org 0x3386c
	lsls r1, r1, #4	@ 0003386c 0901
.org 0x3386e
	adds r0, r5, #0	@ 0003386e 281c
.org 0x33870
	bl 0x1cf00	@ 00033870 e9f746fb
.org 0x33874
	movs r1, #163	@ 00033874 a321
.org 0x33876
	lsls r1, r1, #1	@ 00033876 4900
.org 0x33878
	adds r0, r5, r1	@ 00033878 6818
.org 0x3387a
	strb r4, [r0, #0]	@ 0003387a 0470
.org 0x3387c
	ldrb r0, [r6, #0]	@ 0003387c 3078
.org 0x3387e
	adds r0, #1	@ 0003387e 0130
.org 0x33880
	strb r0, [r6, #0]	@ 00033880 3070
.org 0x33882
	b.n 0x338e8	@ 00033882 31e0
.org 0x33884
	cmp r4, #1	@ 00033884 012c
.org 0x33886
	bne.n 0x338a4	@ 00033886 0dd1
.org 0x33888
	adds r0, r5, #0	@ 00033888 281c
.org 0x3388a
	adds r0, #114	@ 0003388a 7230
.org 0x3388c
	ldrb r0, [r0, #0]	@ 0003388c 0078
.org 0x3388e
	lsls r0, r0, #24	@ 0003388e 0006
.org 0x33890
	asrs r0, r0, #24	@ 00033890 0016
.org 0x33892
	cmp r0, #1	@ 00033892 0128
.org 0x33894
	bgt.n 0x338a4	@ 00033894 06dc
.org 0x33896
	adds r0, r5, #0	@ 00033896 281c
.org 0x33898
	movs r1, #0	@ 00033898 0021
.org 0x3389a
	bl 0x3c464	@ 0003389a 08f0e3fd
.org 0x3389e
	ldrb r0, [r6, #0]	@ 0003389e 3078
.org 0x338a0
	adds r0, #1	@ 000338a0 0130
.org 0x338a2
	strb r0, [r6, #0]	@ 000338a2 3070
.org 0x338a4
	movs r2, #129	@ 000338a4 8122
.org 0x338a6
	lsls r2, r2, #1	@ 000338a6 5200
.org 0x338a8
	adds r0, r5, r2	@ 000338a8 a818
.org 0x338aa
	ldrb r0, [r0, #0]	@ 000338aa 0078
.org 0x338ac
	cmp r0, #1	@ 000338ac 0128
.org 0x338ae
	bls.n 0x338bc	@ 000338ae 05d9
.org 0x338b0
	ldr r0, [pc, #132]	@ 000338b0 2148
.org 0x338b2
	adds r2, r5, r0	@ 000338b2 2a18
.org 0x338b4
	ldrb r0, [r2, #0]	@ 000338b4 1078
.org 0x338b6
	movs r1, #2	@ 000338b6 0221
.org 0x338b8
	orrs r0, r1	@ 000338b8 0843
.org 0x338ba
	strb r0, [r2, #0]	@ 000338ba 1070
.org 0x338bc
	adds r0, r5, #0	@ 000338bc 281c
.org 0x338be
	mov r1, sp	@ 000338be 6946
.org 0x338c0
	bl 0x39fd8	@ 000338c0 06f08afb
.org 0x338c4
	lsls r0, r0, #24	@ 000338c4 0006
.org 0x338c6
	cmp r0, #0	@ 000338c6 0028
.org 0x338c8
	beq.n 0x338de	@ 000338c8 09d0
.org 0x338ca
	mov r0, sp	@ 000338ca 6846
.org 0x338cc
	ldrb r0, [r0, #0]	@ 000338cc 0078
.org 0x338ce
	cmp r0, #1	@ 000338ce 0128
.org 0x338d0
	bne.n 0x338de	@ 000338d0 05d1
.org 0x338d2
	movs r2, #163	@ 000338d2 a322
.org 0x338d4
	lsls r2, r2, #1	@ 000338d4 5200
.org 0x338d6
	adds r1, r5, r2	@ 000338d6 a918
.org 0x338d8
	ldrb r0, [r1, #0]	@ 000338d8 0878
.org 0x338da
	adds r0, #1	@ 000338da 0130
.org 0x338dc
	strb r0, [r1, #0]	@ 000338dc 0870
.org 0x338de
	movs r1, #224	@ 000338de e021
.org 0x338e0
	lsls r1, r1, #4	@ 000338e0 0901
.org 0x338e2
	adds r0, r5, #0	@ 000338e2 281c
.org 0x338e4
	bl 0x3a3b0	@ 000338e4 06f064fd
.org 0x338e8
	adds r0, r5, #0	@ 000338e8 281c
.org 0x338ea
	adds r0, #180	@ 000338ea b430
.org 0x338ec
	ldrb r0, [r0, #19]	@ 000338ec c07c
.org 0x338ee
	cmp r0, #1	@ 000338ee 0128
.org 0x338f0
	bne.n 0x33902	@ 000338f0 07d1
.org 0x338f2
	ldr r1, [pc, #72]	@ 000338f2 1249
.org 0x338f4
	adds r0, r5, r1	@ 000338f4 6818
.org 0x338f6
	ldrh r1, [r0, #0]	@ 000338f6 0188
.org 0x338f8
	movs r0, #128	@ 000338f8 8020
.org 0x338fa
	lsls r0, r0, #8	@ 000338fa 0002
.org 0x338fc
	ands r0, r1	@ 000338fc 0840
.org 0x338fe
	cmp r0, #0	@ 000338fe 0028
.org 0x33900
	beq.n 0x33944	@ 00033900 20d0
.org 0x33902
	adds r0, r5, #0	@ 00033902 281c
.org 0x33904
	adds r0, #113	@ 00033904 7130
.org 0x33906
	ldrb r0, [r0, #0]	@ 00033906 0078
.org 0x33908
	lsls r0, r0, #24	@ 00033908 0006
.org 0x3390a
	asrs r0, r0, #24	@ 0003390a 0016
.org 0x3390c
	cmp r0, #3	@ 0003390c 0328
.org 0x3390e
	ble.n 0x33944	@ 0003390e 19dd
.org 0x33910
	movs r2, #163	@ 00033910 a322
.org 0x33912
	lsls r2, r2, #1	@ 00033912 5200
.org 0x33914
	adds r0, r5, r2	@ 00033914 a818
.org 0x33916
	ldrb r0, [r0, #0]	@ 00033916 0078
.org 0x33918
	cmp r0, #0	@ 00033918 0028
.org 0x3391a
	beq.n 0x33944	@ 0003391a 13d0
.org 0x3391c
	ldr r0, [pc, #32]	@ 0003391c 0848
.org 0x3391e
	adds r2, r5, r0	@ 0003391e 2a18
.org 0x33920
	movs r1, #0	@ 00033920 0021
.org 0x33922
	movs r0, #2	@ 00033922 0220
.org 0x33924
	strb r0, [r2, #0]	@ 00033924 1070
.org 0x33926
	movs r2, #129	@ 00033926 8122
.org 0x33928
	lsls r2, r2, #1	@ 00033928 5200
.org 0x3392a
	adds r0, r5, r2	@ 0003392a a818
.org 0x3392c
	strb r1, [r0, #0]	@ 0003392c 0170
.org 0x3392e
	adds r0, r5, #0	@ 0003392e 281c
.org 0x33930
	bl 0x33974	@ 00033930 00f020f8
.org 0x33934
	b.n 0x3396a	@ 00033934 19e0
.org 0x33936
	.byte 0x00	@ 00033936 data
.org 0x33937
	.byte 0x00	@ 00033937 data
.org 0x33938
	.byte 0x53,0x01,0x00,0x00	@ 00033938 data
.org 0x3393c
	.byte 0x52,0x02,0x00,0x00	@ 0003393c data
.org 0x33940
	.byte 0x01,0x01,0x00,0x00	@ 00033940 data
.org 0x33944
	adds r0, r5, #0	@ 00033944 281c
.org 0x33946
	adds r0, #115	@ 00033946 7330
.org 0x33948
	ldrb r0, [r0, #0]	@ 00033948 0078
.org 0x3394a
	cmp r0, #3	@ 0003394a 0328
.org 0x3394c
	bne.n 0x3396a	@ 0003394c 0dd1
.org 0x3394e
	movs r0, #128	@ 0003394e 8020
.org 0x33950
	lsls r0, r0, #1	@ 00033950 4000
.org 0x33952
	adds r1, r5, r0	@ 00033952 2918
.org 0x33954
	movs r0, #0	@ 00033954 0020
.org 0x33956
	strb r0, [r1, #0]	@ 00033956 0870
.org 0x33958
	adds r0, r5, #0	@ 00033958 281c
.org 0x3395a
	bl 0x2b7d8	@ 0003395a f7f73dff
.org 0x3395e
	adds r1, r0, #0	@ 0003395e 011c
.org 0x33960
	lsls r1, r1, #16	@ 00033960 0904
.org 0x33962
	lsrs r1, r1, #16	@ 00033962 090c
