@ FUN_081195d4  entry 0x081195d4  size 544
.thumb
.org 0x1195d4
FUN_081195d4:
	push {r4, r5, r6, r7, lr}	@ 001195d4 f0b5
.org 0x1195d6
	mov r7, r8	@ 001195d6 4746
.org 0x1195d8
	push {r7}	@ 001195d8 80b4
.org 0x1195da
	adds r6, r0, #0	@ 001195da 061c
.org 0x1195dc
	ldr r1, [pc, #28]	@ 001195dc 0749
.org 0x1195de
	adds r0, r6, r1	@ 001195de 7018
.org 0x1195e0
	ldr r0, [r0, #0]	@ 001195e0 0068
.org 0x1195e2
	mov r8, r0	@ 001195e2 8046
.org 0x1195e4
	ldr r2, [pc, #24]	@ 001195e4 064a
.org 0x1195e6
	adds r3, r6, r2	@ 001195e6 b318
.org 0x1195e8
	ldr r5, [pc, #24]	@ 001195e8 064d
.org 0x1195ea
	adds r1, r6, r5	@ 001195ea 7119
.org 0x1195ec
	ldrb r0, [r1, #0]	@ 001195ec 0878
.org 0x1195ee
	cmp r0, #1	@ 001195ee 0128
.org 0x1195f0
	beq.n 0x119616	@ 001195f0 11d0
.org 0x1195f2
	cmp r0, #1	@ 001195f2 0128
.org 0x1195f4
	bgt.n 0x119608	@ 001195f4 08dc
.org 0x1195f6
	cmp r0, #0	@ 001195f6 0028
.org 0x1195f8
	beq.n 0x11960e	@ 001195f8 09d0
.org 0x1195fa
	b.n 0x1196bc	@ 001195fa 5fe0
.org 0x1195fc
	.byte 0xa8,0x63,0x00,0x00	@ 001195fc data
.org 0x119600
	.byte 0xcc,0x0d,0x00,0x00	@ 00119600 data
.org 0x119604
	.byte 0xf7,0x0d,0x00,0x00	@ 00119604 data
.org 0x119608
	cmp r0, #2	@ 00119608 0228
.org 0x11960a
	beq.n 0x119700	@ 0011960a 79d0
.org 0x11960c
	b.n 0x1196bc	@ 0011960c 56e0
.org 0x11960e
	strb r0, [r3, #1]	@ 0011960e 5870
.org 0x119610
	ldrb r0, [r1, #0]	@ 00119610 0878
.org 0x119612
	adds r0, #1	@ 00119612 0130
.org 0x119614
	strb r0, [r1, #0]	@ 00119614 0870
.org 0x119616
	ldr r0, [pc, #48]	@ 00119616 0c48
.org 0x119618
	ldrh r1, [r0, #6]	@ 00119618 c188
.org 0x11961a
	movs r0, #16	@ 0011961a 1020
.org 0x11961c
	ands r0, r1	@ 0011961c 0840
.org 0x11961e
	cmp r0, #0	@ 0011961e 0028
.org 0x119620
	beq.n 0x119650	@ 00119620 16d0
.org 0x119622
	ldr r0, [pc, #40]	@ 00119622 0a48
.org 0x119624
	adds r5, r6, r0	@ 00119624 3518
.org 0x119626
	ldrb r4, [r5, #1]	@ 00119626 6c78
.org 0x119628
	adds r0, r6, #0	@ 00119628 301c
.org 0x11962a
	bl 0x119978	@ 0011962a 00f0a5f9
.org 0x11962e
	lsls r0, r0, #24	@ 0011962e 0006
.org 0x119630
	lsrs r0, r0, #24	@ 00119630 000e
.org 0x119632
	subs r0, #1	@ 00119632 0138
.org 0x119634
	cmp r4, r0	@ 00119634 8442
.org 0x119636
	bge.n 0x11966e	@ 00119636 1ada
.org 0x119638
	movs r0, #1	@ 00119638 0120
.org 0x11963a
	bl 0x2b10	@ 0011963a e9f669fa
.org 0x11963e
	ldrb r0, [r5, #1]	@ 0011963e 6878
.org 0x119640
	adds r0, #1	@ 00119640 0130
.org 0x119642
	strb r0, [r5, #1]	@ 00119642 6870
.org 0x119644
	b.n 0x11966e	@ 00119644 13e0
.org 0x119646
	.byte 0x00	@ 00119646 data
.org 0x119647
	.byte 0x00	@ 00119647 data
.org 0x119648
	.byte 0x60,0x07,0x00,0x02	@ 00119648 data
.org 0x11964c
	.byte 0xcc,0x0d,0x00,0x00	@ 0011964c data
.org 0x119650
	movs r0, #32	@ 00119650 2020
.org 0x119652
	ands r0, r1	@ 00119652 0840
.org 0x119654
	cmp r0, #0	@ 00119654 0028
.org 0x119656
	beq.n 0x11966e	@ 00119656 0ad0
.org 0x119658
	ldr r1, [pc, #56]	@ 00119658 0e49
.org 0x11965a
	adds r4, r6, r1	@ 0011965a 7418
.org 0x11965c
	ldrb r0, [r4, #1]	@ 0011965c 6078
.org 0x11965e
	cmp r0, #0	@ 0011965e 0028
.org 0x119660
	beq.n 0x11966e	@ 00119660 05d0
.org 0x119662
	movs r0, #1	@ 00119662 0120
.org 0x119664
	bl 0x2b10	@ 00119664 e9f654fa
.org 0x119668
	ldrb r0, [r4, #1]	@ 00119668 6078
.org 0x11966a
	subs r0, #1	@ 0011966a 0138
.org 0x11966c
	strb r0, [r4, #1]	@ 0011966c 6070
.org 0x11966e
	ldr r5, [pc, #36]	@ 0011966e 094d
.org 0x119670
	adds r2, r6, r5	@ 00119670 7219
.org 0x119672
	ldr r3, [r2, #32]	@ 00119672 136a
.org 0x119674
	ldrb r1, [r2, #1]	@ 00119674 5178
.org 0x119676
	lsls r0, r1, #1	@ 00119676 4800
.org 0x119678
	adds r0, r0, r1	@ 00119678 4018
.org 0x11967a
	lsls r0, r0, #11	@ 0011967a c002
.org 0x11967c
	movs r1, #128	@ 0011967c 8021
.org 0x11967e
	lsls r1, r1, #8	@ 0011967e 0902
.org 0x119680
	adds r0, r0, r1	@ 00119680 4018
.org 0x119682
	str r0, [r3, #116]	@ 00119682 5867
.org 0x119684
	ldrb r1, [r2, #1]	@ 00119684 5178
.org 0x119686
	movs r0, #1	@ 00119686 0120
.org 0x119688
	ands r0, r1	@ 00119688 0840
.org 0x11968a
	cmp r0, #0	@ 0011968a 0028
.org 0x11968c
	beq.n 0x119698	@ 0011968c 04d0
.org 0x11968e
	movs r0, #176	@ 0011968e b020
.org 0x119690
	lsls r0, r0, #7	@ 00119690 c001
.org 0x119692
	b.n 0x11969c	@ 00119692 03e0
.org 0x119694
	.byte 0xcc,0x0d,0x00,0x00	@ 00119694 data
.org 0x119698
	movs r0, #192	@ 00119698 c020
.org 0x11969a
	lsls r0, r0, #7	@ 0011969a c001
.org 0x11969c
	str r0, [r3, #120]	@ 0011969c 9867
.org 0x11969e
	ldr r0, [pc, #36]	@ 0011969e 0948
.org 0x1196a0
	ldrh r1, [r0, #4]	@ 001196a0 8188
.org 0x1196a2
	movs r4, #1	@ 001196a2 0124
.org 0x1196a4
	ands r4, r1	@ 001196a4 0c40
.org 0x1196a6
	cmp r4, #0	@ 001196a6 002c
.org 0x1196a8
	beq.n 0x1196d0	@ 001196a8 12d0
.org 0x1196aa
	ldr r2, [pc, #28]	@ 001196aa 074a
.org 0x1196ac
	adds r1, r6, r2	@ 001196ac b118
.org 0x1196ae
	ldrb r0, [r1, #0]	@ 001196ae 0878
.org 0x1196b0
	adds r0, #1	@ 001196b0 0130
.org 0x1196b2
	movs r2, #0	@ 001196b2 0022
.org 0x1196b4
	strb r0, [r1, #0]	@ 001196b4 0870
.org 0x1196b6
	ldr r5, [pc, #20]	@ 001196b6 054d
.org 0x1196b8
	adds r0, r6, r5	@ 001196b8 7019
.org 0x1196ba
	strb r2, [r0, #0]	@ 001196ba 0270
.org 0x1196bc
	mov r7, r8	@ 001196bc 4746
.org 0x1196be
	adds r7, #188	@ 001196be bc37
.org 0x1196c0
	b.n 0x1197cc	@ 001196c0 84e0
.org 0x1196c2
	.byte 0x00	@ 001196c2 data
.org 0x1196c3
	.byte 0x00	@ 001196c3 data
.org 0x1196c4
	.byte 0x60,0x07,0x00,0x02	@ 001196c4 data
.org 0x1196c8
	.byte 0xf7,0x0d,0x00,0x00	@ 001196c8 data
.org 0x1196cc
	.byte 0xfa,0x0d,0x00,0x00	@ 001196cc data
.org 0x1196d0
	movs r0, #2	@ 001196d0 0220
.org 0x1196d2
	ands r0, r1	@ 001196d2 0840
.org 0x1196d4
	mov r7, r8	@ 001196d4 4746
.org 0x1196d6
	adds r7, #188	@ 001196d6 bc37
.org 0x1196d8
	cmp r0, #0	@ 001196d8 0028
.org 0x1196da
	beq.n 0x1197cc	@ 001196da 77d0
.org 0x1196dc
	movs r0, #3	@ 001196dc 0320
.org 0x1196de
	bl 0x2b10	@ 001196de e9f617fa
.org 0x1196e2
	ldr r1, [pc, #20]	@ 001196e2 0549
.org 0x1196e4
	adds r0, r6, r1	@ 001196e4 7018
.org 0x1196e6
	ldr r0, [r0, #32]	@ 001196e6 006a
.org 0x1196e8
	str r4, [r0, #116]	@ 001196e8 4467
.org 0x1196ea
	str r4, [r0, #120]	@ 001196ea 8467
.org 0x1196ec
	strb r4, [r6, #3]	@ 001196ec f470
.org 0x1196ee
	ldr r2, [pc, #12]	@ 001196ee 034a
.org 0x1196f0
	adds r0, r6, r2	@ 001196f0 b018
.org 0x1196f2
	strb r4, [r0, #0]	@ 001196f2 0470
.org 0x1196f4
	b.n 0x1197cc	@ 001196f4 6ae0
.org 0x1196f6
	.byte 0x00	@ 001196f6 data
.org 0x1196f7
	.byte 0x00	@ 001196f7 data
.org 0x1196f8
	.byte 0xcc,0x0d,0x00,0x00	@ 001196f8 data
.org 0x1196fc
	.byte 0xf7,0x0d,0x00,0x00	@ 001196fc data
.org 0x119700
	ldr r5, [pc, #100]	@ 00119700 194d
.org 0x119702
	adds r1, r6, r5	@ 00119702 7119
.org 0x119704
	movs r0, #1	@ 00119704 0120
.org 0x119706
	strb r0, [r1, #0]	@ 00119706 0870
.org 0x119708
	movs r2, #0	@ 00119708 0022
.org 0x11970a
	movs r4, #0	@ 0011970a 0024
.org 0x11970c
	mov r0, r8	@ 0011970c 4046
.org 0x11970e
	adds r0, #188	@ 0011970e bc30
.org 0x119710
	ldrb r1, [r0, #0]	@ 00119710 0178
.org 0x119712
	adds r7, r0, #0	@ 00119712 071c
.org 0x119714
	cmp r1, #255	@ 00119714 ff29
.org 0x119716
	beq.n 0x119724	@ 00119716 05d0
.org 0x119718
	ldrb r3, [r3, #1]	@ 00119718 5b78
.org 0x11971a
	cmp r4, r3	@ 0011971a 9c42
.org 0x11971c
	beq.n 0x119742	@ 0011971c 11d0
.org 0x11971e
	adds r0, r4, #1	@ 0011971e 601c
.org 0x119720
	lsls r0, r0, #24	@ 00119720 0006
.org 0x119722
	lsrs r4, r0, #24	@ 00119722 040e
.org 0x119724
	adds r0, r2, #1	@ 00119724 501c
.org 0x119726
	lsls r0, r0, #24	@ 00119726 0006
.org 0x119728
	lsrs r2, r0, #24	@ 00119728 020e
.org 0x11972a
	cmp r2, #3	@ 0011972a 032a
.org 0x11972c
	bhi.n 0x119742	@ 0011972c 09d8
.org 0x11972e
	adds r0, r7, r2	@ 0011972e b818
.org 0x119730
	ldrb r0, [r0, #0]	@ 00119730 0078
.org 0x119732
	cmp r0, #255	@ 00119732 ff28
.org 0x119734
	beq.n 0x119724	@ 00119734 f6d0
.org 0x119736
	ldr r1, [pc, #52]	@ 00119736 0d49
.org 0x119738
	adds r0, r6, r1	@ 00119738 7018
.org 0x11973a
	ldrb r0, [r0, #1]	@ 0011973a 4078
.org 0x11973c
	cmp r4, r0	@ 0011973c 8442
.org 0x11973e
	bne.n 0x11971e	@ 0011973e eed1
.org 0x119740
	adds r4, r2, #0	@ 00119740 141c
.org 0x119742
	adds r5, r7, r4	@ 00119742 3d19
.org 0x119744
	ldrb r0, [r5, #0]	@ 00119744 2878
.org 0x119746
	cmp r0, #0	@ 00119746 0028
.org 0x119748
	beq.n 0x119760	@ 00119748 0ad0
.org 0x11974a
	mov r0, r8	@ 0011974a 4046
.org 0x11974c
	bl 0x2b61c	@ 0011974c 11f766ff
.org 0x119750
	lsls r0, r0, #24	@ 00119750 0006
.org 0x119752
	lsrs r0, r0, #24	@ 00119752 000e
.org 0x119754
	mov r1, r8	@ 00119754 4146
.org 0x119756
	adds r1, #164	@ 00119756 a431
.org 0x119758
	movs r2, #0	@ 00119758 0022
.org 0x11975a
	ldrsh r1, [r1, r2]	@ 0011975a 895e
.org 0x11975c
	cmp r0, r1	@ 0011975c 8842
.org 0x11975e
	bne.n 0x119770	@ 0011975e 07d1
.org 0x119760
	movs r0, #4	@ 00119760 0420
.org 0x119762
	bl 0x2b10	@ 00119762 e9f6d5f9
.org 0x119766
	b.n 0x1197b8	@ 00119766 27e0
.org 0x119768
	.byte 0x04,0x0e,0x00,0x00	@ 00119768 data
.org 0x11976c
	.byte 0xcc,0x0d,0x00,0x00	@ 0011976c data
.org 0x119770
	ldr r0, [pc, #48]	@ 00119770 0c48
.org 0x119772
	adds r4, r6, r0	@ 00119772 3418
.org 0x119774
	ldrb r0, [r4, #0]	@ 00119774 2078
.org 0x119776
	subs r0, #1	@ 00119776 0138
.org 0x119778
	strb r0, [r4, #0]	@ 00119778 2070
.org 0x11977a
	lsls r0, r0, #24	@ 0011977a 0006
.org 0x11977c
	lsrs r0, r0, #24	@ 0011977c 000e
.org 0x11977e
	cmp r0, #255	@ 0011977e ff28
.org 0x119780
	bne.n 0x1197cc	@ 00119780 24d1
.org 0x119782
	ldrb r0, [r5, #0]	@ 00119782 2878
.org 0x119784
	cmp r0, #0	@ 00119784 0028
.org 0x119786
	beq.n 0x1197b2	@ 00119786 14d0
.org 0x119788
	subs r0, #1	@ 00119788 0138
.org 0x11978a
	strb r0, [r5, #0]	@ 0011978a 2870
.org 0x11978c
	mov r0, r8	@ 0011978c 4046
.org 0x11978e
	bl 0x2b5c4	@ 0011978e 11f719ff
.org 0x119792
	lsls r0, r0, #24	@ 00119792 0006
.org 0x119794
	cmp r0, #0	@ 00119794 0028
.org 0x119796
	bne.n 0x1197ac	@ 00119796 09d1
.org 0x119798
	mov r0, r8	@ 00119798 4046
.org 0x11979a
	bl 0x1199ac	@ 0011979a 00f007f9
.org 0x11979e
	ldr r2, [pc, #8]	@ 0011979e 024a
.org 0x1197a0
	adds r1, r6, r2	@ 001197a0 b118
.org 0x1197a2
	b.n 0x1197bc	@ 001197a2 0be0
.org 0x1197a4
	.byte 0xfa,0x0d,0x00,0x00	@ 001197a4 data
.org 0x1197a8
	.byte 0xf7,0x0d,0x00,0x00	@ 001197a8 data
.org 0x1197ac
	ldrb r0, [r5, #0]	@ 001197ac 2878
.org 0x1197ae
	cmp r0, #0	@ 001197ae 0028
.org 0x1197b0
	bne.n 0x1197c8	@ 001197b0 0ad1
.org 0x1197b2
	mov r0, r8	@ 001197b2 4046
.org 0x1197b4
	bl 0x1199ac	@ 001197b4 00f0faf8
.org 0x1197b8
	ldr r5, [pc, #8]	@ 001197b8 024d
.org 0x1197ba
	adds r1, r6, r5	@ 001197ba 7119
.org 0x1197bc
	movs r0, #1	@ 001197bc 0120
.org 0x1197be
	strb r0, [r1, #0]	@ 001197be 0870
.org 0x1197c0
	b.n 0x1197cc	@ 001197c0 04e0
.org 0x1197c2
	.byte 0x00	@ 001197c2 data
.org 0x1197c3
	.byte 0x00	@ 001197c3 data
.org 0x1197c4
	.byte 0xf7,0x0d,0x00,0x00	@ 001197c4 data
.org 0x1197c8
	movs r0, #3	@ 001197c8 0320
.org 0x1197ca
	strb r0, [r4, #0]	@ 001197ca 2070
.org 0x1197cc
	movs r2, #0	@ 001197cc 0022
.org 0x1197ce
	movs r4, #0	@ 001197ce 0024
.org 0x1197d0
	ldrb r0, [r7, #0]	@ 001197d0 3878
.org 0x1197d2
	ldr r1, [pc, #88]	@ 001197d2 1649
.org 0x1197d4
	ldr r3, [pc, #88]	@ 001197d4 164b
.org 0x1197d6
	cmp r0, #255	@ 001197d6 ff28
.org 0x1197d8
	beq.n 0x1197ea	@ 001197d8 07d0
.org 0x1197da
	ldr r5, [pc, #88]	@ 001197da 164d
.org 0x1197dc
	adds r0, r6, r5	@ 001197dc 7019
.org 0x1197de
	ldrb r0, [r0, #1]	@ 001197de 4078
.org 0x1197e0
	cmp r4, r0	@ 001197e0 8442
.org 0x1197e2
	beq.n 0x119808	@ 001197e2 11d0
.org 0x1197e4
	adds r0, r4, #1	@ 001197e4 601c
.org 0x1197e6
	lsls r0, r0, #24	@ 001197e6 0006
.org 0x1197e8
	lsrs r4, r0, #24	@ 001197e8 040e
.org 0x1197ea
	adds r0, r2, #1	@ 001197ea 501c
.org 0x1197ec
	lsls r0, r0, #24	@ 001197ec 0006
.org 0x1197ee
	lsrs r2, r0, #24	@ 001197ee 020e
.org 0x1197f0
	cmp r2, #3	@ 001197f0 032a
.org 0x1197f2
	bhi.n 0x119808	@ 001197f2 09d8
