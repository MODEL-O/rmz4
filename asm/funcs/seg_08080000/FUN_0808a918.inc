@ FUN_0808a918  entry 0x0808a918  size 188
.thumb
.org 0x8a918
FUN_0808a918:
	push {r4, r5, lr}	@ 0008a918 30b5
.org 0x8a91a
	sub sp, #8	@ 0008a91a 82b0
.org 0x8a91c
	adds r5, r0, #0	@ 0008a91c 051c
.org 0x8a91e
	ldrb r4, [r5, #14]	@ 0008a91e ac7b
.org 0x8a920
	cmp r4, #1	@ 0008a920 012c
.org 0x8a922
	beq.n 0x8a962	@ 0008a922 1ed0
.org 0x8a924
	cmp r4, #1	@ 0008a924 012c
.org 0x8a926
	bgt.n 0x8a92e	@ 0008a926 02dc
.org 0x8a928
	cmp r4, #0	@ 0008a928 002c
.org 0x8a92a
	beq.n 0x8a934	@ 0008a92a 03d0
.org 0x8a92c
	b.n 0x8a9da	@ 0008a92c 55e0
.org 0x8a92e
	cmp r4, #2	@ 0008a92e 022c
.org 0x8a930
	beq.n 0x8a98c	@ 0008a930 2cd0
.org 0x8a932
	b.n 0x8a9da	@ 0008a932 52e0
.org 0x8a934
	adds r0, r5, #0	@ 0008a934 281c
.org 0x8a936
	adds r0, #194	@ 0008a936 c230
.org 0x8a938
	strb r4, [r0, #0]	@ 0008a938 0470
.org 0x8a93a
	ldr r1, [pc, #68]	@ 0008a93a 1149
.org 0x8a93c
	adds r0, r5, #0	@ 0008a93c 281c
.org 0x8a93e
	bl 0x1cf00	@ 0008a93e 92f7dffa
.org 0x8a942
	adds r0, r5, #0	@ 0008a942 281c
.org 0x8a944
	adds r0, #116	@ 0008a944 7430
.org 0x8a946
	ldr r1, [pc, #60]	@ 0008a946 0f49
.org 0x8a948
	ldrb r2, [r1, #9]	@ 0008a948 4a7a
.org 0x8a94a
	lsls r1, r2, #1	@ 0008a94a 5100
.org 0x8a94c
	adds r1, r1, r2	@ 0008a94c 8918
.org 0x8a94e
	lsls r1, r1, #3	@ 0008a94e c900
.org 0x8a950
	ldr r2, [pc, #52]	@ 0008a950 0d4a
.org 0x8a952
	adds r1, r1, r2	@ 0008a952 8918
.org 0x8a954
	bl 0x5784	@ 0008a954 7af716ff
.org 0x8a958
	str r4, [r5, #96]	@ 0008a958 2c66
.org 0x8a95a
	str r4, [r5, #92]	@ 0008a95a ec65
.org 0x8a95c
	ldrb r0, [r5, #14]	@ 0008a95c a87b
.org 0x8a95e
	adds r0, #1	@ 0008a95e 0130
.org 0x8a960
	strb r0, [r5, #14]	@ 0008a960 a873
.org 0x8a962
	adds r0, r5, #0	@ 0008a962 281c
.org 0x8a964
	bl 0x1cff0	@ 0008a964 92f744fb
.org 0x8a968
	adds r0, r5, #0	@ 0008a968 281c
.org 0x8a96a
	bl 0x8b1a4	@ 0008a96a 00f01bfc
.org 0x8a96e
	adds r0, r5, #0	@ 0008a96e 281c
.org 0x8a970
	adds r0, #115	@ 0008a970 7330
.org 0x8a972
	ldrb r0, [r0, #0]	@ 0008a972 0078
.org 0x8a974
	cmp r0, #3	@ 0008a974 0328
.org 0x8a976
	bne.n 0x8a9da	@ 0008a976 30d1
.org 0x8a978
	ldrb r0, [r5, #14]	@ 0008a978 a87b
.org 0x8a97a
	adds r0, #1	@ 0008a97a 0130
.org 0x8a97c
	b.n 0x8a9d8	@ 0008a97c 2ce0
.org 0x8a97e
	.byte 0x00	@ 0008a97e data
.org 0x8a97f
	.byte 0x00	@ 0008a97f data
.org 0x8a980
	.byte 0x0a,0x20,0x00,0x00	@ 0008a980 data
.org 0x8a984
	.byte 0x1c,0xf5,0x85,0x08	@ 0008a984 data
.org 0x8a988
	.byte 0xcc,0xf3,0x85,0x08	@ 0008a988 data
.org 0x8a98c
	ldr r0, [r5, #84]	@ 0008a98c 686d
.org 0x8a98e
	ldr r1, [r5, #88]	@ 0008a98e a96d
.org 0x8a990
	str r0, [sp, #0]	@ 0008a990 0090
.org 0x8a992
	str r1, [sp, #4]	@ 0008a992 0191
.org 0x8a994
	movs r0, #156	@ 0008a994 9c20
.org 0x8a996
	lsls r0, r0, #1	@ 0008a996 4000
.org 0x8a998
	bl 0x2b10	@ 0008a998 78f7baf8
.org 0x8a99c
	ldr r4, [pc, #68]	@ 0008a99c 114c
.org 0x8a99e
	ldrb r1, [r5, #10]	@ 0008a99e a97a
.org 0x8a9a0
	movs r0, #16	@ 0008a9a0 1020
.org 0x8a9a2
	ands r0, r1	@ 0008a9a2 0840
.org 0x8a9a4
	lsls r0, r0, #24	@ 0008a9a4 0006
.org 0x8a9a6
	lsrs r0, r0, #24	@ 0008a9a6 000e
.org 0x8a9a8
	negs r0, r0	@ 0008a9a8 4042
.org 0x8a9aa
	asrs r0, r0, #31	@ 0008a9aa c017
.org 0x8a9ac
	movs r2, #8	@ 0008a9ac 0822
.org 0x8a9ae
	ands r0, r2	@ 0008a9ae 1040
.org 0x8a9b0
	adds r2, r0, r4	@ 0008a9b0 0219
.org 0x8a9b2
	ldr r2, [r2, #0]	@ 0008a9b2 1268
.org 0x8a9b4
	ldr r3, [sp, #0]	@ 0008a9b4 009b
.org 0x8a9b6
	adds r2, r2, r3	@ 0008a9b6 d218
.org 0x8a9b8
	str r2, [sp, #0]	@ 0008a9b8 0092
.org 0x8a9ba
	adds r4, #4	@ 0008a9ba 0434
.org 0x8a9bc
	adds r0, r0, r4	@ 0008a9bc 0019
.org 0x8a9be
	ldr r0, [r0, #0]	@ 0008a9be 0068
.org 0x8a9c0
	ldr r2, [sp, #4]	@ 0008a9c0 019a
.org 0x8a9c2
	adds r0, r0, r2	@ 0008a9c2 8018
.org 0x8a9c4
	str r0, [sp, #4]	@ 0008a9c4 0190
.org 0x8a9c6
	lsls r1, r1, #24	@ 0008a9c6 0906
.org 0x8a9c8
	lsrs r1, r1, #28	@ 0008a9c8 090f
.org 0x8a9ca
	movs r0, #1	@ 0008a9ca 0120
.org 0x8a9cc
	ands r1, r0	@ 0008a9cc 0140
.org 0x8a9ce
	mov r0, sp	@ 0008a9ce 6846
.org 0x8a9d0
	bl 0xbe534	@ 0008a9d0 33f0b0fd
