@ FUN_0807a504  entry 0x0807a504  size 572
.thumb
.org 0x7a504
FUN_0807a504:
	push {r4, r5, r6, r7, lr}	@ 0007a504 f0b5
.org 0x7a506
	mov r7, sl	@ 0007a506 5746
.org 0x7a508
	mov r6, r9	@ 0007a508 4e46
.org 0x7a50a
	mov r5, r8	@ 0007a50a 4546
.org 0x7a50c
	push {r5, r6, r7}	@ 0007a50c e0b4
.org 0x7a50e
	sub sp, #12	@ 0007a50e 83b0
.org 0x7a510
	adds r7, r0, #0	@ 0007a510 071c
.org 0x7a512
	ldrb r0, [r7, #14]	@ 0007a512 b87b
.org 0x7a514
	str r0, [sp, #8]	@ 0007a514 0290
.org 0x7a516
	cmp r0, #0	@ 0007a516 0028
.org 0x7a518
	bne.n 0x7a5ba	@ 0007a518 4fd1
.org 0x7a51a
	ldr r1, [pc, #184]	@ 0007a51a 2e49
.org 0x7a51c
	adds r0, r7, #0	@ 0007a51c 381c
.org 0x7a51e
	bl 0x1cf00	@ 0007a51e a2f7effc
.org 0x7a522
	ldr r4, [pc, #180]	@ 0007a522 2d4c
.org 0x7a524
	ldr r1, [pc, #180]	@ 0007a524 2d49
.org 0x7a526
	mov r8, r1	@ 0007a526 8846
.org 0x7a528
	adds r0, r4, r1	@ 0007a528 6018
.org 0x7a52a
	ldr r6, [pc, #180]	@ 0007a52a 2d4e
.org 0x7a52c
	movs r2, #212	@ 0007a52c d422
.org 0x7a52e
	lsls r2, r2, #1	@ 0007a52e 5200
.org 0x7a530
	adds r1, r6, r2	@ 0007a530 b118
.org 0x7a532
	ldrh r1, [r1, #0]	@ 0007a532 0988
.org 0x7a534
	ldrh r2, [r0, #6]	@ 0007a534 c288
.org 0x7a536
	lsrs r2, r2, #6	@ 0007a536 9209
.org 0x7a538
	subs r1, r1, r2	@ 0007a538 891a
.org 0x7a53a
	lsls r1, r1, #5	@ 0007a53a 4901
.org 0x7a53c
	movs r2, #128	@ 0007a53c 8022
.org 0x7a53e
	lsls r2, r2, #9	@ 0007a53e 5202
.org 0x7a540
	adds r1, r1, r2	@ 0007a540 8918
.org 0x7a542
	bl 0x1d30	@ 0007a542 87f7f5fb
.org 0x7a546
	ldr r0, [pc, #156]	@ 0007a546 2748
.org 0x7a548
	adds r4, r4, r0	@ 0007a548 2418
.org 0x7a54a
	ldr r5, [pc, #156]	@ 0007a54a 274d
.org 0x7a54c
	movs r1, #212	@ 0007a54c d421
.org 0x7a54e
	lsls r1, r1, #1	@ 0007a54e 4900
.org 0x7a550
	adds r0, r5, r1	@ 0007a550 6818
.org 0x7a552
	ldrh r1, [r0, #0]	@ 0007a552 0188
.org 0x7a554
	ldrb r0, [r4, #7]	@ 0007a554 e079
.org 0x7a556
	subs r1, r1, r0	@ 0007a556 091a
.org 0x7a558
	lsls r1, r1, #5	@ 0007a558 4901
.org 0x7a55a
	movs r2, #128	@ 0007a55a 8022
.org 0x7a55c
	lsls r2, r2, #2	@ 0007a55c 9200
.org 0x7a55e
	mov sl, r2	@ 0007a55e 9246
.org 0x7a560
	add r1, sl	@ 0007a560 5144
.org 0x7a562
	adds r0, r4, #0	@ 0007a562 201c
.org 0x7a564
	bl 0x2208	@ 0007a564 87f750fe
.org 0x7a568
	ldr r4, [pc, #128]	@ 0007a568 204c
.org 0x7a56a
	add r8, r4	@ 0007a56a a044
.org 0x7a56c
	movs r0, #213	@ 0007a56c d520
.org 0x7a56e
	lsls r0, r0, #1	@ 0007a56e 4000
.org 0x7a570
	mov r9, r0	@ 0007a570 8146
.org 0x7a572
	add r6, r9	@ 0007a572 4e44
.org 0x7a574
	ldrh r1, [r6, #0]	@ 0007a574 3188
.org 0x7a576
	mov r2, r8	@ 0007a576 4246
.org 0x7a578
	ldrh r0, [r2, #6]	@ 0007a578 d088
.org 0x7a57a
	lsrs r0, r0, #6	@ 0007a57a 8009
.org 0x7a57c
	subs r1, r1, r0	@ 0007a57c 091a
.org 0x7a57e
	lsls r1, r1, #5	@ 0007a57e 4901
.org 0x7a580
	movs r0, #128	@ 0007a580 8020
.org 0x7a582
	lsls r0, r0, #9	@ 0007a582 4002
.org 0x7a584
	adds r1, r1, r0	@ 0007a584 0918
.org 0x7a586
	mov r0, r8	@ 0007a586 4046
.org 0x7a588
	bl 0x1d30	@ 0007a588 87f7d2fb
.org 0x7a58c
	ldr r1, [pc, #84]	@ 0007a58c 1549
.org 0x7a58e
	adds r4, r4, r1	@ 0007a58e 6418
.org 0x7a590
	add r5, r9	@ 0007a590 4d44
.org 0x7a592
	ldrh r1, [r5, #0]	@ 0007a592 2988
.org 0x7a594
	ldrb r0, [r4, #7]	@ 0007a594 e079
.org 0x7a596
	subs r1, r1, r0	@ 0007a596 091a
.org 0x7a598
	lsls r1, r1, #5	@ 0007a598 4901
.org 0x7a59a
	add r1, sl	@ 0007a59a 5144
.org 0x7a59c
	adds r0, r4, #0	@ 0007a59c 201c
.org 0x7a59e
	bl 0x2208	@ 0007a59e 87f733fe
.org 0x7a5a2
	movs r0, #155	@ 0007a5a2 9b20
.org 0x7a5a4
	strb r0, [r7, #18]	@ 0007a5a4 b874
.org 0x7a5a6
	movs r0, #212	@ 0007a5a6 d420
.org 0x7a5a8
	lsls r0, r0, #1	@ 0007a5a8 4000
.org 0x7a5aa
	bl 0x2b10	@ 0007a5aa 88f7b1fa
.org 0x7a5ae
	mov r2, sp	@ 0007a5ae 6a46
.org 0x7a5b0
	ldrb r2, [r2, #8]	@ 0007a5b0 127a
.org 0x7a5b2
	strb r2, [r7, #15]	@ 0007a5b2 fa73
.org 0x7a5b4
	ldrb r0, [r7, #14]	@ 0007a5b4 b87b
.org 0x7a5b6
	adds r0, #1	@ 0007a5b6 0130
.org 0x7a5b8
	strb r0, [r7, #14]	@ 0007a5b8 b873
.org 0x7a5ba
	adds r0, r7, #0	@ 0007a5ba 381c
.org 0x7a5bc
	bl 0x1cff0	@ 0007a5bc a2f718fd
.org 0x7a5c0
	ldrb r1, [r7, #15]	@ 0007a5c0 f97b
.org 0x7a5c2
	cmp r1, #1	@ 0007a5c2 0129
.org 0x7a5c4
	bne.n 0x7a5c8	@ 0007a5c4 00d1
.org 0x7a5c6
	b.n 0x7a720	@ 0007a5c6 abe0
.org 0x7a5c8
	cmp r1, #1	@ 0007a5c8 0129
.org 0x7a5ca
	bgt.n 0x7a5f0	@ 0007a5ca 11dc
.org 0x7a5cc
	cmp r1, #0	@ 0007a5cc 0029
.org 0x7a5ce
	beq.n 0x7a5fe	@ 0007a5ce 16d0
.org 0x7a5d0
	b.n 0x7a780	@ 0007a5d0 d6e0
.org 0x7a5d2
	.byte 0x00	@ 0007a5d2 data
.org 0x7a5d3
	.byte 0x00	@ 0007a5d3 data
.org 0x7a5d4
	.byte 0x02,0xb1,0x00,0x00	@ 0007a5d4 data
.org 0x7a5d8
	.byte 0x90,0x10,0x00,0x00	@ 0007a5d8 data
.org 0x7a5dc
	.byte 0x00,0x40,0xc4,0x08	@ 0007a5dc data
.org 0x7a5e0
	.byte 0x40,0xe0,0x02,0x02	@ 0007a5e0 data
.org 0x7a5e4
	.byte 0x0c,0x40,0xc4,0x08	@ 0007a5e4 data
.org 0x7a5e8
	.byte 0x40,0xde,0x02,0x02	@ 0007a5e8 data
.org 0x7a5ec
	.byte 0xa4,0x10,0x00,0x00	@ 0007a5ec data
.org 0x7a5f0
	cmp r1, #2	@ 0007a5f0 0229
.org 0x7a5f2
	bne.n 0x7a5f6	@ 0007a5f2 00d1
.org 0x7a5f4
	b.n 0x7a754	@ 0007a5f4 aee0
.org 0x7a5f6
	cmp r1, #3	@ 0007a5f6 0329
.org 0x7a5f8
	bne.n 0x7a5fc	@ 0007a5f8 00d1
.org 0x7a5fa
	b.n 0x7a772	@ 0007a5fa bae0
.org 0x7a5fc
	b.n 0x7a780	@ 0007a5fc c0e0
.org 0x7a5fe
	ldrb r0, [r7, #18]	@ 0007a5fe b87c
.org 0x7a600
	cmp r0, #35	@ 0007a600 2328
.org 0x7a602
	bls.n 0x7a6b4	@ 0007a602 57d9
.org 0x7a604
	ldr r0, [pc, #92]	@ 0007a604 1748
.org 0x7a606
	ldrh r1, [r0, #8]	@ 0007a606 0189
.org 0x7a608
	movs r0, #8	@ 0007a608 0820
.org 0x7a60a
	ands r0, r1	@ 0007a60a 0840
.org 0x7a60c
	cmp r0, #0	@ 0007a60c 0028
.org 0x7a60e
	bne.n 0x7a630	@ 0007a60e 0fd1
.org 0x7a610
	ldr r0, [pc, #84]	@ 0007a610 1548
.org 0x7a612
	ldr r2, [r0, #0]	@ 0007a612 0268
.org 0x7a614
	ldr r0, [r7, #84]	@ 0007a614 786d
.org 0x7a616
	ldr r1, [pc, #84]	@ 0007a616 1549
.org 0x7a618
	adds r0, r0, r1	@ 0007a618 4018
.org 0x7a61a
	ldr r1, [r2, #84]	@ 0007a61a 516d
.org 0x7a61c
	cmp r1, r0	@ 0007a61c 8142
.org 0x7a61e
	bge.n 0x7a630	@ 0007a61e 07da
.org 0x7a620
	movs r0, #222	@ 0007a620 de20
.org 0x7a622
	lsls r0, r0, #1	@ 0007a622 4000
.org 0x7a624
	adds r1, r2, r0	@ 0007a624 1118
.org 0x7a626
	ldr r0, [r1, #0]	@ 0007a626 0868
.org 0x7a628
	movs r2, #128	@ 0007a628 8022
.org 0x7a62a
	lsls r2, r2, #1	@ 0007a62a 5200
.org 0x7a62c
	adds r0, r0, r2	@ 0007a62c 8018
.org 0x7a62e
	str r0, [r1, #0]	@ 0007a62e 0860
.org 0x7a630
	ldrb r1, [r7, #18]	@ 0007a630 b97c
.org 0x7a632
	movs r0, #3	@ 0007a632 0320
.org 0x7a634
	ands r0, r1	@ 0007a634 0840
.org 0x7a636
	cmp r0, #0	@ 0007a636 0028
.org 0x7a638
	bne.n 0x7a6bc	@ 0007a638 40d1
.org 0x7a63a
	lsrs r0, r1, #2	@ 0007a63a 8808
.org 0x7a63c
	movs r1, #1	@ 0007a63c 0121
.org 0x7a63e
	ands r0, r1	@ 0007a63e 0840
.org 0x7a640
	cmp r0, #0	@ 0007a640 0028
.org 0x7a642
	beq.n 0x7a67c	@ 0007a642 1bd0
.org 0x7a644
	ldr r2, [pc, #40]	@ 0007a644 0a4a
.org 0x7a646
	ldr r1, [r2, #0]	@ 0007a646 1168
.org 0x7a648
	ldr r0, [pc, #40]	@ 0007a648 0a48
.org 0x7a64a
	muls r0, r1	@ 0007a64a 4843
.org 0x7a64c
	ldr r1, [pc, #40]	@ 0007a64c 0a49
.org 0x7a64e
	adds r0, r0, r1	@ 0007a64e 4018
.org 0x7a650
	lsls r0, r0, #1	@ 0007a650 4000
.org 0x7a652
	lsrs r1, r0, #1	@ 0007a652 4108
.org 0x7a654
	str r1, [r2, #0]	@ 0007a654 1160
.org 0x7a656
	lsrs r0, r0, #17	@ 0007a656 400c
.org 0x7a658
	movs r1, #48	@ 0007a658 3021
.org 0x7a65a
	bl 0x129198	@ 0007a65a aef09dfd
.org 0x7a65e
	adds r2, r0, #0	@ 0007a65e 021c
.org 0x7a660
	adds r2, #128	@ 0007a660 8032
.org 0x7a662
	b.n 0x7a69a	@ 0007a662 1ae0
.org 0x7a664
	.byte 0x10,0xe9,0x02,0x02	@ 0007a664 data
.org 0x7a668
	.byte 0xf0,0xdb,0x02,0x02	@ 0007a668 data
.org 0x7a66c
	.byte 0x00,0xe0,0xff,0xff	@ 0007a66c data
.org 0x7a670
	.byte 0x38,0xdc,0x02,0x02	@ 0007a670 data
.org 0x7a674
	.byte 0xfd,0x43,0x03,0x00	@ 0007a674 data
.org 0x7a678
	.byte 0xc3,0x9e,0x26,0x00	@ 0007a678 data
.org 0x7a67c
	ldr r2, [pc, #40]	@ 0007a67c 0a4a
.org 0x7a67e
	ldr r1, [r2, #0]	@ 0007a67e 1168
.org 0x7a680
	ldr r0, [pc, #40]	@ 0007a680 0a48
.org 0x7a682
	muls r0, r1	@ 0007a682 4843
.org 0x7a684
	ldr r1, [pc, #40]	@ 0007a684 0a49
.org 0x7a686
	adds r0, r0, r1	@ 0007a686 4018
.org 0x7a688
	lsls r0, r0, #1	@ 0007a688 4000
.org 0x7a68a
	lsrs r1, r0, #1	@ 0007a68a 4108
.org 0x7a68c
	str r1, [r2, #0]	@ 0007a68c 1160
.org 0x7a68e
	lsrs r0, r0, #17	@ 0007a68e 400c
.org 0x7a690
	movs r1, #48	@ 0007a690 3021
.org 0x7a692
	bl 0x129198	@ 0007a692 aef081fd
.org 0x7a696
	movs r2, #128	@ 0007a696 8022
.org 0x7a698
	subs r2, r2, r0	@ 0007a698 121a
.org 0x7a69a
	lsls r2, r2, #24	@ 0007a69a 1206
.org 0x7a69c
	lsrs r2, r2, #24	@ 0007a69c 120e
.org 0x7a69e
	adds r0, r7, #0	@ 0007a69e 381c
.org 0x7a6a0
	movs r1, #1	@ 0007a6a0 0121
.org 0x7a6a2
	bl 0xe4210	@ 0007a6a2 69f0b5fd
.org 0x7a6a6
	b.n 0x7a6bc	@ 0007a6a6 09e0
.org 0x7a6a8
	.byte 0x38,0xdc,0x02,0x02	@ 0007a6a8 data
.org 0x7a6ac
	.byte 0xfd,0x43,0x03,0x00	@ 0007a6ac data
.org 0x7a6b0
	.byte 0xc3,0x9e,0x26,0x00	@ 0007a6b0 data
.org 0x7a6b4
	adds r1, r7, #0	@ 0007a6b4 391c
.org 0x7a6b6
	adds r1, #214	@ 0007a6b6 d631
.org 0x7a6b8
	movs r0, #1	@ 0007a6b8 0120
.org 0x7a6ba
	strb r0, [r1, #0]	@ 0007a6ba 0870
.org 0x7a6bc
	ldrb r0, [r7, #18]	@ 0007a6bc b87c
.org 0x7a6be
	subs r0, #1	@ 0007a6be 0138
.org 0x7a6c0
	strb r0, [r7, #18]	@ 0007a6c0 b874
.org 0x7a6c2
	lsls r0, r0, #24	@ 0007a6c2 0006
.org 0x7a6c4
	lsrs r0, r0, #24	@ 0007a6c4 000e
.org 0x7a6c6
	cmp r0, #255	@ 0007a6c6 ff28
.org 0x7a6c8
	bne.n 0x7a780	@ 0007a6c8 5ad1
.org 0x7a6ca
	ldr r1, [pc, #76]	@ 0007a6ca 1349
.org 0x7a6cc
	adds r0, r7, #0	@ 0007a6cc 381c
.org 0x7a6ce
	bl 0x1cf00	@ 0007a6ce a2f717fc
.org 0x7a6d2
	movs r0, #169	@ 0007a6d2 a920
.org 0x7a6d4
	lsls r0, r0, #1	@ 0007a6d4 4000
.org 0x7a6d6
	bl 0x2b10	@ 0007a6d6 88f71bfa
.org 0x7a6da
	adds r0, r7, #0	@ 0007a6da 381c
.org 0x7a6dc
	bl 0x1cff0	@ 0007a6dc a2f788fc
.org 0x7a6e0
	ldr r0, [r7, #84]	@ 0007a6e0 786d
.org 0x7a6e2
	ldr r2, [pc, #56]	@ 0007a6e2 0e4a
.org 0x7a6e4
	adds r0, r0, r2	@ 0007a6e4 8018
.org 0x7a6e6
	str r0, [sp, #0]	@ 0007a6e6 0090
.org 0x7a6e8
	ldr r0, [r7, #88]	@ 0007a6e8 b86d
.org 0x7a6ea
	str r0, [sp, #4]	@ 0007a6ea 0190
.org 0x7a6ec
	adds r0, r7, #0	@ 0007a6ec 381c
.org 0x7a6ee
	mov r1, sp	@ 0007a6ee 6946
.org 0x7a6f0
	movs r2, #0	@ 0007a6f0 0022
.org 0x7a6f2
	movs r3, #0	@ 0007a6f2 0023
.org 0x7a6f4
	bl 0xae714	@ 0007a6f4 34f00ef8
.org 0x7a6f8
	adds r0, r7, #0	@ 0007a6f8 381c
.org 0x7a6fa
	mov r1, sp	@ 0007a6fa 6946
.org 0x7a6fc
	movs r2, #0	@ 0007a6fc 0022
.org 0x7a6fe
	movs r3, #1	@ 0007a6fe 0123
.org 0x7a700
	bl 0xae714	@ 0007a700 34f008f8
.org 0x7a704
	adds r0, r7, #0	@ 0007a704 381c
.org 0x7a706
	mov r1, sp	@ 0007a706 6946
.org 0x7a708
	movs r2, #0	@ 0007a708 0022
.org 0x7a70a
	movs r3, #2	@ 0007a70a 0223
.org 0x7a70c
	bl 0xae714	@ 0007a70c 34f002f8
.org 0x7a710
	movs r0, #60	@ 0007a710 3c20
.org 0x7a712
	strb r0, [r7, #18]	@ 0007a712 b874
.org 0x7a714
	b.n 0x7a76a	@ 0007a714 29e0
.org 0x7a716
	.byte 0x00	@ 0007a716 data
.org 0x7a717
	.byte 0x00	@ 0007a717 data
.org 0x7a718
	.byte 0x03,0xb1,0x00,0x00	@ 0007a718 data
.org 0x7a71c
	.byte 0x00,0xf8,0xff,0xff	@ 0007a71c data
.org 0x7a720
	ldrb r0, [r7, #30]	@ 0007a720 b87f
.org 0x7a722
	lsls r0, r0, #8	@ 0007a722 0002
.org 0x7a724
	adds r1, r7, #0	@ 0007a724 391c
.org 0x7a726
	adds r1, #112	@ 0007a726 7031
.org 0x7a728
	ldrb r1, [r1, #0]	@ 0007a728 0978
.org 0x7a72a
	orrs r0, r1	@ 0007a72a 0843
.org 0x7a72c
	ldr r1, [pc, #32]	@ 0007a72c 0849
.org 0x7a72e
	cmp r0, r1	@ 0007a72e 8842
.org 0x7a730
	bne.n 0x7a780	@ 0007a730 26d1
.org 0x7a732
	adds r0, r7, #0	@ 0007a732 381c
.org 0x7a734
	adds r0, #115	@ 0007a734 7330
.org 0x7a736
	ldrb r0, [r0, #0]	@ 0007a736 0078
.org 0x7a738
	cmp r0, #3	@ 0007a738 0328
.org 0x7a73a
	bne.n 0x7a780	@ 0007a73a 21d1
.org 0x7a73c
	subs r1, #2	@ 0007a73c 0239
.org 0x7a73e
	adds r0, r7, #0	@ 0007a73e 381c
