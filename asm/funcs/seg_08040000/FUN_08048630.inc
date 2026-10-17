@ FUN_08048630  entry 0x08048630  size 404
.thumb
.org 0x48630
FUN_08048630:
	push {r4, r5, r6, r7, lr}	@ 00048630 f0b5
.org 0x48632
	mov r7, r8	@ 00048632 4746
.org 0x48634
	push {r7}	@ 00048634 80b4
.org 0x48636
	adds r5, r0, #0	@ 00048636 051c
.org 0x48638
	ldr r7, [r5, #40]	@ 00048638 af6a
.org 0x4863a
	bl 0x1cff0	@ 0004863a d4f7d9fc
.org 0x4863e
	ldrb r6, [r5, #13]	@ 0004863e 6e7b
.org 0x48640
	cmp r6, #0	@ 00048640 002e
.org 0x48642
	beq.n 0x48646	@ 00048642 00d0
.org 0x48644
	b.n 0x4874c	@ 00048644 82e0
.org 0x48646
	ldrb r0, [r5, #18]	@ 00048646 a87c
.org 0x48648
	subs r0, #1	@ 00048648 0138
.org 0x4864a
	movs r1, #0	@ 0004864a 0021
.org 0x4864c
	mov r8, r1	@ 0004864c 8846
.org 0x4864e
	strb r0, [r5, #18]	@ 0004864e a874
.org 0x48650
	lsls r0, r0, #24	@ 00048650 0006
.org 0x48652
	lsrs r0, r0, #24	@ 00048652 000e
.org 0x48654
	cmp r0, #255	@ 00048654 ff28
.org 0x48656
	beq.n 0x4865a	@ 00048656 00d0
.org 0x48658
	b.n 0x487c2	@ 00048658 b3e0
.org 0x4865a
	adds r4, r5, #0	@ 0004865a 2c1c
.org 0x4865c
	adds r4, #84	@ 0004865c 5434
.org 0x4865e
	adds r0, r7, #0	@ 0004865e 381c
.org 0x48660
	adds r1, r4, #0	@ 00048660 211c
.org 0x48662
	bl 0x41318	@ 00048662 f8f759fe
.org 0x48666
	lsls r0, r0, #24	@ 00048666 0006
.org 0x48668
	lsrs r2, r0, #24	@ 00048668 020e
.org 0x4866a
	mov ip, r4	@ 0004866a a446
.org 0x4866c
	cmp r2, #0	@ 0004866c 002a
.org 0x4866e
	beq.n 0x486a8	@ 0004866e 1bd0
.org 0x48670
	ldrb r1, [r5, #10]	@ 00048670 a97a
.org 0x48672
	movs r0, #254	@ 00048672 fe20
.org 0x48674
	ands r0, r1	@ 00048674 0840
.org 0x48676
	movs r1, #253	@ 00048676 fd21
.org 0x48678
	ands r0, r1	@ 00048678 0840
.org 0x4867a
	strb r0, [r5, #10]	@ 0004867a a872
.org 0x4867c
	adds r0, r5, #0	@ 0004867c 281c
.org 0x4867e
	adds r0, #140	@ 0004867e 8c30
.org 0x48680
	str r6, [r0, #0]	@ 00048680 0660
.org 0x48682
	adds r0, #4	@ 00048682 0430
.org 0x48684
	str r6, [r0, #0]	@ 00048684 0660
.org 0x48686
	adds r0, #4	@ 00048686 0430
.org 0x48688
	strb r6, [r0, #0]	@ 00048688 0670
.org 0x4868a
	ldrb r1, [r5, #10]	@ 0004868a a97a
.org 0x4868c
	movs r0, #251	@ 0004868c fb20
.org 0x4868e
	ands r0, r1	@ 0004868e 0840
.org 0x48690
	strb r0, [r5, #10]	@ 00048690 a872
.org 0x48692
	ldr r1, [pc, #16]	@ 00048692 0449
.org 0x48694
	ldrb r0, [r5, #9]	@ 00048694 687a
.org 0x48696
	lsls r0, r0, #2	@ 00048696 8000
.org 0x48698
	adds r0, r0, r1	@ 00048698 4018
.org 0x4869a
	movs r1, #3	@ 0004869a 0321
.org 0x4869c
	str r1, [r5, #12]	@ 0004869c e960
.org 0x4869e
	ldr r0, [r0, #0]	@ 0004869e 0068
.org 0x486a0
	ldr r0, [r0, #12]	@ 000486a0 c068
.org 0x486a2
	b.n 0x487c0	@ 000486a2 8de0
.org 0x486a4
	.byte 0xf8,0x39,0x85,0x08	@ 000486a4 data
.org 0x486a8
	ldrb r0, [r5, #17]	@ 000486a8 687c
.org 0x486aa
	cmp r0, #0	@ 000486aa 0028
.org 0x486ac
	bne.n 0x486c8	@ 000486ac 0cd1
.org 0x486ae
	ldr r1, [r5, #84]	@ 000486ae 696d
.org 0x486b0
	ldr r0, [r7, #84]	@ 000486b0 786d
.org 0x486b2
	cmp r1, r0	@ 000486b2 8142
.org 0x486b4
	ble.n 0x486be	@ 000486b4 03dd
.org 0x486b6
	movs r0, #192	@ 000486b6 c020
.org 0x486b8
	lsls r0, r0, #1	@ 000486b8 4000
.org 0x486ba
	str r0, [r5, #92]	@ 000486ba e865
.org 0x486bc
	b.n 0x486d2	@ 000486bc 09e0
.org 0x486be
	ldr r0, [pc, #4]	@ 000486be 0148
.org 0x486c0
	str r0, [r5, #92]	@ 000486c0 e865
.org 0x486c2
	b.n 0x486f6	@ 000486c2 18e0
.org 0x486c4
	.byte 0x80,0xfe,0xff,0xff	@ 000486c4 data
.org 0x486c8
	str r2, [r5, #92]	@ 000486c8 ea65
.org 0x486ca
	ldr r1, [r5, #84]	@ 000486ca 696d
.org 0x486cc
	ldr r0, [r7, #84]	@ 000486cc 786d
.org 0x486ce
	cmp r1, r0	@ 000486ce 8142
.org 0x486d0
	ble.n 0x486f6	@ 000486d0 11dd
.org 0x486d2
	movs r2, #1	@ 000486d2 0122
.org 0x486d4
	ldrb r0, [r5, #10]	@ 000486d4 a87a
.org 0x486d6
	movs r1, #16	@ 000486d6 1021
.org 0x486d8
	orrs r0, r1	@ 000486d8 0843
.org 0x486da
	strb r0, [r5, #10]	@ 000486da a872
.org 0x486dc
	adds r0, r5, #0	@ 000486dc 281c
.org 0x486de
	adds r0, #76	@ 000486de 4c30
.org 0x486e0
	strb r2, [r0, #0]	@ 000486e0 0270
.org 0x486e2
	adds r3, r5, #0	@ 000486e2 2b1c
.org 0x486e4
	adds r3, #74	@ 000486e4 4a33
.org 0x486e6
	movs r2, #16	@ 000486e6 1022
.org 0x486e8
	ldrb r1, [r3, #0]	@ 000486e8 1978
.org 0x486ea
	movs r0, #17	@ 000486ea 1120
.org 0x486ec
	negs r0, r0	@ 000486ec 4042
.org 0x486ee
	ands r0, r1	@ 000486ee 0840
.org 0x486f0
	orrs r0, r2	@ 000486f0 1043
.org 0x486f2
	strb r0, [r3, #0]	@ 000486f2 1870
.org 0x486f4
	b.n 0x48712	@ 000486f4 0de0
.org 0x486f6
	ldrb r1, [r5, #10]	@ 000486f6 a97a
.org 0x486f8
	movs r0, #239	@ 000486f8 ef20
.org 0x486fa
	ands r0, r1	@ 000486fa 0840
.org 0x486fc
	strb r0, [r5, #10]	@ 000486fc a872
.org 0x486fe
	adds r0, r5, #0	@ 000486fe 281c
.org 0x48700
	adds r0, #76	@ 00048700 4c30
.org 0x48702
	strb r2, [r0, #0]	@ 00048702 0270
.org 0x48704
	adds r2, r5, #0	@ 00048704 2a1c
.org 0x48706
	adds r2, #74	@ 00048706 4a32
.org 0x48708
	ldrb r1, [r2, #0]	@ 00048708 1178
.org 0x4870a
	movs r0, #17	@ 0004870a 1120
.org 0x4870c
	negs r0, r0	@ 0004870c 4042
.org 0x4870e
	ands r0, r1	@ 0004870e 0840
.org 0x48710
	strb r0, [r2, #0]	@ 00048710 1070
.org 0x48712
	ldr r0, [pc, #184]	@ 00048712 2e48
.org 0x48714
	str r0, [r5, #96]	@ 00048714 2866
.org 0x48716
	ldrb r1, [r5, #10]	@ 00048716 a97a
.org 0x48718
	movs r0, #4	@ 00048718 0420
.org 0x4871a
	orrs r0, r1	@ 0004871a 0843
.org 0x4871c
	strb r0, [r5, #10]	@ 0004871c a872
.org 0x4871e
	adds r4, r5, #0	@ 0004871e 2c1c
.org 0x48720
	adds r4, #116	@ 00048720 7434
.org 0x48722
	ldr r1, [pc, #172]	@ 00048722 2b49
.org 0x48724
	adds r0, r4, #0	@ 00048724 201c
.org 0x48726
	mov r2, ip	@ 00048726 6246
.org 0x48728
	movs r3, #8	@ 00048728 0823
.org 0x4872a
	bl 0x5760	@ 0004872a bdf719f8
.org 0x4872e
	str r5, [r4, #44]	@ 0004872e e562
.org 0x48730
	ldr r0, [pc, #160]	@ 00048730 2848
.org 0x48732
	str r0, [r4, #36]	@ 00048732 6062
.org 0x48734
	ldrb r1, [r5, #10]	@ 00048734 a97a
.org 0x48736
	movs r0, #1	@ 00048736 0120
.org 0x48738
	orrs r0, r1	@ 00048738 0843
.org 0x4873a
	strb r0, [r5, #10]	@ 0004873a a872
.org 0x4873c
	adds r0, r7, #0	@ 0004873c 381c
.org 0x4873e
	bl 0x3aa4c	@ 0004873e f2f785f9
.org 0x48742
	adds r1, r5, #0	@ 00048742 291c
.org 0x48744
	adds r1, #189	@ 00048744 bd31
.org 0x48746
	movs r0, #1	@ 00048746 0120
.org 0x48748
	strb r0, [r1, #0]	@ 00048748 0870
.org 0x4874a
	strb r0, [r5, #13]	@ 0004874a 6873
.org 0x4874c
	ldr r0, [r5, #84]	@ 0004874c 686d
.org 0x4874e
	ldr r1, [r5, #92]	@ 0004874e e96d
.org 0x48750
	adds r0, r0, r1	@ 00048750 4018
.org 0x48752
	str r0, [r5, #84]	@ 00048752 6865
.org 0x48754
	ldr r0, [r5, #88]	@ 00048754 a86d
.org 0x48756
	ldr r1, [r5, #96]	@ 00048756 296e
.org 0x48758
	adds r0, r0, r1	@ 00048758 4018
.org 0x4875a
	str r0, [r5, #88]	@ 0004875a a865
.org 0x4875c
	adds r1, #64	@ 0004875c 4031
.org 0x4875e
	str r1, [r5, #96]	@ 0004875e 2966
.org 0x48760
	movs r0, #224	@ 00048760 e020
.org 0x48762
	lsls r0, r0, #3	@ 00048762 c000
.org 0x48764
	cmp r1, r0	@ 00048764 8142
.org 0x48766
	ble.n 0x4876a	@ 00048766 00dd
.org 0x48768
	str r0, [r5, #96]	@ 00048768 2866
.org 0x4876a
	ldr r0, [r5, #84]	@ 0004876a 686d
.org 0x4876c
	ldr r1, [r5, #88]	@ 0004876c a96d
.org 0x4876e
	bl 0x488e4	@ 0004876e 00f0b9f8
.org 0x48772
	lsls r0, r0, #16	@ 00048772 0004
.org 0x48774
	lsrs r2, r0, #16	@ 00048774 020c
.org 0x48776
	ldrb r0, [r5, #19]	@ 00048776 e87c
.org 0x48778
	subs r0, #1	@ 00048778 0138
.org 0x4877a
	strb r0, [r5, #19]	@ 0004877a e874
.org 0x4877c
	lsls r0, r0, #24	@ 0004877c 0006
.org 0x4877e
	lsrs r0, r0, #24	@ 0004877e 000e
.org 0x48780
	cmp r0, #255	@ 00048780 ff28
.org 0x48782
	beq.n 0x487a0	@ 00048782 0dd0
.org 0x48784
	adds r0, r5, #0	@ 00048784 281c
.org 0x48786
	adds r0, #140	@ 00048786 8c30
.org 0x48788
	ldr r1, [r0, #0]	@ 00048788 0168
.org 0x4878a
	movs r0, #4	@ 0004878a 0420
.org 0x4878c
	ands r0, r1	@ 0004878c 0840
.org 0x4878e
	cmp r0, #0	@ 0004878e 0028
.org 0x48790
	bne.n 0x487a0	@ 00048790 06d1
.org 0x48792
	cmp r2, #0	@ 00048792 002a
.org 0x48794
	bne.n 0x487a0	@ 00048794 04d1
.org 0x48796
	movs r0, #128	@ 00048796 8020
.org 0x48798
	lsls r0, r0, #5	@ 00048798 4001
.org 0x4879a
	ands r1, r0	@ 0004879a 0140
.org 0x4879c
	cmp r1, #0	@ 0004879c 0029
.org 0x4879e
	beq.n 0x487c2	@ 0004879e 10d0
.org 0x487a0
	adds r1, r5, #0	@ 000487a0 291c
.org 0x487a2
	adds r1, #84	@ 000487a2 5431
.org 0x487a4
	movs r0, #1	@ 000487a4 0120
.org 0x487a6
	bl 0xd0c88	@ 000487a6 88f06ffa
.org 0x487aa
	movs r0, #53	@ 000487aa 3520
.org 0x487ac
	bl 0x2b10	@ 000487ac baf7b0f9
.org 0x487b0
	ldr r1, [pc, #36]	@ 000487b0 0949
.org 0x487b2
	ldrb r0, [r5, #9]	@ 000487b2 687a
.org 0x487b4
	lsls r0, r0, #2	@ 000487b4 8000
.org 0x487b6
	adds r0, r0, r1	@ 000487b6 4018
.org 0x487b8
	movs r1, #2	@ 000487b8 0221
.org 0x487ba
	str r1, [r5, #12]	@ 000487ba e960
.org 0x487bc
	ldr r0, [r0, #0]	@ 000487bc 0068
.org 0x487be
	ldr r0, [r0, #8]	@ 000487be 8068
.org 0x487c0
	str r0, [r5, #20]	@ 000487c0 6861
.org 0x487c2
	pop {r3}	@ 000487c2 08bc
