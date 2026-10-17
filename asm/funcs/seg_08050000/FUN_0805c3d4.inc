@ FUN_0805c3d4  entry 0x0805c3d4  size 302
.thumb
.org 0x5c3d4
FUN_0805c3d4:
	push {r4, r5, r6, r7, lr}	@ 0005c3d4 f0b5
.org 0x5c3d6
	mov r7, r9	@ 0005c3d6 4f46
.org 0x5c3d8
	mov r6, r8	@ 0005c3d8 4646
.org 0x5c3da
	push {r6, r7}	@ 0005c3da c0b4
.org 0x5c3dc
	sub sp, #16	@ 0005c3dc 84b0
.org 0x5c3de
	adds r7, r0, #0	@ 0005c3de 071c
.org 0x5c3e0
	mov r1, sp	@ 0005c3e0 6946
.org 0x5c3e2
	ldr r0, [pc, #240]	@ 0005c3e2 3c48
.org 0x5c3e4
	ldmia r0!, {r2, r3, r4}	@ 0005c3e4 1cc8
.org 0x5c3e6
	stmia r1!, {r2, r3, r4}	@ 0005c3e6 1cc1
.org 0x5c3e8
	add r4, sp, #12	@ 0005c3e8 03ac
.org 0x5c3ea
	ldr r1, [pc, #236]	@ 0005c3ea 3b49
.org 0x5c3ec
	adds r0, r4, #0	@ 0005c3ec 201c
.org 0x5c3ee
	movs r2, #3	@ 0005c3ee 0322
.org 0x5c3f0
	bl 0x129258	@ 0005c3f0 ccf032ff
.org 0x5c3f4
	ldrb r6, [r7, #16]	@ 0005c3f4 3e7c
.org 0x5c3f6
	ldrb r5, [r7, #17]	@ 0005c3f6 7d7c
.org 0x5c3f8
	adds r5, #1	@ 0005c3f8 0135
.org 0x5c3fa
	movs r2, #1	@ 0005c3fa 0122
.org 0x5c3fc
	ands r5, r2	@ 0005c3fc 1540
.org 0x5c3fe
	ldr r1, [pc, #220]	@ 0005c3fe 3749
.org 0x5c400
	ldrb r0, [r7, #9]	@ 0005c400 787a
.org 0x5c402
	lsls r0, r0, #2	@ 0005c402 8000
.org 0x5c404
	adds r0, r0, r1	@ 0005c404 4018
.org 0x5c406
	movs r1, #1	@ 0005c406 0121
.org 0x5c408
	mov r8, r1	@ 0005c408 8846
.org 0x5c40a
	str r1, [r7, #12]	@ 0005c40a f960
.org 0x5c40c
	ldr r0, [r0, #0]	@ 0005c40c 0068
.org 0x5c40e
	ldr r0, [r0, #4]	@ 0005c40e 4068
.org 0x5c410
	str r0, [r7, #20]	@ 0005c410 7861
.org 0x5c412
	adds r4, r4, r6	@ 0005c412 a419
.org 0x5c414
	ldrb r0, [r4, #0]	@ 0005c414 2078
.org 0x5c416
	movs r4, #0	@ 0005c416 0024
.org 0x5c418
	strb r0, [r7, #13]	@ 0005c418 7873
.org 0x5c41a
	strb r4, [r7, #14]	@ 0005c41a bc73
.org 0x5c41c
	strb r4, [r7, #15]	@ 0005c41c fc73
.org 0x5c41e
	ldrb r0, [r7, #10]	@ 0005c41e b87a
.org 0x5c420
	movs r3, #0	@ 0005c420 0023
.org 0x5c422
	mov r9, r3	@ 0005c422 9946
.org 0x5c424
	orrs r0, r2	@ 0005c424 1043
.org 0x5c426
	movs r1, #2	@ 0005c426 0221
.org 0x5c428
	orrs r0, r1	@ 0005c428 0843
.org 0x5c42a
	strb r0, [r7, #10]	@ 0005c42a b872
.org 0x5c42c
	adds r1, r7, #0	@ 0005c42c 391c
.org 0x5c42e
	adds r1, #184	@ 0005c42e b831
.org 0x5c430
	movs r0, #255	@ 0005c430 ff20
.org 0x5c432
	strb r0, [r1, #0]	@ 0005c432 0870
.org 0x5c434
	adds r1, #1	@ 0005c434 0131
.org 0x5c436
	strb r0, [r1, #0]	@ 0005c436 0870
.org 0x5c438
	adds r0, r7, #0	@ 0005c438 381c
.org 0x5c43a
	adds r0, #186	@ 0005c43a ba30
.org 0x5c43c
	strb r4, [r0, #0]	@ 0005c43c 0470
.org 0x5c43e
	lsls r0, r6, #2	@ 0005c43e b000
.org 0x5c440
	add r0, sp	@ 0005c440 6844
.org 0x5c442
	ldr r0, [r0, #0]	@ 0005c442 0068
.org 0x5c444
	adds r1, #17	@ 0005c444 1131
.org 0x5c446
	strh r0, [r1, #0]	@ 0005c446 0880
.org 0x5c448
	adds r0, r7, #0	@ 0005c448 381c
.org 0x5c44a
	adds r0, #204	@ 0005c44a cc30
.org 0x5c44c
	str r4, [r0, #0]	@ 0005c44c 0460
.org 0x5c44e
	ldr r0, [r7, #84]	@ 0005c44e 786d
.org 0x5c450
	ldr r1, [r7, #88]	@ 0005c450 b96d
.org 0x5c452
	bl 0x8534	@ 0005c452 acf76ff8
.org 0x5c456
	adds r1, r7, #0	@ 0005c456 391c
.org 0x5c458
	adds r1, #180	@ 0005c458 b431
.org 0x5c45a
	str r0, [r1, #0]	@ 0005c45a 0860
.org 0x5c45c
	str r4, [r7, #44]	@ 0005c45c fc62
.org 0x5c45e
	ldr r0, [pc, #128]	@ 0005c45e 2048
.org 0x5c460
	ldr r1, [pc, #128]	@ 0005c460 2049
.org 0x5c462
	adds r1, #162	@ 0005c462 a231
.org 0x5c464
	ldrh r1, [r1, #0]	@ 0005c464 0988
.org 0x5c466
	ldrh r2, [r0, #6]	@ 0005c466 c288
.org 0x5c468
	lsrs r2, r2, #6	@ 0005c468 9209
.org 0x5c46a
	subs r1, r1, r2	@ 0005c46a 891a
.org 0x5c46c
	lsls r1, r1, #5	@ 0005c46c 4901
.org 0x5c46e
	movs r4, #128	@ 0005c46e 8024
.org 0x5c470
	lsls r4, r4, #9	@ 0005c470 6402
.org 0x5c472
	adds r1, r1, r4	@ 0005c472 0919
.org 0x5c474
	bl 0x1d30	@ 0005c474 a5f75cfc
.org 0x5c478
	ldr r0, [pc, #108]	@ 0005c478 1b48
.org 0x5c47a
	ldr r1, [pc, #112]	@ 0005c47a 1c49
.org 0x5c47c
	adds r1, #162	@ 0005c47c a231
.org 0x5c47e
	ldrh r1, [r1, #0]	@ 0005c47e 0988
.org 0x5c480
	ldrb r2, [r0, #7]	@ 0005c480 c279
.org 0x5c482
	subs r1, r1, r2	@ 0005c482 891a
.org 0x5c484
	lsls r1, r1, #5	@ 0005c484 4901
.org 0x5c486
	movs r2, #128	@ 0005c486 8022
.org 0x5c488
	lsls r2, r2, #2	@ 0005c488 9200
.org 0x5c48a
	adds r1, r1, r2	@ 0005c48a 8918
.org 0x5c48c
	bl 0x2208	@ 0005c48c a5f7bcfe
.org 0x5c490
	adds r0, r7, #0	@ 0005c490 381c
.org 0x5c492
	bl 0x1cc9c	@ 0005c492 c0f703fc
.org 0x5c496
	adds r0, r7, #0	@ 0005c496 381c
.org 0x5c498
	bl 0x1ceec	@ 0005c498 c0f728fd
.org 0x5c49c
	adds r1, r7, #0	@ 0005c49c 391c
.org 0x5c49e
	adds r1, #37	@ 0005c49e 2531
.org 0x5c4a0
	movs r0, #24	@ 0005c4a0 1820
.org 0x5c4a2
	strb r0, [r1, #0]	@ 0005c4a2 0870
.org 0x5c4a4
	adds r1, r5, #0	@ 0005c4a4 291c
.org 0x5c4a6
	mov r3, r8	@ 0005c4a6 4346
.org 0x5c4a8
	ands r1, r3	@ 0005c4a8 1940
.org 0x5c4aa
	adds r0, r7, #0	@ 0005c4aa 381c
.org 0x5c4ac
	adds r0, #76	@ 0005c4ac 4c30
.org 0x5c4ae
	strb r1, [r0, #0]	@ 0005c4ae 0170
.org 0x5c4b0
	adds r3, r7, #0	@ 0005c4b0 3b1c
.org 0x5c4b2
	adds r3, #74	@ 0005c4b2 4a33
.org 0x5c4b4
	lsls r1, r1, #4	@ 0005c4b4 0901
.org 0x5c4b6
	ldrb r2, [r3, #0]	@ 0005c4b6 1a78
.org 0x5c4b8
	movs r0, #17	@ 0005c4b8 1120
.org 0x5c4ba
	negs r0, r0	@ 0005c4ba 4042
.org 0x5c4bc
	ands r0, r2	@ 0005c4bc 1040
.org 0x5c4be
	orrs r0, r1	@ 0005c4be 0843
.org 0x5c4c0
	strb r0, [r3, #0]	@ 0005c4c0 1870
.org 0x5c4c2
	mov r4, r8	@ 0005c4c2 4446
.org 0x5c4c4
	ands r5, r4	@ 0005c4c4 2540
.org 0x5c4c6
	cmp r5, #0	@ 0005c4c6 002d
.org 0x5c4c8
	beq.n 0x5c4f0	@ 0005c4c8 12d0
.org 0x5c4ca
	ldrb r0, [r7, #10]	@ 0005c4ca b87a
.org 0x5c4cc
	movs r1, #16	@ 0005c4cc 1021
.org 0x5c4ce
	orrs r0, r1	@ 0005c4ce 0843
.org 0x5c4d0
	b.n 0x5c4f6	@ 0005c4d0 11e0
.org 0x5c4d2
	.byte 0x00	@ 0005c4d2 data
.org 0x5c4d3
	.byte 0x00	@ 0005c4d3 data
.org 0x5c4d4
	.byte 0x10,0x97,0x12,0x08	@ 0005c4d4 data
.org 0x5c4d8
	.byte 0x1c,0x97,0x12,0x08	@ 0005c4d8 data
.org 0x5c4dc
	.byte 0x70,0x7d,0x85,0x08	@ 0005c4dc data
.org 0x5c4e0
	.byte 0x54,0x46,0xc4,0x08	@ 0005c4e0 data
.org 0x5c4e4
	.byte 0x40,0xe0,0x02,0x02	@ 0005c4e4 data
.org 0x5c4e8
	.byte 0x60,0x46,0xc4,0x08	@ 0005c4e8 data
.org 0x5c4ec
	.byte 0x40,0xde,0x02,0x02	@ 0005c4ec data
.org 0x5c4f0
	ldrb r1, [r7, #10]	@ 0005c4f0 b97a
.org 0x5c4f2
	movs r0, #239	@ 0005c4f2 ef20
.org 0x5c4f4
	ands r0, r1	@ 0005c4f4 0840
.org 0x5c4f6
	strb r0, [r7, #10]	@ 0005c4f6 b872
.org 0x5c4f8
	ldr r0, [pc, #36]	@ 0005c4f8 0948
.org 0x5c4fa
	ldr r0, [r0, #0]	@ 0005c4fa 0068
.org 0x5c4fc
	ldr r1, [r0, #0]	@ 0005c4fc 0168
.org 0x5c4fe
	lsls r0, r6, #2	@ 0005c4fe b000
.org 0x5c500
	add r0, sp	@ 0005c500 6844
