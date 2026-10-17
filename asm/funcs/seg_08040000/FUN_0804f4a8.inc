@ FUN_0804f4a8  entry 0x0804f4a8  size 300
.thumb
.org 0x4f4a8
FUN_0804f4a8:
	push {r4, r5, r6, lr}	@ 0004f4a8 70b5
.org 0x4f4aa
	adds r4, r0, #0	@ 0004f4aa 041c
.org 0x4f4ac
	ldr r5, [r4, #40]	@ 0004f4ac a56a
.org 0x4f4ae
	ldrb r0, [r4, #18]	@ 0004f4ae a07c
.org 0x4f4b0
	adds r1, r0, #1	@ 0004f4b0 411c
.org 0x4f4b2
	strb r1, [r4, #18]	@ 0004f4b2 a174
.org 0x4f4b4
	lsls r0, r0, #24	@ 0004f4b4 0006
.org 0x4f4b6
	lsrs r0, r0, #24	@ 0004f4b6 000e
.org 0x4f4b8
	cmp r0, #8	@ 0004f4b8 0828
.org 0x4f4ba
	bhi.n 0x4f4ca	@ 0004f4ba 06d8
.org 0x4f4bc
	movs r1, #168	@ 0004f4bc a821
.org 0x4f4be
	lsls r1, r1, #1	@ 0004f4be 4900
.org 0x4f4c0
	adds r0, r5, r1	@ 0004f4c0 6818
.org 0x4f4c2
	ldrb r1, [r0, #0]	@ 0004f4c2 0178
.org 0x4f4c4
	adds r6, r0, #0	@ 0004f4c4 061c
.org 0x4f4c6
	cmp r1, #255	@ 0004f4c6 ff29
.org 0x4f4c8
	bne.n 0x4f518	@ 0004f4c8 26d1
.org 0x4f4ca
	ldr r0, [pc, #68]	@ 0004f4ca 1148
.org 0x4f4cc
	adds r2, r5, r0	@ 0004f4cc 2a18
.org 0x4f4ce
	ldrb r0, [r2, #0]	@ 0004f4ce 1078
.org 0x4f4d0
	movs r1, #64	@ 0004f4d0 4021
.org 0x4f4d2
	orrs r0, r1	@ 0004f4d2 0843
.org 0x4f4d4
	strb r0, [r2, #0]	@ 0004f4d4 1070
.org 0x4f4d6
	ldrb r1, [r4, #10]	@ 0004f4d6 a17a
.org 0x4f4d8
	movs r0, #254	@ 0004f4d8 fe20
.org 0x4f4da
	ands r0, r1	@ 0004f4da 0840
.org 0x4f4dc
	movs r2, #0	@ 0004f4dc 0022
.org 0x4f4de
	movs r1, #253	@ 0004f4de fd21
.org 0x4f4e0
	ands r0, r1	@ 0004f4e0 0840
.org 0x4f4e2
	strb r0, [r4, #10]	@ 0004f4e2 a072
.org 0x4f4e4
	adds r0, r4, #0	@ 0004f4e4 201c
.org 0x4f4e6
	adds r0, #140	@ 0004f4e6 8c30
.org 0x4f4e8
	str r2, [r0, #0]	@ 0004f4e8 0260
.org 0x4f4ea
	adds r0, #4	@ 0004f4ea 0430
.org 0x4f4ec
	str r2, [r0, #0]	@ 0004f4ec 0260
.org 0x4f4ee
	adds r0, #4	@ 0004f4ee 0430
.org 0x4f4f0
	strb r2, [r0, #0]	@ 0004f4f0 0270
.org 0x4f4f2
	ldrb r1, [r4, #10]	@ 0004f4f2 a17a
.org 0x4f4f4
	movs r0, #251	@ 0004f4f4 fb20
.org 0x4f4f6
	ands r0, r1	@ 0004f4f6 0840
.org 0x4f4f8
	strb r0, [r4, #10]	@ 0004f4f8 a072
.org 0x4f4fa
	ldr r1, [pc, #24]	@ 0004f4fa 0649
.org 0x4f4fc
	ldrb r0, [r4, #9]	@ 0004f4fc 607a
.org 0x4f4fe
	lsls r0, r0, #2	@ 0004f4fe 8000
.org 0x4f500
	adds r0, r0, r1	@ 0004f500 4018
.org 0x4f502
	movs r1, #3	@ 0004f502 0321
.org 0x4f504
	str r1, [r4, #12]	@ 0004f504 e160
.org 0x4f506
	ldr r0, [r0, #0]	@ 0004f506 0068
.org 0x4f508
	ldr r0, [r0, #12]	@ 0004f508 c068
.org 0x4f50a
	str r0, [r4, #20]	@ 0004f50a 6061
.org 0x4f50c
	b.n 0x4f5e6	@ 0004f50c 6be0
.org 0x4f50e
	.byte 0x00	@ 0004f50e data
.org 0x4f50f
	.byte 0x00	@ 0004f50f data
.org 0x4f510
	.byte 0x53,0x01,0x00,0x00	@ 0004f510 data
.org 0x4f514
	.byte 0xf8,0x39,0x85,0x08	@ 0004f514 data
.org 0x4f518
	adds r0, r4, #0	@ 0004f518 201c
.org 0x4f51a
	adds r0, #140	@ 0004f51a 8c30
.org 0x4f51c
	ldr r0, [r0, #0]	@ 0004f51c 0068
.org 0x4f51e
	movs r1, #4	@ 0004f51e 0421
.org 0x4f520
	ands r0, r1	@ 0004f520 0840
.org 0x4f522
	cmp r0, #0	@ 0004f522 0028
.org 0x4f524
	beq.n 0x4f550	@ 0004f524 14d0
.org 0x4f526
	ldr r1, [pc, #32]	@ 0004f526 0849
.org 0x4f528
	adds r2, r5, r1	@ 0004f528 6a18
.org 0x4f52a
	ldrb r0, [r2, #0]	@ 0004f52a 1078
.org 0x4f52c
	movs r1, #64	@ 0004f52c 4021
.org 0x4f52e
	orrs r0, r1	@ 0004f52e 0843
.org 0x4f530
	strb r0, [r2, #0]	@ 0004f530 1070
.org 0x4f532
	ldr r1, [pc, #24]	@ 0004f532 0649
.org 0x4f534
	ldrb r0, [r4, #9]	@ 0004f534 607a
.org 0x4f536
	lsls r0, r0, #2	@ 0004f536 8000
.org 0x4f538
	adds r0, r0, r1	@ 0004f538 4018
.org 0x4f53a
	movs r1, #2	@ 0004f53a 0221
.org 0x4f53c
	str r1, [r4, #12]	@ 0004f53c e160
.org 0x4f53e
	ldr r0, [r0, #0]	@ 0004f53e 0068
.org 0x4f540
	ldr r0, [r0, #8]	@ 0004f540 8068
.org 0x4f542
	str r0, [r4, #20]	@ 0004f542 6061
.org 0x4f544
	b.n 0x4f5e6	@ 0004f544 4fe0
.org 0x4f546
	.byte 0x00	@ 0004f546 data
.org 0x4f547
	.byte 0x00	@ 0004f547 data
.org 0x4f548
	.byte 0x53,0x01,0x00,0x00	@ 0004f548 data
.org 0x4f54c
	.byte 0xf8,0x39,0x85,0x08	@ 0004f54c data
.org 0x4f550
	adds r0, r4, #0	@ 0004f550 201c
.org 0x4f552
	bl 0x1cff0	@ 0004f552 cdf74dfd
.org 0x4f556
	ldrb r0, [r5, #10]	@ 0004f556 a87a
.org 0x4f558
	lsrs r2, r0, #4	@ 0004f558 0209
.org 0x4f55a
	movs r0, #1	@ 0004f55a 0120
.org 0x4f55c
	ands r2, r0	@ 0004f55c 0240
.org 0x4f55e
	cmp r2, #0	@ 0004f55e 002a
.org 0x4f560
	beq.n 0x4f56a	@ 0004f560 03d0
.org 0x4f562
	ldrb r1, [r4, #10]	@ 0004f562 a17a
.org 0x4f564
	movs r0, #16	@ 0004f564 1020
.org 0x4f566
	orrs r0, r1	@ 0004f566 0843
.org 0x4f568
	b.n 0x4f570	@ 0004f568 02e0
.org 0x4f56a
	ldrb r1, [r4, #10]	@ 0004f56a a17a
.org 0x4f56c
	movs r0, #239	@ 0004f56c ef20
.org 0x4f56e
	ands r0, r1	@ 0004f56e 0840
.org 0x4f570
	strb r0, [r4, #10]	@ 0004f570 a072
.org 0x4f572
	adds r1, r2, #0	@ 0004f572 111c
.org 0x4f574
	adds r0, r4, #0	@ 0004f574 201c
.org 0x4f576
	adds r0, #76	@ 0004f576 4c30
.org 0x4f578
	strb r1, [r0, #0]	@ 0004f578 0170
.org 0x4f57a
	adds r3, r4, #0	@ 0004f57a 231c
.org 0x4f57c
	adds r3, #74	@ 0004f57c 4a33
.org 0x4f57e
	lsls r1, r1, #4	@ 0004f57e 0901
.org 0x4f580
	ldrb r2, [r3, #0]	@ 0004f580 1a78
.org 0x4f582
	movs r0, #17	@ 0004f582 1120
.org 0x4f584
	negs r0, r0	@ 0004f584 4042
.org 0x4f586
	ands r0, r2	@ 0004f586 1040
.org 0x4f588
	orrs r0, r1	@ 0004f588 0843
.org 0x4f58a
	strb r0, [r3, #0]	@ 0004f58a 1870
.org 0x4f58c
	adds r0, r5, #0	@ 0004f58c 281c
.org 0x4f58e
	adds r0, #113	@ 0004f58e 7130
.org 0x4f590
	ldrb r0, [r0, #0]	@ 0004f590 0078
.org 0x4f592
	lsls r0, r0, #24	@ 0004f592 0006
.org 0x4f594
	asrs r0, r0, #24	@ 0004f594 0016
.org 0x4f596
	movs r3, #0	@ 0004f596 0023
.org 0x4f598
	cmp r0, #3	@ 0004f598 0328
.org 0x4f59a
	bne.n 0x4f59e	@ 0004f59a 00d1
.org 0x4f59c
	movs r3, #1	@ 0004f59c 0123
.org 0x4f59e
	ldrb r1, [r4, #10]	@ 0004f59e a17a
.org 0x4f5a0
	movs r0, #16	@ 0004f5a0 1020
.org 0x4f5a2
	ands r0, r1	@ 0004f5a2 0840
.org 0x4f5a4
	cmp r0, #0	@ 0004f5a4 0028
.org 0x4f5a6
	beq.n 0x4f5c0	@ 0004f5a6 0bd0
.org 0x4f5a8
	ldr r2, [pc, #16]	@ 0004f5a8 044a
.org 0x4f5aa
	lsls r3, r3, #3	@ 0004f5aa db00
.org 0x4f5ac
	ldrb r0, [r6, #0]	@ 0004f5ac 3078
.org 0x4f5ae
	lsls r0, r0, #4	@ 0004f5ae 0001
.org 0x4f5b0
	adds r0, r3, r0	@ 0004f5b0 1818
.org 0x4f5b2
	adds r0, r0, r2	@ 0004f5b2 8018
.org 0x4f5b4
	ldr r1, [r5, #84]	@ 0004f5b4 696d
.org 0x4f5b6
	ldr r0, [r0, #0]	@ 0004f5b6 0068
.org 0x4f5b8
	subs r1, r1, r0	@ 0004f5b8 091a
.org 0x4f5ba
	b.n 0x4f5d2	@ 0004f5ba 0ae0
.org 0x4f5bc
	.byte 0x4c,0x35,0x85,0x08	@ 0004f5bc data
.org 0x4f5c0
	ldr r2, [pc, #40]	@ 0004f5c0 0a4a
.org 0x4f5c2
	lsls r3, r3, #3	@ 0004f5c2 db00
.org 0x4f5c4
	ldrb r0, [r6, #0]	@ 0004f5c4 3078
.org 0x4f5c6
	lsls r0, r0, #4	@ 0004f5c6 0001
.org 0x4f5c8
	adds r0, r3, r0	@ 0004f5c8 1818
.org 0x4f5ca
	adds r0, r0, r2	@ 0004f5ca 8018
.org 0x4f5cc
	ldr r1, [r5, #84]	@ 0004f5cc 696d
.org 0x4f5ce
	ldr r0, [r0, #0]	@ 0004f5ce 0068
.org 0x4f5d0
	adds r1, r1, r0	@ 0004f5d0 0918
.org 0x4f5d2
	str r1, [r4, #84]	@ 0004f5d2 6165
