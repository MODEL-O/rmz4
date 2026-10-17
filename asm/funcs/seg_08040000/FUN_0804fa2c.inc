@ FUN_0804fa2c  entry 0x0804fa2c  size 106
.thumb
.org 0x4fa2c
FUN_0804fa2c:
	push {r4, r5, r6, lr}	@ 0004fa2c 70b5
.org 0x4fa2e
	adds r4, r0, #0	@ 0004fa2e 041c
.org 0x4fa30
	bl 0x1cc9c	@ 0004fa30 cdf734f9
.org 0x4fa34
	adds r0, r4, #0	@ 0004fa34 201c
.org 0x4fa36
	bl 0x1ceec	@ 0004fa36 cdf759fa
.org 0x4fa3a
	ldrb r1, [r4, #10]	@ 0004fa3a a17a
.org 0x4fa3c
	movs r0, #1	@ 0004fa3c 0120
.org 0x4fa3e
	movs r6, #0	@ 0004fa3e 0026
.org 0x4fa40
	orrs r0, r1	@ 0004fa40 0843
.org 0x4fa42
	movs r1, #2	@ 0004fa42 0221
.org 0x4fa44
	orrs r0, r1	@ 0004fa44 0843
.org 0x4fa46
	strb r0, [r4, #10]	@ 0004fa46 a072
.org 0x4fa48
	ldr r1, [pc, #76]	@ 0004fa48 1349
.org 0x4fa4a
	adds r0, r4, #0	@ 0004fa4a 201c
.org 0x4fa4c
	bl 0x1cf00	@ 0004fa4c cdf758fa
.org 0x4fa50
	ldrb r1, [r4, #10]	@ 0004fa50 a17a
.org 0x4fa52
	movs r0, #4	@ 0004fa52 0420
.org 0x4fa54
	orrs r0, r1	@ 0004fa54 0843
.org 0x4fa56
	strb r0, [r4, #10]	@ 0004fa56 a072
.org 0x4fa58
	adds r5, r4, #0	@ 0004fa58 251c
.org 0x4fa5a
	adds r5, #116	@ 0004fa5a 7435
.org 0x4fa5c
	ldr r1, [pc, #60]	@ 0004fa5c 0f49
.org 0x4fa5e
	adds r2, r4, #0	@ 0004fa5e 221c
.org 0x4fa60
	adds r2, #84	@ 0004fa60 5432
.org 0x4fa62
	adds r0, r5, #0	@ 0004fa62 281c
.org 0x4fa64
	movs r3, #8	@ 0004fa64 0823
.org 0x4fa66
	bl 0x5760	@ 0004fa66 b5f77bfe
.org 0x4fa6a
	str r4, [r5, #44]	@ 0004fa6a ec62
.org 0x4fa6c
	ldr r0, [pc, #48]	@ 0004fa6c 0c48
.org 0x4fa6e
	str r0, [r5, #36]	@ 0004fa6e 6862
.org 0x4fa70
	strb r6, [r4, #18]	@ 0004fa70 a674
.org 0x4fa72
	movs r0, #69	@ 0004fa72 4520
.org 0x4fa74
	bl 0x2b10	@ 0004fa74 b3f74cf8
.org 0x4fa78
	ldr r1, [pc, #40]	@ 0004fa78 0a49
.org 0x4fa7a
	ldrb r0, [r4, #9]	@ 0004fa7a 607a
.org 0x4fa7c
	lsls r0, r0, #2	@ 0004fa7c 8000
.org 0x4fa7e
	adds r0, r0, r1	@ 0004fa7e 4018
.org 0x4fa80
	movs r1, #1	@ 0004fa80 0121
.org 0x4fa82
	str r1, [r4, #12]	@ 0004fa82 e160
.org 0x4fa84
	ldr r0, [r0, #0]	@ 0004fa84 0068
.org 0x4fa86
	ldr r0, [r0, #4]	@ 0004fa86 4068
.org 0x4fa88
	str r0, [r4, #20]	@ 0004fa88 6061
.org 0x4fa8a
	adds r0, r4, #0	@ 0004fa8a 201c
.org 0x4fa8c
	bl 0x4faa8	@ 0004fa8c 00f00cf8
.org 0x4fa90
	pop {r4, r5, r6}	@ 0004fa90 70bc
.org 0x4fa92
	pop {r0}	@ 0004fa92 01bc
.org 0x4fa94
	bx r0	@ 0004fa94 0047
