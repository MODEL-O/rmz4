@ FUN_0809e664  entry 0x0809e664  size 250
.thumb
.org 0x9e664
FUN_0809e664:
	push {r4, r5, r6, lr}	@ 0009e664 70b5
.org 0x9e666
	adds r5, r0, #0	@ 0009e666 051c
.org 0x9e668
	bl 0x1cc9c	@ 0009e668 7ef718fb
.org 0x9e66c
	ldrb r1, [r5, #10]	@ 0009e66c a97a
.org 0x9e66e
	movs r0, #1	@ 0009e66e 0120
.org 0x9e670
	movs r2, #0	@ 0009e670 0022
.org 0x9e672
	movs r6, #0	@ 0009e672 0026
.org 0x9e674
	orrs r1, r0	@ 0009e674 0143
.org 0x9e676
	movs r0, #2	@ 0009e676 0220
.org 0x9e678
	orrs r1, r0	@ 0009e678 0143
.org 0x9e67a
	orrs r1, r2	@ 0009e67a 1143
.org 0x9e67c
	strb r1, [r5, #10]	@ 0009e67c a972
.org 0x9e67e
	ldrb r0, [r5, #16]	@ 0009e67e 287c
.org 0x9e680
	cmp r0, #0	@ 0009e680 0028
.org 0x9e682
	bne.n 0x9e6b8	@ 0009e682 19d1
.org 0x9e684
	movs r0, #4	@ 0009e684 0420
.org 0x9e686
	orrs r1, r0	@ 0009e686 0143
.org 0x9e688
	strb r1, [r5, #10]	@ 0009e688 a972
.org 0x9e68a
	adds r4, r5, #0	@ 0009e68a 2c1c
.org 0x9e68c
	adds r4, #116	@ 0009e68c 7434
.org 0x9e68e
	ldr r1, [pc, #32]	@ 0009e68e 0849
.org 0x9e690
	adds r2, r5, #0	@ 0009e690 2a1c
.org 0x9e692
	adds r2, #84	@ 0009e692 5432
.org 0x9e694
	adds r0, r4, #0	@ 0009e694 201c
.org 0x9e696
	movs r3, #6	@ 0009e696 0623
.org 0x9e698
	bl 0x5760	@ 0009e698 67f762f8
.org 0x9e69c
	str r5, [r4, #44]	@ 0009e69c e562
.org 0x9e69e
	str r6, [r4, #36]	@ 0009e69e 6662
.org 0x9e6a0
	movs r0, #128	@ 0009e6a0 8020
.org 0x9e6a2
	lsls r0, r0, #2	@ 0009e6a2 8000
.org 0x9e6a4
	str r0, [r5, #92]	@ 0009e6a4 e865
.org 0x9e6a6
	ldr r1, [pc, #12]	@ 0009e6a6 0349
.org 0x9e6a8
	adds r0, r5, #0	@ 0009e6a8 281c
.org 0x9e6aa
	bl 0x1cf00	@ 0009e6aa 7ef729fc
.org 0x9e6ae
	b.n 0x9e6f0	@ 0009e6ae 1fe0
.org 0x9e6b0
	.byte 0x6c,0x16,0x86,0x08	@ 0009e6b0 data
.org 0x9e6b4
	.byte 0x0a,0x6e,0x00,0x00	@ 0009e6b4 data
.org 0x9e6b8
	movs r0, #4	@ 0009e6b8 0420
.org 0x9e6ba
	orrs r1, r0	@ 0009e6ba 0143
.org 0x9e6bc
	strb r1, [r5, #10]	@ 0009e6bc a972
.org 0x9e6be
	adds r4, r5, #0	@ 0009e6be 2c1c
.org 0x9e6c0
	adds r4, #116	@ 0009e6c0 7434
.org 0x9e6c2
	ldr r1, [pc, #72]	@ 0009e6c2 1249
.org 0x9e6c4
	adds r2, r5, #0	@ 0009e6c4 2a1c
.org 0x9e6c6
	adds r2, #84	@ 0009e6c6 5432
.org 0x9e6c8
	adds r0, r4, #0	@ 0009e6c8 201c
.org 0x9e6ca
	movs r3, #3	@ 0009e6ca 0323
.org 0x9e6cc
	bl 0x5760	@ 0009e6cc 67f748f8
.org 0x9e6d0
	str r5, [r4, #44]	@ 0009e6d0 e562
.org 0x9e6d2
	str r6, [r4, #36]	@ 0009e6d2 6662
.org 0x9e6d4
	ldr r1, [pc, #56]	@ 0009e6d4 0e49
.org 0x9e6d6
	ldrb r0, [r5, #17]	@ 0009e6d6 687c
.org 0x9e6d8
	lsls r0, r0, #2	@ 0009e6d8 8000
.org 0x9e6da
	adds r0, r0, r1	@ 0009e6da 4018
.org 0x9e6dc
	ldr r0, [r0, #0]	@ 0009e6dc 0068
.org 0x9e6de
	lsls r0, r0, #8	@ 0009e6de 0002
.org 0x9e6e0
	movs r1, #20	@ 0009e6e0 1421
.org 0x9e6e2
	bl 0x128fb8	@ 0009e6e2 8af069fc
.org 0x9e6e6
	str r0, [r5, #96]	@ 0009e6e6 2866
.org 0x9e6e8
	ldr r1, [pc, #40]	@ 0009e6e8 0a49
.org 0x9e6ea
	adds r0, r5, #0	@ 0009e6ea 281c
.org 0x9e6ec
	bl 0x1cf00	@ 0009e6ec 7ef708fc
.org 0x9e6f0
	adds r6, r4, #0	@ 0009e6f0 261c
.org 0x9e6f2
	adds r0, r5, #0	@ 0009e6f2 281c
.org 0x9e6f4
	bl 0x1cff0	@ 0009e6f4 7ef77cfc
.org 0x9e6f8
	adds r0, r5, #0	@ 0009e6f8 281c
.org 0x9e6fa
	adds r0, #180	@ 0009e6fa b430
.org 0x9e6fc
	ldrb r2, [r0, #0]	@ 0009e6fc 0278
.org 0x9e6fe
	cmp r2, #0	@ 0009e6fe 002a
.org 0x9e700
	beq.n 0x9e718	@ 0009e700 0ad0
.org 0x9e702
	ldrb r1, [r5, #10]	@ 0009e702 a97a
.org 0x9e704
	movs r0, #16	@ 0009e704 1020
.org 0x9e706
	orrs r0, r1	@ 0009e706 0843
.org 0x9e708
	b.n 0x9e71e	@ 0009e708 09e0
.org 0x9e70a
	.byte 0x00	@ 0009e70a data
.org 0x9e70b
	.byte 0x00	@ 0009e70b data
.org 0x9e70c
	.byte 0x9c,0x16,0x86,0x08	@ 0009e70c data
.org 0x9e710
	.byte 0xe8,0x9c,0x12,0x08	@ 0009e710 data
.org 0x9e714
	.byte 0x0c,0x6e,0x00,0x00	@ 0009e714 data
.org 0x9e718
	ldrb r1, [r5, #10]	@ 0009e718 a97a
.org 0x9e71a
	movs r0, #239	@ 0009e71a ef20
.org 0x9e71c
	ands r0, r1	@ 0009e71c 0840
.org 0x9e71e
	strb r0, [r5, #10]	@ 0009e71e a872
.org 0x9e720
	movs r3, #1	@ 0009e720 0123
.org 0x9e722
	adds r1, r3, #0	@ 0009e722 191c
.org 0x9e724
	ands r1, r2	@ 0009e724 1140
.org 0x9e726
	adds r0, r5, #0	@ 0009e726 281c
.org 0x9e728
	adds r0, #76	@ 0009e728 4c30
.org 0x9e72a
	movs r4, #0	@ 0009e72a 0024
.org 0x9e72c
	strb r1, [r0, #0]	@ 0009e72c 0170
.org 0x9e72e
	movs r0, #74	@ 0009e72e 4a20
.org 0x9e730
	adds r0, r0, r5	@ 0009e730 4019
.org 0x9e732
	mov ip, r0	@ 0009e732 8446
.org 0x9e734
	lsls r1, r1, #4	@ 0009e734 0901
.org 0x9e736
	ldrb r2, [r0, #0]	@ 0009e736 0278
.org 0x9e738
	movs r0, #17	@ 0009e738 1120
.org 0x9e73a
	negs r0, r0	@ 0009e73a 4042
.org 0x9e73c
	ands r0, r2	@ 0009e73c 1040
.org 0x9e73e
	orrs r0, r1	@ 0009e73e 0843
.org 0x9e740
	mov r1, ip	@ 0009e740 6146
.org 0x9e742
	strb r0, [r1, #0]	@ 0009e742 0870
.org 0x9e744
	ldr r0, [pc, #44]	@ 0009e744 0b48
.org 0x9e746
	str r0, [r6, #36]	@ 0009e746 7062
.org 0x9e748
	ldr r1, [pc, #44]	@ 0009e748 0b49
.org 0x9e74a
	ldrb r0, [r5, #9]	@ 0009e74a 687a
.org 0x9e74c
	lsls r0, r0, #2	@ 0009e74c 8000
.org 0x9e74e
	adds r0, r0, r1	@ 0009e74e 4018
.org 0x9e750
	str r3, [r5, #12]	@ 0009e750 eb60
.org 0x9e752
	ldr r0, [r0, #0]	@ 0009e752 0068
.org 0x9e754
	ldr r0, [r0, #4]	@ 0009e754 4068
.org 0x9e756
	str r0, [r5, #20]	@ 0009e756 6861
.org 0x9e758
	adds r1, r5, #0	@ 0009e758 291c
.org 0x9e75a
	adds r1, #184	@ 0009e75a b831
.org 0x9e75c
	ldr r0, [r5, #88]	@ 0009e75c a86d
