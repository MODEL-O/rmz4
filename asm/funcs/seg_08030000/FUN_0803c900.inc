@ FUN_0803c900  entry 0x0803c900  size 350
.thumb
.org 0x3c900
FUN_0803c900:
	push {r4, r5, r6, r7, lr}	@ 0003c900 f0b5
.org 0x3c902
	sub sp, #8	@ 0003c902 82b0
.org 0x3c904
	adds r4, r0, #0	@ 0003c904 041c
.org 0x3c906
	adds r0, #180	@ 0003c906 b430
.org 0x3c908
	ldr r6, [r0, #0]	@ 0003c908 0668
.org 0x3c90a
	ldrb r0, [r4, #13]	@ 0003c90a 607b
.org 0x3c90c
	cmp r0, #0	@ 0003c90c 0028
.org 0x3c90e
	beq.n 0x3c96e	@ 0003c90e 2ed0
.org 0x3c910
	ldrb r1, [r6, #30]	@ 0003c910 b17f
.org 0x3c912
	lsls r1, r1, #8	@ 0003c912 0902
.org 0x3c914
	adds r0, r6, #0	@ 0003c914 301c
.org 0x3c916
	adds r0, #112	@ 0003c916 7030
.org 0x3c918
	ldrb r0, [r0, #0]	@ 0003c918 0078
.org 0x3c91a
	orrs r0, r1	@ 0003c91a 0843
.org 0x3c91c
	movs r1, #200	@ 0003c91c c821
.org 0x3c91e
	lsls r1, r1, #5	@ 0003c91e 4901
.org 0x3c920
	cmp r0, r1	@ 0003c920 8842
.org 0x3c922
	bne.n 0x3c968	@ 0003c922 21d1
.org 0x3c924
	adds r0, r6, #0	@ 0003c924 301c
.org 0x3c926
	adds r0, #113	@ 0003c926 7130
.org 0x3c928
	movs r2, #0	@ 0003c928 0022
.org 0x3c92a
	ldrsb r2, [r0, r2]	@ 0003c92a 8256
.org 0x3c92c
	cmp r2, #0	@ 0003c92c 002a
.org 0x3c92e
	bne.n 0x3c968	@ 0003c92e 1bd1
.org 0x3c930
	ldrb r1, [r4, #10]	@ 0003c930 a17a
.org 0x3c932
	movs r0, #254	@ 0003c932 fe20
.org 0x3c934
	ands r0, r1	@ 0003c934 0840
.org 0x3c936
	movs r1, #253	@ 0003c936 fd21
.org 0x3c938
	ands r0, r1	@ 0003c938 0840
.org 0x3c93a
	strb r0, [r4, #10]	@ 0003c93a a072
.org 0x3c93c
	adds r0, r4, #0	@ 0003c93c 201c
.org 0x3c93e
	adds r0, #140	@ 0003c93e 8c30
.org 0x3c940
	str r2, [r0, #0]	@ 0003c940 0260
.org 0x3c942
	adds r0, #4	@ 0003c942 0430
.org 0x3c944
	str r2, [r0, #0]	@ 0003c944 0260
.org 0x3c946
	adds r0, #4	@ 0003c946 0430
.org 0x3c948
	strb r2, [r0, #0]	@ 0003c948 0270
.org 0x3c94a
	ldrb r1, [r4, #10]	@ 0003c94a a17a
.org 0x3c94c
	movs r0, #251	@ 0003c94c fb20
.org 0x3c94e
	ands r0, r1	@ 0003c94e 0840
.org 0x3c950
	strb r0, [r4, #10]	@ 0003c950 a072
.org 0x3c952
	ldr r1, [pc, #16]	@ 0003c952 0449
.org 0x3c954
	ldrb r0, [r4, #9]	@ 0003c954 607a
.org 0x3c956
	lsls r0, r0, #2	@ 0003c956 8000
.org 0x3c958
	adds r0, r0, r1	@ 0003c958 4018
.org 0x3c95a
	movs r1, #3	@ 0003c95a 0321
.org 0x3c95c
	str r1, [r4, #12]	@ 0003c95c e160
.org 0x3c95e
	ldr r0, [r0, #0]	@ 0003c95e 0068
.org 0x3c960
	ldr r0, [r0, #12]	@ 0003c960 c068
.org 0x3c962
	b.n 0x3ca68	@ 0003c962 81e0
.org 0x3c964
	.byte 0xf8,0x39,0x85,0x08	@ 0003c964 data
.org 0x3c968
	ldrb r0, [r4, #13]	@ 0003c968 607b
.org 0x3c96a
	cmp r0, #0	@ 0003c96a 0028
.org 0x3c96c
	bne.n 0x3c99c	@ 0003c96c 16d1
.org 0x3c96e
	ldrb r0, [r4, #18]	@ 0003c96e a07c
.org 0x3c970
	cmp r0, #1	@ 0003c970 0128
.org 0x3c972
	bls.n 0x3c984	@ 0003c972 07d9
.org 0x3c974
	ldrb r0, [r4, #10]	@ 0003c974 a07a
.org 0x3c976
	movs r1, #1	@ 0003c976 0121
.org 0x3c978
	orrs r1, r0	@ 0003c978 0143
.org 0x3c97a
	strb r1, [r4, #10]	@ 0003c97a a172
.org 0x3c97c
	ldrb r0, [r4, #13]	@ 0003c97c 607b
.org 0x3c97e
	adds r0, #1	@ 0003c97e 0130
.org 0x3c980
	strb r0, [r4, #13]	@ 0003c980 6073
.org 0x3c982
	b.n 0x3c99c	@ 0003c982 0be0
.org 0x3c984
	adds r0, r4, #0	@ 0003c984 201c
.org 0x3c986
	adds r0, #116	@ 0003c986 7430
.org 0x3c988
	ldr r1, [pc, #76]	@ 0003c988 1349
.org 0x3c98a
	bl 0x5784	@ 0003c98a c8f7fbfe
.org 0x3c98e
	ldrb r1, [r4, #10]	@ 0003c98e a17a
.org 0x3c990
	movs r0, #254	@ 0003c990 fe20
.org 0x3c992
	ands r0, r1	@ 0003c992 0840
.org 0x3c994
	strb r0, [r4, #10]	@ 0003c994 a072
.org 0x3c996
	ldrb r0, [r4, #18]	@ 0003c996 a07c
.org 0x3c998
	adds r0, #1	@ 0003c998 0130
.org 0x3c99a
	strb r0, [r4, #18]	@ 0003c99a a074
.org 0x3c99c
	ldrb r5, [r4, #13]	@ 0003c99c 657b
.org 0x3c99e
	cmp r5, #1	@ 0003c99e 012d
.org 0x3c9a0
	bne.n 0x3ca28	@ 0003c9a0 42d1
.org 0x3c9a2
	adds r0, r4, #0	@ 0003c9a2 201c
.org 0x3c9a4
	bl 0x1cff0	@ 0003c9a4 e0f724fb
.org 0x3c9a8
	adds r0, r4, #0	@ 0003c9a8 201c
.org 0x3c9aa
	adds r0, #113	@ 0003c9aa 7130
.org 0x3c9ac
	movs r1, #0	@ 0003c9ac 0021
.org 0x3c9ae
	ldrsb r1, [r0, r1]	@ 0003c9ae 4156
.org 0x3c9b0
	adds r5, r4, #0	@ 0003c9b0 251c
.org 0x3c9b2
	adds r5, #180	@ 0003c9b2 b435
.org 0x3c9b4
	adds r7, r0, #0	@ 0003c9b4 071c
.org 0x3c9b6
	cmp r1, #3	@ 0003c9b6 0329
.org 0x3c9b8
	ble.n 0x3c9f2	@ 0003c9b8 1bdd
.org 0x3c9ba
	ldrb r1, [r6, #30]	@ 0003c9ba b17f
.org 0x3c9bc
	lsls r1, r1, #8	@ 0003c9bc 0902
.org 0x3c9be
	adds r0, r6, #0	@ 0003c9be 301c
.org 0x3c9c0
	adds r0, #112	@ 0003c9c0 7030
.org 0x3c9c2
	ldrb r0, [r0, #0]	@ 0003c9c2 0078
.org 0x3c9c4
	orrs r0, r1	@ 0003c9c4 0843
.org 0x3c9c6
	movs r1, #200	@ 0003c9c6 c821
.org 0x3c9c8
	lsls r1, r1, #5	@ 0003c9c8 4901
.org 0x3c9ca
	cmp r0, r1	@ 0003c9ca 8842
.org 0x3c9cc
	beq.n 0x3c9dc	@ 0003c9cc 06d0
.org 0x3c9ce
	ldrb r0, [r4, #13]	@ 0003c9ce 607b
.org 0x3c9d0
	adds r0, #1	@ 0003c9d0 0130
.org 0x3c9d2
	strb r0, [r4, #13]	@ 0003c9d2 6073
.org 0x3c9d4
	b.n 0x3c9f2	@ 0003c9d4 0de0
.org 0x3c9d6
	.byte 0x00	@ 0003c9d6 data
.org 0x3c9d7
	.byte 0x00	@ 0003c9d7 data
.org 0x3c9d8
	.byte 0x24,0x4d,0x85,0x08	@ 0003c9d8 data
.org 0x3c9dc
	movs r0, #10	@ 0003c9dc 0a20
.org 0x3c9de
	strb r0, [r5, #13]	@ 0003c9de 6873
.org 0x3c9e0
	adds r0, r6, #0	@ 0003c9e0 301c
.org 0x3c9e2
	bl 0x3a4e8	@ 0003c9e2 fdf781fd
.org 0x3c9e6
	ldrb r1, [r5, #13]	@ 0003c9e6 697b
.org 0x3c9e8
	adds r0, r0, r1	@ 0003c9e8 4018
.org 0x3c9ea
	strb r0, [r5, #13]	@ 0003c9ea 6873
.org 0x3c9ec
	ldr r0, [pc, #48]	@ 0003c9ec 0c48
.org 0x3c9ee
	ldrb r0, [r0, #0]	@ 0003c9ee 0078
.org 0x3c9f0
	strb r0, [r5, #12]	@ 0003c9f0 2873
.org 0x3c9f2
	adds r0, r4, #0	@ 0003c9f2 201c
.org 0x3c9f4
	adds r0, #116	@ 0003c9f4 7430
.org 0x3c9f6
	ldr r2, [pc, #44]	@ 0003c9f6 0b4a
.org 0x3c9f8
	ldrb r1, [r4, #16]	@ 0003c9f8 217c
.org 0x3c9fa
	lsls r1, r1, #2	@ 0003c9fa 8900
.org 0x3c9fc
	adds r1, r1, r2	@ 0003c9fc 8918
.org 0x3c9fe
	movs r2, #0	@ 0003c9fe 0022
.org 0x3ca00
	ldrsb r2, [r7, r2]	@ 0003ca00 ba56
.org 0x3ca02
	ldr r1, [r1, #0]	@ 0003ca02 0968
.org 0x3ca04
	lsls r2, r2, #2	@ 0003ca04 9200
.org 0x3ca06
	adds r2, r2, r1	@ 0003ca06 5218
.org 0x3ca08
	ldr r1, [r2, #0]	@ 0003ca08 1168
.org 0x3ca0a
	ldrb r2, [r5, #13]	@ 0003ca0a 6a7b
.org 0x3ca0c
	ldrb r3, [r5, #12]	@ 0003ca0c 2b7b
.org 0x3ca0e
	ldrb r4, [r5, #14]	@ 0003ca0e ac7b
.org 0x3ca10
	str r4, [sp, #0]	@ 0003ca10 0094
.org 0x3ca12
	movs r4, #1	@ 0003ca12 0124
.org 0x3ca14
	negs r4, r4	@ 0003ca14 6442
.org 0x3ca16
	str r4, [sp, #4]	@ 0003ca16 0194
.org 0x3ca18
	bl 0x5794	@ 0003ca18 c8f7bcfe
.org 0x3ca1c
	b.n 0x3ca6a	@ 0003ca1c 25e0
.org 0x3ca1e
	.byte 0x00	@ 0003ca1e data
.org 0x3ca1f
	.byte 0x00	@ 0003ca1f data
.org 0x3ca20
	.byte 0xb0,0x3e,0x85,0x08	@ 0003ca20 data
.org 0x3ca24
	.byte 0x10,0x50,0x85,0x08	@ 0003ca24 data
.org 0x3ca28
	cmp r5, #2	@ 0003ca28 022d
.org 0x3ca2a
	bne.n 0x3ca6a	@ 0003ca2a 1ed1
.org 0x3ca2c
	ldrb r0, [r4, #14]	@ 0003ca2c a07b
.org 0x3ca2e
	cmp r0, #0	@ 0003ca2e 0028
.org 0x3ca30
	bne.n 0x3ca4a	@ 0003ca30 0bd1
.org 0x3ca32
	ldr r1, [pc, #64]	@ 0003ca32 1049
.org 0x3ca34
	adds r0, r4, #0	@ 0003ca34 201c
.org 0x3ca36
	bl 0x1cf00	@ 0003ca36 e0f763fa
.org 0x3ca3a
	adds r0, r4, #0	@ 0003ca3a 201c
.org 0x3ca3c
	adds r0, #116	@ 0003ca3c 7430
.org 0x3ca3e
	ldr r1, [pc, #56]	@ 0003ca3e 0e49
.org 0x3ca40
	bl 0x5784	@ 0003ca40 c8f7a0fe
.org 0x3ca44
	ldrb r0, [r4, #14]	@ 0003ca44 a07b
.org 0x3ca46
	adds r0, #1	@ 0003ca46 0130
.org 0x3ca48
	strb r0, [r4, #14]	@ 0003ca48 a073
.org 0x3ca4a
	adds r0, r4, #0	@ 0003ca4a 201c
.org 0x3ca4c
	bl 0x1cff0	@ 0003ca4c e0f7d0fa
.org 0x3ca50
	adds r0, r4, #0	@ 0003ca50 201c
.org 0x3ca52
	adds r0, #115	@ 0003ca52 7330
.org 0x3ca54
	ldrb r0, [r0, #0]	@ 0003ca54 0078
.org 0x3ca56
	cmp r0, #3	@ 0003ca56 0328
.org 0x3ca58
	bne.n 0x3ca6a	@ 0003ca58 07d1
.org 0x3ca5a
	ldr r1, [pc, #32]	@ 0003ca5a 0849
.org 0x3ca5c
	ldrb r0, [r4, #9]	@ 0003ca5c 607a
