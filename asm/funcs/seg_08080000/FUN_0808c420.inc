@ FUN_0808c420  entry 0x0808c420  size 206
.thumb
.org 0x8c420
FUN_0808c420:
	push {r4, r5, r6, r7, lr}	@ 0008c420 f0b5
.org 0x8c422
	sub sp, #16	@ 0008c422 84b0
.org 0x8c424
	adds r7, r0, #0	@ 0008c424 071c
.org 0x8c426
	ldr r1, [pc, #200]	@ 0008c426 3249
.org 0x8c428
	mov r0, sp	@ 0008c428 6846
.org 0x8c42a
	movs r2, #16	@ 0008c42a 1022
.org 0x8c42c
	bl 0x129258	@ 0008c42c 9cf014ff
.org 0x8c430
	ldr r6, [r7, #40]	@ 0008c430 be6a
.org 0x8c432
	movs r4, #0	@ 0008c432 0024
.org 0x8c434
	ldrb r2, [r7, #17]	@ 0008c434 7a7c
.org 0x8c436
	ldr r1, [pc, #188]	@ 0008c436 2f49
.org 0x8c438
	ldrb r0, [r7, #9]	@ 0008c438 787a
.org 0x8c43a
	lsls r0, r0, #2	@ 0008c43a 8000
.org 0x8c43c
	adds r0, r0, r1	@ 0008c43c 4018
.org 0x8c43e
	movs r1, #1	@ 0008c43e 0121
.org 0x8c440
	str r1, [r7, #12]	@ 0008c440 f960
.org 0x8c442
	ldr r0, [r0, #0]	@ 0008c442 0068
.org 0x8c444
	ldr r0, [r0, #4]	@ 0008c444 4068
.org 0x8c446
	str r0, [r7, #20]	@ 0008c446 7861
.org 0x8c448
	strb r4, [r7, #13]	@ 0008c448 7c73
.org 0x8c44a
	strb r4, [r7, #14]	@ 0008c44a bc73
.org 0x8c44c
	strb r4, [r7, #15]	@ 0008c44c fc73
.org 0x8c44e
	ldrb r0, [r7, #10]	@ 0008c44e b87a
.org 0x8c450
	orrs r0, r1	@ 0008c450 0843
.org 0x8c452
	movs r1, #2	@ 0008c452 0221
.org 0x8c454
	orrs r0, r1	@ 0008c454 0843
.org 0x8c456
	strb r0, [r7, #10]	@ 0008c456 b872
.org 0x8c458
	ldr r0, [pc, #156]	@ 0008c458 2748
.org 0x8c45a
	adds r0, r2, r0	@ 0008c45a 1018
.org 0x8c45c
	ldrb r0, [r0, #0]	@ 0008c45c 0078
.org 0x8c45e
	adds r5, r7, #0	@ 0008c45e 3d1c
.org 0x8c460
	adds r5, #180	@ 0008c460 b435
.org 0x8c462
	strb r0, [r5, #0]	@ 0008c462 2870
.org 0x8c464
	adds r0, r7, #0	@ 0008c464 381c
.org 0x8c466
	adds r0, #181	@ 0008c466 b530
.org 0x8c468
	strb r4, [r0, #0]	@ 0008c468 0470
.org 0x8c46a
	adds r1, r7, #0	@ 0008c46a 391c
.org 0x8c46c
	adds r1, #182	@ 0008c46c b631
.org 0x8c46e
	movs r0, #255	@ 0008c46e ff20
.org 0x8c470
	strb r0, [r1, #0]	@ 0008c470 0870
.org 0x8c472
	lsls r2, r2, #2	@ 0008c472 9200
.org 0x8c474
	mov r1, sp	@ 0008c474 6946
.org 0x8c476
	adds r0, r1, r2	@ 0008c476 8818
.org 0x8c478
	movs r3, #0	@ 0008c478 0023
.org 0x8c47a
	ldrsh r1, [r0, r3]	@ 0008c47a c15e
.org 0x8c47c
	ldr r0, [r7, #84]	@ 0008c47c 786d
.org 0x8c47e
	adds r0, r0, r1	@ 0008c47e 4018
.org 0x8c480
	str r0, [r7, #84]	@ 0008c480 7865
.org 0x8c482
	mov r0, sp	@ 0008c482 6846
.org 0x8c484
	adds r0, #2	@ 0008c484 0230
.org 0x8c486
	adds r0, r0, r2	@ 0008c486 8018
.org 0x8c488
	movs r2, #0	@ 0008c488 0022
.org 0x8c48a
	ldrsh r1, [r0, r2]	@ 0008c48a 815e
.org 0x8c48c
	ldr r0, [r7, #88]	@ 0008c48c b86d
.org 0x8c48e
	adds r0, r0, r1	@ 0008c48e 4018
.org 0x8c490
	str r0, [r7, #88]	@ 0008c490 b865
.org 0x8c492
	adds r0, r7, #0	@ 0008c492 381c
.org 0x8c494
	bl 0x1cd28	@ 0008c494 90f748fc
.org 0x8c498
	adds r1, r7, #0	@ 0008c498 391c
.org 0x8c49a
	adds r1, #37	@ 0008c49a 2531
.org 0x8c49c
	movs r0, #25	@ 0008c49c 1920
.org 0x8c49e
	strb r0, [r1, #0]	@ 0008c49e 0870
.org 0x8c4a0
	ldrb r0, [r5, #0]	@ 0008c4a0 2878
.org 0x8c4a2
	adds r0, #128	@ 0008c4a2 8030
.org 0x8c4a4
	subs r1, #1	@ 0008c4a4 0139
.org 0x8c4a6
	strb r0, [r1, #0]	@ 0008c4a6 0870
.org 0x8c4a8
	ldrb r1, [r7, #10]	@ 0008c4a8 b97a
.org 0x8c4aa
	movs r0, #239	@ 0008c4aa ef20
.org 0x8c4ac
	ands r0, r1	@ 0008c4ac 0840
.org 0x8c4ae
	strb r0, [r7, #10]	@ 0008c4ae b872
.org 0x8c4b0
	adds r0, r7, #0	@ 0008c4b0 381c
.org 0x8c4b2
	adds r0, #76	@ 0008c4b2 4c30
.org 0x8c4b4
	strb r4, [r0, #0]	@ 0008c4b4 0470
.org 0x8c4b6
	adds r2, r7, #0	@ 0008c4b6 3a1c
.org 0x8c4b8
	adds r2, #74	@ 0008c4b8 4a32
.org 0x8c4ba
	ldrb r1, [r2, #0]	@ 0008c4ba 1178
.org 0x8c4bc
	movs r0, #17	@ 0008c4bc 1120
.org 0x8c4be
	negs r0, r0	@ 0008c4be 4042
.org 0x8c4c0
	ands r0, r1	@ 0008c4c0 0840
.org 0x8c4c2
	strb r0, [r2, #0]	@ 0008c4c2 1070
.org 0x8c4c4
	movs r1, #144	@ 0008c4c4 9021
.org 0x8c4c6
	lsls r1, r1, #6	@ 0008c4c6 8901
.org 0x8c4c8
	adds r0, r7, #0	@ 0008c4c8 381c
.org 0x8c4ca
	bl 0x1cf00	@ 0008c4ca 90f719fd
.org 0x8c4ce
	adds r0, r7, #0	@ 0008c4ce 381c
.org 0x8c4d0
	bl 0x1cff0	@ 0008c4d0 90f78efd
.org 0x8c4d4
	ldrb r1, [r7, #11]	@ 0008c4d4 f97a
.org 0x8c4d6
	movs r0, #16	@ 0008c4d6 1020
.org 0x8c4d8
	orrs r0, r1	@ 0008c4d8 0843
.org 0x8c4da
	strb r0, [r7, #11]	@ 0008c4da f872
.org 0x8c4dc
	ldrb r0, [r6, #28]	@ 0008c4dc 307f
.org 0x8c4de
	strb r0, [r7, #29]	@ 0008c4de 7877
.org 0x8c4e0
	adds r0, r7, #0	@ 0008c4e0 381c
.org 0x8c4e2
	bl 0x8c4fc	@ 0008c4e2 00f00bf8
.org 0x8c4e6
	add sp, #16	@ 0008c4e6 04b0
.org 0x8c4e8
	pop {r4, r5, r6, r7}	@ 0008c4e8 f0bc
.org 0x8c4ea
	pop {r0}	@ 0008c4ea 01bc
.org 0x8c4ec
	bx r0	@ 0008c4ec 0047
