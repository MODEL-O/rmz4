@ FUN_0807f564  entry 0x0807f564  size 286
.thumb
.org 0x7f564
FUN_0807f564:
	push {r4, r5, lr}	@ 0007f564 30b5
.org 0x7f566
	adds r4, r0, #0	@ 0007f566 041c
.org 0x7f568
	ldrb r5, [r4, #14]	@ 0007f568 a57b
.org 0x7f56a
	cmp r5, #0	@ 0007f56a 002d
.org 0x7f56c
	bne.n 0x7f594	@ 0007f56c 12d1
.org 0x7f56e
	ldr r1, [pc, #120]	@ 0007f56e 1e49
.org 0x7f570
	bl 0x1cf00	@ 0007f570 9df7c6fc
.org 0x7f574
	adds r0, r4, #0	@ 0007f574 201c
.org 0x7f576
	adds r0, #116	@ 0007f576 7430
.org 0x7f578
	ldr r1, [pc, #112]	@ 0007f578 1c49
.org 0x7f57a
	bl 0x5784	@ 0007f57a 86f703f9
.org 0x7f57e
	adds r0, r4, #0	@ 0007f57e 201c
.org 0x7f580
	adds r0, #212	@ 0007f580 d430
.org 0x7f582
	ldrb r0, [r0, #0]	@ 0007f582 0078
.org 0x7f584
	adds r1, r4, #0	@ 0007f584 211c
.org 0x7f586
	adds r1, #213	@ 0007f586 d531
.org 0x7f588
	strb r0, [r1, #0]	@ 0007f588 0870
.org 0x7f58a
	movs r0, #32	@ 0007f58a 2020
.org 0x7f58c
	strb r0, [r4, #18]	@ 0007f58c a074
.org 0x7f58e
	strb r5, [r4, #15]	@ 0007f58e e573
.org 0x7f590
	movs r0, #2	@ 0007f590 0220
.org 0x7f592
	strb r0, [r4, #14]	@ 0007f592 a073
.org 0x7f594
	adds r0, r4, #0	@ 0007f594 201c
.org 0x7f596
	bl 0x1cff0	@ 0007f596 9df72bfd
.org 0x7f59a
	ldrb r5, [r4, #15]	@ 0007f59a e57b
.org 0x7f59c
	cmp r5, #0	@ 0007f59c 002d
.org 0x7f59e
	bne.n 0x7f5f8	@ 0007f59e 2bd1
.org 0x7f5a0
	ldrb r0, [r4, #18]	@ 0007f5a0 a07c
.org 0x7f5a2
	subs r0, #1	@ 0007f5a2 0138
.org 0x7f5a4
	strb r0, [r4, #18]	@ 0007f5a4 a074
.org 0x7f5a6
	lsls r0, r0, #24	@ 0007f5a6 0006
.org 0x7f5a8
	lsrs r0, r0, #24	@ 0007f5a8 000e
.org 0x7f5aa
	cmp r0, #255	@ 0007f5aa ff28
.org 0x7f5ac
	bne.n 0x7f69a	@ 0007f5ac 75d1
.org 0x7f5ae
	ldr r1, [pc, #64]	@ 0007f5ae 1049
.org 0x7f5b0
	adds r0, r4, #0	@ 0007f5b0 201c
.org 0x7f5b2
	bl 0x1cf00	@ 0007f5b2 9df7a5fc
.org 0x7f5b6
	adds r0, r4, #0	@ 0007f5b6 201c
.org 0x7f5b8
	bl 0x1cff0	@ 0007f5b8 9df71afd
.org 0x7f5bc
	adds r0, r4, #0	@ 0007f5bc 201c
.org 0x7f5be
	movs r1, #1	@ 0007f5be 0121
.org 0x7f5c0
	movs r2, #0	@ 0007f5c0 0022
.org 0x7f5c2
	bl 0xcee84	@ 0007f5c2 4ff05ffc
.org 0x7f5c6
	adds r0, r4, #0	@ 0007f5c6 201c
.org 0x7f5c8
	movs r1, #1	@ 0007f5c8 0121
.org 0x7f5ca
	movs r2, #1	@ 0007f5ca 0122
.org 0x7f5cc
	bl 0xcee84	@ 0007f5cc 4ff05afc
.org 0x7f5d0
	adds r0, r4, #0	@ 0007f5d0 201c
.org 0x7f5d2
	adds r0, #116	@ 0007f5d2 7430
.org 0x7f5d4
	ldr r1, [pc, #28]	@ 0007f5d4 0749
.org 0x7f5d6
	bl 0x5784	@ 0007f5d6 86f7d5f8
.org 0x7f5da
	movs r0, #64	@ 0007f5da 4020
.org 0x7f5dc
	strb r0, [r4, #18]	@ 0007f5dc a074
.org 0x7f5de
	movs r0, #177	@ 0007f5de b120
.org 0x7f5e0
	lsls r0, r0, #1	@ 0007f5e0 4000
.org 0x7f5e2
	bl 0x2b10	@ 0007f5e2 83f795fa
.org 0x7f5e6
	b.n 0x7f64a	@ 0007f5e6 30e0
.org 0x7f5e8
	.byte 0x02,0xc8,0x00,0x00	@ 0007f5e8 data
.org 0x7f5ec
	.byte 0xf4,0xd8,0x85,0x08	@ 0007f5ec data
.org 0x7f5f0
	.byte 0x03,0xc8,0x00,0x00	@ 0007f5f0 data
.org 0x7f5f4
	.byte 0xc4,0xd8,0x85,0x08	@ 0007f5f4 data
.org 0x7f5f8
	cmp r5, #1	@ 0007f5f8 012d
.org 0x7f5fa
	bne.n 0x7f660	@ 0007f5fa 31d1
.org 0x7f5fc
	ldr r2, [pc, #84]	@ 0007f5fc 154a
.org 0x7f5fe
	adds r3, r4, #0	@ 0007f5fe 231c
.org 0x7f600
	adds r3, #212	@ 0007f600 d433
.org 0x7f602
	ldrb r0, [r3, #0]	@ 0007f602 1878
.org 0x7f604
	lsls r0, r0, #1	@ 0007f604 4000
.org 0x7f606
	adds r0, r0, r2	@ 0007f606 8018
.org 0x7f608
	ldrb r0, [r0, #0]	@ 0007f608 0078
.org 0x7f60a
	adds r1, r4, #0	@ 0007f60a 211c
.org 0x7f60c
	adds r1, #216	@ 0007f60c d831
.org 0x7f60e
	adds r0, r1, r0	@ 0007f60e 0818
.org 0x7f610
	strb r5, [r0, #0]	@ 0007f610 0570
.org 0x7f612
	ldrb r0, [r3, #0]	@ 0007f612 1878
.org 0x7f614
	lsls r0, r0, #1	@ 0007f614 4000
.org 0x7f616
	adds r2, #1	@ 0007f616 0132
.org 0x7f618
	adds r0, r0, r2	@ 0007f618 8018
.org 0x7f61a
	ldrb r0, [r0, #0]	@ 0007f61a 0078
.org 0x7f61c
	adds r1, r1, r0	@ 0007f61c 0918
.org 0x7f61e
	strb r5, [r1, #0]	@ 0007f61e 0d70
.org 0x7f620
	ldrb r0, [r4, #18]	@ 0007f620 a07c
.org 0x7f622
	subs r0, #1	@ 0007f622 0138
.org 0x7f624
	strb r0, [r4, #18]	@ 0007f624 a074
.org 0x7f626
	lsls r0, r0, #24	@ 0007f626 0006
.org 0x7f628
	lsrs r0, r0, #24	@ 0007f628 000e
.org 0x7f62a
	cmp r0, #255	@ 0007f62a ff28
.org 0x7f62c
	bne.n 0x7f69a	@ 0007f62c 35d1
.org 0x7f62e
	ldr r1, [pc, #40]	@ 0007f62e 0a49
.org 0x7f630
	adds r0, r4, #0	@ 0007f630 201c
.org 0x7f632
	bl 0x1cf00	@ 0007f632 9df765fc
.org 0x7f636
	adds r0, r4, #0	@ 0007f636 201c
.org 0x7f638
	bl 0x1cff0	@ 0007f638 9df7dafc
.org 0x7f63c
	adds r0, r4, #0	@ 0007f63c 201c
.org 0x7f63e
	adds r0, #116	@ 0007f63e 7430
.org 0x7f640
	ldr r1, [pc, #24]	@ 0007f640 0649
.org 0x7f642
	bl 0x5784	@ 0007f642 86f79ff8
.org 0x7f646
	movs r0, #32	@ 0007f646 2020
.org 0x7f648
	strb r0, [r4, #18]	@ 0007f648 a074
.org 0x7f64a
	ldrb r0, [r4, #15]	@ 0007f64a e07b
.org 0x7f64c
	adds r0, #1	@ 0007f64c 0130
.org 0x7f64e
	strb r0, [r4, #15]	@ 0007f64e e073
.org 0x7f650
	b.n 0x7f69a	@ 0007f650 23e0
.org 0x7f652
	.byte 0x00	@ 0007f652 data
.org 0x7f653
	.byte 0x00	@ 0007f653 data
.org 0x7f654
	.byte 0x32,0xdb,0x85,0x08	@ 0007f654 data
.org 0x7f658
	.byte 0x04,0xc8,0x00,0x00	@ 0007f658 data
.org 0x7f65c
	.byte 0xf4,0xd8,0x85,0x08	@ 0007f65c data
.org 0x7f660
	ldr r2, [pc, #60]	@ 0007f660 0f4a
.org 0x7f662
	adds r3, r4, #0	@ 0007f662 231c
.org 0x7f664
	adds r3, #212	@ 0007f664 d433
.org 0x7f666
	ldrb r0, [r3, #0]	@ 0007f666 1878
.org 0x7f668
	lsls r0, r0, #1	@ 0007f668 4000
.org 0x7f66a
	adds r0, r0, r2	@ 0007f66a 8018
.org 0x7f66c
	ldrb r0, [r0, #0]	@ 0007f66c 0078
.org 0x7f66e
	adds r1, r4, #0	@ 0007f66e 211c
.org 0x7f670
	adds r1, #216	@ 0007f670 d831
.org 0x7f672
	adds r0, r1, r0	@ 0007f672 0818
.org 0x7f674
	movs r5, #0	@ 0007f674 0025
.org 0x7f676
	strb r5, [r0, #0]	@ 0007f676 0570
.org 0x7f678
	ldrb r0, [r3, #0]	@ 0007f678 1878
.org 0x7f67a
	lsls r0, r0, #1	@ 0007f67a 4000
.org 0x7f67c
	adds r2, #1	@ 0007f67c 0132
.org 0x7f67e
	adds r0, r0, r2	@ 0007f67e 8018
.org 0x7f680
	ldrb r0, [r0, #0]	@ 0007f680 0078
