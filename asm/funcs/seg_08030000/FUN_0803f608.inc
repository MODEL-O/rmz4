@ FUN_0803f608  entry 0x0803f608  size 232
.thumb
.org 0x3f608
FUN_0803f608:
	push {r4, r5, r6, lr}	@ 0003f608 70b5
.org 0x3f60a
	adds r5, r0, #0	@ 0003f60a 051c
.org 0x3f60c
	adds r4, r1, #0	@ 0003f60c 0c1c
.org 0x3f60e
	lsls r2, r2, #24	@ 0003f60e 1206
.org 0x3f610
	lsrs r6, r2, #24	@ 0003f610 160e
.org 0x3f612
	ldr r0, [pc, #64]	@ 0003f612 1048
.org 0x3f614
	ldr r0, [r0, #0]	@ 0003f614 0068
.org 0x3f616
	bl 0x5500	@ 0003f616 c5f773ff
.org 0x3f61a
	adds r3, r0, #0	@ 0003f61a 031c
.org 0x3f61c
	cmp r3, #0	@ 0003f61c 002b
.org 0x3f61e
	beq.n 0x3f708	@ 0003f61e 73d0
.org 0x3f620
	adds r0, r5, #0	@ 0003f620 281c
.org 0x3f622
	adds r0, #248	@ 0003f622 f830
.org 0x3f624
	ldrb r0, [r0, #0]	@ 0003f624 0078
.org 0x3f626
	cmp r0, #2	@ 0003f626 0228
.org 0x3f628
	bne.n 0x3f664	@ 0003f628 1cd1
.org 0x3f62a
	ldr r1, [pc, #44]	@ 0003f62a 0b49
.org 0x3f62c
	movs r0, #6	@ 0003f62c 0620
.org 0x3f62e
	strb r0, [r3, #9]	@ 0003f62e 5872
.org 0x3f630
	ldr r0, [r1, #24]	@ 0003f630 8869
.org 0x3f632
	ldr r0, [r0, #0]	@ 0003f632 0068
.org 0x3f634
	str r0, [r3, #20]	@ 0003f634 5861
.org 0x3f636
	ldrb r1, [r3, #11]	@ 0003f636 d97a
.org 0x3f638
	movs r0, #191	@ 0003f638 bf20
.org 0x3f63a
	ands r0, r1	@ 0003f63a 0840
.org 0x3f63c
	strb r0, [r3, #11]	@ 0003f63c d872
.org 0x3f63e
	adds r1, r3, #0	@ 0003f63e 191c
.org 0x3f640
	adds r1, #37	@ 0003f640 2531
.org 0x3f642
	movs r0, #16	@ 0003f642 1020
.org 0x3f644
	strb r0, [r1, #0]	@ 0003f644 0870
.org 0x3f646
	ldr r0, [pc, #20]	@ 0003f646 0548
.org 0x3f648
	ldrh r0, [r0, #0]	@ 0003f648 0088
.org 0x3f64a
	strh r0, [r3, #32]	@ 0003f64a 1884
.org 0x3f64c
	ldr r0, [pc, #16]	@ 0003f64c 0448
.org 0x3f64e
	ldrb r0, [r0, #0]	@ 0003f64e 0078
.org 0x3f650
	b.n 0x3f68a	@ 0003f650 1be0
.org 0x3f652
	.byte 0x00	@ 0003f652 data
.org 0x3f653
	.byte 0x00	@ 0003f653 data
.org 0x3f654
	.byte 0x88,0xed,0x02,0x02	@ 0003f654 data
.org 0x3f658
	.byte 0xf8,0x39,0x85,0x08	@ 0003f658 data
.org 0x3f65c
	.byte 0xfc,0x36,0x85,0x08	@ 0003f65c data
.org 0x3f660
	.byte 0x04,0x37,0x85,0x08	@ 0003f660 data
.org 0x3f664
	ldr r1, [pc, #76]	@ 0003f664 1349
.org 0x3f666
	movs r0, #6	@ 0003f666 0620
.org 0x3f668
	strb r0, [r3, #9]	@ 0003f668 5872
.org 0x3f66a
	ldr r0, [r1, #24]	@ 0003f66a 8869
.org 0x3f66c
	ldr r0, [r0, #0]	@ 0003f66c 0068
.org 0x3f66e
	str r0, [r3, #20]	@ 0003f66e 5861
.org 0x3f670
	ldrb r1, [r3, #11]	@ 0003f670 d97a
.org 0x3f672
	movs r0, #191	@ 0003f672 bf20
.org 0x3f674
	ands r0, r1	@ 0003f674 0840
.org 0x3f676
	strb r0, [r3, #11]	@ 0003f676 d872
.org 0x3f678
	adds r1, r3, #0	@ 0003f678 191c
.org 0x3f67a
	adds r1, #37	@ 0003f67a 2531
.org 0x3f67c
	movs r0, #16	@ 0003f67c 1020
.org 0x3f67e
	strb r0, [r1, #0]	@ 0003f67e 0870
.org 0x3f680
	ldr r0, [pc, #52]	@ 0003f680 0d48
.org 0x3f682
	ldrh r0, [r0, #2]	@ 0003f682 4088
.org 0x3f684
	strh r0, [r3, #32]	@ 0003f684 1884
.org 0x3f686
	ldr r0, [pc, #52]	@ 0003f686 0d48
.org 0x3f688
	ldrb r0, [r0, #1]	@ 0003f688 4078
.org 0x3f68a
	subs r1, #3	@ 0003f68a 0339
.org 0x3f68c
	strb r0, [r1, #0]	@ 0003f68c 0870
.org 0x3f68e
	str r4, [r3, #40]	@ 0003f68e 9c62
.org 0x3f690
	str r5, [r3, #44]	@ 0003f690 dd62
.org 0x3f692
	movs r0, #0	@ 0003f692 0020
.org 0x3f694
	strb r0, [r3, #16]	@ 0003f694 1874
.org 0x3f696
	strb r0, [r3, #17]	@ 0003f696 5874
.org 0x3f698
	adds r0, r3, #0	@ 0003f698 181c
.org 0x3f69a
	adds r0, #189	@ 0003f69a bd30
.org 0x3f69c
	strb r6, [r0, #0]	@ 0003f69c 0670
.org 0x3f69e
	ldrb r0, [r4, #10]	@ 0003f69e a07a
.org 0x3f6a0
	lsrs r2, r0, #4	@ 0003f6a0 0209
.org 0x3f6a2
	movs r0, #1	@ 0003f6a2 0120
.org 0x3f6a4
	ands r2, r0	@ 0003f6a4 0240
.org 0x3f6a6
	cmp r2, #0	@ 0003f6a6 002a
.org 0x3f6a8
	beq.n 0x3f6c0	@ 0003f6a8 0ad0
.org 0x3f6aa
	ldrb r0, [r3, #10]	@ 0003f6aa 987a
.org 0x3f6ac
	movs r1, #16	@ 0003f6ac 1021
.org 0x3f6ae
	orrs r0, r1	@ 0003f6ae 0843
.org 0x3f6b0
	b.n 0x3f6c6	@ 0003f6b0 09e0
.org 0x3f6b2
	.byte 0x00	@ 0003f6b2 data
.org 0x3f6b3
	.byte 0x00	@ 0003f6b3 data
.org 0x3f6b4
	.byte 0xf8,0x39,0x85,0x08	@ 0003f6b4 data
.org 0x3f6b8
	.byte 0xfc,0x36,0x85,0x08	@ 0003f6b8 data
.org 0x3f6bc
	.byte 0x04,0x37,0x85,0x08	@ 0003f6bc data
.org 0x3f6c0
	ldrb r1, [r3, #10]	@ 0003f6c0 997a
.org 0x3f6c2
	movs r0, #239	@ 0003f6c2 ef20
.org 0x3f6c4
	ands r0, r1	@ 0003f6c4 0840
.org 0x3f6c6
	strb r0, [r3, #10]	@ 0003f6c6 9872
.org 0x3f6c8
	adds r1, r2, #0	@ 0003f6c8 111c
.org 0x3f6ca
	adds r0, r3, #0	@ 0003f6ca 181c
.org 0x3f6cc
	adds r0, #76	@ 0003f6cc 4c30
.org 0x3f6ce
	strb r1, [r0, #0]	@ 0003f6ce 0170
.org 0x3f6d0
	movs r0, #74	@ 0003f6d0 4a20
.org 0x3f6d2
	adds r0, r0, r3	@ 0003f6d2 c018
.org 0x3f6d4
	mov ip, r0	@ 0003f6d4 8446
.org 0x3f6d6
	lsls r1, r1, #4	@ 0003f6d6 0901
.org 0x3f6d8
	ldrb r2, [r0, #0]	@ 0003f6d8 0278
.org 0x3f6da
	movs r0, #17	@ 0003f6da 1120
.org 0x3f6dc
	negs r0, r0	@ 0003f6dc 4042
.org 0x3f6de
	ands r0, r2	@ 0003f6de 1040
.org 0x3f6e0
	orrs r0, r1	@ 0003f6e0 0843
.org 0x3f6e2
	mov r1, ip	@ 0003f6e2 6146
.org 0x3f6e4
	strb r0, [r1, #0]	@ 0003f6e4 0870
.org 0x3f6e6
	ldrb r1, [r3, #10]	@ 0003f6e6 997a
.org 0x3f6e8
	movs r0, #16	@ 0003f6e8 1020
.org 0x3f6ea
	ands r0, r1	@ 0003f6ea 0840
.org 0x3f6ec
	cmp r0, #0	@ 0003f6ec 0028
.org 0x3f6ee
	beq.n 0x3f6f8	@ 0003f6ee 03d0
