@ FUN_0806f430  entry 0x0806f430  size 424
.thumb
.org 0x6f430
FUN_0806f430:
	push {r4, r5, r6, r7, lr}	@ 0006f430 f0b5
.org 0x6f432
	mov r7, sl	@ 0006f432 5746
.org 0x6f434
	mov r6, r9	@ 0006f434 4e46
.org 0x6f436
	mov r5, r8	@ 0006f436 4546
.org 0x6f438
	push {r5, r6, r7}	@ 0006f438 e0b4
.org 0x6f43a
	adds r7, r0, #0	@ 0006f43a 071c
.org 0x6f43c
	ldr r5, [pc, #388]	@ 0006f43c 614d
.org 0x6f43e
	ldr r0, [pc, #392]	@ 0006f43e 6248
.org 0x6f440
	mov r8, r0	@ 0006f440 8046
.org 0x6f442
	adds r0, r5, r0	@ 0006f442 2818
.org 0x6f444
	ldr r1, [pc, #388]	@ 0006f444 6149
.org 0x6f446
	mov r9, r1	@ 0006f446 8946
.org 0x6f448
	movs r4, #141	@ 0006f448 8d24
.org 0x6f44a
	lsls r4, r4, #1	@ 0006f44a 6400
.org 0x6f44c
	adds r1, r1, r4	@ 0006f44c 0919
.org 0x6f44e
	ldrh r1, [r1, #0]	@ 0006f44e 0988
.org 0x6f450
	ldrh r2, [r0, #6]	@ 0006f450 c288
.org 0x6f452
	lsrs r2, r2, #6	@ 0006f452 9209
.org 0x6f454
	subs r1, r1, r2	@ 0006f454 891a
.org 0x6f456
	lsls r1, r1, #5	@ 0006f456 4901
.org 0x6f458
	movs r2, #128	@ 0006f458 8022
.org 0x6f45a
	lsls r2, r2, #9	@ 0006f45a 5202
.org 0x6f45c
	adds r1, r1, r2	@ 0006f45c 8918
.org 0x6f45e
	bl 0x1d30	@ 0006f45e 92f767fc
.org 0x6f462
	ldr r0, [pc, #364]	@ 0006f462 5b48
.org 0x6f464
	adds r5, r5, r0	@ 0006f464 2d18
.org 0x6f466
	ldr r6, [pc, #364]	@ 0006f466 5b4e
.org 0x6f468
	adds r4, r6, r4	@ 0006f468 3419
.org 0x6f46a
	ldrh r1, [r4, #0]	@ 0006f46a 2188
.org 0x6f46c
	ldrb r0, [r5, #7]	@ 0006f46c e879
.org 0x6f46e
	subs r1, r1, r0	@ 0006f46e 091a
.org 0x6f470
	lsls r1, r1, #5	@ 0006f470 4901
.org 0x6f472
	movs r2, #128	@ 0006f472 8022
.org 0x6f474
	lsls r2, r2, #2	@ 0006f474 9200
.org 0x6f476
	mov sl, r2	@ 0006f476 9246
.org 0x6f478
	add r1, sl	@ 0006f478 5144
.org 0x6f47a
	adds r0, r5, #0	@ 0006f47a 281c
.org 0x6f47c
	bl 0x2208	@ 0006f47c 92f7c4fe
.org 0x6f480
	ldr r5, [pc, #340]	@ 0006f480 554d
.org 0x6f482
	mov r1, r8	@ 0006f482 4146
.org 0x6f484
	adds r0, r5, r1	@ 0006f484 6818
.org 0x6f486
	movs r4, #142	@ 0006f486 8e24
.org 0x6f488
	lsls r4, r4, #1	@ 0006f488 6400
.org 0x6f48a
	mov r2, r9	@ 0006f48a 4a46
.org 0x6f48c
	adds r1, r2, r4	@ 0006f48c 1119
.org 0x6f48e
	ldrh r1, [r1, #0]	@ 0006f48e 0988
.org 0x6f490
	ldrh r2, [r0, #6]	@ 0006f490 c288
.org 0x6f492
	lsrs r2, r2, #6	@ 0006f492 9209
.org 0x6f494
	subs r1, r1, r2	@ 0006f494 891a
.org 0x6f496
	lsls r1, r1, #5	@ 0006f496 4901
.org 0x6f498
	movs r2, #128	@ 0006f498 8022
.org 0x6f49a
	lsls r2, r2, #9	@ 0006f49a 5202
.org 0x6f49c
	adds r1, r1, r2	@ 0006f49c 8918
.org 0x6f49e
	bl 0x1d30	@ 0006f49e 92f747fc
.org 0x6f4a2
	ldr r0, [pc, #300]	@ 0006f4a2 4b48
.org 0x6f4a4
	adds r5, r5, r0	@ 0006f4a4 2d18
.org 0x6f4a6
	adds r4, r6, r4	@ 0006f4a6 3419
.org 0x6f4a8
	ldrh r1, [r4, #0]	@ 0006f4a8 2188
.org 0x6f4aa
	ldrb r0, [r5, #7]	@ 0006f4aa e879
.org 0x6f4ac
	subs r1, r1, r0	@ 0006f4ac 091a
.org 0x6f4ae
	lsls r1, r1, #5	@ 0006f4ae 4901
.org 0x6f4b0
	add r1, sl	@ 0006f4b0 5144
.org 0x6f4b2
	adds r0, r5, #0	@ 0006f4b2 281c
.org 0x6f4b4
	bl 0x2208	@ 0006f4b4 92f7a8fe
.org 0x6f4b8
	ldr r4, [pc, #288]	@ 0006f4b8 484c
.org 0x6f4ba
	add r8, r4	@ 0006f4ba a044
.org 0x6f4bc
	movs r5, #143	@ 0006f4bc 8f25
.org 0x6f4be
	lsls r5, r5, #1	@ 0006f4be 6d00
.org 0x6f4c0
	add r9, r5	@ 0006f4c0 a944
.org 0x6f4c2
	mov r2, r9	@ 0006f4c2 4a46
.org 0x6f4c4
	ldrh r1, [r2, #0]	@ 0006f4c4 1188
.org 0x6f4c6
	mov r2, r8	@ 0006f4c6 4246
.org 0x6f4c8
	ldrh r0, [r2, #6]	@ 0006f4c8 d088
.org 0x6f4ca
	lsrs r0, r0, #6	@ 0006f4ca 8009
.org 0x6f4cc
	subs r1, r1, r0	@ 0006f4cc 091a
.org 0x6f4ce
	lsls r1, r1, #5	@ 0006f4ce 4901
.org 0x6f4d0
	movs r0, #128	@ 0006f4d0 8020
.org 0x6f4d2
	lsls r0, r0, #9	@ 0006f4d2 4002
.org 0x6f4d4
	adds r1, r1, r0	@ 0006f4d4 0918
.org 0x6f4d6
	mov r0, r8	@ 0006f4d6 4046
.org 0x6f4d8
	bl 0x1d30	@ 0006f4d8 92f72afc
.org 0x6f4dc
	ldr r1, [pc, #240]	@ 0006f4dc 3c49
.org 0x6f4de
	adds r4, r4, r1	@ 0006f4de 6418
.org 0x6f4e0
	adds r6, r6, r5	@ 0006f4e0 7619
.org 0x6f4e2
	ldrh r1, [r6, #0]	@ 0006f4e2 3188
.org 0x6f4e4
	ldrb r0, [r4, #7]	@ 0006f4e4 e079
.org 0x6f4e6
	subs r1, r1, r0	@ 0006f4e6 091a
.org 0x6f4e8
	lsls r1, r1, #5	@ 0006f4e8 4901
.org 0x6f4ea
	add r1, sl	@ 0006f4ea 5144
.org 0x6f4ec
	adds r0, r4, #0	@ 0006f4ec 201c
.org 0x6f4ee
	bl 0x2208	@ 0006f4ee 92f78bfe
.org 0x6f4f2
	adds r0, r7, #0	@ 0006f4f2 381c
.org 0x6f4f4
	bl 0x1cc9c	@ 0006f4f4 adf7d2fb
.org 0x6f4f8
	ldrb r1, [r7, #10]	@ 0006f4f8 b97a
.org 0x6f4fa
	movs r0, #1	@ 0006f4fa 0120
.org 0x6f4fc
	movs r5, #0	@ 0006f4fc 0025
.org 0x6f4fe
	orrs r0, r1	@ 0006f4fe 0843
.org 0x6f500
	movs r1, #2	@ 0006f500 0221
.org 0x6f502
	orrs r0, r1	@ 0006f502 0843
.org 0x6f504
	strb r0, [r7, #10]	@ 0006f504 b872
.org 0x6f506
	movs r1, #141	@ 0006f506 8d21
.org 0x6f508
	lsls r1, r1, #8	@ 0006f508 0902
.org 0x6f50a
	adds r0, r7, #0	@ 0006f50a 381c
.org 0x6f50c
	bl 0x1cf00	@ 0006f50c adf7f8fc
.org 0x6f510
	adds r0, r7, #0	@ 0006f510 381c
.org 0x6f512
	bl 0x1cff0	@ 0006f512 adf76dfd
.org 0x6f516
	adds r2, r7, #0	@ 0006f516 3a1c
.org 0x6f518
	adds r2, #69	@ 0006f518 4532
.org 0x6f51a
	ldrb r1, [r2, #0]	@ 0006f51a 1178
.org 0x6f51c
	movs r0, #13	@ 0006f51c 0d20
.org 0x6f51e
	negs r0, r0	@ 0006f51e 4042
.org 0x6f520
	ands r0, r1	@ 0006f520 0840
.org 0x6f522
	movs r1, #4	@ 0006f522 0421
.org 0x6f524
	orrs r0, r1	@ 0006f524 0843
.org 0x6f526
	strb r0, [r2, #0]	@ 0006f526 1070
.org 0x6f528
	adds r0, r7, #0	@ 0006f528 381c
.org 0x6f52a
	adds r0, #76	@ 0006f52a 4c30
.org 0x6f52c
	strb r5, [r0, #0]	@ 0006f52c 0570
.org 0x6f52e
	adds r2, #5	@ 0006f52e 0532
.org 0x6f530
	ldrb r1, [r2, #0]	@ 0006f530 1178
.org 0x6f532
	movs r0, #17	@ 0006f532 1120
.org 0x6f534
	negs r0, r0	@ 0006f534 4042
.org 0x6f536
	ands r0, r1	@ 0006f536 0840
.org 0x6f538
	strb r0, [r2, #0]	@ 0006f538 1070
.org 0x6f53a
	ldrb r1, [r7, #10]	@ 0006f53a b97a
.org 0x6f53c
	movs r0, #239	@ 0006f53c ef20
.org 0x6f53e
	ands r0, r1	@ 0006f53e 0840
.org 0x6f540
	strb r0, [r7, #10]	@ 0006f540 b872
.org 0x6f542
	ldr r1, [pc, #156]	@ 0006f542 2749
.org 0x6f544
	adds r0, r7, #0	@ 0006f544 381c
.org 0x6f546
	movs r2, #96	@ 0006f546 6022
.org 0x6f548
	bl 0x503cc	@ 0006f548 e0f740ff
.org 0x6f54c
	ldr r1, [pc, #148]	@ 0006f54c 2549
.org 0x6f54e
	adds r0, r7, #0	@ 0006f54e 381c
.org 0x6f550
	adds r0, #116	@ 0006f550 7430
.org 0x6f552
	str r1, [r0, #36]	@ 0006f552 4162
.org 0x6f554
	ldr r0, [r7, #84]	@ 0006f554 786d
.org 0x6f556
	ldr r1, [r7, #88]	@ 0006f556 b96d
.org 0x6f558
	bl 0x8534	@ 0006f558 98f7ecff
.org 0x6f55c
	adds r4, r7, #0	@ 0006f55c 3c1c
.org 0x6f55e
	adds r4, #180	@ 0006f55e b434
.org 0x6f560
	str r0, [r4, #16]	@ 0006f560 2061
.org 0x6f562
	ldr r2, [pc, #132]	@ 0006f562 214a
.org 0x6f564
	adds r0, r0, r2	@ 0006f564 8018
.org 0x6f566
	str r0, [r7, #88]	@ 0006f566 b865
.org 0x6f568
	ldr r0, [r7, #84]	@ 0006f568 786d
.org 0x6f56a
	str r0, [r4, #0]	@ 0006f56a 2060
.org 0x6f56c
	ldr r0, [r7, #88]	@ 0006f56c b86d
.org 0x6f56e
	str r0, [r4, #4]	@ 0006f56e 6060
.org 0x6f570
	strb r5, [r4, #25]	@ 0006f570 6576
.org 0x6f572
	strb r5, [r4, #20]	@ 0006f572 2575
.org 0x6f574
	strb r5, [r4, #21]	@ 0006f574 6575
.org 0x6f576
	strb r5, [r4, #22]	@ 0006f576 a575
.org 0x6f578
	strb r5, [r4, #23]	@ 0006f578 e575
.org 0x6f57a
	adds r0, r7, #0	@ 0006f57a 381c
.org 0x6f57c
	movs r1, #0	@ 0006f57c 0021
.org 0x6f57e
	movs r2, #0	@ 0006f57e 0022
.org 0x6f580
	bl 0xa7b2c	@ 0006f580 38f0d4fa
.org 0x6f584
	str r0, [r4, #8]	@ 0006f584 a060
.org 0x6f586
	adds r0, r7, #0	@ 0006f586 381c
.org 0x6f588
	movs r1, #0	@ 0006f588 0021
.org 0x6f58a
	movs r2, #1	@ 0006f58a 0122
.org 0x6f58c
	bl 0xa7b2c	@ 0006f58c 38f0cefa
.org 0x6f590
	str r0, [r4, #12]	@ 0006f590 e060
.org 0x6f592
	ldr r1, [r4, #8]	@ 0006f592 a168
.org 0x6f594
	adds r0, r7, #0	@ 0006f594 381c
.org 0x6f596
	movs r2, #0	@ 0006f596 0022
.org 0x6f598
	bl 0xa8824	@ 0006f598 39f044f9
.org 0x6f59c
	ldr r1, [r4, #12]	@ 0006f59c e168
.org 0x6f59e
	adds r0, r7, #0	@ 0006f59e 381c
.org 0x6f5a0
	movs r2, #1	@ 0006f5a0 0122
.org 0x6f5a2
	bl 0xa8824	@ 0006f5a2 39f03ff9
.org 0x6f5a6
	ldr r1, [pc, #68]	@ 0006f5a6 1149
.org 0x6f5a8
	ldrb r0, [r7, #9]	@ 0006f5a8 787a
.org 0x6f5aa
	lsls r0, r0, #2	@ 0006f5aa 8000
.org 0x6f5ac
	adds r0, r0, r1	@ 0006f5ac 4018
.org 0x6f5ae
	movs r1, #1	@ 0006f5ae 0121
.org 0x6f5b0
	str r1, [r7, #12]	@ 0006f5b0 f960
.org 0x6f5b2
	ldr r0, [r0, #0]	@ 0006f5b2 0068
.org 0x6f5b4
	ldr r0, [r0, #4]	@ 0006f5b4 4068
.org 0x6f5b6
	str r0, [r7, #20]	@ 0006f5b6 7861
.org 0x6f5b8
	ldrb r0, [r7, #16]	@ 0006f5b8 387c
.org 0x6f5ba
	cmp r0, #0	@ 0006f5ba 0028
.org 0x6f5bc
	beq.n 0x6f5f0	@ 0006f5bc 18d0
.org 0x6f5be
	strb r1, [r7, #13]	@ 0006f5be 7973
.org 0x6f5c0
	b.n 0x6f5f2	@ 0006f5c0 17e0
.org 0x6f5c2
	.byte 0x00	@ 0006f5c2 data
.org 0x6f5c3
	.byte 0x00	@ 0006f5c3 data
.org 0x6f5c4
	.byte 0x04,0x0b,0x00,0x00	@ 0006f5c4 data
.org 0x6f5c8
	.byte 0x00,0x40,0xc4,0x08	@ 0006f5c8 data
.org 0x6f5cc
	.byte 0x40,0xe0,0x02,0x02	@ 0006f5cc data
.org 0x6f5d0
	.byte 0x0c,0x40,0xc4,0x08	@ 0006f5d0 data
.org 0x6f5d4
	.byte 0x40,0xde,0x02,0x02	@ 0006f5d4 data
