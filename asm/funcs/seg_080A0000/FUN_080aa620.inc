@ FUN_080aa620  entry 0x080aa620  size 334
.thumb
.org 0xaa620
FUN_080aa620:
	push {r4, r5, r6, r7, lr}	@ 000aa620 f0b5
.org 0xaa622
	adds r4, r0, #0	@ 000aa622 041c
.org 0xaa624
	ldrb r5, [r4, #14]	@ 000aa624 a57b
.org 0xaa626
	cmp r5, #0	@ 000aa626 002d
.org 0xaa628
	bne.n 0xaa678	@ 000aa628 26d1
.org 0xaa62a
	movs r1, #148	@ 000aa62a 9421
.org 0xaa62c
	lsls r1, r1, #8	@ 000aa62c 0902
.org 0xaa62e
	bl 0x1cf00	@ 000aa62e 72f767fc
.org 0xaa632
	adds r0, r4, #0	@ 000aa632 201c
.org 0xaa634
	adds r0, #182	@ 000aa634 b630
.org 0xaa636
	strb r5, [r0, #0]	@ 000aa636 0570
.org 0xaa638
	movs r0, #178	@ 000aa638 b220
.org 0xaa63a
	lsls r0, r0, #1	@ 000aa63a 4000
.org 0xaa63c
	bl 0x2b10	@ 000aa63c 58f768fa
.org 0xaa640
	ldr r0, [r4, #44]	@ 000aa640 e06a
.org 0xaa642
	cmp r0, #0	@ 000aa642 0028
.org 0xaa644
	bne.n 0xaa672	@ 000aa644 15d1
.org 0xaa646
	adds r2, r4, #0	@ 000aa646 221c
.org 0xaa648
	adds r2, #84	@ 000aa648 5432
.org 0xaa64a
	ldrb r1, [r4, #10]	@ 000aa64a a17a
.org 0xaa64c
	movs r0, #16	@ 000aa64c 1020
.org 0xaa64e
	ands r0, r1	@ 000aa64e 0840
.org 0xaa650
	movs r1, #128	@ 000aa650 8021
.org 0xaa652
	lsls r1, r1, #1	@ 000aa652 4900
.org 0xaa654
	cmp r0, #0	@ 000aa654 0028
.org 0xaa656
	beq.n 0xaa65a	@ 000aa656 00d0
.org 0xaa658
	adds r1, #1	@ 000aa658 0131
.org 0xaa65a
	adds r0, r2, #0	@ 000aa65a 101c
.org 0xaa65c
	adds r2, r4, #0	@ 000aa65c 221c
.org 0xaa65e
	bl 0xcc9e0	@ 000aa65e 22f0bff9
.org 0xaa662
	adds r1, r0, #0	@ 000aa662 011c
.org 0xaa664
	str r1, [r4, #44]	@ 000aa664 e162
.org 0xaa666
	cmp r1, #0	@ 000aa666 0029
.org 0xaa668
	bne.n 0xaa672	@ 000aa668 03d1
.org 0xaa66a
	movs r0, #2	@ 000aa66a 0220
.org 0xaa66c
	strb r0, [r4, #13]	@ 000aa66c 6073
.org 0xaa66e
	strb r1, [r4, #14]	@ 000aa66e a173
.org 0xaa670
	b.n 0xaa76a	@ 000aa670 7be0
.org 0xaa672
	ldrb r0, [r4, #14]	@ 000aa672 a07b
.org 0xaa674
	adds r0, #1	@ 000aa674 0130
.org 0xaa676
	strb r0, [r4, #14]	@ 000aa676 a073
.org 0xaa678
	adds r2, r4, #0	@ 000aa678 221c
.org 0xaa67a
	adds r2, #183	@ 000aa67a b732
.org 0xaa67c
	ldrb r0, [r2, #0]	@ 000aa67c 1078
.org 0xaa67e
	adds r0, #1	@ 000aa67e 0130
.org 0xaa680
	movs r5, #0	@ 000aa680 0025
.org 0xaa682
	strb r0, [r2, #0]	@ 000aa682 1070
.org 0xaa684
	lsls r0, r0, #24	@ 000aa684 0006
.org 0xaa686
	lsrs r0, r0, #24	@ 000aa686 000e
.org 0xaa688
	cmp r0, #3	@ 000aa688 0328
.org 0xaa68a
	bls.n 0xaa68e	@ 000aa68a 00d9
.org 0xaa68c
	strb r5, [r2, #0]	@ 000aa68c 1570
.org 0xaa68e
	ldr r1, [pc, #56]	@ 000aa68e 0e49
.org 0xaa690
	ldrb r0, [r2, #0]	@ 000aa690 1078
.org 0xaa692
	lsls r0, r0, #1	@ 000aa692 4000
.org 0xaa694
	adds r0, r0, r1	@ 000aa694 4018
.org 0xaa696
	ldrh r1, [r0, #0]	@ 000aa696 0188
.org 0xaa698
	adds r0, r4, #0	@ 000aa698 201c
.org 0xaa69a
	bl 0x1cf00	@ 000aa69a 72f731fc
.org 0xaa69e
	ldr r0, [r4, #84]	@ 000aa69e 606d
.org 0xaa6a0
	ldr r1, [r4, #92]	@ 000aa6a0 e16d
.org 0xaa6a2
	adds r0, r0, r1	@ 000aa6a2 4018
.org 0xaa6a4
	str r0, [r4, #84]	@ 000aa6a4 6065
.org 0xaa6a6
	adds r1, r4, #0	@ 000aa6a6 211c
.org 0xaa6a8
	adds r1, #180	@ 000aa6a8 b431
.org 0xaa6aa
	ldrb r0, [r1, #0]	@ 000aa6aa 0878
.org 0xaa6ac
	cmp r0, #0	@ 000aa6ac 0028
.org 0xaa6ae
	bne.n 0xaa6cc	@ 000aa6ae 0dd1
.org 0xaa6b0
	ldrb r0, [r4, #18]	@ 000aa6b0 a07c
.org 0xaa6b2
	adds r0, #1	@ 000aa6b2 0130
.org 0xaa6b4
	strb r0, [r4, #18]	@ 000aa6b4 a074
.org 0xaa6b6
	lsls r0, r0, #24	@ 000aa6b6 0006
.org 0xaa6b8
	lsrs r0, r0, #24	@ 000aa6b8 000e
.org 0xaa6ba
	cmp r0, #64	@ 000aa6ba 4028
.org 0xaa6bc
	bne.n 0xaa6de	@ 000aa6bc 0fd1
.org 0xaa6be
	movs r0, #1	@ 000aa6be 0120
.org 0xaa6c0
	strb r0, [r1, #0]	@ 000aa6c0 0870
.org 0xaa6c2
	strb r5, [r4, #18]	@ 000aa6c2 a574
.org 0xaa6c4
	b.n 0xaa6de	@ 000aa6c4 0be0
.org 0xaa6c6
	.byte 0x00	@ 000aa6c6 data
.org 0xaa6c7
	.byte 0x00	@ 000aa6c7 data
.org 0xaa6c8
	.byte 0xd0,0x2a,0x86,0x08	@ 000aa6c8 data
.org 0xaa6cc
	adds r0, r4, #0	@ 000aa6cc 201c
.org 0xaa6ce
	bl 0xaaa0c	@ 000aa6ce 00f09df9
.org 0xaa6d2
	lsls r0, r0, #24	@ 000aa6d2 0006
.org 0xaa6d4
	cmp r0, #0	@ 000aa6d4 0028
.org 0xaa6d6
	beq.n 0xaa6de	@ 000aa6d6 02d0
.org 0xaa6d8
	movs r0, #4	@ 000aa6d8 0420
.org 0xaa6da
	strb r0, [r4, #13]	@ 000aa6da 6073
.org 0xaa6dc
	strb r5, [r4, #14]	@ 000aa6dc a573
.org 0xaa6de
	ldr r1, [r4, #44]	@ 000aa6de e16a
.org 0xaa6e0
	ldrb r0, [r1, #18]	@ 000aa6e0 887c
.org 0xaa6e2
	cmp r0, #63	@ 000aa6e2 3f28
.org 0xaa6e4
	bhi.n 0xaa70a	@ 000aa6e4 11d8
.org 0xaa6e6
	adds r0, #1	@ 000aa6e6 0130
.org 0xaa6e8
	strb r0, [r1, #18]	@ 000aa6e8 8874
.org 0xaa6ea
	ldr r2, [r4, #44]	@ 000aa6ea e26a
.org 0xaa6ec
	ldrb r1, [r2, #18]	@ 000aa6ec 917c
.org 0xaa6ee
	movs r3, #1	@ 000aa6ee 0123
.org 0xaa6f0
	adds r0, r3, #0	@ 000aa6f0 181c
.org 0xaa6f2
	ands r0, r1	@ 000aa6f2 0840
.org 0xaa6f4
	cmp r0, #0	@ 000aa6f4 0028
.org 0xaa6f6
	beq.n 0xaa70a	@ 000aa6f6 08d0
.org 0xaa6f8
	adds r0, r2, #0	@ 000aa6f8 101c
.org 0xaa6fa
	adds r0, #84	@ 000aa6fa 5430
.org 0xaa6fc
	movs r1, #128	@ 000aa6fc 8021
.org 0xaa6fe
	lsls r1, r1, #2	@ 000aa6fe 8900
.org 0xaa700
	ldrb r2, [r4, #10]	@ 000aa700 a27a
.org 0xaa702
	lsrs r2, r2, #4	@ 000aa702 1209
.org 0xaa704
	ands r2, r3	@ 000aa704 1a40
.org 0xaa706
	bl 0xe2914	@ 000aa706 38f005f9
.org 0xaa70a
	ldr r7, [pc, #104]	@ 000aa70a 1a4f
.org 0xaa70c
	ldrb r1, [r4, #10]	@ 000aa70c a17a
.org 0xaa70e
	movs r6, #16	@ 000aa70e 1026
.org 0xaa710
	adds r0, r6, #0	@ 000aa710 301c
.org 0xaa712
	ands r0, r1	@ 000aa712 0840
.org 0xaa714
	lsls r0, r0, #24	@ 000aa714 0006
.org 0xaa716
	lsrs r0, r0, #24	@ 000aa716 000e
.org 0xaa718
	negs r0, r0	@ 000aa718 4042
.org 0xaa71a
	asrs r0, r0, #31	@ 000aa71a c017
.org 0xaa71c
	movs r5, #4	@ 000aa71c 0425
.org 0xaa71e
	ands r0, r5	@ 000aa71e 2840
.org 0xaa720
	adds r0, r0, r7	@ 000aa720 c019
.org 0xaa722
	ldr r1, [r0, #0]	@ 000aa722 0168
.org 0xaa724
	lsls r1, r1, #8	@ 000aa724 0902
.org 0xaa726
	ldr r0, [r4, #84]	@ 000aa726 606d
.org 0xaa728
	adds r0, r0, r1	@ 000aa728 4018
.org 0xaa72a
	ldr r1, [r4, #88]	@ 000aa72a a16d
.org 0xaa72c
	movs r2, #128	@ 000aa72c 8022
.org 0xaa72e
	lsls r2, r2, #3	@ 000aa72e d200
.org 0xaa730
	adds r1, r1, r2	@ 000aa730 8918
.org 0xaa732
	bl 0x7c7c	@ 000aa732 5df7a3fa
.org 0xaa736
	lsls r0, r0, #16	@ 000aa736 0004
.org 0xaa738
	cmp r0, #0	@ 000aa738 0028
.org 0xaa73a
	beq.n 0xaa762	@ 000aa73a 12d0
.org 0xaa73c
	ldrb r1, [r4, #10]	@ 000aa73c a17a
.org 0xaa73e
	adds r0, r6, #0	@ 000aa73e 301c
.org 0xaa740
	ands r0, r1	@ 000aa740 0840
.org 0xaa742
	lsls r0, r0, #24	@ 000aa742 0006
.org 0xaa744
	lsrs r0, r0, #24	@ 000aa744 000e
.org 0xaa746
	negs r0, r0	@ 000aa746 4042
.org 0xaa748
	asrs r0, r0, #31	@ 000aa748 c017
.org 0xaa74a
	ands r0, r5	@ 000aa74a 2840
.org 0xaa74c
	adds r0, r0, r7	@ 000aa74c c019
.org 0xaa74e
	ldr r1, [r0, #0]	@ 000aa74e 0168
.org 0xaa750
	lsls r1, r1, #8	@ 000aa750 0902
.org 0xaa752
	ldr r0, [r4, #84]	@ 000aa752 606d
.org 0xaa754
	adds r0, r0, r1	@ 000aa754 4018
.org 0xaa756
	ldr r1, [r4, #88]	@ 000aa756 a16d
.org 0xaa758
	bl 0x7c7c	@ 000aa758 5df790fa
.org 0xaa75c
	lsls r0, r0, #16	@ 000aa75c 0004
.org 0xaa75e
	cmp r0, #0	@ 000aa75e 0028
.org 0xaa760
	beq.n 0xaa76e	@ 000aa760 05d0
.org 0xaa762
	movs r0, #0	@ 000aa762 0020
.org 0xaa764
	movs r1, #2	@ 000aa764 0221
.org 0xaa766
	strb r1, [r4, #13]	@ 000aa766 6173
.org 0xaa768
	strb r0, [r4, #14]	@ 000aa768 a073
.org 0xaa76a
	movs r0, #32	@ 000aa76a 2020
.org 0xaa76c
	strb r0, [r4, #19]	@ 000aa76c e074
