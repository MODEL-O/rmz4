@ FUN_0808500c  entry 0x0808500c  size 328
.thumb
.org 0x8500c
FUN_0808500c:
	push {r4, r5, r6, lr}	@ 0008500c 70b5
.org 0x8500e
	adds r5, r0, #0	@ 0008500e 051c
.org 0x85010
	ldrb r0, [r5, #14]	@ 00085010 a87b
.org 0x85012
	cmp r0, #0	@ 00085012 0028
.org 0x85014
	beq.n 0x8501c	@ 00085014 02d0
.org 0x85016
	cmp r0, #1	@ 00085016 0128
.org 0x85018
	beq.n 0x850ce	@ 00085018 59d0
.org 0x8501a
	b.n 0x8515c	@ 0008501a 9fe0
.org 0x8501c
	adds r0, r5, #0	@ 0008501c 281c
.org 0x8501e
	adds r0, #116	@ 0008501e 7430
.org 0x85020
	ldr r1, [pc, #68]	@ 00085020 1149
.org 0x85022
	bl 0x5784	@ 00085022 80f7affb
.org 0x85026
	ldr r1, [pc, #68]	@ 00085026 1149
.org 0x85028
	adds r0, r5, #0	@ 00085028 281c
.org 0x8502a
	bl 0x1cf00	@ 0008502a 97f769ff
.org 0x8502e
	ldr r4, [pc, #64]	@ 0008502e 104c
.org 0x85030
	ldrb r1, [r5, #17]	@ 00085030 697c
.org 0x85032
	movs r3, #1	@ 00085032 0123
.org 0x85034
	movs r2, #1	@ 00085034 0122
.org 0x85036
	ands r2, r1	@ 00085036 0a40
.org 0x85038
	lsls r0, r2, #1	@ 00085038 5000
.org 0x8503a
	adds r0, r0, r2	@ 0008503a 8018
.org 0x8503c
	lsls r0, r0, #2	@ 0008503c 8000
.org 0x8503e
	subs r0, r0, r2	@ 0008503e 801a
.org 0x85040
	lsls r0, r0, #6	@ 00085040 8001
.org 0x85042
	adds r0, r0, r4	@ 00085042 0019
.org 0x85044
	str r0, [r5, #92]	@ 00085044 e865
.org 0x85046
	lsls r1, r1, #24	@ 00085046 0906
.org 0x85048
	lsrs r1, r1, #25	@ 00085048 490e
.org 0x8504a
	ands r1, r3	@ 0008504a 1940
.org 0x8504c
	lsls r0, r1, #1	@ 0008504c 4800
.org 0x8504e
	adds r0, r0, r1	@ 0008504e 4018
.org 0x85050
	lsls r0, r0, #2	@ 00085050 8000
.org 0x85052
	subs r0, r0, r1	@ 00085052 401a
.org 0x85054
	lsls r0, r0, #6	@ 00085054 8001
.org 0x85056
	adds r0, r0, r4	@ 00085056 0019
.org 0x85058
	str r0, [r5, #96]	@ 00085058 2866
.org 0x8505a
	cmp r2, #0	@ 0008505a 002a
.org 0x8505c
	beq.n 0x85074	@ 0008505c 0ad0
.org 0x8505e
	ldrb r1, [r5, #10]	@ 0008505e a97a
.org 0x85060
	movs r0, #16	@ 00085060 1020
.org 0x85062
	orrs r0, r1	@ 00085062 0843
.org 0x85064
	b.n 0x8507a	@ 00085064 09e0
.org 0x85066
	.byte 0x00	@ 00085066 data
.org 0x85067
	.byte 0x00	@ 00085067 data
.org 0x85068
	.byte 0x48,0xeb,0x85,0x08	@ 00085068 data
.org 0x8506c
	.byte 0x14,0x19,0x00,0x00	@ 0008506c data
.org 0x85070
	.byte 0xa0,0xfe,0xff,0xff	@ 00085070 data
.org 0x85074
	ldrb r1, [r5, #10]	@ 00085074 a97a
.org 0x85076
	movs r0, #239	@ 00085076 ef20
.org 0x85078
	ands r0, r1	@ 00085078 0840
.org 0x8507a
	strb r0, [r5, #10]	@ 0008507a a872
.org 0x8507c
	movs r4, #1	@ 0008507c 0124
.org 0x8507e
	adds r1, r2, #0	@ 0008507e 111c
.org 0x85080
	adds r0, r5, #0	@ 00085080 281c
.org 0x85082
	adds r0, #76	@ 00085082 4c30
.org 0x85084
	strb r1, [r0, #0]	@ 00085084 0170
.org 0x85086
	adds r3, r5, #0	@ 00085086 2b1c
.org 0x85088
	adds r3, #74	@ 00085088 4a33
.org 0x8508a
	lsls r1, r1, #4	@ 0008508a 0901
.org 0x8508c
	ldrb r2, [r3, #0]	@ 0008508c 1a78
.org 0x8508e
	movs r0, #17	@ 0008508e 1120
.org 0x85090
	negs r0, r0	@ 00085090 4042
.org 0x85092
	ands r0, r2	@ 00085092 1040
.org 0x85094
	orrs r0, r1	@ 00085094 0843
.org 0x85096
	strb r0, [r3, #0]	@ 00085096 1870
.org 0x85098
	ldrb r0, [r5, #17]	@ 00085098 687c
.org 0x8509a
	lsrs r2, r0, #1	@ 0008509a 4208
.org 0x8509c
	ands r2, r4	@ 0008509c 2240
.org 0x8509e
	cmp r2, #0	@ 0008509e 002a
.org 0x850a0
	beq.n 0x850aa	@ 000850a0 03d0
.org 0x850a2
	ldrb r0, [r5, #10]	@ 000850a2 a87a
.org 0x850a4
	movs r1, #32	@ 000850a4 2021
.org 0x850a6
	orrs r0, r1	@ 000850a6 0843
.org 0x850a8
	b.n 0x850b0	@ 000850a8 02e0
.org 0x850aa
	ldrb r1, [r5, #10]	@ 000850aa a97a
.org 0x850ac
	movs r0, #223	@ 000850ac df20
.org 0x850ae
	ands r0, r1	@ 000850ae 0840
.org 0x850b0
	strb r0, [r5, #10]	@ 000850b0 a872
.org 0x850b2
	adds r1, r2, #0	@ 000850b2 111c
.org 0x850b4
	adds r2, r5, #0	@ 000850b4 2a1c
.org 0x850b6
	adds r2, #77	@ 000850b6 4d32
.org 0x850b8
	strb r1, [r2, #0]	@ 000850b8 1170
.org 0x850ba
	lsls r1, r1, #5	@ 000850ba 4901
.org 0x850bc
	ldrb r2, [r3, #0]	@ 000850bc 1a78
.org 0x850be
	movs r0, #33	@ 000850be 2120
.org 0x850c0
	negs r0, r0	@ 000850c0 4042
.org 0x850c2
	ands r0, r2	@ 000850c2 1040
.org 0x850c4
	orrs r0, r1	@ 000850c4 0843
.org 0x850c6
	strb r0, [r3, #0]	@ 000850c6 1870
.org 0x850c8
	ldrb r0, [r5, #14]	@ 000850c8 a87b
.org 0x850ca
	adds r0, #1	@ 000850ca 0130
.org 0x850cc
	strb r0, [r5, #14]	@ 000850cc a873
.org 0x850ce
	ldr r0, [r5, #84]	@ 000850ce 686d
.org 0x850d0
	ldr r1, [r5, #92]	@ 000850d0 e96d
.org 0x850d2
	adds r0, r0, r1	@ 000850d2 4018
.org 0x850d4
	str r0, [r5, #84]	@ 000850d4 6865
.org 0x850d6
	ldr r0, [r5, #88]	@ 000850d6 a86d
.org 0x850d8
	ldr r1, [r5, #96]	@ 000850d8 296e
.org 0x850da
	adds r0, r0, r1	@ 000850da 4018
.org 0x850dc
	str r0, [r5, #88]	@ 000850dc a865
.org 0x850de
	adds r0, r5, #0	@ 000850de 281c
.org 0x850e0
	bl 0x1cff0	@ 000850e0 97f786ff
.org 0x850e4
	adds r6, r5, #0	@ 000850e4 2e1c
.org 0x850e6
	adds r6, #140	@ 000850e6 8c36
.org 0x850e8
	ldr r4, [r6, #0]	@ 000850e8 3468
.org 0x850ea
	movs r0, #4	@ 000850ea 0420
.org 0x850ec
	ands r4, r0	@ 000850ec 0440
.org 0x850ee
	cmp r4, #0	@ 000850ee 002c
.org 0x850f0
	beq.n 0x85118	@ 000850f0 12d0
.org 0x850f2
	adds r1, r5, #0	@ 000850f2 291c
.org 0x850f4
	adds r1, #84	@ 000850f4 5431
.org 0x850f6
	movs r0, #2	@ 000850f6 0220
.org 0x850f8
	bl 0xd0c88	@ 000850f8 4bf0c6fd
.org 0x850fc
	ldrb r1, [r5, #10]	@ 000850fc a97a
.org 0x850fe
	movs r0, #254	@ 000850fe fe20
.org 0x85100
	ands r0, r1	@ 00085100 0840
.org 0x85102
	movs r2, #0	@ 00085102 0022
.org 0x85104
	movs r1, #253	@ 00085104 fd21
.org 0x85106
	ands r0, r1	@ 00085106 0840
.org 0x85108
	strb r0, [r5, #10]	@ 00085108 a872
.org 0x8510a
	str r2, [r6, #0]	@ 0008510a 3260
.org 0x8510c
	adds r0, r5, #0	@ 0008510c 281c
.org 0x8510e
	adds r0, #144	@ 0008510e 9030
.org 0x85110
	str r2, [r0, #0]	@ 00085110 0260
.org 0x85112
	adds r0, #4	@ 00085112 0430
.org 0x85114
	strb r2, [r0, #0]	@ 00085114 0270
.org 0x85116
	b.n 0x85142	@ 00085116 14e0
.org 0x85118
	ldr r0, [pc, #72]	@ 00085118 1248
.org 0x8511a
	adds r1, r5, #0	@ 0008511a 291c
.org 0x8511c
	adds r1, #84	@ 0008511c 5431
.org 0x8511e
	bl 0x1fb14	@ 0008511e 9af7f9fc
.org 0x85122
	movs r1, #128	@ 00085122 8021
.org 0x85124
	lsls r1, r1, #5	@ 00085124 4901
.org 0x85126
	cmp r0, r1	@ 00085126 8842
.org 0x85128
	bls.n 0x8515c	@ 00085128 18d9
.org 0x8512a
	ldrb r1, [r5, #10]	@ 0008512a a97a
.org 0x8512c
	movs r0, #254	@ 0008512c fe20
.org 0x8512e
	ands r0, r1	@ 0008512e 0840
.org 0x85130
	movs r1, #253	@ 00085130 fd21
.org 0x85132
	ands r0, r1	@ 00085132 0840
.org 0x85134
	strb r0, [r5, #10]	@ 00085134 a872
.org 0x85136
	str r4, [r6, #0]	@ 00085136 3460
.org 0x85138
	adds r0, r5, #0	@ 00085138 281c
.org 0x8513a
	adds r0, #144	@ 0008513a 9030
.org 0x8513c
	str r4, [r0, #0]	@ 0008513c 0460
.org 0x8513e
	adds r0, #4	@ 0008513e 0430
.org 0x85140
	strb r4, [r0, #0]	@ 00085140 0470
.org 0x85142
	ldrb r1, [r5, #10]	@ 00085142 a97a
.org 0x85144
	movs r0, #251	@ 00085144 fb20
.org 0x85146
	ands r0, r1	@ 00085146 0840
.org 0x85148
	strb r0, [r5, #10]	@ 00085148 a872
.org 0x8514a
	ldr r1, [pc, #28]	@ 0008514a 0749
.org 0x8514c
	ldrb r0, [r5, #9]	@ 0008514c 687a
.org 0x8514e
	lsls r0, r0, #2	@ 0008514e 8000
.org 0x85150
	adds r0, r0, r1	@ 00085150 4018
.org 0x85152
	movs r1, #3	@ 00085152 0321
