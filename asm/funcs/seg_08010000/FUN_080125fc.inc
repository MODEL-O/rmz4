@ FUN_080125fc  entry 0x080125fc  size 182
.thumb
.org 0x125fc
FUN_080125fc:
	push {r4, r5, r6, lr}	@ 000125fc 70b5
.org 0x125fe
	sub sp, #8	@ 000125fe 82b0
.org 0x12600
	adds r4, r0, #0	@ 00012600 041c
.org 0x12602
	adds r6, r4, #0	@ 00012602 261c
.org 0x12604
	adds r6, #20	@ 00012604 1436
.org 0x12606
	ldr r3, [r4, #52]	@ 00012606 636b
.org 0x12608
	ldr r2, [r4, #56]	@ 00012608 a26b
.org 0x1260a
	ldr r1, [r4, #60]	@ 0001260a e16b
.org 0x1260c
	subs r1, r3, r1	@ 0001260c 591a
.org 0x1260e
	adds r1, #15	@ 0001260e 0f31
.org 0x12610
	ldr r0, [r4, #64]	@ 00012610 206c
.org 0x12612
	subs r0, r2, r0	@ 00012612 101a
.org 0x12614
	adds r5, r0, #0	@ 00012614 051c
.org 0x12616
	adds r5, #15	@ 00012616 0f35
.org 0x12618
	movs r0, #200	@ 00012618 c820
.org 0x1261a
	lsls r0, r0, #2	@ 0001261a 8000
.org 0x1261c
	adds r2, r2, r0	@ 0001261c 1218
.org 0x1261e
	ldr r0, [r4, #44]	@ 0001261e e06a
.org 0x12620
	asrs r0, r0, #8	@ 00012620 0012
.org 0x12622
	adds r0, r0, r3	@ 00012622 c018
.org 0x12624
	str r0, [sp, #0]	@ 00012624 0090
.org 0x12626
	ldr r0, [r4, #48]	@ 00012626 206b
.org 0x12628
	asrs r0, r0, #8	@ 00012628 0012
.org 0x1262a
	adds r0, r0, r2	@ 0001262a 8018
.org 0x1262c
	str r0, [sp, #4]	@ 0001262c 0190
.org 0x1262e
	cmp r1, #30	@ 0001262e 1e29
.org 0x12630
	bhi.n 0x12642	@ 00012630 07d8
.org 0x12632
	cmp r5, #30	@ 00012632 1e2d
.org 0x12634
	bhi.n 0x12642	@ 00012634 05d8
.org 0x12636
	ldr r3, [pc, #48]	@ 00012636 0c4b
.org 0x12638
	ldr r1, [pc, #48]	@ 00012638 0c49
.org 0x1263a
	adds r0, r3, r1	@ 0001263a 5818
.org 0x1263c
	ldrb r0, [r0, #0]	@ 0001263c 0078
.org 0x1263e
	cmp r0, #0	@ 0001263e 0028
.org 0x12640
	beq.n 0x12678	@ 00012640 1ad0
.org 0x12642
	ldr r0, [r4, #92]	@ 00012642 e06d
.org 0x12644
	lsrs r0, r0, #4	@ 00012644 0009
.org 0x12646
	lsls r0, r0, #1	@ 00012646 4000
.org 0x12648
	ldr r1, [pc, #36]	@ 00012648 0949
.org 0x1264a
	adds r0, r0, r1	@ 0001264a 4018
.org 0x1264c
	ldrh r0, [r0, #0]	@ 0001264c 0088
.org 0x1264e
	movs r2, #248	@ 0001264e f822
.org 0x12650
	lsls r2, r2, #5	@ 00012650 5201
.org 0x12652
	ands r2, r0	@ 00012652 0240
.org 0x12654
	lsls r2, r2, #3	@ 00012654 d200
.org 0x12656
	movs r0, #192	@ 00012656 c020
.org 0x12658
	lsls r0, r0, #19	@ 00012658 c004
.org 0x1265a
	adds r2, r2, r0	@ 0001265a 1218
.org 0x1265c
	ldr r3, [pc, #20]	@ 0001265c 054b
.org 0x1265e
	adds r0, r6, #0	@ 0001265e 301c
.org 0x12660
	mov r1, sp	@ 00012660 6946
.org 0x12662
	bl 0x5050	@ 00012662 f2f7f5fc
.org 0x12666
	b.n 0x126a0	@ 00012666 1be0
.org 0x12668
	.byte 0xb0,0x0a,0x00,0x02	@ 00012668 data
.org 0x1266c
	.byte 0x2b,0xd0,0x02,0x00	@ 0001266c data
.org 0x12670
	.byte 0x04,0x0a,0x00,0x02	@ 00012670 data
.org 0x12674
	.byte 0x90,0x12,0x00,0x02	@ 00012674 data
.org 0x12678
	ldr r0, [r4, #92]	@ 00012678 e06d
.org 0x1267a
	lsrs r0, r0, #4	@ 0001267a 0009
.org 0x1267c
	lsls r0, r0, #1	@ 0001267c 4000
.org 0x1267e
	ldr r1, [pc, #68]	@ 0001267e 1149
.org 0x12680
	adds r0, r0, r1	@ 00012680 4018
.org 0x12682
	ldrh r0, [r0, #0]	@ 00012682 0088
.org 0x12684
	movs r2, #248	@ 00012684 f822
.org 0x12686
	lsls r2, r2, #5	@ 00012686 5201
.org 0x12688
	ands r2, r0	@ 00012688 0240
.org 0x1268a
	lsls r2, r2, #3	@ 0001268a d200
.org 0x1268c
	movs r0, #192	@ 0001268c c020
.org 0x1268e
	lsls r0, r0, #19	@ 0001268e c004
.org 0x12690
	adds r2, r2, r0	@ 00012690 1218
.org 0x12692
	movs r0, #252	@ 00012692 fc20
.org 0x12694
	lsls r0, r0, #3	@ 00012694 c000
.org 0x12696
	adds r3, r3, r0	@ 00012696 1b18
.org 0x12698
	adds r0, r6, #0	@ 00012698 301c
.org 0x1269a
	mov r1, sp	@ 0001269a 6946
.org 0x1269c
	bl 0x5124	@ 0001269c f2f742fd
.org 0x126a0
	ldr r0, [pc, #36]	@ 000126a0 0948
.org 0x126a2
	ldr r1, [pc, #40]	@ 000126a2 0a49
.org 0x126a4
	adds r0, r0, r1	@ 000126a4 4018
.org 0x126a6
	movs r1, #0	@ 000126a6 0021
.org 0x126a8
	strb r1, [r0, #0]	@ 000126a8 0170
.org 0x126aa
	ldr r1, [r4, #92]	@ 000126aa e16d
.org 0x126ac
	lsrs r1, r1, #4	@ 000126ac 0909
.org 0x126ae
	lsls r1, r1, #2	@ 000126ae 8900
.org 0x126b0
	ldr r0, [pc, #28]	@ 000126b0 0748
