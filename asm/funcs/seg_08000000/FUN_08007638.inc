@ FUN_08007638  entry 0x08007638  size 274
.thumb
.org 0x7638
FUN_08007638:
	push {r4, r5, r6, r7, lr}	@ 00007638 f0b5
.org 0x763a
	mov r7, r8	@ 0000763a 4746
.org 0x763c
	push {r7}	@ 0000763c 80b4
.org 0x763e
	sub sp, #8	@ 0000763e 82b0
.org 0x7640
	adds r7, r0, #0	@ 00007640 071c
.org 0x7642
	movs r0, #20	@ 00007642 1420
.org 0x7644
	adds r0, r0, r7	@ 00007644 c019
.org 0x7646
	mov r8, r0	@ 00007646 8046
.org 0x7648
	ldr r0, [r7, #52]	@ 00007648 786b
.org 0x764a
	ldr r1, [r7, #68]	@ 0000764a 796c
.org 0x764c
	adds r3, r0, #0	@ 0000764c 031c
.org 0x764e
	muls r3, r1	@ 0000764e 4b43
.org 0x7650
	asrs r3, r3, #8	@ 00007650 1b12
.org 0x7652
	ldr r0, [r7, #76]	@ 00007652 f86c
.org 0x7654
	adds r3, r3, r0	@ 00007654 1b18
.org 0x7656
	ldr r0, [r7, #56]	@ 00007656 b86b
.org 0x7658
	ldr r4, [r7, #72]	@ 00007658 bc6c
.org 0x765a
	adds r2, r0, #0	@ 0000765a 021c
.org 0x765c
	muls r2, r4	@ 0000765c 6243
.org 0x765e
	asrs r2, r2, #8	@ 0000765e 1212
.org 0x7660
	ldr r0, [r7, #80]	@ 00007660 386d
.org 0x7662
	adds r2, r2, r0	@ 00007662 1218
.org 0x7664
	ldr r0, [r7, #60]	@ 00007664 f86b
.org 0x7666
	muls r0, r1	@ 00007666 4843
.org 0x7668
	asrs r0, r0, #8	@ 00007668 0012
.org 0x766a
	ldr r1, [r7, #84]	@ 0000766a 796d
.org 0x766c
	adds r5, r0, r1	@ 0000766c 4518
.org 0x766e
	ldr r0, [r7, #64]	@ 0000766e 386c
.org 0x7670
	muls r0, r4	@ 00007670 6043
.org 0x7672
	asrs r0, r0, #8	@ 00007672 0012
.org 0x7674
	ldr r1, [r7, #88]	@ 00007674 b96d
.org 0x7676
	adds r6, r0, r1	@ 00007676 4618
.org 0x7678
	subs r0, r3, r5	@ 00007678 581b
.org 0x767a
	adds r1, r0, #0	@ 0000767a 011c
.org 0x767c
	adds r1, #15	@ 0000767c 0f31
.org 0x767e
	subs r0, r2, r6	@ 0000767e 901b
.org 0x7680
	adds r4, r0, #0	@ 00007680 041c
.org 0x7682
	adds r4, #15	@ 00007682 0f34
.org 0x7684
	ldr r0, [r7, #44]	@ 00007684 f86a
.org 0x7686
	asrs r0, r0, #8	@ 00007686 0012
.org 0x7688
	adds r0, r0, r3	@ 00007688 c018
.org 0x768a
	str r0, [sp, #0]	@ 0000768a 0090
.org 0x768c
	ldr r0, [r7, #48]	@ 0000768c 386b
.org 0x768e
	asrs r0, r0, #8	@ 0000768e 0012
.org 0x7690
	adds r0, r0, r2	@ 00007690 8018
.org 0x7692
	str r0, [sp, #4]	@ 00007692 0190
.org 0x7694
	ldrh r0, [r7, #12]	@ 00007694 b889
.org 0x7696
	cmp r0, #0	@ 00007696 0028
.org 0x7698
	beq.n 0x76f4	@ 00007698 2cd0
.org 0x769a
	cmp r1, #30	@ 0000769a 1e29
.org 0x769c
	bhi.n 0x76a2	@ 0000769c 01d8
.org 0x769e
	cmp r4, #30	@ 0000769e 1e2c
.org 0x76a0
	bls.n 0x76cc	@ 000076a0 14d9
.org 0x76a2
	ldr r0, [r7, #92]	@ 000076a2 f86d
.org 0x76a4
	lsrs r0, r0, #4	@ 000076a4 0009
.org 0x76a6
	lsls r0, r0, #1	@ 000076a6 4000
.org 0x76a8
	ldr r1, [pc, #28]	@ 000076a8 0749
.org 0x76aa
	adds r0, r0, r1	@ 000076aa 4018
.org 0x76ac
	ldrh r0, [r0, #0]	@ 000076ac 0088
.org 0x76ae
	movs r2, #248	@ 000076ae f822
.org 0x76b0
	lsls r2, r2, #5	@ 000076b0 5201
.org 0x76b2
	ands r2, r0	@ 000076b2 0240
.org 0x76b4
	lsls r2, r2, #3	@ 000076b4 d200
.org 0x76b6
	movs r0, #192	@ 000076b6 c020
.org 0x76b8
	lsls r0, r0, #19	@ 000076b8 c004
.org 0x76ba
	adds r2, r2, r0	@ 000076ba 1218
.org 0x76bc
	mov r0, r8	@ 000076bc 4046
.org 0x76be
	mov r1, sp	@ 000076be 6946
.org 0x76c0
	bl 0x3fe0	@ 000076c0 fcf78efc
.org 0x76c4
	b.n 0x7746	@ 000076c4 3fe0
.org 0x76c6
	.byte 0x00	@ 000076c6 data
.org 0x76c7
	.byte 0x00	@ 000076c7 data
.org 0x76c8
	.byte 0x04,0x0a,0x00,0x02	@ 000076c8 data
.org 0x76cc
	ldr r0, [r7, #92]	@ 000076cc f86d
.org 0x76ce
	lsrs r0, r0, #4	@ 000076ce 0009
.org 0x76d0
	lsls r0, r0, #1	@ 000076d0 4000
.org 0x76d2
	ldr r1, [pc, #28]	@ 000076d2 0749
.org 0x76d4
	adds r0, r0, r1	@ 000076d4 4018
.org 0x76d6
	ldrh r0, [r0, #0]	@ 000076d6 0088
.org 0x76d8
	movs r2, #248	@ 000076d8 f822
.org 0x76da
	lsls r2, r2, #5	@ 000076da 5201
.org 0x76dc
	ands r2, r0	@ 000076dc 0240
.org 0x76de
	lsls r2, r2, #3	@ 000076de d200
.org 0x76e0
	movs r0, #192	@ 000076e0 c020
.org 0x76e2
	lsls r0, r0, #19	@ 000076e2 c004
.org 0x76e4
	adds r2, r2, r0	@ 000076e4 1218
.org 0x76e6
	mov r0, r8	@ 000076e6 4046
.org 0x76e8
	mov r1, sp	@ 000076e8 6946
.org 0x76ea
	bl 0x3620	@ 000076ea fbf799ff
.org 0x76ee
	b.n 0x7746	@ 000076ee 2ae0
.org 0x76f0
	.byte 0x04,0x0a,0x00,0x02	@ 000076f0 data
.org 0x76f4
	cmp r1, #30	@ 000076f4 1e29
.org 0x76f6
	bhi.n 0x770a	@ 000076f6 08d8
.org 0x76f8
	cmp r4, #30	@ 000076f8 1e2c
.org 0x76fa
	bhi.n 0x770a	@ 000076fa 06d8
.org 0x76fc
	ldr r3, [pc, #28]	@ 000076fc 074b
.org 0x76fe
	movs r1, #176	@ 000076fe b021
.org 0x7700
	lsls r1, r1, #10	@ 00007700 8902
.org 0x7702
	adds r0, r3, r1	@ 00007702 5818
.org 0x7704
	ldrh r0, [r0, #0]	@ 00007704 0088
.org 0x7706
	cmp r0, #0	@ 00007706 0028
.org 0x7708
	beq.n 0x7728	@ 00007708 0ed0
.org 0x770a
	ldr r2, [pc, #20]	@ 0000770a 054a
.org 0x770c
	ldr r0, [pc, #20]	@ 0000770c 0548
.org 0x770e
	adds r3, r2, r0	@ 0000770e 1318
.org 0x7710
	mov r0, r8	@ 00007710 4046
.org 0x7712
	mov r1, sp	@ 00007712 6946
.org 0x7714
	bl 0x4f80	@ 00007714 fdf734fc
.org 0x7718
	b.n 0x773a	@ 00007718 0fe0
.org 0x771a
	.byte 0x00	@ 0000771a data
.org 0x771b
	.byte 0x00	@ 0000771b data
.org 0x771c
	.byte 0xb0,0x0a,0x00,0x02	@ 0000771c data
.org 0x7720
	.byte 0xd4,0xca,0x02,0x02	@ 00007720 data
.org 0x7724
	.byte 0xbc,0x47,0xfd,0xff	@ 00007724 data
.org 0x7728
	ldr r1, [pc, #56]	@ 00007728 0e49
.org 0x772a
	adds r2, r3, r1	@ 0000772a 5a18
.org 0x772c
	movs r0, #252	@ 0000772c fc20
.org 0x772e
	lsls r0, r0, #3	@ 0000772e c000
.org 0x7730
	adds r3, r3, r0	@ 00007730 1b18
.org 0x7732
	mov r0, r8	@ 00007732 4046
.org 0x7734
	mov r1, sp	@ 00007734 6946
.org 0x7736
	bl 0x5124	@ 00007736 fdf7f5fc
.org 0x773a
	ldr r0, [pc, #44]	@ 0000773a 0b48
.org 0x773c
	movs r1, #176	@ 0000773c b021
.org 0x773e
	lsls r1, r1, #10	@ 0000773e 8902
.org 0x7740
	adds r0, r0, r1	@ 00007740 4018
.org 0x7742
	movs r1, #0	@ 00007742 0021
.org 0x7744
	strh r1, [r0, #0]	@ 00007744 0180
.org 0x7746
	ldr r1, [r7, #92]	@ 00007746 f96d
.org 0x7748
	lsrs r1, r1, #4	@ 00007748 0909
