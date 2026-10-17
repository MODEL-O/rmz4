@ FUN_080ce700  entry 0x080ce700  size 124
.thumb
.org 0xce700
FUN_080ce700:
	push {r4, r5, r6, lr}	@ 000ce700 70b5
.org 0xce702
	adds r6, r0, #0	@ 000ce702 061c
.org 0xce704
	lsls r1, r1, #24	@ 000ce704 0906
.org 0xce706
	lsrs r5, r1, #24	@ 000ce706 0d0e
.org 0xce708
	lsls r2, r2, #24	@ 000ce708 1206
.org 0xce70a
	lsrs r4, r2, #24	@ 000ce70a 140e
.org 0xce70c
	ldr r0, [pc, #68]	@ 000ce70c 1148
.org 0xce70e
	ldr r0, [r0, #0]	@ 000ce70e 0068
.org 0xce710
	bl 0x5500	@ 000ce710 36f7f6fe
.org 0xce714
	adds r3, r0, #0	@ 000ce714 031c
.org 0xce716
	cmp r3, #0	@ 000ce716 002b
.org 0xce718
	beq.n 0xce77e	@ 000ce718 31d0
.org 0xce71a
	adds r1, r3, #0	@ 000ce71a 191c
.org 0xce71c
	adds r1, #37	@ 000ce71c 2531
.org 0xce71e
	movs r2, #0	@ 000ce71e 0022
.org 0xce720
	movs r0, #8	@ 000ce720 0820
.org 0xce722
	strb r0, [r1, #0]	@ 000ce722 0870
.org 0xce724
	ldr r0, [pc, #48]	@ 000ce724 0c48
.org 0xce726
	movs r1, #54	@ 000ce726 3621
.org 0xce728
	strb r1, [r3, #9]	@ 000ce728 5972
.org 0xce72a
	adds r0, #216	@ 000ce72a d830
.org 0xce72c
	ldr r0, [r0, #0]	@ 000ce72c 0068
.org 0xce72e
	ldr r0, [r0, #0]	@ 000ce72e 0068
.org 0xce730
	str r0, [r3, #20]	@ 000ce730 5861
.org 0xce732
	movs r0, #0	@ 000ce732 0020
.org 0xce734
	strh r2, [r3, #32]	@ 000ce734 1a84
.org 0xce736
	adds r1, r3, #0	@ 000ce736 191c
.org 0xce738
	adds r1, #34	@ 000ce738 2231
.org 0xce73a
	strb r0, [r1, #0]	@ 000ce73a 0870
.org 0xce73c
	ldr r0, [r6, #0]	@ 000ce73c 3068
.org 0xce73e
	ldr r1, [r6, #4]	@ 000ce73e 7168
.org 0xce740
	str r0, [r3, #84]	@ 000ce740 5865
.org 0xce742
	str r1, [r3, #88]	@ 000ce742 9965
.org 0xce744
	strb r5, [r3, #16]	@ 000ce744 1d74
.org 0xce746
	adds r2, r4, #0	@ 000ce746 221c
.org 0xce748
	cmp r2, #0	@ 000ce748 002a
.org 0xce74a
	beq.n 0xce75c	@ 000ce74a 07d0
.org 0xce74c
	ldrb r0, [r3, #10]	@ 000ce74c 987a
.org 0xce74e
	movs r1, #16	@ 000ce74e 1021
.org 0xce750
	orrs r0, r1	@ 000ce750 0843
.org 0xce752
	b.n 0xce762	@ 000ce752 06e0
.org 0xce754
	.byte 0x94,0xed,0x02,0x02	@ 000ce754 data
.org 0xce758
	.byte 0xf4,0x49,0x86,0x08	@ 000ce758 data
.org 0xce75c
	ldrb r1, [r3, #10]	@ 000ce75c 997a
.org 0xce75e
	movs r0, #239	@ 000ce75e ef20
.org 0xce760
	ands r0, r1	@ 000ce760 0840
.org 0xce762
	strb r0, [r3, #10]	@ 000ce762 9872
.org 0xce764
	movs r1, #1	@ 000ce764 0121
.org 0xce766
	ands r1, r2	@ 000ce766 1140
.org 0xce768
	adds r0, r3, #0	@ 000ce768 181c
.org 0xce76a
	adds r0, #76	@ 000ce76a 4c30
.org 0xce76c
	strb r1, [r0, #0]	@ 000ce76c 0170
.org 0xce76e
	adds r3, #74	@ 000ce76e 4a33
.org 0xce770
	lsls r1, r1, #4	@ 000ce770 0901
.org 0xce772
	ldrb r2, [r3, #0]	@ 000ce772 1a78
.org 0xce774
	movs r0, #17	@ 000ce774 1120
.org 0xce776
	negs r0, r0	@ 000ce776 4042
.org 0xce778
	ands r0, r2	@ 000ce778 1040
.org 0xce77a
	orrs r0, r1	@ 000ce77a 0843
