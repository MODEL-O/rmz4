@ FUN_0804c938  entry 0x0804c938  size 302
.thumb
.org 0x4c938
FUN_0804c938:
	push {r4, r5, r6, r7, lr}	@ 0004c938 f0b5
.org 0x4c93a
	sub sp, #8	@ 0004c93a 82b0
.org 0x4c93c
	adds r5, r0, #0	@ 0004c93c 051c
.org 0x4c93e
	ldr r6, [r5, #40]	@ 0004c93e ae6a
.org 0x4c940
	bl 0x1cff0	@ 0004c940 d0f756fb
.org 0x4c944
	ldr r0, [r5, #84]	@ 0004c944 686d
.org 0x4c946
	ldr r1, [r5, #92]	@ 0004c946 e96d
.org 0x4c948
	adds r0, r0, r1	@ 0004c948 4018
.org 0x4c94a
	str r0, [r5, #84]	@ 0004c94a 6865
.org 0x4c94c
	ldrb r1, [r5, #10]	@ 0004c94c a97a
.org 0x4c94e
	movs r0, #16	@ 0004c94e 1020
.org 0x4c950
	ands r0, r1	@ 0004c950 0840
.org 0x4c952
	cmp r0, #0	@ 0004c952 0028
.org 0x4c954
	beq.n 0x4c95c	@ 0004c954 02d0
.org 0x4c956
	movs r0, #128	@ 0004c956 8020
.org 0x4c958
	lsls r0, r0, #3	@ 0004c958 c000
.org 0x4c95a
	b.n 0x4c95e	@ 0004c95a 00e0
.org 0x4c95c
	ldr r0, [pc, #44]	@ 0004c95c 0b48
.org 0x4c95e
	str r0, [r5, #92]	@ 0004c95e e865
.org 0x4c960
	ldrb r0, [r5, #18]	@ 0004c960 a87c
.org 0x4c962
	adds r7, r5, #0	@ 0004c962 2f1c
.org 0x4c964
	adds r7, #190	@ 0004c964 be37
.org 0x4c966
	adds r4, r5, #0	@ 0004c966 2c1c
.org 0x4c968
	adds r4, #189	@ 0004c968 bd34
.org 0x4c96a
	cmp r0, #63	@ 0004c96a 3f28
.org 0x4c96c
	bhi.n 0x4c9c0	@ 0004c96c 28d8
.org 0x4c96e
	adds r0, #1	@ 0004c96e 0130
.org 0x4c970
	strb r0, [r5, #18]	@ 0004c970 a874
.org 0x4c972
	lsls r0, r0, #24	@ 0004c972 0006
.org 0x4c974
	lsrs r0, r0, #24	@ 0004c974 000e
.org 0x4c976
	cmp r0, #4	@ 0004c976 0428
.org 0x4c978
	bne.n 0x4c990	@ 0004c978 0ad1
.org 0x4c97a
	ldrb r0, [r7, #0]	@ 0004c97a 3878
.org 0x4c97c
	cmp r0, #4	@ 0004c97c 0428
.org 0x4c97e
	bhi.n 0x4c9c0	@ 0004c97e 1fd8
.org 0x4c980
	adds r0, r6, #0	@ 0004c980 301c
.org 0x4c982
	adds r1, r5, #0	@ 0004c982 291c
.org 0x4c984
	movs r2, #1	@ 0004c984 0122
.org 0x4c986
	movs r3, #0	@ 0004c986 0023
.org 0x4c988
	b.n 0x4c9b6	@ 0004c988 15e0
.org 0x4c98a
	.byte 0x00	@ 0004c98a data
.org 0x4c98b
	.byte 0x00	@ 0004c98b data
.org 0x4c98c
	.byte 0x00,0xfc,0xff,0xff	@ 0004c98c data
.org 0x4c990
	cmp r0, #8	@ 0004c990 0828
.org 0x4c992
	bne.n 0x4c9a4	@ 0004c992 07d1
.org 0x4c994
	ldrb r0, [r7, #0]	@ 0004c994 3878
.org 0x4c996
	cmp r0, #3	@ 0004c996 0328
.org 0x4c998
	bhi.n 0x4c9c0	@ 0004c998 12d8
.org 0x4c99a
	adds r0, r6, #0	@ 0004c99a 301c
.org 0x4c99c
	adds r1, r5, #0	@ 0004c99c 291c
.org 0x4c99e
	movs r2, #1	@ 0004c99e 0122
.org 0x4c9a0
	movs r3, #1	@ 0004c9a0 0123
.org 0x4c9a2
	b.n 0x4c9b6	@ 0004c9a2 08e0
.org 0x4c9a4
	cmp r0, #12	@ 0004c9a4 0c28
.org 0x4c9a6
	bne.n 0x4c9c0	@ 0004c9a6 0bd1
.org 0x4c9a8
	ldrb r0, [r7, #0]	@ 0004c9a8 3878
.org 0x4c9aa
	cmp r0, #2	@ 0004c9aa 0228
.org 0x4c9ac
	bhi.n 0x4c9c0	@ 0004c9ac 08d8
.org 0x4c9ae
	adds r0, r6, #0	@ 0004c9ae 301c
.org 0x4c9b0
	adds r1, r5, #0	@ 0004c9b0 291c
.org 0x4c9b2
	movs r2, #1	@ 0004c9b2 0122
.org 0x4c9b4
	movs r3, #2	@ 0004c9b4 0223
.org 0x4c9b6
	bl 0x4c628	@ 0004c9b6 fff737fe
.org 0x4c9ba
	ldrb r0, [r4, #0]	@ 0004c9ba 2078
.org 0x4c9bc
	adds r0, #1	@ 0004c9bc 0130
.org 0x4c9be
	strb r0, [r4, #0]	@ 0004c9be 2070
.org 0x4c9c0
	adds r0, r5, #0	@ 0004c9c0 281c
.org 0x4c9c2
	adds r0, #116	@ 0004c9c2 7430
.org 0x4c9c4
	ldrb r2, [r4, #0]	@ 0004c9c4 2278
.org 0x4c9c6
	lsls r1, r2, #1	@ 0004c9c6 5100
.org 0x4c9c8
	adds r1, r1, r2	@ 0004c9c8 8918
.org 0x4c9ca
	lsls r1, r1, #4	@ 0004c9ca 0901
.org 0x4c9cc
	ldr r2, [pc, #48]	@ 0004c9cc 0c4a
.org 0x4c9ce
	adds r1, r1, r2	@ 0004c9ce 8918
.org 0x4c9d0
	adds r2, r5, #0	@ 0004c9d0 2a1c
.org 0x4c9d2
	adds r2, #191	@ 0004c9d2 bf32
.org 0x4c9d4
	ldrb r2, [r2, #0]	@ 0004c9d4 1278
.org 0x4c9d6
	movs r3, #1	@ 0004c9d6 0123
.org 0x4c9d8
	negs r3, r3	@ 0004c9d8 5b42
.org 0x4c9da
	str r3, [sp, #0]	@ 0004c9da 0093
.org 0x4c9dc
	adds r6, r7, #0	@ 0004c9dc 3e1c
.org 0x4c9de
	ldrb r4, [r6, #0]	@ 0004c9de 3478
.org 0x4c9e0
	str r4, [sp, #4]	@ 0004c9e0 0194
.org 0x4c9e2
	bl 0x5794	@ 0004c9e2 b8f7d7fe
.org 0x4c9e6
	adds r0, r5, #0	@ 0004c9e6 281c
.org 0x4c9e8
	bl 0x4cc2c	@ 0004c9e8 00f020f9
.org 0x4c9ec
	lsls r0, r0, #24	@ 0004c9ec 0006
.org 0x4c9ee
	lsrs r2, r0, #24	@ 0004c9ee 020e
.org 0x4c9f0
	cmp r2, #2	@ 0004c9f0 022a
.org 0x4c9f2
	bne.n 0x4ca08	@ 0004c9f2 09d1
.org 0x4c9f4
	ldr r1, [pc, #12]	@ 0004c9f4 0349
.org 0x4c9f6
	ldrb r0, [r5, #9]	@ 0004c9f6 687a
.org 0x4c9f8
	lsls r0, r0, #2	@ 0004c9f8 8000
.org 0x4c9fa
	adds r0, r0, r1	@ 0004c9fa 4018
.org 0x4c9fc
	str r2, [r5, #12]	@ 0004c9fc ea60
.org 0x4c9fe
	b.n 0x4ca52	@ 0004c9fe 28e0
.org 0x4ca00
	.byte 0x74,0x77,0x85,0x08	@ 0004ca00 data
.org 0x4ca04
	.byte 0xf8,0x39,0x85,0x08	@ 0004ca04 data
.org 0x4ca08
	adds r4, r5, #0	@ 0004ca08 2c1c
.org 0x4ca0a
	adds r4, #140	@ 0004ca0a 8c34
.org 0x4ca0c
	ldr r0, [r4, #0]	@ 0004ca0c 2068
.org 0x4ca0e
	movs r1, #128	@ 0004ca0e 8021
.org 0x4ca10
	lsls r1, r1, #5	@ 0004ca10 4901
.org 0x4ca12
	ands r0, r1	@ 0004ca12 0840
.org 0x4ca14
	cmp r0, #0	@ 0004ca14 0028
.org 0x4ca16
	beq.n 0x4ca32	@ 0004ca16 0cd0
.org 0x4ca18
	adds r0, r5, #0	@ 0004ca18 281c
.org 0x4ca1a
	adds r0, #84	@ 0004ca1a 5430
.org 0x4ca1c
	ldrb r2, [r5, #10]	@ 0004ca1c aa7a
.org 0x4ca1e
	lsrs r2, r2, #4	@ 0004ca1e 1209
.org 0x4ca20
	movs r1, #1	@ 0004ca20 0121
.org 0x4ca22
	ands r2, r1	@ 0004ca22 0a40
.org 0x4ca24
	movs r1, #6	@ 0004ca24 0621
.org 0x4ca26
	bl 0xd1bcc	@ 0004ca26 85f0d1f8
.org 0x4ca2a
	movs r0, #43	@ 0004ca2a 2b20
.org 0x4ca2c
	bl 0x2b10	@ 0004ca2c b6f770f8
.org 0x4ca30
	movs r2, #1	@ 0004ca30 0122
.org 0x4ca32
	cmp r2, #0	@ 0004ca32 002a
.org 0x4ca34
	bne.n 0x4ca40	@ 0004ca34 04d1
.org 0x4ca36
	ldr r0, [r4, #0]	@ 0004ca36 2068
.org 0x4ca38
	movs r1, #4	@ 0004ca38 0421
.org 0x4ca3a
	ands r0, r1	@ 0004ca3a 0840
.org 0x4ca3c
	cmp r0, #0	@ 0004ca3c 0028
.org 0x4ca3e
	beq.n 0x4ca68	@ 0004ca3e 13d0
.org 0x4ca40
	ldrb r0, [r6, #0]	@ 0004ca40 3078
.org 0x4ca42
	cmp r0, #5	@ 0004ca42 0528
.org 0x4ca44
	bne.n 0x4ca60	@ 0004ca44 0cd1
.org 0x4ca46
	ldr r1, [pc, #20]	@ 0004ca46 0549
.org 0x4ca48
	ldrb r0, [r5, #9]	@ 0004ca48 687a
.org 0x4ca4a
	lsls r0, r0, #2	@ 0004ca4a 8000
.org 0x4ca4c
	adds r0, r0, r1	@ 0004ca4c 4018
.org 0x4ca4e
	movs r1, #2	@ 0004ca4e 0221
.org 0x4ca50
	str r1, [r5, #12]	@ 0004ca50 e960
.org 0x4ca52
	ldr r0, [r0, #0]	@ 0004ca52 0068
.org 0x4ca54
	ldr r0, [r0, #8]	@ 0004ca54 8068
.org 0x4ca56
	str r0, [r5, #20]	@ 0004ca56 6861
.org 0x4ca58
	b.n 0x4ca72	@ 0004ca58 0be0
.org 0x4ca5a
	.byte 0x00	@ 0004ca5a data
.org 0x4ca5b
	.byte 0x00	@ 0004ca5b data
.org 0x4ca5c
	.byte 0xf8,0x39,0x85,0x08	@ 0004ca5c data
.org 0x4ca60
	adds r0, #1	@ 0004ca60 0130
.org 0x4ca62
	strb r0, [r7, #0]	@ 0004ca62 3870
.org 0x4ca64
	movs r0, #8	@ 0004ca64 0820
