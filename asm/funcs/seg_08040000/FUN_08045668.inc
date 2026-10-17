@ FUN_08045668  entry 0x08045668  size 282
.thumb
.org 0x45668
FUN_08045668:
	push {r4, r5, r6, r7, lr}	@ 00045668 f0b5
.org 0x4566a
	adds r5, r0, #0	@ 0004566a 051c
.org 0x4566c
	adds r4, r1, #0	@ 0004566c 0c1c
.org 0x4566e
	lsls r2, r2, #24	@ 0004566e 1206
.org 0x45670
	lsrs r6, r2, #24	@ 00045670 160e
.org 0x45672
	lsls r3, r3, #24	@ 00045672 1b06
.org 0x45674
	lsrs r7, r3, #24	@ 00045674 1f0e
.org 0x45676
	ldr r0, [pc, #68]	@ 00045676 1148
.org 0x45678
	ldr r0, [r0, #0]	@ 00045678 0068
.org 0x4567a
	bl 0x5500	@ 0004567a bff741ff
.org 0x4567e
	mov ip, r0	@ 0004567e 8446
.org 0x45680
	cmp r0, #0	@ 00045680 0028
.org 0x45682
	bne.n 0x45686	@ 00045682 00d1
.org 0x45684
	b.n 0x4579c	@ 00045684 8ae0
.org 0x45686
	adds r0, r5, #0	@ 00045686 281c
.org 0x45688
	adds r0, #248	@ 00045688 f830
.org 0x4568a
	ldrb r0, [r0, #0]	@ 0004568a 0078
.org 0x4568c
	cmp r0, #2	@ 0004568c 0228
.org 0x4568e
	bne.n 0x456cc	@ 0004568e 1dd1
.org 0x45690
	ldr r1, [pc, #44]	@ 00045690 0b49
.org 0x45692
	movs r0, #23	@ 00045692 1720
.org 0x45694
	mov r2, ip	@ 00045694 6246
.org 0x45696
	strb r0, [r2, #9]	@ 00045696 5072
.org 0x45698
	ldr r0, [r1, #92]	@ 00045698 c86d
.org 0x4569a
	ldr r0, [r0, #0]	@ 0004569a 0068
.org 0x4569c
	str r0, [r2, #20]	@ 0004569c 5061
.org 0x4569e
	ldrb r1, [r2, #11]	@ 0004569e d17a
.org 0x456a0
	movs r0, #191	@ 000456a0 bf20
.org 0x456a2
	ands r0, r1	@ 000456a2 0840
.org 0x456a4
	strb r0, [r2, #11]	@ 000456a4 d072
.org 0x456a6
	mov r1, ip	@ 000456a6 6146
.org 0x456a8
	adds r1, #37	@ 000456a8 2531
.org 0x456aa
	movs r0, #16	@ 000456aa 1020
.org 0x456ac
	strb r0, [r1, #0]	@ 000456ac 0870
.org 0x456ae
	ldr r0, [pc, #20]	@ 000456ae 0548
.org 0x456b0
	ldrh r0, [r0, #0]	@ 000456b0 0088
.org 0x456b2
	strh r0, [r2, #32]	@ 000456b2 1084
.org 0x456b4
	ldr r0, [pc, #16]	@ 000456b4 0448
.org 0x456b6
	ldrb r0, [r0, #0]	@ 000456b6 0078
.org 0x456b8
	b.n 0x456f4	@ 000456b8 1ce0
.org 0x456ba
	.byte 0x00	@ 000456ba data
.org 0x456bb
	.byte 0x00	@ 000456bb data
.org 0x456bc
	.byte 0x88,0xed,0x02,0x02	@ 000456bc data
.org 0x456c0
	.byte 0xf8,0x39,0x85,0x08	@ 000456c0 data
.org 0x456c4
	.byte 0xfc,0x36,0x85,0x08	@ 000456c4 data
.org 0x456c8
	.byte 0x04,0x37,0x85,0x08	@ 000456c8 data
.org 0x456cc
	ldr r1, [pc, #96]	@ 000456cc 1849
.org 0x456ce
	movs r0, #23	@ 000456ce 1720
.org 0x456d0
	mov r2, ip	@ 000456d0 6246
.org 0x456d2
	strb r0, [r2, #9]	@ 000456d2 5072
.org 0x456d4
	ldr r0, [r1, #92]	@ 000456d4 c86d
.org 0x456d6
	ldr r0, [r0, #0]	@ 000456d6 0068
.org 0x456d8
	str r0, [r2, #20]	@ 000456d8 5061
.org 0x456da
	ldrb r1, [r2, #11]	@ 000456da d17a
.org 0x456dc
	movs r0, #191	@ 000456dc bf20
.org 0x456de
	ands r0, r1	@ 000456de 0840
.org 0x456e0
	strb r0, [r2, #11]	@ 000456e0 d072
.org 0x456e2
	mov r1, ip	@ 000456e2 6146
.org 0x456e4
	adds r1, #37	@ 000456e4 2531
.org 0x456e6
	movs r0, #16	@ 000456e6 1020
.org 0x456e8
	strb r0, [r1, #0]	@ 000456e8 0870
.org 0x456ea
	ldr r0, [pc, #72]	@ 000456ea 1248
.org 0x456ec
	ldrh r0, [r0, #2]	@ 000456ec 4088
.org 0x456ee
	strh r0, [r2, #32]	@ 000456ee 1084
.org 0x456f0
	ldr r0, [pc, #68]	@ 000456f0 1148
.org 0x456f2
	ldrb r0, [r0, #1]	@ 000456f2 4078
.org 0x456f4
	subs r1, #3	@ 000456f4 0339
.org 0x456f6
	strb r0, [r1, #0]	@ 000456f6 0870
.org 0x456f8
	mov r0, ip	@ 000456f8 6046
.org 0x456fa
	str r4, [r0, #40]	@ 000456fa 8462
.org 0x456fc
	str r5, [r0, #44]	@ 000456fc c562
.org 0x456fe
	mov r1, ip	@ 000456fe 6146
.org 0x45700
	adds r1, #188	@ 00045700 bc31
.org 0x45702
	adds r0, r4, #0	@ 00045702 201c
.org 0x45704
	adds r0, #188	@ 00045704 bc30
.org 0x45706
	ldr r0, [r0, #0]	@ 00045706 0068
.org 0x45708
	str r0, [r1, #0]	@ 00045708 0860
.org 0x4570a
	adds r1, #4	@ 0004570a 0431
.org 0x4570c
	adds r0, r4, #0	@ 0004570c 201c
.org 0x4570e
	adds r0, #192	@ 0004570e c030
.org 0x45710
	ldr r0, [r0, #0]	@ 00045710 0068
.org 0x45712
	str r0, [r1, #0]	@ 00045712 0860
.org 0x45714
	movs r1, #0	@ 00045714 0021
.org 0x45716
	movs r0, #2	@ 00045716 0220
.org 0x45718
	mov r2, ip	@ 00045718 6246
.org 0x4571a
	strb r0, [r2, #16]	@ 0004571a 1074
.org 0x4571c
	strb r1, [r2, #17]	@ 0004571c 5174
.org 0x4571e
	adds r2, r6, #0	@ 0004571e 321c
.org 0x45720
	cmp r2, #0	@ 00045720 002a
.org 0x45722
	beq.n 0x4573c	@ 00045722 0bd0
.org 0x45724
	mov r1, ip	@ 00045724 6146
.org 0x45726
	ldrb r0, [r1, #10]	@ 00045726 887a
.org 0x45728
	movs r1, #16	@ 00045728 1021
.org 0x4572a
	orrs r0, r1	@ 0004572a 0843
.org 0x4572c
	b.n 0x45744	@ 0004572c 0ae0
.org 0x4572e
	.byte 0x00	@ 0004572e data
.org 0x4572f
	.byte 0x00	@ 0004572f data
.org 0x45730
	.byte 0xf8,0x39,0x85,0x08	@ 00045730 data
.org 0x45734
	.byte 0xfc,0x36,0x85,0x08	@ 00045734 data
.org 0x45738
	.byte 0x04,0x37,0x85,0x08	@ 00045738 data
.org 0x4573c
	mov r0, ip	@ 0004573c 6046
.org 0x4573e
	ldrb r1, [r0, #10]	@ 0004573e 817a
.org 0x45740
	movs r0, #239	@ 00045740 ef20
.org 0x45742
	ands r0, r1	@ 00045742 0840
.org 0x45744
	mov r1, ip	@ 00045744 6146
.org 0x45746
	strb r0, [r1, #10]	@ 00045746 8872
.org 0x45748
	movs r1, #1	@ 00045748 0121
.org 0x4574a
	ands r1, r2	@ 0004574a 1140
.org 0x4574c
	mov r0, ip	@ 0004574c 6046
.org 0x4574e
	adds r0, #76	@ 0004574e 4c30
.org 0x45750
	strb r1, [r0, #0]	@ 00045750 0170
.org 0x45752
	mov r2, ip	@ 00045752 6246
.org 0x45754
	adds r2, #74	@ 00045754 4a32
.org 0x45756
	lsls r1, r1, #4	@ 00045756 0901
.org 0x45758
	ldrb r3, [r2, #0]	@ 00045758 1378
.org 0x4575a
	movs r0, #17	@ 0004575a 1120
.org 0x4575c
	negs r0, r0	@ 0004575c 4042
.org 0x4575e
	ands r0, r3	@ 0004575e 1840
.org 0x45760
	orrs r0, r1	@ 00045760 0843
.org 0x45762
	strb r0, [r2, #0]	@ 00045762 1070
.org 0x45764
	adds r3, r7, #0	@ 00045764 3b1c
.org 0x45766
	adds r4, r2, #0	@ 00045766 141c
.org 0x45768
	cmp r3, #0	@ 00045768 002b
.org 0x4576a
	beq.n 0x45778	@ 0004576a 05d0
.org 0x4576c
	mov r2, ip	@ 0004576c 6246
.org 0x4576e
	ldrb r0, [r2, #10]	@ 0004576e 907a
.org 0x45770
	movs r1, #32	@ 00045770 2021
.org 0x45772
	orrs r0, r1	@ 00045772 0843
.org 0x45774
	strb r0, [r2, #10]	@ 00045774 9072
.org 0x45776
	b.n 0x45784	@ 00045776 05e0
.org 0x45778
	mov r0, ip	@ 00045778 6046
.org 0x4577a
	ldrb r1, [r0, #10]	@ 0004577a 817a
.org 0x4577c
	movs r0, #223	@ 0004577c df20
.org 0x4577e
	ands r0, r1	@ 0004577e 0840
.org 0x45780
	mov r1, ip	@ 00045780 6146
