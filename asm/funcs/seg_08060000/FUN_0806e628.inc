@ FUN_0806e628  entry 0x0806e628  size 228
.thumb
.org 0x6e628
FUN_0806e628:
	push {r4, r5, r6, r7, lr}	@ 0006e628 f0b5
.org 0x6e62a
	adds r7, r0, #0	@ 0006e62a 071c
.org 0x6e62c
	ldrb r0, [r7, #15]	@ 0006e62c f87b
.org 0x6e62e
	cmp r0, #0	@ 0006e62e 0028
.org 0x6e630
	bne.n 0x6e6a2	@ 0006e630 37d1
.org 0x6e632
	adds r0, r7, #0	@ 0006e632 381c
.org 0x6e634
	adds r0, #116	@ 0006e634 7430
.org 0x6e636
	ldr r1, [pc, #212]	@ 0006e636 3549
.org 0x6e638
	bl 0x5784	@ 0006e638 97f7a4f8
.org 0x6e63c
	ldr r0, [r7, #84]	@ 0006e63c 786d
.org 0x6e63e
	ldr r1, [pc, #208]	@ 0006e63e 3449
.org 0x6e640
	adds r0, r0, r1	@ 0006e640 4018
.org 0x6e642
	adds r1, r7, #0	@ 0006e642 391c
.org 0x6e644
	adds r1, #188	@ 0006e644 bc31
.org 0x6e646
	ldr r1, [r1, #0]	@ 0006e646 0968
.org 0x6e648
	subs r0, r0, r1	@ 0006e648 401a
.org 0x6e64a
	str r0, [r7, #92]	@ 0006e64a f865
.org 0x6e64c
	ldr r1, [r7, #88]	@ 0006e64c b96d
.org 0x6e64e
	ldr r2, [pc, #196]	@ 0006e64e 314a
.org 0x6e650
	adds r1, r1, r2	@ 0006e650 8918
.org 0x6e652
	adds r2, r7, #0	@ 0006e652 3a1c
.org 0x6e654
	adds r2, #184	@ 0006e654 b832
.org 0x6e656
	ldr r2, [r2, #0]	@ 0006e656 1268
.org 0x6e658
	subs r1, r1, r2	@ 0006e658 891a
.org 0x6e65a
	str r1, [r7, #96]	@ 0006e65a 3966
.org 0x6e65c
	adds r2, r0, #0	@ 0006e65c 021c
.org 0x6e65e
	muls r2, r0	@ 0006e65e 4243
.org 0x6e660
	adds r0, r2, #0	@ 0006e660 101c
.org 0x6e662
	adds r2, r1, #0	@ 0006e662 0a1c
.org 0x6e664
	muls r2, r1	@ 0006e664 4a43
.org 0x6e666
	adds r1, r2, #0	@ 0006e666 111c
.org 0x6e668
	adds r0, r0, r1	@ 0006e668 4018
.org 0x6e66a
	bl 0x128bf4	@ 0006e66a baf0c3fa
.org 0x6e66e
	adds r4, r0, #0	@ 0006e66e 041c
.org 0x6e670
	lsls r4, r4, #16	@ 0006e670 2404
.org 0x6e672
	lsrs r4, r4, #16	@ 0006e672 240c
.org 0x6e674
	movs r5, #160	@ 0006e674 a025
.org 0x6e676
	lsls r5, r5, #2	@ 0006e676 ad00
.org 0x6e678
	adds r0, r4, #0	@ 0006e678 201c
.org 0x6e67a
	adds r1, r5, #0	@ 0006e67a 291c
.org 0x6e67c
	bl 0x128fb8	@ 0006e67c baf09cfc
.org 0x6e680
	adds r6, r0, #0	@ 0006e680 061c
.org 0x6e682
	adds r0, r4, #0	@ 0006e682 201c
.org 0x6e684
	adds r1, r5, #0	@ 0006e684 291c
.org 0x6e686
	bl 0x129050	@ 0006e686 baf0e3fc
.org 0x6e68a
	cmp r0, #0	@ 0006e68a 0028
.org 0x6e68c
	beq.n 0x6e690	@ 0006e68c 00d0
.org 0x6e68e
	adds r6, #1	@ 0006e68e 0136
.org 0x6e690
	str r6, [r7, #100]	@ 0006e690 7e66
.org 0x6e692
	str r6, [r7, #104]	@ 0006e692 be66
.org 0x6e694
	cmp r6, #0	@ 0006e694 002e
.org 0x6e696
	bne.n 0x6e69c	@ 0006e696 01d1
.org 0x6e698
	movs r0, #1	@ 0006e698 0120
.org 0x6e69a
	str r0, [r7, #104]	@ 0006e69a b866
.org 0x6e69c
	ldrb r0, [r7, #15]	@ 0006e69c f87b
.org 0x6e69e
	adds r0, #1	@ 0006e69e 0130
.org 0x6e6a0
	strb r0, [r7, #15]	@ 0006e6a0 f873
.org 0x6e6a2
	ldr r0, [r7, #100]	@ 0006e6a2 786e
.org 0x6e6a4
	cmp r0, #0	@ 0006e6a4 0028
.org 0x6e6a6
	beq.n 0x6e6ac	@ 0006e6a6 01d0
.org 0x6e6a8
	subs r0, #1	@ 0006e6a8 0138
.org 0x6e6aa
	str r0, [r7, #100]	@ 0006e6aa 7866
.org 0x6e6ac
	adds r4, r7, #0	@ 0006e6ac 3c1c
.org 0x6e6ae
	adds r4, #188	@ 0006e6ae bc34
.org 0x6e6b0
	ldr r0, [r7, #92]	@ 0006e6b0 f86d
.org 0x6e6b2
	ldr r5, [r7, #100]	@ 0006e6b2 7d6e
.org 0x6e6b4
	muls r0, r5	@ 0006e6b4 6843
.org 0x6e6b6
	ldr r6, [r7, #104]	@ 0006e6b6 be6e
.org 0x6e6b8
	adds r1, r6, #0	@ 0006e6b8 311c
.org 0x6e6ba
	bl 0x128fb8	@ 0006e6ba baf07dfc
.org 0x6e6be
	movs r1, #208	@ 0006e6be d021
.org 0x6e6c0
	lsls r1, r1, #7	@ 0006e6c0 c901
.org 0x6e6c2
	adds r0, r0, r1	@ 0006e6c2 4018
.org 0x6e6c4
	ldr r1, [r4, #0]	@ 0006e6c4 2168
.org 0x6e6c6
	adds r1, r1, r0	@ 0006e6c6 0918
.org 0x6e6c8
	str r1, [r7, #84]	@ 0006e6c8 7965
.org 0x6e6ca
	subs r4, #4	@ 0006e6ca 043c
.org 0x6e6cc
	ldr r0, [r7, #96]	@ 0006e6cc 386e
.org 0x6e6ce
	muls r0, r5	@ 0006e6ce 6843
.org 0x6e6d0
	adds r1, r6, #0	@ 0006e6d0 311c
.org 0x6e6d2
	bl 0x128fb8	@ 0006e6d2 baf071fc
.org 0x6e6d6
	ldr r2, [pc, #64]	@ 0006e6d6 104a
.org 0x6e6d8
	adds r0, r0, r2	@ 0006e6d8 8018
.org 0x6e6da
	ldr r1, [r4, #0]	@ 0006e6da 2168
.org 0x6e6dc
	adds r1, r1, r0	@ 0006e6dc 0918
.org 0x6e6de
	str r1, [r7, #88]	@ 0006e6de b965
.org 0x6e6e0
	adds r0, r7, #0	@ 0006e6e0 381c
.org 0x6e6e2
	bl 0x6f26c	@ 0006e6e2 00f0c3fd
.org 0x6e6e6
	adds r0, r7, #0	@ 0006e6e6 381c
.org 0x6e6e8
	adds r0, #140	@ 0006e6e8 8c30
.org 0x6e6ea
	ldr r0, [r0, #0]	@ 0006e6ea 0068
.org 0x6e6ec
	movs r1, #4	@ 0006e6ec 0421
.org 0x6e6ee
	ands r0, r1	@ 0006e6ee 0840
.org 0x6e6f0
	cmp r0, #0	@ 0006e6f0 0028
.org 0x6e6f2
	beq.n 0x6e6fa	@ 0006e6f2 02d0
.org 0x6e6f4
	movs r0, #56	@ 0006e6f4 3820
.org 0x6e6f6
	bl 0x2b10	@ 0006e6f6 94f70bfa
.org 0x6e6fa
	ldr r1, [r7, #100]	@ 0006e6fa 796e
.org 0x6e6fc
	cmp r1, #0	@ 0006e6fc 0029
.org 0x6e6fe
	bne.n 0x6e706	@ 0006e6fe 02d1
.org 0x6e700
	movs r0, #3	@ 0006e700 0320
.org 0x6e702
	strb r0, [r7, #14]	@ 0006e702 b873
.org 0x6e704
	strb r1, [r7, #15]	@ 0006e704 f973
.org 0x6e706
	pop {r4, r5, r6, r7}	@ 0006e706 f0bc
.org 0x6e708
	pop {r0}	@ 0006e708 01bc
.org 0x6e70a
	bx r0	@ 0006e70a 0047
