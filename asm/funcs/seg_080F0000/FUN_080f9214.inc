@ FUN_080f9214  entry 0x080f9214  size 236
.thumb
.org 0xf9214
FUN_080f9214:
	push {r4, r5, r6, r7, lr}	@ 000f9214 f0b5
.org 0xf9216
	mov r7, r8	@ 000f9216 4746
.org 0xf9218
	push {r7}	@ 000f9218 80b4
.org 0xf921a
	sub sp, #8	@ 000f921a 82b0
.org 0xf921c
	adds r7, r0, #0	@ 000f921c 071c
.org 0xf921e
	ldr r0, [r7, #84]	@ 000f921e 786d
.org 0xf9220
	ldr r1, [r7, #88]	@ 000f9220 b96d
.org 0xf9222
	str r0, [sp, #0]	@ 000f9222 0090
.org 0xf9224
	str r1, [sp, #4]	@ 000f9224 0191
.org 0xf9226
	adds r0, r7, #0	@ 000f9226 381c
.org 0xf9228
	adds r0, #84	@ 000f9228 5430
.org 0xf922a
	bl 0xf872c	@ 000f922a fff77ffa
.org 0xf922e
	lsls r0, r0, #24	@ 000f922e 0006
.org 0xf9230
	lsrs r2, r0, #24	@ 000f9230 020e
.org 0xf9232
	adds r1, r7, #0	@ 000f9232 391c
.org 0xf9234
	adds r1, #185	@ 000f9234 b931
.org 0xf9236
	movs r0, #0	@ 000f9236 0020
.org 0xf9238
	strb r0, [r1, #0]	@ 000f9238 0870
.org 0xf923a
	cmp r2, #13	@ 000f923a 0d2a
.org 0xf923c
	bne.n 0xf927a	@ 000f923c 1dd1
.org 0xf923e
	movs r4, #1	@ 000f923e 0124
.org 0xf9240
	adds r5, r1, #0	@ 000f9240 0d1c
.org 0xf9242
	ldr r0, [sp, #0]	@ 000f9242 0098
.org 0xf9244
	ldr r1, [pc, #36]	@ 000f9244 0949
.org 0xf9246
	adds r0, r0, r1	@ 000f9246 4018
.org 0xf9248
	movs r1, #0	@ 000f9248 0021
.org 0xf924a
	ldrsb r1, [r5, r1]	@ 000f924a 6956
.org 0xf924c
	lsls r1, r1, #13	@ 000f924c 4903
.org 0xf924e
	adds r0, r0, r1	@ 000f924e 4018
.org 0xf9250
	str r0, [sp, #0]	@ 000f9250 0090
.org 0xf9252
	mov r0, sp	@ 000f9252 6846
.org 0xf9254
	bl 0xf872c	@ 000f9254 fff76afa
.org 0xf9258
	lsls r0, r0, #24	@ 000f9258 0006
.org 0xf925a
	lsrs r2, r0, #24	@ 000f925a 020e
.org 0xf925c
	cmp r2, #13	@ 000f925c 0d2a
.org 0xf925e
	beq.n 0xf9270	@ 000f925e 07d0
.org 0xf9260
	ldrb r0, [r5, #0]	@ 000f9260 2878
.org 0xf9262
	movs r1, #1	@ 000f9262 0121
.org 0xf9264
	eors r0, r1	@ 000f9264 4840
.org 0xf9266
	strb r0, [r5, #0]	@ 000f9266 2870
.org 0xf9268
	b.n 0xf927a	@ 000f9268 07e0
.org 0xf926a
	.byte 0x00	@ 000f926a data
.org 0xf926b
	.byte 0x00	@ 000f926b data
.org 0xf926c
	.byte 0x00,0xf0,0xff,0xff	@ 000f926c data
.org 0xf9270
	adds r0, r4, #1	@ 000f9270 601c
.org 0xf9272
	lsls r0, r0, #16	@ 000f9272 0004
.org 0xf9274
	lsrs r4, r0, #16	@ 000f9274 040c
.org 0xf9276
	cmp r4, #239	@ 000f9276 ef2c
.org 0xf9278
	bls.n 0xf9242	@ 000f9278 e3d9
.org 0xf927a
	movs r4, #0	@ 000f927a 0024
.org 0xf927c
	adds r5, r7, #0	@ 000f927c 3d1c
.org 0xf927e
	adds r5, #185	@ 000f927e b935
.org 0xf9280
	ldr r0, [sp, #0]	@ 000f9280 0098
.org 0xf9282
	ldr r2, [pc, #36]	@ 000f9282 094a
.org 0xf9284
	adds r0, r0, r2	@ 000f9284 8018
.org 0xf9286
	movs r1, #0	@ 000f9286 0021
.org 0xf9288
	ldrsb r1, [r5, r1]	@ 000f9288 6956
.org 0xf928a
	lsls r1, r1, #13	@ 000f928a 4903
.org 0xf928c
	adds r0, r0, r1	@ 000f928c 4018
.org 0xf928e
	str r0, [sp, #0]	@ 000f928e 0090
.org 0xf9290
	mov r0, sp	@ 000f9290 6846
.org 0xf9292
	bl 0xf872c	@ 000f9292 fff74bfa
.org 0xf9296
	lsls r0, r0, #24	@ 000f9296 0006
.org 0xf9298
	lsrs r2, r0, #24	@ 000f9298 020e
.org 0xf929a
	cmp r2, #13	@ 000f929a 0d2a
.org 0xf929c
	beq.n 0xf92ac	@ 000f929c 06d0
.org 0xf929e
	ldrb r0, [r5, #0]	@ 000f929e 2878
.org 0xf92a0
	movs r1, #1	@ 000f92a0 0121
.org 0xf92a2
	eors r0, r1	@ 000f92a2 4840
.org 0xf92a4
	strb r0, [r5, #0]	@ 000f92a4 2870
.org 0xf92a6
	b.n 0xf92b6	@ 000f92a6 06e0
.org 0xf92a8
	.byte 0x00,0xf0,0xff,0xff	@ 000f92a8 data
.org 0xf92ac
	adds r0, r4, #1	@ 000f92ac 601c
.org 0xf92ae
	lsls r0, r0, #16	@ 000f92ae 0004
.org 0xf92b0
	lsrs r4, r0, #16	@ 000f92b0 040c
.org 0xf92b2
	cmp r4, #239	@ 000f92b2 ef2c
.org 0xf92b4
	bls.n 0xf9280	@ 000f92b4 e4d9
.org 0xf92b6
	lsls r4, r4, #17	@ 000f92b6 6404
.org 0xf92b8
	lsrs r4, r4, #4	@ 000f92b8 2409
.org 0xf92ba
	lsrs r1, r4, #8	@ 000f92ba 210a
.org 0xf92bc
	ldr r0, [pc, #76]	@ 000f92bc 1348
.org 0xf92be
	ldr r2, [pc, #80]	@ 000f92be 144a
.org 0xf92c0
	adds r0, r0, r2	@ 000f92c0 8018
.org 0xf92c2
	ldr r0, [r0, #0]	@ 000f92c2 0068
.org 0xf92c4
	bl 0x129198	@ 000f92c4 2ff068ff
.org 0xf92c8
	adds r6, r0, #0	@ 000f92c8 061c
.org 0xf92ca
	lsrs r0, r4, #9	@ 000f92ca 600a
.org 0xf92cc
	cmp r6, r0	@ 000f92cc 8642
.org 0xf92ce
	bcc.n 0xf92da	@ 000f92ce 04d3
.org 0xf92d0
	subs r6, r6, r0	@ 000f92d0 361a
.org 0xf92d2
	ldrb r0, [r5, #0]	@ 000f92d2 2878
.org 0xf92d4
	movs r1, #1	@ 000f92d4 0121
.org 0xf92d6
	eors r0, r1	@ 000f92d6 4840
.org 0xf92d8
	strb r0, [r5, #0]	@ 000f92d8 2870
.org 0xf92da
	movs r4, #0	@ 000f92da 0024
.org 0xf92dc
	cmp r4, r6	@ 000f92dc b442
.org 0xf92de
	bcs.n 0xf92fe	@ 000f92de 0ed2
.org 0xf92e0
	ldr r0, [pc, #48]	@ 000f92e0 0c48
.org 0xf92e2
	mov r8, r0	@ 000f92e2 8046
.org 0xf92e4
	mov r1, r8	@ 000f92e4 4146
.org 0xf92e6
	ldr r3, [r1, #8]	@ 000f92e6 8b68
.org 0xf92e8
	adds r0, r7, #0	@ 000f92e8 381c
.org 0xf92ea
	adds r0, #84	@ 000f92ea 5430
.org 0xf92ec
	adds r1, r5, #0	@ 000f92ec 291c
.org 0xf92ee
	movs r2, #1	@ 000f92ee 0122
.org 0xf92f0
	bl 0x128f88	@ 000f92f0 2ff04afe
.org 0xf92f4
	adds r0, r4, #1	@ 000f92f4 601c
.org 0xf92f6
	lsls r0, r0, #16	@ 000f92f6 0004
.org 0xf92f8
	lsrs r4, r0, #16	@ 000f92f8 040c
.org 0xf92fa
	cmp r4, r6	@ 000f92fa b442
.org 0xf92fc
	bcc.n 0xf92e4	@ 000f92fc f2d3
.org 0xf92fe
	add sp, #8	@ 000f92fe 02b0
