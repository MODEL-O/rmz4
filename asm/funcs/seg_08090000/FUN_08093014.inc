@ FUN_08093014  entry 0x08093014  size 260
.thumb
.org 0x93014
FUN_08093014:
	push {r4, r5, lr}	@ 00093014 30b5
.org 0x93016
	adds r5, r0, #0	@ 00093016 051c
.org 0x93018
	movs r4, #0	@ 00093018 0024
.org 0x9301a
	ldr r0, [pc, #88]	@ 0009301a 1648
.org 0x9301c
	ldr r0, [r0, #0]	@ 0009301c 0068
.org 0x9301e
	ldr r3, [r5, #84]	@ 0009301e 6b6d
.org 0x93020
	ldr r0, [r0, #84]	@ 00093020 406d
.org 0x93022
	cmp r3, r0	@ 00093022 8342
.org 0x93024
	bge.n 0x93028	@ 00093024 00da
.org 0x93026
	movs r4, #1	@ 00093026 0124
.org 0x93028
	ldr r0, [pc, #76]	@ 00093028 1348
.org 0x9302a
	ldr r1, [pc, #80]	@ 0009302a 1449
.org 0x9302c
	adds r0, r0, r1	@ 0009302c 4018
.org 0x9302e
	ldrb r1, [r0, #0]	@ 0009302e 0178
.org 0x93030
	movs r0, #16	@ 00093030 1020
.org 0x93032
	ands r0, r1	@ 00093032 0840
.org 0x93034
	lsls r0, r0, #24	@ 00093034 0006
.org 0x93036
	lsrs r2, r0, #24	@ 00093036 020e
.org 0x93038
	cmp r2, #0	@ 00093038 002a
.org 0x9303a
	beq.n 0x93084	@ 0009303a 23d0
.org 0x9303c
	ldrb r1, [r5, #10]	@ 0009303c a97a
.org 0x9303e
	movs r0, #254	@ 0009303e fe20
.org 0x93040
	ands r0, r1	@ 00093040 0840
.org 0x93042
	movs r2, #0	@ 00093042 0022
.org 0x93044
	movs r1, #253	@ 00093044 fd21
.org 0x93046
	ands r0, r1	@ 00093046 0840
.org 0x93048
	strb r0, [r5, #10]	@ 00093048 a872
.org 0x9304a
	adds r0, r5, #0	@ 0009304a 281c
.org 0x9304c
	adds r0, #140	@ 0009304c 8c30
.org 0x9304e
	str r2, [r0, #0]	@ 0009304e 0260
.org 0x93050
	adds r0, #4	@ 00093050 0430
.org 0x93052
	str r2, [r0, #0]	@ 00093052 0260
.org 0x93054
	adds r0, #4	@ 00093054 0430
.org 0x93056
	strb r2, [r0, #0]	@ 00093056 0270
.org 0x93058
	ldrb r1, [r5, #10]	@ 00093058 a97a
.org 0x9305a
	movs r0, #251	@ 0009305a fb20
.org 0x9305c
	ands r0, r1	@ 0009305c 0840
.org 0x9305e
	strb r0, [r5, #10]	@ 0009305e a872
.org 0x93060
	ldr r1, [pc, #28]	@ 00093060 0749
.org 0x93062
	ldrb r0, [r5, #9]	@ 00093062 687a
.org 0x93064
	lsls r0, r0, #2	@ 00093064 8000
.org 0x93066
	adds r0, r0, r1	@ 00093066 4018
.org 0x93068
	movs r1, #3	@ 00093068 0321
.org 0x9306a
	str r1, [r5, #12]	@ 0009306a e960
.org 0x9306c
	ldr r0, [r0, #0]	@ 0009306c 0068
.org 0x9306e
	ldr r0, [r0, #12]	@ 0009306e c068
.org 0x93070
	str r0, [r5, #20]	@ 00093070 6861
.org 0x93072
	b.n 0x93126	@ 00093072 58e0
.org 0x93074
	.byte 0xf0,0xdb,0x02,0x02	@ 00093074 data
.org 0x93078
	.byte 0xb0,0x0a,0x00,0x02	@ 00093078 data
.org 0x9307c
	.byte 0x10,0xc0,0x02,0x00	@ 0009307c data
.org 0x93080
	.byte 0x40,0xdb,0x85,0x08	@ 00093080 data
.org 0x93084
	ldr r1, [pc, #68]	@ 00093084 1149
.org 0x93086
	ldrb r0, [r5, #9]	@ 00093086 687a
.org 0x93088
	lsls r0, r0, #2	@ 00093088 8000
.org 0x9308a
	adds r0, r0, r1	@ 0009308a 4018
.org 0x9308c
	movs r1, #1	@ 0009308c 0121
.org 0x9308e
	str r1, [r5, #12]	@ 0009308e e960
.org 0x93090
	ldr r0, [r0, #0]	@ 00093090 0068
.org 0x93092
	ldr r0, [r0, #4]	@ 00093092 4068
.org 0x93094
	str r0, [r5, #20]	@ 00093094 6861
.org 0x93096
	movs r0, #9	@ 00093096 0920
.org 0x93098
	strb r0, [r5, #13]	@ 00093098 6873
.org 0x9309a
	strb r2, [r5, #14]	@ 0009309a aa73
.org 0x9309c
	strb r2, [r5, #15]	@ 0009309c ea73
.org 0x9309e
	ldrb r0, [r5, #10]	@ 0009309e a87a
.org 0x930a0
	orrs r0, r1	@ 000930a0 0843
.org 0x930a2
	movs r1, #2	@ 000930a2 0221
.org 0x930a4
	orrs r0, r1	@ 000930a4 0843
.org 0x930a6
	strb r0, [r5, #10]	@ 000930a6 a872
.org 0x930a8
	str r2, [r5, #44]	@ 000930a8 ea62
.org 0x930aa
	adds r0, r5, #0	@ 000930aa 281c
.org 0x930ac
	adds r0, #180	@ 000930ac b430
.org 0x930ae
	str r3, [r0, #0]	@ 000930ae 0360
.org 0x930b0
	adds r0, #5	@ 000930b0 0530
.org 0x930b2
	strb r2, [r0, #0]	@ 000930b2 0270
.org 0x930b4
	adds r0, #1	@ 000930b4 0130
.org 0x930b6
	strb r2, [r0, #0]	@ 000930b6 0270
.org 0x930b8
	adds r0, r5, #0	@ 000930b8 281c
.org 0x930ba
	bl 0x1cc9c	@ 000930ba 89f7effd
.org 0x930be
	adds r2, r4, #0	@ 000930be 221c
.org 0x930c0
	cmp r2, #0	@ 000930c0 002a
.org 0x930c2
	beq.n 0x930d0	@ 000930c2 05d0
.org 0x930c4
	ldrb r0, [r5, #10]	@ 000930c4 a87a
.org 0x930c6
	movs r1, #16	@ 000930c6 1021
.org 0x930c8
	orrs r0, r1	@ 000930c8 0843
.org 0x930ca
	b.n 0x930d6	@ 000930ca 04e0
.org 0x930cc
	.byte 0x40,0xdb,0x85,0x08	@ 000930cc data
.org 0x930d0
	ldrb r1, [r5, #10]	@ 000930d0 a97a
.org 0x930d2
	movs r0, #239	@ 000930d2 ef20
.org 0x930d4
	ands r0, r1	@ 000930d4 0840
.org 0x930d6
	strb r0, [r5, #10]	@ 000930d6 a872
.org 0x930d8
	adds r1, r2, #0	@ 000930d8 111c
.org 0x930da
	adds r0, r5, #0	@ 000930da 281c
.org 0x930dc
	adds r0, #76	@ 000930dc 4c30
.org 0x930de
	strb r1, [r0, #0]	@ 000930de 0170
.org 0x930e0
	adds r3, r5, #0	@ 000930e0 2b1c
.org 0x930e2
	adds r3, #74	@ 000930e2 4a33
.org 0x930e4
	lsls r1, r1, #4	@ 000930e4 0901
.org 0x930e6
	ldrb r2, [r3, #0]	@ 000930e6 1a78
.org 0x930e8
	movs r0, #17	@ 000930e8 1120
.org 0x930ea
	negs r0, r0	@ 000930ea 4042
.org 0x930ec
	ands r0, r2	@ 000930ec 1040
.org 0x930ee
	orrs r0, r1	@ 000930ee 0843
.org 0x930f0
	strb r0, [r3, #0]	@ 000930f0 1870
.org 0x930f2
	ldr r1, [pc, #56]	@ 000930f2 0e49
.org 0x930f4
	adds r0, r5, #0	@ 000930f4 281c
.org 0x930f6
	bl 0x1cf00	@ 000930f6 89f703ff
.org 0x930fa
	adds r0, r5, #0	@ 000930fa 281c
.org 0x930fc
	bl 0x1cff0	@ 000930fc 89f778ff
.org 0x93100
	ldrb r1, [r5, #10]	@ 00093100 a97a
.org 0x93102
	movs r0, #4	@ 00093102 0420
.org 0x93104
	orrs r0, r1	@ 00093104 0843
.org 0x93106
	strb r0, [r5, #10]	@ 00093106 a872
.org 0x93108
	adds r4, r5, #0	@ 00093108 2c1c
.org 0x9310a
	adds r4, #116	@ 0009310a 7434
.org 0x9310c
	ldr r1, [pc, #32]	@ 0009310c 0849
.org 0x9310e
	adds r2, r5, #0	@ 0009310e 2a1c
.org 0x93110
	adds r2, #84	@ 00093110 5432
.org 0x93112
	adds r0, r4, #0	@ 00093112 201c
.org 0x93114
	movs r3, #10	@ 00093114 0a23
.org 0x93116
	bl 0x5760	@ 00093116 72f723fb
