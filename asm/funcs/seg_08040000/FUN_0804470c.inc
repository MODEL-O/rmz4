@ FUN_0804470c  entry 0x0804470c  size 118
.thumb
.org 0x4470c
FUN_0804470c:
	push {r4, r5, lr}	@ 0004470c 30b5
.org 0x4470e
	adds r4, r0, #0	@ 0004470e 041c
.org 0x44710
	ldr r1, [pc, #112]	@ 00044710 1c49
.org 0x44712
	ldrb r0, [r4, #9]	@ 00044712 607a
.org 0x44714
	lsls r0, r0, #2	@ 00044714 8000
.org 0x44716
	adds r0, r0, r1	@ 00044716 4018
.org 0x44718
	movs r1, #1	@ 00044718 0121
.org 0x4471a
	str r1, [r4, #12]	@ 0004471a e160
.org 0x4471c
	ldr r0, [r0, #0]	@ 0004471c 0068
.org 0x4471e
	ldr r0, [r0, #4]	@ 0004471e 4068
.org 0x44720
	str r0, [r4, #20]	@ 00044720 6061
.org 0x44722
	ldr r1, [pc, #100]	@ 00044722 1949
.org 0x44724
	ldrb r0, [r4, #16]	@ 00044724 207c
.org 0x44726
	lsls r0, r0, #1	@ 00044726 4000
.org 0x44728
	adds r0, r0, r1	@ 00044728 4018
.org 0x4472a
	ldrh r0, [r0, #0]	@ 0004472a 0088
.org 0x4472c
	adds r5, r4, #0	@ 0004472c 251c
.org 0x4472e
	adds r5, #190	@ 0004472e be35
.org 0x44730
	strh r0, [r5, #0]	@ 00044730 2880
.org 0x44732
	adds r0, r4, #0	@ 00044732 201c
.org 0x44734
	bl 0x1cc9c	@ 00044734 d8f7b2fa
.org 0x44738
	adds r0, r4, #0	@ 00044738 201c
.org 0x4473a
	bl 0x1ceec	@ 0004473a d8f7d7fb
.org 0x4473e
	ldrb r1, [r4, #10]	@ 0004473e a17a
.org 0x44740
	movs r0, #1	@ 00044740 0120
.org 0x44742
	orrs r0, r1	@ 00044742 0843
.org 0x44744
	movs r1, #2	@ 00044744 0221
.org 0x44746
	orrs r0, r1	@ 00044746 0843
.org 0x44748
	strb r0, [r4, #10]	@ 00044748 a072
.org 0x4474a
	ldrb r0, [r4, #17]	@ 0004474a 607c
.org 0x4474c
	lsls r1, r0, #1	@ 0004474c 4100
.org 0x4474e
	adds r1, r1, r0	@ 0004474e 0918
.org 0x44750
	ldrh r5, [r5, #0]	@ 00044750 2d88
.org 0x44752
	adds r1, r1, r5	@ 00044752 4919
.org 0x44754
	lsls r1, r1, #16	@ 00044754 0904
.org 0x44756
	lsrs r1, r1, #16	@ 00044756 090c
.org 0x44758
	adds r0, r4, #0	@ 00044758 201c
.org 0x4475a
	bl 0x1cf00	@ 0004475a d8f7d1fb
.org 0x4475e
	ldr r1, [pc, #44]	@ 0004475e 0b49
.org 0x44760
	ldrb r0, [r4, #16]	@ 00044760 207c
.org 0x44762
	lsls r0, r0, #1	@ 00044762 4000
.org 0x44764
	adds r0, r0, r1	@ 00044764 4018
.org 0x44766
	ldrh r0, [r0, #0]	@ 00044766 0088
.org 0x44768
	bl 0x2b10	@ 00044768 bef7d2f9
.org 0x4476c
	ldr r1, [pc, #32]	@ 0004476c 0849
.org 0x4476e
	ldrb r0, [r4, #16]	@ 0004476e 207c
.org 0x44770
	adds r0, r0, r1	@ 00044770 4018
.org 0x44772
	ldrb r0, [r0, #0]	@ 00044772 0078
.org 0x44774
	strb r0, [r4, #18]	@ 00044774 a074
.org 0x44776
	adds r0, r4, #0	@ 00044776 201c
.org 0x44778
	bl 0x44794	@ 00044778 00f00cf8
.org 0x4477c
	pop {r4, r5}	@ 0004477c 30bc
.org 0x4477e
	pop {r0}	@ 0004477e 01bc
.org 0x44780
	bx r0	@ 00044780 0047
