@ FUN_0801c924  entry 0x0801c924  size 226
.thumb
.org 0x1c924
FUN_0801c924:
	push {r4, r5, r6, r7, lr}	@ 0001c924 f0b5
.org 0x1c926
	mov r7, r9	@ 0001c926 4f46
.org 0x1c928
	mov r6, r8	@ 0001c928 4646
.org 0x1c92a
	push {r6, r7}	@ 0001c92a c0b4
.org 0x1c92c
	adds r6, r0, #0	@ 0001c92c 061c
.org 0x1c92e
	mov r9, r1	@ 0001c92e 8946
.org 0x1c930
	bl 0x54b4	@ 0001c930 e8f7c0fd
.org 0x1c934
	ldr r0, [r6, #12]	@ 0001c934 f068
.org 0x1c936
	ldr r0, [r0, #4]	@ 0001c936 4068
.org 0x1c938
	str r0, [r6, #12]	@ 0001c938 f060
.org 0x1c93a
	adds r4, r0, #0	@ 0001c93a 041c
.org 0x1c93c
	adds r0, r6, #0	@ 0001c93c 301c
.org 0x1c93e
	adds r0, #20	@ 0001c93e 1430
.org 0x1c940
	cmp r4, r0	@ 0001c940 8442
.org 0x1c942
	beq.n 0x1c9fe	@ 0001c942 5cd0
.org 0x1c944
	movs r0, #1	@ 0001c944 0120
.org 0x1c946
	mov r8, r0	@ 0001c946 8046
.org 0x1c948
	ldrb r1, [r4, #10]	@ 0001c948 a17a
.org 0x1c94a
	mov r0, r8	@ 0001c94a 4046
.org 0x1c94c
	ands r0, r1	@ 0001c94c 0840
.org 0x1c94e
	cmp r0, #0	@ 0001c94e 0028
.org 0x1c950
	beq.n 0x1c9ee	@ 0001c950 4dd0
.org 0x1c952
	adds r5, r4, #0	@ 0001c952 251c
.org 0x1c954
	adds r5, #52	@ 0001c954 3435
.org 0x1c956
	movs r0, #64	@ 0001c956 4020
.org 0x1c958
	ands r0, r1	@ 0001c958 0840
.org 0x1c95a
	cmp r0, #0	@ 0001c95a 0028
.org 0x1c95c
	beq.n 0x1c9be	@ 0001c95c 2fd0
.org 0x1c95e
	ldr r3, [pc, #64]	@ 0001c95e 104b
.org 0x1c960
	ldrb r2, [r3, #0]	@ 0001c960 1a78
.org 0x1c962
	movs r0, #31	@ 0001c962 1f20
.org 0x1c964
	ands r2, r0	@ 0001c964 0240
.org 0x1c966
	lsls r2, r2, #1	@ 0001c966 5200
.org 0x1c968
	ldrb r0, [r5, #19]	@ 0001c968 e87c
.org 0x1c96a
	movs r7, #63	@ 0001c96a 3f27
.org 0x1c96c
	negs r7, r7	@ 0001c96c 7f42
.org 0x1c96e
	adds r1, r7, #0	@ 0001c96e 391c
.org 0x1c970
	ands r0, r1	@ 0001c970 0840
.org 0x1c972
	orrs r0, r2	@ 0001c972 1043
.org 0x1c974
	strb r0, [r5, #19]	@ 0001c974 e874
.org 0x1c976
	ldrb r0, [r3, #0]	@ 0001c976 1878
.org 0x1c978
	cmp r0, #30	@ 0001c978 1e28
.org 0x1c97a
	bhi.n 0x1c980	@ 0001c97a 01d8
.org 0x1c97c
	adds r0, #1	@ 0001c97c 0130
.org 0x1c97e
	strb r0, [r3, #0]	@ 0001c97e 1870
.org 0x1c980
	ldrb r1, [r4, #11]	@ 0001c980 e17a
.org 0x1c982
	mov r0, r8	@ 0001c982 4046
.org 0x1c984
	ands r0, r1	@ 0001c984 0840
.org 0x1c986
	cmp r0, #0	@ 0001c986 0028
.org 0x1c988
	beq.n 0x1c9b2	@ 0001c988 13d0
.org 0x1c98a
	movs r0, #2	@ 0001c98a 0220
.org 0x1c98c
	ands r0, r1	@ 0001c98c 0840
.org 0x1c98e
	cmp r0, #0	@ 0001c98e 0028
.org 0x1c990
	beq.n 0x1c9a4	@ 0001c990 08d0
.org 0x1c992
	adds r0, r4, #0	@ 0001c992 201c
.org 0x1c994
	adds r0, #36	@ 0001c994 2430
.org 0x1c996
	ldrb r1, [r0, #0]	@ 0001c996 0178
.org 0x1c998
	adds r0, r5, #0	@ 0001c998 281c
.org 0x1c99a
	bl 0x590	@ 0001c99a e3f7f9fd
.org 0x1c99e
	b.n 0x1c9be	@ 0001c99e 0ee0
.org 0x1c9a0
	.byte 0x04,0xdc,0x02,0x02	@ 0001c9a0 data
.org 0x1c9a4
	adds r0, r4, #0	@ 0001c9a4 201c
.org 0x1c9a6
	adds r0, #36	@ 0001c9a6 2430
.org 0x1c9a8
	ldrb r1, [r0, #0]	@ 0001c9a8 0178
.org 0x1c9aa
	adds r0, r5, #0	@ 0001c9aa 281c
.org 0x1c9ac
	bl 0x590	@ 0001c9ac e3f7f0fd
.org 0x1c9b0
	b.n 0x1c9be	@ 0001c9b0 05e0
.org 0x1c9b2
	adds r0, r4, #0	@ 0001c9b2 201c
.org 0x1c9b4
	adds r0, #36	@ 0001c9b4 2430
.org 0x1c9b6
	ldrb r1, [r0, #0]	@ 0001c9b6 0178
.org 0x1c9b8
	adds r0, r5, #0	@ 0001c9b8 281c
.org 0x1c9ba
	bl 0x53c	@ 0001c9ba e3f7bffd
.org 0x1c9be
	ldrb r1, [r4, #10]	@ 0001c9be a17a
.org 0x1c9c0
	movs r0, #8	@ 0001c9c0 0820
.org 0x1c9c2
	ands r0, r1	@ 0001c9c2 0840
.org 0x1c9c4
	cmp r0, #0	@ 0001c9c4 0028
.org 0x1c9c6
	beq.n 0x1c9de	@ 0001c9c6 0ad0
.org 0x1c9c8
	ldrb r2, [r5, #21]	@ 0001c9c8 6a7d
.org 0x1c9ca
	lsls r2, r2, #28	@ 0001c9ca 1207
.org 0x1c9cc
	lsrs r2, r2, #30	@ 0001c9cc 920f
.org 0x1c9ce
	adds r0, r4, #0	@ 0001c9ce 201c
.org 0x1c9d0
	adds r0, #37	@ 0001c9d0 2530
.org 0x1c9d2
	ldrb r3, [r0, #0]	@ 0001c9d2 0378
.org 0x1c9d4
	mov r0, r9	@ 0001c9d4 4846
.org 0x1c9d6
	adds r1, r5, #0	@ 0001c9d6 291c
.org 0x1c9d8
	bl 0x33fc	@ 0001c9d8 e6f710fd
.org 0x1c9dc
	b.n 0x1c9ee	@ 0001c9dc 07e0
.org 0x1c9de
	adds r0, r4, #0	@ 0001c9de 201c
.org 0x1c9e0
	adds r0, #37	@ 0001c9e0 2530
.org 0x1c9e2
	ldrb r3, [r0, #0]	@ 0001c9e2 0378
.org 0x1c9e4
	mov r0, r9	@ 0001c9e4 4846
.org 0x1c9e6
	adds r1, r5, #0	@ 0001c9e6 291c
.org 0x1c9e8
	movs r2, #0	@ 0001c9e8 0022
.org 0x1c9ea
	bl 0x33fc	@ 0001c9ea e6f707fd
.org 0x1c9ee
	ldr r0, [r6, #12]	@ 0001c9ee f068
.org 0x1c9f0
	ldr r0, [r0, #4]	@ 0001c9f0 4068
.org 0x1c9f2
	str r0, [r6, #12]	@ 0001c9f2 f060
.org 0x1c9f4
	adds r4, r0, #0	@ 0001c9f4 041c
.org 0x1c9f6
	adds r0, r6, #0	@ 0001c9f6 301c
.org 0x1c9f8
	adds r0, #20	@ 0001c9f8 1430
.org 0x1c9fa
	cmp r4, r0	@ 0001c9fa 8442
.org 0x1c9fc
	bne.n 0x1c948	@ 0001c9fc a4d1
.org 0x1c9fe
	pop {r3, r4}	@ 0001c9fe 18bc
.org 0x1ca00
	mov r8, r3	@ 0001ca00 9846
.org 0x1ca02
	mov r9, r4	@ 0001ca02 a146
.org 0x1ca04
	pop {r4, r5, r6, r7}	@ 0001ca04 f0bc
