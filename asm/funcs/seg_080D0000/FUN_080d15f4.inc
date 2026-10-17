@ FUN_080d15f4  entry 0x080d15f4  size 404
.thumb
.org 0xd15f4
FUN_080d15f4:
	push {r4, r5, r6, r7, lr}	@ 000d15f4 f0b5
.org 0xd15f6
	mov r7, r8	@ 000d15f6 4746
.org 0xd15f8
	push {r7}	@ 000d15f8 80b4
.org 0xd15fa
	adds r4, r0, #0	@ 000d15fa 041c
.org 0xd15fc
	ldr r6, [r4, #40]	@ 000d15fc a66a
.org 0xd15fe
	adds r0, r6, #0	@ 000d15fe 301c
.org 0xd1600
	adds r0, #140	@ 000d1600 8c30
.org 0xd1602
	ldr r0, [r0, #0]	@ 000d1602 0068
.org 0xd1604
	movs r1, #128	@ 000d1604 8021
.org 0xd1606
	lsls r1, r1, #2	@ 000d1606 8900
.org 0xd1608
	ands r0, r1	@ 000d1608 0840
.org 0xd160a
	cmp r0, #0	@ 000d160a 0028
.org 0xd160c
	bne.n 0xd1620	@ 000d160c 08d1
.org 0xd160e
	adds r0, r6, #0	@ 000d160e 301c
.org 0xd1610
	adds r0, #164	@ 000d1610 a430
.org 0xd1612
	movs r1, #0	@ 000d1612 0021
.org 0xd1614
	ldrsh r0, [r0, r1]	@ 000d1614 405e
.org 0xd1616
	cmp r0, #0	@ 000d1616 0028
.org 0xd1618
	beq.n 0xd1620	@ 000d1618 02d0
.org 0xd161a
	ldrb r0, [r6, #12]	@ 000d161a 307b
.org 0xd161c
	cmp r0, #2	@ 000d161c 0228
.org 0xd161e
	bls.n 0xd1640	@ 000d161e 0fd9
.org 0xd1620
	ldr r1, [pc, #24]	@ 000d1620 0649
.org 0xd1622
	ldrb r0, [r4, #9]	@ 000d1622 607a
.org 0xd1624
	lsls r0, r0, #2	@ 000d1624 8000
.org 0xd1626
	adds r0, r0, r1	@ 000d1626 4018
.org 0xd1628
	movs r1, #2	@ 000d1628 0221
.org 0xd162a
	str r1, [r4, #12]	@ 000d162a e160
.org 0xd162c
	ldr r0, [r0, #0]	@ 000d162c 0068
.org 0xd162e
	ldr r0, [r0, #8]	@ 000d162e 8068
.org 0xd1630
	str r0, [r4, #20]	@ 000d1630 6061
.org 0xd1632
	adds r0, r4, #0	@ 000d1632 201c
.org 0xd1634
	bl 0xd17a4	@ 000d1634 00f0b6f8
.org 0xd1638
	b.n 0xd179a	@ 000d1638 afe0
.org 0xd163a
	.byte 0x00	@ 000d163a data
.org 0xd163b
	.byte 0x00	@ 000d163b data
.org 0xd163c
	.byte 0x64,0x6f,0x86,0x08	@ 000d163c data
.org 0xd1640
	ldrb r1, [r4, #16]	@ 000d1640 217c
.org 0xd1642
	adds r0, r6, #0	@ 000d1642 301c
.org 0xd1644
	bl 0x3a428	@ 000d1644 68f7f0fe
.org 0xd1648
	adds r1, r4, #0	@ 000d1648 211c
.org 0xd164a
	adds r1, #120	@ 000d164a 7831
.org 0xd164c
	movs r7, #0	@ 000d164c 0027
.org 0xd164e
	strb r0, [r1, #0]	@ 000d164e 0870
.org 0xd1650
	ldrb r0, [r6, #13]	@ 000d1650 707b
.org 0xd1652
	mov r8, r1	@ 000d1652 8846
.org 0xd1654
	cmp r0, #9	@ 000d1654 0928
.org 0xd1656
	bls.n 0xd1662	@ 000d1656 04d9
.org 0xd1658
	ldrb r1, [r4, #10]	@ 000d1658 a17a
.org 0xd165a
	movs r0, #254	@ 000d165a fe20
.org 0xd165c
	ands r0, r1	@ 000d165c 0840
.org 0xd165e
	strb r0, [r4, #10]	@ 000d165e a072
.org 0xd1660
	b.n 0xd179a	@ 000d1660 9be0
.org 0xd1662
	ldrb r0, [r4, #10]	@ 000d1662 a07a
.org 0xd1664
	movs r3, #1	@ 000d1664 0123
.org 0xd1666
	adds r1, r0, #0	@ 000d1666 011c
.org 0xd1668
	orrs r1, r3	@ 000d1668 1943
.org 0xd166a
	orrs r1, r7	@ 000d166a 3943
.org 0xd166c
	strb r1, [r4, #10]	@ 000d166c a172
.org 0xd166e
	mov r0, r8	@ 000d166e 4046
.org 0xd1670
	ldrb r2, [r0, #0]	@ 000d1670 0278
.org 0xd1672
	cmp r2, #0	@ 000d1672 002a
.org 0xd1674
	beq.n 0xd1722	@ 000d1674 55d0
.org 0xd1676
	ldrb r5, [r4, #13]	@ 000d1676 657b
.org 0xd1678
	cmp r5, #0	@ 000d1678 002d
.org 0xd167a
	bne.n 0xd1698	@ 000d167a 0dd1
.org 0xd167c
	orrs r1, r3	@ 000d167c 1943
.org 0xd167e
	strb r1, [r4, #10]	@ 000d167e a172
.org 0xd1680
	ldr r1, [pc, #56]	@ 000d1680 0e49
.org 0xd1682
	ldrb r0, [r4, #16]	@ 000d1682 207c
.org 0xd1684
	lsls r0, r0, #1	@ 000d1684 4000
.org 0xd1686
	adds r0, r0, r1	@ 000d1686 4018
.org 0xd1688
	ldrh r1, [r0, #0]	@ 000d1688 0188
.org 0xd168a
	adds r0, r4, #0	@ 000d168a 201c
.org 0xd168c
	bl 0x1cf00	@ 000d168c 4bf738fc
.org 0xd1690
	str r5, [r4, #116]	@ 000d1690 6567
.org 0xd1692
	ldrb r0, [r4, #13]	@ 000d1692 607b
.org 0xd1694
	adds r0, #1	@ 000d1694 0130
.org 0xd1696
	strb r0, [r4, #13]	@ 000d1696 6073
.org 0xd1698
	ldrb r1, [r6, #10]	@ 000d1698 b17a
.org 0xd169a
	movs r0, #16	@ 000d169a 1020
.org 0xd169c
	ands r0, r1	@ 000d169c 0840
.org 0xd169e
	cmp r0, #0	@ 000d169e 0028
.org 0xd16a0
	beq.n 0xd16c4	@ 000d16a0 10d0
.org 0xd16a2
	ldr r1, [pc, #28]	@ 000d16a2 0749
.org 0xd16a4
	movs r3, #186	@ 000d16a4 ba23
.org 0xd16a6
	lsls r3, r3, #1	@ 000d16a6 5b00
.org 0xd16a8
	adds r2, r6, r3	@ 000d16a8 f218
.org 0xd16aa
	ldrb r0, [r2, #0]	@ 000d16aa 1078
.org 0xd16ac
	lsls r0, r0, #1	@ 000d16ac 4000
.org 0xd16ae
	adds r0, r0, r1	@ 000d16ae 4018
.org 0xd16b0
	movs r3, #0	@ 000d16b0 0023
.org 0xd16b2
	ldrsh r1, [r0, r3]	@ 000d16b2 c15e
.org 0xd16b4
	ldr r0, [r6, #84]	@ 000d16b4 706d
.org 0xd16b6
	subs r0, r0, r1	@ 000d16b6 401a
.org 0xd16b8
	b.n 0xd16da	@ 000d16b8 0fe0
.org 0xd16ba
	.byte 0x00	@ 000d16ba data
.org 0xd16bb
	.byte 0x00	@ 000d16bb data
.org 0xd16bc
	.byte 0x3c,0x71,0x86,0x08	@ 000d16bc data
.org 0xd16c0
	.byte 0x40,0x71,0x86,0x08	@ 000d16c0 data
.org 0xd16c4
	ldr r1, [pc, #56]	@ 000d16c4 0e49
.org 0xd16c6
	movs r0, #186	@ 000d16c6 ba20
.org 0xd16c8
	lsls r0, r0, #1	@ 000d16c8 4000
.org 0xd16ca
	adds r2, r6, r0	@ 000d16ca 3218
.org 0xd16cc
	ldrb r0, [r2, #0]	@ 000d16cc 1078
.org 0xd16ce
	lsls r0, r0, #1	@ 000d16ce 4000
.org 0xd16d0
	adds r0, r0, r1	@ 000d16d0 4018
.org 0xd16d2
	movs r3, #0	@ 000d16d2 0023
.org 0xd16d4
	ldrsh r1, [r0, r3]	@ 000d16d4 c15e
.org 0xd16d6
	ldr r0, [r6, #84]	@ 000d16d6 706d
.org 0xd16d8
	adds r0, r0, r1	@ 000d16d8 4018
.org 0xd16da
	str r0, [r4, #84]	@ 000d16da 6065
.org 0xd16dc
	ldr r1, [pc, #36]	@ 000d16dc 0949
.org 0xd16de
	ldrb r0, [r2, #0]	@ 000d16de 1078
.org 0xd16e0
	lsls r0, r0, #1	@ 000d16e0 4000
.org 0xd16e2
	adds r0, r0, r1	@ 000d16e2 4018
.org 0xd16e4
	movs r2, #0	@ 000d16e4 0022
.org 0xd16e6
	ldrsh r1, [r0, r2]	@ 000d16e6 815e
.org 0xd16e8
	ldr r0, [r6, #88]	@ 000d16e8 b06d
.org 0xd16ea
	adds r0, r0, r1	@ 000d16ea 4018
.org 0xd16ec
	str r0, [r4, #88]	@ 000d16ec a065
.org 0xd16ee
	mov r3, r8	@ 000d16ee 4346
.org 0xd16f0
	ldrb r0, [r3, #0]	@ 000d16f0 1878
.org 0xd16f2
	cmp r0, #2	@ 000d16f2 0228
.org 0xd16f4
	bne.n 0xd1708	@ 000d16f4 08d1
.org 0xd16f6
	adds r0, r4, #0	@ 000d16f6 201c
.org 0xd16f8
	movs r1, #15	@ 000d16f8 0f21
.org 0xd16fa
	bl 0x1d3d0	@ 000d16fa 4bf769fe
.org 0xd16fe
	b.n 0xd1710	@ 000d16fe 07e0
.org 0xd1700
	.byte 0x40,0x71,0x86,0x08	@ 000d1700 data
.org 0xd1704
	.byte 0x4c,0x71,0x86,0x08	@ 000d1704 data
.org 0xd1708
	adds r0, r4, #0	@ 000d1708 201c
.org 0xd170a
	movs r1, #14	@ 000d170a 0e21
.org 0xd170c
	bl 0x1d3d0	@ 000d170c 4bf760fe
.org 0xd1710
	ldr r0, [r4, #116]	@ 000d1710 606f
.org 0xd1712
	cmp r0, #0	@ 000d1712 0028
.org 0xd1714
	beq.n 0xd171a	@ 000d1714 01d0
.org 0xd1716
	subs r0, #1	@ 000d1716 0138
.org 0xd1718
	str r0, [r4, #116]	@ 000d1718 6067
.org 0xd171a
	adds r0, r4, #0	@ 000d171a 201c
.org 0xd171c
	bl 0x1cff0	@ 000d171c 4bf768fc
.org 0xd1720
	b.n 0xd172a	@ 000d1720 03e0
.org 0xd1722
	movs r0, #254	@ 000d1722 fe20
.org 0xd1724
	ands r1, r0	@ 000d1724 0140
.org 0xd1726
	strb r1, [r4, #10]	@ 000d1726 a172
.org 0xd1728
	strb r2, [r4, #13]	@ 000d1728 6273
.org 0xd172a
	ldrb r0, [r4, #16]	@ 000d172a 207c
.org 0xd172c
	cmp r0, #1	@ 000d172c 0128
.org 0xd172e
	bne.n 0xd179a	@ 000d172e 34d1
.org 0xd1730
	ldr r5, [r4, #44]	@ 000d1730 e56a
.org 0xd1732
	adds r3, r5, #0	@ 000d1732 2b1c
.org 0xd1734
	adds r3, #120	@ 000d1734 7833
.org 0xd1736
	ldrb r0, [r3, #0]	@ 000d1736 1878
.org 0xd1738
	mov r7, r8	@ 000d1738 4746
.org 0xd173a
	ldrb r2, [r7, #0]	@ 000d173a 3a78
.org 0xd173c
	cmn r0, r2	@ 000d173c d042
.org 0xd173e
	beq.n 0xd179a	@ 000d173e 2cd0
.org 0xd1740
	adds r1, r0, #0	@ 000d1740 011c
.org 0xd1742
	adds r0, r2, #0	@ 000d1742 101c
.org 0xd1744
	cmp r1, r0	@ 000d1744 8142
.org 0xd1746
	bne.n 0xd1756	@ 000d1746 06d1
.org 0xd1748
	ldr r1, [r4, #116]	@ 000d1748 616f
.org 0xd174a
	ldr r0, [r5, #116]	@ 000d174a 686f
.org 0xd174c
	cmp r1, r0	@ 000d174c 8142
.org 0xd174e
	blt.n 0xd175c	@ 000d174e 05db
.org 0xd1750
	str r1, [r5, #116]	@ 000d1750 6967
.org 0xd1752
	ldrb r2, [r7, #0]	@ 000d1752 3a78
.org 0xd1754
	b.n 0xd176a	@ 000d1754 09e0
.org 0xd1756
	cmp r1, r0	@ 000d1756 8142
.org 0xd1758
	bls.n 0xd1762	@ 000d1758 03d9
.org 0xd175a
	ldr r0, [r5, #116]	@ 000d175a 686f
.org 0xd175c
	str r0, [r4, #116]	@ 000d175c 6067
.org 0xd175e
	ldrb r2, [r3, #0]	@ 000d175e 1a78
.org 0xd1760
	b.n 0xd176a	@ 000d1760 03e0
.org 0xd1762
	ldr r0, [r4, #116]	@ 000d1762 606f
.org 0xd1764
	str r0, [r5, #116]	@ 000d1764 6867
.org 0xd1766
	mov r0, r8	@ 000d1766 4046
.org 0xd1768
	ldrb r2, [r0, #0]	@ 000d1768 0278
.org 0xd176a
	ldr r1, [pc, #36]	@ 000d176a 0949
.org 0xd176c
	adds r0, r6, r1	@ 000d176c 7018
.org 0xd176e
	ldrh r1, [r0, #0]	@ 000d176e 0188
.org 0xd1770
	movs r0, #128	@ 000d1770 8020
.org 0xd1772
	lsls r0, r0, #8	@ 000d1772 0002
.org 0xd1774
	ands r0, r1	@ 000d1774 0840
.org 0xd1776
	cmp r0, #0	@ 000d1776 0028
.org 0xd1778
	bne.n 0xd179a	@ 000d1778 0fd1
.org 0xd177a
	ldr r0, [r4, #116]	@ 000d177a 606f
.org 0xd177c
	cmp r0, #0	@ 000d177c 0028
.org 0xd177e
	bne.n 0xd179a	@ 000d177e 0cd1
.org 0xd1780
	movs r0, #24	@ 000d1780 1820
.org 0xd1782
	str r0, [r4, #116]	@ 000d1782 6067
.org 0xd1784
	str r0, [r5, #116]	@ 000d1784 6867
.org 0xd1786
	cmp r2, #2	@ 000d1786 022a
