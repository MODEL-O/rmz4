@ FUN_0811c360  entry 0x0811c360  size 322
.thumb
.org 0x11c360
FUN_0811c360:
	push {r4, r5, r6, r7, lr}	@ 0011c360 f0b5
.org 0x11c362
	sub sp, #4	@ 0011c362 81b0
.org 0x11c364
	adds r7, r0, #0	@ 0011c364 071c
.org 0x11c366
	movs r1, #0	@ 0011c366 0021
.org 0x11c368
	movs r0, #0	@ 0011c368 0020
.org 0x11c36a
	strh r0, [r7, #4]	@ 0011c36a b880
.org 0x11c36c
	ldr r2, [pc, #308]	@ 0011c36c 4d4a
.org 0x11c36e
	adds r0, r7, r2	@ 0011c36e b818
.org 0x11c370
	strb r1, [r0, #2]	@ 0011c370 8170
.org 0x11c372
	strb r1, [r0, #4]	@ 0011c372 0171
.org 0x11c374
	strb r1, [r0, #5]	@ 0011c374 4171
.org 0x11c376
	strb r1, [r0, #27]	@ 0011c376 c176
.org 0x11c378
	movs r4, #0	@ 0011c378 0024
.org 0x11c37a
	ldr r0, [pc, #300]	@ 0011c37a 4b48
.org 0x11c37c
	adds r2, r7, r0	@ 0011c37c 3a18
.org 0x11c37e
	movs r3, #255	@ 0011c37e ff23
.org 0x11c380
	adds r0, r2, r4	@ 0011c380 1019
.org 0x11c382
	ldrb r1, [r0, #0]	@ 0011c382 0178
.org 0x11c384
	orrs r1, r3	@ 0011c384 1943
.org 0x11c386
	strb r1, [r0, #0]	@ 0011c386 0170
.org 0x11c388
	adds r0, r4, #1	@ 0011c388 601c
.org 0x11c38a
	lsls r0, r0, #24	@ 0011c38a 0006
.org 0x11c38c
	lsrs r4, r0, #24	@ 0011c38c 040e
.org 0x11c38e
	cmp r4, #3	@ 0011c38e 032c
.org 0x11c390
	bls.n 0x11c380	@ 0011c390 f6d9
.org 0x11c392
	adds r0, r7, #0	@ 0011c392 381c
.org 0x11c394
	bl 0x11c70c	@ 0011c394 00f0baf9
.org 0x11c398
	ldr r5, [pc, #272]	@ 0011c398 444d
.org 0x11c39a
	ldrh r1, [r5, #0]	@ 0011c39a 2988
.org 0x11c39c
	ldr r0, [pc, #272]	@ 0011c39c 4448
.org 0x11c39e
	ands r0, r1	@ 0011c39e 0840
.org 0x11c3a0
	movs r6, #0	@ 0011c3a0 0026
.org 0x11c3a2
	ldr r1, [pc, #272]	@ 0011c3a2 4449
.org 0x11c3a4
	ands r0, r1	@ 0011c3a4 0840
.org 0x11c3a6
	movs r2, #152	@ 0011c3a6 9822
.org 0x11c3a8
	lsls r2, r2, #5	@ 0011c3a8 5201
.org 0x11c3aa
	adds r1, r2, #0	@ 0011c3aa 111c
.org 0x11c3ac
	orrs r0, r1	@ 0011c3ac 0843
.org 0x11c3ae
	strh r0, [r5, #0]	@ 0011c3ae 2880
.org 0x11c3b0
	ldr r1, [pc, #260]	@ 0011c3b0 4149
.org 0x11c3b2
	adds r0, r1, #0	@ 0011c3b2 081c
.org 0x11c3b4
	strh r0, [r5, #6]	@ 0011c3b4 e880
.org 0x11c3b6
	str r6, [r5, #16]	@ 0011c3b6 2e61
.org 0x11c3b8
	ldr r0, [pc, #256]	@ 0011c3b8 4048
.org 0x11c3ba
	movs r4, #12	@ 0011c3ba 0c24
.org 0x11c3bc
	movs r1, #128	@ 0011c3bc 8021
.org 0x11c3be
	lsls r1, r1, #7	@ 0011c3be c901
.org 0x11c3c0
	bl 0x1d30	@ 0011c3c0 e5f6b6fc
.org 0x11c3c4
	ldr r0, [pc, #248]	@ 0011c3c4 3e48
.org 0x11c3c6
	movs r1, #0	@ 0011c3c6 0021
.org 0x11c3c8
	bl 0x2208	@ 0011c3c8 e5f61eff
.org 0x11c3cc
	ldr r0, [pc, #244]	@ 0011c3cc 3d48
.org 0x11c3ce
	ldrh r1, [r5, #6]	@ 0011c3ce e988
.org 0x11c3d0
	ands r4, r1	@ 0011c3d0 0c40
.org 0x11c3d2
	lsls r4, r4, #12	@ 0011c3d2 2403
.org 0x11c3d4
	adds r1, r4, #0	@ 0011c3d4 211c
.org 0x11c3d6
	bl 0x1d30	@ 0011c3d6 e5f6abfc
.org 0x11c3da
	ldr r0, [pc, #236]	@ 0011c3da 3b48
.org 0x11c3dc
	movs r1, #0	@ 0011c3dc 0021
.org 0x11c3de
	bl 0x2208	@ 0011c3de e5f613ff
.org 0x11c3e2
	ldr r2, [pc, #232]	@ 0011c3e2 3a4a
.org 0x11c3e4
	adds r0, r7, r2	@ 0011c3e4 b818
.org 0x11c3e6
	ldr r1, [pc, #232]	@ 0011c3e6 3a49
.org 0x11c3e8
	str r6, [sp, #0]	@ 0011c3e8 0096
.org 0x11c3ea
	movs r2, #132	@ 0011c3ea 8422
.org 0x11c3ec
	movs r3, #0	@ 0011c3ec 0023
.org 0x11c3ee
	bl 0x27b8	@ 0011c3ee e6f6e3f9
.org 0x11c3f2
	ldr r0, [pc, #224]	@ 0011c3f2 3848
.org 0x11c3f4
	ldr r1, [pc, #224]	@ 0011c3f4 3849
.org 0x11c3f6
	adds r1, #134	@ 0011c3f6 8631
.org 0x11c3f8
	ldrh r1, [r1, #0]	@ 0011c3f8 0988
.org 0x11c3fa
	ldrh r2, [r0, #6]	@ 0011c3fa c288
.org 0x11c3fc
	lsrs r2, r2, #6	@ 0011c3fc 9209
.org 0x11c3fe
	subs r1, r1, r2	@ 0011c3fe 891a
.org 0x11c400
	lsls r1, r1, #5	@ 0011c400 4901
.org 0x11c402
	movs r2, #128	@ 0011c402 8022
.org 0x11c404
	lsls r2, r2, #9	@ 0011c404 5202
.org 0x11c406
	adds r1, r1, r2	@ 0011c406 8918
.org 0x11c408
	bl 0x1d30	@ 0011c408 e5f692fc
.org 0x11c40c
	ldr r0, [pc, #204]	@ 0011c40c 3348
.org 0x11c40e
	ldr r1, [pc, #208]	@ 0011c40e 3449
.org 0x11c410
	adds r1, #134	@ 0011c410 8631
.org 0x11c412
	ldrh r1, [r1, #0]	@ 0011c412 0988
.org 0x11c414
	ldrb r2, [r0, #7]	@ 0011c414 c279
.org 0x11c416
	subs r1, r1, r2	@ 0011c416 891a
.org 0x11c418
	lsls r1, r1, #5	@ 0011c418 4901
.org 0x11c41a
	movs r2, #128	@ 0011c41a 8022
.org 0x11c41c
	lsls r2, r2, #2	@ 0011c41c 9200
.org 0x11c41e
	adds r1, r1, r2	@ 0011c41e 8918
.org 0x11c420
	bl 0x2208	@ 0011c420 e5f6f2fe
.org 0x11c424
	adds r0, r7, #0	@ 0011c424 381c
.org 0x11c426
	movs r1, #0	@ 0011c426 0021
.org 0x11c428
	movs r2, #0	@ 0011c428 0022
.org 0x11c42a
	bl 0x10ad38	@ 0011c42a eef785fc
.org 0x11c42e
	adds r0, r7, #0	@ 0011c42e 381c
.org 0x11c430
	movs r1, #1	@ 0011c430 0121
.org 0x11c432
	movs r2, #0	@ 0011c432 0022
.org 0x11c434
	bl 0x10ad38	@ 0011c434 eef780fc
.org 0x11c438
	adds r0, r7, #0	@ 0011c438 381c
.org 0x11c43a
	movs r1, #1	@ 0011c43a 0121
.org 0x11c43c
	movs r2, #1	@ 0011c43c 0122
.org 0x11c43e
	bl 0x10ad38	@ 0011c43e eef77bfc
.org 0x11c442
	movs r4, #0	@ 0011c442 0024
.org 0x11c444
	adds r0, r7, #0	@ 0011c444 381c
.org 0x11c446
	movs r1, #2	@ 0011c446 0221
.org 0x11c448
	adds r2, r4, #0	@ 0011c448 221c
.org 0x11c44a
	bl 0x10ad38	@ 0011c44a eef775fc
.org 0x11c44e
	adds r0, r4, #1	@ 0011c44e 601c
.org 0x11c450
	lsls r0, r0, #24	@ 0011c450 0006
.org 0x11c452
	lsrs r4, r0, #24	@ 0011c452 040e
.org 0x11c454
	cmp r4, #6	@ 0011c454 062c
.org 0x11c456
	bls.n 0x11c444	@ 0011c456 f5d9
.org 0x11c458
	movs r0, #47	@ 0011c458 2f20
.org 0x11c45a
	movs r1, #0	@ 0011c45a 0021
.org 0x11c45c
	bl 0x249c	@ 0011c45c e6f61ef8
.org 0x11c460
	movs r0, #49	@ 0011c460 3120
.org 0x11c462
	movs r1, #0	@ 0011c462 0021
.org 0x11c464
	bl 0x249c	@ 0011c464 e6f61af8
.org 0x11c468
	movs r0, #58	@ 0011c468 3a20
.org 0x11c46a
	movs r1, #0	@ 0011c46a 0021
.org 0x11c46c
	bl 0x249c	@ 0011c46c e6f616f8
.org 0x11c470
	ldr r0, [pc, #48]	@ 0011c470 0c48
.org 0x11c472
	adds r1, r7, r0	@ 0011c472 3918
.org 0x11c474
	movs r0, #49	@ 0011c474 3120
.org 0x11c476
	strb r0, [r1, #26]	@ 0011c476 8876
.org 0x11c478
	ldr r1, [pc, #80]	@ 0011c478 1449
.org 0x11c47a
	adds r0, r7, r1	@ 0011c47a 7818
.org 0x11c47c
	ldr r1, [pc, #100]	@ 0011c47c 1949
.org 0x11c47e
	ldrh r2, [r1, #0]	@ 0011c47e 0a88
.org 0x11c480
	movs r1, #248	@ 0011c480 f821
.org 0x11c482
	lsls r1, r1, #5	@ 0011c482 4901
.org 0x11c484
	ands r1, r2	@ 0011c484 1140
.org 0x11c486
	lsls r1, r1, #3	@ 0011c486 c900
.org 0x11c488
	movs r2, #128	@ 0011c488 8022
.org 0x11c48a
	lsls r2, r2, #5	@ 0011c48a 5201
.org 0x11c48c
	bl 0x1f1c	@ 0011c48c e5f646fd
.org 0x11c490
	movs r0, #1	@ 0011c490 0120
.org 0x11c492
	strb r0, [r7, #1]	@ 0011c492 7870
.org 0x11c494
	adds r0, r7, #0	@ 0011c494 381c
.org 0x11c496
	bl 0x11c4e8	@ 0011c496 00f027f8
.org 0x11c49a
	add sp, #4	@ 0011c49a 01b0
.org 0x11c49c
	pop {r4, r5, r6, r7}	@ 0011c49c f0bc
.org 0x11c49e
	pop {r0}	@ 0011c49e 01bc
.org 0x11c4a0
	bx r0	@ 0011c4a0 0047
