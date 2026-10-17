@ FUN_0800a52c  entry 0x0800a52c  size 378
.thumb
.org 0xa52c
FUN_0800a52c:
	push {r4, r5, lr}	@ 0000a52c 30b5
.org 0xa52e
	ldr r4, [pc, #96]	@ 0000a52e 184c
.org 0xa530
	ldr r0, [pc, #96]	@ 0000a530 1848
.org 0xa532
	adds r5, r4, r0	@ 0000a532 2518
.org 0xa534
	ldr r0, [r5, #0]	@ 0000a534 2868
.org 0xa536
	cmp r0, #0	@ 0000a536 0028
.org 0xa538
	bne.n 0xa542	@ 0000a538 03d1
.org 0xa53a
	movs r0, #1	@ 0000a53a 0120
.org 0xa53c
	bl 0xebe18	@ 0000a53c e1f06cfc
.org 0xa540
	str r0, [r5, #0]	@ 0000a540 2860
.org 0xa542
	ldr r1, [pc, #84]	@ 0000a542 1549
.org 0xa544
	adds r0, r4, r1	@ 0000a544 6018
.org 0xa546
	ldrh r1, [r0, #0]	@ 0000a546 0188
.org 0xa548
	lsrs r0, r1, #8	@ 0000a548 080a
.org 0xa54a
	cmp r0, #1	@ 0000a54a 0128
.org 0xa54c
	bne.n 0xa608	@ 0000a54c 5cd1
.org 0xa54e
	movs r2, #255	@ 0000a54e ff22
.org 0xa550
	adds r0, r2, #0	@ 0000a550 101c
.org 0xa552
	ands r0, r1	@ 0000a552 0840
.org 0xa554
	cmp r0, #0	@ 0000a554 0028
.org 0xa556
	bne.n 0xa5c8	@ 0000a556 37d1
.org 0xa558
	ldr r1, [pc, #64]	@ 0000a558 1049
.org 0xa55a
	adds r0, r4, r1	@ 0000a55a 6018
.org 0xa55c
	ldrh r1, [r0, #0]	@ 0000a55c 0188
.org 0xa55e
	lsrs r0, r1, #8	@ 0000a55e 080a
.org 0xa560
	cmp r0, #1	@ 0000a560 0128
.org 0xa562
	bne.n 0xa5c8	@ 0000a562 31d1
.org 0xa564
	adds r0, r2, #0	@ 0000a564 101c
.org 0xa566
	ands r0, r1	@ 0000a566 0840
.org 0xa568
	cmp r0, #1	@ 0000a568 0128
.org 0xa56a
	bne.n 0xa5c8	@ 0000a56a 2dd1
.org 0xa56c
	ldr r2, [pc, #48]	@ 0000a56c 0c4a
.org 0xa56e
	adds r0, r4, r2	@ 0000a56e a018
.org 0xa570
	ldrb r0, [r0, #0]	@ 0000a570 0078
.org 0xa572
	cmp r0, #2	@ 0000a572 0228
.org 0xa574
	bls.n 0xa5ac	@ 0000a574 1ad9
.org 0xa576
	ldr r0, [pc, #44]	@ 0000a576 0b48
.org 0xa578
	adds r3, r4, r0	@ 0000a578 2318
.org 0xa57a
	ldrb r2, [r3, #0]	@ 0000a57a 1a78
.org 0xa57c
	ldr r1, [pc, #40]	@ 0000a57c 0a49
.org 0xa57e
	adds r0, r4, r1	@ 0000a57e 6018
.org 0xa580
	ldrh r0, [r0, #0]	@ 0000a580 0088
.org 0xa582
	movs r1, #63	@ 0000a582 3f21
.org 0xa584
	ands r0, r1	@ 0000a584 0840
.org 0xa586
	cmp r0, #0	@ 0000a586 0028
.org 0xa588
	bne.n 0xa58c	@ 0000a588 00d1
.org 0xa58a
	adds r2, #1	@ 0000a58a 0132
.org 0xa58c
	strb r2, [r3, #0]	@ 0000a58c 1a70
.org 0xa58e
	b.n 0xa5b6	@ 0000a58e 12e0
.org 0xa590
	.byte 0xb0,0x0a,0x00,0x02	@ 0000a590 data
.org 0xa594
	.byte 0x34,0xd0,0x02,0x00	@ 0000a594 data
.org 0xa598
	.byte 0xd4,0x07,0x00,0x00	@ 0000a598 data
.org 0xa59c
	.byte 0xd6,0x07,0x00,0x00	@ 0000a59c data
.org 0xa5a0
	.byte 0x24,0xd0,0x02,0x00	@ 0000a5a0 data
.org 0xa5a4
	.byte 0x2c,0xd0,0x02,0x00	@ 0000a5a4 data
.org 0xa5a8
	.byte 0x48,0xd0,0x02,0x00	@ 0000a5a8 data
.org 0xa5ac
	ldr r2, [pc, #144]	@ 0000a5ac 244a
.org 0xa5ae
	adds r1, r4, r2	@ 0000a5ae a118
.org 0xa5b0
	ldrb r0, [r1, #0]	@ 0000a5b0 0878
.org 0xa5b2
	adds r0, #1	@ 0000a5b2 0130
.org 0xa5b4
	strb r0, [r1, #0]	@ 0000a5b4 0870
.org 0xa5b6
	ldr r0, [pc, #140]	@ 0000a5b6 2348
.org 0xa5b8
	ldr r1, [pc, #132]	@ 0000a5b8 2149
.org 0xa5ba
	adds r2, r0, r1	@ 0000a5ba 4218
.org 0xa5bc
	ldrb r1, [r2, #0]	@ 0000a5bc 1178
.org 0xa5be
	adds r4, r0, #0	@ 0000a5be 041c
.org 0xa5c0
	cmp r1, #64	@ 0000a5c0 4029
.org 0xa5c2
	bne.n 0xa5c8	@ 0000a5c2 01d1
.org 0xa5c4
	movs r0, #0	@ 0000a5c4 0020
.org 0xa5c6
	strb r0, [r2, #0]	@ 0000a5c6 1070
.org 0xa5c8
	ldr r2, [pc, #124]	@ 0000a5c8 1f4a
.org 0xa5ca
	adds r0, r4, r2	@ 0000a5ca a018
.org 0xa5cc
	ldrh r1, [r0, #0]	@ 0000a5cc 0188
.org 0xa5ce
	lsrs r0, r1, #8	@ 0000a5ce 080a
.org 0xa5d0
	cmp r0, #1	@ 0000a5d0 0128
.org 0xa5d2
	bne.n 0xa608	@ 0000a5d2 19d1
.org 0xa5d4
	movs r2, #255	@ 0000a5d4 ff22
.org 0xa5d6
	adds r0, r2, #0	@ 0000a5d6 101c
.org 0xa5d8
	ands r0, r1	@ 0000a5d8 0840
.org 0xa5da
	cmp r0, #3	@ 0000a5da 0328
.org 0xa5dc
	bne.n 0xa608	@ 0000a5dc 14d1
.org 0xa5de
	ldr r1, [pc, #108]	@ 0000a5de 1b49
.org 0xa5e0
	adds r0, r4, r1	@ 0000a5e0 6018
.org 0xa5e2
	ldrh r1, [r0, #0]	@ 0000a5e2 0188
.org 0xa5e4
	lsrs r0, r1, #8	@ 0000a5e4 080a
.org 0xa5e6
	cmp r0, #1	@ 0000a5e6 0128
.org 0xa5e8
	bne.n 0xa658	@ 0000a5e8 36d1
.org 0xa5ea
	adds r0, r2, #0	@ 0000a5ea 101c
.org 0xa5ec
	ands r0, r1	@ 0000a5ec 0840
.org 0xa5ee
	cmp r0, #2	@ 0000a5ee 0228
.org 0xa5f0
	bne.n 0xa608	@ 0000a5f0 0ad1
.org 0xa5f2
	ldr r2, [pc, #92]	@ 0000a5f2 174a
.org 0xa5f4
	adds r1, r4, r2	@ 0000a5f4 a118
.org 0xa5f6
	ldrb r0, [r1, #0]	@ 0000a5f6 0878
.org 0xa5f8
	adds r0, #1	@ 0000a5f8 0130
.org 0xa5fa
	strb r0, [r1, #0]	@ 0000a5fa 0870
.org 0xa5fc
	lsls r0, r0, #24	@ 0000a5fc 0006
.org 0xa5fe
	lsrs r0, r0, #24	@ 0000a5fe 000e
.org 0xa600
	cmp r0, #26	@ 0000a600 1a28
.org 0xa602
	bne.n 0xa608	@ 0000a602 01d1
.org 0xa604
	movs r0, #0	@ 0000a604 0020
.org 0xa606
	strb r0, [r1, #0]	@ 0000a606 0870
.org 0xa608
	ldr r1, [pc, #64]	@ 0000a608 1049
.org 0xa60a
	adds r0, r4, r1	@ 0000a60a 6018
.org 0xa60c
	ldrh r1, [r0, #0]	@ 0000a60c 0188
.org 0xa60e
	lsrs r2, r1, #8	@ 0000a60e 0a0a
.org 0xa610
	cmp r2, #1	@ 0000a610 012a
.org 0xa612
	bne.n 0xa658	@ 0000a612 21d1
.org 0xa614
	movs r0, #255	@ 0000a614 ff20
.org 0xa616
	ands r0, r1	@ 0000a616 0840
.org 0xa618
	cmp r0, #2	@ 0000a618 0228
.org 0xa61a
	bne.n 0xa658	@ 0000a61a 1dd1
.org 0xa61c
	ldr r0, [pc, #52]	@ 0000a61c 0d48
.org 0xa61e
	adds r1, r4, r0	@ 0000a61e 2118
.org 0xa620
	ldrb r3, [r1, #0]	@ 0000a620 0b78
.org 0xa622
	ands r2, r3	@ 0000a622 1a40
.org 0xa624
	cmp r2, #0	@ 0000a624 002a
.org 0xa626
	bne.n 0xa636	@ 0000a626 06d1
.org 0xa628
	movs r0, #1	@ 0000a628 0120
.org 0xa62a
	orrs r0, r3	@ 0000a62a 1843
.org 0xa62c
	strb r0, [r1, #0]	@ 0000a62c 0870
.org 0xa62e
	movs r0, #12	@ 0000a62e 0c20
.org 0xa630
	movs r1, #0	@ 0000a630 0021
.org 0xa632
	bl 0x249c	@ 0000a632 f7f733ff
.org 0xa636
	movs r0, #12	@ 0000a636 0c20
.org 0xa638
	bl 0x25d8	@ 0000a638 f7f7ceff
.org 0xa63c
	b.n 0xa674	@ 0000a63c 1ae0
.org 0xa63e
	.byte 0x00	@ 0000a63e data
.org 0xa63f
	.byte 0x00	@ 0000a63f data
.org 0xa640
	.byte 0x2c,0xd0,0x02,0x00	@ 0000a640 data
.org 0xa644
	.byte 0xb0,0x0a,0x00,0x02	@ 0000a644 data
.org 0xa648
	.byte 0xd4,0x07,0x00,0x00	@ 0000a648 data
.org 0xa64c
	.byte 0xd6,0x07,0x00,0x00	@ 0000a64c data
.org 0xa650
	.byte 0x2f,0xd0,0x02,0x00	@ 0000a650 data
.org 0xa654
	.byte 0x28,0xd0,0x02,0x00	@ 0000a654 data
.org 0xa658
	ldr r0, [pc, #96]	@ 0000a658 1848
.org 0xa65a
	ldr r1, [pc, #100]	@ 0000a65a 1949
.org 0xa65c
	adds r2, r0, r1	@ 0000a65c 4218
.org 0xa65e
	ldrb r1, [r2, #0]	@ 0000a65e 1178
.org 0xa660
	movs r0, #1	@ 0000a660 0120
.org 0xa662
	ands r0, r1	@ 0000a662 0840
.org 0xa664
	cmp r0, #0	@ 0000a664 0028
.org 0xa666
	beq.n 0xa674	@ 0000a666 05d0
.org 0xa668
	movs r0, #1	@ 0000a668 0120
.org 0xa66a
	eors r0, r1	@ 0000a66a 4840
.org 0xa66c
	strb r0, [r2, #0]	@ 0000a66c 1070
.org 0xa66e
	movs r0, #12	@ 0000a66e 0c20
.org 0xa670
	bl 0x2624	@ 0000a670 f7f7d8ff
.org 0xa674
	ldr r1, [pc, #68]	@ 0000a674 1149
.org 0xa676
	ldr r2, [pc, #76]	@ 0000a676 134a
.org 0xa678
	adds r0, r1, r2	@ 0000a678 8818
.org 0xa67a
	ldrh r3, [r0, #0]	@ 0000a67a 0388
.org 0xa67c
	lsrs r2, r3, #8	@ 0000a67c 1a0a
.org 0xa67e
	adds r4, r1, #0	@ 0000a67e 0c1c
.org 0xa680
	cmp r2, #1	@ 0000a680 012a
.org 0xa682
	bne.n 0xa6cc	@ 0000a682 23d1
.org 0xa684
	movs r0, #255	@ 0000a684 ff20
.org 0xa686
	ands r0, r3	@ 0000a686 1840
.org 0xa688
	cmp r0, #3	@ 0000a688 0328
.org 0xa68a
	bne.n 0xa6cc	@ 0000a68a 1fd1
.org 0xa68c
	ldr r1, [pc, #56]	@ 0000a68c 0e49
.org 0xa68e
	adds r0, r4, r1	@ 0000a68e 6018
.org 0xa690
	ldrb r0, [r0, #0]	@ 0000a690 0078
.org 0xa692
	ands r2, r0	@ 0000a692 0240
.org 0xa694
	cmp r2, #0	@ 0000a694 002a
.org 0xa696
	beq.n 0xa6cc	@ 0000a696 19d0
.org 0xa698
	ldr r2, [pc, #36]	@ 0000a698 094a
.org 0xa69a
	adds r1, r4, r2	@ 0000a69a a118
.org 0xa69c
	ldrb r2, [r1, #0]	@ 0000a69c 0a78
.org 0xa69e
	movs r0, #2	@ 0000a69e 0220
.org 0xa6a0
	ands r0, r2	@ 0000a6a0 1040
.org 0xa6a2
	cmp r0, #0	@ 0000a6a2 0028
.org 0xa6a4
	bne.n 0xa6b4	@ 0000a6a4 06d1
