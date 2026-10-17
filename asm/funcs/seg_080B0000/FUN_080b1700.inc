@ FUN_080b1700  entry 0x080b1700  size 162
.thumb
.org 0xb1700
FUN_080b1700:
	push {r4, r5, r6, lr}	@ 000b1700 70b5
.org 0xb1702
	adds r6, r0, #0	@ 000b1702 061c
.org 0xb1704
	bl 0x1cc9c	@ 000b1704 6bf7cafa
.org 0xb1708
	ldrb r1, [r6, #10]	@ 000b1708 b17a
.org 0xb170a
	movs r0, #1	@ 000b170a 0120
.org 0xb170c
	movs r4, #0	@ 000b170c 0024
.org 0xb170e
	adds r2, r0, #0	@ 000b170e 021c
.org 0xb1710
	orrs r2, r1	@ 000b1710 0a43
.org 0xb1712
	movs r0, #2	@ 000b1712 0220
.org 0xb1714
	orrs r2, r0	@ 000b1714 0243
.org 0xb1716
	orrs r2, r4	@ 000b1716 2243
.org 0xb1718
	strb r2, [r6, #10]	@ 000b1718 b272
.org 0xb171a
	ldr r1, [pc, #28]	@ 000b171a 0749
.org 0xb171c
	ldrb r0, [r6, #9]	@ 000b171c 707a
.org 0xb171e
	lsls r0, r0, #2	@ 000b171e 8000
.org 0xb1720
	adds r0, r0, r1	@ 000b1720 4018
.org 0xb1722
	movs r1, #1	@ 000b1722 0121
.org 0xb1724
	str r1, [r6, #12]	@ 000b1724 f160
.org 0xb1726
	ldr r0, [r0, #0]	@ 000b1726 0068
.org 0xb1728
	ldr r0, [r0, #4]	@ 000b1728 4068
.org 0xb172a
	str r0, [r6, #20]	@ 000b172a 7061
.org 0xb172c
	ldrb r3, [r6, #16]	@ 000b172c 337c
.org 0xb172e
	cmp r3, #0	@ 000b172e 002b
.org 0xb1730
	beq.n 0xb173c	@ 000b1730 04d0
.org 0xb1732
	movs r0, #16	@ 000b1732 1020
.org 0xb1734
	orrs r2, r0	@ 000b1734 0243
.org 0xb1736
	b.n 0xb1740	@ 000b1736 03e0
.org 0xb1738
	.byte 0x40,0xdb,0x85,0x08	@ 000b1738 data
.org 0xb173c
	movs r0, #239	@ 000b173c ef20
.org 0xb173e
	ands r2, r0	@ 000b173e 0240
.org 0xb1740
	strb r2, [r6, #10]	@ 000b1740 b272
.org 0xb1742
	movs r1, #1	@ 000b1742 0121
.org 0xb1744
	ands r1, r3	@ 000b1744 1940
.org 0xb1746
	adds r0, r6, #0	@ 000b1746 301c
.org 0xb1748
	adds r0, #76	@ 000b1748 4c30
.org 0xb174a
	movs r5, #0	@ 000b174a 0025
.org 0xb174c
	strb r1, [r0, #0]	@ 000b174c 0170
.org 0xb174e
	adds r3, r6, #0	@ 000b174e 331c
.org 0xb1750
	adds r3, #74	@ 000b1750 4a33
.org 0xb1752
	lsls r1, r1, #4	@ 000b1752 0901
.org 0xb1754
	ldrb r2, [r3, #0]	@ 000b1754 1a78
.org 0xb1756
	movs r0, #17	@ 000b1756 1120
.org 0xb1758
	negs r0, r0	@ 000b1758 4042
.org 0xb175a
	ands r0, r2	@ 000b175a 1040
.org 0xb175c
	orrs r0, r1	@ 000b175c 0843
.org 0xb175e
	strb r0, [r3, #0]	@ 000b175e 1870
.org 0xb1760
	ldrb r1, [r6, #10]	@ 000b1760 b17a
.org 0xb1762
	movs r0, #4	@ 000b1762 0420
.org 0xb1764
	orrs r0, r1	@ 000b1764 0843
.org 0xb1766
	strb r0, [r6, #10]	@ 000b1766 b072
.org 0xb1768
	adds r4, r6, #0	@ 000b1768 341c
.org 0xb176a
	adds r4, #116	@ 000b176a 7434
.org 0xb176c
	ldr r1, [pc, #56]	@ 000b176c 0e49
.org 0xb176e
	adds r2, r6, #0	@ 000b176e 321c
.org 0xb1770
	adds r2, #84	@ 000b1770 5432
.org 0xb1772
	adds r0, r4, #0	@ 000b1772 201c
.org 0xb1774
	movs r3, #6	@ 000b1774 0623
.org 0xb1776
	bl 0x5760	@ 000b1776 53f7f3ff
.org 0xb177a
	str r6, [r4, #44]	@ 000b177a e662
.org 0xb177c
	ldr r0, [pc, #44]	@ 000b177c 0b48
.org 0xb177e
	str r0, [r4, #36]	@ 000b177e 6062
.org 0xb1780
	strb r5, [r6, #18]	@ 000b1780 b574
.org 0xb1782
	adds r0, r6, #0	@ 000b1782 301c
.org 0xb1784
	adds r0, #192	@ 000b1784 c030
.org 0xb1786
	str r5, [r0, #0]	@ 000b1786 0560
.org 0xb1788
	subs r0, #12	@ 000b1788 0c38
.org 0xb178a
	strb r5, [r0, #0]	@ 000b178a 0570
.org 0xb178c
	strb r5, [r6, #13]	@ 000b178c 7573
.org 0xb178e
	strb r5, [r6, #14]	@ 000b178e b573
.org 0xb1790
	ldr r0, [r6, #84]	@ 000b1790 706d
.org 0xb1792
	ldr r1, [r6, #88]	@ 000b1792 b16d
.org 0xb1794
	bl 0x8534	@ 000b1794 56f7cefe
.org 0xb1798
	str r0, [r6, #88]	@ 000b1798 b065
.org 0xb179a
	adds r0, r6, #0	@ 000b179a 301c
.org 0xb179c
	bl 0xb17b0	@ 000b179c 00f008f8
.org 0xb17a0
	pop {r4, r5, r6}	@ 000b17a0 70bc
