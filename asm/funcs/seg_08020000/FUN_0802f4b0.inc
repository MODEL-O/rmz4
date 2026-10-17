@ FUN_0802f4b0  entry 0x0802f4b0  size 2618
.thumb
.org 0x2f4b0
FUN_0802f4b0:
	push {r4, r5, r6, r7, lr}	@ 0002f4b0 f0b5
.org 0x2f4b2
	mov r7, sl	@ 0002f4b2 5746
.org 0x2f4b4
	mov r6, r9	@ 0002f4b4 4e46
.org 0x2f4b6
	mov r5, r8	@ 0002f4b6 4546
.org 0x2f4b8
	push {r5, r6, r7}	@ 0002f4b8 e0b4
.org 0x2f4ba
	sub sp, #48	@ 0002f4ba 8cb0
.org 0x2f4bc
	adds r6, r0, #0	@ 0002f4bc 061c
.org 0x2f4be
	ldr r0, [r6, #84]	@ 0002f4be 706d
.org 0x2f4c0
	ldr r1, [r6, #88]	@ 0002f4c0 b16d
.org 0x2f4c2
	str r0, [sp, #16]	@ 0002f4c2 0490
.org 0x2f4c4
	str r1, [sp, #20]	@ 0002f4c4 0591
.org 0x2f4c6
	ldrb r1, [r6, #10]	@ 0002f4c6 b17a
.org 0x2f4c8
	movs r0, #1	@ 0002f4c8 0120
.org 0x2f4ca
	ands r0, r1	@ 0002f4ca 0840
.org 0x2f4cc
	cmp r0, #0	@ 0002f4cc 0028
.org 0x2f4ce
	bne.n 0x2f4d6	@ 0002f4ce 02d1
.org 0x2f4d0
	adds r0, r6, #0	@ 0002f4d0 301c
.org 0x2f4d2
	bl 0x2b7bc	@ 0002f4d2 fcf773f9
.org 0x2f4d6
	movs r1, #135	@ 0002f4d6 8721
.org 0x2f4d8
	lsls r1, r1, #1	@ 0002f4d8 4900
.org 0x2f4da
	adds r0, r6, r1	@ 0002f4da 7018
.org 0x2f4dc
	movs r3, #0	@ 0002f4dc 0023
.org 0x2f4de
	ldrsh r2, [r0, r3]	@ 0002f4de c25e
.org 0x2f4e0
	movs r1, #1	@ 0002f4e0 0121
.org 0x2f4e2
	negs r1, r1	@ 0002f4e2 4942
.org 0x2f4e4
	adds r5, r0, #0	@ 0002f4e4 051c
.org 0x2f4e6
	cmp r2, r1	@ 0002f4e6 8a42
.org 0x2f4e8
	bne.n 0x2f530	@ 0002f4e8 22d1
.org 0x2f4ea
	ldr r0, [r6, #88]	@ 0002f4ea b06d
.org 0x2f4ec
	ldr r1, [pc, #32]	@ 0002f4ec 0849
.org 0x2f4ee
	adds r4, r0, r1	@ 0002f4ee 4418
.org 0x2f4f0
	ldr r2, [pc, #32]	@ 0002f4f0 084a
.org 0x2f4f2
	movs r3, #232	@ 0002f4f2 e823
.org 0x2f4f4
	lsls r3, r3, #1	@ 0002f4f4 5b00
.org 0x2f4f6
	adds r0, r2, r3	@ 0002f4f6 d018
.org 0x2f4f8
	ldrh r1, [r0, #0]	@ 0002f4f8 0188
.org 0x2f4fa
	movs r0, #127	@ 0002f4fa 7f20
.org 0x2f4fc
	ands r0, r1	@ 0002f4fc 0840
.org 0x2f4fe
	cmp r0, #2	@ 0002f4fe 0228
.org 0x2f500
	bne.n 0x2f518	@ 0002f500 0ad1
.org 0x2f502
	adds r0, r6, #0	@ 0002f502 301c
.org 0x2f504
	adds r0, #84	@ 0002f504 5430
.org 0x2f506
	bl 0x7b84	@ 0002f506 d8f73dfb
.org 0x2f50a
	cmp r0, r4	@ 0002f50a a042
.org 0x2f50c
	blt.n 0x2f522	@ 0002f50c 09db
.org 0x2f50e
	b.n 0x2f56e	@ 0002f50e 2ee0
.org 0x2f510
	.byte 0x00,0xe2,0xff,0xff	@ 0002f510 data
.org 0x2f514
	.byte 0xb0,0x0a,0x00,0x02	@ 0002f514 data
.org 0x2f518
	ldr r1, [pc, #16]	@ 0002f518 0449
.org 0x2f51a
	adds r0, r2, r1	@ 0002f51a 5018
.org 0x2f51c
	ldr r0, [r0, #0]	@ 0002f51c 0068
.org 0x2f51e
	cmp r0, r4	@ 0002f51e a042
.org 0x2f520
	bge.n 0x2f56e	@ 0002f520 25da
.org 0x2f522
	movs r0, #50	@ 0002f522 3220
.org 0x2f524
	bl 0x2b10	@ 0002f524 d3f7f4fa
.org 0x2f528
	b.n 0x2f56c	@ 0002f528 20e0
.org 0x2f52a
	.byte 0x00	@ 0002f52a data
.org 0x2f52b
	.byte 0x00	@ 0002f52b data
.org 0x2f52c
	.byte 0x0c,0xc0,0x02,0x00	@ 0002f52c data
.org 0x2f530
	ldr r4, [r6, #88]	@ 0002f530 b46d
.org 0x2f532
	ldr r2, [pc, #32]	@ 0002f532 084a
.org 0x2f534
	movs r3, #232	@ 0002f534 e823
.org 0x2f536
	lsls r3, r3, #1	@ 0002f536 5b00
.org 0x2f538
	adds r0, r2, r3	@ 0002f538 d018
.org 0x2f53a
	ldrh r1, [r0, #0]	@ 0002f53a 0188
.org 0x2f53c
	movs r0, #127	@ 0002f53c 7f20
.org 0x2f53e
	ands r0, r1	@ 0002f53e 0840
.org 0x2f540
	cmp r0, #2	@ 0002f540 0228
.org 0x2f542
	bne.n 0x2f558	@ 0002f542 09d1
.org 0x2f544
	adds r0, r6, #0	@ 0002f544 301c
.org 0x2f546
	adds r0, #84	@ 0002f546 5430
.org 0x2f548
	bl 0x7b84	@ 0002f548 d8f71cfb
.org 0x2f54c
	cmp r0, r4	@ 0002f54c a042
.org 0x2f54e
	bgt.n 0x2f562	@ 0002f54e 08dc
.org 0x2f550
	b.n 0x2f56e	@ 0002f550 0de0
.org 0x2f552
	.byte 0x00	@ 0002f552 data
.org 0x2f553
	.byte 0x00	@ 0002f553 data
.org 0x2f554
	.byte 0xb0,0x0a,0x00,0x02	@ 0002f554 data
.org 0x2f558
	ldr r1, [pc, #120]	@ 0002f558 1e49
.org 0x2f55a
	adds r0, r2, r1	@ 0002f55a 5018
.org 0x2f55c
	ldr r0, [r0, #0]	@ 0002f55c 0068
.org 0x2f55e
	cmp r0, r4	@ 0002f55e a042
.org 0x2f560
	ble.n 0x2f56e	@ 0002f560 05dd
.org 0x2f562
	movs r2, #0	@ 0002f562 0022
.org 0x2f564
	ldrsh r0, [r5, r2]	@ 0002f564 a85e
.org 0x2f566
	bl 0x2b5c	@ 0002f566 d3f7f9fa
.org 0x2f56a
	ldr r0, [pc, #108]	@ 0002f56a 1b48
.org 0x2f56c
	strh r0, [r5, #0]	@ 0002f56c 2880
.org 0x2f56e
	ldrb r0, [r6, #13]	@ 0002f56e 707b
.org 0x2f570
	adds r5, r6, #0	@ 0002f570 351c
.org 0x2f572
	adds r5, #252	@ 0002f572 fc35
.org 0x2f574
	strb r0, [r5, #0]	@ 0002f574 2870
.org 0x2f576
	ldrb r0, [r6, #14]	@ 0002f576 b07b
.org 0x2f578
	adds r4, r6, #0	@ 0002f578 341c
.org 0x2f57a
	adds r4, #253	@ 0002f57a fd34
.org 0x2f57c
	strb r0, [r4, #0]	@ 0002f57c 2070
.org 0x2f57e
	adds r0, r6, #0	@ 0002f57e 301c
.org 0x2f580
	bl 0x38c34	@ 0002f580 09f058fb
.org 0x2f584
	adds r1, r6, #0	@ 0002f584 311c
.org 0x2f586
	adds r1, #140	@ 0002f586 8c31
.org 0x2f588
	ldr r7, [r1, #0]	@ 0002f588 0f68
.org 0x2f58a
	movs r0, #128	@ 0002f58a 8020
.org 0x2f58c
	lsls r0, r0, #2	@ 0002f58c 8000
.org 0x2f58e
	ands r7, r0	@ 0002f58e 0740
.org 0x2f590
	str r5, [sp, #32]	@ 0002f590 0895
.org 0x2f592
	str r4, [sp, #36]	@ 0002f592 0994
.org 0x2f594
	str r1, [sp, #24]	@ 0002f594 0691
.org 0x2f596
	movs r3, #186	@ 0002f596 ba23
.org 0x2f598
	lsls r3, r3, #1	@ 0002f598 5b00
.org 0x2f59a
	adds r3, r6, r3	@ 0002f59a f318
.org 0x2f59c
	str r3, [sp, #44]	@ 0002f59c 0b93
.org 0x2f59e
	subs r0, #190	@ 0002f59e be38
.org 0x2f5a0
	adds r0, r0, r6	@ 0002f5a0 8019
.org 0x2f5a2
	mov r8, r0	@ 0002f5a2 8046
.org 0x2f5a4
	cmp r7, #0	@ 0002f5a4 002f
.org 0x2f5a6
	bne.n 0x2f668	@ 0002f5a6 5fd1
.org 0x2f5a8
	adds r0, r6, #0	@ 0002f5a8 301c
.org 0x2f5aa
	adds r0, #164	@ 0002f5aa a430
.org 0x2f5ac
	movs r2, #0	@ 0002f5ac 0022
.org 0x2f5ae
	ldrsh r1, [r0, r2]	@ 0002f5ae 815e
.org 0x2f5b0
	adds r5, r0, #0	@ 0002f5b0 051c
.org 0x2f5b2
	cmp r1, #0	@ 0002f5b2 0029
.org 0x2f5b4
	beq.n 0x2f604	@ 0002f5b4 26d0
.org 0x2f5b6
	ldrb r1, [r3, #0]	@ 0002f5b6 1978
.org 0x2f5b8
	lsls r1, r1, #3	@ 0002f5b8 c900
.org 0x2f5ba
	ldr r0, [pc, #32]	@ 0002f5ba 0848
.org 0x2f5bc
	adds r1, r1, r0	@ 0002f5bc 0918
.org 0x2f5be
	adds r0, r6, #0	@ 0002f5be 301c
.org 0x2f5c0
	bl 0x2e6a8	@ 0002f5c0 fff772f8
.org 0x2f5c4
	lsls r0, r0, #24	@ 0002f5c4 0006
.org 0x2f5c6
	lsrs r0, r0, #24	@ 0002f5c6 000e
.org 0x2f5c8
	cmp r0, #1	@ 0002f5c8 0128
.org 0x2f5ca
	bne.n 0x2f5e0	@ 0002f5ca 09d1
.org 0x2f5cc
	adds r0, r6, #0	@ 0002f5cc 301c
.org 0x2f5ce
	bl 0x38988	@ 0002f5ce 09f0dbf9
.org 0x2f5d2
	b.n 0x2f604	@ 0002f5d2 17e0
.org 0x2f5d4
	.byte 0x0c,0xc0,0x02,0x00	@ 0002f5d4 data
.org 0x2f5d8
	.byte 0xff,0xff,0x00,0x00	@ 0002f5d8 data
.org 0x2f5dc
	.byte 0x6c,0x33,0x85,0x08	@ 0002f5dc data
.org 0x2f5e0
	cmp r0, #2	@ 0002f5e0 0228
.org 0x2f5e2
	bne.n 0x2f604	@ 0002f5e2 0fd1
.org 0x2f5e4
	ldrb r1, [r6, #10]	@ 0002f5e4 b17a
.org 0x2f5e6
	lsrs r1, r1, #4	@ 0002f5e6 0909
.org 0x2f5e8
	movs r0, #1	@ 0002f5e8 0120
.org 0x2f5ea
	ands r1, r0	@ 0002f5ea 0140
.org 0x2f5ec
	mov r3, r8	@ 0002f5ec 4346
.org 0x2f5ee
	ldrb r2, [r3, #0]	@ 0002f5ee 1a78
.org 0x2f5f0
	movs r0, #2	@ 0002f5f0 0220
.org 0x2f5f2
	negs r0, r0	@ 0002f5f2 4042
.org 0x2f5f4
	ands r0, r2	@ 0002f5f4 1040
.org 0x2f5f6
	orrs r0, r1	@ 0002f5f6 0843
.org 0x2f5f8
	strb r0, [r3, #0]	@ 0002f5f8 1870
.org 0x2f5fa
	movs r1, #0	@ 0002f5fa 0021
.org 0x2f5fc
	strh r7, [r5, #0]	@ 0002f5fc 2f80
.org 0x2f5fe
	movs r0, #4	@ 0002f5fe 0420
.org 0x2f600
	strb r0, [r6, #13]	@ 0002f600 7073
.org 0x2f602
	strb r1, [r6, #14]	@ 0002f602 b173
.org 0x2f604
	ldr r0, [sp, #24]	@ 0002f604 0698
.org 0x2f606
	ldr r4, [r0, #0]	@ 0002f606 0468
.org 0x2f608
	movs r0, #128	@ 0002f608 8020
.org 0x2f60a
	lsls r0, r0, #2	@ 0002f60a 8000
.org 0x2f60c
	ands r4, r0	@ 0002f60c 0440
.org 0x2f60e
	cmp r4, #0	@ 0002f60e 002c
.org 0x2f610
	bne.n 0x2f668	@ 0002f610 2ad1
.org 0x2f612
	movs r1, #0	@ 0002f612 0021
.org 0x2f614
	ldrsh r0, [r5, r1]	@ 0002f614 685e
.org 0x2f616
	cmp r0, #0	@ 0002f616 0028
.org 0x2f618
	beq.n 0x2f668	@ 0002f618 26d0
.org 0x2f61a
	ldr r2, [sp, #44]	@ 0002f61a 0b9a
.org 0x2f61c
	ldrb r1, [r2, #0]	@ 0002f61c 1178
.org 0x2f61e
	lsls r1, r1, #3	@ 0002f61e c900
.org 0x2f620
	ldr r0, [pc, #48]	@ 0002f620 0c48
.org 0x2f622
	adds r1, r1, r0	@ 0002f622 0918
.org 0x2f624
	adds r0, r6, #0	@ 0002f624 301c
.org 0x2f626
	bl 0x2ce00	@ 0002f626 fdf7ebfb
.org 0x2f62a
	lsls r0, r0, #24	@ 0002f62a 0006
.org 0x2f62c
	lsrs r0, r0, #24	@ 0002f62c 000e
.org 0x2f62e
	cmp r0, #1	@ 0002f62e 0128
.org 0x2f630
	bne.n 0x2f658	@ 0002f630 12d1
.org 0x2f632
	ldrb r1, [r6, #10]	@ 0002f632 b17a
.org 0x2f634
	lsrs r1, r1, #4	@ 0002f634 0909
.org 0x2f636
	movs r0, #1	@ 0002f636 0120
.org 0x2f638
	ands r1, r0	@ 0002f638 0140
.org 0x2f63a
	mov r3, r8	@ 0002f63a 4346
.org 0x2f63c
	ldrb r2, [r3, #0]	@ 0002f63c 1a78
.org 0x2f63e
	movs r0, #2	@ 0002f63e 0220
.org 0x2f640
	negs r0, r0	@ 0002f640 4042
.org 0x2f642
	ands r0, r2	@ 0002f642 1040
.org 0x2f644
	orrs r0, r1	@ 0002f644 0843
.org 0x2f646
	strb r0, [r3, #0]	@ 0002f646 1870
.org 0x2f648
	movs r1, #0	@ 0002f648 0021
.org 0x2f64a
	strh r4, [r5, #0]	@ 0002f64a 2c80
.org 0x2f64c
	movs r0, #4	@ 0002f64c 0420
.org 0x2f64e
	strb r0, [r6, #13]	@ 0002f64e 7073
.org 0x2f650
	strb r1, [r6, #14]	@ 0002f650 b173
.org 0x2f652
	b.n 0x2f662	@ 0002f652 06e0
.org 0x2f654
	.byte 0x6c,0x33,0x85,0x08	@ 0002f654 data
.org 0x2f658
	cmp r0, #2	@ 0002f658 0228
.org 0x2f65a
	bne.n 0x2f662	@ 0002f65a 02d1
.org 0x2f65c
	adds r0, r6, #0	@ 0002f65c 301c
.org 0x2f65e
	bl 0x38988	@ 0002f65e 09f093f9
.org 0x2f662
	adds r0, r6, #0	@ 0002f662 301c
.org 0x2f664
	bl 0x2cd44	@ 0002f664 fdf76efb
.org 0x2f668
	ldrb r0, [r6, #13]	@ 0002f668 707b
.org 0x2f66a
	adds r1, r6, #0	@ 0002f66a 311c
.org 0x2f66c
	adds r1, #180	@ 0002f66c b431
.org 0x2f66e
	str r1, [sp, #28]	@ 0002f66e 0791
.org 0x2f670
	cmp r0, #1	@ 0002f670 0128
.org 0x2f672
	beq.n 0x2f67c	@ 0002f672 03d0
.org 0x2f674
	cmp r0, #4	@ 0002f674 0428
.org 0x2f676
	beq.n 0x2f67c	@ 0002f676 01d0
.org 0x2f678
	movs r0, #0	@ 0002f678 0020
.org 0x2f67a
	str r0, [r1, #104]	@ 0002f67a 8866
.org 0x2f67c
	movs r3, #138	@ 0002f67c 8a23
.org 0x2f67e
	lsls r3, r3, #1	@ 0002f67e 5b00
.org 0x2f680
	adds r2, r6, r3	@ 0002f680 f218
.org 0x2f682
	ldr r0, [r6, #84]	@ 0002f682 706d
.org 0x2f684
	ldr r1, [r6, #88]	@ 0002f684 b16d
.org 0x2f686
	str r0, [r2, #0]	@ 0002f686 1060
.org 0x2f688
	str r1, [r2, #4]	@ 0002f688 5160
.org 0x2f68a
	ldrb r0, [r6, #30]	@ 0002f68a b07f
.org 0x2f68c
	lsls r0, r0, #8	@ 0002f68c 0002
.org 0x2f68e
	adds r1, r6, #0	@ 0002f68e 311c
.org 0x2f690
	adds r1, #112	@ 0002f690 7031
.org 0x2f692
	ldrb r1, [r1, #0]	@ 0002f692 0978
.org 0x2f694
	orrs r1, r0	@ 0002f694 0143
.org 0x2f696
	movs r2, #182	@ 0002f696 b622
.org 0x2f698
	lsls r2, r2, #1	@ 0002f698 5200
.org 0x2f69a
	adds r0, r6, r2	@ 0002f69a b018
.org 0x2f69c
	movs r3, #0	@ 0002f69c 0023
.org 0x2f69e
	mov sl, r3	@ 0002f69e 9a46
.org 0x2f6a0
	strh r1, [r0, #0]	@ 0002f6a0 0180
.org 0x2f6a2
	adds r0, r6, #0	@ 0002f6a2 301c
.org 0x2f6a4
	adds r0, #113	@ 0002f6a4 7130
.org 0x2f6a6
	ldrb r0, [r0, #0]	@ 0002f6a6 0078
.org 0x2f6a8
	adds r2, #2	@ 0002f6a8 0232
.org 0x2f6aa
	adds r1, r6, r2	@ 0002f6aa b118
.org 0x2f6ac
	strb r0, [r1, #0]	@ 0002f6ac 0870
.org 0x2f6ae
	adds r0, r6, #0	@ 0002f6ae 301c
.org 0x2f6b0
	adds r0, #114	@ 0002f6b0 7230
.org 0x2f6b2
	ldrb r0, [r0, #0]	@ 0002f6b2 0078
.org 0x2f6b4
	ldr r3, [pc, #228]	@ 0002f6b4 394b
.org 0x2f6b6
	adds r1, r6, r3	@ 0002f6b6 f118
.org 0x2f6b8
	strb r0, [r1, #0]	@ 0002f6b8 0870
.org 0x2f6ba
	ldr r1, [sp, #44]	@ 0002f6ba 0b99
.org 0x2f6bc
	ldrb r0, [r1, #0]	@ 0002f6bc 0878
.org 0x2f6be
	adds r2, #7	@ 0002f6be 0732
.org 0x2f6c0
	adds r1, r6, r2	@ 0002f6c0 b118
.org 0x2f6c2
	strb r0, [r1, #0]	@ 0002f6c2 0870
.org 0x2f6c4
	mov r0, sl	@ 0002f6c4 5046
.org 0x2f6c6
	ldr r3, [sp, #44]	@ 0002f6c6 0b9b
.org 0x2f6c8
	strb r0, [r3, #0]	@ 0002f6c8 1870
.org 0x2f6ca
	ldr r0, [r6, #12]	@ 0002f6ca f068
.org 0x2f6cc
	ldr r1, [pc, #208]	@ 0002f6cc 3449
.org 0x2f6ce
	ands r0, r1	@ 0002f6ce 0840
.org 0x2f6d0
	movs r1, #128	@ 0002f6d0 8021
.org 0x2f6d2
	lsls r1, r1, #3	@ 0002f6d2 c900
.org 0x2f6d4
	cmp r0, r1	@ 0002f6d4 8842
.org 0x2f6d6
	beq.n 0x2f6e0	@ 0002f6d6 03d0
.org 0x2f6d8
	adds r2, #68	@ 0002f6d8 4432
.org 0x2f6da
	adds r0, r6, r2	@ 0002f6da b018
.org 0x2f6dc
	mov r3, sl	@ 0002f6dc 5346
.org 0x2f6de
	strb r3, [r0, #0]	@ 0002f6de 0370
.org 0x2f6e0
	movs r0, #184	@ 0002f6e0 b820
.org 0x2f6e2
	lsls r0, r0, #1	@ 0002f6e2 4000
.org 0x2f6e4
	adds r1, r6, r0	@ 0002f6e4 3118
.org 0x2f6e6
	mov r2, sl	@ 0002f6e6 5246
.org 0x2f6e8
	strb r2, [r1, #0]	@ 0002f6e8 0a70
.org 0x2f6ea
	ldr r3, [sp, #24]	@ 0002f6ea 069b
.org 0x2f6ec
	ldr r7, [r3, #0]	@ 0002f6ec 1f68
.org 0x2f6ee
	adds r0, #144	@ 0002f6ee 9030
.org 0x2f6f0
	ands r7, r0	@ 0002f6f0 0740
.org 0x2f6f2
	str r1, [sp, #40]	@ 0002f6f2 0a91
.org 0x2f6f4
	cmp r7, #0	@ 0002f6f4 002f
.org 0x2f6f6
	bne.n 0x2f7ea	@ 0002f6f6 78d1
.org 0x2f6f8
	adds r4, r6, #0	@ 0002f6f8 341c
.org 0x2f6fa
	adds r4, #164	@ 0002f6fa a434
.org 0x2f6fc
	movs r1, #0	@ 0002f6fc 0021
.org 0x2f6fe
	ldrsh r0, [r4, r1]	@ 0002f6fe 605e
.org 0x2f700
	cmp r0, #0	@ 0002f700 0028
.org 0x2f702
	beq.n 0x2f7ea	@ 0002f702 72d0
.org 0x2f704
	ldrb r1, [r6, #13]	@ 0002f704 717b
.org 0x2f706
	subs r0, r1, #7	@ 0002f706 c81f
.org 0x2f708
	lsls r0, r0, #24	@ 0002f708 0006
.org 0x2f70a
	lsrs r0, r0, #24	@ 0002f70a 000e
.org 0x2f70c
	cmp r0, #1	@ 0002f70c 0128
.org 0x2f70e
	bls.n 0x2f7ea	@ 0002f70e 6cd9
.org 0x2f710
	cmp r1, #10	@ 0002f710 0a29
.org 0x2f712
	beq.n 0x2f7ea	@ 0002f712 6ad0
.org 0x2f714
	ldr r2, [pc, #140]	@ 0002f714 234a
.org 0x2f716
	mov r9, r2	@ 0002f716 9146
.org 0x2f718
	ldr r3, [sp, #44]	@ 0002f718 0b9b
.org 0x2f71a
	ldrb r0, [r3, #0]	@ 0002f71a 1878
.org 0x2f71c
	lsls r0, r0, #3	@ 0002f71c c000
.org 0x2f71e
	add r0, r9	@ 0002f71e 4844
.org 0x2f720
	movs r2, #6	@ 0002f720 0622
.org 0x2f722
	ldrsh r1, [r0, r2]	@ 0002f722 815e
.org 0x2f724
	ldr r2, [r6, #88]	@ 0002f724 b26d
.org 0x2f726
	subs r1, r2, r1	@ 0002f726 511a
.org 0x2f728
	ldr r5, [pc, #124]	@ 0002f728 1f4d
.org 0x2f72a
	adds r1, r1, r5	@ 0002f72a 4919
.org 0x2f72c
	movs r3, #194	@ 0002f72c c223
.org 0x2f72e
	lsls r3, r3, #1	@ 0002f72e 5b00
.org 0x2f730
	adds r0, r6, r3	@ 0002f730 f018
.org 0x2f732
	ldr r0, [r0, #0]	@ 0002f732 0068
.org 0x2f734
	cmp r1, r0	@ 0002f734 8142
.org 0x2f736
	bgt.n 0x2f764	@ 0002f736 15dc
.org 0x2f738
	ldr r0, [r6, #84]	@ 0002f738 706d
.org 0x2f73a
	adds r1, r2, #0	@ 0002f73a 111c
.org 0x2f73c
	bl 0x7098	@ 0002f73c d7f7acfc
.org 0x2f740
	lsls r0, r0, #24	@ 0002f740 0006
.org 0x2f742
	cmp r0, #0	@ 0002f742 0028
.org 0x2f744
	beq.n 0x2f7ea	@ 0002f744 51d0
.org 0x2f746
	ldr r0, [r6, #84]	@ 0002f746 706d
.org 0x2f748
	ldr r2, [sp, #44]	@ 0002f748 0b9a
.org 0x2f74a
	ldrb r1, [r2, #0]	@ 0002f74a 1178
.org 0x2f74c
	lsls r1, r1, #3	@ 0002f74c c900
.org 0x2f74e
	add r1, r9	@ 0002f74e 4944
.org 0x2f750
	movs r3, #6	@ 0002f750 0623
.org 0x2f752
	ldrsh r2, [r1, r3]	@ 0002f752 ca5e
.org 0x2f754
	ldr r1, [r6, #88]	@ 0002f754 b16d
.org 0x2f756
	subs r1, r1, r2	@ 0002f756 891a
.org 0x2f758
	adds r1, r1, r5	@ 0002f758 4919
.org 0x2f75a
	bl 0x7098	@ 0002f75a d7f79dfc
.org 0x2f75e
	lsls r0, r0, #24	@ 0002f75e 0006
.org 0x2f760
	cmp r0, #0	@ 0002f760 0028
.org 0x2f762
	beq.n 0x2f7ea	@ 0002f762 42d0
.org 0x2f764
	ldr r0, [r6, #84]	@ 0002f764 706d
.org 0x2f766
	ldr r1, [r6, #88]	@ 0002f766 b16d
.org 0x2f768
	ldr r2, [pc, #64]	@ 0002f768 104a
.org 0x2f76a
	adds r1, r1, r2	@ 0002f76a 8918
.org 0x2f76c
	bl 0x7d28	@ 0002f76c d8f7dcfa
.org 0x2f770
	movs r1, #128	@ 0002f770 8021
.org 0x2f772
	lsls r1, r1, #3	@ 0002f772 c900
.org 0x2f774
	ands r1, r0	@ 0002f774 0140
.org 0x2f776
	cmp r1, #0	@ 0002f776 0029
.org 0x2f778
	beq.n 0x2f7b0	@ 0002f778 1ad0
.org 0x2f77a
	ldrb r1, [r6, #10]	@ 0002f77a b17a
.org 0x2f77c
	lsrs r1, r1, #4	@ 0002f77c 0909
.org 0x2f77e
	movs r0, #1	@ 0002f77e 0120
.org 0x2f780
	ands r1, r0	@ 0002f780 0140
.org 0x2f782
	mov r3, r8	@ 0002f782 4346
.org 0x2f784
	ldrb r2, [r3, #0]	@ 0002f784 1a78
.org 0x2f786
	movs r0, #2	@ 0002f786 0220
.org 0x2f788
	negs r0, r0	@ 0002f788 4042
.org 0x2f78a
	ands r0, r2	@ 0002f78a 1040
.org 0x2f78c
	orrs r0, r1	@ 0002f78c 0843
.org 0x2f78e
	strb r0, [r3, #0]	@ 0002f78e 1870
.org 0x2f790
	strh r7, [r4, #0]	@ 0002f790 2780
.org 0x2f792
	movs r0, #4	@ 0002f792 0420
.org 0x2f794
	strb r0, [r6, #13]	@ 0002f794 7073
.org 0x2f796
	mov r0, sl	@ 0002f796 5046
.org 0x2f798
	strb r0, [r6, #14]	@ 0002f798 b073
.org 0x2f79a
	b.n 0x2f7ea	@ 0002f79a 26e0
.org 0x2f79c
	.byte 0x6f,0x01,0x00,0x00	@ 0002f79c data
.org 0x2f7a0
	.byte 0x00,0xff,0xff,0x00	@ 0002f7a0 data
.org 0x2f7a4
	.byte 0x6c,0x33,0x85,0x08	@ 0002f7a4 data
.org 0x2f7a8
	.byte 0x00,0xf8,0xff,0xff	@ 0002f7a8 data
.org 0x2f7ac
	.byte 0x00,0xe2,0xff,0xff	@ 0002f7ac data
.org 0x2f7b0
	adds r0, r6, #0	@ 0002f7b0 301c
.org 0x2f7b2
	bl 0x38a48	@ 0002f7b2 09f049f9
.org 0x2f7b6
	lsls r0, r0, #24	@ 0002f7b6 0006
.org 0x2f7b8
	lsrs r3, r0, #24	@ 0002f7b8 030e
.org 0x2f7ba
	cmp r3, #0	@ 0002f7ba 002b
.org 0x2f7bc
	beq.n 0x2f7c8	@ 0002f7bc 04d0
.org 0x2f7be
	movs r0, #6	@ 0002f7be 0620
.org 0x2f7c0
	strb r0, [r6, #13]	@ 0002f7c0 7073
.org 0x2f7c2
	mov r1, sl	@ 0002f7c2 5146
.org 0x2f7c4
	strb r1, [r6, #14]	@ 0002f7c4 b173
.org 0x2f7c6
	b.n 0x2f7ea	@ 0002f7c6 10e0
.org 0x2f7c8
	ldrb r1, [r6, #10]	@ 0002f7c8 b17a
.org 0x2f7ca
	lsrs r1, r1, #4	@ 0002f7ca 0909
.org 0x2f7cc
	movs r0, #1	@ 0002f7cc 0120
.org 0x2f7ce
	ands r1, r0	@ 0002f7ce 0140
.org 0x2f7d0
	mov r0, r8	@ 0002f7d0 4046
.org 0x2f7d2
	ldrb r2, [r0, #0]	@ 0002f7d2 0278
.org 0x2f7d4
	movs r0, #2	@ 0002f7d4 0220
.org 0x2f7d6
	negs r0, r0	@ 0002f7d6 4042
.org 0x2f7d8
	ands r0, r2	@ 0002f7d8 1040
.org 0x2f7da
	orrs r0, r1	@ 0002f7da 0843
.org 0x2f7dc
	mov r1, r8	@ 0002f7dc 4146
.org 0x2f7de
	strb r0, [r1, #0]	@ 0002f7de 0870
.org 0x2f7e0
	strh r3, [r4, #0]	@ 0002f7e0 2380
.org 0x2f7e2
	movs r0, #4	@ 0002f7e2 0420
.org 0x2f7e4
	strb r0, [r6, #13]	@ 0002f7e4 7073
.org 0x2f7e6
	mov r2, sl	@ 0002f7e6 5246
.org 0x2f7e8
	strb r2, [r6, #14]	@ 0002f7e8 b273
.org 0x2f7ea
	movs r3, #173	@ 0002f7ea ad23
.org 0x2f7ec
	lsls r3, r3, #1	@ 0002f7ec 5b00
.org 0x2f7ee
	adds r2, r6, r3	@ 0002f7ee f218
.org 0x2f7f0
	ldrh r1, [r2, #0]	@ 0002f7f0 1188
.org 0x2f7f2
	cmp r1, #0	@ 0002f7f2 0029
.org 0x2f7f4
	beq.n 0x2f80c	@ 0002f7f4 0ad0
.org 0x2f7f6
	movs r3, #128	@ 0002f7f6 8023
.org 0x2f7f8
	lsls r3, r3, #8	@ 0002f7f8 1b02
.org 0x2f7fa
	adds r0, r3, #0	@ 0002f7fa 181c
.org 0x2f7fc
	ands r0, r1	@ 0002f7fc 0840
.org 0x2f7fe
	lsls r0, r0, #16	@ 0002f7fe 0004
.org 0x2f800
	lsrs r0, r0, #16	@ 0002f800 000c
.org 0x2f802
	cmp r0, #0	@ 0002f802 0028
.org 0x2f804
	beq.n 0x2f80a	@ 0002f804 01d0
.org 0x2f806
	adds r0, r3, #0	@ 0002f806 181c
.org 0x2f808
	eors r0, r1	@ 0002f808 4840
.org 0x2f80a
	strh r0, [r2, #0]	@ 0002f80a 1080
.org 0x2f80c
	ldr r1, [pc, #272]	@ 0002f80c 4449
.org 0x2f80e
	ldrb r0, [r6, #13]	@ 0002f80e 707b
.org 0x2f810
	lsls r0, r0, #2	@ 0002f810 8000
.org 0x2f812
	adds r0, r0, r1	@ 0002f812 4018
.org 0x2f814
	ldr r1, [r0, #0]	@ 0002f814 0168
.org 0x2f816
	adds r0, r6, #0	@ 0002f816 301c
.org 0x2f818
	bl 0x128f80	@ 0002f818 f9f0b2fb
.org 0x2f81c
	mov r0, r8	@ 0002f81c 4046
.org 0x2f81e
	ldrb r1, [r0, #0]	@ 0002f81e 0178
.org 0x2f820
	movs r0, #16	@ 0002f820 1020
.org 0x2f822
	ands r0, r1	@ 0002f822 0840
.org 0x2f824
	cmp r0, #0	@ 0002f824 0028
.org 0x2f826
	beq.n 0x2f88a	@ 0002f826 30d0
.org 0x2f828
	ldr r1, [sp, #28]	@ 0002f828 0799
.org 0x2f82a
	ldr r0, [r1, #112]	@ 0002f82a 086f
.org 0x2f82c
	ldr r1, [r6, #88]	@ 0002f82c b16d
.org 0x2f82e
	cmp r0, r1	@ 0002f82e 8842
.org 0x2f830
	bge.n 0x2f870	@ 0002f830 1eda
.org 0x2f832
	ldr r0, [r6, #84]	@ 0002f832 706d
.org 0x2f834
	bl 0x7d28	@ 0002f834 d8f778fa
.org 0x2f838
	movs r1, #128	@ 0002f838 8021
.org 0x2f83a
	lsls r1, r1, #8	@ 0002f83a 0902
.org 0x2f83c
	ands r1, r0	@ 0002f83c 0140
.org 0x2f83e
	cmp r1, #0	@ 0002f83e 0029
.org 0x2f840
	beq.n 0x2f864	@ 0002f840 10d0
.org 0x2f842
	ldr r0, [r6, #84]	@ 0002f842 706d
.org 0x2f844
	ldr r1, [r6, #88]	@ 0002f844 b16d
.org 0x2f846
	bl 0x7d28	@ 0002f846 d8f76ffa
.org 0x2f84a
	movs r7, #15	@ 0002f84a 0f27
.org 0x2f84c
	adds r1, r7, #0	@ 0002f84c 391c
.org 0x2f84e
	ands r1, r0	@ 0002f84e 0140
.org 0x2f850
	cmp r1, #0	@ 0002f850 0029
.org 0x2f852
	beq.n 0x2f864	@ 0002f852 07d0
.org 0x2f854
	ldr r0, [r6, #84]	@ 0002f854 706d
.org 0x2f856
	ldr r1, [r6, #88]	@ 0002f856 b16d
.org 0x2f858
	bl 0x7d28	@ 0002f858 d8f766fa
.org 0x2f85c
	adds r1, r7, #0	@ 0002f85c 391c
.org 0x2f85e
	ands r1, r0	@ 0002f85e 0140
.org 0x2f860
	cmp r1, #14	@ 0002f860 0e29
.org 0x2f862
	bls.n 0x2f870	@ 0002f862 05d9
.org 0x2f864
	mov r2, r8	@ 0002f864 4246
.org 0x2f866
	ldrb r1, [r2, #0]	@ 0002f866 1178
.org 0x2f868
	movs r0, #17	@ 0002f868 1120
.org 0x2f86a
	negs r0, r0	@ 0002f86a 4042
.org 0x2f86c
	ands r0, r1	@ 0002f86c 0840
.org 0x2f86e
	strb r0, [r2, #0]	@ 0002f86e 1070
.org 0x2f870
	ldr r3, [sp, #28]	@ 0002f870 079b
.org 0x2f872
	ldr r0, [r3, #112]	@ 0002f872 186f
.org 0x2f874
	ldr r1, [pc, #172]	@ 0002f874 2b49
.org 0x2f876
	adds r0, r0, r1	@ 0002f876 4018
.org 0x2f878
	ldr r1, [r6, #88]	@ 0002f878 b16d
.org 0x2f87a
	cmp r0, r1	@ 0002f87a 8842
.org 0x2f87c
	ble.n 0x2f88a	@ 0002f87c 05dd
.org 0x2f87e
	mov r2, r8	@ 0002f87e 4246
.org 0x2f880
	ldrb r1, [r2, #0]	@ 0002f880 1178
.org 0x2f882
	movs r0, #17	@ 0002f882 1120
.org 0x2f884
	negs r0, r0	@ 0002f884 4042
.org 0x2f886
	ands r0, r1	@ 0002f886 0840
.org 0x2f888
	strb r0, [r2, #0]	@ 0002f888 1070
.org 0x2f88a
	ldrb r0, [r6, #13]	@ 0002f88a 707b
.org 0x2f88c
	cmp r0, #5	@ 0002f88c 0528
.org 0x2f88e
	beq.n 0x2f8a0	@ 0002f88e 07d0
.org 0x2f890
	ldr r3, [pc, #148]	@ 0002f890 254b
.org 0x2f892
	adds r1, r6, r3	@ 0002f892 f118
.org 0x2f894
	movs r0, #0	@ 0002f894 0020
.org 0x2f896
	strb r0, [r1, #0]	@ 0002f896 0870
.org 0x2f898
	movs r2, #185	@ 0002f898 b922
.org 0x2f89a
	lsls r2, r2, #1	@ 0002f89a 5200
.org 0x2f89c
	adds r1, r6, r2	@ 0002f89c b118
.org 0x2f89e
	strb r0, [r1, #0]	@ 0002f89e 0870
.org 0x2f8a0
	ldrb r0, [r6, #13]	@ 0002f8a0 707b
.org 0x2f8a2
	cmp r0, #4	@ 0002f8a2 0428
.org 0x2f8a4
	beq.n 0x2f8c8	@ 0002f8a4 10d0
.org 0x2f8a6
	ldr r3, [sp, #24]	@ 0002f8a6 069b
.org 0x2f8a8
	ldr r0, [r3, #0]	@ 0002f8a8 1868
.org 0x2f8aa
	movs r1, #128	@ 0002f8aa 8021
.org 0x2f8ac
	lsls r1, r1, #2	@ 0002f8ac 8900
.org 0x2f8ae
	ands r0, r1	@ 0002f8ae 0840
.org 0x2f8b0
	cmp r0, #0	@ 0002f8b0 0028
.org 0x2f8b2
	bne.n 0x2f8c0	@ 0002f8b2 05d1
.org 0x2f8b4
	adds r0, r6, #0	@ 0002f8b4 301c
.org 0x2f8b6
	adds r0, #164	@ 0002f8b6 a430
.org 0x2f8b8
	movs r1, #0	@ 0002f8b8 0021
.org 0x2f8ba
	ldrsh r0, [r0, r1]	@ 0002f8ba 405e
.org 0x2f8bc
	cmp r0, #0	@ 0002f8bc 0028
.org 0x2f8be
	bne.n 0x2f8c8	@ 0002f8be 03d1
.org 0x2f8c0
	movs r1, #0	@ 0002f8c0 0021
.org 0x2f8c2
	movs r0, #4	@ 0002f8c2 0420
.org 0x2f8c4
	strb r0, [r6, #13]	@ 0002f8c4 7073
.org 0x2f8c6
	strb r1, [r6, #14]	@ 0002f8c6 b173
.org 0x2f8c8
	ldr r1, [pc, #96]	@ 0002f8c8 1849
.org 0x2f8ca
	ldrb r0, [r6, #13]	@ 0002f8ca 707b
.org 0x2f8cc
	lsls r0, r0, #2	@ 0002f8cc 8000
.org 0x2f8ce
	adds r0, r0, r1	@ 0002f8ce 4018
.org 0x2f8d0
	ldr r1, [r0, #0]	@ 0002f8d0 0168
.org 0x2f8d2
	adds r0, r6, #0	@ 0002f8d2 301c
.org 0x2f8d4
	bl 0x128f80	@ 0002f8d4 f9f054fb
.org 0x2f8d8
	movs r2, #167	@ 0002f8d8 a722
.org 0x2f8da
	lsls r2, r2, #1	@ 0002f8da 5200
.org 0x2f8dc
	adds r1, r6, r2	@ 0002f8dc b118
.org 0x2f8de
	movs r0, #255	@ 0002f8de ff20
.org 0x2f8e0
	strb r0, [r1, #0]	@ 0002f8e0 0870
.org 0x2f8e2
	ldr r3, [pc, #76]	@ 0002f8e2 134b
.org 0x2f8e4
	adds r1, r6, r3	@ 0002f8e4 f118
.org 0x2f8e6
	movs r0, #1	@ 0002f8e6 0120
.org 0x2f8e8
	negs r0, r0	@ 0002f8e8 4042
.org 0x2f8ea
	strb r0, [r1, #0]	@ 0002f8ea 0870
.org 0x2f8ec
	movs r0, #168	@ 0002f8ec a820
.org 0x2f8ee
	lsls r0, r0, #1	@ 0002f8ee 4000
.org 0x2f8f0
	adds r1, r6, r0	@ 0002f8f0 3118
.org 0x2f8f2
	movs r0, #1	@ 0002f8f2 0120
.org 0x2f8f4
	negs r0, r0	@ 0002f8f4 4042
.org 0x2f8f6
	strb r0, [r1, #0]	@ 0002f8f6 0870
.org 0x2f8f8
	movs r4, #0	@ 0002f8f8 0024
.org 0x2f8fa
	ldr r1, [pc, #56]	@ 0002f8fa 0e49
.org 0x2f8fc
	adds r2, r6, r1	@ 0002f8fc 7218
.org 0x2f8fe
	ldrb r1, [r2, #0]	@ 0002f8fe 1178
.org 0x2f900
	movs r0, #8	@ 0002f900 0820
.org 0x2f902
	ands r0, r1	@ 0002f902 0840
.org 0x2f904
	adds r7, r2, #0	@ 0002f904 171c
.org 0x2f906
	ldr r2, [pc, #48]	@ 0002f906 0c4a
.org 0x2f908
	adds r3, r6, r2	@ 0002f908 b318
.org 0x2f90a
	cmp r0, #0	@ 0002f90a 0028
.org 0x2f90c
	beq.n 0x2f95c	@ 0002f90c 26d0
.org 0x2f90e
	ldrb r0, [r6, #13]	@ 0002f90e 707b
.org 0x2f910
	ldr r1, [sp, #32]	@ 0002f910 0899
.org 0x2f912
	ldrb r1, [r1, #0]	@ 0002f912 0978
.org 0x2f914
	cmp r0, r1	@ 0002f914 8842
.org 0x2f916
	beq.n 0x2f93c	@ 0002f916 11d0
.org 0x2f918
	ldrb r0, [r3, #0]	@ 0002f918 1878
.org 0x2f91a
	cmp r0, #0	@ 0002f91a 0028
.org 0x2f91c
	bne.n 0x2f950	@ 0002f91c 18d1
.org 0x2f91e
	b.n 0x2f954	@ 0002f91e 19e0
.org 0x2f920
	.byte 0x54,0x2e,0x85,0x08	@ 0002f920 data
.org 0x2f924
	.byte 0x00,0xf2,0xff,0xff	@ 0002f924 data
.org 0x2f928
	.byte 0x71,0x01,0x00,0x00	@ 0002f928 data
.org 0x2f92c
	.byte 0x84,0x2e,0x85,0x08	@ 0002f92c data
.org 0x2f930
	.byte 0x4f,0x01,0x00,0x00	@ 0002f930 data
.org 0x2f934
	.byte 0x53,0x01,0x00,0x00	@ 0002f934 data
.org 0x2f938
	.byte 0x4d,0x01,0x00,0x00	@ 0002f938 data
.org 0x2f93c
	cmp r0, #0	@ 0002f93c 0028
.org 0x2f93e
	bne.n 0x2f95c	@ 0002f93e 0dd1
.org 0x2f940
	ldrb r0, [r6, #14]	@ 0002f940 b07b
.org 0x2f942
	ldr r1, [sp, #36]	@ 0002f942 0999
.org 0x2f944
	ldrb r1, [r1, #0]	@ 0002f944 0978
.org 0x2f946
	cmp r0, r1	@ 0002f946 8842
.org 0x2f948
	beq.n 0x2f95c	@ 0002f948 08d0
.org 0x2f94a
	ldrb r0, [r3, #0]	@ 0002f94a 1878
.org 0x2f94c
	cmp r0, #0	@ 0002f94c 0028
.org 0x2f94e
	beq.n 0x2f954	@ 0002f94e 01d0
.org 0x2f950
	movs r4, #1	@ 0002f950 0124
.org 0x2f952
	b.n 0x2f95c	@ 0002f952 03e0
.org 0x2f954
	movs r2, #128	@ 0002f954 8022
.org 0x2f956
	lsls r2, r2, #1	@ 0002f956 5200
.org 0x2f958
	adds r0, r6, r2	@ 0002f958 b018
.org 0x2f95a
	strb r4, [r0, #0]	@ 0002f95a 0470
.org 0x2f95c
	ldrb r1, [r7, #0]	@ 0002f95c 3978
.org 0x2f95e
	movs r0, #3	@ 0002f95e 0320
.org 0x2f960
	negs r0, r0	@ 0002f960 4042
.org 0x2f962
	ands r0, r1	@ 0002f962 0840
.org 0x2f964
	movs r1, #5	@ 0002f964 0521
.org 0x2f966
	negs r1, r1	@ 0002f966 4942
.org 0x2f968
	ands r0, r1	@ 0002f968 0840
.org 0x2f96a
	subs r1, #4	@ 0002f96a 0439
.org 0x2f96c
	ands r0, r1	@ 0002f96c 0840
.org 0x2f96e
	strb r0, [r7, #0]	@ 0002f96e 3870
.org 0x2f970
	movs r2, #0	@ 0002f970 0022
.org 0x2f972
	strb r2, [r3, #0]	@ 0002f972 1a70
.org 0x2f974
	ldrb r1, [r7, #0]	@ 0002f974 3978
.org 0x2f976
	movs r0, #2	@ 0002f976 0220
.org 0x2f978
	negs r0, r0	@ 0002f978 4042
.org 0x2f97a
	ands r0, r1	@ 0002f97a 0840
.org 0x2f97c
	orrs r0, r4	@ 0002f97c 2043
.org 0x2f97e
	strb r0, [r7, #0]	@ 0002f97e 3870
.org 0x2f980
	ldr r3, [pc, #52]	@ 0002f980 0d4b
.org 0x2f982
	adds r0, r6, r3	@ 0002f982 f018
.org 0x2f984
	strb r2, [r0, #0]	@ 0002f984 0270
.org 0x2f986
	ldrb r0, [r6, #13]	@ 0002f986 707b
.org 0x2f988
	cmp r0, #3	@ 0002f988 0328
.org 0x2f98a
	bhi.n 0x2f9c4	@ 0002f98a 1bd8
.org 0x2f98c
	ldr r0, [pc, #44]	@ 0002f98c 0b48
.org 0x2f98e
	ldrb r1, [r6, #13]	@ 0002f98e 717b
.org 0x2f990
	lsls r1, r1, #2	@ 0002f990 8900
.org 0x2f992
	adds r1, r1, r0	@ 0002f992 0918
.org 0x2f994
	ldr r1, [r1, #0]	@ 0002f994 0968
.org 0x2f996
	adds r0, r6, #0	@ 0002f996 301c
.org 0x2f998
	bl 0x128f80	@ 0002f998 f9f0f2fa
.org 0x2f99c
	ldr r0, [pc, #32]	@ 0002f99c 0848
.org 0x2f99e
	adds r1, r6, r0	@ 0002f99e 3118
.org 0x2f9a0
	ldrb r0, [r1, #0]	@ 0002f9a0 0878
.org 0x2f9a2
	cmp r0, #0	@ 0002f9a2 0028
.org 0x2f9a4
	beq.n 0x2f9cc	@ 0002f9a4 12d0
.org 0x2f9a6
	subs r0, #1	@ 0002f9a6 0138
.org 0x2f9a8
	strb r0, [r1, #0]	@ 0002f9a8 0870
.org 0x2f9aa
	lsls r0, r0, #24	@ 0002f9aa 0006
.org 0x2f9ac
	cmp r0, #0	@ 0002f9ac 0028
.org 0x2f9ae
	bne.n 0x2f9cc	@ 0002f9ae 0dd1
.org 0x2f9b0
	adds r0, r6, #0	@ 0002f9b0 301c
.org 0x2f9b2
	bl 0x109320	@ 0002f9b2 d9f0b5fc
.org 0x2f9b6
	b.n 0x2f9cc	@ 0002f9b6 09e0
.org 0x2f9b8
	.byte 0x67,0x01,0x00,0x00	@ 0002f9b8 data
.org 0x2f9bc
	.byte 0xb4,0x2e,0x85,0x08	@ 0002f9bc data
.org 0x2f9c0
	.byte 0x79,0x02,0x00,0x00	@ 0002f9c0 data
.org 0x2f9c4
	movs r1, #128	@ 0002f9c4 8021
.org 0x2f9c6
	lsls r1, r1, #1	@ 0002f9c6 4900
.org 0x2f9c8
	adds r0, r6, r1	@ 0002f9c8 7018
.org 0x2f9ca
	strb r2, [r0, #0]	@ 0002f9ca 0270
.org 0x2f9cc
	ldrb r1, [r7, #0]	@ 0002f9cc 3978
.org 0x2f9ce
	movs r0, #17	@ 0002f9ce 1120
.org 0x2f9d0
	negs r0, r0	@ 0002f9d0 4042
.org 0x2f9d2
	ands r0, r1	@ 0002f9d2 0840
.org 0x2f9d4
	movs r1, #33	@ 0002f9d4 2121
.org 0x2f9d6
	negs r1, r1	@ 0002f9d6 4942
.org 0x2f9d8
	ands r0, r1	@ 0002f9d8 0840
.org 0x2f9da
	strb r0, [r7, #0]	@ 0002f9da 3870
.org 0x2f9dc
	adds r0, r6, #0	@ 0002f9dc 301c
.org 0x2f9de
	bl 0x38a78	@ 0002f9de 09f04bf8
.org 0x2f9e2
	lsls r0, r0, #24	@ 0002f9e2 0006
.org 0x2f9e4
	cmp r0, #0	@ 0002f9e4 0028
.org 0x2f9e6
	beq.n 0x2fa08	@ 0002f9e6 0fd0
.org 0x2f9e8
	adds r0, r6, #0	@ 0002f9e8 301c
.org 0x2f9ea
	adds r0, #116	@ 0002f9ea 7430
.org 0x2f9ec
	ldr r3, [sp, #44]	@ 0002f9ec 0b9b
.org 0x2f9ee
	ldrb r2, [r3, #0]	@ 0002f9ee 1a78
.org 0x2f9f0
	lsls r1, r2, #1	@ 0002f9f0 5100
.org 0x2f9f2
	adds r1, r1, r2	@ 0002f9f2 8918
.org 0x2f9f4
	lsls r1, r1, #3	@ 0002f9f4 c900
.org 0x2f9f6
	ldr r2, [pc, #12]	@ 0002f9f6 034a
.org 0x2f9f8
	adds r1, r1, r2	@ 0002f9f8 8918
.org 0x2f9fa
	movs r2, #128	@ 0002f9fa 8022
.org 0x2f9fc
	bl 0x57fc	@ 0002f9fc d5f7fefe
.org 0x2fa00
	b.n 0x2fa4a	@ 0002fa00 23e0
.org 0x2fa02
	.byte 0x00	@ 0002fa02 data
.org 0x2fa03
	.byte 0x00	@ 0002fa03 data
.org 0x2fa04
	.byte 0x9c,0x33,0x85,0x08	@ 0002fa04 data
.org 0x2fa08
	adds r0, r6, #0	@ 0002fa08 301c
.org 0x2fa0a
	bl 0x38aac	@ 0002fa0a 09f04ff8
.org 0x2fa0e
	lsls r0, r0, #24	@ 0002fa0e 0006
.org 0x2fa10
	cmp r0, #0	@ 0002fa10 0028
.org 0x2fa12
	beq.n 0x2fa34	@ 0002fa12 0fd0
.org 0x2fa14
	adds r0, r6, #0	@ 0002fa14 301c
.org 0x2fa16
	adds r0, #116	@ 0002fa16 7430
.org 0x2fa18
	ldr r1, [sp, #44]	@ 0002fa18 0b99
.org 0x2fa1a
	ldrb r2, [r1, #0]	@ 0002fa1a 0a78
.org 0x2fa1c
	lsls r1, r2, #1	@ 0002fa1c 5100
.org 0x2fa1e
	adds r1, r1, r2	@ 0002fa1e 8918
.org 0x2fa20
	lsls r1, r1, #3	@ 0002fa20 c900
.org 0x2fa22
	ldr r2, [pc, #12]	@ 0002fa22 034a
.org 0x2fa24
	adds r1, r1, r2	@ 0002fa24 8918
.org 0x2fa26
	movs r2, #32	@ 0002fa26 2022
.org 0x2fa28
	bl 0x57fc	@ 0002fa28 d5f7e8fe
.org 0x2fa2c
	b.n 0x2fa4a	@ 0002fa2c 0de0
.org 0x2fa2e
	.byte 0x00	@ 0002fa2e data
.org 0x2fa2f
	.byte 0x00	@ 0002fa2f data
.org 0x2fa30
	.byte 0x9c,0x33,0x85,0x08	@ 0002fa30 data
.org 0x2fa34
	adds r0, r6, #0	@ 0002fa34 301c
.org 0x2fa36
	adds r0, #116	@ 0002fa36 7430
.org 0x2fa38
	ldr r3, [sp, #44]	@ 0002fa38 0b9b
.org 0x2fa3a
	ldrb r2, [r3, #0]	@ 0002fa3a 1a78
.org 0x2fa3c
	lsls r1, r2, #1	@ 0002fa3c 5100
.org 0x2fa3e
	adds r1, r1, r2	@ 0002fa3e 8918
.org 0x2fa40
	lsls r1, r1, #3	@ 0002fa40 c900
.org 0x2fa42
	ldr r2, [pc, #180]	@ 0002fa42 2d4a
.org 0x2fa44
	adds r1, r1, r2	@ 0002fa44 8918
.org 0x2fa46
	bl 0x5784	@ 0002fa46 d5f79dfe
.org 0x2fa4a
	adds r0, r6, #0	@ 0002fa4a 301c
.org 0x2fa4c
	bl 0x3891c	@ 0002fa4c 08f066ff
.org 0x2fa50
	adds r1, r0, #0	@ 0002fa50 011c
.org 0x2fa52
	lsls r1, r1, #24	@ 0002fa52 0906
.org 0x2fa54
	lsrs r1, r1, #24	@ 0002fa54 090e
.org 0x2fa56
	adds r0, r6, #0	@ 0002fa56 301c
.org 0x2fa58
	bl 0x2b53c	@ 0002fa58 fbf770fd
.org 0x2fa5c
	ldrb r1, [r6, #13]	@ 0002fa5c 717b
.org 0x2fa5e
	subs r0, r1, #7	@ 0002fa5e c81f
.org 0x2fa60
	lsls r0, r0, #24	@ 0002fa60 0006
.org 0x2fa62
	lsrs r0, r0, #24	@ 0002fa62 000e
.org 0x2fa64
	cmp r0, #1	@ 0002fa64 0128
.org 0x2fa66
	bls.n 0x2fab2	@ 0002fa66 24d9
.org 0x2fa68
	cmp r1, #10	@ 0002fa68 0a29
.org 0x2fa6a
	beq.n 0x2fab2	@ 0002fa6a 22d0
.org 0x2fa6c
	ldr r0, [sp, #44]	@ 0002fa6c 0b98
.org 0x2fa6e
	ldrb r1, [r0, #0]	@ 0002fa6e 0178
.org 0x2fa70
	lsls r1, r1, #3	@ 0002fa70 c900
.org 0x2fa72
	ldr r0, [pc, #136]	@ 0002fa72 2248
.org 0x2fa74
	adds r1, r1, r0	@ 0002fa74 0918
.org 0x2fa76
	adds r0, r6, #0	@ 0002fa76 301c
.org 0x2fa78
	movs r2, #1	@ 0002fa78 0122
.org 0x2fa7a
	bl 0x2cc18	@ 0002fa7a fdf7cdf8
.org 0x2fa7e
	lsls r0, r0, #24	@ 0002fa7e 0006
.org 0x2fa80
	cmp r0, #0	@ 0002fa80 0028
.org 0x2fa82
	beq.n 0x2fab2	@ 0002fa82 16d0
.org 0x2fa84
	ldrb r1, [r6, #10]	@ 0002fa84 b17a
.org 0x2fa86
	lsrs r1, r1, #4	@ 0002fa86 0909
.org 0x2fa88
	movs r0, #1	@ 0002fa88 0120
.org 0x2fa8a
	ands r1, r0	@ 0002fa8a 0140
.org 0x2fa8c
	mov r3, r8	@ 0002fa8c 4346
.org 0x2fa8e
	ldrb r2, [r3, #0]	@ 0002fa8e 1a78
.org 0x2fa90
	movs r0, #2	@ 0002fa90 0220
.org 0x2fa92
	negs r0, r0	@ 0002fa92 4042
.org 0x2fa94
	ands r0, r2	@ 0002fa94 1040
.org 0x2fa96
	orrs r0, r1	@ 0002fa96 0843
.org 0x2fa98
	strb r0, [r3, #0]	@ 0002fa98 1870
.org 0x2fa9a
	adds r1, r6, #0	@ 0002fa9a 311c
.org 0x2fa9c
	adds r1, #164	@ 0002fa9c a431
.org 0x2fa9e
	movs r2, #0	@ 0002fa9e 0022
.org 0x2faa0
	movs r0, #0	@ 0002faa0 0020
.org 0x2faa2
	strh r0, [r1, #0]	@ 0002faa2 0880
.org 0x2faa4
	movs r0, #4	@ 0002faa4 0420
.org 0x2faa6
	strb r0, [r6, #13]	@ 0002faa6 7073
.org 0x2faa8
	strb r2, [r6, #14]	@ 0002faa8 b273
.org 0x2faaa
	ldr r0, [sp, #16]	@ 0002faaa 0498
.org 0x2faac
	ldr r1, [sp, #20]	@ 0002faac 0599
.org 0x2faae
	str r0, [r6, #84]	@ 0002faae 7065
.org 0x2fab0
	str r1, [r6, #88]	@ 0002fab0 b165
.org 0x2fab2
	mov r2, r8	@ 0002fab2 4246
.org 0x2fab4
	ldrb r1, [r2, #0]	@ 0002fab4 1178
.org 0x2fab6
	movs r0, #4	@ 0002fab6 0420
.org 0x2fab8
	ands r0, r1	@ 0002fab8 0840
.org 0x2faba
	cmp r0, #0	@ 0002faba 0028
.org 0x2fabc
	bne.n 0x2fb94	@ 0002fabc 6ad1
.org 0x2fabe
	ldr r1, [pc, #60]	@ 0002fabe 0f49
.org 0x2fac0
	ldr r3, [sp, #44]	@ 0002fac0 0b9b
.org 0x2fac2
	ldrb r0, [r3, #0]	@ 0002fac2 1878
.org 0x2fac4
	lsls r0, r0, #3	@ 0002fac4 c000
.org 0x2fac6
	adds r0, r0, r1	@ 0002fac6 4018
.org 0x2fac8
	ldrh r0, [r0, #6]	@ 0002fac8 c088
.org 0x2faca
	lsls r0, r0, #16	@ 0002faca 0004
.org 0x2facc
	asrs r0, r0, #17	@ 0002facc 4014
.org 0x2face
	ldr r3, [r6, #88]	@ 0002face b36d
.org 0x2fad0
	subs r4, r3, r0	@ 0002fad0 1c1a
.org 0x2fad2
	ldr r2, [pc, #44]	@ 0002fad2 0b4a
.org 0x2fad4
	movs r1, #232	@ 0002fad4 e821
.org 0x2fad6
	lsls r1, r1, #1	@ 0002fad6 4900
.org 0x2fad8
	adds r0, r2, r1	@ 0002fad8 5018
.org 0x2fada
	ldrh r1, [r0, #0]	@ 0002fada 0188
.org 0x2fadc
	movs r0, #127	@ 0002fadc 7f20
.org 0x2fade
	ands r0, r1	@ 0002fade 0840
.org 0x2fae0
	adds r5, r3, #0	@ 0002fae0 1d1c
.org 0x2fae2
	mov r9, r2	@ 0002fae2 9146
.org 0x2fae4
	cmp r0, #2	@ 0002fae4 0228
.org 0x2fae6
	bne.n 0x2fb04	@ 0002fae6 0dd1
.org 0x2fae8
	adds r0, r6, #0	@ 0002fae8 301c
.org 0x2faea
	adds r0, #84	@ 0002faea 5430
.org 0x2faec
	bl 0x7b84	@ 0002faec d8f74af8
.org 0x2faf0
	cmp r4, r0	@ 0002faf0 8442
.org 0x2faf2
	bgt.n 0x2fb0e	@ 0002faf2 0cdc
.org 0x2faf4
	ldr r5, [r6, #88]	@ 0002faf4 b56d
.org 0x2faf6
	b.n 0x2fb64	@ 0002faf6 35e0
.org 0x2faf8
	.byte 0x9c,0x33,0x85,0x08	@ 0002faf8 data
.org 0x2fafc
	.byte 0x6c,0x33,0x85,0x08	@ 0002fafc data
.org 0x2fb00
	.byte 0xb0,0x0a,0x00,0x02	@ 0002fb00 data
.org 0x2fb04
	ldr r0, [pc, #56]	@ 0002fb04 0e48
.org 0x2fb06
	add r0, r9	@ 0002fb06 4844
.org 0x2fb08
	ldr r0, [r0, #0]	@ 0002fb08 0068
.org 0x2fb0a
	cmp r4, r0	@ 0002fb0a 8442
.org 0x2fb0c
	ble.n 0x2fb64	@ 0002fb0c 2add
.org 0x2fb0e
	ldr r1, [pc, #52]	@ 0002fb0e 0d49
.org 0x2fb10
	ldr r2, [sp, #44]	@ 0002fb10 0b9a
.org 0x2fb12
	ldrb r0, [r2, #0]	@ 0002fb12 1078
.org 0x2fb14
	lsls r0, r0, #3	@ 0002fb14 c000
.org 0x2fb16
	adds r0, r0, r1	@ 0002fb16 4018
.org 0x2fb18
	movs r3, #6	@ 0002fb18 0623
.org 0x2fb1a
	ldrsh r1, [r0, r3]	@ 0002fb1a c15e
.org 0x2fb1c
	ldr r0, [r6, #88]	@ 0002fb1c b06d
.org 0x2fb1e
	subs r4, r0, r1	@ 0002fb1e 441a
.org 0x2fb20
	ldr r2, [pc, #36]	@ 0002fb20 094a
.org 0x2fb22
	movs r1, #232	@ 0002fb22 e821
.org 0x2fb24
	lsls r1, r1, #1	@ 0002fb24 4900
.org 0x2fb26
	adds r0, r2, r1	@ 0002fb26 5018
.org 0x2fb28
	ldrh r1, [r0, #0]	@ 0002fb28 0188
.org 0x2fb2a
	movs r0, #127	@ 0002fb2a 7f20
.org 0x2fb2c
	ands r0, r1	@ 0002fb2c 0840
.org 0x2fb2e
	cmp r0, #2	@ 0002fb2e 0228
.org 0x2fb30
	bne.n 0x2fb4c	@ 0002fb30 0cd1
.org 0x2fb32
	adds r0, r6, #0	@ 0002fb32 301c
.org 0x2fb34
	adds r0, #84	@ 0002fb34 5430
.org 0x2fb36
	bl 0x7b84	@ 0002fb36 d8f725f8
.org 0x2fb3a
	cmp r4, r0	@ 0002fb3a 8442
.org 0x2fb3c
	blt.n 0x2fb56	@ 0002fb3c 0bdb
.org 0x2fb3e
	b.n 0x2fb94	@ 0002fb3e 29e0
.org 0x2fb40
	.byte 0x0c,0xc0,0x02,0x00	@ 0002fb40 data
.org 0x2fb44
	.byte 0x6c,0x33,0x85,0x08	@ 0002fb44 data
.org 0x2fb48
	.byte 0xb0,0x0a,0x00,0x02	@ 0002fb48 data
.org 0x2fb4c
	ldr r3, [pc, #16]	@ 0002fb4c 044b
.org 0x2fb4e
	adds r0, r2, r3	@ 0002fb4e d018
.org 0x2fb50
	ldr r0, [r0, #0]	@ 0002fb50 0068
.org 0x2fb52
	cmp r4, r0	@ 0002fb52 8442
.org 0x2fb54
	bge.n 0x2fb94	@ 0002fb54 1eda
.org 0x2fb56
	adds r0, r6, #0	@ 0002fb56 301c
.org 0x2fb58
	movs r1, #1	@ 0002fb58 0121
.org 0x2fb5a
	bl 0xd3b40	@ 0002fb5a a3f0f1ff
.org 0x2fb5e
	b.n 0x2fb94	@ 0002fb5e 19e0
.org 0x2fb60
	.byte 0x0c,0xc0,0x02,0x00	@ 0002fb60 data
.org 0x2fb64
	movs r0, #232	@ 0002fb64 e820
.org 0x2fb66
	lsls r0, r0, #1	@ 0002fb66 4000
.org 0x2fb68
	add r0, r9	@ 0002fb68 4844
.org 0x2fb6a
	ldrh r1, [r0, #0]	@ 0002fb6a 0188
.org 0x2fb6c
	movs r0, #127	@ 0002fb6c 7f20
.org 0x2fb6e
	ands r0, r1	@ 0002fb6e 0840
.org 0x2fb70
	cmp r0, #2	@ 0002fb70 0228
.org 0x2fb72
	bne.n 0x2fb82	@ 0002fb72 06d1
.org 0x2fb74
	adds r0, r6, #0	@ 0002fb74 301c
.org 0x2fb76
	adds r0, #84	@ 0002fb76 5430
.org 0x2fb78
	bl 0x7b84	@ 0002fb78 d8f704f8
.org 0x2fb7c
	cmp r5, r0	@ 0002fb7c 8542
.org 0x2fb7e
	bgt.n 0x2fb8c	@ 0002fb7e 05dc
.org 0x2fb80
	b.n 0x2fb94	@ 0002fb80 08e0
.org 0x2fb82
	ldr r0, [pc, #108]	@ 0002fb82 1b48
.org 0x2fb84
	add r0, r9	@ 0002fb84 4844
.org 0x2fb86
	ldr r0, [r0, #0]	@ 0002fb86 0068
.org 0x2fb88
	cmp r5, r0	@ 0002fb88 8542
.org 0x2fb8a
	ble.n 0x2fb94	@ 0002fb8a 03dd
.org 0x2fb8c
	adds r0, r6, #0	@ 0002fb8c 301c
.org 0x2fb8e
	movs r1, #0	@ 0002fb8e 0021
.org 0x2fb90
	bl 0xd3b40	@ 0002fb90 a3f0d6ff
.org 0x2fb94
	mov r0, r8	@ 0002fb94 4046
.org 0x2fb96
	ldrb r1, [r0, #0]	@ 0002fb96 0178
.org 0x2fb98
	movs r0, #9	@ 0002fb98 0920
.org 0x2fb9a
	negs r0, r0	@ 0002fb9a 4042
.org 0x2fb9c
	ands r0, r1	@ 0002fb9c 0840
.org 0x2fb9e
	mov r1, r8	@ 0002fb9e 4146
.org 0x2fba0
	strb r0, [r1, #0]	@ 0002fba0 0870
.org 0x2fba2
	ldr r3, [pc, #80]	@ 0002fba2 144b
.org 0x2fba4
	adds r2, r6, r3	@ 0002fba4 f218
.org 0x2fba6
	ldrh r1, [r2, #0]	@ 0002fba6 1188
.org 0x2fba8
	movs r0, #128	@ 0002fba8 8020
.org 0x2fbaa
	lsls r0, r0, #8	@ 0002fbaa 0002
.org 0x2fbac
	ands r0, r1	@ 0002fbac 0840
.org 0x2fbae
	mov sl, r2	@ 0002fbae 9246
.org 0x2fbb0
	cmp r0, #0	@ 0002fbb0 0028
.org 0x2fbb2
	beq.n 0x2fbb6	@ 0002fbb2 00d0
.org 0x2fbb4
	b.n 0x2fe60	@ 0002fbb4 54e1
.org 0x2fbb6
	ldr r1, [pc, #64]	@ 0002fbb6 1049
.org 0x2fbb8
	adds r0, r6, r1	@ 0002fbb8 7018
.org 0x2fbba
	ldrb r0, [r0, #0]	@ 0002fbba 0078
.org 0x2fbbc
	cmp r0, #0	@ 0002fbbc 0028
.org 0x2fbbe
	bne.n 0x2fca6	@ 0002fbbe 72d1
.org 0x2fbc0
	ldr r2, [sp, #24]	@ 0002fbc0 069a
.org 0x2fbc2
	ldr r0, [r2, #0]	@ 0002fbc2 1068
.org 0x2fbc4
	adds r1, #49	@ 0002fbc4 3131
.org 0x2fbc6
	ands r0, r1	@ 0002fbc6 0840
.org 0x2fbc8
	cmp r0, #0	@ 0002fbc8 0028
.org 0x2fbca
	bne.n 0x2fc32	@ 0002fbca 32d1
.org 0x2fbcc
	adds r0, r6, #0	@ 0002fbcc 301c
.org 0x2fbce
	adds r0, #164	@ 0002fbce a430
.org 0x2fbd0
	movs r3, #0	@ 0002fbd0 0023
.org 0x2fbd2
	ldrsh r1, [r0, r3]	@ 0002fbd2 c15e
.org 0x2fbd4
	adds r5, r0, #0	@ 0002fbd4 051c
.org 0x2fbd6
	cmp r1, #0	@ 0002fbd6 0029
.org 0x2fbd8
	beq.n 0x2fc32	@ 0002fbd8 2bd0
.org 0x2fbda
	ldr r1, [r6, #84]	@ 0002fbda 716d
.org 0x2fbdc
	ldr r0, [sp, #16]	@ 0002fbdc 0498
.org 0x2fbde
	subs r2, r0, r1	@ 0002fbde 421a
.org 0x2fbe0
	cmp r2, #0	@ 0002fbe0 002a
.org 0x2fbe2
	blt.n 0x2fbfc	@ 0002fbe2 0bdb
.org 0x2fbe4
	movs r0, #128	@ 0002fbe4 8020
.org 0x2fbe6
	lsls r0, r0, #5	@ 0002fbe6 4001
.org 0x2fbe8
	cmp r2, r0	@ 0002fbe8 8242
.org 0x2fbea
	bgt.n 0x2fc08	@ 0002fbea 0ddc
.org 0x2fbec
	b.n 0x2fc32	@ 0002fbec 21e0
.org 0x2fbee
	.byte 0x00	@ 0002fbee data
.org 0x2fbef
	.byte 0x00	@ 0002fbef data
.org 0x2fbf0
	.byte 0x0c,0xc0,0x02,0x00	@ 0002fbf0 data
.org 0x2fbf4
	.byte 0x52,0x02,0x00,0x00	@ 0002fbf4 data
.org 0x2fbf8
	.byte 0xcf,0x01,0x00,0x00	@ 0002fbf8 data
.org 0x2fbfc
	ldr r2, [sp, #16]	@ 0002fbfc 049a
.org 0x2fbfe
	subs r1, r1, r2	@ 0002fbfe 891a
.org 0x2fc00
	movs r0, #128	@ 0002fc00 8020
.org 0x2fc02
	lsls r0, r0, #5	@ 0002fc02 4001
.org 0x2fc04
	cmp r1, r0	@ 0002fc04 8142
.org 0x2fc06
	ble.n 0x2fc32	@ 0002fc06 14dd
.org 0x2fc08
	ldrb r1, [r6, #10]	@ 0002fc08 b17a
.org 0x2fc0a
	lsrs r1, r1, #4	@ 0002fc0a 0909
.org 0x2fc0c
	movs r0, #1	@ 0002fc0c 0120
.org 0x2fc0e
	ands r1, r0	@ 0002fc0e 0140
.org 0x2fc10
	mov r3, r8	@ 0002fc10 4346
.org 0x2fc12
	ldrb r2, [r3, #0]	@ 0002fc12 1a78
.org 0x2fc14
	movs r0, #2	@ 0002fc14 0220
.org 0x2fc16
	negs r0, r0	@ 0002fc16 4042
.org 0x2fc18
	ands r0, r2	@ 0002fc18 1040
.org 0x2fc1a
	orrs r0, r1	@ 0002fc1a 0843
.org 0x2fc1c
	strb r0, [r3, #0]	@ 0002fc1c 1870
.org 0x2fc1e
	movs r1, #0	@ 0002fc1e 0021
.org 0x2fc20
	movs r0, #0	@ 0002fc20 0020
.org 0x2fc22
	strh r0, [r5, #0]	@ 0002fc22 2880
.org 0x2fc24
	movs r0, #4	@ 0002fc24 0420
.org 0x2fc26
	strb r0, [r6, #13]	@ 0002fc26 7073
.org 0x2fc28
	strb r1, [r6, #14]	@ 0002fc28 b173
.org 0x2fc2a
	ldr r0, [sp, #16]	@ 0002fc2a 0498
.org 0x2fc2c
	ldr r1, [sp, #20]	@ 0002fc2c 0599
.org 0x2fc2e
	str r0, [r6, #84]	@ 0002fc2e 7065
.org 0x2fc30
	str r1, [r6, #88]	@ 0002fc30 b165
.org 0x2fc32
	ldr r1, [pc, #56]	@ 0002fc32 0e49
.org 0x2fc34
	adds r0, r6, r1	@ 0002fc34 7018
.org 0x2fc36
	ldrb r0, [r0, #0]	@ 0002fc36 0078
.org 0x2fc38
	cmp r0, #0	@ 0002fc38 0028
.org 0x2fc3a
	beq.n 0x2fca6	@ 0002fc3a 34d0
.org 0x2fc3c
	ldr r2, [sp, #24]	@ 0002fc3c 069a
.org 0x2fc3e
	ldr r0, [r2, #0]	@ 0002fc3e 1068
.org 0x2fc40
	adds r1, #69	@ 0002fc40 4531
.org 0x2fc42
	ands r0, r1	@ 0002fc42 0840
.org 0x2fc44
	cmp r0, #0	@ 0002fc44 0028
.org 0x2fc46
	bne.n 0x2fca6	@ 0002fc46 2ed1
.org 0x2fc48
	adds r0, r6, #0	@ 0002fc48 301c
.org 0x2fc4a
	adds r0, #164	@ 0002fc4a a430
.org 0x2fc4c
	movs r3, #0	@ 0002fc4c 0023
.org 0x2fc4e
	ldrsh r1, [r0, r3]	@ 0002fc4e c15e
.org 0x2fc50
	adds r5, r0, #0	@ 0002fc50 051c
.org 0x2fc52
	cmp r1, #0	@ 0002fc52 0029
.org 0x2fc54
	beq.n 0x2fca6	@ 0002fc54 27d0
.org 0x2fc56
	ldr r1, [r6, #88]	@ 0002fc56 b16d
.org 0x2fc58
	ldr r0, [sp, #20]	@ 0002fc58 0598
.org 0x2fc5a
	subs r2, r0, r1	@ 0002fc5a 421a
.org 0x2fc5c
	cmp r2, #0	@ 0002fc5c 002a
.org 0x2fc5e
	blt.n 0x2fc70	@ 0002fc5e 07db
.org 0x2fc60
	movs r0, #128	@ 0002fc60 8020
.org 0x2fc62
	lsls r0, r0, #5	@ 0002fc62 4001
.org 0x2fc64
	cmp r2, r0	@ 0002fc64 8242
.org 0x2fc66
	bgt.n 0x2fc7c	@ 0002fc66 09dc
.org 0x2fc68
	b.n 0x2fca6	@ 0002fc68 1de0
.org 0x2fc6a
	.byte 0x00	@ 0002fc6a data
.org 0x2fc6b
	.byte 0x00	@ 0002fc6b data
.org 0x2fc6c
	.byte 0xbb,0x01,0x00,0x00	@ 0002fc6c data
.org 0x2fc70
	ldr r2, [sp, #20]	@ 0002fc70 059a
.org 0x2fc72
	subs r1, r1, r2	@ 0002fc72 891a
.org 0x2fc74
	movs r0, #128	@ 0002fc74 8020
.org 0x2fc76
	lsls r0, r0, #5	@ 0002fc76 4001
.org 0x2fc78
	cmp r1, r0	@ 0002fc78 8142
.org 0x2fc7a
	ble.n 0x2fca6	@ 0002fc7a 14dd
.org 0x2fc7c
	ldrb r1, [r6, #10]	@ 0002fc7c b17a
.org 0x2fc7e
	lsrs r1, r1, #4	@ 0002fc7e 0909
.org 0x2fc80
	movs r0, #1	@ 0002fc80 0120
.org 0x2fc82
	ands r1, r0	@ 0002fc82 0140
.org 0x2fc84
	mov r3, r8	@ 0002fc84 4346
.org 0x2fc86
	ldrb r2, [r3, #0]	@ 0002fc86 1a78
.org 0x2fc88
	movs r0, #2	@ 0002fc88 0220
.org 0x2fc8a
	negs r0, r0	@ 0002fc8a 4042
.org 0x2fc8c
	ands r0, r2	@ 0002fc8c 1040
.org 0x2fc8e
	orrs r0, r1	@ 0002fc8e 0843
.org 0x2fc90
	strb r0, [r3, #0]	@ 0002fc90 1870
.org 0x2fc92
	movs r1, #0	@ 0002fc92 0021
.org 0x2fc94
	movs r0, #0	@ 0002fc94 0020
.org 0x2fc96
	strh r0, [r5, #0]	@ 0002fc96 2880
.org 0x2fc98
	movs r0, #4	@ 0002fc98 0420
.org 0x2fc9a
	strb r0, [r6, #13]	@ 0002fc9a 7073
.org 0x2fc9c
	strb r1, [r6, #14]	@ 0002fc9c b173
.org 0x2fc9e
	ldr r0, [sp, #16]	@ 0002fc9e 0498
.org 0x2fca0
	ldr r1, [sp, #20]	@ 0002fca0 0599
.org 0x2fca2
	str r0, [r6, #84]	@ 0002fca2 7065
.org 0x2fca4
	str r1, [r6, #88]	@ 0002fca4 b165
.org 0x2fca6
	mov r2, sl	@ 0002fca6 5246
.org 0x2fca8
	ldrh r1, [r2, #0]	@ 0002fca8 1188
.org 0x2fcaa
	movs r0, #128	@ 0002fcaa 8020
.org 0x2fcac
	lsls r0, r0, #8	@ 0002fcac 0002
.org 0x2fcae
	ands r0, r1	@ 0002fcae 0840
.org 0x2fcb0
	cmp r0, #0	@ 0002fcb0 0028
.org 0x2fcb2
	beq.n 0x2fcb6	@ 0002fcb2 00d0
.org 0x2fcb4
	b.n 0x2fe60	@ 0002fcb4 d4e0
.org 0x2fcb6
	ldrb r0, [r6, #13]	@ 0002fcb6 707b
.org 0x2fcb8
	cmp r0, #8	@ 0002fcb8 0828
.org 0x2fcba
	bne.n 0x2fcbe	@ 0002fcba 00d1
.org 0x2fcbc
	b.n 0x2fe60	@ 0002fcbc d0e0
.org 0x2fcbe
	ldr r3, [sp, #24]	@ 0002fcbe 069b
.org 0x2fcc0
	ldr r0, [r3, #0]	@ 0002fcc0 1868
.org 0x2fcc2
	movs r1, #128	@ 0002fcc2 8021
.org 0x2fcc4
	lsls r1, r1, #2	@ 0002fcc4 8900
.org 0x2fcc6
	ands r0, r1	@ 0002fcc6 0840
.org 0x2fcc8
	cmp r0, #0	@ 0002fcc8 0028
.org 0x2fcca
	beq.n 0x2fcce	@ 0002fcca 00d0
.org 0x2fccc
	b.n 0x2fe74	@ 0002fccc d2e0
.org 0x2fcce
	adds r0, r6, #0	@ 0002fcce 301c
.org 0x2fcd0
	adds r0, #164	@ 0002fcd0 a430
.org 0x2fcd2
	movs r1, #0	@ 0002fcd2 0021
.org 0x2fcd4
	ldrsh r0, [r0, r1]	@ 0002fcd4 405e
.org 0x2fcd6
	cmp r0, #0	@ 0002fcd6 0028
.org 0x2fcd8
	bne.n 0x2fcdc	@ 0002fcd8 00d1
.org 0x2fcda
	b.n 0x2fe74	@ 0002fcda cbe0
.org 0x2fcdc
	ldr r1, [pc, #88]	@ 0002fcdc 1649
.org 0x2fcde
	movs r2, #232	@ 0002fcde e822
.org 0x2fce0
	lsls r2, r2, #1	@ 0002fce0 5200
.org 0x2fce2
	adds r0, r1, r2	@ 0002fce2 8818
.org 0x2fce4
	ldrh r0, [r0, #0]	@ 0002fce4 0088
.org 0x2fce6
	mov r9, r1	@ 0002fce6 8946
.org 0x2fce8
	cmp r0, #7	@ 0002fce8 0728
.org 0x2fcea
	beq.n 0x2fcf2	@ 0002fcea 02d0
.org 0x2fcec
	cmp r0, #16	@ 0002fcec 1028
.org 0x2fcee
	beq.n 0x2fcf2	@ 0002fcee 00d0
.org 0x2fcf0
	b.n 0x2fe74	@ 0002fcf0 c0e0
.org 0x2fcf2
	ldr r1, [pc, #72]	@ 0002fcf2 1249
.org 0x2fcf4
	ldr r3, [sp, #44]	@ 0002fcf4 0b9b
.org 0x2fcf6
	ldrb r0, [r3, #0]	@ 0002fcf6 1878
.org 0x2fcf8
	lsls r0, r0, #3	@ 0002fcf8 c000
.org 0x2fcfa
	adds r0, r0, r1	@ 0002fcfa 4018
.org 0x2fcfc
	ldr r4, [r0, #0]	@ 0002fcfc 0468
.org 0x2fcfe
	ldr r5, [r0, #4]	@ 0002fcfe 4568
.org 0x2fd00
	ldr r0, [pc, #60]	@ 0002fd00 0f48
.org 0x2fd02
	adds r3, r6, r0	@ 0002fd02 3318
.org 0x2fd04
	ldrh r1, [r3, #0]	@ 0002fd04 1988
.org 0x2fd06
	mov r8, r1	@ 0002fd06 8846
.org 0x2fd08
	asrs r1, r4, #16	@ 0002fd08 2114
.org 0x2fd0a
	ldr r0, [r6, #88]	@ 0002fd0a b06d
.org 0x2fd0c
	adds r0, r0, r1	@ 0002fd0c 4018
.org 0x2fd0e
	str r0, [sp, #4]	@ 0002fd0e 0190
.org 0x2fd10
	add r2, sp, #8	@ 0002fd10 02aa
.org 0x2fd12
	str r0, [r2, #4]	@ 0002fd12 5060
.org 0x2fd14
	ldrb r1, [r6, #10]	@ 0002fd14 b17a
.org 0x2fd16
	movs r0, #16	@ 0002fd16 1020
.org 0x2fd18
	ands r0, r1	@ 0002fd18 0840
.org 0x2fd1a
	adds r7, r3, #0	@ 0002fd1a 1f1c
.org 0x2fd1c
	adds r3, r2, #0	@ 0002fd1c 131c
.org 0x2fd1e
	cmp r0, #0	@ 0002fd1e 0028
.org 0x2fd20
	beq.n 0x2fd44	@ 0002fd20 10d0
.org 0x2fd22
	lsls r0, r4, #16	@ 0002fd22 2004
.org 0x2fd24
	asrs r0, r0, #16	@ 0002fd24 0014
.org 0x2fd26
	ldr r1, [r6, #84]	@ 0002fd26 716d
.org 0x2fd28
	subs r1, r1, r0	@ 0002fd28 091a
.org 0x2fd2a
	lsls r0, r5, #16	@ 0002fd2a 2804
.org 0x2fd2c
	asrs r0, r0, #17	@ 0002fd2c 4014
.org 0x2fd2e
	adds r2, r1, r0	@ 0002fd2e 0a18
.org 0x2fd30
	str r2, [sp, #8]	@ 0002fd30 0292
.org 0x2fd32
	subs r1, r1, r0	@ 0002fd32 091a
.org 0x2fd34
	b.n 0x2fd56	@ 0002fd34 0fe0
.org 0x2fd36
	.byte 0x00	@ 0002fd36 data
.org 0x2fd37
	.byte 0x00	@ 0002fd37 data
.org 0x2fd38
	.byte 0xb0,0x0a,0x00,0x02	@ 0002fd38 data
.org 0x2fd3c
	.byte 0x6c,0x33,0x85,0x08	@ 0002fd3c data
.org 0x2fd40
	.byte 0x7e,0x02,0x00,0x00	@ 0002fd40 data
.org 0x2fd44
	lsls r0, r4, #16	@ 0002fd44 2004
.org 0x2fd46
	asrs r0, r0, #16	@ 0002fd46 0014
.org 0x2fd48
	ldr r1, [r6, #84]	@ 0002fd48 716d
.org 0x2fd4a
	adds r1, r1, r0	@ 0002fd4a 0918
.org 0x2fd4c
	lsls r0, r5, #16	@ 0002fd4c 2804
.org 0x2fd4e
	asrs r0, r0, #17	@ 0002fd4e 4014
.org 0x2fd50
	subs r2, r1, r0	@ 0002fd50 0a1a
.org 0x2fd52
	str r2, [sp, #8]	@ 0002fd52 0292
.org 0x2fd54
	adds r1, r1, r0	@ 0002fd54 0918
.org 0x2fd56
	str r1, [sp, #0]	@ 0002fd56 0091
.org 0x2fd58
	movs r0, #232	@ 0002fd58 e820
.org 0x2fd5a
	lsls r0, r0, #1	@ 0002fd5a 4000
.org 0x2fd5c
	add r0, r9	@ 0002fd5c 4844
.org 0x2fd5e
	ldrh r0, [r0, #0]	@ 0002fd5e 0088
.org 0x2fd60
	cmp r0, #7	@ 0002fd60 0728
.org 0x2fd62
	bne.n 0x2fd9c	@ 0002fd62 1bd1
.org 0x2fd64
	adds r0, r3, #0	@ 0002fd64 181c
.org 0x2fd66
	bl 0x12948	@ 0002fd66 e2f7effd
.org 0x2fd6a
	lsls r0, r0, #24	@ 0002fd6a 0006
.org 0x2fd6c
	cmp r0, #0	@ 0002fd6c 0028
.org 0x2fd6e
	bne.n 0x2fd7e	@ 0002fd6e 06d1
.org 0x2fd70
	mov r0, sp	@ 0002fd70 6846
.org 0x2fd72
	bl 0x12948	@ 0002fd72 e2f7e9fd
.org 0x2fd76
	lsls r0, r0, #24	@ 0002fd76 0006
.org 0x2fd78
	lsrs r1, r0, #24	@ 0002fd78 010e
.org 0x2fd7a
	cmp r1, #0	@ 0002fd7a 0029
.org 0x2fd7c
	beq.n 0x2fdca	@ 0002fd7c 25d0
.org 0x2fd7e
	ldr r0, [pc, #24]	@ 0002fd7e 0648
.org 0x2fd80
	add r0, r9	@ 0002fd80 4844
.org 0x2fd82
	ldrb r1, [r0, #0]	@ 0002fd82 0178
.org 0x2fd84
	ldrh r0, [r7, #0]	@ 0002fd84 3888
.org 0x2fd86
	adds r0, r0, r1	@ 0002fd86 4018
.org 0x2fd88
	strh r0, [r7, #0]	@ 0002fd88 3880
.org 0x2fd8a
	lsls r0, r0, #16	@ 0002fd8a 0004
.org 0x2fd8c
	asrs r0, r0, #16	@ 0002fd8c 0014
.org 0x2fd8e
	movs r1, #250	@ 0002fd8e fa21
.org 0x2fd90
	lsls r1, r1, #2	@ 0002fd90 8900
.org 0x2fd92
	cmp r0, r1	@ 0002fd92 8842
.org 0x2fd94
	ble.n 0x2fdd8	@ 0002fd94 20dd
.org 0x2fd96
	b.n 0x2fdd6	@ 0002fd96 1ee0
.org 0x2fd98
	.byte 0x2c,0xd0,0x02,0x00	@ 0002fd98 data
.org 0x2fd9c
	adds r0, r3, #0	@ 0002fd9c 181c
.org 0x2fd9e
	bl 0x1c574	@ 0002fd9e ecf7e9fb
.org 0x2fda2
	lsls r0, r0, #24	@ 0002fda2 0006
.org 0x2fda4
	cmp r0, #0	@ 0002fda4 0028
.org 0x2fda6
	bne.n 0x2fdb6	@ 0002fda6 06d1
.org 0x2fda8
	mov r0, sp	@ 0002fda8 6846
.org 0x2fdaa
	bl 0x1c574	@ 0002fdaa ecf7e3fb
.org 0x2fdae
	lsls r0, r0, #24	@ 0002fdae 0006
.org 0x2fdb0
	lsrs r1, r0, #24	@ 0002fdb0 010e
.org 0x2fdb2
	cmp r1, #0	@ 0002fdb2 0029
.org 0x2fdb4
	beq.n 0x2fdca	@ 0002fdb4 09d0
.org 0x2fdb6
	ldrh r0, [r7, #0]	@ 0002fdb6 3888
.org 0x2fdb8
	adds r0, #6	@ 0002fdb8 0630
.org 0x2fdba
	strh r0, [r7, #0]	@ 0002fdba 3880
.org 0x2fdbc
	lsls r0, r0, #16	@ 0002fdbc 0004
.org 0x2fdbe
	asrs r0, r0, #16	@ 0002fdbe 0014
.org 0x2fdc0
	movs r1, #250	@ 0002fdc0 fa21
.org 0x2fdc2
	lsls r1, r1, #2	@ 0002fdc2 8900
.org 0x2fdc4
	cmp r0, r1	@ 0002fdc4 8842
.org 0x2fdc6
	ble.n 0x2fdd8	@ 0002fdc6 07dd
.org 0x2fdc8
	b.n 0x2fdd6	@ 0002fdc8 05e0
.org 0x2fdca
	ldrh r0, [r7, #0]	@ 0002fdca 3888
.org 0x2fdcc
	subs r0, #33	@ 0002fdcc 2138
.org 0x2fdce
	strh r0, [r7, #0]	@ 0002fdce 3880
.org 0x2fdd0
	lsls r0, r0, #16	@ 0002fdd0 0004
.org 0x2fdd2
	cmp r0, #0	@ 0002fdd2 0028
.org 0x2fdd4
	bge.n 0x2fdd8	@ 0002fdd4 00da
.org 0x2fdd6
	strh r1, [r7, #0]	@ 0002fdd6 3980
.org 0x2fdd8
	adds r4, r7, #0	@ 0002fdd8 3c1c
.org 0x2fdda
	movs r2, #0	@ 0002fdda 0022
.org 0x2fddc
	ldrsh r0, [r4, r2]	@ 0002fddc a05e
.org 0x2fdde
	cmp r8, r0	@ 0002fdde 8045
.org 0x2fde0
	blt.n 0x2fdec	@ 0002fde0 04db
.org 0x2fde2
	adds r1, r0, #0	@ 0002fde2 011c
.org 0x2fde4
	movs r0, #250	@ 0002fde4 fa20
.org 0x2fde6
	lsls r0, r0, #2	@ 0002fde6 8000
.org 0x2fde8
	cmp r1, r0	@ 0002fde8 8142
.org 0x2fdea
	bne.n 0x2fe74	@ 0002fdea 43d1
.org 0x2fdec
	ldr r0, [pc, #76]	@ 0002fdec 1348
.org 0x2fdee
	adds r2, r6, r0	@ 0002fdee 3218
.org 0x2fdf0
	ldrb r0, [r2, #0]	@ 0002fdf0 1078
.org 0x2fdf2
	adds r1, r0, #1	@ 0002fdf2 411c
.org 0x2fdf4
	strb r1, [r2, #0]	@ 0002fdf4 1170
.org 0x2fdf6
	ldr r2, [pc, #72]	@ 0002fdf6 124a
.org 0x2fdf8
	ldr r1, [pc, #72]	@ 0002fdf8 1249
.org 0x2fdfa
	ldr r3, [pc, #76]	@ 0002fdfa 134b
.org 0x2fdfc
	adds r1, r1, r3	@ 0002fdfc c918
.org 0x2fdfe
	ldrb r1, [r1, #0]	@ 0002fdfe 0978
.org 0x2fe00
	subs r1, #1	@ 0002fe00 0139
.org 0x2fe02
	adds r1, r1, r2	@ 0002fe02 8918
.org 0x2fe04
	lsls r0, r0, #24	@ 0002fe04 0006
.org 0x2fe06
	lsrs r0, r0, #24	@ 0002fe06 000e
.org 0x2fe08
	ldrb r1, [r1, #0]	@ 0002fe08 0978
.org 0x2fe0a
	bl 0x129198	@ 0002fe0a f9f0c5f9
.org 0x2fe0e
	lsls r0, r0, #24	@ 0002fe0e 0006
.org 0x2fe10
	cmp r0, #0	@ 0002fe10 0028
.org 0x2fe12
	bne.n 0x2fe74	@ 0002fe12 2fd1
.org 0x2fe14
	movs r0, #0	@ 0002fe14 0020
.org 0x2fe16
	ldrsh r1, [r4, r0]	@ 0002fe16 215e
.org 0x2fe18
	movs r0, #150	@ 0002fe18 9620
.org 0x2fe1a
	lsls r0, r0, #1	@ 0002fe1a 4000
.org 0x2fe1c
	cmp r1, r0	@ 0002fe1c 8142
.org 0x2fe1e
	ble.n 0x2fe50	@ 0002fe1e 17dd
.org 0x2fe20
	ldr r0, [pc, #40]	@ 0002fe20 0a48
.org 0x2fe22
	cmp r1, r0	@ 0002fe22 8142
.org 0x2fe24
	bgt.n 0x2fe58	@ 0002fe24 18dc
.org 0x2fe26
	movs r1, #0	@ 0002fe26 0021
.org 0x2fe28
	ldrsh r0, [r7, r1]	@ 0002fe28 785e
.org 0x2fe2a
	movs r1, #100	@ 0002fe2a 6421
.org 0x2fe2c
	bl 0x128fb8	@ 0002fe2c f9f0c4f8
.org 0x2fe30
	adds r0, #168	@ 0002fe30 a830
.org 0x2fe32
	lsls r0, r0, #16	@ 0002fe32 0004
.org 0x2fe34
	lsrs r0, r0, #16	@ 0002fe34 000c
.org 0x2fe36
	bl 0x2b10	@ 0002fe36 d2f76bfe
.org 0x2fe3a
	b.n 0x2fe74	@ 0002fe3a 1be0
.org 0x2fe3c
	.byte 0x7d,0x02,0x00,0x00	@ 0002fe3c data
.org 0x2fe40
	.byte 0xd8,0x2e,0x85,0x08	@ 0002fe40 data
.org 0x2fe44
	.byte 0xb0,0x0a,0x00,0x02	@ 0002fe44 data
.org 0x2fe48
	.byte 0x2c,0xd0,0x02,0x00	@ 0002fe48 data
.org 0x2fe4c
	.byte 0xb6,0x03,0x00,0x00	@ 0002fe4c data
.org 0x2fe50
	movs r0, #250	@ 0002fe50 fa20
.org 0x2fe52
	lsls r0, r0, #2	@ 0002fe52 8000
.org 0x2fe54
	cmp r1, r0	@ 0002fe54 8142
.org 0x2fe56
	bne.n 0x2fe74	@ 0002fe56 0dd1
.org 0x2fe58
	movs r0, #178	@ 0002fe58 b220
.org 0x2fe5a
	bl 0x2b10	@ 0002fe5a d2f759fe
.org 0x2fe5e
	b.n 0x2fe74	@ 0002fe5e 09e0
.org 0x2fe60
	ldr r2, [pc, #36]	@ 0002fe60 094a
.org 0x2fe62
	adds r1, r6, r2	@ 0002fe62 b118
.org 0x2fe64
	ldrh r0, [r1, #0]	@ 0002fe64 0888
.org 0x2fe66
	subs r0, #33	@ 0002fe66 2138
.org 0x2fe68
	strh r0, [r1, #0]	@ 0002fe68 0880
.org 0x2fe6a
	lsls r0, r0, #16	@ 0002fe6a 0004
.org 0x2fe6c
	cmp r0, #0	@ 0002fe6c 0028
.org 0x2fe6e
	bge.n 0x2fe74	@ 0002fe6e 01da
.org 0x2fe70
	movs r0, #0	@ 0002fe70 0020
.org 0x2fe72
	strh r0, [r1, #0]	@ 0002fe72 0880
.org 0x2fe74
	ldr r3, [sp, #28]	@ 0002fe74 079b
.org 0x2fe76
	ldr r0, [r3, #56]	@ 0002fe76 986b
.org 0x2fe78
	cmp r0, #0	@ 0002fe78 0028
.org 0x2fe7a
	beq.n 0x2fe92	@ 0002fe7a 0ad0
.org 0x2fe7c
	cmp r0, #0	@ 0002fe7c 0028
.org 0x2fe7e
	ble.n 0x2fe8c	@ 0002fe7e 05dd
.org 0x2fe80
	subs r0, #1	@ 0002fe80 0138
.org 0x2fe82
	str r0, [r3, #56]	@ 0002fe82 9863
.org 0x2fe84
	b.n 0x2fe92	@ 0002fe84 05e0
.org 0x2fe86
	.byte 0x00	@ 0002fe86 data
.org 0x2fe87
	.byte 0x00	@ 0002fe87 data
.org 0x2fe88
	.byte 0x7e,0x02,0x00,0x00	@ 0002fe88 data
.org 0x2fe8c
	adds r0, #1	@ 0002fe8c 0130
.org 0x2fe8e
	ldr r1, [sp, #28]	@ 0002fe8e 0799
.org 0x2fe90
	str r0, [r1, #56]	@ 0002fe90 8863
.org 0x2fe92
	ldr r2, [pc, #128]	@ 0002fe92 204a
.org 0x2fe94
	adds r1, r6, r2	@ 0002fe94 b118
.org 0x2fe96
	ldrb r0, [r1, #0]	@ 0002fe96 0878
.org 0x2fe98
	cmp r0, #0	@ 0002fe98 0028
.org 0x2fe9a
	beq.n 0x2fea0	@ 0002fe9a 01d0
.org 0x2fe9c
	subs r0, #1	@ 0002fe9c 0138
.org 0x2fe9e
	strb r0, [r1, #0]	@ 0002fe9e 0870
.org 0x2fea0
	movs r3, #179	@ 0002fea0 b323
.org 0x2fea2
	lsls r3, r3, #1	@ 0002fea2 5b00
.org 0x2fea4
	adds r1, r6, r3	@ 0002fea4 f118
.org 0x2fea6
	ldrb r0, [r1, #0]	@ 0002fea6 0878
.org 0x2fea8
	cmp r0, #0	@ 0002fea8 0028
.org 0x2feaa
	beq.n 0x2feb0	@ 0002feaa 01d0
.org 0x2feac
	subs r0, #1	@ 0002feac 0138
.org 0x2feae
	strb r0, [r1, #0]	@ 0002feae 0870
.org 0x2feb0
	ldr r0, [pc, #100]	@ 0002feb0 1948
.org 0x2feb2
	adds r1, r6, r0	@ 0002feb2 3118
.org 0x2feb4
	ldrb r0, [r1, #0]	@ 0002feb4 0878
.org 0x2feb6
	cmp r0, #0	@ 0002feb6 0028
.org 0x2feb8
	beq.n 0x2febe	@ 0002feb8 01d0
.org 0x2feba
	subs r0, #1	@ 0002feba 0138
.org 0x2febc
	strb r0, [r1, #0]	@ 0002febc 0870
.org 0x2febe
	mov r2, sl	@ 0002febe 5246
.org 0x2fec0
	ldrh r1, [r2, #0]	@ 0002fec0 1188
.org 0x2fec2
	movs r0, #128	@ 0002fec2 8020
.org 0x2fec4
	lsls r0, r0, #8	@ 0002fec4 0002
.org 0x2fec6
	ands r0, r1	@ 0002fec6 0840
.org 0x2fec8
	cmp r0, #0	@ 0002fec8 0028
.org 0x2feca
	bne.n 0x2ff82	@ 0002feca 5ad1
.org 0x2fecc
	ldr r3, [sp, #24]	@ 0002fecc 069b
.org 0x2fece
	ldr r2, [r3, #0]	@ 0002fece 1a68
.org 0x2fed0
	movs r0, #128	@ 0002fed0 8020
.org 0x2fed2
	lsls r0, r0, #2	@ 0002fed2 8000
.org 0x2fed4
	ands r2, r0	@ 0002fed4 0240
.org 0x2fed6
	cmp r2, #0	@ 0002fed6 002a
.org 0x2fed8
	bne.n 0x2ff82	@ 0002fed8 53d1
.org 0x2feda
	adds r0, r6, #0	@ 0002feda 301c
.org 0x2fedc
	adds r0, #164	@ 0002fedc a430
.org 0x2fede
	movs r1, #0	@ 0002fede 0021
.org 0x2fee0
	ldrsh r0, [r0, r1]	@ 0002fee0 405e
.org 0x2fee2
	cmp r0, #0	@ 0002fee2 0028
.org 0x2fee4
	beq.n 0x2ff82	@ 0002fee4 4dd0
.org 0x2fee6
	ldr r3, [sp, #28]	@ 0002fee6 079b
.org 0x2fee8
	ldrb r0, [r3, #16]	@ 0002fee8 187c
