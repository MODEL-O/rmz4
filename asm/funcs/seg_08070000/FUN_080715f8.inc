@ FUN_080715f8  entry 0x080715f8  size 258
.thumb
.org 0x715f8
FUN_080715f8:
	push {r4, r5, r6, lr}	@ 000715f8 70b5
.org 0x715fa
	sub sp, #16	@ 000715fa 84b0
.org 0x715fc
	adds r6, r0, #0	@ 000715fc 061c
.org 0x715fe
	ldr r1, [pc, #192]	@ 000715fe 3049
.org 0x71600
	mov r0, sp	@ 00071600 6846
.org 0x71602
	movs r2, #6	@ 00071602 0622
.org 0x71604
	bl 0x129258	@ 00071604 b7f028fe
.org 0x71608
	add r5, sp, #8	@ 00071608 02ad
.org 0x7160a
	ldr r1, [pc, #184]	@ 0007160a 2e49
.org 0x7160c
	adds r0, r5, #0	@ 0007160c 281c
.org 0x7160e
	movs r2, #6	@ 0007160e 0622
.org 0x71610
	bl 0x129258	@ 00071610 b7f022fe
.org 0x71614
	adds r0, r6, #0	@ 00071614 301c
.org 0x71616
	adds r0, #195	@ 00071616 c330
.org 0x71618
	ldrb r4, [r0, #0]	@ 00071618 0478
.org 0x7161a
	ldrb r0, [r6, #15]	@ 0007161a f07b
.org 0x7161c
	cmp r0, #0	@ 0007161c 0028
.org 0x7161e
	bne.n 0x71644	@ 0007161e 11d1
.org 0x71620
	adds r0, r6, #0	@ 00071620 301c
.org 0x71622
	movs r1, #5	@ 00071622 0521
.org 0x71624
	bl 0x736c4	@ 00071624 02f04ef8
.org 0x71628
	lsls r1, r4, #1	@ 00071628 6100
.org 0x7162a
	mov r2, sp	@ 0007162a 6a46
.org 0x7162c
	adds r0, r2, r1	@ 0007162c 5018
.org 0x7162e
	movs r2, #0	@ 0007162e 0022
.org 0x71630
	ldrsh r0, [r0, r2]	@ 00071630 805e
.org 0x71632
	negs r0, r0	@ 00071632 4042
.org 0x71634
	str r0, [r6, #96]	@ 00071634 3066
.org 0x71636
	adds r1, r5, r1	@ 00071636 6918
.org 0x71638
	movs r2, #0	@ 00071638 0022
.org 0x7163a
	ldrsh r0, [r1, r2]	@ 0007163a 885e
.org 0x7163c
	str r0, [r6, #104]	@ 0007163c b066
.org 0x7163e
	ldrb r0, [r6, #15]	@ 0007163e f07b
.org 0x71640
	adds r0, #1	@ 00071640 0130
.org 0x71642
	strb r0, [r6, #15]	@ 00071642 f073
.org 0x71644
	adds r0, r6, #0	@ 00071644 301c
.org 0x71646
	bl 0x1cff0	@ 00071646 abf7d3fc
.org 0x7164a
	adds r0, r6, #0	@ 0007164a 301c
.org 0x7164c
	adds r0, #116	@ 0007164c 7430
.org 0x7164e
	ldr r4, [pc, #120]	@ 0007164e 1e4c
.org 0x71650
	ldr r3, [pc, #120]	@ 00071650 1e4b
.org 0x71652
	adds r1, r6, #0	@ 00071652 311c
.org 0x71654
	adds r1, #184	@ 00071654 b831
.org 0x71656
	ldrb r2, [r1, #0]	@ 00071656 0a78
.org 0x71658
	lsls r1, r2, #1	@ 00071658 5100
.org 0x7165a
	adds r1, r1, r3	@ 0007165a c918
.org 0x7165c
	ldrh r1, [r1, #0]	@ 0007165c 0988
.org 0x7165e
	lsls r1, r1, #2	@ 0007165e 8900
.org 0x71660
	adds r1, r1, r4	@ 00071660 0919
.org 0x71662
	adds r3, r6, #0	@ 00071662 331c
.org 0x71664
	adds r3, #113	@ 00071664 7133
.org 0x71666
	movs r5, #0	@ 00071666 0025
.org 0x71668
	ldrsb r5, [r3, r5]	@ 00071668 5d57
.org 0x7166a
	ldr r1, [r1, #0]	@ 0007166a 0968
.org 0x7166c
	lsls r3, r5, #2	@ 0007166c ab00
.org 0x7166e
	adds r3, r3, r1	@ 0007166e 5b18
.org 0x71670
	ldr r4, [pc, #92]	@ 00071670 174c
.org 0x71672
	adds r1, r6, #0	@ 00071672 311c
.org 0x71674
	adds r1, #185	@ 00071674 b931
.org 0x71676
	ldrb r1, [r1, #0]	@ 00071676 0978
.org 0x71678
	lsls r1, r1, #2	@ 00071678 8900
.org 0x7167a
	adds r1, r1, r4	@ 0007167a 0919
.org 0x7167c
	ldr r1, [r1, #0]	@ 0007167c 0968
.org 0x7167e
	lsls r2, r2, #2	@ 0007167e 9200
.org 0x71680
	adds r2, r2, r1	@ 00071680 5218
.org 0x71682
	ldr r1, [r2, #0]	@ 00071682 1168
.org 0x71684
	adds r1, r1, r5	@ 00071684 4919
.org 0x71686
	ldrb r1, [r1, #0]	@ 00071686 0978
.org 0x71688
	lsls r2, r1, #1	@ 00071688 4a00
.org 0x7168a
	adds r2, r2, r1	@ 0007168a 5218
.org 0x7168c
	lsls r2, r2, #3	@ 0007168c d200
.org 0x7168e
	ldr r1, [r3, #0]	@ 0007168e 1968
.org 0x71690
	adds r1, r1, r2	@ 00071690 8918
.org 0x71692
	bl 0x5784	@ 00071692 94f777f8
.org 0x71696
	adds r0, r6, #0	@ 00071696 301c
.org 0x71698
	adds r0, #115	@ 00071698 7330
.org 0x7169a
	ldrb r0, [r0, #0]	@ 0007169a 0078
.org 0x7169c
	cmp r0, #3	@ 0007169c 0328
.org 0x7169e
	bne.n 0x716e8	@ 0007169e 23d1
.org 0x716a0
	ldr r0, [r6, #88]	@ 000716a0 b06d
.org 0x716a2
	ldr r1, [r6, #96]	@ 000716a2 316e
.org 0x716a4
	adds r0, r0, r1	@ 000716a4 4018
.org 0x716a6
	str r0, [r6, #88]	@ 000716a6 b065
.org 0x716a8
	adds r0, r6, #0	@ 000716a8 301c
.org 0x716aa
	bl 0x737e8	@ 000716aa 02f09df8
.org 0x716ae
	cmp r0, #0	@ 000716ae 0028
.org 0x716b0
	beq.n 0x716d4	@ 000716b0 10d0
.org 0x716b2
	adds r0, r6, #0	@ 000716b2 301c
.org 0x716b4
	bl 0x739cc	@ 000716b4 02f08af9
.org 0x716b8
	movs r0, #0	@ 000716b8 0020
.org 0x716ba
	str r0, [r6, #96]	@ 000716ba 3066
.org 0x716bc
	b.n 0x716ee	@ 000716bc 17e0
.org 0x716be
	.byte 0x00	@ 000716be data
.org 0x716bf
	.byte 0x00	@ 000716bf data
.org 0x716c0
	.byte 0x56,0x99,0x12,0x08	@ 000716c0 data
.org 0x716c4
	.byte 0x5c,0x99,0x12,0x08	@ 000716c4 data
.org 0x716c8
	.byte 0x08,0xcb,0x85,0x08	@ 000716c8 data
.org 0x716cc
	.byte 0x04,0xcc,0x85,0x08	@ 000716cc data
.org 0x716d0
	.byte 0xfc,0xcb,0x85,0x08	@ 000716d0 data
.org 0x716d4
	ldr r0, [r6, #96]	@ 000716d4 306e
.org 0x716d6
	ldr r1, [r6, #104]	@ 000716d6 b16e
.org 0x716d8
	adds r0, r0, r1	@ 000716d8 4018
.org 0x716da
	str r0, [r6, #96]	@ 000716da 3066
.org 0x716dc
	movs r1, #224	@ 000716dc e021
.org 0x716de
	lsls r1, r1, #3	@ 000716de c900
.org 0x716e0
	cmp r0, r1	@ 000716e0 8842
.org 0x716e2
	ble.n 0x716ee	@ 000716e2 04dd
.org 0x716e4
	str r1, [r6, #96]	@ 000716e4 3166
.org 0x716e6
	b.n 0x716ee	@ 000716e6 02e0
.org 0x716e8
	adds r0, r6, #0	@ 000716e8 301c
.org 0x716ea
	bl 0x73a68	@ 000716ea 02f0bdf9
.org 0x716ee
	ldr r0, [r6, #96]	@ 000716ee 306e
.org 0x716f0
	negs r0, r0	@ 000716f0 4042
.org 0x716f2
	ldr r1, [r6, #104]	@ 000716f2 b16e
.org 0x716f4
	bl 0x128fb8	@ 000716f4 b7f060fc
.org 0x716f8
	adds r0, #1	@ 000716f8 0130
