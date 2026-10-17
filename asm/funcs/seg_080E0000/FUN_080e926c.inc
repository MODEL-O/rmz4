@ FUN_080e926c  entry 0x080e926c  size 312
.thumb
.org 0xe926c
FUN_080e926c:
	push {r4, r5, r6, lr}	@ 000e926c 70b5
.org 0xe926e
	adds r5, r0, #0	@ 000e926e 051c
.org 0xe9270
	ldrb r0, [r5, #18]	@ 000e9270 a87c
.org 0xe9272
	cmp r0, #0	@ 000e9272 0028
.org 0xe9274
	beq.n 0xe927c	@ 000e9274 02d0
.org 0xe9276
	subs r0, #1	@ 000e9276 0138
.org 0xe9278
	strb r0, [r5, #18]	@ 000e9278 a874
.org 0xe927a
	b.n 0xe93a8	@ 000e927a 95e0
.org 0xe927c
	adds r0, r5, #0	@ 000e927c 281c
.org 0xe927e
	bl 0x1cc9c	@ 000e927e 33f70dfd
.org 0xe9282
	ldrb r1, [r5, #10]	@ 000e9282 a97a
.org 0xe9284
	movs r0, #1	@ 000e9284 0120
.org 0xe9286
	orrs r0, r1	@ 000e9286 0843
.org 0xe9288
	movs r1, #2	@ 000e9288 0221
.org 0xe928a
	orrs r0, r1	@ 000e928a 0843
.org 0xe928c
	strb r0, [r5, #10]	@ 000e928c a872
.org 0xe928e
	ldr r1, [pc, #72]	@ 000e928e 1249
.org 0xe9290
	ldrb r0, [r5, #9]	@ 000e9290 687a
.org 0xe9292
	lsls r0, r0, #2	@ 000e9292 8000
.org 0xe9294
	adds r0, r0, r1	@ 000e9294 4018
.org 0xe9296
	movs r1, #1	@ 000e9296 0121
.org 0xe9298
	str r1, [r5, #12]	@ 000e9298 e960
.org 0xe929a
	ldr r0, [r0, #0]	@ 000e929a 0068
.org 0xe929c
	ldr r0, [r0, #4]	@ 000e929c 4068
.org 0xe929e
	str r0, [r5, #20]	@ 000e929e 6861
.org 0xe92a0
	ldrb r0, [r5, #17]	@ 000e92a0 687c
.org 0xe92a2
	cmp r0, #0	@ 000e92a2 0028
.org 0xe92a4
	beq.n 0xe92dc	@ 000e92a4 1ad0
.org 0xe92a6
	ldr r0, [r5, #40]	@ 000e92a6 a86a
.org 0xe92a8
	ldrb r1, [r5, #17]	@ 000e92a8 697c
.org 0xe92aa
	subs r1, #1	@ 000e92aa 0139
.org 0xe92ac
	movs r3, #128	@ 000e92ac 8023
.org 0xe92ae
	lsls r3, r3, #3	@ 000e92ae db00
.org 0xe92b0
	adds r2, r3, #0	@ 000e92b0 1a1c
.org 0xe92b2
	orrs r1, r2	@ 000e92b2 1143
.org 0xe92b4
	lsls r1, r1, #16	@ 000e92b4 0904
.org 0xe92b6
	lsrs r1, r1, #16	@ 000e92b6 090c
.org 0xe92b8
	adds r4, r5, #0	@ 000e92b8 2c1c
.org 0xe92ba
	adds r4, #116	@ 000e92ba 7434
.org 0xe92bc
	ldrh r2, [r4, #0]	@ 000e92bc 2288
.org 0xe92be
	bl 0xe8dd8	@ 000e92be fff78bfd
.org 0xe92c2
	adds r2, r0, #0	@ 000e92c2 021c
.org 0xe92c4
	str r2, [r5, #44]	@ 000e92c4 ea62
.org 0xe92c6
	cmp r2, #0	@ 000e92c6 002a
.org 0xe92c8
	beq.n 0xe92f8	@ 000e92c8 16d0
.org 0xe92ca
	adds r0, r5, #0	@ 000e92ca 281c
.org 0xe92cc
	adds r0, #124	@ 000e92cc 7c30
.org 0xe92ce
	ldrb r1, [r0, #0]	@ 000e92ce 0178
.org 0xe92d0
	adds r0, r2, #0	@ 000e92d0 101c
.org 0xe92d2
	adds r0, #124	@ 000e92d2 7c30
.org 0xe92d4
	strb r1, [r0, #0]	@ 000e92d4 0170
.org 0xe92d6
	b.n 0xe92f8	@ 000e92d6 0fe0
.org 0xe92d8
	.byte 0x64,0x6f,0x86,0x08	@ 000e92d8 data
.org 0xe92dc
	adds r0, r5, #0	@ 000e92dc 281c
.org 0xe92de
	adds r0, #124	@ 000e92de 7c30
.org 0xe92e0
	ldrb r0, [r0, #0]	@ 000e92e0 0078
.org 0xe92e2
	adds r4, r5, #0	@ 000e92e2 2c1c
.org 0xe92e4
	adds r4, #116	@ 000e92e4 7434
.org 0xe92e6
	cmp r0, #1	@ 000e92e6 0128
.org 0xe92e8
	bne.n 0xe92f8	@ 000e92e8 06d1
.org 0xe92ea
	ldr r0, [r5, #40]	@ 000e92ea a86a
.org 0xe92ec
	movs r1, #128	@ 000e92ec 8021
.org 0xe92ee
	lsls r1, r1, #2	@ 000e92ee 8900
.org 0xe92f0
	movs r2, #0	@ 000e92f0 0022
.org 0xe92f2
	bl 0xe8dd8	@ 000e92f2 fff771fd
.org 0xe92f6
	str r0, [r5, #44]	@ 000e92f6 e862
.org 0xe92f8
	ldrb r0, [r5, #17]	@ 000e92f8 687c
.org 0xe92fa
	adds r6, r0, #0	@ 000e92fa 061c
.org 0xe92fc
	cmp r6, #1	@ 000e92fc 012e
.org 0xe92fe
	bhi.n 0xe931c	@ 000e92fe 0dd8
.org 0xe9300
	ldrh r0, [r4, #0]	@ 000e9300 2088
.org 0xe9302
	movs r1, #60	@ 000e9302 3c21
.org 0xe9304
	bl 0x129198	@ 000e9304 3ff048ff
.org 0xe9308
	lsls r0, r0, #16	@ 000e9308 0004
.org 0xe930a
	lsrs r0, r0, #16	@ 000e930a 000c
.org 0xe930c
	movs r1, #167	@ 000e930c a721
.org 0xe930e
	muls r0, r1	@ 000e930e 4843
.org 0xe9310
	movs r4, #100	@ 000e9310 6424
.org 0xe9312
	movs r1, #100	@ 000e9312 6421
.org 0xe9314
	bl 0x128fb8	@ 000e9314 3ff050fe
.org 0xe9318
	subs r1, r4, r0	@ 000e9318 211a
.org 0xe931a
	b.n 0xe932c	@ 000e931a 07e0
.org 0xe931c
	ldrh r1, [r4, #0]	@ 000e931c 2188
.org 0xe931e
	movs r0, #225	@ 000e931e e120
.org 0xe9320
	lsls r0, r0, #4	@ 000e9320 0001
.org 0xe9322
	subs r0, r0, r1	@ 000e9322 401a
.org 0xe9324
	movs r1, #60	@ 000e9324 3c21
.org 0xe9326
	bl 0x128fb8	@ 000e9326 3ff047fe
.org 0xe932a
	adds r1, r0, #0	@ 000e932a 011c
.org 0xe932c
	lsls r0, r6, #24	@ 000e932c 3006
.org 0xe932e
	lsrs r0, r0, #24	@ 000e932e 000e
.org 0xe9330
	cmp r0, #4	@ 000e9330 0428
.org 0xe9332
	beq.n 0xe9338	@ 000e9332 01d0
.org 0xe9334
	cmp r0, #1	@ 000e9334 0128
.org 0xe9336
	bne.n 0xe9342	@ 000e9336 04d1
.org 0xe9338
	adds r0, r1, #0	@ 000e9338 081c
.org 0xe933a
	movs r1, #10	@ 000e933a 0a21
.org 0xe933c
	bl 0x129120	@ 000e933c 3ff0f0fe
.org 0xe9340
	b.n 0xe934a	@ 000e9340 03e0
.org 0xe9342
	adds r0, r1, #0	@ 000e9342 081c
.org 0xe9344
	movs r1, #10	@ 000e9344 0a21
.org 0xe9346
	bl 0x129198	@ 000e9346 3ff027ff
.org 0xe934a
	adds r1, r0, #0	@ 000e934a 011c
.org 0xe934c
	lsls r0, r6, #24	@ 000e934c 3006
.org 0xe934e
	lsrs r0, r0, #24	@ 000e934e 000e
.org 0xe9350
	cmp r0, #2	@ 000e9350 0228
.org 0xe9352
	beq.n 0xe9370	@ 000e9352 0dd0
.org 0xe9354
	cmp r1, #10	@ 000e9354 0a29
.org 0xe9356
	bne.n 0xe935a	@ 000e9356 00d1
.org 0xe9358
	movs r1, #0	@ 000e9358 0021
.org 0xe935a
	ldr r0, [pc, #16]	@ 000e935a 0448
.org 0xe935c
	lsls r1, r1, #1	@ 000e935c 4900
.org 0xe935e
	adds r1, r1, r0	@ 000e935e 0918
.org 0xe9360
	ldrh r1, [r1, #0]	@ 000e9360 0988
.org 0xe9362
	adds r0, r5, #0	@ 000e9362 281c
.org 0xe9364
	bl 0x1cf00	@ 000e9364 33f7ccfd
.org 0xe9368
	b.n 0xe937a	@ 000e9368 07e0
.org 0xe936a
	.byte 0x00	@ 000e936a data
.org 0xe936b
	.byte 0x00	@ 000e936b data
.org 0xe936c
	.byte 0xe6,0x92,0x86,0x08	@ 000e936c data
.org 0xe9370
	ldr r0, [pc, #60]	@ 000e9370 0f48
.org 0xe9372
	ldrh r1, [r0, #20]	@ 000e9372 818a
.org 0xe9374
	adds r0, r5, #0	@ 000e9374 281c
.org 0xe9376
	bl 0x1cf00	@ 000e9376 33f7c3fd
.org 0xe937a
	ldrb r0, [r5, #17]	@ 000e937a 687c
.org 0xe937c
	movs r1, #4	@ 000e937c 0421
.org 0xe937e
	subs r1, r1, r0	@ 000e937e 091a
.org 0xe9380
	lsls r0, r1, #4	@ 000e9380 0801
.org 0xe9382
	subs r0, r0, r1	@ 000e9382 401a
.org 0xe9384
	adds r0, #20	@ 000e9384 1430
.org 0xe9386
	lsls r0, r0, #8	@ 000e9386 0002
.org 0xe9388
	ldr r1, [r5, #84]	@ 000e9388 696d
.org 0xe938a
	adds r1, r1, r0	@ 000e938a 0918
.org 0xe938c
	ldr r0, [r5, #88]	@ 000e938c a86d
.org 0xe938e
	ldr r2, [pc, #36]	@ 000e938e 094a
.org 0xe9390
	adds r1, r1, r2	@ 000e9390 8918
.org 0xe9392
	str r1, [r5, #84]	@ 000e9392 6965
.org 0xe9394
	ldr r3, [pc, #32]	@ 000e9394 084b
.org 0xe9396
	adds r0, r0, r3	@ 000e9396 c018
.org 0xe9398
	str r0, [r5, #88]	@ 000e9398 a865
.org 0xe939a
	movs r0, #180	@ 000e939a b420
.org 0xe939c
	strb r0, [r5, #18]	@ 000e939c a874
.org 0xe939e
	movs r0, #1	@ 000e939e 0120
.org 0xe93a0
	strb r0, [r5, #13]	@ 000e93a0 6873
.org 0xe93a2
	adds r0, r5, #0	@ 000e93a2 281c
