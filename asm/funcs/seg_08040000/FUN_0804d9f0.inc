@ FUN_0804d9f0  entry 0x0804d9f0  size 106
.thumb
.org 0x4d9f0
FUN_0804d9f0:
	push {r4, r5, r6, lr}	@ 0004d9f0 70b5
.org 0x4d9f2
	adds r4, r0, #0	@ 0004d9f2 041c
.org 0x4d9f4
	bl 0x1cd28	@ 0004d9f4 cff798f9
.org 0x4d9f8
	adds r0, r4, #0	@ 0004d9f8 201c
.org 0x4d9fa
	bl 0x1ceec	@ 0004d9fa cff777fa
.org 0x4d9fe
	ldrb r1, [r4, #10]	@ 0004d9fe a17a
.org 0x4da00
	movs r0, #1	@ 0004da00 0120
.org 0x4da02
	movs r6, #0	@ 0004da02 0026
.org 0x4da04
	orrs r0, r1	@ 0004da04 0843
.org 0x4da06
	movs r1, #2	@ 0004da06 0221
.org 0x4da08
	orrs r0, r1	@ 0004da08 0843
.org 0x4da0a
	strb r0, [r4, #10]	@ 0004da0a a072
.org 0x4da0c
	ldr r1, [pc, #76]	@ 0004da0c 1349
.org 0x4da0e
	adds r0, r4, #0	@ 0004da0e 201c
.org 0x4da10
	bl 0x1cf00	@ 0004da10 cff776fa
.org 0x4da14
	ldrb r1, [r4, #10]	@ 0004da14 a17a
.org 0x4da16
	movs r0, #4	@ 0004da16 0420
.org 0x4da18
	orrs r0, r1	@ 0004da18 0843
.org 0x4da1a
	strb r0, [r4, #10]	@ 0004da1a a072
.org 0x4da1c
	adds r5, r4, #0	@ 0004da1c 251c
.org 0x4da1e
	adds r5, #116	@ 0004da1e 7435
.org 0x4da20
	ldr r1, [pc, #60]	@ 0004da20 0f49
.org 0x4da22
	adds r2, r4, #0	@ 0004da22 221c
.org 0x4da24
	adds r2, #84	@ 0004da24 5432
.org 0x4da26
	adds r0, r5, #0	@ 0004da26 281c
.org 0x4da28
	movs r3, #8	@ 0004da28 0823
.org 0x4da2a
	bl 0x5760	@ 0004da2a b7f799fe
.org 0x4da2e
	str r4, [r5, #44]	@ 0004da2e ec62
.org 0x4da30
	ldr r0, [pc, #48]	@ 0004da30 0c48
.org 0x4da32
	str r0, [r5, #36]	@ 0004da32 6862
.org 0x4da34
	movs r0, #69	@ 0004da34 4520
.org 0x4da36
	bl 0x2b10	@ 0004da36 b5f76bf8
.org 0x4da3a
	strb r6, [r4, #18]	@ 0004da3a a674
.org 0x4da3c
	ldr r1, [pc, #40]	@ 0004da3c 0a49
.org 0x4da3e
	ldrb r0, [r4, #9]	@ 0004da3e 607a
.org 0x4da40
	lsls r0, r0, #2	@ 0004da40 8000
.org 0x4da42
	adds r0, r0, r1	@ 0004da42 4018
.org 0x4da44
	movs r1, #1	@ 0004da44 0121
.org 0x4da46
	str r1, [r4, #12]	@ 0004da46 e160
.org 0x4da48
	ldr r0, [r0, #0]	@ 0004da48 0068
.org 0x4da4a
	ldr r0, [r0, #4]	@ 0004da4a 4068
.org 0x4da4c
	str r0, [r4, #20]	@ 0004da4c 6061
.org 0x4da4e
	adds r0, r4, #0	@ 0004da4e 201c
.org 0x4da50
	bl 0x4da6c	@ 0004da50 00f00cf8
.org 0x4da54
	pop {r4, r5, r6}	@ 0004da54 70bc
.org 0x4da56
	pop {r0}	@ 0004da56 01bc
.org 0x4da58
	bx r0	@ 0004da58 0047
