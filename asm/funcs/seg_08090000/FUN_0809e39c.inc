@ FUN_0809e39c  entry 0x0809e39c  size 310
.thumb
.org 0x9e39c
FUN_0809e39c:
	push {r4, r5, r6, r7, lr}	@ 0009e39c f0b5
.org 0x9e39e
	mov r7, r9	@ 0009e39e 4f46
.org 0x9e3a0
	mov r6, r8	@ 0009e3a0 4646
.org 0x9e3a2
	push {r6, r7}	@ 0009e3a2 c0b4
.org 0x9e3a4
	adds r4, r0, #0	@ 0009e3a4 041c
.org 0x9e3a6
	adds r0, #180	@ 0009e3a6 b430
.org 0x9e3a8
	ldr r0, [r0, #0]	@ 0009e3a8 0068
.org 0x9e3aa
	mov r9, r0	@ 0009e3aa 8146
.org 0x9e3ac
	ldr r7, [pc, #72]	@ 0009e3ac 124f
.org 0x9e3ae
	ldr r5, [r7, #0]	@ 0009e3ae 3d68
.org 0x9e3b0
	movs r0, #0	@ 0009e3b0 0020
.org 0x9e3b2
	mov r8, r0	@ 0009e3b2 8046
.org 0x9e3b4
	ldrb r0, [r4, #15]	@ 0009e3b4 e07b
.org 0x9e3b6
	cmp r0, #0	@ 0009e3b6 0028
.org 0x9e3b8
	bne.n 0x9e42e	@ 0009e3b8 39d1
.org 0x9e3ba
	movs r0, #64	@ 0009e3ba 4020
.org 0x9e3bc
	bl 0x2b10	@ 0009e3bc 64f7a8fb
.org 0x9e3c0
	adds r0, r4, #0	@ 0009e3c0 201c
.org 0x9e3c2
	adds r0, #116	@ 0009e3c2 7430
.org 0x9e3c4
	ldr r1, [pc, #52]	@ 0009e3c4 0d49
.org 0x9e3c6
	ldr r1, [r1, #8]	@ 0009e3c6 8968
.org 0x9e3c8
	bl 0x5784	@ 0009e3c8 67f7dcf9
.org 0x9e3cc
	ldrb r1, [r4, #10]	@ 0009e3cc a17a
.org 0x9e3ce
	movs r0, #1	@ 0009e3ce 0120
.org 0x9e3d0
	movs r6, #0	@ 0009e3d0 0026
.org 0x9e3d2
	orrs r0, r1	@ 0009e3d2 0843
.org 0x9e3d4
	strb r0, [r4, #10]	@ 0009e3d4 a072
.org 0x9e3d6
	movs r1, #172	@ 0009e3d6 ac21
.org 0x9e3d8
	lsls r1, r1, #7	@ 0009e3d8 c901
.org 0x9e3da
	adds r0, r4, #0	@ 0009e3da 201c
.org 0x9e3dc
	bl 0x1cf00	@ 0009e3dc 7ef790fd
.org 0x9e3e0
	ldr r0, [r7, #0]	@ 0009e3e0 3868
.org 0x9e3e2
	ldrb r0, [r0, #10]	@ 0009e3e2 807a
.org 0x9e3e4
	lsrs r2, r0, #4	@ 0009e3e4 0209
.org 0x9e3e6
	movs r0, #1	@ 0009e3e6 0120
.org 0x9e3e8
	ands r2, r0	@ 0009e3e8 0240
.org 0x9e3ea
	cmp r2, #0	@ 0009e3ea 002a
.org 0x9e3ec
	beq.n 0x9e400	@ 0009e3ec 08d0
.org 0x9e3ee
	ldrb r0, [r4, #10]	@ 0009e3ee a07a
.org 0x9e3f0
	movs r1, #16	@ 0009e3f0 1021
.org 0x9e3f2
	orrs r0, r1	@ 0009e3f2 0843
.org 0x9e3f4
	b.n 0x9e406	@ 0009e3f4 07e0
.org 0x9e3f6
	.byte 0x00	@ 0009e3f6 data
.org 0x9e3f7
	.byte 0x00	@ 0009e3f7 data
.org 0x9e3f8
	.byte 0xf0,0xdb,0x02,0x02	@ 0009e3f8 data
.org 0x9e3fc
	.byte 0xc8,0x15,0x86,0x08	@ 0009e3fc data
.org 0x9e400
	ldrb r1, [r4, #10]	@ 0009e400 a17a
.org 0x9e402
	movs r0, #239	@ 0009e402 ef20
.org 0x9e404
	ands r0, r1	@ 0009e404 0840
.org 0x9e406
	strb r0, [r4, #10]	@ 0009e406 a072
.org 0x9e408
	adds r1, r2, #0	@ 0009e408 111c
.org 0x9e40a
	adds r0, r4, #0	@ 0009e40a 201c
.org 0x9e40c
	adds r0, #76	@ 0009e40c 4c30
.org 0x9e40e
	strb r1, [r0, #0]	@ 0009e40e 0170
.org 0x9e410
	adds r3, r4, #0	@ 0009e410 231c
.org 0x9e412
	adds r3, #74	@ 0009e412 4a33
.org 0x9e414
	lsls r1, r1, #4	@ 0009e414 0901
.org 0x9e416
	ldrb r2, [r3, #0]	@ 0009e416 1a78
.org 0x9e418
	movs r0, #17	@ 0009e418 1120
.org 0x9e41a
	negs r0, r0	@ 0009e41a 4042
.org 0x9e41c
	ands r0, r2	@ 0009e41c 1040
.org 0x9e41e
	orrs r0, r1	@ 0009e41e 0843
.org 0x9e420
	strb r0, [r3, #0]	@ 0009e420 1870
.org 0x9e422
	movs r0, #150	@ 0009e422 9620
.org 0x9e424
	lsls r0, r0, #1	@ 0009e424 4000
.org 0x9e426
	str r0, [r4, #100]	@ 0009e426 6066
.org 0x9e428
	ldrb r0, [r4, #15]	@ 0009e428 e07b
.org 0x9e42a
	adds r0, #1	@ 0009e42a 0130
.org 0x9e42c
	strb r0, [r4, #15]	@ 0009e42c e073
.org 0x9e42e
	adds r0, r4, #0	@ 0009e42e 201c
.org 0x9e430
	bl 0x1cff0	@ 0009e430 7ef7defd
.org 0x9e434
	ldr r0, [r4, #100]	@ 0009e434 606e
.org 0x9e436
	subs r1, r0, #1	@ 0009e436 411e
.org 0x9e438
	str r1, [r4, #100]	@ 0009e438 6166
.org 0x9e43a
	mov r2, r9	@ 0009e43a 4a46
.org 0x9e43c
	ldrb r0, [r2, #12]	@ 0009e43c 107b
.org 0x9e43e
	cmp r0, #1	@ 0009e43e 0128
.org 0x9e440
	bhi.n 0x9e470	@ 0009e440 16d8
.org 0x9e442
	cmp r1, #0	@ 0009e442 0029
.org 0x9e444
	ble.n 0x9e470	@ 0009e444 14dd
.org 0x9e446
	adds r0, r4, #0	@ 0009e446 201c
.org 0x9e448
	adds r0, #140	@ 0009e448 8c30
.org 0x9e44a
	ldr r0, [r0, #0]	@ 0009e44a 0068
.org 0x9e44c
	movs r1, #128	@ 0009e44c 8021
.org 0x9e44e
	lsls r1, r1, #4	@ 0009e44e 0901
.org 0x9e450
	ands r0, r1	@ 0009e450 0840
.org 0x9e452
	cmp r0, #0	@ 0009e452 0028
.org 0x9e454
	beq.n 0x9e470	@ 0009e454 0cd0
.org 0x9e456
	cmp r5, #0	@ 0009e456 002d
.org 0x9e458
	beq.n 0x9e470	@ 0009e458 0ad0
.org 0x9e45a
	adds r0, r5, #0	@ 0009e45a 281c
.org 0x9e45c
	adds r0, #140	@ 0009e45c 8c30
.org 0x9e45e
	ldr r0, [r0, #0]	@ 0009e45e 0068
.org 0x9e460
	movs r2, #1	@ 0009e460 0122
.org 0x9e462
	ands r0, r2	@ 0009e462 1040
.org 0x9e464
	cmp r0, #0	@ 0009e464 0028
.org 0x9e466
	beq.n 0x9e46a	@ 0009e466 00d0
.org 0x9e468
	mov r8, r2	@ 0009e468 9046
.org 0x9e46a
	mov r0, r8	@ 0009e46a 4046
.org 0x9e46c
	cmp r0, #0	@ 0009e46c 0028
.org 0x9e46e
	beq.n 0x9e490	@ 0009e46e 0fd0
.org 0x9e470
	ldr r1, [pc, #24]	@ 0009e470 0649
.org 0x9e472
	ldrb r0, [r4, #9]	@ 0009e472 607a
.org 0x9e474
	lsls r0, r0, #2	@ 0009e474 8000
.org 0x9e476
	adds r0, r0, r1	@ 0009e476 4018
.org 0x9e478
	movs r1, #2	@ 0009e478 0221
.org 0x9e47a
	str r1, [r4, #12]	@ 0009e47a e160
.org 0x9e47c
	ldr r0, [r0, #0]	@ 0009e47c 0068
.org 0x9e47e
	ldr r0, [r0, #8]	@ 0009e47e 8068
.org 0x9e480
	str r0, [r4, #20]	@ 0009e480 6061
.org 0x9e482
	adds r0, r4, #0	@ 0009e482 201c
.org 0x9e484
	bl 0x9e4ec	@ 0009e484 00f032f8
.org 0x9e488
	b.n 0x9e4de	@ 0009e488 29e0
.org 0x9e48a
	.byte 0x00	@ 0009e48a data
.org 0x9e48b
	.byte 0x00	@ 0009e48b data
.org 0x9e48c
	.byte 0x40,0xdb,0x85,0x08	@ 0009e48c data
.org 0x9e490
	ldr r0, [pc, #44]	@ 0009e490 0b48
.org 0x9e492
	ldr r1, [r0, #0]	@ 0009e492 0168
.org 0x9e494
	ldr r0, [r1, #84]	@ 0009e494 486d
.org 0x9e496
	str r0, [r4, #84]	@ 0009e496 6065
.org 0x9e498
	ldr r0, [r1, #88]	@ 0009e498 886d
.org 0x9e49a
	str r0, [r4, #88]	@ 0009e49a a065
.org 0x9e49c
	ldr r1, [pc, #36]	@ 0009e49c 0949
.org 0x9e49e
	adds r0, r5, r1	@ 0009e49e 6818
.org 0x9e4a0
	movs r6, #0	@ 0009e4a0 0026
.org 0x9e4a2
	movs r3, #1	@ 0009e4a2 0123
.org 0x9e4a4
	strb r2, [r0, #0]	@ 0009e4a4 0270
.org 0x9e4a6
	adds r1, #1	@ 0009e4a6 0131
.org 0x9e4a8
	adds r0, r5, r1	@ 0009e4a8 6818
.org 0x9e4aa
	mov r1, r8	@ 0009e4aa 4146
.org 0x9e4ac
	strb r1, [r0, #0]	@ 0009e4ac 0170
.org 0x9e4ae
	ldr r1, [r4, #100]	@ 0009e4ae 616e
.org 0x9e4b0
	cmp r1, #74	@ 0009e4b0 4a29
.org 0x9e4b2
	bgt.n 0x9e4c8	@ 0009e4b2 09dc
.org 0x9e4b4
	ands r1, r2	@ 0009e4b4 1140
.org 0x9e4b6
	cmp r1, #0	@ 0009e4b6 0029
.org 0x9e4b8
	beq.n 0x9e4d6	@ 0009e4b8 0dd0
.org 0x9e4ba
	ldrb r0, [r4, #10]	@ 0009e4ba a07a
.org 0x9e4bc
	orrs r0, r3	@ 0009e4bc 1843
.org 0x9e4be
	b.n 0x9e4dc	@ 0009e4be 0de0
.org 0x9e4c0
	.byte 0xf0,0xdb,0x02,0x02	@ 0009e4c0 data
.org 0x9e4c4
	.byte 0x71,0x01,0x00,0x00	@ 0009e4c4 data
.org 0x9e4c8
	movs r0, #3	@ 0009e4c8 0320
.org 0x9e4ca
	ands r1, r0	@ 0009e4ca 0140
.org 0x9e4cc
	cmp r1, #0	@ 0009e4cc 0029
.org 0x9e4ce
	beq.n 0x9e4d6	@ 0009e4ce 02d0
.org 0x9e4d0
	ldrb r0, [r4, #10]	@ 0009e4d0 a07a
