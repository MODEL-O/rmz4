@ FUN_0804a95c  entry 0x0804a95c  size 112
.thumb
.org 0x4a95c
FUN_0804a95c:
	push {r4, r5, r6, lr}	@ 0004a95c 70b5
.org 0x4a95e
	adds r4, r0, #0	@ 0004a95e 041c
.org 0x4a960
	ldr r1, [pc, #104]	@ 0004a960 1a49
.org 0x4a962
	ldrb r0, [r4, #9]	@ 0004a962 607a
.org 0x4a964
	lsls r0, r0, #2	@ 0004a964 8000
.org 0x4a966
	adds r0, r0, r1	@ 0004a966 4018
.org 0x4a968
	movs r1, #1	@ 0004a968 0121
.org 0x4a96a
	str r1, [r4, #12]	@ 0004a96a e160
.org 0x4a96c
	ldr r0, [r0, #0]	@ 0004a96c 0068
.org 0x4a96e
	ldr r0, [r0, #4]	@ 0004a96e 4068
.org 0x4a970
	str r0, [r4, #20]	@ 0004a970 6061
.org 0x4a972
	adds r0, r4, #0	@ 0004a972 201c
.org 0x4a974
	bl 0x1cc9c	@ 0004a974 d2f792f9
.org 0x4a978
	adds r0, r4, #0	@ 0004a978 201c
.org 0x4a97a
	bl 0x1ceec	@ 0004a97a d2f7b7fa
.org 0x4a97e
	ldrb r1, [r4, #10]	@ 0004a97e a17a
.org 0x4a980
	movs r0, #1	@ 0004a980 0120
.org 0x4a982
	movs r6, #0	@ 0004a982 0026
.org 0x4a984
	orrs r0, r1	@ 0004a984 0843
.org 0x4a986
	movs r1, #2	@ 0004a986 0221
.org 0x4a988
	orrs r0, r1	@ 0004a988 0843
.org 0x4a98a
	strb r0, [r4, #10]	@ 0004a98a a072
.org 0x4a98c
	ldr r1, [pc, #64]	@ 0004a98c 1049
.org 0x4a98e
	adds r0, r4, #0	@ 0004a98e 201c
.org 0x4a990
	bl 0x1cf00	@ 0004a990 d2f7b6fa
.org 0x4a994
	ldrb r1, [r4, #10]	@ 0004a994 a17a
.org 0x4a996
	movs r0, #4	@ 0004a996 0420
.org 0x4a998
	orrs r0, r1	@ 0004a998 0843
.org 0x4a99a
	strb r0, [r4, #10]	@ 0004a99a a072
.org 0x4a99c
	adds r5, r4, #0	@ 0004a99c 251c
.org 0x4a99e
	adds r5, #116	@ 0004a99e 7435
.org 0x4a9a0
	ldr r1, [pc, #48]	@ 0004a9a0 0c49
.org 0x4a9a2
	adds r2, r4, #0	@ 0004a9a2 221c
.org 0x4a9a4
	adds r2, #84	@ 0004a9a4 5432
.org 0x4a9a6
	adds r0, r5, #0	@ 0004a9a6 281c
.org 0x4a9a8
	movs r3, #8	@ 0004a9a8 0823
.org 0x4a9aa
	bl 0x5760	@ 0004a9aa baf7d9fe
.org 0x4a9ae
	str r4, [r5, #44]	@ 0004a9ae ec62
.org 0x4a9b0
	str r6, [r5, #36]	@ 0004a9b0 6e62
.org 0x4a9b2
	movs r0, #169	@ 0004a9b2 a920
.org 0x4a9b4
	bl 0x2b10	@ 0004a9b4 b8f7acf8
.org 0x4a9b8
	adds r0, r4, #0	@ 0004a9b8 201c
.org 0x4a9ba
	adds r0, #189	@ 0004a9ba bd30
.org 0x4a9bc
	strb r6, [r0, #0]	@ 0004a9bc 0670
.org 0x4a9be
	strb r6, [r4, #18]	@ 0004a9be a674
.org 0x4a9c0
	adds r0, r4, #0	@ 0004a9c0 201c
.org 0x4a9c2
	bl 0x4a8a0	@ 0004a9c2 fff76dff
.org 0x4a9c6
	pop {r4, r5, r6}	@ 0004a9c6 70bc
.org 0x4a9c8
	pop {r0}	@ 0004a9c8 01bc
.org 0x4a9ca
	bx r0	@ 0004a9ca 0047
