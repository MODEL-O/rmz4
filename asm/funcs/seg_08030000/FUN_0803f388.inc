@ FUN_0803f388  entry 0x0803f388  size 222
.thumb
.org 0x3f388
FUN_0803f388:
	push {r4, r5, lr}	@ 0003f388 30b5
.org 0x3f38a
	adds r5, r0, #0	@ 0003f38a 051c
.org 0x3f38c
	adds r4, r1, #0	@ 0003f38c 0c1c
.org 0x3f38e
	ldr r0, [pc, #64]	@ 0003f38e 1048
.org 0x3f390
	ldr r0, [r0, #0]	@ 0003f390 0068
.org 0x3f392
	bl 0x5500	@ 0003f392 c6f7b5f8
.org 0x3f396
	adds r3, r0, #0	@ 0003f396 031c
.org 0x3f398
	cmp r3, #0	@ 0003f398 002b
.org 0x3f39a
	beq.n 0x3f47c	@ 0003f39a 6fd0
.org 0x3f39c
	adds r0, r5, #0	@ 0003f39c 281c
.org 0x3f39e
	adds r0, #248	@ 0003f39e f830
.org 0x3f3a0
	ldrb r0, [r0, #0]	@ 0003f3a0 0078
.org 0x3f3a2
	cmp r0, #2	@ 0003f3a2 0228
.org 0x3f3a4
	bne.n 0x3f3e0	@ 0003f3a4 1cd1
.org 0x3f3a6
	ldr r1, [pc, #44]	@ 0003f3a6 0b49
.org 0x3f3a8
	movs r0, #5	@ 0003f3a8 0520
.org 0x3f3aa
	strb r0, [r3, #9]	@ 0003f3aa 5872
.org 0x3f3ac
	ldr r0, [r1, #20]	@ 0003f3ac 4869
.org 0x3f3ae
	ldr r0, [r0, #0]	@ 0003f3ae 0068
.org 0x3f3b0
	str r0, [r3, #20]	@ 0003f3b0 5861
.org 0x3f3b2
	ldrb r1, [r3, #11]	@ 0003f3b2 d97a
.org 0x3f3b4
	movs r0, #191	@ 0003f3b4 bf20
.org 0x3f3b6
	ands r0, r1	@ 0003f3b6 0840
.org 0x3f3b8
	strb r0, [r3, #11]	@ 0003f3b8 d872
.org 0x3f3ba
	adds r1, r3, #0	@ 0003f3ba 191c
.org 0x3f3bc
	adds r1, #37	@ 0003f3bc 2531
.org 0x3f3be
	movs r0, #16	@ 0003f3be 1020
.org 0x3f3c0
	strb r0, [r1, #0]	@ 0003f3c0 0870
.org 0x3f3c2
	ldr r0, [pc, #20]	@ 0003f3c2 0548
.org 0x3f3c4
	ldrh r0, [r0, #0]	@ 0003f3c4 0088
.org 0x3f3c6
	strh r0, [r3, #32]	@ 0003f3c6 1884
.org 0x3f3c8
	ldr r0, [pc, #16]	@ 0003f3c8 0448
.org 0x3f3ca
	ldrb r0, [r0, #0]	@ 0003f3ca 0078
.org 0x3f3cc
	b.n 0x3f406	@ 0003f3cc 1be0
.org 0x3f3ce
	.byte 0x00	@ 0003f3ce data
.org 0x3f3cf
	.byte 0x00	@ 0003f3cf data
.org 0x3f3d0
	.byte 0x88,0xed,0x02,0x02	@ 0003f3d0 data
.org 0x3f3d4
	.byte 0xf8,0x39,0x85,0x08	@ 0003f3d4 data
.org 0x3f3d8
	.byte 0xfc,0x36,0x85,0x08	@ 0003f3d8 data
.org 0x3f3dc
	.byte 0x04,0x37,0x85,0x08	@ 0003f3dc data
.org 0x3f3e0
	ldr r1, [pc, #68]	@ 0003f3e0 1149
.org 0x3f3e2
	movs r0, #5	@ 0003f3e2 0520
.org 0x3f3e4
	strb r0, [r3, #9]	@ 0003f3e4 5872
.org 0x3f3e6
	ldr r0, [r1, #20]	@ 0003f3e6 4869
.org 0x3f3e8
	ldr r0, [r0, #0]	@ 0003f3e8 0068
.org 0x3f3ea
	str r0, [r3, #20]	@ 0003f3ea 5861
.org 0x3f3ec
	ldrb r1, [r3, #11]	@ 0003f3ec d97a
.org 0x3f3ee
	movs r0, #191	@ 0003f3ee bf20
.org 0x3f3f0
	ands r0, r1	@ 0003f3f0 0840
.org 0x3f3f2
	strb r0, [r3, #11]	@ 0003f3f2 d872
.org 0x3f3f4
	adds r1, r3, #0	@ 0003f3f4 191c
.org 0x3f3f6
	adds r1, #37	@ 0003f3f6 2531
.org 0x3f3f8
	movs r0, #16	@ 0003f3f8 1020
.org 0x3f3fa
	strb r0, [r1, #0]	@ 0003f3fa 0870
.org 0x3f3fc
	ldr r0, [pc, #44]	@ 0003f3fc 0b48
.org 0x3f3fe
	ldrh r0, [r0, #2]	@ 0003f3fe 4088
.org 0x3f400
	strh r0, [r3, #32]	@ 0003f400 1884
.org 0x3f402
	ldr r0, [pc, #44]	@ 0003f402 0b48
.org 0x3f404
	ldrb r0, [r0, #1]	@ 0003f404 4078
.org 0x3f406
	subs r1, #3	@ 0003f406 0339
.org 0x3f408
	strb r0, [r1, #0]	@ 0003f408 0870
.org 0x3f40a
	str r4, [r3, #40]	@ 0003f40a 9c62
.org 0x3f40c
	str r5, [r3, #44]	@ 0003f40c dd62
.org 0x3f40e
	movs r0, #0	@ 0003f40e 0020
.org 0x3f410
	strb r0, [r3, #16]	@ 0003f410 1874
.org 0x3f412
	strb r0, [r3, #17]	@ 0003f412 5874
.org 0x3f414
	ldrb r0, [r4, #10]	@ 0003f414 a07a
.org 0x3f416
	lsrs r2, r0, #4	@ 0003f416 0209
.org 0x3f418
	movs r0, #1	@ 0003f418 0120
.org 0x3f41a
	ands r2, r0	@ 0003f41a 0240
.org 0x3f41c
	cmp r2, #0	@ 0003f41c 002a
.org 0x3f41e
	beq.n 0x3f434	@ 0003f41e 09d0
.org 0x3f420
	ldrb r0, [r3, #10]	@ 0003f420 987a
.org 0x3f422
	movs r1, #16	@ 0003f422 1021
.org 0x3f424
	orrs r0, r1	@ 0003f424 0843
.org 0x3f426
	b.n 0x3f43a	@ 0003f426 08e0
.org 0x3f428
	.byte 0xf8,0x39,0x85,0x08	@ 0003f428 data
.org 0x3f42c
	.byte 0xfc,0x36,0x85,0x08	@ 0003f42c data
.org 0x3f430
	.byte 0x04,0x37,0x85,0x08	@ 0003f430 data
.org 0x3f434
	ldrb r1, [r3, #10]	@ 0003f434 997a
.org 0x3f436
	movs r0, #239	@ 0003f436 ef20
.org 0x3f438
	ands r0, r1	@ 0003f438 0840
.org 0x3f43a
	strb r0, [r3, #10]	@ 0003f43a 9872
.org 0x3f43c
	adds r1, r2, #0	@ 0003f43c 111c
.org 0x3f43e
	adds r0, r3, #0	@ 0003f43e 181c
.org 0x3f440
	adds r0, #76	@ 0003f440 4c30
.org 0x3f442
	strb r1, [r0, #0]	@ 0003f442 0170
.org 0x3f444
	movs r0, #74	@ 0003f444 4a20
.org 0x3f446
	adds r0, r0, r3	@ 0003f446 c018
.org 0x3f448
	mov ip, r0	@ 0003f448 8446
.org 0x3f44a
	lsls r1, r1, #4	@ 0003f44a 0901
.org 0x3f44c
	ldrb r2, [r0, #0]	@ 0003f44c 0278
.org 0x3f44e
	movs r0, #17	@ 0003f44e 1120
.org 0x3f450
	negs r0, r0	@ 0003f450 4042
.org 0x3f452
	ands r0, r2	@ 0003f452 1040
.org 0x3f454
	orrs r0, r1	@ 0003f454 0843
.org 0x3f456
	mov r1, ip	@ 0003f456 6146
.org 0x3f458
	strb r0, [r1, #0]	@ 0003f458 0870
.org 0x3f45a
	ldrb r1, [r3, #10]	@ 0003f45a 997a
.org 0x3f45c
	movs r0, #16	@ 0003f45c 1020
.org 0x3f45e
	ands r0, r1	@ 0003f45e 0840
.org 0x3f460
	cmp r0, #0	@ 0003f460 0028
.org 0x3f462
	beq.n 0x3f46c	@ 0003f462 03d0
.org 0x3f464
	ldr r0, [r4, #84]	@ 0003f464 606d
