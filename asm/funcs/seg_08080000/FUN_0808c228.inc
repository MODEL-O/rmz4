@ FUN_0808c228  entry 0x0808c228  size 476
.thumb
.org 0x8c228
FUN_0808c228:
	push {r4, r5, r6, r7, lr}	@ 0008c228 f0b5
.org 0x8c22a
	mov r7, sl	@ 0008c22a 5746
.org 0x8c22c
	mov r6, r9	@ 0008c22c 4e46
.org 0x8c22e
	mov r5, r8	@ 0008c22e 4546
.org 0x8c230
	push {r5, r6, r7}	@ 0008c230 e0b4
.org 0x8c232
	sub sp, #28	@ 0008c232 87b0
.org 0x8c234
	adds r7, r0, #0	@ 0008c234 071c
.org 0x8c236
	mov r1, sp	@ 0008c236 6946
.org 0x8c238
	ldr r0, [pc, #132]	@ 0008c238 2148
.org 0x8c23a
	ldmia r0!, {r2, r3, r4}	@ 0008c23a 1cc8
.org 0x8c23c
	stmia r1!, {r2, r3, r4}	@ 0008c23c 1cc1
.org 0x8c23e
	ldr r0, [r0, #0]	@ 0008c23e 0068
.org 0x8c240
	str r0, [r1, #0]	@ 0008c240 0860
.org 0x8c242
	add r5, sp, #16	@ 0008c242 04ad
.org 0x8c244
	adds r0, r5, #0	@ 0008c244 281c
.org 0x8c246
	movs r1, #0	@ 0008c246 0021
.org 0x8c248
	movs r2, #4	@ 0008c248 0422
.org 0x8c24a
	bl 0x1292b8	@ 0008c24a 9df035f8
.org 0x8c24e
	movs r0, #0	@ 0008c24e 0020
.org 0x8c250
	mov sl, r0	@ 0008c250 8246
.org 0x8c252
	movs r4, #1	@ 0008c252 0124
.org 0x8c254
	strb r4, [r5, #3]	@ 0008c254 ec70
.org 0x8c256
	add r1, sp, #20	@ 0008c256 05a9
.org 0x8c258
	mov r8, r1	@ 0008c258 8846
.org 0x8c25a
	mov r0, r8	@ 0008c25a 4046
.org 0x8c25c
	movs r1, #0	@ 0008c25c 0021
.org 0x8c25e
	movs r2, #4	@ 0008c25e 0422
.org 0x8c260
	bl 0x1292b8	@ 0008c260 9df02af8
.org 0x8c264
	mov r2, r8	@ 0008c264 4246
.org 0x8c266
	strb r4, [r2, #1]	@ 0008c266 5470
.org 0x8c268
	add r3, sp, #24	@ 0008c268 06ab
.org 0x8c26a
	mov r9, r3	@ 0008c26a 9946
.org 0x8c26c
	ldr r1, [pc, #84]	@ 0008c26c 1549
.org 0x8c26e
	mov r0, r9	@ 0008c26e 4846
.org 0x8c270
	movs r2, #4	@ 0008c270 0422
.org 0x8c272
	bl 0x129258	@ 0008c272 9cf0f1ff
.org 0x8c276
	ldrb r6, [r7, #17]	@ 0008c276 7e7c
.org 0x8c278
	ldr r1, [pc, #76]	@ 0008c278 1349
.org 0x8c27a
	ldrb r0, [r7, #9]	@ 0008c27a 787a
.org 0x8c27c
	lsls r0, r0, #2	@ 0008c27c 8000
.org 0x8c27e
	adds r0, r0, r1	@ 0008c27e 4018
.org 0x8c280
	str r4, [r7, #12]	@ 0008c280 fc60
.org 0x8c282
	ldr r0, [r0, #0]	@ 0008c282 0068
.org 0x8c284
	ldr r0, [r0, #4]	@ 0008c284 4068
.org 0x8c286
	str r0, [r7, #20]	@ 0008c286 7861
.org 0x8c288
	ldrb r0, [r7, #10]	@ 0008c288 b87a
.org 0x8c28a
	movs r4, #0	@ 0008c28a 0024
.org 0x8c28c
	movs r1, #1	@ 0008c28c 0121
.org 0x8c28e
	orrs r0, r1	@ 0008c28e 0843
.org 0x8c290
	movs r1, #2	@ 0008c290 0221
.org 0x8c292
	orrs r0, r1	@ 0008c292 0843
.org 0x8c294
	strb r0, [r7, #10]	@ 0008c294 b872
.org 0x8c296
	mov r2, sl	@ 0008c296 5246
.org 0x8c298
	str r2, [r7, #44]	@ 0008c298 fa62
.org 0x8c29a
	adds r0, r7, #0	@ 0008c29a 381c
.org 0x8c29c
	adds r0, #184	@ 0008c29c b830
.org 0x8c29e
	strb r2, [r0, #0]	@ 0008c29e 0270
.org 0x8c2a0
	adds r0, #1	@ 0008c2a0 0130
.org 0x8c2a2
	mov r3, sl	@ 0008c2a2 5346
.org 0x8c2a4
	strb r3, [r0, #0]	@ 0008c2a4 0370
.org 0x8c2a6
	adds r0, r7, #0	@ 0008c2a6 381c
.org 0x8c2a8
	bl 0x1cc9c	@ 0008c2a8 90f7f8fc
.org 0x8c2ac
	adds r5, r5, r6	@ 0008c2ac ad19
.org 0x8c2ae
	ldrb r2, [r5, #0]	@ 0008c2ae 2a78
.org 0x8c2b0
	mov r5, r8	@ 0008c2b0 4546
.org 0x8c2b2
	mov r8, r9	@ 0008c2b2 c846
.org 0x8c2b4
	cmp r2, #0	@ 0008c2b4 002a
.org 0x8c2b6
	beq.n 0x8c2cc	@ 0008c2b6 09d0
.org 0x8c2b8
	ldrb r0, [r7, #10]	@ 0008c2b8 b87a
.org 0x8c2ba
	movs r1, #16	@ 0008c2ba 1021
.org 0x8c2bc
	orrs r0, r1	@ 0008c2bc 0843
.org 0x8c2be
	b.n 0x8c2d2	@ 0008c2be 08e0
.org 0x8c2c0
	.byte 0x64,0x9b,0x12,0x08	@ 0008c2c0 data
.org 0x8c2c4
	.byte 0x74,0x9b,0x12,0x08	@ 0008c2c4 data
.org 0x8c2c8
	.byte 0x40,0xdb,0x85,0x08	@ 0008c2c8 data
.org 0x8c2cc
	ldrb r1, [r7, #10]	@ 0008c2cc b97a
.org 0x8c2ce
	movs r0, #239	@ 0008c2ce ef20
.org 0x8c2d0
	ands r0, r1	@ 0008c2d0 0840
.org 0x8c2d2
	strb r0, [r7, #10]	@ 0008c2d2 b872
.org 0x8c2d4
	movs r1, #1	@ 0008c2d4 0121
.org 0x8c2d6
	ands r1, r2	@ 0008c2d6 1140
.org 0x8c2d8
	adds r0, r7, #0	@ 0008c2d8 381c
.org 0x8c2da
	adds r0, #76	@ 0008c2da 4c30
.org 0x8c2dc
	strb r1, [r0, #0]	@ 0008c2dc 0170
.org 0x8c2de
	adds r3, r7, #0	@ 0008c2de 3b1c
.org 0x8c2e0
	adds r3, #74	@ 0008c2e0 4a33
.org 0x8c2e2
	lsls r1, r1, #4	@ 0008c2e2 0901
.org 0x8c2e4
	ldrb r2, [r3, #0]	@ 0008c2e4 1a78
.org 0x8c2e6
	movs r0, #17	@ 0008c2e6 1120
.org 0x8c2e8
	negs r0, r0	@ 0008c2e8 4042
.org 0x8c2ea
	ands r0, r2	@ 0008c2ea 1040
.org 0x8c2ec
	orrs r0, r1	@ 0008c2ec 0843
.org 0x8c2ee
	strb r0, [r3, #0]	@ 0008c2ee 1870
.org 0x8c2f0
	adds r0, r5, r6	@ 0008c2f0 a819
.org 0x8c2f2
	ldrb r2, [r0, #0]	@ 0008c2f2 0278
.org 0x8c2f4
	cmp r2, #0	@ 0008c2f4 002a
.org 0x8c2f6
	beq.n 0x8c300	@ 0008c2f6 03d0
.org 0x8c2f8
	ldrb r0, [r7, #10]	@ 0008c2f8 b87a
.org 0x8c2fa
	movs r1, #32	@ 0008c2fa 2021
.org 0x8c2fc
	orrs r0, r1	@ 0008c2fc 0843
.org 0x8c2fe
	b.n 0x8c306	@ 0008c2fe 02e0
.org 0x8c300
	ldrb r1, [r7, #10]	@ 0008c300 b97a
.org 0x8c302
	movs r0, #223	@ 0008c302 df20
.org 0x8c304
	ands r0, r1	@ 0008c304 0840
.org 0x8c306
	strb r0, [r7, #10]	@ 0008c306 b872
.org 0x8c308
	movs r1, #1	@ 0008c308 0121
.org 0x8c30a
	ands r1, r2	@ 0008c30a 1140
.org 0x8c30c
	adds r0, r7, #0	@ 0008c30c 381c
.org 0x8c30e
	adds r0, #77	@ 0008c30e 4d30
.org 0x8c310
	strb r1, [r0, #0]	@ 0008c310 0170
.org 0x8c312
	lsls r1, r1, #5	@ 0008c312 4901
.org 0x8c314
	ldrb r2, [r3, #0]	@ 0008c314 1a78
.org 0x8c316
	movs r0, #33	@ 0008c316 2120
.org 0x8c318
	negs r0, r0	@ 0008c318 4042
.org 0x8c31a
	ands r0, r2	@ 0008c31a 1040
.org 0x8c31c
	orrs r0, r1	@ 0008c31c 0843
.org 0x8c31e
	strb r0, [r3, #0]	@ 0008c31e 1870
.org 0x8c320
	lsls r0, r6, #2	@ 0008c320 b000
.org 0x8c322
	add r0, sp	@ 0008c322 6844
.org 0x8c324
	ldrh r1, [r0, #0]	@ 0008c324 0188
.org 0x8c326
	adds r0, r7, #0	@ 0008c326 381c
.org 0x8c328
	bl 0x1cf00	@ 0008c328 90f7eafd
.org 0x8c32c
	adds r0, r7, #0	@ 0008c32c 381c
.org 0x8c32e
	bl 0x1cff0	@ 0008c32e 90f75ffe
.org 0x8c332
	cmp r6, #1	@ 0008c332 012e
.org 0x8c334
	beq.n 0x8c356	@ 0008c334 0fd0
.org 0x8c336
	cmp r6, #1	@ 0008c336 012e
.org 0x8c338
	bgt.n 0x8c340	@ 0008c338 02dc
.org 0x8c33a
	cmp r6, #0	@ 0008c33a 002e
.org 0x8c33c
	beq.n 0x8c34a	@ 0008c33c 05d0
.org 0x8c33e
	b.n 0x8c37c	@ 0008c33e 1de0
.org 0x8c340
	cmp r6, #2	@ 0008c340 022e
.org 0x8c342
	beq.n 0x8c368	@ 0008c342 11d0
.org 0x8c344
	cmp r6, #3	@ 0008c344 032e
.org 0x8c346
	beq.n 0x8c372	@ 0008c346 14d0
.org 0x8c348
	b.n 0x8c37c	@ 0008c348 18e0
.org 0x8c34a
	ldr r0, [r7, #84]	@ 0008c34a 786d
.org 0x8c34c
	ldr r1, [r7, #88]	@ 0008c34c b96d
.org 0x8c34e
	bl 0x8534	@ 0008c34e 7cf7f1f8
.org 0x8c352
	str r0, [r7, #88]	@ 0008c352 b865
.org 0x8c354
	b.n 0x8c37c	@ 0008c354 12e0
.org 0x8c356
	ldr r0, [r7, #84]	@ 0008c356 786d
.org 0x8c358
	ldr r1, [r7, #88]	@ 0008c358 b96d
.org 0x8c35a
	bl 0x8748	@ 0008c35a 7cf7f5f9
.org 0x8c35e
	movs r4, #128	@ 0008c35e 8024
.org 0x8c360
	lsls r4, r4, #2	@ 0008c360 a400
.org 0x8c362
	adds r0, r0, r4	@ 0008c362 0019
.org 0x8c364
	str r0, [r7, #88]	@ 0008c364 b865
.org 0x8c366
	b.n 0x8c37c	@ 0008c366 09e0
.org 0x8c368
	ldr r0, [r7, #84]	@ 0008c368 786d
.org 0x8c36a
	ldr r1, [r7, #88]	@ 0008c36a b96d
.org 0x8c36c
	bl 0x8988	@ 0008c36c 7cf70cfb
.org 0x8c370
	b.n 0x8c37a	@ 0008c370 03e0
.org 0x8c372
	ldr r0, [r7, #84]	@ 0008c372 786d
.org 0x8c374
	ldr r1, [r7, #88]	@ 0008c374 b96d
.org 0x8c376
	bl 0x8868	@ 0008c376 7cf777fa
.org 0x8c37a
	str r0, [r7, #84]	@ 0008c37a 7865
.org 0x8c37c
	ldrb r1, [r7, #10]	@ 0008c37c b97a
.org 0x8c37e
	movs r0, #4	@ 0008c37e 0420
.org 0x8c380
	orrs r0, r1	@ 0008c380 0843
.org 0x8c382
	strb r0, [r7, #10]	@ 0008c382 b872
.org 0x8c384
	adds r4, r7, #0	@ 0008c384 3c1c
.org 0x8c386
	adds r4, #116	@ 0008c386 7434
.org 0x8c388
	mov r1, r8	@ 0008c388 4146
.org 0x8c38a
	adds r0, r1, r6	@ 0008c38a 8819
.org 0x8c38c
	ldrb r0, [r0, #0]	@ 0008c38c 0078
.org 0x8c38e
	lsls r1, r0, #1	@ 0008c38e 4100
.org 0x8c390
	adds r1, r1, r0	@ 0008c390 0918
.org 0x8c392
	lsls r1, r1, #3	@ 0008c392 c900
.org 0x8c394
	ldr r0, [pc, #100]	@ 0008c394 1948
.org 0x8c396
	adds r1, r1, r0	@ 0008c396 0918
.org 0x8c398
	adds r5, r7, #0	@ 0008c398 3d1c
.org 0x8c39a
	adds r5, #84	@ 0008c39a 5435
.org 0x8c39c
	adds r0, r4, #0	@ 0008c39c 201c
.org 0x8c39e
	adds r2, r5, #0	@ 0008c39e 2a1c
.org 0x8c3a0
	movs r3, #5	@ 0008c3a0 0523
.org 0x8c3a2
	bl 0x5760	@ 0008c3a2 79f7ddf9
.org 0x8c3a6
	str r7, [r4, #44]	@ 0008c3a6 e762
.org 0x8c3a8
	ldr r0, [pc, #84]	@ 0008c3a8 1548
.org 0x8c3aa
	str r0, [r4, #36]	@ 0008c3aa 6062
.org 0x8c3ac
	adds r0, r7, #0	@ 0008c3ac 381c
.org 0x8c3ae
	adds r1, r5, #0	@ 0008c3ae 291c
.org 0x8c3b0
	movs r2, #1	@ 0008c3b0 0122
.org 0x8c3b2
	adds r3, r6, #0	@ 0008c3b2 331c
.org 0x8c3b4
	bl 0x8c1a8	@ 0008c3b4 fff7f8fe
.org 0x8c3b8
	adds r2, r0, #0	@ 0008c3b8 021c
.org 0x8c3ba
	adds r0, r7, #0	@ 0008c3ba 381c
.org 0x8c3bc
	adds r0, #180	@ 0008c3bc b430
.org 0x8c3be
	str r2, [r0, #0]	@ 0008c3be 0260
.org 0x8c3c0
	cmp r2, #0	@ 0008c3c0 002a
.org 0x8c3c2
	bne.n 0x8c408	@ 0008c3c2 21d1
.org 0x8c3c4
	ldrb r1, [r7, #10]	@ 0008c3c4 b97a
.org 0x8c3c6
	movs r0, #254	@ 0008c3c6 fe20
.org 0x8c3c8
	ands r0, r1	@ 0008c3c8 0840
.org 0x8c3ca
	movs r1, #253	@ 0008c3ca fd21
.org 0x8c3cc
	ands r0, r1	@ 0008c3cc 0840
.org 0x8c3ce
	strb r0, [r7, #10]	@ 0008c3ce b872
.org 0x8c3d0
	adds r0, r7, #0	@ 0008c3d0 381c
.org 0x8c3d2
	adds r0, #140	@ 0008c3d2 8c30
.org 0x8c3d4
	str r2, [r0, #0]	@ 0008c3d4 0260
.org 0x8c3d6
	adds r0, #4	@ 0008c3d6 0430
.org 0x8c3d8
	str r2, [r0, #0]	@ 0008c3d8 0260
.org 0x8c3da
	adds r0, #4	@ 0008c3da 0430
.org 0x8c3dc
	strb r2, [r0, #0]	@ 0008c3dc 0270
.org 0x8c3de
	ldrb r1, [r7, #10]	@ 0008c3de b97a
.org 0x8c3e0
	movs r0, #251	@ 0008c3e0 fb20
.org 0x8c3e2
	ands r0, r1	@ 0008c3e2 0840
.org 0x8c3e4
	strb r0, [r7, #10]	@ 0008c3e4 b872
.org 0x8c3e6
	ldr r1, [pc, #28]	@ 0008c3e6 0749
.org 0x8c3e8
	ldrb r0, [r7, #9]	@ 0008c3e8 787a
.org 0x8c3ea
	lsls r0, r0, #2	@ 0008c3ea 8000
.org 0x8c3ec
	adds r0, r0, r1	@ 0008c3ec 4018
.org 0x8c3ee
	movs r1, #3	@ 0008c3ee 0321
.org 0x8c3f0
	str r1, [r7, #12]	@ 0008c3f0 f960
.org 0x8c3f2
	ldr r0, [r0, #0]	@ 0008c3f2 0068
.org 0x8c3f4
	ldr r0, [r0, #12]	@ 0008c3f4 c068
.org 0x8c3f6
	str r0, [r7, #20]	@ 0008c3f6 7861
.org 0x8c3f8
	b.n 0x8c40e	@ 0008c3f8 09e0
.org 0x8c3fa
	.byte 0x00	@ 0008c3fa data
.org 0x8c3fb
	.byte 0x00	@ 0008c3fb data
.org 0x8c3fc
	.byte 0xec,0xf7,0x85,0x08	@ 0008c3fc data
.org 0x8c400
	.byte 0x3d,0xcc,0x08,0x08	@ 0008c400 data
