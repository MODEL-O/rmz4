@ FUN_080a1618  entry 0x080a1618  size 230
.thumb
.org 0xa1618
FUN_080a1618:
	push {r4, r5, r6, r7, lr}	@ 000a1618 f0b5
.org 0xa161a
	mov r7, r8	@ 000a161a 4746
.org 0xa161c
	push {r7}	@ 000a161c 80b4
.org 0xa161e
	sub sp, #8	@ 000a161e 82b0
.org 0xa1620
	adds r7, r0, #0	@ 000a1620 071c
.org 0xa1622
	ldrb r1, [r7, #15]	@ 000a1622 f97b
.org 0xa1624
	cmp r1, #0	@ 000a1624 0029
.org 0xa1626
	bne.n 0xa1658	@ 000a1626 17d1
.org 0xa1628
	adds r2, r7, #0	@ 000a1628 3a1c
.org 0xa162a
	adds r2, #37	@ 000a162a 2532
.org 0xa162c
	movs r0, #24	@ 000a162c 1820
.org 0xa162e
	strb r0, [r2, #0]	@ 000a162e 1070
.org 0xa1630
	adds r0, r7, #0	@ 000a1630 381c
.org 0xa1632
	adds r0, #140	@ 000a1632 8c30
.org 0xa1634
	str r1, [r0, #0]	@ 000a1634 0160
.org 0xa1636
	adds r0, #4	@ 000a1636 0430
.org 0xa1638
	str r1, [r0, #0]	@ 000a1638 0160
.org 0xa163a
	adds r0, #4	@ 000a163a 0430
.org 0xa163c
	strb r1, [r0, #0]	@ 000a163c 0170
.org 0xa163e
	ldrb r1, [r7, #10]	@ 000a163e b97a
.org 0xa1640
	movs r0, #251	@ 000a1640 fb20
.org 0xa1642
	ands r0, r1	@ 000a1642 0840
.org 0xa1644
	strb r0, [r7, #10]	@ 000a1644 b872
.org 0xa1646
	ldr r1, [pc, #184]	@ 000a1646 2e49
.org 0xa1648
	adds r0, r7, #0	@ 000a1648 381c
.org 0xa164a
	bl 0x1cf00	@ 000a164a 7bf759fc
.org 0xa164e
	movs r0, #4	@ 000a164e 0420
.org 0xa1650
	strb r0, [r7, #18]	@ 000a1650 b874
.org 0xa1652
	ldrb r0, [r7, #15]	@ 000a1652 f87b
.org 0xa1654
	adds r0, #1	@ 000a1654 0130
.org 0xa1656
	strb r0, [r7, #15]	@ 000a1656 f873
.org 0xa1658
	adds r0, r7, #0	@ 000a1658 381c
.org 0xa165a
	bl 0x1cff0	@ 000a165a 7bf7c9fc
.org 0xa165e
	ldrb r0, [r7, #18]	@ 000a165e b87c
.org 0xa1660
	subs r0, #1	@ 000a1660 0138
.org 0xa1662
	strb r0, [r7, #18]	@ 000a1662 b874
.org 0xa1664
	lsls r0, r0, #24	@ 000a1664 0006
.org 0xa1666
	lsrs r0, r0, #24	@ 000a1666 000e
.org 0xa1668
	mov r8, r0	@ 000a1668 8046
.org 0xa166a
	cmp r0, #0	@ 000a166a 0028
.org 0xa166c
	bne.n 0xa16f2	@ 000a166c 41d1
.org 0xa166e
	movs r0, #42	@ 000a166e 2a20
.org 0xa1670
	bl 0x2b10	@ 000a1670 61f74efa
.org 0xa1674
	ldr r6, [pc, #140]	@ 000a1674 234e
.org 0xa1676
	ldr r0, [r6, #0]	@ 000a1676 3068
.org 0xa1678
	ldr r5, [pc, #140]	@ 000a1678 234d
.org 0xa167a
	muls r0, r5	@ 000a167a 6843
.org 0xa167c
	ldr r2, [pc, #140]	@ 000a167c 234a
.org 0xa167e
	adds r0, r0, r2	@ 000a167e 8018
.org 0xa1680
	lsls r0, r0, #1	@ 000a1680 4000
.org 0xa1682
	lsrs r4, r0, #1	@ 000a1682 4408
.org 0xa1684
	lsrs r0, r0, #17	@ 000a1684 400c
.org 0xa1686
	movs r3, #7	@ 000a1686 0723
.org 0xa1688
	ands r0, r3	@ 000a1688 1840
.org 0xa168a
	subs r0, #3	@ 000a168a 0338
.org 0xa168c
	lsls r0, r0, #8	@ 000a168c 0002
.org 0xa168e
	ldr r1, [r7, #84]	@ 000a168e 796d
.org 0xa1690
	adds r1, r1, r0	@ 000a1690 0918
.org 0xa1692
	str r1, [sp, #0]	@ 000a1692 0091
.org 0xa1694
	adds r0, r4, #0	@ 000a1694 201c
.org 0xa1696
	muls r0, r5	@ 000a1696 6843
.org 0xa1698
	adds r0, r0, r2	@ 000a1698 8018
.org 0xa169a
	lsls r0, r0, #1	@ 000a169a 4000
.org 0xa169c
	lsrs r1, r0, #1	@ 000a169c 4108
.org 0xa169e
	str r1, [r6, #0]	@ 000a169e 3160
.org 0xa16a0
	lsrs r0, r0, #17	@ 000a16a0 400c
.org 0xa16a2
	ands r0, r3	@ 000a16a2 1840
.org 0xa16a4
	subs r0, #3	@ 000a16a4 0338
.org 0xa16a6
	lsls r0, r0, #8	@ 000a16a6 0002
.org 0xa16a8
	ldr r1, [r7, #88]	@ 000a16a8 b96d
.org 0xa16aa
	adds r1, r1, r0	@ 000a16aa 0918
.org 0xa16ac
	str r1, [sp, #4]	@ 000a16ac 0191
.org 0xa16ae
	movs r0, #1	@ 000a16ae 0120
.org 0xa16b0
	mov r1, sp	@ 000a16b0 6946
.org 0xa16b2
	bl 0xd0c88	@ 000a16b2 2ff0e9fa
.org 0xa16b6
	adds r0, r7, #0	@ 000a16b6 381c
.org 0xa16b8
	bl 0xa1c3c	@ 000a16b8 00f0c0fa
.org 0xa16bc
	adds r4, r7, #0	@ 000a16bc 3c1c
.org 0xa16be
	adds r4, #84	@ 000a16be 5434
.org 0xa16c0
	movs r0, #4	@ 000a16c0 0420
.org 0xa16c2
	movs r1, #5	@ 000a16c2 0521
.org 0xa16c4
	adds r2, r4, #0	@ 000a16c4 221c
.org 0xa16c6
	bl 0x2ab88	@ 000a16c6 89f75ffa
.org 0xa16ca
	ldrb r1, [r7, #10]	@ 000a16ca b97a
.org 0xa16cc
	movs r0, #254	@ 000a16cc fe20
.org 0xa16ce
	ands r0, r1	@ 000a16ce 0840
.org 0xa16d0
	strb r0, [r7, #10]	@ 000a16d0 b872
.org 0xa16d2
	ldr r2, [pc, #60]	@ 000a16d2 0f4a
.org 0xa16d4
	ldrh r1, [r2, #12]	@ 000a16d4 9189
.org 0xa16d6
	ldr r0, [pc, #60]	@ 000a16d6 0f48
.org 0xa16d8
	cmp r1, r0	@ 000a16d8 8142
.org 0xa16da
	bhi.n 0xa16e0	@ 000a16da 01d8
.org 0xa16dc
	adds r0, r1, #1	@ 000a16dc 481c
.org 0xa16de
	strh r0, [r2, #12]	@ 000a16de 9081
.org 0xa16e0
	adds r0, r7, #0	@ 000a16e0 381c
.org 0xa16e2
	adds r1, r4, #0	@ 000a16e2 211c
.org 0xa16e4
	bl 0x2abe0	@ 000a16e4 89f77cfa
.org 0xa16e8
	movs r0, #3	@ 000a16e8 0320
.org 0xa16ea
	strb r0, [r7, #13]	@ 000a16ea 7873
.org 0xa16ec
	mov r0, r8	@ 000a16ec 4046
.org 0xa16ee
	strb r0, [r7, #14]	@ 000a16ee b873
.org 0xa16f0
	strb r0, [r7, #15]	@ 000a16f0 f873
.org 0xa16f2
	add sp, #8	@ 000a16f2 02b0
.org 0xa16f4
	pop {r3}	@ 000a16f4 08bc
.org 0xa16f6
	mov r8, r3	@ 000a16f6 9846
.org 0xa16f8
	pop {r4, r5, r6, r7}	@ 000a16f8 f0bc
.org 0xa16fa
	pop {r0}	@ 000a16fa 01bc
.org 0xa16fc
	bx r0	@ 000a16fc 0047
