@ FUN_0805d93c  entry 0x0805d93c  size 226
.thumb
.org 0x5d93c
FUN_0805d93c:
	push {r4, r5, r6, r7, lr}	@ 0005d93c f0b5
.org 0x5d93e
	sub sp, #12	@ 0005d93e 83b0
.org 0x5d940
	adds r5, r0, #0	@ 0005d940 051c
.org 0x5d942
	ldr r1, [pc, #220]	@ 0005d942 3749
.org 0x5d944
	mov r0, sp	@ 0005d944 6846
.org 0x5d946
	movs r2, #6	@ 0005d946 0622
.org 0x5d948
	bl 0x129258	@ 0005d948 cbf086fc
.org 0x5d94c
	add r6, sp, #8	@ 0005d94c 02ae
.org 0x5d94e
	ldr r1, [pc, #212]	@ 0005d94e 3549
.org 0x5d950
	adds r0, r6, #0	@ 0005d950 301c
.org 0x5d952
	movs r2, #3	@ 0005d952 0322
.org 0x5d954
	bl 0x129258	@ 0005d954 cbf080fc
.org 0x5d958
	ldrb r2, [r5, #16]	@ 0005d958 2a7c
.org 0x5d95a
	adds r7, r2, #0	@ 0005d95a 171c
.org 0x5d95c
	ldrb r4, [r5, #15]	@ 0005d95c ec7b
.org 0x5d95e
	cmp r4, #0	@ 0005d95e 002c
.org 0x5d960
	bne.n 0x5d984	@ 0005d960 10d1
.org 0x5d962
	adds r1, r5, #0	@ 0005d962 291c
.org 0x5d964
	adds r1, #37	@ 0005d964 2531
.org 0x5d966
	movs r0, #24	@ 0005d966 1820
.org 0x5d968
	strb r0, [r1, #0]	@ 0005d968 0870
.org 0x5d96a
	lsls r0, r2, #1	@ 0005d96a 5000
.org 0x5d96c
	add r0, sp	@ 0005d96c 6844
.org 0x5d96e
	ldrb r1, [r0, #0]	@ 0005d96e 0178
.org 0x5d970
	adds r0, r5, #0	@ 0005d970 281c
.org 0x5d972
	bl 0x5ee6c	@ 0005d972 01f07bfa
.org 0x5d976
	str r4, [r5, #96]	@ 0005d976 2c66
.org 0x5d978
	movs r0, #32	@ 0005d978 2020
.org 0x5d97a
	negs r0, r0	@ 0005d97a 4042
.org 0x5d97c
	str r0, [r5, #104]	@ 0005d97c a866
.org 0x5d97e
	ldrb r0, [r5, #15]	@ 0005d97e e87b
.org 0x5d980
	adds r0, #1	@ 0005d980 0130
.org 0x5d982
	strb r0, [r5, #15]	@ 0005d982 e873
.org 0x5d984
	adds r0, r5, #0	@ 0005d984 281c
.org 0x5d986
	bl 0x1cff0	@ 0005d986 bff733fb
.org 0x5d98a
	adds r0, r5, #0	@ 0005d98a 281c
.org 0x5d98c
	adds r0, #116	@ 0005d98c 7430
.org 0x5d98e
	ldr r4, [pc, #152]	@ 0005d98e 264c
.org 0x5d990
	ldr r3, [pc, #152]	@ 0005d990 264b
.org 0x5d992
	adds r1, r5, #0	@ 0005d992 291c
.org 0x5d994
	adds r1, #184	@ 0005d994 b831
.org 0x5d996
	ldrb r2, [r1, #0]	@ 0005d996 0a78
.org 0x5d998
	lsls r1, r2, #1	@ 0005d998 5100
.org 0x5d99a
	adds r1, r1, r3	@ 0005d99a c918
.org 0x5d99c
	ldrh r1, [r1, #0]	@ 0005d99c 0988
.org 0x5d99e
	lsls r1, r1, #2	@ 0005d99e 8900
.org 0x5d9a0
	adds r1, r1, r4	@ 0005d9a0 0919
.org 0x5d9a2
	adds r3, r5, #0	@ 0005d9a2 2b1c
.org 0x5d9a4
	adds r3, #113	@ 0005d9a4 7133
.org 0x5d9a6
	movs r4, #0	@ 0005d9a6 0024
.org 0x5d9a8
	ldrsb r4, [r3, r4]	@ 0005d9a8 1c57
.org 0x5d9aa
	ldr r1, [r1, #0]	@ 0005d9aa 0968
.org 0x5d9ac
	lsls r3, r4, #2	@ 0005d9ac a300
.org 0x5d9ae
	adds r3, r3, r1	@ 0005d9ae 5b18
.org 0x5d9b0
	ldr r1, [pc, #124]	@ 0005d9b0 1f49
.org 0x5d9b2
	lsls r2, r2, #2	@ 0005d9b2 9200
.org 0x5d9b4
	adds r2, r2, r1	@ 0005d9b4 5218
.org 0x5d9b6
	ldr r1, [r2, #0]	@ 0005d9b6 1168
.org 0x5d9b8
	adds r1, r1, r4	@ 0005d9b8 0919
.org 0x5d9ba
	ldrb r1, [r1, #0]	@ 0005d9ba 0978
.org 0x5d9bc
	lsls r2, r1, #1	@ 0005d9bc 4a00
.org 0x5d9be
	adds r2, r2, r1	@ 0005d9be 5218
.org 0x5d9c0
	lsls r2, r2, #3	@ 0005d9c0 d200
.org 0x5d9c2
	ldr r1, [r3, #0]	@ 0005d9c2 1968
.org 0x5d9c4
	adds r1, r1, r2	@ 0005d9c4 8918
.org 0x5d9c6
	bl 0x5784	@ 0005d9c6 a7f7ddfe
.org 0x5d9ca
	ldr r0, [r5, #88]	@ 0005d9ca a86d
.org 0x5d9cc
	ldr r1, [r5, #96]	@ 0005d9cc 296e
.org 0x5d9ce
	adds r0, r0, r1	@ 0005d9ce 4018
.org 0x5d9d0
	str r0, [r5, #88]	@ 0005d9d0 a865
.org 0x5d9d2
	ldr r0, [r5, #104]	@ 0005d9d2 a86e
.org 0x5d9d4
	adds r1, r1, r0	@ 0005d9d4 0918
.org 0x5d9d6
	str r1, [r5, #96]	@ 0005d9d6 2966
.org 0x5d9d8
	ldr r0, [pc, #88]	@ 0005d9d8 1648
.org 0x5d9da
	cmp r1, r0	@ 0005d9da 8142
.org 0x5d9dc
	bge.n 0x5d9e0	@ 0005d9dc 00da
.org 0x5d9de
	str r0, [r5, #96]	@ 0005d9de 2866
.org 0x5d9e0
	ldr r2, [pc, #84]	@ 0005d9e0 154a
.org 0x5d9e2
	ldr r0, [r2, #56]	@ 0005d9e2 906b
.org 0x5d9e4
	ldr r1, [r5, #84]	@ 0005d9e4 696d
.org 0x5d9e6
	subs r0, r0, r1	@ 0005d9e6 401a
.org 0x5d9e8
	movs r1, #200	@ 0005d9e8 c821
.org 0x5d9ea
	lsls r1, r1, #8	@ 0005d9ea 0902
.org 0x5d9ec
	adds r0, r0, r1	@ 0005d9ec 4018
.org 0x5d9ee
	movs r1, #200	@ 0005d9ee c821
.org 0x5d9f0
	lsls r1, r1, #9	@ 0005d9f0 4902
.org 0x5d9f2
	cmp r0, r1	@ 0005d9f2 8842
.org 0x5d9f4
	bhi.n 0x5da0a	@ 0005d9f4 09d8
.org 0x5d9f6
	ldr r0, [r2, #60]	@ 0005d9f6 d06b
.org 0x5d9f8
	ldr r1, [r5, #88]	@ 0005d9f8 a96d
.org 0x5d9fa
	subs r0, r0, r1	@ 0005d9fa 401a
.org 0x5d9fc
	movs r1, #176	@ 0005d9fc b021
.org 0x5d9fe
	lsls r1, r1, #8	@ 0005d9fe 0902
.org 0x5da00
	adds r0, r0, r1	@ 0005da00 4018
.org 0x5da02
	movs r1, #176	@ 0005da02 b021
.org 0x5da04
	lsls r1, r1, #9	@ 0005da04 4902
.org 0x5da06
	cmp r0, r1	@ 0005da06 8842
.org 0x5da08
	bls.n 0x5da16	@ 0005da08 05d9
.org 0x5da0a
	adds r0, r6, r7	@ 0005da0a f019
.org 0x5da0c
	ldrb r0, [r0, #0]	@ 0005da0c 0078
.org 0x5da0e
	movs r1, #0	@ 0005da0e 0021
.org 0x5da10
	strb r0, [r5, #13]	@ 0005da10 6873
.org 0x5da12
	strb r1, [r5, #14]	@ 0005da12 a973
.org 0x5da14
	strb r1, [r5, #15]	@ 0005da14 e973
.org 0x5da16
	add sp, #12	@ 0005da16 03b0
.org 0x5da18
	pop {r4, r5, r6, r7}	@ 0005da18 f0bc
.org 0x5da1a
	pop {r0}	@ 0005da1a 01bc
.org 0x5da1c
	bx r0	@ 0005da1c 0047
