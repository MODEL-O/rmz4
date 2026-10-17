@ FUN_0802c670  entry 0x0802c670  size 306
.thumb
.org 0x2c670
FUN_0802c670:
	push {r4, r5, r6, r7, lr}	@ 0002c670 f0b5
.org 0x2c672
	mov r7, r9	@ 0002c672 4f46
.org 0x2c674
	mov r6, r8	@ 0002c674 4646
.org 0x2c676
	push {r6, r7}	@ 0002c676 c0b4
.org 0x2c678
	adds r5, r0, #0	@ 0002c678 051c
.org 0x2c67a
	adds r7, r1, #0	@ 0002c67a 0f1c
.org 0x2c67c
	adds r0, #148	@ 0002c67c 9430
.org 0x2c67e
	ldrb r0, [r0, #0]	@ 0002c67e 0078
.org 0x2c680
	ldr r1, [pc, #40]	@ 0002c680 0a49
.org 0x2c682
	mov r8, r1	@ 0002c682 8846
.org 0x2c684
	cmp r0, #0	@ 0002c684 0028
.org 0x2c686
	beq.n 0x2c68c	@ 0002c686 01d0
.org 0x2c688
	ldr r2, [pc, #36]	@ 0002c688 094a
.org 0x2c68a
	mov r8, r2	@ 0002c68a 9046
.org 0x2c68c
	ldrb r1, [r5, #10]	@ 0002c68c a97a
.org 0x2c68e
	movs r0, #16	@ 0002c68e 1020
.org 0x2c690
	ands r0, r1	@ 0002c690 0840
.org 0x2c692
	cmp r0, #0	@ 0002c692 0028
.org 0x2c694
	beq.n 0x2c6b4	@ 0002c694 0ed0
.org 0x2c696
	movs r1, #0	@ 0002c696 0021
.org 0x2c698
	ldrsh r0, [r7, r1]	@ 0002c698 785e
.org 0x2c69a
	ldr r1, [r5, #84]	@ 0002c69a 696d
.org 0x2c69c
	subs r1, r1, r0	@ 0002c69c 091a
.org 0x2c69e
	ldrh r0, [r7, #4]	@ 0002c69e b888
.org 0x2c6a0
	lsls r0, r0, #16	@ 0002c6a0 0004
.org 0x2c6a2
	asrs r0, r0, #17	@ 0002c6a2 4014
.org 0x2c6a4
	adds r1, r1, r0	@ 0002c6a4 0918
.org 0x2c6a6
	adds r6, r1, #1	@ 0002c6a6 4e1c
.org 0x2c6a8
	b.n 0x2c6c6	@ 0002c6a8 0de0
.org 0x2c6aa
	.byte 0x00	@ 0002c6aa data
.org 0x2c6ab
	.byte 0x00	@ 0002c6ab data
.org 0x2c6ac
	.byte 0x1f,0x88,0x00,0x00	@ 0002c6ac data
.org 0x2c6b0
	.byte 0x0f,0x88,0x00,0x00	@ 0002c6b0 data
.org 0x2c6b4
	movs r2, #0	@ 0002c6b4 0022
.org 0x2c6b6
	ldrsh r0, [r7, r2]	@ 0002c6b6 b85e
.org 0x2c6b8
	ldr r1, [r5, #84]	@ 0002c6b8 696d
.org 0x2c6ba
	adds r1, r1, r0	@ 0002c6ba 0918
.org 0x2c6bc
	ldrh r0, [r7, #4]	@ 0002c6bc b888
.org 0x2c6be
	lsls r0, r0, #16	@ 0002c6be 0004
.org 0x2c6c0
	asrs r0, r0, #17	@ 0002c6c0 4014
.org 0x2c6c2
	subs r1, r1, r0	@ 0002c6c2 091a
.org 0x2c6c4
	subs r6, r1, #1	@ 0002c6c4 4e1e
.org 0x2c6c6
	movs r1, #2	@ 0002c6c6 0221
.org 0x2c6c8
	ldrsh r0, [r7, r1]	@ 0002c6c8 785e
.org 0x2c6ca
	ldr r1, [r5, #88]	@ 0002c6ca a96d
.org 0x2c6cc
	adds r1, r1, r0	@ 0002c6cc 0918
.org 0x2c6ce
	ldrh r0, [r7, #6]	@ 0002c6ce f888
.org 0x2c6d0
	lsls r0, r0, #16	@ 0002c6d0 0004
.org 0x2c6d2
	asrs r0, r0, #17	@ 0002c6d2 4014
.org 0x2c6d4
	adds r1, r1, r0	@ 0002c6d4 0918
.org 0x2c6d6
	ldr r2, [pc, #200]	@ 0002c6d6 324a
.org 0x2c6d8
	adds r4, r1, r2	@ 0002c6d8 8c18
.org 0x2c6da
	adds r0, r5, #0	@ 0002c6da 281c
.org 0x2c6dc
	adds r1, r6, #0	@ 0002c6dc 311c
.org 0x2c6de
	adds r2, r4, #0	@ 0002c6de 221c
.org 0x2c6e0
	bl 0x2e474	@ 0002c6e0 01f0c8fe
.org 0x2c6e4
	lsls r0, r0, #24	@ 0002c6e4 0006
.org 0x2c6e6
	cmp r0, #0	@ 0002c6e6 0028
.org 0x2c6e8
	bne.n 0x2c7a4	@ 0002c6e8 5cd1
.org 0x2c6ea
	adds r0, r6, #0	@ 0002c6ea 301c
.org 0x2c6ec
	adds r1, r4, #0	@ 0002c6ec 211c
.org 0x2c6ee
	bl 0x7020	@ 0002c6ee daf797fc
.org 0x2c6f2
	adds r1, r0, #0	@ 0002c6f2 011c
.org 0x2c6f4
	mov r0, r8	@ 0002c6f4 4046
.org 0x2c6f6
	ands r0, r1	@ 0002c6f6 0840
.org 0x2c6f8
	ldrb r1, [r5, #10]	@ 0002c6f8 a97a
.org 0x2c6fa
	lsrs r1, r1, #4	@ 0002c6fa 0909
.org 0x2c6fc
	movs r2, #1	@ 0002c6fc 0122
.org 0x2c6fe
	ands r1, r2	@ 0002c6fe 1140
.org 0x2c700
	bl 0x2f084	@ 0002c700 02f0c0fc
.org 0x2c704
	lsls r0, r0, #24	@ 0002c704 0006
.org 0x2c706
	cmp r0, #0	@ 0002c706 0028
.org 0x2c708
	beq.n 0x2c71e	@ 0002c708 09d0
.org 0x2c70a
	ldrb r1, [r5, #10]	@ 0002c70a a97a
.org 0x2c70c
	movs r0, #16	@ 0002c70c 1020
.org 0x2c70e
	ands r0, r1	@ 0002c70e 0840
.org 0x2c710
	adds r0, r6, #0	@ 0002c710 301c
.org 0x2c712
	adds r1, r4, #0	@ 0002c712 211c
.org 0x2c714
	bl 0x7020	@ 0002c714 daf784fc
.org 0x2c718
	lsls r0, r0, #16	@ 0002c718 0004
.org 0x2c71a
	cmp r0, #0	@ 0002c71a 0028
.org 0x2c71c
	beq.n 0x2c7a4	@ 0002c71c 42d0
.org 0x2c71e
	movs r0, #2	@ 0002c71e 0220
.org 0x2c720
	ldrsh r1, [r7, r0]	@ 0002c720 395e
.org 0x2c722
	ldr r0, [r5, #88]	@ 0002c722 a86d
.org 0x2c724
	adds r4, r0, r1	@ 0002c724 4418
.org 0x2c726
	adds r0, r5, #0	@ 0002c726 281c
.org 0x2c728
	adds r1, r6, #0	@ 0002c728 311c
.org 0x2c72a
	adds r2, r4, #0	@ 0002c72a 221c
.org 0x2c72c
	bl 0x2e474	@ 0002c72c 01f0a2fe
.org 0x2c730
	lsls r0, r0, #24	@ 0002c730 0006
.org 0x2c732
	cmp r0, #0	@ 0002c732 0028
.org 0x2c734
	bne.n 0x2c7a4	@ 0002c734 36d1
.org 0x2c736
	adds r0, r6, #0	@ 0002c736 301c
.org 0x2c738
	adds r1, r4, #0	@ 0002c738 211c
.org 0x2c73a
	bl 0x7020	@ 0002c73a daf771fc
.org 0x2c73e
	adds r1, r0, #0	@ 0002c73e 011c
.org 0x2c740
	mov r0, r8	@ 0002c740 4046
.org 0x2c742
	ands r0, r1	@ 0002c742 0840
.org 0x2c744
	ldrb r1, [r5, #10]	@ 0002c744 a97a
.org 0x2c746
	lsrs r1, r1, #4	@ 0002c746 0909
.org 0x2c748
	movs r2, #1	@ 0002c748 0122
.org 0x2c74a
	mov r9, r2	@ 0002c74a 9146
.org 0x2c74c
	ands r1, r2	@ 0002c74c 1140
.org 0x2c74e
	bl 0x2f084	@ 0002c74e 02f099fc
.org 0x2c752
	lsls r0, r0, #24	@ 0002c752 0006
.org 0x2c754
	cmp r0, #0	@ 0002c754 0028
.org 0x2c756
	bne.n 0x2c7a4	@ 0002c756 25d1
.org 0x2c758
	movs r1, #2	@ 0002c758 0221
.org 0x2c75a
	ldrsh r0, [r7, r1]	@ 0002c75a 785e
.org 0x2c75c
	ldr r1, [r5, #88]	@ 0002c75c a96d
.org 0x2c75e
	adds r1, r1, r0	@ 0002c75e 0918
.org 0x2c760
	ldrh r0, [r7, #6]	@ 0002c760 f888
.org 0x2c762
	lsls r0, r0, #16	@ 0002c762 0004
.org 0x2c764
	asrs r0, r0, #17	@ 0002c764 4014
.org 0x2c766
	subs r4, r1, r0	@ 0002c766 0c1a
.org 0x2c768
	adds r0, r5, #0	@ 0002c768 281c
.org 0x2c76a
	adds r1, r6, #0	@ 0002c76a 311c
.org 0x2c76c
	adds r2, r4, #0	@ 0002c76c 221c
.org 0x2c76e
	bl 0x2e474	@ 0002c76e 01f081fe
.org 0x2c772
	lsls r0, r0, #24	@ 0002c772 0006
.org 0x2c774
	cmp r0, #0	@ 0002c774 0028
.org 0x2c776
	bne.n 0x2c7a4	@ 0002c776 15d1
.org 0x2c778
	adds r0, r6, #0	@ 0002c778 301c
.org 0x2c77a
	adds r1, r4, #0	@ 0002c77a 211c
.org 0x2c77c
	bl 0x7020	@ 0002c77c daf750fc
.org 0x2c780
	mov r2, r8	@ 0002c780 4246
.org 0x2c782
	ands r2, r0	@ 0002c782 0240
.org 0x2c784
	mov r8, r2	@ 0002c784 9046
.org 0x2c786
	ldrb r1, [r5, #10]	@ 0002c786 a97a
.org 0x2c788
	lsrs r1, r1, #4	@ 0002c788 0909
.org 0x2c78a
	mov r0, r9	@ 0002c78a 4846
.org 0x2c78c
	ands r1, r0	@ 0002c78c 0140
.org 0x2c78e
	mov r0, r8	@ 0002c78e 4046
.org 0x2c790
	bl 0x2f084	@ 0002c790 02f078fc
.org 0x2c794
	lsls r0, r0, #24	@ 0002c794 0006
.org 0x2c796
	cmp r0, #0	@ 0002c796 0028
.org 0x2c798
	bne.n 0x2c7a4	@ 0002c798 04d1
.org 0x2c79a
	movs r0, #0	@ 0002c79a 0020
.org 0x2c79c
	b.n 0x2c7a6	@ 0002c79c 03e0
.org 0x2c79e
	.byte 0x00	@ 0002c79e data
.org 0x2c79f
	.byte 0x00	@ 0002c79f data
.org 0x2c7a0
	.byte 0x00,0xfe,0xff,0xff	@ 0002c7a0 data
