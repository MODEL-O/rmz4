@ FUN_080b1648  entry 0x080b1648  size 170
.thumb
.org 0xb1648
FUN_080b1648:
	push {r4, r5, r6, r7, lr}	@ 000b1648 f0b5
.org 0xb164a
	adds r4, r0, #0	@ 000b164a 041c
.org 0xb164c
	ldr r0, [r4, #84]	@ 000b164c 606d
.org 0xb164e
	ldr r5, [r4, #92]	@ 000b164e e56d
.org 0xb1650
	adds r1, r0, r5	@ 000b1650 4119
.org 0xb1652
	str r1, [r4, #84]	@ 000b1652 6165
.org 0xb1654
	adds r3, r4, #0	@ 000b1654 231c
.org 0xb1656
	adds r3, #192	@ 000b1656 c033
.org 0xb1658
	ldrb r6, [r3, #0]	@ 000b1658 1e78
.org 0xb165a
	cmp r6, #1	@ 000b165a 012e
.org 0xb165c
	bne.n 0xb16d4	@ 000b165c 3ad1
.org 0xb165e
	adds r5, r4, #0	@ 000b165e 251c
.org 0xb1660
	adds r5, #193	@ 000b1660 c135
.org 0xb1662
	ldrb r0, [r5, #0]	@ 000b1662 2878
.org 0xb1664
	cmp r0, #2	@ 000b1664 0228
.org 0xb1666
	beq.n 0xb16b4	@ 000b1666 25d0
.org 0xb1668
	adds r0, r4, #0	@ 000b1668 201c
.org 0xb166a
	adds r0, #180	@ 000b166a b430
.org 0xb166c
	ldr r0, [r0, #0]	@ 000b166c 0068
.org 0xb166e
	adds r0, r1, r0	@ 000b166e 0818
.org 0xb1670
	adds r7, r4, #0	@ 000b1670 271c
.org 0xb1672
	adds r7, #184	@ 000b1672 b837
.org 0xb1674
	ldr r1, [r4, #88]	@ 000b1674 a16d
.org 0xb1676
	ldr r2, [r7, #0]	@ 000b1676 3a68
.org 0xb1678
	adds r1, r1, r2	@ 000b1678 8918
.org 0xb167a
	bl 0x7c7c	@ 000b167a 56f7fffa
.org 0xb167e
	lsls r0, r0, #16	@ 000b167e 0004
.org 0xb1680
	lsrs r2, r0, #16	@ 000b1680 020c
.org 0xb1682
	cmp r2, #0	@ 000b1682 002a
.org 0xb1684
	bne.n 0xb16f8	@ 000b1684 38d1
.org 0xb1686
	strb r2, [r4, #13]	@ 000b1686 6273
.org 0xb1688
	ldr r0, [r4, #84]	@ 000b1688 606d
.org 0xb168a
	ldr r1, [r4, #92]	@ 000b168a e16d
.org 0xb168c
	subs r0, r0, r1	@ 000b168c 401a
.org 0xb168e
	str r0, [r4, #84]	@ 000b168e 6065
.org 0xb1690
	adds r0, r4, #0	@ 000b1690 201c
.org 0xb1692
	adds r0, #188	@ 000b1692 bc30
.org 0xb1694
	str r2, [r0, #0]	@ 000b1694 0260
.org 0xb1696
	ldrb r0, [r5, #0]	@ 000b1696 2878
.org 0xb1698
	adds r0, #1	@ 000b1698 0130
.org 0xb169a
	strb r0, [r5, #0]	@ 000b169a 2870
.org 0xb169c
	ldrb r0, [r4, #16]	@ 000b169c 207c
.org 0xb169e
	ands r6, r0	@ 000b169e 0640
.org 0xb16a0
	cmp r6, #0	@ 000b16a0 002e
.org 0xb16a2
	bne.n 0xb16f8	@ 000b16a2 29d1
.org 0xb16a4
	ldr r0, [r7, #0]	@ 000b16a4 3868
.org 0xb16a6
	ldr r1, [pc, #8]	@ 000b16a6 0249
.org 0xb16a8
	adds r0, r0, r1	@ 000b16a8 4018
.org 0xb16aa
	str r0, [r7, #0]	@ 000b16aa 3860
.org 0xb16ac
	b.n 0xb16f8	@ 000b16ac 24e0
.org 0xb16ae
	.byte 0x00	@ 000b16ae data
.org 0xb16af
	.byte 0x00	@ 000b16af data
.org 0xb16b0
	.byte 0x00,0xff,0xff,0xff	@ 000b16b0 data
.org 0xb16b4
	ldr r0, [pc, #24]	@ 000b16b4 0648
.org 0xb16b6
	adds r1, r4, #0	@ 000b16b6 211c
.org 0xb16b8
	adds r1, #84	@ 000b16b8 5431
.org 0xb16ba
	bl 0x1fb14	@ 000b16ba 6ef72bfa
.org 0xb16be
	movs r1, #128	@ 000b16be 8021
.org 0xb16c0
	lsls r1, r1, #7	@ 000b16c0 c901
.org 0xb16c2
	cmp r0, r1	@ 000b16c2 8842
.org 0xb16c4
	bls.n 0xb16f8	@ 000b16c4 18d9
.org 0xb16c6
	ldrb r0, [r5, #0]	@ 000b16c6 2878
.org 0xb16c8
	adds r0, #1	@ 000b16c8 0130
.org 0xb16ca
	strb r0, [r5, #0]	@ 000b16ca 2870
.org 0xb16cc
	b.n 0xb16f8	@ 000b16cc 14e0
.org 0xb16ce
	.byte 0x00	@ 000b16ce data
.org 0xb16cf
	.byte 0x00	@ 000b16cf data
.org 0xb16d0
	.byte 0xf8,0xe9,0x02,0x02	@ 000b16d0 data
.org 0xb16d4
	adds r2, r4, #0	@ 000b16d4 221c
.org 0xb16d6
	adds r2, #188	@ 000b16d6 bc32
.org 0xb16d8
	ldr r1, [r2, #0]	@ 000b16d8 1168
.org 0xb16da
	cmp r1, #0	@ 000b16da 0029
.org 0xb16dc
	ble.n 0xb16ec	@ 000b16dc 06dd
.org 0xb16de
	adds r0, r5, #0	@ 000b16de 281c
.org 0xb16e0
	cmp r0, #0	@ 000b16e0 0028
.org 0xb16e2
	bge.n 0xb16e6	@ 000b16e2 00da
.org 0xb16e4
	negs r0, r0	@ 000b16e4 4042
.org 0xb16e6
	subs r0, r1, r0	@ 000b16e6 081a
.org 0xb16e8
	str r0, [r2, #0]	@ 000b16e8 1060
.org 0xb16ea
	b.n 0xb16f8	@ 000b16ea 05e0
.org 0xb16ec
	movs r0, #0	@ 000b16ec 0020
.org 0xb16ee
	movs r1, #1	@ 000b16ee 0121
.org 0xb16f0
	strb r1, [r3, #0]	@ 000b16f0 1970
