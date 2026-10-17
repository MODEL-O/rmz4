@ FUN_0803f528  entry 0x0803f528  size 160
.thumb
.org 0x3f528
FUN_0803f528:
	push {r4, r5, r6, lr}	@ 0003f528 70b5
.org 0x3f52a
	sub sp, #8	@ 0003f52a 82b0
.org 0x3f52c
	adds r4, r0, #0	@ 0003f52c 041c
.org 0x3f52e
	ldr r6, [r4, #44]	@ 0003f52e e66a
.org 0x3f530
	movs r1, #3	@ 0003f530 0321
.org 0x3f532
	bl 0x3a99c	@ 0003f532 fbf733fa
.org 0x3f536
	lsls r0, r0, #24	@ 0003f536 0006
.org 0x3f538
	lsrs r5, r0, #24	@ 0003f538 050e
.org 0x3f53a
	cmp r5, #0	@ 0003f53a 002d
.org 0x3f53c
	bne.n 0x3f574	@ 0003f53c 1ad1
.org 0x3f53e
	adds r0, r4, #0	@ 0003f53e 201c
.org 0x3f540
	adds r0, #140	@ 0003f540 8c30
.org 0x3f542
	ldr r0, [r0, #0]	@ 0003f542 0068
.org 0x3f544
	movs r1, #4	@ 0003f544 0421
.org 0x3f546
	ands r0, r1	@ 0003f546 0840
.org 0x3f548
	cmp r0, #0	@ 0003f548 0028
.org 0x3f54a
	beq.n 0x3f574	@ 0003f54a 13d0
.org 0x3f54c
	ldrb r0, [r4, #18]	@ 0003f54c a07c
.org 0x3f54e
	adds r1, r0, #1	@ 0003f54e 411c
.org 0x3f550
	strb r1, [r4, #18]	@ 0003f550 a174
.org 0x3f552
	lsls r0, r0, #24	@ 0003f552 0006
.org 0x3f554
	lsrs r0, r0, #24	@ 0003f554 000e
.org 0x3f556
	cmp r0, #3	@ 0003f556 0328
.org 0x3f558
	bls.n 0x3f55e	@ 0003f558 01d9
.org 0x3f55a
	movs r5, #1	@ 0003f55a 0125
.org 0x3f55c
	b.n 0x3f574	@ 0003f55c 0ae0
.org 0x3f55e
	adds r0, r4, #0	@ 0003f55e 201c
.org 0x3f560
	adds r0, #116	@ 0003f560 7430
.org 0x3f562
	ldr r1, [pc, #80]	@ 0003f562 1449
.org 0x3f564
	movs r3, #1	@ 0003f564 0123
.org 0x3f566
	negs r3, r3	@ 0003f566 5b42
.org 0x3f568
	str r3, [sp, #0]	@ 0003f568 0093
.org 0x3f56a
	ldrb r2, [r4, #18]	@ 0003f56a a27c
.org 0x3f56c
	str r2, [sp, #4]	@ 0003f56c 0192
.org 0x3f56e
	movs r2, #5	@ 0003f56e 0522
.org 0x3f570
	bl 0x5794	@ 0003f570 c6f710f9
.org 0x3f574
	adds r0, r6, #0	@ 0003f574 301c
.org 0x3f576
	adds r0, #250	@ 0003f576 fa30
.org 0x3f578
	ldrb r0, [r0, #0]	@ 0003f578 0078
.org 0x3f57a
	cmp r0, #2	@ 0003f57a 0228
.org 0x3f57c
	bne.n 0x3f580	@ 0003f57c 00d1
.org 0x3f57e
	movs r5, #1	@ 0003f57e 0125
.org 0x3f580
	cmp r5, #0	@ 0003f580 002d
.org 0x3f582
	beq.n 0x3f5bc	@ 0003f582 1bd0
.org 0x3f584
	cmp r5, #255	@ 0003f584 ff2d
.org 0x3f586
	beq.n 0x3f598	@ 0003f586 07d0
.org 0x3f588
	adds r1, r4, #0	@ 0003f588 211c
.org 0x3f58a
	adds r1, #84	@ 0003f58a 5431
.org 0x3f58c
	movs r0, #2	@ 0003f58c 0220
.org 0x3f58e
	bl 0xd0c88	@ 0003f58e 91f07bfb
.org 0x3f592
	movs r0, #39	@ 0003f592 2720
.org 0x3f594
	bl 0x2b10	@ 0003f594 c3f7bcfa
.org 0x3f598
	ldr r1, [pc, #28]	@ 0003f598 0749
.org 0x3f59a
	ldrb r0, [r4, #9]	@ 0003f59a 607a
.org 0x3f59c
	lsls r0, r0, #2	@ 0003f59c 8000
.org 0x3f59e
	adds r0, r0, r1	@ 0003f59e 4018
.org 0x3f5a0
	movs r1, #2	@ 0003f5a0 0221
.org 0x3f5a2
	str r1, [r4, #12]	@ 0003f5a2 e160
.org 0x3f5a4
	ldr r0, [r0, #0]	@ 0003f5a4 0068
.org 0x3f5a6
	ldr r0, [r0, #8]	@ 0003f5a6 8068
.org 0x3f5a8
	str r0, [r4, #20]	@ 0003f5a8 6061
.org 0x3f5aa
	adds r0, r4, #0	@ 0003f5aa 201c
.org 0x3f5ac
	bl 0x3f5d4	@ 0003f5ac 00f012f8
.org 0x3f5b0
	b.n 0x3f5ca	@ 0003f5b0 0be0
.org 0x3f5b2
	.byte 0x00	@ 0003f5b2 data
.org 0x3f5b3
	.byte 0x00	@ 0003f5b3 data
.org 0x3f5b4
	.byte 0xb4,0x53,0x85,0x08	@ 0003f5b4 data
.org 0x3f5b8
	.byte 0xf8,0x39,0x85,0x08	@ 0003f5b8 data
.org 0x3f5bc
	adds r0, r4, #0	@ 0003f5bc 201c
.org 0x3f5be
	bl 0x1cff0	@ 0003f5be ddf717fd
.org 0x3f5c2
	ldr r0, [r4, #84]	@ 0003f5c2 606d
.org 0x3f5c4
	ldr r1, [r4, #92]	@ 0003f5c4 e16d
.org 0x3f5c6
	adds r0, r0, r1	@ 0003f5c6 4018
