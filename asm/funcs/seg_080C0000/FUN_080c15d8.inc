@ FUN_080c15d8  entry 0x080c15d8  size 194
.thumb
.org 0xc15d8
FUN_080c15d8:
	push {r4, r5, r6, r7, lr}	@ 000c15d8 f0b5
.org 0xc15da
	sub sp, #12	@ 000c15da 83b0
.org 0xc15dc
	adds r5, r0, #0	@ 000c15dc 051c
.org 0xc15de
	mov r1, sp	@ 000c15de 6946
.org 0xc15e0
	ldr r0, [pc, #184]	@ 000c15e0 2e48
.org 0xc15e2
	ldmia r0!, {r2, r3, r4}	@ 000c15e2 1cc8
.org 0xc15e4
	stmia r1!, {r2, r3, r4}	@ 000c15e4 1cc1
.org 0xc15e6
	ldrb r7, [r5, #16]	@ 000c15e6 2f7c
.org 0xc15e8
	ldrb r0, [r5, #10]	@ 000c15e8 a87a
.org 0xc15ea
	lsrs r6, r0, #4	@ 000c15ea 0609
.org 0xc15ec
	movs r0, #1	@ 000c15ec 0120
.org 0xc15ee
	ands r6, r0	@ 000c15ee 0640
.org 0xc15f0
	ldrb r0, [r5, #15]	@ 000c15f0 e87b
.org 0xc15f2
	cmp r0, #0	@ 000c15f2 0028
.org 0xc15f4
	bne.n 0xc165c	@ 000c15f4 32d1
.org 0xc15f6
	ldr r0, [pc, #168]	@ 000c15f6 2a48
.org 0xc15f8
	lsls r4, r7, #2	@ 000c15f8 bc00
.org 0xc15fa
	adds r0, r4, r0	@ 000c15fa 2018
.org 0xc15fc
	ldrh r1, [r0, #0]	@ 000c15fc 0188
.org 0xc15fe
	adds r0, r5, #0	@ 000c15fe 281c
.org 0xc1600
	bl 0x1cf00	@ 000c1600 5bf77efc
.org 0xc1604
	ldr r0, [pc, #156]	@ 000c1604 2748
.org 0xc1606
	adds r0, r7, r0	@ 000c1606 3818
.org 0xc1608
	ldrb r2, [r0, #0]	@ 000c1608 0278
.org 0xc160a
	movs r0, #160	@ 000c160a a020
.org 0xc160c
	lsls r0, r0, #1	@ 000c160c 4000
.org 0xc160e
	subs r0, r0, r2	@ 000c160e 801a
.org 0xc1610
	lsls r1, r6, #1	@ 000c1610 7100
.org 0xc1612
	muls r0, r1	@ 000c1612 4843
.org 0xc1614
	adds r0, r2, r0	@ 000c1614 1018
.org 0xc1616
	lsls r0, r0, #24	@ 000c1616 0006
.org 0xc1618
	lsrs r0, r0, #24	@ 000c1618 000e
.org 0xc161a
	adds r2, r0, #0	@ 000c161a 021c
.org 0xc161c
	mov r0, sp	@ 000c161c 6846
.org 0xc161e
	adds r1, r0, r4	@ 000c161e 0119
.org 0xc1620
	ldr r4, [pc, #132]	@ 000c1620 214c
.org 0xc1622
	adds r0, r2, #0	@ 000c1622 101c
.org 0xc1624
	adds r0, #64	@ 000c1624 4030
.org 0xc1626
	lsls r0, r0, #24	@ 000c1626 0006
.org 0xc1628
	lsrs r0, r0, #23	@ 000c1628 c00d
.org 0xc162a
	adds r0, r0, r4	@ 000c162a 0019
.org 0xc162c
	movs r3, #0	@ 000c162c 0023
.org 0xc162e
	ldrsh r0, [r0, r3]	@ 000c162e c05e
.org 0xc1630
	ldr r1, [r1, #0]	@ 000c1630 0968
.org 0xc1632
	muls r0, r1	@ 000c1632 4843
.org 0xc1634
	cmp r0, #0	@ 000c1634 0028
.org 0xc1636
	bge.n 0xc163a	@ 000c1636 00da
.org 0xc1638
	adds r0, #255	@ 000c1638 ff30
.org 0xc163a
	asrs r0, r0, #8	@ 000c163a 0012
.org 0xc163c
	str r0, [r5, #92]	@ 000c163c e865
.org 0xc163e
	lsls r0, r2, #1	@ 000c163e 5000
.org 0xc1640
	adds r0, r0, r4	@ 000c1640 0019
.org 0xc1642
	movs r4, #0	@ 000c1642 0024
.org 0xc1644
	ldrsh r0, [r0, r4]	@ 000c1644 005f
.org 0xc1646
	muls r0, r1	@ 000c1646 4843
.org 0xc1648
	cmp r0, #0	@ 000c1648 0028
.org 0xc164a
	bge.n 0xc164e	@ 000c164a 00da
.org 0xc164c
	adds r0, #255	@ 000c164c ff30
.org 0xc164e
	asrs r0, r0, #8	@ 000c164e 0012
.org 0xc1650
	str r0, [r5, #96]	@ 000c1650 2866
.org 0xc1652
	movs r0, #20	@ 000c1652 1420
.org 0xc1654
	strb r0, [r5, #19]	@ 000c1654 e874
.org 0xc1656
	ldrb r0, [r5, #15]	@ 000c1656 e87b
.org 0xc1658
	adds r0, #1	@ 000c1658 0130
.org 0xc165a
	strb r0, [r5, #15]	@ 000c165a e873
.org 0xc165c
	adds r0, r5, #0	@ 000c165c 281c
.org 0xc165e
	bl 0x1cff0	@ 000c165e 5bf7c7fc
.org 0xc1662
	adds r0, r5, #0	@ 000c1662 281c
.org 0xc1664
	adds r0, #116	@ 000c1664 7430
.org 0xc1666
	ldr r1, [pc, #68]	@ 000c1666 1149
.org 0xc1668
	bl 0x5784	@ 000c1668 44f78cf8
.org 0xc166c
	ldr r0, [r5, #84]	@ 000c166c 686d
.org 0xc166e
	ldr r1, [r5, #92]	@ 000c166e e96d
.org 0xc1670
	adds r0, r0, r1	@ 000c1670 4018
.org 0xc1672
	str r0, [r5, #84]	@ 000c1672 6865
.org 0xc1674
	ldr r0, [r5, #88]	@ 000c1674 a86d
.org 0xc1676
	ldr r1, [r5, #96]	@ 000c1676 296e
.org 0xc1678
	adds r0, r0, r1	@ 000c1678 4018
.org 0xc167a
	str r0, [r5, #88]	@ 000c167a a865
.org 0xc167c
	ldrb r0, [r5, #19]	@ 000c167c e87c
.org 0xc167e
	subs r0, #1	@ 000c167e 0138
.org 0xc1680
	strb r0, [r5, #19]	@ 000c1680 e874
.org 0xc1682
	lsls r0, r0, #24	@ 000c1682 0006
.org 0xc1684
	lsrs r1, r0, #24	@ 000c1684 010e
.org 0xc1686
	cmp r1, #0	@ 000c1686 0029
.org 0xc1688
	bne.n 0xc1692	@ 000c1688 03d1
.org 0xc168a
	movs r0, #1	@ 000c168a 0120
.org 0xc168c
	strb r0, [r5, #13]	@ 000c168c 6873
.org 0xc168e
	strb r1, [r5, #14]	@ 000c168e a973
.org 0xc1690
	strb r1, [r5, #15]	@ 000c1690 e973
.org 0xc1692
	add sp, #12	@ 000c1692 03b0
.org 0xc1694
	pop {r4, r5, r6, r7}	@ 000c1694 f0bc
.org 0xc1696
	pop {r0}	@ 000c1696 01bc
.org 0xc1698
	bx r0	@ 000c1698 0047
