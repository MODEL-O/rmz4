@ FUN_080a1718  entry 0x080a1718  size 300
.thumb
.org 0xa1718
FUN_080a1718:
	push {r4, r5, r6, lr}	@ 000a1718 70b5
.org 0xa171a
	sub sp, #8	@ 000a171a 82b0
.org 0xa171c
	adds r4, r0, #0	@ 000a171c 041c
.org 0xa171e
	ldrb r0, [r4, #10]	@ 000a171e a07a
.org 0xa1720
	lsrs r6, r0, #4	@ 000a1720 0609
.org 0xa1722
	movs r0, #1	@ 000a1722 0120
.org 0xa1724
	ands r6, r0	@ 000a1724 0640
.org 0xa1726
	ldrb r5, [r4, #15]	@ 000a1726 e57b
.org 0xa1728
	cmp r5, #0	@ 000a1728 002d
.org 0xa172a
	bne.n 0xa17a0	@ 000a172a 39d1
.org 0xa172c
	adds r1, r4, #0	@ 000a172c 211c
.org 0xa172e
	adds r1, #37	@ 000a172e 2531
.org 0xa1730
	movs r0, #24	@ 000a1730 1820
.org 0xa1732
	strb r0, [r1, #0]	@ 000a1732 0870
.org 0xa1734
	ldr r0, [r4, #84]	@ 000a1734 606d
.org 0xa1736
	str r0, [sp, #0]	@ 000a1736 0090
.org 0xa1738
	ldr r0, [r4, #88]	@ 000a1738 a06d
.org 0xa173a
	str r0, [sp, #4]	@ 000a173a 0190
.org 0xa173c
	movs r2, #128	@ 000a173c 8022
.org 0xa173e
	lsls r2, r2, #2	@ 000a173e 9200
.org 0xa1740
	adds r0, r4, #0	@ 000a1740 201c
.org 0xa1742
	adds r0, #187	@ 000a1742 bb30
.org 0xa1744
	ldrb r3, [r0, #0]	@ 000a1744 0378
.org 0xa1746
	movs r0, #0	@ 000a1746 0020
.org 0xa1748
	mov r1, sp	@ 000a1748 6946
.org 0xa174a
	bl 0xd0dc4	@ 000a174a 2ff03bfb
.org 0xa174e
	adds r0, r4, #0	@ 000a174e 201c
.org 0xa1750
	adds r0, #84	@ 000a1750 5430
.org 0xa1752
	ldrb r1, [r4, #16]	@ 000a1752 217c
.org 0xa1754
	adds r2, r6, #0	@ 000a1754 321c
.org 0xa1756
	bl 0xe1050	@ 000a1756 3ff07bfc
.org 0xa175a
	adds r0, r4, #0	@ 000a175a 201c
.org 0xa175c
	adds r0, #140	@ 000a175c 8c30
.org 0xa175e
	str r5, [r0, #0]	@ 000a175e 0560
.org 0xa1760
	adds r0, #4	@ 000a1760 0430
.org 0xa1762
	str r5, [r0, #0]	@ 000a1762 0560
.org 0xa1764
	adds r0, #4	@ 000a1764 0430
.org 0xa1766
	strb r5, [r0, #0]	@ 000a1766 0570
.org 0xa1768
	ldrb r1, [r4, #10]	@ 000a1768 a17a
.org 0xa176a
	movs r0, #251	@ 000a176a fb20
.org 0xa176c
	ands r0, r1	@ 000a176c 0840
.org 0xa176e
	strb r0, [r4, #10]	@ 000a176e a072
.org 0xa1770
	ldr r1, [pc, #176]	@ 000a1770 2c49
.org 0xa1772
	adds r0, r4, #0	@ 000a1772 201c
.org 0xa1774
	bl 0x1cf00	@ 000a1774 7bf7c4fb
.org 0xa1778
	movs r0, #128	@ 000a1778 8020
.org 0xa177a
	negs r0, r0	@ 000a177a 4042
.org 0xa177c
	str r0, [r4, #96]	@ 000a177c 2066
.org 0xa177e
	ldr r2, [pc, #168]	@ 000a177e 2a4a
.org 0xa1780
	ldr r1, [r2, #0]	@ 000a1780 1168
.org 0xa1782
	ldr r0, [pc, #168]	@ 000a1782 2a48
.org 0xa1784
	muls r0, r1	@ 000a1784 4843
.org 0xa1786
	ldr r1, [pc, #168]	@ 000a1786 2a49
.org 0xa1788
	adds r0, r0, r1	@ 000a1788 4018
.org 0xa178a
	lsls r0, r0, #1	@ 000a178a 4000
.org 0xa178c
	lsrs r1, r0, #1	@ 000a178c 4108
.org 0xa178e
	str r1, [r2, #0]	@ 000a178e 1160
.org 0xa1790
	lsrs r0, r0, #17	@ 000a1790 400c
.org 0xa1792
	movs r1, #3	@ 000a1792 0321
.org 0xa1794
	ands r0, r1	@ 000a1794 0840
.org 0xa1796
	adds r0, #32	@ 000a1796 2030
.org 0xa1798
	strb r0, [r4, #18]	@ 000a1798 a074
.org 0xa179a
	ldrb r0, [r4, #15]	@ 000a179a e07b
.org 0xa179c
	adds r0, #1	@ 000a179c 0130
.org 0xa179e
	strb r0, [r4, #15]	@ 000a179e e073
.org 0xa17a0
	adds r0, r4, #0	@ 000a17a0 201c
.org 0xa17a2
	bl 0x1cff0	@ 000a17a2 7bf725fc
.org 0xa17a6
	ldr r0, [r4, #84]	@ 000a17a6 606d
.org 0xa17a8
	ldr r1, [r4, #88]	@ 000a17a8 a16d
.org 0xa17aa
	str r0, [sp, #0]	@ 000a17aa 0090
.org 0xa17ac
	str r1, [sp, #4]	@ 000a17ac 0191
.org 0xa17ae
	ldr r1, [sp, #4]	@ 000a17ae 0199
.org 0xa17b0
	ldr r0, [r4, #96]	@ 000a17b0 206e
.org 0xa17b2
	adds r1, r1, r0	@ 000a17b2 0918
.org 0xa17b4
	str r1, [sp, #4]	@ 000a17b4 0191
.org 0xa17b6
	ldr r2, [sp, #0]	@ 000a17b6 009a
.org 0xa17b8
	ldrb r0, [r4, #18]	@ 000a17b8 a07c
.org 0xa17ba
	subs r0, #1	@ 000a17ba 0138
.org 0xa17bc
	movs r6, #0	@ 000a17bc 0026
.org 0xa17be
	strb r0, [r4, #18]	@ 000a17be a074
.org 0xa17c0
	lsls r0, r0, #24	@ 000a17c0 0006
.org 0xa17c2
	cmp r0, #0	@ 000a17c2 0028
.org 0xa17c4
	beq.n 0xa17d2	@ 000a17c4 05d0
.org 0xa17c6
	adds r0, r2, #0	@ 000a17c6 101c
.org 0xa17c8
	bl 0x7c7c	@ 000a17c8 66f758fa
.org 0xa17cc
	lsls r0, r0, #16	@ 000a17cc 0004
.org 0xa17ce
	cmp r0, #0	@ 000a17ce 0028
.org 0xa17d0
	beq.n 0xa183c	@ 000a17d0 34d0
.org 0xa17d2
	movs r0, #42	@ 000a17d2 2a20
.org 0xa17d4
	bl 0x2b10	@ 000a17d4 61f79cf9
.org 0xa17d8
	ldr r0, [r4, #84]	@ 000a17d8 606d
.org 0xa17da
	str r0, [sp, #0]	@ 000a17da 0090
.org 0xa17dc
	ldr r0, [r4, #88]	@ 000a17dc a06d
.org 0xa17de
	str r0, [sp, #4]	@ 000a17de 0190
.org 0xa17e0
	movs r0, #1	@ 000a17e0 0120
.org 0xa17e2
	mov r1, sp	@ 000a17e2 6946
.org 0xa17e4
	bl 0xd0c88	@ 000a17e4 2ff050fa
.org 0xa17e8
	adds r0, r4, #0	@ 000a17e8 201c
.org 0xa17ea
	bl 0xa1c7c	@ 000a17ea 00f047fa
.org 0xa17ee
	adds r5, r4, #0	@ 000a17ee 251c
.org 0xa17f0
	adds r5, #84	@ 000a17f0 5435
.org 0xa17f2
	movs r0, #4	@ 000a17f2 0420
.org 0xa17f4
	movs r1, #5	@ 000a17f4 0521
.org 0xa17f6
	adds r2, r5, #0	@ 000a17f6 2a1c
.org 0xa17f8
	bl 0x2ab88	@ 000a17f8 89f7c6f9
.org 0xa17fc
	ldrb r1, [r4, #10]	@ 000a17fc a17a
.org 0xa17fe
	movs r0, #254	@ 000a17fe fe20
.org 0xa1800
	ands r0, r1	@ 000a1800 0840
.org 0xa1802
	strb r0, [r4, #10]	@ 000a1802 a072
.org 0xa1804
	ldr r2, [pc, #44]	@ 000a1804 0b4a
.org 0xa1806
	ldrh r1, [r2, #12]	@ 000a1806 9189
.org 0xa1808
	ldr r0, [pc, #44]	@ 000a1808 0b48
.org 0xa180a
	cmp r1, r0	@ 000a180a 8142
.org 0xa180c
	bhi.n 0xa1812	@ 000a180c 01d8
.org 0xa180e
	adds r0, r1, #1	@ 000a180e 481c
.org 0xa1810
	strh r0, [r2, #12]	@ 000a1810 9081
.org 0xa1812
	adds r0, r4, #0	@ 000a1812 201c
.org 0xa1814
	adds r1, r5, #0	@ 000a1814 291c
.org 0xa1816
	bl 0x2abe0	@ 000a1816 89f7e3f9
.org 0xa181a
	movs r0, #3	@ 000a181a 0320
.org 0xa181c
	strb r0, [r4, #13]	@ 000a181c 6073
.org 0xa181e
	strb r6, [r4, #14]	@ 000a181e a673
.org 0xa1820
	strb r6, [r4, #15]	@ 000a1820 e673
.org 0xa1822
	b.n 0xa1854	@ 000a1822 17e0
.org 0xa1824
	.byte 0x06,0x83,0x00,0x00	@ 000a1824 data
.org 0xa1828
	.byte 0x38,0xdc,0x02,0x02	@ 000a1828 data
.org 0xa182c
	.byte 0xfd,0x43,0x03,0x00	@ 000a182c data
.org 0xa1830
	.byte 0xc3,0x9e,0x26,0x00	@ 000a1830 data
.org 0xa1834
	.byte 0xe0,0xe8,0x02,0x02	@ 000a1834 data
.org 0xa1838
	.byte 0x0e,0x27,0x00,0x00	@ 000a1838 data
.org 0xa183c
	ldr r0, [sp, #0]	@ 000a183c 0098
.org 0xa183e
	ldr r1, [sp, #4]	@ 000a183e 0199
.org 0xa1840
	str r0, [r4, #84]	@ 000a1840 6065
.org 0xa1842
	str r1, [r4, #88]	@ 000a1842 a165
