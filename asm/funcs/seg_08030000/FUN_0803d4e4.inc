@ FUN_0803d4e4  entry 0x0803d4e4  size 442
.thumb
.org 0x3d4e4
FUN_0803d4e4:
	push {r4, r5, r6, r7, lr}	@ 0003d4e4 f0b5
.org 0x3d4e6
	adds r5, r0, #0	@ 0003d4e6 051c
.org 0x3d4e8
	adds r2, r5, #0	@ 0003d4e8 2a1c
.org 0x3d4ea
	adds r2, #180	@ 0003d4ea b432
.org 0x3d4ec
	ldr r6, [r2, #0]	@ 0003d4ec 1668
.org 0x3d4ee
	ldrb r0, [r6, #12]	@ 0003d4ee 307b
.org 0x3d4f0
	cmp r0, #1	@ 0003d4f0 0128
.org 0x3d4f2
	bls.n 0x3d50c	@ 0003d4f2 0bd9
.org 0x3d4f4
	ldr r1, [pc, #16]	@ 0003d4f4 0449
.org 0x3d4f6
	ldrb r0, [r5, #9]	@ 0003d4f6 687a
.org 0x3d4f8
	lsls r0, r0, #2	@ 0003d4f8 8000
.org 0x3d4fa
	adds r0, r0, r1	@ 0003d4fa 4018
.org 0x3d4fc
	movs r1, #2	@ 0003d4fc 0221
.org 0x3d4fe
	str r1, [r5, #12]	@ 0003d4fe e960
.org 0x3d500
	ldr r0, [r0, #0]	@ 0003d500 0068
.org 0x3d502
	ldr r0, [r0, #8]	@ 0003d502 8068
.org 0x3d504
	str r0, [r5, #20]	@ 0003d504 6861
.org 0x3d506
	b.n 0x3d6a0	@ 0003d506 cbe0
.org 0x3d508
	.byte 0xf8,0x39,0x85,0x08	@ 0003d508 data
.org 0x3d50c
	movs r1, #167	@ 0003d50c a721
.org 0x3d50e
	lsls r1, r1, #1	@ 0003d50e 4900
.org 0x3d510
	adds r0, r6, r1	@ 0003d510 7018
.org 0x3d512
	ldrb r1, [r0, #0]	@ 0003d512 0178
.org 0x3d514
	adds r4, r6, #0	@ 0003d514 341c
.org 0x3d516
	adds r4, #180	@ 0003d516 b434
.org 0x3d518
	adds r7, r0, #0	@ 0003d518 071c
.org 0x3d51a
	cmp r1, #255	@ 0003d51a ff29
.org 0x3d51c
	bne.n 0x3d53c	@ 0003d51c 0ed1
.org 0x3d51e
	ldrb r1, [r5, #10]	@ 0003d51e a97a
.org 0x3d520
	movs r0, #254	@ 0003d520 fe20
.org 0x3d522
	ands r0, r1	@ 0003d522 0840
.org 0x3d524
	movs r2, #0	@ 0003d524 0022
.org 0x3d526
	movs r1, #253	@ 0003d526 fd21
.org 0x3d528
	ands r0, r1	@ 0003d528 0840
.org 0x3d52a
	strb r0, [r5, #10]	@ 0003d52a a872
.org 0x3d52c
	adds r0, r5, #0	@ 0003d52c 281c
.org 0x3d52e
	adds r0, #140	@ 0003d52e 8c30
.org 0x3d530
	str r2, [r0, #0]	@ 0003d530 0260
.org 0x3d532
	adds r0, #4	@ 0003d532 0430
.org 0x3d534
	str r2, [r0, #0]	@ 0003d534 0260
.org 0x3d536
	adds r0, #4	@ 0003d536 0430
.org 0x3d538
	strb r2, [r0, #0]	@ 0003d538 0270
.org 0x3d53a
	b.n 0x3d5e4	@ 0003d53a 53e0
.org 0x3d53c
	ldrb r0, [r2, #16]	@ 0003d53c 107c
.org 0x3d53e
	cmp r0, #0	@ 0003d53e 0028
.org 0x3d540
	beq.n 0x3d604	@ 0003d540 60d0
.org 0x3d542
	ldrb r0, [r4, #15]	@ 0003d542 e07b
.org 0x3d544
	cmp r0, #2	@ 0003d544 0228
.org 0x3d546
	bne.n 0x3d584	@ 0003d546 1dd1
.org 0x3d548
	adds r0, r6, #0	@ 0003d548 301c
.org 0x3d54a
	adds r1, r5, #0	@ 0003d54a 291c
.org 0x3d54c
	movs r2, #0	@ 0003d54c 0022
.org 0x3d54e
	bl 0x46910	@ 0003d54e 09f0dff9
.org 0x3d552
	adds r0, r6, #0	@ 0003d552 301c
.org 0x3d554
	adds r1, r5, #0	@ 0003d554 291c
.org 0x3d556
	movs r2, #43	@ 0003d556 2b22
.org 0x3d558
	bl 0x46910	@ 0003d558 09f0daf9
.org 0x3d55c
	adds r0, r6, #0	@ 0003d55c 301c
.org 0x3d55e
	adds r1, r5, #0	@ 0003d55e 291c
.org 0x3d560
	movs r2, #86	@ 0003d560 5622
.org 0x3d562
	bl 0x46910	@ 0003d562 09f0d5f9
.org 0x3d566
	adds r0, r6, #0	@ 0003d566 301c
.org 0x3d568
	adds r1, r5, #0	@ 0003d568 291c
.org 0x3d56a
	movs r2, #128	@ 0003d56a 8022
.org 0x3d56c
	bl 0x46910	@ 0003d56c 09f0d0f9
.org 0x3d570
	adds r0, r6, #0	@ 0003d570 301c
.org 0x3d572
	adds r1, r5, #0	@ 0003d572 291c
.org 0x3d574
	movs r2, #170	@ 0003d574 aa22
.org 0x3d576
	bl 0x46910	@ 0003d576 09f0cbf9
.org 0x3d57a
	adds r0, r6, #0	@ 0003d57a 301c
.org 0x3d57c
	adds r1, r5, #0	@ 0003d57c 291c
.org 0x3d57e
	movs r2, #213	@ 0003d57e d522
.org 0x3d580
	bl 0x46910	@ 0003d580 09f0c6f9
.org 0x3d584
	ldrb r0, [r4, #12]	@ 0003d584 207b
.org 0x3d586
	cmp r0, #2	@ 0003d586 0228
.org 0x3d588
	bls.n 0x3d590	@ 0003d588 02d9
.org 0x3d58a
	movs r0, #2	@ 0003d58a 0220
.org 0x3d58c
	strb r0, [r4, #12]	@ 0003d58c 2073
.org 0x3d58e
	b.n 0x3d59a	@ 0003d58e 04e0
.org 0x3d590
	ldrb r0, [r4, #13]	@ 0003d590 607b
.org 0x3d592
	cmp r0, #2	@ 0003d592 0228
.org 0x3d594
	bls.n 0x3d5b0	@ 0003d594 0cd9
.org 0x3d596
	movs r0, #2	@ 0003d596 0220
.org 0x3d598
	strb r0, [r4, #13]	@ 0003d598 6073
.org 0x3d59a
	adds r1, r6, #0	@ 0003d59a 311c
.org 0x3d59c
	adds r1, #248	@ 0003d59c f831
.org 0x3d59e
	ldrb r0, [r1, #0]	@ 0003d59e 0878
.org 0x3d5a0
	cmp r0, #2	@ 0003d5a0 0228
.org 0x3d5a2
	beq.n 0x3d5ae	@ 0003d5a2 04d0
.org 0x3d5a4
	adds r1, r6, #0	@ 0003d5a4 311c
.org 0x3d5a6
	adds r1, #249	@ 0003d5a6 f931
.org 0x3d5a8
	ldrb r0, [r1, #0]	@ 0003d5a8 0878
.org 0x3d5aa
	cmp r0, #2	@ 0003d5aa 0228
.org 0x3d5ac
	bne.n 0x3d5b0	@ 0003d5ac 00d1
.org 0x3d5ae
	strb r0, [r1, #0]	@ 0003d5ae 0870
.org 0x3d5b0
	adds r1, r6, #0	@ 0003d5b0 311c
.org 0x3d5b2
	adds r1, #250	@ 0003d5b2 fa31
.org 0x3d5b4
	movs r4, #0	@ 0003d5b4 0024
.org 0x3d5b6
	movs r0, #2	@ 0003d5b6 0220
.org 0x3d5b8
	strb r0, [r1, #0]	@ 0003d5b8 0870
.org 0x3d5ba
	adds r0, r6, #0	@ 0003d5ba 301c
.org 0x3d5bc
	adds r0, #230	@ 0003d5bc e630
.org 0x3d5be
	strb r4, [r0, #0]	@ 0003d5be 0470
.org 0x3d5c0
	adds r1, r5, #0	@ 0003d5c0 291c
.org 0x3d5c2
	adds r1, #84	@ 0003d5c2 5431
.org 0x3d5c4
	movs r0, #1	@ 0003d5c4 0120
.org 0x3d5c6
	bl 0xd0c88	@ 0003d5c6 93f05ffb
.org 0x3d5ca
	ldrb r1, [r5, #10]	@ 0003d5ca a97a
.org 0x3d5cc
	movs r0, #254	@ 0003d5cc fe20
.org 0x3d5ce
	ands r0, r1	@ 0003d5ce 0840
.org 0x3d5d0
	movs r1, #253	@ 0003d5d0 fd21
.org 0x3d5d2
	ands r0, r1	@ 0003d5d2 0840
.org 0x3d5d4
	strb r0, [r5, #10]	@ 0003d5d4 a872
.org 0x3d5d6
	adds r0, r5, #0	@ 0003d5d6 281c
.org 0x3d5d8
	adds r0, #140	@ 0003d5d8 8c30
.org 0x3d5da
	str r4, [r0, #0]	@ 0003d5da 0460
.org 0x3d5dc
	adds r0, #4	@ 0003d5dc 0430
.org 0x3d5de
	str r4, [r0, #0]	@ 0003d5de 0460
.org 0x3d5e0
	adds r0, #4	@ 0003d5e0 0430
.org 0x3d5e2
	strb r4, [r0, #0]	@ 0003d5e2 0470
.org 0x3d5e4
	ldrb r1, [r5, #10]	@ 0003d5e4 a97a
.org 0x3d5e6
	movs r0, #251	@ 0003d5e6 fb20
.org 0x3d5e8
	ands r0, r1	@ 0003d5e8 0840
.org 0x3d5ea
	strb r0, [r5, #10]	@ 0003d5ea a872
.org 0x3d5ec
	ldr r1, [pc, #16]	@ 0003d5ec 0449
.org 0x3d5ee
	ldrb r0, [r5, #9]	@ 0003d5ee 687a
.org 0x3d5f0
	lsls r0, r0, #2	@ 0003d5f0 8000
.org 0x3d5f2
	adds r0, r0, r1	@ 0003d5f2 4018
.org 0x3d5f4
	movs r1, #3	@ 0003d5f4 0321
.org 0x3d5f6
	str r1, [r5, #12]	@ 0003d5f6 e960
.org 0x3d5f8
	ldr r0, [r0, #0]	@ 0003d5f8 0068
.org 0x3d5fa
	ldr r0, [r0, #12]	@ 0003d5fa c068
.org 0x3d5fc
	str r0, [r5, #20]	@ 0003d5fc 6861
.org 0x3d5fe
	b.n 0x3d6a0	@ 0003d5fe 4fe0
.org 0x3d600
	.byte 0xf8,0x39,0x85,0x08	@ 0003d600 data
.org 0x3d604
	ldrb r0, [r5, #18]	@ 0003d604 a87c
.org 0x3d606
	cmp r0, #0	@ 0003d606 0028
.org 0x3d608
	beq.n 0x3d62e	@ 0003d608 11d0
.org 0x3d60a
	subs r0, #1	@ 0003d60a 0138
.org 0x3d60c
	strb r0, [r5, #18]	@ 0003d60c a874
.org 0x3d60e
	lsls r0, r0, #24	@ 0003d60e 0006
.org 0x3d610
	cmp r0, #0	@ 0003d610 0028
.org 0x3d612
	bne.n 0x3d62e	@ 0003d612 0cd1
.org 0x3d614
	adds r0, r5, #0	@ 0003d614 281c
.org 0x3d616
	adds r0, #116	@ 0003d616 7430
.org 0x3d618
	ldr r2, [pc, #140]	@ 0003d618 234a
.org 0x3d61a
	ldrb r1, [r4, #15]	@ 0003d61a e17b
.org 0x3d61c
	adds r1, r1, r2	@ 0003d61c 8918
.org 0x3d61e
	ldrb r2, [r1, #0]	@ 0003d61e 0a78
.org 0x3d620
	lsls r1, r2, #1	@ 0003d620 5100
.org 0x3d622
	adds r1, r1, r2	@ 0003d622 8918
.org 0x3d624
	lsls r1, r1, #3	@ 0003d624 c900
.org 0x3d626
	ldr r2, [pc, #132]	@ 0003d626 214a
.org 0x3d628
	adds r1, r1, r2	@ 0003d628 8918
.org 0x3d62a
	bl 0x5784	@ 0003d62a c8f7abf8
.org 0x3d62e
	adds r0, r5, #0	@ 0003d62e 281c
.org 0x3d630
	adds r0, #180	@ 0003d630 b430
.org 0x3d632
	ldrb r1, [r0, #15]	@ 0003d632 c17b
.org 0x3d634
	adds r6, r0, #0	@ 0003d634 061c
.org 0x3d636
	cmp r1, #0	@ 0003d636 0029
.org 0x3d638
	beq.n 0x3d686	@ 0003d638 25d0
.org 0x3d63a
	cmp r1, #2	@ 0003d63a 0229
.org 0x3d63c
	bne.n 0x3d66a	@ 0003d63c 15d1
.org 0x3d63e
	subs r0, #80	@ 0003d63e 5038
.org 0x3d640
	ldrb r2, [r5, #10]	@ 0003d640 aa7a
.org 0x3d642
	lsrs r2, r2, #4	@ 0003d642 1209
.org 0x3d644
	movs r1, #1	@ 0003d644 0121
.org 0x3d646
	ands r2, r1	@ 0003d646 0a40
.org 0x3d648
	movs r1, #6	@ 0003d648 0621
.org 0x3d64a
	bl 0xd1bcc	@ 0003d64a 94f0bffa
.org 0x3d64e
	movs r0, #43	@ 0003d64e 2b20
.org 0x3d650
	bl 0x2b10	@ 0003d650 c5f75efa
.org 0x3d654
	ldr r1, [pc, #88]	@ 0003d654 1649
.org 0x3d656
	ldrb r0, [r4, #15]	@ 0003d656 e07b
.org 0x3d658
	lsls r0, r0, #1	@ 0003d658 4000
.org 0x3d65a
	adds r0, r0, r1	@ 0003d65a 4018
.org 0x3d65c
	ldrh r1, [r0, #0]	@ 0003d65c 0188
.org 0x3d65e
	adds r1, #1	@ 0003d65e 0131
.org 0x3d660
	lsls r1, r1, #16	@ 0003d660 0904
.org 0x3d662
	lsrs r1, r1, #16	@ 0003d662 090c
.org 0x3d664
	adds r0, r5, #0	@ 0003d664 281c
.org 0x3d666
	bl 0x1cf00	@ 0003d666 dff74bfc
.org 0x3d66a
	ldrb r0, [r6, #15]	@ 0003d66a f07b
.org 0x3d66c
	subs r0, #1	@ 0003d66c 0138
.org 0x3d66e
	strb r0, [r6, #15]	@ 0003d66e f073
.org 0x3d670
	lsls r0, r0, #24	@ 0003d670 0006
.org 0x3d672
	cmp r0, #0	@ 0003d672 0028
.org 0x3d674
	bne.n 0x3d686	@ 0003d674 07d1
.org 0x3d676
	ldr r0, [pc, #56]	@ 0003d676 0e48
.org 0x3d678
	ldrb r1, [r4, #15]	@ 0003d678 e17b
.org 0x3d67a
	lsls r1, r1, #1	@ 0003d67a 4900
.org 0x3d67c
	adds r1, r1, r0	@ 0003d67c 0918
.org 0x3d67e
	ldrh r1, [r1, #0]	@ 0003d67e 0988
.org 0x3d680
	adds r0, r5, #0	@ 0003d680 281c
.org 0x3d682
	bl 0x1cf00	@ 0003d682 dff73dfc
.org 0x3d686
	adds r0, r5, #0	@ 0003d686 281c
.org 0x3d688
	bl 0x1cff0	@ 0003d688 dff7b2fc
.org 0x3d68c
	ldr r1, [pc, #36]	@ 0003d68c 0949
.org 0x3d68e
	ldrb r0, [r7, #0]	@ 0003d68e 3878
.org 0x3d690
	lsls r0, r0, #2	@ 0003d690 8000
.org 0x3d692
	adds r0, r0, r1	@ 0003d692 4018
.org 0x3d694
	ldr r1, [r0, #0]	@ 0003d694 0168
.org 0x3d696
	adds r0, r5, #0	@ 0003d696 281c
.org 0x3d698
	bl 0x128f80	@ 0003d698 ebf072fc
.org 0x3d69c
	movs r0, #0	@ 0003d69c 0020
