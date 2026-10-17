@ FUN_080325a0  entry 0x080325a0  size 228
.thumb
.org 0x325a0
FUN_080325a0:
	push {r4, r5, r6, r7, lr}	@ 000325a0 f0b5
.org 0x325a2
	adds r4, r0, #0	@ 000325a2 041c
.org 0x325a4
	ldr r0, [r4, #84]	@ 000325a4 606d
.org 0x325a6
	ldr r1, [r4, #92]	@ 000325a6 e16d
.org 0x325a8
	adds r0, r0, r1	@ 000325a8 4018
.org 0x325aa
	str r0, [r4, #84]	@ 000325aa 6065
.org 0x325ac
	adds r5, r4, #0	@ 000325ac 251c
.org 0x325ae
	adds r5, #180	@ 000325ae b435
.org 0x325b0
	movs r0, #186	@ 000325b0 ba20
.org 0x325b2
	lsls r0, r0, #1	@ 000325b2 4000
.org 0x325b4
	adds r6, r4, r0	@ 000325b4 2618
.org 0x325b6
	ldrb r1, [r6, #0]	@ 000325b6 3178
.org 0x325b8
	lsls r1, r1, #3	@ 000325b8 c900
.org 0x325ba
	ldr r7, [pc, #152]	@ 000325ba 264f
.org 0x325bc
	adds r1, r1, r7	@ 000325bc c919
.org 0x325be
	adds r0, r4, #0	@ 000325be 201c
.org 0x325c0
	movs r2, #0	@ 000325c0 0022
.org 0x325c2
	bl 0x2b7f0	@ 000325c2 f9f715f9
.org 0x325c6
	lsls r0, r0, #16	@ 000325c6 0004
.org 0x325c8
	cmp r0, #0	@ 000325c8 0028
.org 0x325ca
	beq.n 0x325d0	@ 000325ca 01d0
.org 0x325cc
	movs r0, #0	@ 000325cc 0020
.org 0x325ce
	str r0, [r5, #104]	@ 000325ce a866
.org 0x325d0
	ldrb r1, [r6, #0]	@ 000325d0 3178
.org 0x325d2
	lsls r1, r1, #3	@ 000325d2 c900
.org 0x325d4
	adds r1, r1, r7	@ 000325d4 c919
.org 0x325d6
	adds r0, r4, #0	@ 000325d6 201c
.org 0x325d8
	movs r2, #1	@ 000325d8 0122
.org 0x325da
	bl 0x2b7f0	@ 000325da f9f709f9
.org 0x325de
	lsls r0, r0, #16	@ 000325de 0004
.org 0x325e0
	cmp r0, #0	@ 000325e0 0028
.org 0x325e2
	beq.n 0x325e8	@ 000325e2 01d0
.org 0x325e4
	movs r0, #0	@ 000325e4 0020
.org 0x325e6
	str r0, [r5, #104]	@ 000325e6 a866
.org 0x325e8
	ldr r0, [r4, #88]	@ 000325e8 a06d
.org 0x325ea
	ldr r1, [r4, #96]	@ 000325ea 216e
.org 0x325ec
	adds r0, r0, r1	@ 000325ec 4018
.org 0x325ee
	str r0, [r4, #88]	@ 000325ee a065
.org 0x325f0
	ldrb r1, [r6, #0]	@ 000325f0 3178
.org 0x325f2
	lsls r1, r1, #3	@ 000325f2 c900
.org 0x325f4
	adds r1, r1, r7	@ 000325f4 c919
.org 0x325f6
	adds r0, r4, #0	@ 000325f6 201c
.org 0x325f8
	movs r2, #0	@ 000325f8 0022
.org 0x325fa
	bl 0x2bfe8	@ 000325fa f9f7f5fc
.org 0x325fe
	ldr r0, [r5, #116]	@ 000325fe 686f
.org 0x32600
	ldr r1, [r5, #124]	@ 00032600 e96f
.org 0x32602
	adds r0, r0, r1	@ 00032602 4018
.org 0x32604
	str r0, [r5, #116]	@ 00032604 6867
.org 0x32606
	movs r0, #154	@ 00032606 9a20
.org 0x32608
	lsls r0, r0, #1	@ 00032608 4000
.org 0x3260a
	adds r1, r4, r0	@ 0003260a 2118
.org 0x3260c
	ldr r0, [r5, #120]	@ 0003260c a86f
.org 0x3260e
	ldr r1, [r1, #0]	@ 0003260e 0968
.org 0x32610
	adds r0, r0, r1	@ 00032610 4018
.org 0x32612
	str r0, [r5, #120]	@ 00032612 a867
.org 0x32614
	movs r1, #161	@ 00032614 a121
.org 0x32616
	lsls r1, r1, #1	@ 00032616 4900
.org 0x32618
	adds r0, r4, r1	@ 00032618 6018
.org 0x3261a
	ldrb r1, [r0, #0]	@ 0003261a 0178
.org 0x3261c
	movs r0, #16	@ 0003261c 1020
.org 0x3261e
	ands r0, r1	@ 0003261e 0840
.org 0x32620
	cmp r0, #0	@ 00032620 0028
.org 0x32622
	bne.n 0x32658	@ 00032622 19d1
.org 0x32624
	ldrb r1, [r6, #0]	@ 00032624 3178
.org 0x32626
	lsls r1, r1, #3	@ 00032626 c900
.org 0x32628
	adds r1, r1, r7	@ 00032628 c919
.org 0x3262a
	adds r0, r4, #0	@ 0003262a 201c
.org 0x3262c
	movs r2, #1	@ 0003262c 0122
.org 0x3262e
	bl 0x2baf0	@ 0003262e f9f75ffa
.org 0x32632
	lsls r0, r0, #16	@ 00032632 0004
.org 0x32634
	cmp r0, #0	@ 00032634 0028
.org 0x32636
	beq.n 0x32658	@ 00032636 0fd0
.org 0x32638
	ldrb r1, [r6, #0]	@ 00032638 3178
.org 0x3263a
	lsls r1, r1, #3	@ 0003263a c900
.org 0x3263c
	adds r1, r1, r7	@ 0003263c c919
.org 0x3263e
	adds r0, r4, #0	@ 0003263e 201c
.org 0x32640
	movs r2, #0	@ 00032640 0022
.org 0x32642
	bl 0x2c2d4	@ 00032642 f9f747fe
.org 0x32646
	lsls r0, r0, #16	@ 00032646 0004
.org 0x32648
	cmp r0, #0	@ 00032648 0028
.org 0x3264a
	beq.n 0x32658	@ 0003264a 05d0
.org 0x3264c
	movs r0, #1	@ 0003264c 0120
.org 0x3264e
	strb r0, [r4, #15]	@ 0003264e e073
.org 0x32650
	b.n 0x32684	@ 00032650 18e0
.org 0x32652
	.byte 0x00	@ 00032652 data
.org 0x32653
	.byte 0x00	@ 00032653 data
.org 0x32654
	.byte 0x6c,0x33,0x85,0x08	@ 00032654 data
.org 0x32658
	adds r0, r4, #0	@ 00032658 201c
.org 0x3265a
	bl 0x3851c	@ 0003265a 05f05fff
.org 0x3265e
	lsls r0, r0, #16	@ 0003265e 0004
.org 0x32660
	asrs r0, r0, #16	@ 00032660 0014
.org 0x32662
	ldr r1, [r4, #96]	@ 00032662 216e
.org 0x32664
	adds r1, r1, r0	@ 00032664 0918
.org 0x32666
	str r1, [r4, #96]	@ 00032666 2166
.org 0x32668
	adds r0, r4, #0	@ 00032668 201c
.org 0x3266a
	bl 0x385dc	@ 0003266a 05f0b7ff
.org 0x3266e
	lsls r0, r0, #16	@ 0003266e 0004
.org 0x32670
	asrs r0, r0, #16	@ 00032670 0014
.org 0x32672
	ldr r1, [r4, #96]	@ 00032672 216e
.org 0x32674
	cmp r1, r0	@ 00032674 8142
.org 0x32676
	ble.n 0x32684	@ 00032676 05dd
.org 0x32678
	adds r0, r4, #0	@ 00032678 201c
.org 0x3267a
	bl 0x385dc	@ 0003267a 05f0afff
.org 0x3267e
	lsls r0, r0, #16	@ 0003267e 0004
.org 0x32680
	asrs r0, r0, #16	@ 00032680 0014
.org 0x32682
	str r0, [r4, #96]	@ 00032682 2066
