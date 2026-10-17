@ FUN_0805e634  entry 0x0805e634  size 322
.thumb
.org 0x5e634
FUN_0805e634:
	push {r4, r5, r6, r7, lr}	@ 0005e634 f0b5
.org 0x5e636
	mov r7, sl	@ 0005e636 5746
.org 0x5e638
	mov r6, r9	@ 0005e638 4e46
.org 0x5e63a
	mov r5, r8	@ 0005e63a 4546
.org 0x5e63c
	push {r5, r6, r7}	@ 0005e63c e0b4
.org 0x5e63e
	adds r7, r0, #0	@ 0005e63e 071c
.org 0x5e640
	ldrb r0, [r7, #15]	@ 0005e640 f87b
.org 0x5e642
	cmp r0, #0	@ 0005e642 0028
.org 0x5e644
	bne.n 0x5e6f2	@ 0005e644 55d1
.org 0x5e646
	ldr r4, [pc, #264]	@ 0005e646 424c
.org 0x5e648
	ldr r0, [pc, #264]	@ 0005e648 4248
.org 0x5e64a
	mov r8, r0	@ 0005e64a 8046
.org 0x5e64c
	adds r0, r4, r0	@ 0005e64c 2018
.org 0x5e64e
	ldr r6, [pc, #264]	@ 0005e64e 424e
.org 0x5e650
	adds r1, r6, #0	@ 0005e650 311c
.org 0x5e652
	adds r1, #170	@ 0005e652 aa31
.org 0x5e654
	ldrh r1, [r1, #0]	@ 0005e654 0988
.org 0x5e656
	ldrh r2, [r0, #6]	@ 0005e656 c288
.org 0x5e658
	lsrs r2, r2, #6	@ 0005e658 9209
.org 0x5e65a
	subs r1, r1, r2	@ 0005e65a 891a
.org 0x5e65c
	lsls r1, r1, #5	@ 0005e65c 4901
.org 0x5e65e
	movs r2, #128	@ 0005e65e 8022
.org 0x5e660
	lsls r2, r2, #9	@ 0005e660 5202
.org 0x5e662
	adds r1, r1, r2	@ 0005e662 8918
.org 0x5e664
	bl 0x1d30	@ 0005e664 a3f764fb
.org 0x5e668
	ldr r0, [pc, #240]	@ 0005e668 3c48
.org 0x5e66a
	mov sl, r0	@ 0005e66a 8246
.org 0x5e66c
	add r4, sl	@ 0005e66c 5444
.org 0x5e66e
	ldr r5, [pc, #240]	@ 0005e66e 3c4d
.org 0x5e670
	adds r0, r5, #0	@ 0005e670 281c
.org 0x5e672
	adds r0, #170	@ 0005e672 aa30
.org 0x5e674
	ldrh r1, [r0, #0]	@ 0005e674 0188
.org 0x5e676
	ldrb r0, [r4, #7]	@ 0005e676 e079
.org 0x5e678
	subs r1, r1, r0	@ 0005e678 091a
.org 0x5e67a
	lsls r1, r1, #5	@ 0005e67a 4901
.org 0x5e67c
	movs r2, #128	@ 0005e67c 8022
.org 0x5e67e
	lsls r2, r2, #2	@ 0005e67e 9200
.org 0x5e680
	mov r9, r2	@ 0005e680 9146
.org 0x5e682
	add r1, r9	@ 0005e682 4944
.org 0x5e684
	adds r0, r4, #0	@ 0005e684 201c
.org 0x5e686
	bl 0x2208	@ 0005e686 a3f7bffd
.org 0x5e68a
	movs r4, #215	@ 0005e68a d724
.org 0x5e68c
	lsls r4, r4, #3	@ 0005e68c e400
.org 0x5e68e
	add r8, r4	@ 0005e68e a044
.org 0x5e690
	adds r6, #172	@ 0005e690 ac36
.org 0x5e692
	ldrh r1, [r6, #0]	@ 0005e692 3188
.org 0x5e694
	mov r2, r8	@ 0005e694 4246
.org 0x5e696
	ldrh r0, [r2, #6]	@ 0005e696 d088
.org 0x5e698
	lsrs r0, r0, #6	@ 0005e698 8009
.org 0x5e69a
	subs r1, r1, r0	@ 0005e69a 091a
.org 0x5e69c
	lsls r1, r1, #5	@ 0005e69c 4901
.org 0x5e69e
	movs r0, #128	@ 0005e69e 8020
.org 0x5e6a0
	lsls r0, r0, #9	@ 0005e6a0 4002
.org 0x5e6a2
	adds r1, r1, r0	@ 0005e6a2 0918
.org 0x5e6a4
	mov r0, r8	@ 0005e6a4 4046
.org 0x5e6a6
	bl 0x1d30	@ 0005e6a6 a3f743fb
.org 0x5e6aa
	add r4, sl	@ 0005e6aa 5444
.org 0x5e6ac
	adds r5, #172	@ 0005e6ac ac35
.org 0x5e6ae
	ldrh r1, [r5, #0]	@ 0005e6ae 2988
.org 0x5e6b0
	ldrb r0, [r4, #7]	@ 0005e6b0 e079
.org 0x5e6b2
	subs r1, r1, r0	@ 0005e6b2 091a
.org 0x5e6b4
	lsls r1, r1, #5	@ 0005e6b4 4901
.org 0x5e6b6
	add r1, r9	@ 0005e6b6 4944
.org 0x5e6b8
	adds r0, r4, #0	@ 0005e6b8 201c
.org 0x5e6ba
	bl 0x2208	@ 0005e6ba a3f7a5fd
.org 0x5e6be
	adds r4, r7, #0	@ 0005e6be 3c1c
.org 0x5e6c0
	adds r4, #204	@ 0005e6c0 cc34
.org 0x5e6c2
	ldr r0, [r4, #0]	@ 0005e6c2 2068
.org 0x5e6c4
	cmp r0, #0	@ 0005e6c4 0028
.org 0x5e6c6
	bne.n 0x5e6e8	@ 0005e6c6 0fd1
.org 0x5e6c8
	ldr r2, [pc, #152]	@ 0005e6c8 264a
.org 0x5e6ca
	ldr r1, [r2, #0]	@ 0005e6ca 1168
.org 0x5e6cc
	ldr r0, [pc, #152]	@ 0005e6cc 2648
.org 0x5e6ce
	muls r1, r0	@ 0005e6ce 4143
.org 0x5e6d0
	ldr r0, [pc, #152]	@ 0005e6d0 2648
.org 0x5e6d2
	adds r1, r1, r0	@ 0005e6d2 0918
.org 0x5e6d4
	lsls r1, r1, #1	@ 0005e6d4 4900
.org 0x5e6d6
	lsrs r0, r1, #1	@ 0005e6d6 4808
.org 0x5e6d8
	str r0, [r2, #0]	@ 0005e6d8 1060
.org 0x5e6da
	lsrs r1, r1, #17	@ 0005e6da 490c
.org 0x5e6dc
	movs r0, #3	@ 0005e6dc 0320
.org 0x5e6de
	ands r1, r0	@ 0005e6de 0140
.org 0x5e6e0
	adds r0, r7, #0	@ 0005e6e0 381c
.org 0x5e6e2
	bl 0xc5400	@ 0005e6e2 66f08dfe
.org 0x5e6e6
	str r0, [r4, #0]	@ 0005e6e6 2060
.org 0x5e6e8
	movs r0, #16	@ 0005e6e8 1020
.org 0x5e6ea
	strb r0, [r7, #18]	@ 0005e6ea b874
.org 0x5e6ec
	ldrb r0, [r7, #15]	@ 0005e6ec f87b
.org 0x5e6ee
	adds r0, #1	@ 0005e6ee 0130
.org 0x5e6f0
	strb r0, [r7, #15]	@ 0005e6f0 f873
.org 0x5e6f2
	adds r0, r7, #0	@ 0005e6f2 381c
.org 0x5e6f4
	bl 0x1cff0	@ 0005e6f4 bef77cfc
.org 0x5e6f8
	adds r0, r7, #0	@ 0005e6f8 381c
.org 0x5e6fa
	adds r0, #116	@ 0005e6fa 7430
.org 0x5e6fc
	ldr r4, [pc, #112]	@ 0005e6fc 1c4c
.org 0x5e6fe
	ldr r3, [pc, #116]	@ 0005e6fe 1d4b
.org 0x5e700
	adds r1, r7, #0	@ 0005e700 391c
.org 0x5e702
	adds r1, #184	@ 0005e702 b831
.org 0x5e704
	ldrb r2, [r1, #0]	@ 0005e704 0a78
.org 0x5e706
	lsls r1, r2, #1	@ 0005e706 5100
.org 0x5e708
	adds r1, r1, r3	@ 0005e708 c918
.org 0x5e70a
	ldrh r1, [r1, #0]	@ 0005e70a 0988
.org 0x5e70c
	lsls r1, r1, #2	@ 0005e70c 8900
.org 0x5e70e
	adds r1, r1, r4	@ 0005e70e 0919
.org 0x5e710
	adds r3, r7, #0	@ 0005e710 3b1c
.org 0x5e712
	adds r3, #113	@ 0005e712 7133
.org 0x5e714
	movs r4, #0	@ 0005e714 0024
.org 0x5e716
	ldrsb r4, [r3, r4]	@ 0005e716 1c57
.org 0x5e718
	ldr r1, [r1, #0]	@ 0005e718 0968
.org 0x5e71a
	lsls r3, r4, #2	@ 0005e71a a300
.org 0x5e71c
	adds r3, r3, r1	@ 0005e71c 5b18
.org 0x5e71e
	ldr r1, [pc, #88]	@ 0005e71e 1649
.org 0x5e720
	lsls r2, r2, #2	@ 0005e720 9200
.org 0x5e722
	adds r2, r2, r1	@ 0005e722 5218
.org 0x5e724
	ldr r1, [r2, #0]	@ 0005e724 1168
.org 0x5e726
	adds r1, r1, r4	@ 0005e726 0919
.org 0x5e728
	ldrb r1, [r1, #0]	@ 0005e728 0978
.org 0x5e72a
	lsls r2, r1, #1	@ 0005e72a 4a00
.org 0x5e72c
	adds r2, r2, r1	@ 0005e72c 5218
.org 0x5e72e
	lsls r2, r2, #3	@ 0005e72e d200
.org 0x5e730
	ldr r1, [r3, #0]	@ 0005e730 1968
.org 0x5e732
	adds r1, r1, r2	@ 0005e732 8918
.org 0x5e734
	bl 0x5784	@ 0005e734 a7f726f8
.org 0x5e738
	adds r2, r7, #0	@ 0005e738 3a1c
.org 0x5e73a
	adds r2, #204	@ 0005e73a cc32
.org 0x5e73c
	ldr r1, [r2, #0]	@ 0005e73c 1168
.org 0x5e73e
	cmp r1, #0	@ 0005e73e 0029
.org 0x5e740
	beq.n 0x5e782	@ 0005e740 1fd0
.org 0x5e742
	ldrb r0, [r1, #12]	@ 0005e742 087b
.org 0x5e744
	cmp r0, #2	@ 0005e744 0228
.org 0x5e746
	bls.n 0x5e77c	@ 0005e746 19d9
.org 0x5e748
	movs r0, #0	@ 0005e748 0020
.org 0x5e74a
	str r0, [r2, #0]	@ 0005e74a 1060
.org 0x5e74c
	b.n 0x5e782	@ 0005e74c 19e0
.org 0x5e74e
	.byte 0x00	@ 0005e74e data
.org 0x5e74f
	.byte 0x00	@ 0005e74f data
.org 0x5e750
	.byte 0xa4,0x06,0x00,0x00	@ 0005e750 data
.org 0x5e754
	.byte 0x00,0x40,0xc4,0x08	@ 0005e754 data
.org 0x5e758
	.byte 0x40,0xe0,0x02,0x02	@ 0005e758 data
.org 0x5e75c
	.byte 0x0c,0x40,0xc4,0x08	@ 0005e75c data
.org 0x5e760
	.byte 0x40,0xde,0x02,0x02	@ 0005e760 data
.org 0x5e764
	.byte 0x38,0xdc,0x02,0x02	@ 0005e764 data
.org 0x5e768
	.byte 0xfd,0x43,0x03,0x00	@ 0005e768 data
.org 0x5e76c
	.byte 0xc3,0x9e,0x26,0x00	@ 0005e76c data
.org 0x5e770
	.byte 0xa8,0xa7,0x85,0x08	@ 0005e770 data
.org 0x5e774
	.byte 0x10,0xa9,0x85,0x08	@ 0005e774 data
