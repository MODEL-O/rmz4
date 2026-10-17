@ FUN_0809a938  entry 0x0809a938  size 348
.thumb
.org 0x9a938
FUN_0809a938:
	push {r4, r5, lr}	@ 0009a938 30b5
.org 0x9a93a
	adds r4, r0, #0	@ 0009a93a 041c
.org 0x9a93c
	ldr r5, [r4, #40]	@ 0009a93c a56a
.org 0x9a93e
	bl 0x1cff0	@ 0009a93e 82f757fb
.org 0x9a942
	ldrb r0, [r5, #12]	@ 0009a942 287b
.org 0x9a944
	cmp r0, #1	@ 0009a944 0128
.org 0x9a946
	bls.n 0x9a984	@ 0009a946 1dd9
.org 0x9a948
	ldrb r1, [r4, #10]	@ 0009a948 a17a
.org 0x9a94a
	movs r0, #254	@ 0009a94a fe20
.org 0x9a94c
	ands r0, r1	@ 0009a94c 0840
.org 0x9a94e
	movs r2, #0	@ 0009a94e 0022
.org 0x9a950
	movs r1, #253	@ 0009a950 fd21
.org 0x9a952
	ands r0, r1	@ 0009a952 0840
.org 0x9a954
	strb r0, [r4, #10]	@ 0009a954 a072
.org 0x9a956
	adds r0, r4, #0	@ 0009a956 201c
.org 0x9a958
	adds r0, #140	@ 0009a958 8c30
.org 0x9a95a
	str r2, [r0, #0]	@ 0009a95a 0260
.org 0x9a95c
	adds r0, #4	@ 0009a95c 0430
.org 0x9a95e
	str r2, [r0, #0]	@ 0009a95e 0260
.org 0x9a960
	adds r0, #4	@ 0009a960 0430
.org 0x9a962
	strb r2, [r0, #0]	@ 0009a962 0270
.org 0x9a964
	ldrb r1, [r4, #10]	@ 0009a964 a17a
.org 0x9a966
	movs r0, #251	@ 0009a966 fb20
.org 0x9a968
	ands r0, r1	@ 0009a968 0840
.org 0x9a96a
	strb r0, [r4, #10]	@ 0009a96a a072
.org 0x9a96c
	ldr r1, [pc, #16]	@ 0009a96c 0449
.org 0x9a96e
	ldrb r0, [r4, #9]	@ 0009a96e 607a
.org 0x9a970
	lsls r0, r0, #2	@ 0009a970 8000
.org 0x9a972
	adds r0, r0, r1	@ 0009a972 4018
.org 0x9a974
	movs r1, #3	@ 0009a974 0321
.org 0x9a976
	str r1, [r4, #12]	@ 0009a976 e160
.org 0x9a978
	ldr r0, [r0, #0]	@ 0009a978 0068
.org 0x9a97a
	ldr r0, [r0, #12]	@ 0009a97a c068
.org 0x9a97c
	str r0, [r4, #20]	@ 0009a97c 6061
.org 0x9a97e
	b.n 0x9aa92	@ 0009a97e 88e0
.org 0x9a980
	.byte 0x40,0xdb,0x85,0x08	@ 0009a980 data
.org 0x9a984
	ldrb r0, [r4, #13]	@ 0009a984 607b
.org 0x9a986
	cmp r0, #0	@ 0009a986 0028
.org 0x9a988
	bne.n 0x9a9de	@ 0009a988 29d1
.org 0x9a98a
	ldrb r0, [r5, #10]	@ 0009a98a a87a
.org 0x9a98c
	lsrs r2, r0, #4	@ 0009a98c 0209
.org 0x9a98e
	movs r0, #1	@ 0009a98e 0120
.org 0x9a990
	ands r2, r0	@ 0009a990 0240
.org 0x9a992
	cmp r2, #0	@ 0009a992 002a
.org 0x9a994
	beq.n 0x9a99e	@ 0009a994 03d0
.org 0x9a996
	ldrb r1, [r4, #10]	@ 0009a996 a17a
.org 0x9a998
	movs r0, #16	@ 0009a998 1020
.org 0x9a99a
	orrs r0, r1	@ 0009a99a 0843
.org 0x9a99c
	b.n 0x9a9a4	@ 0009a99c 02e0
.org 0x9a99e
	ldrb r1, [r4, #10]	@ 0009a99e a17a
.org 0x9a9a0
	movs r0, #239	@ 0009a9a0 ef20
.org 0x9a9a2
	ands r0, r1	@ 0009a9a2 0840
.org 0x9a9a4
	strb r0, [r4, #10]	@ 0009a9a4 a072
.org 0x9a9a6
	adds r1, r2, #0	@ 0009a9a6 111c
.org 0x9a9a8
	adds r0, r4, #0	@ 0009a9a8 201c
.org 0x9a9aa
	adds r0, #76	@ 0009a9aa 4c30
.org 0x9a9ac
	strb r1, [r0, #0]	@ 0009a9ac 0170
.org 0x9a9ae
	adds r3, r4, #0	@ 0009a9ae 231c
.org 0x9a9b0
	adds r3, #74	@ 0009a9b0 4a33
.org 0x9a9b2
	lsls r1, r1, #4	@ 0009a9b2 0901
.org 0x9a9b4
	ldrb r2, [r3, #0]	@ 0009a9b4 1a78
.org 0x9a9b6
	movs r0, #17	@ 0009a9b6 1120
.org 0x9a9b8
	negs r0, r0	@ 0009a9b8 4042
.org 0x9a9ba
	ands r0, r2	@ 0009a9ba 1040
.org 0x9a9bc
	orrs r0, r1	@ 0009a9bc 0843
.org 0x9a9be
	strb r0, [r3, #0]	@ 0009a9be 1870
.org 0x9a9c0
	ldr r0, [r5, #84]	@ 0009a9c0 686d
.org 0x9a9c2
	ldr r1, [r5, #88]	@ 0009a9c2 a96d
.org 0x9a9c4
	str r0, [r4, #84]	@ 0009a9c4 6065
.org 0x9a9c6
	str r1, [r4, #88]	@ 0009a9c6 a165
.org 0x9a9c8
	adds r0, r4, #0	@ 0009a9c8 201c
.org 0x9a9ca
	adds r0, #115	@ 0009a9ca 7330
.org 0x9a9cc
	ldrb r0, [r0, #0]	@ 0009a9cc 0078
.org 0x9a9ce
	cmp r0, #3	@ 0009a9ce 0328
.org 0x9a9d0
	bne.n 0x9aa92	@ 0009a9d0 5fd1
.org 0x9a9d2
	movs r0, #64	@ 0009a9d2 4020
.org 0x9a9d4
	strb r0, [r4, #18]	@ 0009a9d4 a074
.org 0x9a9d6
	ldrb r0, [r4, #13]	@ 0009a9d6 607b
.org 0x9a9d8
	adds r0, #1	@ 0009a9d8 0130
.org 0x9a9da
	strb r0, [r4, #13]	@ 0009a9da 6073
.org 0x9a9dc
	b.n 0x9aa92	@ 0009a9dc 59e0
.org 0x9a9de
	ldrb r0, [r5, #10]	@ 0009a9de a87a
.org 0x9a9e0
	lsrs r2, r0, #4	@ 0009a9e0 0209
.org 0x9a9e2
	movs r0, #1	@ 0009a9e2 0120
.org 0x9a9e4
	ands r2, r0	@ 0009a9e4 0240
.org 0x9a9e6
	cmp r2, #0	@ 0009a9e6 002a
.org 0x9a9e8
	beq.n 0x9a9f2	@ 0009a9e8 03d0
.org 0x9a9ea
	ldrb r1, [r4, #10]	@ 0009a9ea a17a
.org 0x9a9ec
	movs r0, #16	@ 0009a9ec 1020
.org 0x9a9ee
	orrs r0, r1	@ 0009a9ee 0843
.org 0x9a9f0
	b.n 0x9a9f8	@ 0009a9f0 02e0
.org 0x9a9f2
	ldrb r1, [r4, #10]	@ 0009a9f2 a17a
.org 0x9a9f4
	movs r0, #239	@ 0009a9f4 ef20
.org 0x9a9f6
	ands r0, r1	@ 0009a9f6 0840
.org 0x9a9f8
	strb r0, [r4, #10]	@ 0009a9f8 a072
.org 0x9a9fa
	adds r1, r2, #0	@ 0009a9fa 111c
.org 0x9a9fc
	adds r0, r4, #0	@ 0009a9fc 201c
.org 0x9a9fe
	adds r0, #76	@ 0009a9fe 4c30
.org 0x9aa00
	strb r1, [r0, #0]	@ 0009aa00 0170
.org 0x9aa02
	adds r3, r4, #0	@ 0009aa02 231c
.org 0x9aa04
	adds r3, #74	@ 0009aa04 4a33
.org 0x9aa06
	lsls r1, r1, #4	@ 0009aa06 0901
.org 0x9aa08
	ldrb r2, [r3, #0]	@ 0009aa08 1a78
.org 0x9aa0a
	movs r0, #17	@ 0009aa0a 1120
.org 0x9aa0c
	negs r0, r0	@ 0009aa0c 4042
.org 0x9aa0e
	ands r0, r2	@ 0009aa0e 1040
.org 0x9aa10
	orrs r0, r1	@ 0009aa10 0843
.org 0x9aa12
	strb r0, [r3, #0]	@ 0009aa12 1870
.org 0x9aa14
	ldr r0, [r5, #84]	@ 0009aa14 686d
.org 0x9aa16
	ldr r1, [r5, #88]	@ 0009aa16 a96d
.org 0x9aa18
	str r0, [r4, #84]	@ 0009aa18 6065
.org 0x9aa1a
	str r1, [r4, #88]	@ 0009aa1a a165
.org 0x9aa1c
	ldrb r0, [r4, #18]	@ 0009aa1c a07c
.org 0x9aa1e
	subs r0, #1	@ 0009aa1e 0138
.org 0x9aa20
	strb r0, [r4, #18]	@ 0009aa20 a074
.org 0x9aa22
	lsls r0, r0, #24	@ 0009aa22 0006
.org 0x9aa24
	lsrs r0, r0, #24	@ 0009aa24 000e
.org 0x9aa26
	cmp r0, #255	@ 0009aa26 ff28
.org 0x9aa28
	bne.n 0x9aa92	@ 0009aa28 33d1
.org 0x9aa2a
	adds r0, r5, #0	@ 0009aa2a 281c
.org 0x9aa2c
	movs r1, #5	@ 0009aa2c 0521
.org 0x9aa2e
	movs r2, #0	@ 0009aa2e 0022
.org 0x9aa30
	bl 0x99f0c	@ 0009aa30 fff76cfa
.org 0x9aa34
	adds r0, r5, #0	@ 0009aa34 281c
.org 0x9aa36
	movs r1, #5	@ 0009aa36 0521
.org 0x9aa38
	movs r2, #1	@ 0009aa38 0122
.org 0x9aa3a
	bl 0x99f0c	@ 0009aa3a fff767fa
.org 0x9aa3e
	adds r0, r5, #0	@ 0009aa3e 281c
.org 0x9aa40
	movs r1, #5	@ 0009aa40 0521
.org 0x9aa42
	movs r2, #2	@ 0009aa42 0222
.org 0x9aa44
	bl 0x99f0c	@ 0009aa44 fff762fa
.org 0x9aa48
	adds r0, r5, #0	@ 0009aa48 281c
.org 0x9aa4a
	movs r1, #5	@ 0009aa4a 0521
.org 0x9aa4c
	movs r2, #3	@ 0009aa4c 0322
.org 0x9aa4e
	bl 0x99f0c	@ 0009aa4e fff75dfa
.org 0x9aa52
	adds r0, r5, #0	@ 0009aa52 281c
.org 0x9aa54
	movs r1, #5	@ 0009aa54 0521
.org 0x9aa56
	movs r2, #4	@ 0009aa56 0422
.org 0x9aa58
	bl 0x99f0c	@ 0009aa58 fff758fa
.org 0x9aa5c
	adds r0, r5, #0	@ 0009aa5c 281c
.org 0x9aa5e
	movs r1, #5	@ 0009aa5e 0521
.org 0x9aa60
	movs r2, #5	@ 0009aa60 0522
.org 0x9aa62
	bl 0x99f0c	@ 0009aa62 fff753fa
.org 0x9aa66
	adds r0, r5, #0	@ 0009aa66 281c
.org 0x9aa68
	movs r1, #5	@ 0009aa68 0521
.org 0x9aa6a
	movs r2, #6	@ 0009aa6a 0622
.org 0x9aa6c
	bl 0x99f0c	@ 0009aa6c fff74efa
.org 0x9aa70
	adds r0, r5, #0	@ 0009aa70 281c
.org 0x9aa72
	movs r1, #5	@ 0009aa72 0521
.org 0x9aa74
	movs r2, #7	@ 0009aa74 0722
.org 0x9aa76
	bl 0x99f0c	@ 0009aa76 fff749fa
.org 0x9aa7a
	ldr r1, [pc, #28]	@ 0009aa7a 0749
.org 0x9aa7c
	ldrb r0, [r4, #9]	@ 0009aa7c 607a
.org 0x9aa7e
	lsls r0, r0, #2	@ 0009aa7e 8000
.org 0x9aa80
	adds r0, r0, r1	@ 0009aa80 4018
.org 0x9aa82
	movs r1, #2	@ 0009aa82 0221
.org 0x9aa84
	str r1, [r4, #12]	@ 0009aa84 e160
.org 0x9aa86
	ldr r0, [r0, #0]	@ 0009aa86 0068
.org 0x9aa88
	ldr r0, [r0, #8]	@ 0009aa88 8068
.org 0x9aa8a
	str r0, [r4, #20]	@ 0009aa8a 6061
.org 0x9aa8c
	adds r0, r4, #0	@ 0009aa8c 201c
.org 0x9aa8e
	bl 0x99ff4	@ 0009aa8e fff7b1fa
.org 0x9aa92
	pop {r4, r5}	@ 0009aa92 30bc
