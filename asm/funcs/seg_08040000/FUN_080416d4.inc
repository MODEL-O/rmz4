@ FUN_080416d4  entry 0x080416d4  size 132
.thumb
.org 0x416d4
FUN_080416d4:
	push {r4, r5, lr}	@ 000416d4 30b5
.org 0x416d6
	adds r4, r0, #0	@ 000416d6 041c
.org 0x416d8
	adds r5, r1, #0	@ 000416d8 0d1c
.org 0x416da
	ldr r0, [pc, #64]	@ 000416da 1048
.org 0x416dc
	ldr r0, [r0, #0]	@ 000416dc 0068
.org 0x416de
	bl 0x5500	@ 000416de c3f70fff
.org 0x416e2
	adds r2, r0, #0	@ 000416e2 021c
.org 0x416e4
	cmp r2, #0	@ 000416e4 002a
.org 0x416e6
	beq.n 0x41762	@ 000416e6 3cd0
.org 0x416e8
	adds r0, r4, #0	@ 000416e8 201c
.org 0x416ea
	adds r0, #248	@ 000416ea f830
.org 0x416ec
	ldrb r0, [r0, #0]	@ 000416ec 0078
.org 0x416ee
	cmp r0, #2	@ 000416ee 0228
.org 0x416f0
	bne.n 0x4172c	@ 000416f0 1cd1
.org 0x416f2
	ldr r1, [pc, #44]	@ 000416f2 0b49
.org 0x416f4
	movs r0, #12	@ 000416f4 0c20
.org 0x416f6
	strb r0, [r2, #9]	@ 000416f6 5072
.org 0x416f8
	ldr r0, [r1, #48]	@ 000416f8 086b
.org 0x416fa
	ldr r0, [r0, #0]	@ 000416fa 0068
.org 0x416fc
	str r0, [r2, #20]	@ 000416fc 5061
.org 0x416fe
	ldrb r1, [r2, #11]	@ 000416fe d17a
.org 0x41700
	movs r0, #191	@ 00041700 bf20
.org 0x41702
	ands r0, r1	@ 00041702 0840
.org 0x41704
	strb r0, [r2, #11]	@ 00041704 d072
.org 0x41706
	adds r1, r2, #0	@ 00041706 111c
.org 0x41708
	adds r1, #37	@ 00041708 2531
.org 0x4170a
	movs r0, #16	@ 0004170a 1020
.org 0x4170c
	strb r0, [r1, #0]	@ 0004170c 0870
.org 0x4170e
	ldr r0, [pc, #20]	@ 0004170e 0548
.org 0x41710
	ldrh r0, [r0, #0]	@ 00041710 0088
.org 0x41712
	strh r0, [r2, #32]	@ 00041712 1084
.org 0x41714
	ldr r0, [pc, #16]	@ 00041714 0448
.org 0x41716
	ldrb r0, [r0, #0]	@ 00041716 0078
.org 0x41718
	b.n 0x41752	@ 00041718 1be0
.org 0x4171a
	.byte 0x00	@ 0004171a data
.org 0x4171b
	.byte 0x00	@ 0004171b data
.org 0x4171c
	.byte 0x88,0xed,0x02,0x02	@ 0004171c data
.org 0x41720
	.byte 0xf8,0x39,0x85,0x08	@ 00041720 data
.org 0x41724
	.byte 0xfc,0x36,0x85,0x08	@ 00041724 data
.org 0x41728
	.byte 0x04,0x37,0x85,0x08	@ 00041728 data
.org 0x4172c
	ldr r1, [pc, #60]	@ 0004172c 0f49
.org 0x4172e
	movs r0, #12	@ 0004172e 0c20
.org 0x41730
	strb r0, [r2, #9]	@ 00041730 5072
.org 0x41732
	ldr r0, [r1, #48]	@ 00041732 086b
.org 0x41734
	ldr r0, [r0, #0]	@ 00041734 0068
.org 0x41736
	str r0, [r2, #20]	@ 00041736 5061
.org 0x41738
	ldrb r1, [r2, #11]	@ 00041738 d17a
.org 0x4173a
	movs r0, #191	@ 0004173a bf20
.org 0x4173c
	ands r0, r1	@ 0004173c 0840
.org 0x4173e
	strb r0, [r2, #11]	@ 0004173e d072
.org 0x41740
	adds r1, r2, #0	@ 00041740 111c
.org 0x41742
	adds r1, #37	@ 00041742 2531
.org 0x41744
	movs r0, #16	@ 00041744 1020
.org 0x41746
	strb r0, [r1, #0]	@ 00041746 0870
.org 0x41748
	ldr r0, [pc, #36]	@ 00041748 0948
.org 0x4174a
	ldrh r0, [r0, #2]	@ 0004174a 4088
.org 0x4174c
	strh r0, [r2, #32]	@ 0004174c 1084
.org 0x4174e
	ldr r0, [pc, #36]	@ 0004174e 0948
.org 0x41750
	ldrb r0, [r0, #1]	@ 00041750 4078
.org 0x41752
	subs r1, #3	@ 00041752 0339
.org 0x41754
	strb r0, [r1, #0]	@ 00041754 0870
.org 0x41756
	str r4, [r2, #40]	@ 00041756 9462
