@ FUN_081092a0  entry 0x081092a0  size 76
.thumb
.org 0x1092a0
FUN_081092a0:
	push {r4, r5, r6, r7, lr}	@ 001092a0 f0b5
.org 0x1092a2
	adds r7, r0, #0	@ 001092a2 071c
.org 0x1092a4
	adds r6, r1, #0	@ 001092a4 0e1c
.org 0x1092a6
	ldr r0, [r6, #116]	@ 001092a6 706f
.org 0x1092a8
	ldr r4, [r0, #16]	@ 001092a8 0469
.org 0x1092aa
	ldr r5, [r0, #20]	@ 001092aa 4569
.org 0x1092ac
	ldrb r1, [r6, #10]	@ 001092ac b17a
.org 0x1092ae
	movs r0, #16	@ 001092ae 1020
.org 0x1092b0
	ands r0, r1	@ 001092b0 0840
.org 0x1092b2
	cmp r0, #0	@ 001092b2 0028
.org 0x1092b4
	beq.n 0x1092c0	@ 001092b4 04d0
.org 0x1092b6
	lsls r0, r4, #16	@ 001092b6 2004
.org 0x1092b8
	asrs r0, r0, #16	@ 001092b8 0014
.org 0x1092ba
	ldr r1, [r6, #84]	@ 001092ba 716d
.org 0x1092bc
	subs r2, r1, r0	@ 001092bc 0a1a
.org 0x1092be
	b.n 0x1092c8	@ 001092be 03e0
.org 0x1092c0
	lsls r0, r4, #16	@ 001092c0 2004
.org 0x1092c2
	asrs r0, r0, #16	@ 001092c2 0014
.org 0x1092c4
	ldr r1, [r6, #84]	@ 001092c4 716d
.org 0x1092c6
	adds r2, r1, r0	@ 001092c6 0a18
.org 0x1092c8
	ldrb r1, [r6, #10]	@ 001092c8 b17a
.org 0x1092ca
	movs r0, #32	@ 001092ca 2020
.org 0x1092cc
	ands r0, r1	@ 001092cc 0840
.org 0x1092ce
	cmp r0, #0	@ 001092ce 0028
.org 0x1092d0
	beq.n 0x1092da	@ 001092d0 03d0
.org 0x1092d2
	asrs r1, r4, #16	@ 001092d2 2114
.org 0x1092d4
	ldr r0, [r6, #88]	@ 001092d4 b06d
.org 0x1092d6
	subs r3, r0, r1	@ 001092d6 431a
.org 0x1092d8
	b.n 0x1092e0	@ 001092d8 02e0
.org 0x1092da
	asrs r1, r4, #16	@ 001092da 2114
.org 0x1092dc
	ldr r0, [r6, #88]	@ 001092dc b06d
.org 0x1092de
	adds r3, r0, r1	@ 001092de 4318
.org 0x1092e0
	str r2, [r7, #0]	@ 001092e0 3a60
.org 0x1092e2
	str r3, [r7, #4]	@ 001092e2 7b60
.org 0x1092e4
	adds r0, r7, #0	@ 001092e4 381c
.org 0x1092e6
	pop {r4, r5, r6, r7}	@ 001092e6 f0bc
.org 0x1092e8
	pop {r2}	@ 001092e8 04bc
.org 0x1092ea
	bx r2	@ 001092ea 1047
