@ FUN_080c1708  entry 0x080c1708  size 250
.thumb
.org 0xc1708
FUN_080c1708:
	push {r4, r5, r6, r7, lr}	@ 000c1708 f0b5
.org 0xc170a
	mov r7, r8	@ 000c170a 4746
.org 0xc170c
	push {r7}	@ 000c170c 80b4
.org 0xc170e
	sub sp, #32	@ 000c170e 88b0
.org 0xc1710
	adds r5, r0, #0	@ 000c1710 051c
.org 0xc1712
	mov r0, sp	@ 000c1712 6846
.org 0xc1714
	ldr r1, [pc, #236]	@ 000c1714 3b49
.org 0xc1716
	ldmia r1!, {r2, r3, r4}	@ 000c1716 1cc9
.org 0xc1718
	stmia r0!, {r2, r3, r4}	@ 000c1718 1cc0
.org 0xc171a
	ldmia r1!, {r2, r3, r4}	@ 000c171a 1cc9
.org 0xc171c
	stmia r0!, {r2, r3, r4}	@ 000c171c 1cc0
.org 0xc171e
	ldmia r1!, {r2, r3}	@ 000c171e 0cc9
.org 0xc1720
	stmia r0!, {r2, r3}	@ 000c1720 0cc0
.org 0xc1722
	ldrb r0, [r5, #10]	@ 000c1722 a87a
.org 0xc1724
	lsrs r1, r0, #4	@ 000c1724 0109
.org 0xc1726
	movs r7, #1	@ 000c1726 0127
.org 0xc1728
	ands r7, r1	@ 000c1728 0f40
.org 0xc172a
	ldrb r3, [r5, #15]	@ 000c172a eb7b
.org 0xc172c
	adds r2, r3, #0	@ 000c172c 1a1c
.org 0xc172e
	cmp r2, #0	@ 000c172e 002a
.org 0xc1730
	bne.n 0xc1744	@ 000c1730 08d1
.org 0xc1732
	movs r0, #128	@ 000c1732 8020
.org 0xc1734
	lsls r0, r0, #1	@ 000c1734 4000
.org 0xc1736
	str r0, [r5, #96]	@ 000c1736 2866
.org 0xc1738
	strb r2, [r5, #18]	@ 000c1738 aa74
.org 0xc173a
	movs r0, #1	@ 000c173a 0120
.org 0xc173c
	ands r1, r0	@ 000c173c 0140
.org 0xc173e
	strb r1, [r5, #19]	@ 000c173e e974
.org 0xc1740
	adds r0, r3, #1	@ 000c1740 581c
.org 0xc1742
	strb r0, [r5, #15]	@ 000c1742 e873
.org 0xc1744
	ldrb r6, [r5, #19]	@ 000c1744 ee7c
.org 0xc1746
	ldrb r0, [r5, #18]	@ 000c1746 a87c
.org 0xc1748
	cmp r0, #0	@ 000c1748 0028
.org 0xc174a
	bne.n 0xc1764	@ 000c174a 0bd1
.org 0xc174c
	adds r6, #1	@ 000c174c 0136
.org 0xc174e
	movs r0, #1	@ 000c174e 0120
.org 0xc1750
	ands r6, r0	@ 000c1750 0640
.org 0xc1752
	strb r6, [r5, #19]	@ 000c1752 ee74
.org 0xc1754
	lsls r1, r6, #1	@ 000c1754 7100
.org 0xc1756
	subs r1, #1	@ 000c1756 0139
.org 0xc1758
	lsls r1, r1, #13	@ 000c1758 4903
.org 0xc175a
	ldr r0, [r5, #84]	@ 000c175a 686d
.org 0xc175c
	adds r0, r0, r1	@ 000c175c 4018
.org 0xc175e
	str r0, [r5, #100]	@ 000c175e 6866
.org 0xc1760
	movs r0, #24	@ 000c1760 1820
.org 0xc1762
	strb r0, [r5, #18]	@ 000c1762 a874
.org 0xc1764
	ldrb r0, [r5, #18]	@ 000c1764 a87c
.org 0xc1766
	subs r0, #1	@ 000c1766 0138
.org 0xc1768
	strb r0, [r5, #18]	@ 000c1768 a874
.org 0xc176a
	ldrb r4, [r5, #18]	@ 000c176a ac7c
.org 0xc176c
	lsls r0, r4, #6	@ 000c176c a001
.org 0xc176e
	movs r1, #24	@ 000c176e 1821
.org 0xc1770
	bl 0x128fb8	@ 000c1770 67f022fc
.org 0xc1774
	lsls r0, r0, #24	@ 000c1774 0006
.org 0xc1776
	ldr r1, [pc, #144]	@ 000c1776 2449
.org 0xc1778
	mov r8, r1	@ 000c1778 8846
.org 0xc177a
	lsrs r0, r0, #23	@ 000c177a c00d
.org 0xc177c
	add r0, r8	@ 000c177c 4044
.org 0xc177e
	movs r2, #0	@ 000c177e 0022
.org 0xc1780
	ldrsh r0, [r0, r2]	@ 000c1780 805e
.org 0xc1782
	muls r0, r4	@ 000c1782 6043
.org 0xc1784
	cmp r0, #0	@ 000c1784 0028
.org 0xc1786
	bge.n 0xc178a	@ 000c1786 00da
.org 0xc1788
	adds r0, #255	@ 000c1788 ff30
.org 0xc178a
	asrs r0, r0, #8	@ 000c178a 0012
.org 0xc178c
	lsls r0, r0, #24	@ 000c178c 0006
.org 0xc178e
	lsrs r4, r0, #24	@ 000c178e 040e
.org 0xc1790
	adds r0, r4, #0	@ 000c1790 201c
.org 0xc1792
	movs r1, #6	@ 000c1792 0621
.org 0xc1794
	bl 0x128fb8	@ 000c1794 67f010fc
.org 0xc1798
	lsls r0, r0, #24	@ 000c1798 0006
.org 0xc179a
	lsrs r0, r0, #24	@ 000c179a 000e
.org 0xc179c
	movs r1, #3	@ 000c179c 0321
.org 0xc179e
	subs r1, r1, r0	@ 000c179e 091a
.org 0xc17a0
	lsls r1, r1, #24	@ 000c17a0 0906
.org 0xc17a2
	adds r0, r6, r7	@ 000c17a2 f019
.org 0xc17a4
	movs r2, #1	@ 000c17a4 0122
.org 0xc17a6
	ands r0, r2	@ 000c17a6 1040
.org 0xc17a8
	lsls r0, r0, #2	@ 000c17a8 8000
.org 0xc17aa
	lsrs r1, r1, #21	@ 000c17aa 490d
.org 0xc17ac
	adds r0, r0, r1	@ 000c17ac 4018
.org 0xc17ae
	add r0, sp	@ 000c17ae 6844
.org 0xc17b0
	ldrh r1, [r0, #0]	@ 000c17b0 0188
.org 0xc17b2
	adds r0, r5, #0	@ 000c17b2 281c
.org 0xc17b4
	bl 0x1cf00	@ 000c17b4 5bf7a4fb
.org 0xc17b8
	adds r0, r5, #0	@ 000c17b8 281c
.org 0xc17ba
	bl 0x1cff0	@ 000c17ba 5bf719fc
.org 0xc17be
	adds r0, r5, #0	@ 000c17be 281c
.org 0xc17c0
	adds r0, #116	@ 000c17c0 7430
.org 0xc17c2
	ldr r1, [pc, #72]	@ 000c17c2 1249
.org 0xc17c4
	bl 0x5784	@ 000c17c4 43f7deff
.org 0xc17c8
	lsls r0, r4, #6	@ 000c17c8 a001
.org 0xc17ca
	movs r1, #24	@ 000c17ca 1821
.org 0xc17cc
	bl 0x128fb8	@ 000c17cc 67f0f4fb
.org 0xc17d0
	movs r1, #128	@ 000c17d0 8021
.org 0xc17d2
	subs r1, r1, r0	@ 000c17d2 091a
.org 0xc17d4
	lsls r1, r1, #24	@ 000c17d4 0906
.org 0xc17d6
	lsrs r1, r1, #23	@ 000c17d6 c90d
.org 0xc17d8
	add r1, r8	@ 000c17d8 4144
.org 0xc17da
	movs r3, #0	@ 000c17da 0023
.org 0xc17dc
	ldrsh r1, [r1, r3]	@ 000c17dc c95e
.org 0xc17de
	lsls r1, r1, #5	@ 000c17de 4901
.org 0xc17e0
	negs r1, r1	@ 000c17e0 4942
.org 0xc17e2
	lsls r0, r6, #1	@ 000c17e2 7000
.org 0xc17e4
	subs r0, #1	@ 000c17e4 0138
.org 0xc17e6
	muls r1, r0	@ 000c17e6 4143
.org 0xc17e8
	ldr r0, [r5, #100]	@ 000c17e8 686e
.org 0xc17ea
	adds r0, r0, r1	@ 000c17ea 4018
.org 0xc17ec
	str r0, [r5, #84]	@ 000c17ec 6865
.org 0xc17ee
	ldr r0, [r5, #88]	@ 000c17ee a86d
.org 0xc17f0
	ldr r1, [r5, #96]	@ 000c17f0 296e
.org 0xc17f2
	adds r0, r0, r1	@ 000c17f2 4018
.org 0xc17f4
	str r0, [r5, #88]	@ 000c17f4 a865
.org 0xc17f6
	add sp, #32	@ 000c17f6 08b0
.org 0xc17f8
	pop {r3}	@ 000c17f8 08bc
.org 0xc17fa
	mov r8, r3	@ 000c17fa 9846
.org 0xc17fc
	pop {r4, r5, r6, r7}	@ 000c17fc f0bc
.org 0xc17fe
	pop {r0}	@ 000c17fe 01bc
.org 0xc1800
	bx r0	@ 000c1800 0047
