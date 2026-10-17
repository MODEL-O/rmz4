@ FUN_080166f8  entry 0x080166f8  size 98
.thumb
.org 0x166f8
FUN_080166f8:
	push {r4, r5, r6, lr}	@ 000166f8 70b5
.org 0x166fa
	adds r5, r0, #0	@ 000166fa 051c
.org 0x166fc
	ldrb r6, [r5, #14]	@ 000166fc ae7b
.org 0x166fe
	cmp r6, #0	@ 000166fe 002e
.org 0x16700
	bne.n 0x16754	@ 00016700 28d1
.org 0x16702
	ldr r0, [r5, #92]	@ 00016702 e86d
.org 0x16704
	lsls r0, r0, #16	@ 00016704 0004
.org 0x16706
	lsrs r0, r0, #20	@ 00016706 000d
.org 0x16708
	lsls r3, r0, #1	@ 00016708 4300
.org 0x1670a
	ldr r4, [pc, #80]	@ 0001670a 144c
.org 0x1670c
	adds r3, r3, r4	@ 0001670c 1b19
.org 0x1670e
	ldr r1, [r5, #100]	@ 0001670e 696e
.org 0x16710
	movs r2, #71	@ 00016710 4722
.org 0x16712
	orrs r1, r2	@ 00016712 1143
.org 0x16714
	strh r1, [r3, #0]	@ 00016714 1980
.org 0x16716
	lsls r0, r0, #2	@ 00016716 8000
.org 0x16718
	adds r4, #8	@ 00016718 0834
.org 0x1671a
	adds r0, r0, r4	@ 0001671a 0019
.org 0x1671c
	str r6, [r0, #0]	@ 0001671c 0660
.org 0x1671e
	ldr r0, [pc, #64]	@ 0001671e 1048
.org 0x16720
	ldr r0, [r0, #0]	@ 00016720 0068
.org 0x16722
	ldr r2, [pc, #64]	@ 00016722 104a
.org 0x16724
	adds r0, r0, r2	@ 00016724 8018
.org 0x16726
	movs r2, #248	@ 00016726 f822
.org 0x16728
	lsls r2, r2, #5	@ 00016728 5201
.org 0x1672a
	ands r1, r2	@ 0001672a 1140
.org 0x1672c
	lsls r1, r1, #3	@ 0001672c c900
.org 0x1672e
	movs r2, #192	@ 0001672e c022
.org 0x16730
	lsls r2, r2, #19	@ 00016730 d204
.org 0x16732
	adds r1, r1, r2	@ 00016732 8918
.org 0x16734
	movs r2, #128	@ 00016734 8022
.org 0x16736
	lsls r2, r2, #2	@ 00016736 9200
.org 0x16738
	bl 0x128be0	@ 00016738 12f152fa
.org 0x1673c
	ldr r0, [pc, #40]	@ 0001673c 0a48
.org 0x1673e
	str r0, [r5, #76]	@ 0001673e e864
.org 0x16740
	movs r0, #240	@ 00016740 f020
.org 0x16742
	lsls r0, r0, #2	@ 00016742 8000
.org 0x16744
	str r0, [r5, #80]	@ 00016744 2865
.org 0x16746
	movs r0, #192	@ 00016746 c020
.org 0x16748
	str r0, [r5, #68]	@ 00016748 6864
.org 0x1674a
	movs r0, #64	@ 0001674a 4020
.org 0x1674c
	str r0, [r5, #72]	@ 0001674c a864
.org 0x1674e
	ldrb r0, [r5, #14]	@ 0001674e a87b
.org 0x16750
	adds r0, #1	@ 00016750 0130
.org 0x16752
	strb r0, [r5, #14]	@ 00016752 a873
.org 0x16754
	pop {r4, r5, r6}	@ 00016754 70bc
.org 0x16756
	pop {r0}	@ 00016756 01bc
.org 0x16758
	bx r0	@ 00016758 0047
