@ FUN_0804d18c  entry 0x0804d18c  size 108
.thumb
.org 0x4d18c
FUN_0804d18c:
	push {r4, r5, r6, lr}	@ 0004d18c 70b5
.org 0x4d18e
	adds r4, r0, #0	@ 0004d18e 041c
.org 0x4d190
	ldr r1, [pc, #100]	@ 0004d190 1949
.org 0x4d192
	ldrb r0, [r4, #9]	@ 0004d192 607a
.org 0x4d194
	lsls r0, r0, #2	@ 0004d194 8000
.org 0x4d196
	adds r0, r0, r1	@ 0004d196 4018
.org 0x4d198
	movs r1, #1	@ 0004d198 0121
.org 0x4d19a
	str r1, [r4, #12]	@ 0004d19a e160
.org 0x4d19c
	ldr r0, [r0, #0]	@ 0004d19c 0068
.org 0x4d19e
	ldr r0, [r0, #4]	@ 0004d19e 4068
.org 0x4d1a0
	str r0, [r4, #20]	@ 0004d1a0 6061
.org 0x4d1a2
	adds r0, r4, #0	@ 0004d1a2 201c
.org 0x4d1a4
	bl 0x1cc9c	@ 0004d1a4 cff77afd
.org 0x4d1a8
	adds r0, r4, #0	@ 0004d1a8 201c
.org 0x4d1aa
	bl 0x1ceec	@ 0004d1aa cff79ffe
.org 0x4d1ae
	ldrb r1, [r4, #10]	@ 0004d1ae a17a
.org 0x4d1b0
	movs r0, #1	@ 0004d1b0 0120
.org 0x4d1b2
	movs r6, #0	@ 0004d1b2 0026
.org 0x4d1b4
	orrs r0, r1	@ 0004d1b4 0843
.org 0x4d1b6
	movs r1, #2	@ 0004d1b6 0221
.org 0x4d1b8
	orrs r0, r1	@ 0004d1b8 0843
.org 0x4d1ba
	strb r0, [r4, #10]	@ 0004d1ba a072
.org 0x4d1bc
	ldr r1, [pc, #60]	@ 0004d1bc 0f49
.org 0x4d1be
	adds r0, r4, #0	@ 0004d1be 201c
.org 0x4d1c0
	bl 0x1cf00	@ 0004d1c0 cff79efe
.org 0x4d1c4
	adds r0, r4, #0	@ 0004d1c4 201c
.org 0x4d1c6
	bl 0x1cff0	@ 0004d1c6 cff713ff
.org 0x4d1ca
	ldrb r1, [r4, #10]	@ 0004d1ca a17a
.org 0x4d1cc
	movs r0, #4	@ 0004d1cc 0420
.org 0x4d1ce
	orrs r0, r1	@ 0004d1ce 0843
.org 0x4d1d0
	strb r0, [r4, #10]	@ 0004d1d0 a072
.org 0x4d1d2
	adds r5, r4, #0	@ 0004d1d2 251c
.org 0x4d1d4
	adds r5, #116	@ 0004d1d4 7435
.org 0x4d1d6
	ldr r1, [pc, #40]	@ 0004d1d6 0a49
.org 0x4d1d8
	adds r2, r4, #0	@ 0004d1d8 221c
.org 0x4d1da
	adds r2, #84	@ 0004d1da 5432
.org 0x4d1dc
	adds r0, r5, #0	@ 0004d1dc 281c
.org 0x4d1de
	movs r3, #8	@ 0004d1de 0823
.org 0x4d1e0
	bl 0x5760	@ 0004d1e0 b8f7befa
.org 0x4d1e4
	str r4, [r5, #44]	@ 0004d1e4 ec62
.org 0x4d1e6
	ldr r0, [pc, #28]	@ 0004d1e6 0748
.org 0x4d1e8
	str r0, [r5, #36]	@ 0004d1e8 6862
.org 0x4d1ea
	strb r6, [r4, #18]	@ 0004d1ea a674
.org 0x4d1ec
	adds r0, r4, #0	@ 0004d1ec 201c
.org 0x4d1ee
	bl 0x4d208	@ 0004d1ee 00f00bf8
.org 0x4d1f2
	pop {r4, r5, r6}	@ 0004d1f2 70bc
.org 0x4d1f4
	pop {r0}	@ 0004d1f4 01bc
.org 0x4d1f6
	bx r0	@ 0004d1f6 0047
