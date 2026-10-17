@ FUN_080e1560  entry 0x080e1560  size 494
.thumb
.org 0xe1560
FUN_080e1560:
	push {r4, r5, r6, lr}	@ 000e1560 70b5
.org 0xe1562
	sub sp, #8	@ 000e1562 82b0
.org 0xe1564
	adds r5, r0, #0	@ 000e1564 051c
.org 0xe1566
	ldr r0, [pc, #40]	@ 000e1566 0a48
.org 0xe1568
	ldr r1, [r0, #4]	@ 000e1568 4168
.org 0xe156a
	ldr r0, [r0, #0]	@ 000e156a 0068
.org 0xe156c
	str r0, [sp, #0]	@ 000e156c 0090
.org 0xe156e
	str r1, [sp, #4]	@ 000e156e 0191
.org 0xe1570
	movs r4, #0	@ 000e1570 0024
.org 0xe1572
	ldrb r0, [r5, #16]	@ 000e1572 287c
.org 0xe1574
	cmp r0, #3	@ 000e1574 0328
.org 0xe1576
	bls.n 0xe1594	@ 000e1576 0dd9
.org 0xe1578
	adds r1, r5, #0	@ 000e1578 291c
.org 0xe157a
	adds r1, #118	@ 000e157a 7631
.org 0xe157c
	movs r0, #210	@ 000e157c d220
.org 0xe157e
	lsls r0, r0, #8	@ 000e157e 0002
.org 0xe1580
	strh r0, [r1, #0]	@ 000e1580 0880
.org 0xe1582
	subs r1, #1	@ 000e1582 0139
.org 0xe1584
	movs r0, #4	@ 000e1584 0420
.org 0xe1586
	strb r0, [r1, #0]	@ 000e1586 0870
.org 0xe1588
	ldrb r0, [r5, #16]	@ 000e1588 287c
.org 0xe158a
	subs r0, #4	@ 000e158a 0438
.org 0xe158c
	strb r0, [r5, #16]	@ 000e158c 2874
.org 0xe158e
	b.n 0xe15a6	@ 000e158e 0ae0
.org 0xe1590
	.byte 0x98,0xa2,0x12,0x08	@ 000e1590 data
.org 0xe1594
	adds r2, r5, #0	@ 000e1594 2a1c
.org 0xe1596
	adds r2, #118	@ 000e1596 7632
.org 0xe1598
	movs r0, #0	@ 000e1598 0020
.org 0xe159a
	movs r1, #190	@ 000e159a be21
.org 0xe159c
	lsls r1, r1, #7	@ 000e159c c901
.org 0xe159e
	strh r1, [r2, #0]	@ 000e159e 1180
.org 0xe15a0
	adds r1, r5, #0	@ 000e15a0 291c
.org 0xe15a2
	adds r1, #117	@ 000e15a2 7531
.org 0xe15a4
	strb r0, [r1, #0]	@ 000e15a4 0870
.org 0xe15a6
	adds r6, r1, #0	@ 000e15a6 0e1c
.org 0xe15a8
	adds r0, r5, #0	@ 000e15a8 281c
.org 0xe15aa
	bl 0x1cc9c	@ 000e15aa 3bf777fb
.org 0xe15ae
	ldrb r1, [r5, #10]	@ 000e15ae a97a
.org 0xe15b0
	movs r0, #1	@ 000e15b0 0120
.org 0xe15b2
	orrs r0, r1	@ 000e15b2 0843
.org 0xe15b4
	movs r1, #2	@ 000e15b4 0221
.org 0xe15b6
	orrs r0, r1	@ 000e15b6 0843
.org 0xe15b8
	movs r2, #0	@ 000e15b8 0022
.org 0xe15ba
	movs r1, #239	@ 000e15ba ef21
.org 0xe15bc
	ands r0, r1	@ 000e15bc 0840
.org 0xe15be
	strb r0, [r5, #10]	@ 000e15be a872
.org 0xe15c0
	movs r3, #1	@ 000e15c0 0123
.org 0xe15c2
	adds r0, r5, #0	@ 000e15c2 281c
.org 0xe15c4
	adds r0, #76	@ 000e15c4 4c30
.org 0xe15c6
	strb r2, [r0, #0]	@ 000e15c6 0270
.org 0xe15c8
	adds r2, r5, #0	@ 000e15c8 2a1c
.org 0xe15ca
	adds r2, #74	@ 000e15ca 4a32
.org 0xe15cc
	ldrb r1, [r2, #0]	@ 000e15cc 1178
.org 0xe15ce
	movs r0, #17	@ 000e15ce 1120
.org 0xe15d0
	negs r0, r0	@ 000e15d0 4042
.org 0xe15d2
	ands r0, r1	@ 000e15d2 0840
.org 0xe15d4
	strb r0, [r2, #0]	@ 000e15d4 1070
.org 0xe15d6
	ldr r1, [pc, #92]	@ 000e15d6 1749
.org 0xe15d8
	ldrb r0, [r5, #9]	@ 000e15d8 687a
.org 0xe15da
	lsls r0, r0, #2	@ 000e15da 8000
.org 0xe15dc
	adds r0, r0, r1	@ 000e15dc 4018
.org 0xe15de
	str r3, [r5, #12]	@ 000e15de eb60
.org 0xe15e0
	ldr r0, [r0, #0]	@ 000e15e0 0068
.org 0xe15e2
	ldr r0, [r0, #4]	@ 000e15e2 4068
.org 0xe15e4
	str r0, [r5, #20]	@ 000e15e4 6861
.org 0xe15e6
	ldr r2, [r5, #84]	@ 000e15e6 6a6d
.org 0xe15e8
	ldr r0, [sp, #0]	@ 000e15e8 0098
.org 0xe15ea
	adds r0, r2, r0	@ 000e15ea 1018
.org 0xe15ec
	str r0, [sp, #0]	@ 000e15ec 0090
.org 0xe15ee
	ldr r0, [r5, #88]	@ 000e15ee a86d
.org 0xe15f0
	ldr r1, [sp, #4]	@ 000e15f0 0199
.org 0xe15f2
	adds r0, r0, r1	@ 000e15f2 4018
.org 0xe15f4
	str r0, [sp, #4]	@ 000e15f4 0190
.org 0xe15f6
	ldrb r0, [r5, #16]	@ 000e15f6 287c
.org 0xe15f8
	cmp r0, #0	@ 000e15f8 0028
.org 0xe15fa
	bne.n 0xe163c	@ 000e15fa 1fd1
.org 0xe15fc
	ldr r0, [pc, #56]	@ 000e15fc 0e48
.org 0xe15fe
	ldr r0, [r0, #0]	@ 000e15fe 0068
.org 0xe1600
	ldr r0, [r0, #84]	@ 000e1600 406d
.org 0xe1602
	cmp r0, r2	@ 000e1602 9042
.org 0xe1604
	ble.n 0xe1608	@ 000e1604 00dd
.org 0xe1606
	movs r4, #1	@ 000e1606 0124
.org 0xe1608
	movs r2, #128	@ 000e1608 8022
.org 0xe160a
	lsls r2, r2, #2	@ 000e160a 9200
.org 0xe160c
	movs r0, #0	@ 000e160c 0020
.org 0xe160e
	mov r1, sp	@ 000e160e 6946
.org 0xe1610
	adds r3, r4, #0	@ 000e1610 231c
.org 0xe1612
	bl 0xd0dc4	@ 000e1612 eff7d7fb
.org 0xe1616
	adds r0, r5, #0	@ 000e1616 281c
.org 0xe1618
	adds r0, #84	@ 000e1618 5430
.org 0xe161a
	ldrb r1, [r6, #0]	@ 000e161a 3178
.org 0xe161c
	adds r1, #3	@ 000e161c 0331
.org 0xe161e
	lsls r1, r1, #24	@ 000e161e 0906
.org 0xe1620
	lsrs r1, r1, #24	@ 000e1620 090e
.org 0xe1622
	movs r2, #1	@ 000e1622 0122
.org 0xe1624
	bl 0xe1508	@ 000e1624 fff770ff
.org 0xe1628
	adds r1, r5, #0	@ 000e1628 291c
.org 0xe162a
	adds r1, #37	@ 000e162a 2531
.org 0xe162c
	movs r0, #24	@ 000e162c 1820
.org 0xe162e
	strb r0, [r1, #0]	@ 000e162e 0870
.org 0xe1630
	b.n 0xe173a	@ 000e1630 83e0
.org 0xe1632
	.byte 0x00	@ 000e1632 data
.org 0xe1633
	.byte 0x00	@ 000e1633 data
.org 0xe1634
	.byte 0x64,0x6f,0x86,0x08	@ 000e1634 data
.org 0xe1638
	.byte 0xf0,0xdb,0x02,0x02	@ 000e1638 data
.org 0xe163c
	cmp r0, #1	@ 000e163c 0128
.org 0xe163e
	bne.n 0xe16f4	@ 000e163e 59d1
.org 0xe1640
	movs r0, #1	@ 000e1640 0120
.org 0xe1642
	mov r1, sp	@ 000e1642 6946
.org 0xe1644
	bl 0xd0c88	@ 000e1644 eff720fb
.org 0xe1648
	movs r0, #42	@ 000e1648 2a20
.org 0xe164a
	bl 0x2b10	@ 000e164a 21f761fa
.org 0xe164e
	movs r0, #2	@ 000e164e 0220
.org 0xe1650
	strb r0, [r5, #17]	@ 000e1650 6874
.org 0xe1652
	adds r4, r5, #0	@ 000e1652 2c1c
.org 0xe1654
	adds r4, #84	@ 000e1654 5434
.org 0xe1656
	ldrb r1, [r6, #0]	@ 000e1656 3178
.org 0xe1658
	adds r1, #3	@ 000e1658 0331
.org 0xe165a
	lsls r1, r1, #24	@ 000e165a 0906
.org 0xe165c
	lsrs r1, r1, #24	@ 000e165c 090e
.org 0xe165e
	adds r0, r4, #0	@ 000e165e 201c
.org 0xe1660
	movs r2, #3	@ 000e1660 0322
.org 0xe1662
	bl 0xe1508	@ 000e1662 fff751ff
.org 0xe1666
	ldrb r1, [r6, #0]	@ 000e1666 3178
.org 0xe1668
	adds r1, #3	@ 000e1668 0331
.org 0xe166a
	lsls r1, r1, #24	@ 000e166a 0906
.org 0xe166c
	lsrs r1, r1, #24	@ 000e166c 090e
.org 0xe166e
	adds r0, r4, #0	@ 000e166e 201c
.org 0xe1670
	movs r2, #4	@ 000e1670 0422
.org 0xe1672
	bl 0xe1508	@ 000e1672 fff749ff
.org 0xe1676
	ldr r0, [r5, #84]	@ 000e1676 686d
.org 0xe1678
	movs r1, #128	@ 000e1678 8021
.org 0xe167a
	lsls r1, r1, #6	@ 000e167a 8901
.org 0xe167c
	adds r0, r0, r1	@ 000e167c 4018
.org 0xe167e
	str r0, [r5, #84]	@ 000e167e 6865
.org 0xe1680
	ldrb r1, [r6, #0]	@ 000e1680 3178
.org 0xe1682
	adds r1, #3	@ 000e1682 0331
.org 0xe1684
	lsls r1, r1, #24	@ 000e1684 0906
.org 0xe1686
	lsrs r1, r1, #24	@ 000e1686 090e
.org 0xe1688
	adds r0, r4, #0	@ 000e1688 201c
.org 0xe168a
	movs r2, #5	@ 000e168a 0522
.org 0xe168c
	bl 0xe1508	@ 000e168c fff73cff
.org 0xe1690
	ldr r0, [r5, #84]	@ 000e1690 686d
.org 0xe1692
	ldr r1, [pc, #84]	@ 000e1692 1549
.org 0xe1694
	adds r0, r0, r1	@ 000e1694 4018
.org 0xe1696
	str r0, [r5, #84]	@ 000e1696 6865
.org 0xe1698
	ldr r0, [sp, #0]	@ 000e1698 0098
.org 0xe169a
	ldr r1, [pc, #80]	@ 000e169a 1449
.org 0xe169c
	adds r0, r0, r1	@ 000e169c 4018
.org 0xe169e
	str r0, [sp, #0]	@ 000e169e 0090
.org 0xe16a0
	ldr r0, [sp, #4]	@ 000e16a0 0198
.org 0xe16a2
	movs r4, #128	@ 000e16a2 8024
.org 0xe16a4
	lsls r4, r4, #5	@ 000e16a4 6401
.org 0xe16a6
	adds r0, r0, r4	@ 000e16a6 0019
.org 0xe16a8
	str r0, [sp, #4]	@ 000e16a8 0190
.org 0xe16aa
	movs r0, #1	@ 000e16aa 0120
.org 0xe16ac
	mov r1, sp	@ 000e16ac 6946
.org 0xe16ae
	bl 0xd0c88	@ 000e16ae eff7ebfa
.org 0xe16b2
	movs r0, #42	@ 000e16b2 2a20
.org 0xe16b4
	bl 0x2b10	@ 000e16b4 21f72cfa
.org 0xe16b8
	ldr r0, [sp, #0]	@ 000e16b8 0098
.org 0xe16ba
	adds r0, r0, r4	@ 000e16ba 0019
.org 0xe16bc
	str r0, [sp, #0]	@ 000e16bc 0090
.org 0xe16be
	ldr r0, [sp, #4]	@ 000e16be 0198
.org 0xe16c0
	movs r1, #160	@ 000e16c0 a021
.org 0xe16c2
	lsls r1, r1, #3	@ 000e16c2 c900
.org 0xe16c4
	adds r0, r0, r1	@ 000e16c4 4018
.org 0xe16c6
	str r0, [sp, #4]	@ 000e16c6 0190
.org 0xe16c8
	movs r0, #2	@ 000e16c8 0220
.org 0xe16ca
	mov r1, sp	@ 000e16ca 6946
.org 0xe16cc
	bl 0xd0c88	@ 000e16cc eff7dcfa
.org 0xe16d0
	ldr r0, [sp, #0]	@ 000e16d0 0098
.org 0xe16d2
	ldr r1, [pc, #28]	@ 000e16d2 0749
.org 0xe16d4
	adds r0, r0, r1	@ 000e16d4 4018
.org 0xe16d6
	str r0, [sp, #0]	@ 000e16d6 0090
.org 0xe16d8
	ldr r0, [sp, #4]	@ 000e16d8 0198
.org 0xe16da
	adds r0, r0, r1	@ 000e16da 4018
.org 0xe16dc
	str r0, [sp, #4]	@ 000e16dc 0190
.org 0xe16de
	movs r0, #2	@ 000e16de 0220
.org 0xe16e0
	mov r1, sp	@ 000e16e0 6946
.org 0xe16e2
	bl 0xd0c88	@ 000e16e2 eff7d1fa
.org 0xe16e6
	b.n 0xe173a	@ 000e16e6 28e0
.org 0xe16e8
	.byte 0x00,0xe0,0xff,0xff	@ 000e16e8 data
.org 0xe16ec
	.byte 0x00,0xf0,0xff,0xff	@ 000e16ec data
.org 0xe16f0
	.byte 0x00,0xeb,0xff,0xff	@ 000e16f0 data
.org 0xe16f4
	cmp r0, #2	@ 000e16f4 0228
.org 0xe16f6
	bne.n 0xe173a	@ 000e16f6 20d1
.org 0xe16f8
	strb r0, [r5, #17]	@ 000e16f8 6874
.org 0xe16fa
	movs r0, #1	@ 000e16fa 0120
.org 0xe16fc
	mov r1, sp	@ 000e16fc 6946
.org 0xe16fe
	bl 0xd0c88	@ 000e16fe eff7c3fa
.org 0xe1702
	movs r0, #42	@ 000e1702 2a20
.org 0xe1704
	bl 0x2b10	@ 000e1704 21f704fa
.org 0xe1708
	ldr r0, [sp, #0]	@ 000e1708 0098
.org 0xe170a
	ldr r1, [pc, #92]	@ 000e170a 1749
.org 0xe170c
	adds r0, r0, r1	@ 000e170c 4018
.org 0xe170e
	str r0, [sp, #0]	@ 000e170e 0090
.org 0xe1710
	ldr r0, [sp, #4]	@ 000e1710 0198
.org 0xe1712
	movs r1, #128	@ 000e1712 8021
.org 0xe1714
	lsls r1, r1, #5	@ 000e1714 4901
.org 0xe1716
	adds r0, r0, r1	@ 000e1716 4018
.org 0xe1718
	str r0, [sp, #4]	@ 000e1718 0190
.org 0xe171a
	movs r0, #1	@ 000e171a 0120
.org 0xe171c
	mov r1, sp	@ 000e171c 6946
.org 0xe171e
	bl 0xd0c88	@ 000e171e eff7b3fa
.org 0xe1722
	movs r0, #42	@ 000e1722 2a20
.org 0xe1724
	bl 0x2b10	@ 000e1724 21f7f4f9
.org 0xe1728
	adds r0, r5, #0	@ 000e1728 281c
.org 0xe172a
	adds r0, #84	@ 000e172a 5430
.org 0xe172c
	ldrb r1, [r6, #0]	@ 000e172c 3178
.org 0xe172e
	adds r1, #3	@ 000e172e 0331
.org 0xe1730
	lsls r1, r1, #24	@ 000e1730 0906
.org 0xe1732
	lsrs r1, r1, #24	@ 000e1732 090e
.org 0xe1734
	movs r2, #3	@ 000e1734 0322
.org 0xe1736
	bl 0xe1508	@ 000e1736 fff7e7fe
.org 0xe173a
	movs r4, #0	@ 000e173a 0024
.org 0xe173c
	str r4, [r5, #92]	@ 000e173c ec65
.org 0xe173e
	str r4, [r5, #96]	@ 000e173e 2c66
.org 0xe1740
	adds r0, r5, #0	@ 000e1740 281c
.org 0xe1742
	bl 0xe1a38	@ 000e1742 00f079f9
.org 0xe1746
	ldrb r0, [r5, #17]	@ 000e1746 687c
.org 0xe1748
	cmp r0, #5	@ 000e1748 0528
.org 0xe174a
	bne.n 0xe1750	@ 000e174a 01d1
.org 0xe174c
	movs r0, #4	@ 000e174c 0420
