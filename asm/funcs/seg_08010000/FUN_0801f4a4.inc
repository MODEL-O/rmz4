@ FUN_0801f4a4  entry 0x0801f4a4  size 376
.thumb
.org 0x1f4a4
FUN_0801f4a4:
	push {r4, r5, r6, lr}	@ 0001f4a4 70b5
.org 0x1f4a6
	bl 0x6e94	@ 0001f4a6 e7f7f5fc
.org 0x1f4aa
	ldr r4, [pc, #332]	@ 0001f4aa 534c
.org 0x1f4ac
	adds r0, r4, #0	@ 0001f4ac 201c
.org 0x1f4ae
	bl 0x27584	@ 0001f4ae 08f069f8
.org 0x1f4b2
	bl 0x2348	@ 0001f4b2 e2f749ff
.org 0x1f4b6
	subs r4, #16	@ 0001f4b6 103c
.org 0x1f4b8
	ldrh r1, [r4, #8]	@ 0001f4b8 2189
.org 0x1f4ba
	movs r0, #8	@ 0001f4ba 0820
.org 0x1f4bc
	ands r0, r1	@ 0001f4bc 0840
.org 0x1f4be
	cmp r0, #0	@ 0001f4be 0028
.org 0x1f4c0
	beq.n 0x1f4c4	@ 0001f4c0 00d0
.org 0x1f4c2
	b.n 0x1f608	@ 0001f4c2 a1e0
.org 0x1f4c4
	ldr r2, [pc, #308]	@ 0001f4c4 4d4a
.org 0x1f4c6
	ldr r0, [r2, #0]	@ 0001f4c6 1068
.org 0x1f4c8
	ldr r0, [r0, #16]	@ 0001f4c8 0069
.org 0x1f4ca
	movs r1, #2	@ 0001f4ca 0221
.org 0x1f4cc
	ands r0, r1	@ 0001f4cc 0840
.org 0x1f4ce
	adds r5, r2, #0	@ 0001f4ce 151c
.org 0x1f4d0
	cmp r0, #0	@ 0001f4d0 0028
.org 0x1f4d2
	beq.n 0x1f4fa	@ 0001f4d2 12d0
.org 0x1f4d4
	ldr r3, [pc, #296]	@ 0001f4d4 4a4b
.org 0x1f4d6
	ldrb r0, [r3, #5]	@ 0001f4d6 5879
.org 0x1f4d8
	movs r1, #32	@ 0001f4d8 2021
.org 0x1f4da
	orrs r1, r0	@ 0001f4da 0143
.org 0x1f4dc
	ldrb r2, [r3, #4]	@ 0001f4dc 1a79
.org 0x1f4de
	movs r0, #127	@ 0001f4de 7f20
.org 0x1f4e0
	ands r0, r2	@ 0001f4e0 1040
.org 0x1f4e2
	strb r0, [r3, #4]	@ 0001f4e2 1871
.org 0x1f4e4
	movs r0, #254	@ 0001f4e4 fe20
.org 0x1f4e6
	ands r1, r0	@ 0001f4e6 0140
.org 0x1f4e8
	movs r0, #253	@ 0001f4e8 fd20
.org 0x1f4ea
	ands r1, r0	@ 0001f4ea 0140
.org 0x1f4ec
	movs r0, #251	@ 0001f4ec fb20
.org 0x1f4ee
	ands r1, r0	@ 0001f4ee 0140
.org 0x1f4f0
	movs r0, #247	@ 0001f4f0 f720
.org 0x1f4f2
	ands r1, r0	@ 0001f4f2 0140
.org 0x1f4f4
	movs r0, #239	@ 0001f4f4 ef20
.org 0x1f4f6
	ands r1, r0	@ 0001f4f6 0140
.org 0x1f4f8
	strb r1, [r3, #5]	@ 0001f4f8 5971
.org 0x1f4fa
	ldr r0, [r5, #0]	@ 0001f4fa 2868
.org 0x1f4fc
	ldr r0, [r0, #16]	@ 0001f4fc 0069
.org 0x1f4fe
	movs r1, #4	@ 0001f4fe 0421
.org 0x1f500
	ands r0, r1	@ 0001f500 0840
.org 0x1f502
	cmp r0, #0	@ 0001f502 0028
.org 0x1f504
	beq.n 0x1f530	@ 0001f504 14d0
.org 0x1f506
	ldr r2, [pc, #248]	@ 0001f506 3e4a
.org 0x1f508
	ldrb r1, [r2, #6]	@ 0001f508 9179
.org 0x1f50a
	movs r0, #1	@ 0001f50a 0120
.org 0x1f50c
	orrs r0, r1	@ 0001f50c 0843
.org 0x1f50e
	strb r0, [r2, #6]	@ 0001f50e 9071
.org 0x1f510
	ldrb r1, [r2, #4]	@ 0001f510 1179
.org 0x1f512
	movs r0, #127	@ 0001f512 7f20
.org 0x1f514
	ands r0, r1	@ 0001f514 0840
.org 0x1f516
	strb r0, [r2, #4]	@ 0001f516 1071
.org 0x1f518
	ldrb r1, [r2, #5]	@ 0001f518 5179
.org 0x1f51a
	movs r0, #254	@ 0001f51a fe20
.org 0x1f51c
	ands r0, r1	@ 0001f51c 0840
.org 0x1f51e
	movs r1, #253	@ 0001f51e fd21
.org 0x1f520
	ands r0, r1	@ 0001f520 0840
.org 0x1f522
	movs r1, #251	@ 0001f522 fb21
.org 0x1f524
	ands r0, r1	@ 0001f524 0840
.org 0x1f526
	movs r1, #247	@ 0001f526 f721
.org 0x1f528
	ands r0, r1	@ 0001f528 0840
.org 0x1f52a
	movs r1, #239	@ 0001f52a ef21
.org 0x1f52c
	ands r0, r1	@ 0001f52c 0840
.org 0x1f52e
	strb r0, [r2, #5]	@ 0001f52e 5071
.org 0x1f530
	movs r2, #0	@ 0001f530 0022
.org 0x1f532
	movs r1, #3	@ 0001f532 0321
.org 0x1f534
	ldr r6, [pc, #204]	@ 0001f534 334e
.org 0x1f536
	ldr r0, [r5, #0]	@ 0001f536 2868
.org 0x1f538
	movs r4, #1	@ 0001f538 0124
.org 0x1f53a
	ldr r3, [r0, #16]	@ 0001f53a 0369
.org 0x1f53c
	adds r0, r4, #0	@ 0001f53c 201c
.org 0x1f53e
	lsls r0, r1	@ 0001f53e 8840
.org 0x1f540
	ands r0, r3	@ 0001f540 1840
.org 0x1f542
	cmp r0, #0	@ 0001f542 0028
.org 0x1f544
	beq.n 0x1f54c	@ 0001f544 02d0
.org 0x1f546
	adds r0, r2, #1	@ 0001f546 501c
.org 0x1f548
	lsls r0, r0, #24	@ 0001f548 0006
.org 0x1f54a
	lsrs r2, r0, #24	@ 0001f54a 020e
.org 0x1f54c
	adds r0, r1, #1	@ 0001f54c 481c
.org 0x1f54e
	lsls r0, r0, #24	@ 0001f54e 0006
.org 0x1f550
	lsrs r1, r0, #24	@ 0001f550 010e
.org 0x1f552
	cmp r1, #10	@ 0001f552 0a29
.org 0x1f554
	bls.n 0x1f53c	@ 0001f554 f2d9
.org 0x1f556
	cmp r2, #3	@ 0001f556 032a
.org 0x1f558
	bls.n 0x1f564	@ 0001f558 04d9
.org 0x1f55a
	ldr r2, [pc, #164]	@ 0001f55a 294a
.org 0x1f55c
	ldrb r1, [r2, #6]	@ 0001f55c 9179
.org 0x1f55e
	movs r0, #32	@ 0001f55e 2020
.org 0x1f560
	orrs r0, r1	@ 0001f560 0843
.org 0x1f562
	strb r0, [r2, #6]	@ 0001f562 9071
.org 0x1f564
	ldr r0, [r5, #0]	@ 0001f564 2868
.org 0x1f566
	ldr r0, [r0, #16]	@ 0001f566 0069
.org 0x1f568
	movs r1, #128	@ 0001f568 8021
.org 0x1f56a
	lsls r1, r1, #4	@ 0001f56a 0901
.org 0x1f56c
	ands r0, r1	@ 0001f56c 0840
.org 0x1f56e
	cmp r0, #0	@ 0001f56e 0028
.org 0x1f570
	beq.n 0x1f57c	@ 0001f570 04d0
.org 0x1f572
	ldr r2, [pc, #140]	@ 0001f572 234a
.org 0x1f574
	ldrb r1, [r2, #6]	@ 0001f574 9179
.org 0x1f576
	movs r0, #64	@ 0001f576 4020
.org 0x1f578
	orrs r0, r1	@ 0001f578 0843
.org 0x1f57a
	strb r0, [r2, #6]	@ 0001f57a 9071
.org 0x1f57c
	ldr r4, [r5, #0]	@ 0001f57c 2c68
.org 0x1f57e
	ldr r0, [r4, #16]	@ 0001f57e 2069
.org 0x1f580
	movs r1, #128	@ 0001f580 8021
.org 0x1f582
	lsls r1, r1, #5	@ 0001f582 4901
.org 0x1f584
	ands r0, r1	@ 0001f584 0840
.org 0x1f586
	adds r3, r4, #0	@ 0001f586 231c
.org 0x1f588
	cmp r0, #0	@ 0001f588 0028
.org 0x1f58a
	beq.n 0x1f596	@ 0001f58a 04d0
.org 0x1f58c
	ldr r2, [pc, #112]	@ 0001f58c 1c4a
.org 0x1f58e
	ldrb r1, [r2, #6]	@ 0001f58e 9179
.org 0x1f590
	movs r0, #128	@ 0001f590 8020
.org 0x1f592
	orrs r0, r1	@ 0001f592 0843
.org 0x1f594
	strb r0, [r2, #6]	@ 0001f594 9071
.org 0x1f596
	ldr r0, [r3, #16]	@ 0001f596 1869
.org 0x1f598
	movs r1, #255	@ 0001f598 ff21
.org 0x1f59a
	lsls r1, r1, #3	@ 0001f59a c900
.org 0x1f59c
	ands r0, r1	@ 0001f59c 0840
.org 0x1f59e
	cmp r0, r1	@ 0001f59e 8842
.org 0x1f5a0
	bne.n 0x1f5ac	@ 0001f5a0 04d1
.org 0x1f5a2
	ldr r2, [pc, #92]	@ 0001f5a2 174a
.org 0x1f5a4
	ldrb r1, [r2, #7]	@ 0001f5a4 d179
.org 0x1f5a6
	movs r0, #1	@ 0001f5a6 0120
.org 0x1f5a8
	orrs r0, r1	@ 0001f5a8 0843
.org 0x1f5aa
	strb r0, [r2, #7]	@ 0001f5aa d071
.org 0x1f5ac
	ldr r0, [r3, #16]	@ 0001f5ac 1869
.org 0x1f5ae
	movs r1, #128	@ 0001f5ae 8021
.org 0x1f5b0
	lsls r1, r1, #6	@ 0001f5b0 8901
.org 0x1f5b2
	ands r0, r1	@ 0001f5b2 0840
.org 0x1f5b4
	cmp r0, #0	@ 0001f5b4 0028
.org 0x1f5b6
	beq.n 0x1f5c2	@ 0001f5b6 04d0
.org 0x1f5b8
	ldr r2, [pc, #68]	@ 0001f5b8 114a
.org 0x1f5ba
	ldrb r1, [r2, #7]	@ 0001f5ba d179
.org 0x1f5bc
	movs r0, #2	@ 0001f5bc 0220
.org 0x1f5be
	orrs r0, r1	@ 0001f5be 0843
.org 0x1f5c0
	strb r0, [r2, #7]	@ 0001f5c0 d071
.org 0x1f5c2
	ldr r0, [r3, #16]	@ 0001f5c2 1869
.org 0x1f5c4
	movs r1, #128	@ 0001f5c4 8021
.org 0x1f5c6
	lsls r1, r1, #7	@ 0001f5c6 c901
.org 0x1f5c8
	ands r0, r1	@ 0001f5c8 0840
.org 0x1f5ca
	cmp r0, #0	@ 0001f5ca 0028
.org 0x1f5cc
	beq.n 0x1f5d8	@ 0001f5cc 04d0
.org 0x1f5ce
	ldr r2, [pc, #48]	@ 0001f5ce 0c4a
.org 0x1f5d0
	ldrb r1, [r2, #7]	@ 0001f5d0 d179
.org 0x1f5d2
	movs r0, #4	@ 0001f5d2 0420
.org 0x1f5d4
	orrs r0, r1	@ 0001f5d4 0843
.org 0x1f5d6
	strb r0, [r2, #7]	@ 0001f5d6 d071
.org 0x1f5d8
	ldr r0, [r4, #16]	@ 0001f5d8 2069
.org 0x1f5da
	movs r1, #128	@ 0001f5da 8021
.org 0x1f5dc
	lsls r1, r1, #8	@ 0001f5dc 0902
.org 0x1f5de
	ands r0, r1	@ 0001f5de 0840
.org 0x1f5e0
	cmp r0, #0	@ 0001f5e0 0028
.org 0x1f5e2
	beq.n 0x1f5ee	@ 0001f5e2 04d0
.org 0x1f5e4
	ldr r2, [pc, #24]	@ 0001f5e4 064a
.org 0x1f5e6
	ldrb r1, [r2, #7]	@ 0001f5e6 d179
.org 0x1f5e8
	movs r0, #8	@ 0001f5e8 0820
.org 0x1f5ea
	orrs r0, r1	@ 0001f5ea 0843
.org 0x1f5ec
	strb r0, [r2, #7]	@ 0001f5ec d071
.org 0x1f5ee
	adds r0, r6, #0	@ 0001f5ee 301c
.org 0x1f5f0
	bl 0x1e918	@ 0001f5f0 fff792f9
.org 0x1f5f4
	b.n 0x1f610	@ 0001f5f4 0ce0
.org 0x1f5f6
	.byte 0x00	@ 0001f5f6 data
.org 0x1f5f7
	.byte 0x00	@ 0001f5f7 data
.org 0x1f5f8
	.byte 0x20,0xe9,0x02,0x02	@ 0001f5f8 data
.org 0x1f5fc
	.byte 0xe0,0xe8,0x02,0x02	@ 0001f5fc data
.org 0x1f600
	.byte 0xb0,0xe8,0x02,0x02	@ 0001f600 data
.org 0x1f604
	.byte 0x80,0x58,0x03,0x02	@ 0001f604 data
.org 0x1f608
	ldrb r0, [r4, #0]	@ 0001f608 2078
.org 0x1f60a
	ldr r1, [pc, #36]	@ 0001f60a 0949
.org 0x1f60c
	bl 0x1e878	@ 0001f60c fff734f9
.org 0x1f610
	ldr r4, [pc, #32]	@ 0001f610 084c
.org 0x1f612
	ldr r1, [pc, #36]	@ 0001f612 0949
.org 0x1f614
	adds r0, r4, r1	@ 0001f614 6018
.org 0x1f616
	ldr r0, [r0, #0]	@ 0001f616 0068
.org 0x1f618
	subs r1, #96	@ 0001f618 6039
.org 0x1f61a
	adds r4, r4, r1	@ 0001f61a 6418
