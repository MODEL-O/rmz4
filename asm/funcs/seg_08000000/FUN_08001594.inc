@ FUN_08001594  entry 0x08001594  size 188
.thumb
.org 0x1594
FUN_08001594:
	push {r4, r5, r6, r7, lr}	@ 00001594 f0b5
.org 0x1596
	mov r7, sl	@ 00001596 5746
.org 0x1598
	mov r6, r9	@ 00001598 4e46
.org 0x159a
	mov r5, r8	@ 0000159a 4546
.org 0x159c
	push {r5, r6, r7}	@ 0000159c e0b4
.org 0x159e
	sub sp, #16	@ 0000159e 84b0
.org 0x15a0
	mov r8, r1	@ 000015a0 8846
.org 0x15a2
	lsls r0, r0, #24	@ 000015a2 0006
.org 0x15a4
	lsrs r5, r0, #24	@ 000015a4 050e
.org 0x15a6
	mov r1, sp	@ 000015a6 6946
.org 0x15a8
	ldr r0, [pc, #12]	@ 000015a8 0348
.org 0x15aa
	ldmia r0!, {r2, r3, r4}	@ 000015aa 1cc8
.org 0x15ac
	stmia r1!, {r2, r3, r4}	@ 000015ac 1cc1
.org 0x15ae
	ldr r0, [r0, #0]	@ 000015ae 0068
.org 0x15b0
	str r0, [r1, #0]	@ 000015b0 0860
.org 0x15b2
	cmp r5, #5	@ 000015b2 052d
.org 0x15b4
	bls.n 0x15c0	@ 000015b4 04d9
.org 0x15b6
	b.n 0x1642	@ 000015b6 44e0
.org 0x15b8
	.byte 0x44,0x95,0x12,0x08	@ 000015b8 data
.org 0x15bc
	movs r0, #1	@ 000015bc 0120
.org 0x15be
	b.n 0x1644	@ 000015be 41e0
.org 0x15c0
	movs r0, #3	@ 000015c0 0320
.org 0x15c2
	mov r9, r0	@ 000015c2 8146
.org 0x15c4
	lsls r0, r5, #2	@ 000015c4 a800
.org 0x15c6
	adds r7, r0, r5	@ 000015c6 4719
.org 0x15c8
	ldr r2, [pc, #136]	@ 000015c8 224a
.org 0x15ca
	mov sl, r2	@ 000015ca 9246
.org 0x15cc
	mov r4, sp	@ 000015cc 6c46
.org 0x15ce
	adds r1, r5, #6	@ 000015ce a91d
.org 0x15d0
	lsls r0, r1, #2	@ 000015d0 8800
.org 0x15d2
	adds r6, r0, r1	@ 000015d2 4618
.org 0x15d4
	lsls r0, r7, #4	@ 000015d4 3801
.org 0x15d6
	adds r0, r7, r0	@ 000015d6 3818
.org 0x15d8
	lsls r0, r0, #16	@ 000015d8 0004
.org 0x15da
	lsrs r0, r0, #16	@ 000015da 000c
.org 0x15dc
	mov r1, sp	@ 000015dc 6946
.org 0x15de
	movs r2, #16	@ 000015de 1022
.org 0x15e0
	bl 0x1b38	@ 000015e0 00f0aafa
.org 0x15e4
	ldr r1, [sp, #0]	@ 000015e4 0099
.org 0x15e6
	mov r3, sl	@ 000015e6 5346
.org 0x15e8
	ldr r0, [r3, #0]	@ 000015e8 1868
.org 0x15ea
	cmp r1, r0	@ 000015ea 8142
.org 0x15ec
	bne.n 0x1604	@ 000015ec 0ad1
.org 0x15ee
	ldr r0, [sp, #8]	@ 000015ee 0298
.org 0x15f0
	cmp r0, r8	@ 000015f0 4045
.org 0x15f2
	bne.n 0x1604	@ 000015f2 07d1
.org 0x15f4
	ldrb r0, [r4, #13]	@ 000015f4 607b
.org 0x15f6
	cmp r0, #8	@ 000015f6 0828
.org 0x15f8
	bne.n 0x1604	@ 000015f8 04d1
.org 0x15fa
	ldrb r0, [r4, #15]	@ 000015fa e07b
.org 0x15fc
	lsls r0, r0, #25	@ 000015fc 4006
.org 0x15fe
	lsrs r0, r0, #25	@ 000015fe 400e
.org 0x1600
	cmp r0, r5	@ 00001600 a842
.org 0x1602
	beq.n 0x15bc	@ 00001602 dbd0
.org 0x1604
	lsls r0, r6, #4	@ 00001604 3001
.org 0x1606
	adds r0, r6, r0	@ 00001606 3018
.org 0x1608
	lsls r0, r0, #16	@ 00001608 0004
.org 0x160a
	lsrs r0, r0, #16	@ 0000160a 000c
.org 0x160c
	mov r1, sp	@ 0000160c 6946
.org 0x160e
	movs r2, #16	@ 0000160e 1022
.org 0x1610
	bl 0x1b38	@ 00001610 00f092fa
.org 0x1614
	ldr r1, [sp, #0]	@ 00001614 0099
.org 0x1616
	mov r2, sl	@ 00001616 5246
.org 0x1618
	ldr r0, [r2, #0]	@ 00001618 1068
.org 0x161a
	cmp r1, r0	@ 0000161a 8142
.org 0x161c
	bne.n 0x1634	@ 0000161c 0ad1
.org 0x161e
	ldr r0, [sp, #8]	@ 0000161e 0298
.org 0x1620
	cmp r0, r8	@ 00001620 4045
.org 0x1622
	bne.n 0x1634	@ 00001622 07d1
.org 0x1624
	ldrb r0, [r4, #13]	@ 00001624 607b
.org 0x1626
	cmp r0, #8	@ 00001626 0828
.org 0x1628
	bne.n 0x1634	@ 00001628 04d1
.org 0x162a
	ldrb r0, [r4, #15]	@ 0000162a e07b
.org 0x162c
	lsls r0, r0, #25	@ 0000162c 4006
.org 0x162e
	lsrs r0, r0, #25	@ 0000162e 400e
.org 0x1630
	cmp r0, r5	@ 00001630 a842
.org 0x1632
	beq.n 0x15bc	@ 00001632 c3d0
.org 0x1634
	mov r0, r9	@ 00001634 4846
.org 0x1636
	subs r0, #1	@ 00001636 0138
.org 0x1638
	lsls r0, r0, #16	@ 00001638 0004
.org 0x163a
	lsrs r0, r0, #16	@ 0000163a 000c
.org 0x163c
	mov r9, r0	@ 0000163c 8146
.org 0x163e
	cmp r0, #0	@ 0000163e 0028
.org 0x1640
	bne.n 0x15d4	@ 00001640 c8d1
.org 0x1642
	movs r0, #0	@ 00001642 0020
.org 0x1644
	add sp, #16	@ 00001644 04b0
.org 0x1646
	pop {r3, r4, r5}	@ 00001646 38bc
.org 0x1648
	mov r8, r3	@ 00001648 9846
.org 0x164a
	mov r9, r4	@ 0000164a a146
.org 0x164c
	mov sl, r5	@ 0000164c aa46
.org 0x164e
	pop {r4, r5, r6, r7}	@ 0000164e f0bc
