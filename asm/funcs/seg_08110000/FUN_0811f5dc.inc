@ FUN_0811f5dc  entry 0x0811f5dc  size 350
.thumb
.org 0x11f5dc
FUN_0811f5dc:
	push {r4, r5, r6, lr}	@ 0011f5dc 70b5
.org 0x11f5de
	adds r6, r0, #0	@ 0011f5de 061c
.org 0x11f5e0
	ldr r1, [pc, #28]	@ 0011f5e0 0749
.org 0x11f5e2
	adds r0, r6, r1	@ 0011f5e2 7018
.org 0x11f5e4
	ldr r5, [r0, #0]	@ 0011f5e4 0568
.org 0x11f5e6
	ldr r2, [pc, #28]	@ 0011f5e6 074a
.org 0x11f5e8
	ldrh r1, [r2, #4]	@ 0011f5e8 9188
.org 0x11f5ea
	movs r0, #2	@ 0011f5ea 0220
.org 0x11f5ec
	ands r0, r1	@ 0011f5ec 0840
.org 0x11f5ee
	cmp r0, #0	@ 0011f5ee 0028
.org 0x11f5f0
	beq.n 0x11f608	@ 0011f5f0 0ad0
.org 0x11f5f2
	movs r0, #3	@ 0011f5f2 0320
.org 0x11f5f4
	bl 0x2b10	@ 0011f5f4 e3f68cfa
.org 0x11f5f8
	movs r0, #0	@ 0011f5f8 0020
.org 0x11f5fa
	strb r0, [r6, #2]	@ 0011f5fa b070
.org 0x11f5fc
	strb r0, [r6, #3]	@ 0011f5fc f070
.org 0x11f5fe
	b.n 0x11f762	@ 0011f5fe b0e0
.org 0x11f600
	.byte 0xa8,0x63,0x00,0x00	@ 0011f600 data
.org 0x11f604
	.byte 0x60,0x07,0x00,0x02	@ 0011f604 data
.org 0x11f608
	ldrh r1, [r2, #6]	@ 0011f608 d188
.org 0x11f60a
	movs r0, #64	@ 0011f60a 4020
.org 0x11f60c
	ands r0, r1	@ 0011f60c 0840
.org 0x11f60e
	cmp r0, #0	@ 0011f60e 0028
.org 0x11f610
	beq.n 0x11f628	@ 0011f610 0ad0
.org 0x11f612
	ldr r0, [pc, #16]	@ 0011f612 0448
.org 0x11f614
	adds r4, r6, r0	@ 0011f614 3418
.org 0x11f616
	ldrb r0, [r4, #3]	@ 0011f616 e078
.org 0x11f618
	adds r0, #2	@ 0011f618 0230
.org 0x11f61a
	movs r1, #3	@ 0011f61a 0321
.org 0x11f61c
	bl 0x129050	@ 0011f61c 09f018fd
.org 0x11f620
	strb r0, [r4, #3]	@ 0011f620 e070
.org 0x11f622
	b.n 0x11f6c8	@ 0011f622 51e0
.org 0x11f624
	.byte 0xcc,0x0d,0x00,0x00	@ 0011f624 data
.org 0x11f628
	movs r0, #128	@ 0011f628 8020
.org 0x11f62a
	ands r0, r1	@ 0011f62a 0840
.org 0x11f62c
	cmp r0, #0	@ 0011f62c 0028
.org 0x11f62e
	beq.n 0x11f648	@ 0011f62e 0bd0
.org 0x11f630
	ldr r1, [pc, #16]	@ 0011f630 0449
.org 0x11f632
	adds r4, r6, r1	@ 0011f632 7418
.org 0x11f634
	ldrb r0, [r4, #3]	@ 0011f634 e078
.org 0x11f636
	adds r0, #1	@ 0011f636 0130
.org 0x11f638
	movs r1, #3	@ 0011f638 0321
.org 0x11f63a
	bl 0x129050	@ 0011f63a 09f009fd
.org 0x11f63e
	strb r0, [r4, #3]	@ 0011f63e e070
.org 0x11f640
	b.n 0x11f6c8	@ 0011f640 42e0
.org 0x11f642
	.byte 0x00	@ 0011f642 data
.org 0x11f643
	.byte 0x00	@ 0011f643 data
.org 0x11f644
	.byte 0xcc,0x0d,0x00,0x00	@ 0011f644 data
.org 0x11f648
	movs r0, #32	@ 0011f648 2020
.org 0x11f64a
	ands r0, r1	@ 0011f64a 0840
.org 0x11f64c
	cmp r0, #0	@ 0011f64c 0028
.org 0x11f64e
	beq.n 0x11f694	@ 0011f64e 21d0
.org 0x11f650
	ldr r1, [pc, #24]	@ 0011f650 0649
.org 0x11f652
	adds r0, r6, r1	@ 0011f652 7018
.org 0x11f654
	ldrb r0, [r0, #3]	@ 0011f654 c078
.org 0x11f656
	cmp r0, #0	@ 0011f656 0028
.org 0x11f658
	bne.n 0x11f670	@ 0011f658 0ad1
.org 0x11f65a
	adds r1, r5, #0	@ 0011f65a 291c
.org 0x11f65c
	adds r1, #241	@ 0011f65c f131
.org 0x11f65e
	ldrb r0, [r1, #0]	@ 0011f65e 0878
.org 0x11f660
	cmp r0, #0	@ 0011f660 0028
.org 0x11f662
	beq.n 0x11f6ea	@ 0011f662 42d0
.org 0x11f664
	subs r0, #1	@ 0011f664 0138
.org 0x11f666
	strb r0, [r1, #0]	@ 0011f666 0870
.org 0x11f668
	b.n 0x11f6c8	@ 0011f668 2ee0
.org 0x11f66a
	.byte 0x00	@ 0011f66a data
.org 0x11f66b
	.byte 0x00	@ 0011f66b data
.org 0x11f66c
	.byte 0xcc,0x0d,0x00,0x00	@ 0011f66c data
.org 0x11f670
	cmp r0, #1	@ 0011f670 0128
.org 0x11f672
	bne.n 0x11f684	@ 0011f672 07d1
.org 0x11f674
	adds r1, r5, #0	@ 0011f674 291c
.org 0x11f676
	adds r1, #242	@ 0011f676 f231
.org 0x11f678
	ldrb r0, [r1, #0]	@ 0011f678 0878
.org 0x11f67a
	cmp r0, #0	@ 0011f67a 0028
.org 0x11f67c
	beq.n 0x11f6ea	@ 0011f67c 35d0
.org 0x11f67e
	subs r0, #1	@ 0011f67e 0138
.org 0x11f680
	strb r0, [r1, #0]	@ 0011f680 0870
.org 0x11f682
	b.n 0x11f6c8	@ 0011f682 21e0
.org 0x11f684
	adds r1, r5, #0	@ 0011f684 291c
.org 0x11f686
	adds r1, #243	@ 0011f686 f331
.org 0x11f688
	ldrb r0, [r1, #0]	@ 0011f688 0878
.org 0x11f68a
	cmp r0, #0	@ 0011f68a 0028
.org 0x11f68c
	beq.n 0x11f6ea	@ 0011f68c 2dd0
.org 0x11f68e
	subs r0, #1	@ 0011f68e 0138
.org 0x11f690
	strb r0, [r1, #0]	@ 0011f690 0870
.org 0x11f692
	b.n 0x11f6c8	@ 0011f692 19e0
.org 0x11f694
	movs r0, #16	@ 0011f694 1020
.org 0x11f696
	ands r0, r1	@ 0011f696 0840
.org 0x11f698
	cmp r0, #0	@ 0011f698 0028
.org 0x11f69a
	beq.n 0x11f6ea	@ 0011f69a 26d0
.org 0x11f69c
	ldr r1, [pc, #12]	@ 0011f69c 0349
.org 0x11f69e
	adds r0, r6, r1	@ 0011f69e 7018
.org 0x11f6a0
	ldrb r0, [r0, #3]	@ 0011f6a0 c078
.org 0x11f6a2
	cmp r0, #0	@ 0011f6a2 0028
.org 0x11f6a4
	bne.n 0x11f6b0	@ 0011f6a4 04d1
.org 0x11f6a6
	adds r2, r5, #0	@ 0011f6a6 2a1c
.org 0x11f6a8
	adds r2, #241	@ 0011f6a8 f132
.org 0x11f6aa
	b.n 0x11f6b8	@ 0011f6aa 05e0
.org 0x11f6ac
	.byte 0xcc,0x0d,0x00,0x00	@ 0011f6ac data
.org 0x11f6b0
	cmp r0, #1	@ 0011f6b0 0128
.org 0x11f6b2
	bne.n 0x11f6d0	@ 0011f6b2 0dd1
.org 0x11f6b4
	adds r2, r5, #0	@ 0011f6b4 2a1c
.org 0x11f6b6
	adds r2, #242	@ 0011f6b6 f232
.org 0x11f6b8
	adds r0, r5, #0	@ 0011f6b8 281c
.org 0x11f6ba
	adds r0, #240	@ 0011f6ba f030
.org 0x11f6bc
	ldrb r1, [r2, #0]	@ 0011f6bc 1178
.org 0x11f6be
	ldrb r0, [r0, #0]	@ 0011f6be 0078
.org 0x11f6c0
	cmp r1, r0	@ 0011f6c0 8142
.org 0x11f6c2
	bcs.n 0x11f6ea	@ 0011f6c2 12d2
.org 0x11f6c4
	adds r0, r1, #1	@ 0011f6c4 481c
.org 0x11f6c6
	strb r0, [r2, #0]	@ 0011f6c6 1070
.org 0x11f6c8
	movs r0, #1	@ 0011f6c8 0120
.org 0x11f6ca
	bl 0x2b10	@ 0011f6ca e3f621fa
.org 0x11f6ce
	b.n 0x11f6ea	@ 0011f6ce 0ce0
.org 0x11f6d0
	adds r2, r5, #0	@ 0011f6d0 2a1c
.org 0x11f6d2
	adds r2, #243	@ 0011f6d2 f332
.org 0x11f6d4
	adds r0, r5, #0	@ 0011f6d4 281c
.org 0x11f6d6
	adds r0, #240	@ 0011f6d6 f030
.org 0x11f6d8
	ldrb r1, [r2, #0]	@ 0011f6d8 1178
.org 0x11f6da
	ldrb r0, [r0, #0]	@ 0011f6da 0078
.org 0x11f6dc
	cmp r1, r0	@ 0011f6dc 8142
.org 0x11f6de
	bcs.n 0x11f6ea	@ 0011f6de 04d2
.org 0x11f6e0
	adds r0, r1, #1	@ 0011f6e0 481c
.org 0x11f6e2
	strb r0, [r2, #0]	@ 0011f6e2 1070
.org 0x11f6e4
	movs r0, #1	@ 0011f6e4 0120
.org 0x11f6e6
	bl 0x2b10	@ 0011f6e6 e3f613fa
.org 0x11f6ea
	ldr r1, [pc, #20]	@ 0011f6ea 0549
.org 0x11f6ec
	adds r0, r6, r1	@ 0011f6ec 7018
.org 0x11f6ee
	ldrb r0, [r0, #3]	@ 0011f6ee c078
.org 0x11f6f0
	cmp r0, #0	@ 0011f6f0 0028
.org 0x11f6f2
	bne.n 0x11f708	@ 0011f6f2 09d1
.org 0x11f6f4
	ldr r1, [pc, #12]	@ 0011f6f4 0349
.org 0x11f6f6
	adds r0, r5, #0	@ 0011f6f6 281c
.org 0x11f6f8
	adds r0, #241	@ 0011f6f8 f130
.org 0x11f6fa
	ldrb r0, [r0, #0]	@ 0011f6fa 0078
.org 0x11f6fc
	adds r0, #140	@ 0011f6fc 8c30
.org 0x11f6fe
	b.n 0x11f716	@ 0011f6fe 0ae0
.org 0x11f700
	.byte 0xcc,0x0d,0x00,0x00	@ 0011f700 data
.org 0x11f704
	.byte 0xf8,0xcf,0x86,0x08	@ 0011f704 data
.org 0x11f708
	cmp r0, #1	@ 0011f708 0128
.org 0x11f70a
	bne.n 0x11f734	@ 0011f70a 13d1
.org 0x11f70c
	ldr r1, [pc, #28]	@ 0011f70c 0749
.org 0x11f70e
	adds r0, r5, #0	@ 0011f70e 281c
.org 0x11f710
	adds r0, #242	@ 0011f710 f230
.org 0x11f712
	ldrb r0, [r0, #0]	@ 0011f712 0078
.org 0x11f714
	adds r0, #150	@ 0011f714 9630
.org 0x11f716
	lsls r0, r0, #1	@ 0011f716 4000
.org 0x11f718
	adds r0, r0, r1	@ 0011f718 4018
.org 0x11f71a
	ldrh r0, [r0, #0]	@ 0011f71a 0088
.org 0x11f71c
	ldr r1, [pc, #16]	@ 0011f71c 0449
.org 0x11f71e
	adds r0, r0, r1	@ 0011f71e 4018
.org 0x11f720
	movs r1, #17	@ 0011f720 1121
.org 0x11f722
	movs r2, #7	@ 0011f722 0722
.org 0x11f724
	bl 0x10d85c	@ 0011f724 eef79af8
.org 0x11f728
	b.n 0x11f750	@ 0011f728 12e0
.org 0x11f72a
	.byte 0x00	@ 0011f72a data
.org 0x11f72b
	.byte 0x00	@ 0011f72b data
.org 0x11f72c
	.byte 0xf8,0xcf,0x86,0x08	@ 0011f72c data
.org 0x11f730
	.byte 0x5f,0x0e,0x01,0x09	@ 0011f730 data
.org 0x11f734
	ldr r1, [pc, #48]	@ 0011f734 0c49
.org 0x11f736
	adds r0, r5, #0	@ 0011f736 281c
.org 0x11f738
	adds r0, #243	@ 0011f738 f330
