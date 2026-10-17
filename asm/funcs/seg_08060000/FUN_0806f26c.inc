@ FUN_0806f26c  entry 0x0806f26c  size 134
.thumb
.org 0x6f26c
FUN_0806f26c:
	push {r4, r5, r6, r7, lr}	@ 0006f26c f0b5
.org 0x6f26e
	sub sp, #32	@ 0006f26e 88b0
.org 0x6f270
	adds r4, r0, #0	@ 0006f270 041c
.org 0x6f272
	mov r1, sp	@ 0006f272 6946
.org 0x6f274
	ldr r0, [pc, #48]	@ 0006f274 0c48
.org 0x6f276
	ldmia r0!, {r2, r3, r5}	@ 0006f276 2cc8
.org 0x6f278
	stmia r1!, {r2, r3, r5}	@ 0006f278 2cc1
.org 0x6f27a
	ldmia r0!, {r2, r3, r7}	@ 0006f27a 8cc8
.org 0x6f27c
	stmia r1!, {r2, r3, r7}	@ 0006f27c 8cc1
.org 0x6f27e
	ldmia r0!, {r5, r7}	@ 0006f27e a0c8
.org 0x6f280
	stmia r1!, {r5, r7}	@ 0006f280 a0c1
.org 0x6f282
	adds r6, r4, #0	@ 0006f282 261c
.org 0x6f284
	adds r6, #196	@ 0006f284 c436
.org 0x6f286
	ldrb r5, [r6, #0]	@ 0006f286 3578
.org 0x6f288
	ldr r0, [pc, #32]	@ 0006f288 0848
.org 0x6f28a
	ldrh r1, [r0, #8]	@ 0006f28a 0189
.org 0x6f28c
	movs r0, #8	@ 0006f28c 0820
.org 0x6f28e
	ands r0, r1	@ 0006f28e 0840
.org 0x6f290
	cmp r0, #0	@ 0006f290 0028
.org 0x6f292
	beq.n 0x6f2b0	@ 0006f292 0dd0
.org 0x6f294
	movs r1, #173	@ 0006f294 ad21
.org 0x6f296
	lsls r1, r1, #8	@ 0006f296 0902
.org 0x6f298
	adds r0, r4, #0	@ 0006f298 201c
.org 0x6f29a
	bl 0x1cf00	@ 0006f29a adf731fe
.org 0x6f29e
	adds r0, r4, #0	@ 0006f29e 201c
.org 0x6f2a0
	bl 0x1cff0	@ 0006f2a0 adf7a6fe
.org 0x6f2a4
	b.n 0x6f2f4	@ 0006f2a4 26e0
.org 0x6f2a6
	.byte 0x00	@ 0006f2a6 data
.org 0x6f2a7
	.byte 0x00	@ 0006f2a7 data
.org 0x6f2a8
	.byte 0x14,0x99,0x12,0x08	@ 0006f2a8 data
.org 0x6f2ac
	.byte 0x10,0xe9,0x02,0x02	@ 0006f2ac data
.org 0x6f2b0
	ldr r0, [r4, #84]	@ 0006f2b0 606d
.org 0x6f2b2
	ldr r1, [r4, #88]	@ 0006f2b2 a16d
.org 0x6f2b4
	ldr r2, [pc, #68]	@ 0006f2b4 114a
.org 0x6f2b6
	ldr r3, [r2, #0]	@ 0006f2b6 1368
.org 0x6f2b8
	ldr r2, [r3, #84]	@ 0006f2b8 5a6d
.org 0x6f2ba
	ldr r3, [r3, #88]	@ 0006f2ba 9b6d
.org 0x6f2bc
	ldr r7, [pc, #64]	@ 0006f2bc 104f
.org 0x6f2be
	adds r3, r3, r7	@ 0006f2be db19
.org 0x6f2c0
	bl 0x10d398	@ 0006f2c0 9ef06af8
.org 0x6f2c4
	adds r1, r5, #0	@ 0006f2c4 291c
.org 0x6f2c6
	movs r2, #8	@ 0006f2c6 0822
.org 0x6f2c8
	bl 0x10d3c4	@ 0006f2c8 9ef07cf8
.org 0x6f2cc
	lsls r0, r0, #24	@ 0006f2cc 0006
.org 0x6f2ce
	lsrs r5, r0, #24	@ 0006f2ce 050e
.org 0x6f2d0
	adds r1, r5, #0	@ 0006f2d0 291c
.org 0x6f2d2
	adds r0, r1, #0	@ 0006f2d2 081c
.org 0x6f2d4
	adds r0, #16	@ 0006f2d4 1030
.org 0x6f2d6
	cmp r0, #0	@ 0006f2d6 0028
.org 0x6f2d8
	bge.n 0x6f2dc	@ 0006f2d8 00da
.org 0x6f2da
	adds r0, #31	@ 0006f2da 1f30
.org 0x6f2dc
	asrs r0, r0, #5	@ 0006f2dc 4011
.org 0x6f2de
	lsls r0, r0, #29	@ 0006f2de 4007
.org 0x6f2e0
	lsrs r0, r0, #27	@ 0006f2e0 c00e
.org 0x6f2e2
	add r0, sp	@ 0006f2e2 6844
.org 0x6f2e4
	ldrh r1, [r0, #0]	@ 0006f2e4 0188
.org 0x6f2e6
	adds r0, r4, #0	@ 0006f2e6 201c
.org 0x6f2e8
	bl 0x1cf00	@ 0006f2e8 adf70afe
.org 0x6f2ec
	adds r0, r4, #0	@ 0006f2ec 201c
.org 0x6f2ee
	bl 0x1cff0	@ 0006f2ee adf77ffe
