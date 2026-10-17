@ FUN_0805d558  entry 0x0805d558  size 550
.thumb
.org 0x5d558
FUN_0805d558:
	push {r4, r5, r6, r7, lr}	@ 0005d558 f0b5
.org 0x5d55a
	mov r7, sl	@ 0005d55a 5746
.org 0x5d55c
	mov r6, r9	@ 0005d55c 4e46
.org 0x5d55e
	mov r5, r8	@ 0005d55e 4546
.org 0x5d560
	push {r5, r6, r7}	@ 0005d560 e0b4
.org 0x5d562
	sub sp, #36	@ 0005d562 89b0
.org 0x5d564
	adds r5, r0, #0	@ 0005d564 051c
.org 0x5d566
	ldr r1, [pc, #536]	@ 0005d566 8649
.org 0x5d568
	mov r0, sp	@ 0005d568 6846
.org 0x5d56a
	movs r2, #6	@ 0005d56a 0622
.org 0x5d56c
	bl 0x129258	@ 0005d56c cbf074fe
.org 0x5d570
	ldrb r0, [r5, #16]	@ 0005d570 287c
.org 0x5d572
	mov r8, r0	@ 0005d572 8046
.org 0x5d574
	ldrb r0, [r5, #10]	@ 0005d574 a87a
.org 0x5d576
	lsrs r7, r0, #4	@ 0005d576 0709
.org 0x5d578
	movs r0, #1	@ 0005d578 0120
.org 0x5d57a
	ands r7, r0	@ 0005d57a 0740
.org 0x5d57c
	ldr r0, [pc, #516]	@ 0005d57c 8148
.org 0x5d57e
	ldr r4, [r0, #0]	@ 0005d57e 0468
.org 0x5d580
	ldrb r6, [r5, #15]	@ 0005d580 ee7b
.org 0x5d582
	cmp r6, #0	@ 0005d582 002e
.org 0x5d584
	beq.n 0x5d588	@ 0005d584 00d0
.org 0x5d586
	b.n 0x5d6ee	@ 0005d586 b2e0
.org 0x5d588
	movs r0, #56	@ 0005d588 3820
.org 0x5d58a
	bl 0x2b10	@ 0005d58a a5f7c1fa
.org 0x5d58e
	cmp r4, #0	@ 0005d58e 002c
.org 0x5d590
	beq.n 0x5d5da	@ 0005d590 23d0
.org 0x5d592
	adds r0, r5, #0	@ 0005d592 281c
.org 0x5d594
	adds r0, #140	@ 0005d594 8c30
.org 0x5d596
	ldr r0, [r0, #0]	@ 0005d596 0068
.org 0x5d598
	movs r1, #128	@ 0005d598 8021
.org 0x5d59a
	lsls r1, r1, #4	@ 0005d59a 0901
.org 0x5d59c
	ands r0, r1	@ 0005d59c 0840
.org 0x5d59e
	cmp r0, #0	@ 0005d59e 0028
.org 0x5d5a0
	beq.n 0x5d5da	@ 0005d5a0 1bd0
.org 0x5d5a2
	adds r2, r4, #0	@ 0005d5a2 221c
.org 0x5d5a4
	adds r2, #180	@ 0005d5a4 b432
.org 0x5d5a6
	movs r1, #161	@ 0005d5a6 a121
.org 0x5d5a8
	lsls r1, r1, #1	@ 0005d5a8 4900
.org 0x5d5aa
	adds r3, r4, r1	@ 0005d5aa 6318
.org 0x5d5ac
	ldrb r0, [r3, #0]	@ 0005d5ac 1878
.org 0x5d5ae
	movs r1, #64	@ 0005d5ae 4021
.org 0x5d5b0
	orrs r0, r1	@ 0005d5b0 0843
.org 0x5d5b2
	strb r0, [r3, #0]	@ 0005d5b2 1870
.org 0x5d5b4
	movs r0, #4	@ 0005d5b4 0420
.org 0x5d5b6
	strb r0, [r4, #13]	@ 0005d5b6 6073
.org 0x5d5b8
	strb r6, [r4, #14]	@ 0005d5b8 a673
.org 0x5d5ba
	lsls r0, r7, #1	@ 0005d5ba 7800
.org 0x5d5bc
	subs r0, #1	@ 0005d5bc 0138
.org 0x5d5be
	lsls r0, r0, #10	@ 0005d5be 8002
.org 0x5d5c0
	str r0, [r2, #116]	@ 0005d5c0 5067
.org 0x5d5c2
	ldr r0, [pc, #452]	@ 0005d5c2 7148
.org 0x5d5c4
	str r0, [r2, #120]	@ 0005d5c4 9067
.org 0x5d5c6
	str r6, [r2, #124]	@ 0005d5c6 d667
.org 0x5d5c8
	movs r2, #154	@ 0005d5c8 9a22
.org 0x5d5ca
	lsls r2, r2, #1	@ 0005d5ca 5200
.org 0x5d5cc
	adds r1, r4, r2	@ 0005d5cc a118
.org 0x5d5ce
	movs r0, #64	@ 0005d5ce 4020
.org 0x5d5d0
	str r0, [r1, #0]	@ 0005d5d0 0860
.org 0x5d5d2
	adds r0, #248	@ 0005d5d2 f830
.org 0x5d5d4
	adds r1, r4, r0	@ 0005d5d4 2118
.org 0x5d5d6
	movs r0, #16	@ 0005d5d6 1020
.org 0x5d5d8
	strh r0, [r1, #0]	@ 0005d5d8 0880
.org 0x5d5da
	movs r4, #0	@ 0005d5da 0024
.org 0x5d5dc
	adds r1, r5, #0	@ 0005d5dc 291c
.org 0x5d5de
	adds r1, #180	@ 0005d5de b431
.org 0x5d5e0
	str r1, [sp, #28]	@ 0005d5e0 0791
.org 0x5d5e2
	mov r2, sp	@ 0005d5e2 6a46
.org 0x5d5e4
	adds r2, #8	@ 0005d5e4 0832
.org 0x5d5e6
	str r2, [sp, #32]	@ 0005d5e6 0892
.org 0x5d5e8
	add r6, sp, #16	@ 0005d5e8 04ae
.org 0x5d5ea
	mov r0, r8	@ 0005d5ea 4046
.org 0x5d5ec
	lsls r0, r0, #1	@ 0005d5ec 4000
.org 0x5d5ee
	str r0, [sp, #24]	@ 0005d5ee 0690
.org 0x5d5f0
	ldr r1, [pc, #408]	@ 0005d5f0 6649
.org 0x5d5f2
	mov sl, r1	@ 0005d5f2 8a46
.org 0x5d5f4
	ldr r2, [pc, #408]	@ 0005d5f4 664a
.org 0x5d5f6
	mov r9, r2	@ 0005d5f6 9146
.org 0x5d5f8
	ldr r0, [pc, #408]	@ 0005d5f8 6648
.org 0x5d5fa
	mov r8, r0	@ 0005d5fa 8046
.org 0x5d5fc
	ldr r7, [sp, #32]	@ 0005d5fc 089f
.org 0x5d5fe
	mov r1, sl	@ 0005d5fe 5146
.org 0x5d600
	ldr r0, [r1, #0]	@ 0005d600 0868
.org 0x5d602
	mov r2, r9	@ 0005d602 4a46
.org 0x5d604
	muls r2, r0	@ 0005d604 4243
.org 0x5d606
	adds r0, r2, #0	@ 0005d606 101c
.org 0x5d608
	add r0, r8	@ 0005d608 4044
.org 0x5d60a
	lsls r0, r0, #1	@ 0005d60a 4000
.org 0x5d60c
	lsrs r2, r0, #1	@ 0005d60c 4208
.org 0x5d60e
	lsrs r0, r0, #17	@ 0005d60e 400c
.org 0x5d610
	movs r1, #31	@ 0005d610 1f21
.org 0x5d612
	ands r0, r1	@ 0005d612 0840
.org 0x5d614
	movs r1, #16	@ 0005d614 1021
.org 0x5d616
	subs r1, r1, r0	@ 0005d616 091a
.org 0x5d618
	lsls r1, r1, #8	@ 0005d618 0902
.org 0x5d61a
	ldr r0, [r5, #84]	@ 0005d61a 686d
.org 0x5d61c
	adds r0, r0, r1	@ 0005d61c 4018
.org 0x5d61e
	str r0, [sp, #8]	@ 0005d61e 0290
.org 0x5d620
	ldr r1, [sp, #28]	@ 0005d620 0799
.org 0x5d622
	ldr r0, [r1, #0]	@ 0005d622 0868
.org 0x5d624
	str r0, [r7, #4]	@ 0005d624 7860
.org 0x5d626
	mov r1, r9	@ 0005d626 4946
.org 0x5d628
	muls r1, r2	@ 0005d628 5143
.org 0x5d62a
	add r1, r8	@ 0005d62a 4144
.org 0x5d62c
	lsls r1, r1, #1	@ 0005d62c 4900
.org 0x5d62e
	lsrs r0, r1, #1	@ 0005d62e 4808
.org 0x5d630
	mov r2, sl	@ 0005d630 5246
.org 0x5d632
	str r0, [r2, #0]	@ 0005d632 1060
.org 0x5d634
	lsrs r1, r1, #17	@ 0005d634 490c
.org 0x5d636
	movs r0, #63	@ 0005d636 3f20
.org 0x5d638
	ands r1, r0	@ 0005d638 0140
.org 0x5d63a
	movs r0, #160	@ 0005d63a a020
.org 0x5d63c
	lsls r0, r0, #1	@ 0005d63c 4000
.org 0x5d63e
	adds r1, r1, r0	@ 0005d63e 0918
.org 0x5d640
	movs r0, #1	@ 0005d640 0120
.org 0x5d642
	ands r0, r4	@ 0005d642 2040
.org 0x5d644
	lsls r0, r0, #1	@ 0005d644 4000
.org 0x5d646
	subs r0, #1	@ 0005d646 0138
.org 0x5d648
	muls r0, r1	@ 0005d648 4843
.org 0x5d64a
	str r0, [sp, #16]	@ 0005d64a 0490
.org 0x5d64c
	movs r0, #0	@ 0005d64c 0020
.org 0x5d64e
	str r0, [r6, #4]	@ 0005d64e 7060
.org 0x5d650
	adds r0, r7, #0	@ 0005d650 381c
.org 0x5d652
	adds r1, r6, #0	@ 0005d652 311c
.org 0x5d654
	movs r2, #0	@ 0005d654 0022
.org 0x5d656
	movs r3, #0	@ 0005d656 0023
.org 0x5d658
	bl 0xde31c	@ 0005d658 80f060fe
.org 0x5d65c
	adds r4, #1	@ 0005d65c 0134
.org 0x5d65e
	cmp r4, #1	@ 0005d65e 012c
.org 0x5d660
	ble.n 0x5d5fe	@ 0005d660 cddd
.org 0x5d662
	movs r4, #0	@ 0005d662 0024
.org 0x5d664
	ldr r1, [pc, #300]	@ 0005d664 4b49
.org 0x5d666
	mov sl, r1	@ 0005d666 8a46
.org 0x5d668
	movs r2, #31	@ 0005d668 1f22
.org 0x5d66a
	mov r9, r2	@ 0005d66a 9146
.org 0x5d66c
	ldr r7, [sp, #32]	@ 0005d66c 089f
.org 0x5d66e
	ldr r1, [pc, #284]	@ 0005d66e 4749
.org 0x5d670
	ldr r0, [r1, #0]	@ 0005d670 0868
.org 0x5d672
	ldr r2, [pc, #284]	@ 0005d672 474a
.org 0x5d674
	muls r0, r2	@ 0005d674 5043
.org 0x5d676
	add r0, sl	@ 0005d676 5044
.org 0x5d678
	lsls r0, r0, #1	@ 0005d678 4000
.org 0x5d67a
	lsrs r2, r0, #1	@ 0005d67a 4208
.org 0x5d67c
	lsrs r0, r0, #17	@ 0005d67c 400c
.org 0x5d67e
	mov r1, r9	@ 0005d67e 4946
.org 0x5d680
	ands r0, r1	@ 0005d680 0840
.org 0x5d682
	movs r1, #16	@ 0005d682 1021
.org 0x5d684
	subs r1, r1, r0	@ 0005d684 091a
.org 0x5d686
	lsls r1, r1, #8	@ 0005d686 0902
.org 0x5d688
	ldr r0, [r5, #84]	@ 0005d688 686d
.org 0x5d68a
	adds r0, r0, r1	@ 0005d68a 4018
.org 0x5d68c
	str r0, [sp, #8]	@ 0005d68c 0290
.org 0x5d68e
	ldr r1, [sp, #28]	@ 0005d68e 0799
.org 0x5d690
	ldr r0, [r1, #0]	@ 0005d690 0868
.org 0x5d692
	str r0, [r7, #4]	@ 0005d692 7860
.org 0x5d694
	ldr r0, [pc, #248]	@ 0005d694 3e48
.org 0x5d696
	adds r1, r2, #0	@ 0005d696 111c
.org 0x5d698
	muls r1, r0	@ 0005d698 4143
.org 0x5d69a
	add r1, sl	@ 0005d69a 5144
.org 0x5d69c
	lsls r1, r1, #1	@ 0005d69c 4900
.org 0x5d69e
	lsrs r0, r1, #1	@ 0005d69e 4808
.org 0x5d6a0
	ldr r2, [pc, #232]	@ 0005d6a0 3a4a
.org 0x5d6a2
	str r0, [r2, #0]	@ 0005d6a2 1060
.org 0x5d6a4
	lsrs r1, r1, #17	@ 0005d6a4 490c
.org 0x5d6a6
	mov r0, r9	@ 0005d6a6 4846
.org 0x5d6a8
	ands r1, r0	@ 0005d6a8 0140
.org 0x5d6aa
	adds r1, #128	@ 0005d6aa 8031
.org 0x5d6ac
	movs r2, #1	@ 0005d6ac 0122
.org 0x5d6ae
	mov r8, r2	@ 0005d6ae 9046
.org 0x5d6b0
	adds r0, r4, #0	@ 0005d6b0 201c
.org 0x5d6b2
	ands r0, r2	@ 0005d6b2 1040
.org 0x5d6b4
	lsls r0, r0, #1	@ 0005d6b4 4000
.org 0x5d6b6
	subs r0, #1	@ 0005d6b6 0138
.org 0x5d6b8
	muls r0, r1	@ 0005d6b8 4843
.org 0x5d6ba
	str r0, [sp, #16]	@ 0005d6ba 0490
.org 0x5d6bc
	movs r0, #0	@ 0005d6bc 0020
.org 0x5d6be
	str r0, [r6, #4]	@ 0005d6be 7060
.org 0x5d6c0
	adds r0, r7, #0	@ 0005d6c0 381c
.org 0x5d6c2
	adds r1, r6, #0	@ 0005d6c2 311c
.org 0x5d6c4
	movs r2, #0	@ 0005d6c4 0022
.org 0x5d6c6
	movs r3, #0	@ 0005d6c6 0023
.org 0x5d6c8
	bl 0xde31c	@ 0005d6c8 80f028fe
.org 0x5d6cc
	adds r4, #1	@ 0005d6cc 0134
.org 0x5d6ce
	cmp r4, #1	@ 0005d6ce 012c
.org 0x5d6d0
	ble.n 0x5d66e	@ 0005d6d0 cddd
.org 0x5d6d2
	ldr r0, [sp, #24]	@ 0005d6d2 0698
.org 0x5d6d4
	add r0, sp	@ 0005d6d4 6844
.org 0x5d6d6
	ldrb r1, [r0, #0]	@ 0005d6d6 0178
.org 0x5d6d8
	adds r0, r5, #0	@ 0005d6d8 281c
.org 0x5d6da
	bl 0x5ee6c	@ 0005d6da 01f0c7fb
.org 0x5d6de
	movs r0, #192	@ 0005d6de c020
.org 0x5d6e0
	lsls r0, r0, #3	@ 0005d6e0 c000
.org 0x5d6e2
	str r0, [r5, #96]	@ 0005d6e2 2866
.org 0x5d6e4
	mov r0, r8	@ 0005d6e4 4046
.org 0x5d6e6
	strb r0, [r5, #18]	@ 0005d6e6 a874
.org 0x5d6e8
	ldrb r0, [r5, #15]	@ 0005d6e8 e87b
.org 0x5d6ea
	adds r0, #1	@ 0005d6ea 0130
.org 0x5d6ec
	strb r0, [r5, #15]	@ 0005d6ec e873
.org 0x5d6ee
	adds r0, r5, #0	@ 0005d6ee 281c
.org 0x5d6f0
	bl 0x1cff0	@ 0005d6f0 bff77efc
.org 0x5d6f4
	adds r0, r5, #0	@ 0005d6f4 281c
.org 0x5d6f6
	adds r0, #116	@ 0005d6f6 7430
.org 0x5d6f8
	ldr r4, [pc, #156]	@ 0005d6f8 274c
.org 0x5d6fa
	ldr r3, [pc, #160]	@ 0005d6fa 284b
.org 0x5d6fc
	adds r1, r5, #0	@ 0005d6fc 291c
.org 0x5d6fe
	adds r1, #184	@ 0005d6fe b831
.org 0x5d700
	ldrb r2, [r1, #0]	@ 0005d700 0a78
.org 0x5d702
	lsls r1, r2, #1	@ 0005d702 5100
.org 0x5d704
	adds r1, r1, r3	@ 0005d704 c918
.org 0x5d706
	ldrh r1, [r1, #0]	@ 0005d706 0988
.org 0x5d708
	lsls r1, r1, #2	@ 0005d708 8900
.org 0x5d70a
	adds r1, r1, r4	@ 0005d70a 0919
.org 0x5d70c
	adds r3, r5, #0	@ 0005d70c 2b1c
.org 0x5d70e
	adds r3, #113	@ 0005d70e 7133
.org 0x5d710
	movs r4, #0	@ 0005d710 0024
.org 0x5d712
	ldrsb r4, [r3, r4]	@ 0005d712 1c57
.org 0x5d714
	ldr r1, [r1, #0]	@ 0005d714 0968
.org 0x5d716
	lsls r3, r4, #2	@ 0005d716 a300
.org 0x5d718
	adds r3, r3, r1	@ 0005d718 5b18
.org 0x5d71a
	ldr r1, [pc, #132]	@ 0005d71a 2149
.org 0x5d71c
	lsls r2, r2, #2	@ 0005d71c 9200
.org 0x5d71e
	adds r2, r2, r1	@ 0005d71e 5218
.org 0x5d720
	ldr r1, [r2, #0]	@ 0005d720 1168
.org 0x5d722
	adds r1, r1, r4	@ 0005d722 0919
.org 0x5d724
	ldrb r1, [r1, #0]	@ 0005d724 0978
.org 0x5d726
	lsls r2, r1, #1	@ 0005d726 4a00
.org 0x5d728
	adds r2, r2, r1	@ 0005d728 5218
.org 0x5d72a
	lsls r2, r2, #3	@ 0005d72a d200
.org 0x5d72c
	ldr r1, [r3, #0]	@ 0005d72c 1968
.org 0x5d72e
	adds r1, r1, r2	@ 0005d72e 8918
.org 0x5d730
	bl 0x5784	@ 0005d730 a8f728f8
.org 0x5d734
	ldrb r0, [r5, #18]	@ 0005d734 a87c
.org 0x5d736
	cmp r0, #0	@ 0005d736 0028
.org 0x5d738
	beq.n 0x5d75c	@ 0005d738 10d0
.org 0x5d73a
	ldr r0, [r5, #88]	@ 0005d73a a86d
.org 0x5d73c
	ldr r1, [r5, #96]	@ 0005d73c 296e
.org 0x5d73e
	adds r0, r0, r1	@ 0005d73e 4018
.org 0x5d740
	str r0, [r5, #88]	@ 0005d740 a865
.org 0x5d742
	movs r1, #144	@ 0005d742 9021
.org 0x5d744
	lsls r1, r1, #6	@ 0005d744 8901
.org 0x5d746
	adds r0, r0, r1	@ 0005d746 4018
.org 0x5d748
	adds r1, r5, #0	@ 0005d748 291c
.org 0x5d74a
	adds r1, #180	@ 0005d74a b431
.org 0x5d74c
	ldr r1, [r1, #0]	@ 0005d74c 0968
.org 0x5d74e
	cmp r0, r1	@ 0005d74e 8842
.org 0x5d750
	blt.n 0x5d75c	@ 0005d750 04db
.org 0x5d752
	ldr r2, [pc, #80]	@ 0005d752 144a
.org 0x5d754
	adds r0, r1, r2	@ 0005d754 8818
.org 0x5d756
	str r0, [r5, #88]	@ 0005d756 a865
.org 0x5d758
	movs r0, #0	@ 0005d758 0020
.org 0x5d75a
	strb r0, [r5, #18]	@ 0005d75a a874
.org 0x5d75c
	adds r0, r5, #0	@ 0005d75c 281c
.org 0x5d75e
	adds r0, #115	@ 0005d75e 7330
.org 0x5d760
	ldrb r0, [r0, #0]	@ 0005d760 0078
.org 0x5d762
	cmp r0, #3	@ 0005d762 0328
.org 0x5d764
	bne.n 0x5d76e	@ 0005d764 03d1
.org 0x5d766
	movs r1, #0	@ 0005d766 0021
.org 0x5d768
	movs r0, #6	@ 0005d768 0620
.org 0x5d76a
	strb r0, [r5, #14]	@ 0005d76a a873
.org 0x5d76c
	strb r1, [r5, #15]	@ 0005d76c e973
.org 0x5d76e
	add sp, #36	@ 0005d76e 09b0
.org 0x5d770
	pop {r3, r4, r5}	@ 0005d770 38bc
.org 0x5d772
	mov r8, r3	@ 0005d772 9846
.org 0x5d774
	mov r9, r4	@ 0005d774 a146
.org 0x5d776
	mov sl, r5	@ 0005d776 aa46
.org 0x5d778
	pop {r4, r5, r6, r7}	@ 0005d778 f0bc
.org 0x5d77a
	pop {r0}	@ 0005d77a 01bc
.org 0x5d77c
	bx r0	@ 0005d77c 0047
