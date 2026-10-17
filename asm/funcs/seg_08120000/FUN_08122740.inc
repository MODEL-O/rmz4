@ FUN_08122740  entry 0x08122740  size 142
.thumb
.org 0x122740
FUN_08122740:
	push {r4, r5, lr}	@ 00122740 30b5
.org 0x122742
	adds r4, r0, #0	@ 00122742 041c
.org 0x122744
	ldr r5, [pc, #96]	@ 00122744 184d
.org 0x122746
	ldrh r1, [r5, #6]	@ 00122746 e988
.org 0x122748
	movs r0, #128	@ 00122748 8020
.org 0x12274a
	ands r0, r1	@ 0012274a 0840
.org 0x12274c
	cmp r0, #0	@ 0012274c 0028
.org 0x12274e
	beq.n 0x122760	@ 0012274e 07d0
.org 0x122750
	movs r0, #1	@ 00122750 0120
.org 0x122752
	bl 0x2b10	@ 00122752 e0f6ddf9
.org 0x122756
	ldrh r0, [r4, #10]	@ 00122756 6089
.org 0x122758
	adds r0, #1	@ 00122758 0130
.org 0x12275a
	movs r1, #1	@ 0012275a 0121
.org 0x12275c
	ands r0, r1	@ 0012275c 0840
.org 0x12275e
	strh r0, [r4, #10]	@ 0012275e 6081
.org 0x122760
	ldrh r1, [r5, #6]	@ 00122760 e988
.org 0x122762
	movs r0, #64	@ 00122762 4020
.org 0x122764
	ands r0, r1	@ 00122764 0840
.org 0x122766
	cmp r0, #0	@ 00122766 0028
.org 0x122768
	beq.n 0x12277a	@ 00122768 07d0
.org 0x12276a
	movs r0, #1	@ 0012276a 0120
.org 0x12276c
	bl 0x2b10	@ 0012276c e0f6d0f9
.org 0x122770
	ldrh r0, [r4, #10]	@ 00122770 6089
.org 0x122772
	adds r0, #1	@ 00122772 0130
.org 0x122774
	movs r1, #1	@ 00122774 0121
.org 0x122776
	ands r0, r1	@ 00122776 0840
.org 0x122778
	strh r0, [r4, #10]	@ 00122778 6081
.org 0x12277a
	ldr r0, [pc, #48]	@ 0012277a 0c48
.org 0x12277c
	ldrh r0, [r0, #0]	@ 0012277c 0088
.org 0x12277e
	ldr r1, [pc, #48]	@ 0012277e 0c49
.org 0x122780
	adds r0, r0, r1	@ 00122780 4018
.org 0x122782
	movs r1, #10	@ 00122782 0a21
.org 0x122784
	ldrsh r2, [r4, r1]	@ 00122784 625e
.org 0x122786
	lsls r2, r2, #1	@ 00122786 5200
.org 0x122788
	adds r2, #10	@ 00122788 0a32
.org 0x12278a
	movs r1, #6	@ 0012278a 0621
.org 0x12278c
	bl 0x10d85c	@ 0012278c ebf766f8
.org 0x122790
	ldrh r1, [r5, #4]	@ 00122790 a988
.org 0x122792
	movs r0, #2	@ 00122792 0220
.org 0x122794
	ands r0, r1	@ 00122794 0840
.org 0x122796
	cmp r0, #0	@ 00122796 0028
.org 0x122798
	beq.n 0x1227b4	@ 00122798 0cd0
.org 0x12279a
	movs r0, #3	@ 0012279a 0320
.org 0x12279c
	bl 0x2b10	@ 0012279c e0f6b8f9
.org 0x1227a0
	movs r0, #2	@ 001227a0 0220
.org 0x1227a2
	negs r0, r0	@ 001227a2 4042
.org 0x1227a4
	b.n 0x1227d6	@ 001227a4 17e0
.org 0x1227a6
	.byte 0x00	@ 001227a6 data
.org 0x1227a7
	.byte 0x00	@ 001227a7 data
.org 0x1227a8
	.byte 0x60,0x07,0x00,0x02	@ 001227a8 data
.org 0x1227ac
	.byte 0xf8,0xcf,0x86,0x08	@ 001227ac data
.org 0x1227b0
	.byte 0x5f,0x0e,0x01,0x09	@ 001227b0 data
.org 0x1227b4
	movs r0, #1	@ 001227b4 0120
.org 0x1227b6
	ands r0, r1	@ 001227b6 0840
.org 0x1227b8
	cmp r0, #0	@ 001227b8 0028
.org 0x1227ba
	beq.n 0x1227d4	@ 001227ba 0bd0
.org 0x1227bc
	movs r0, #2	@ 001227bc 0220
.org 0x1227be
	bl 0x2b10	@ 001227be e0f6a7f9
.org 0x1227c2
	movs r1, #10	@ 001227c2 0a21
.org 0x1227c4
	ldrsh r0, [r4, r1]	@ 001227c4 605e
.org 0x1227c6
	cmp r0, #0	@ 001227c6 0028
.org 0x1227c8
	bne.n 0x1227ce	@ 001227c8 01d1
.org 0x1227ca
	movs r0, #1	@ 001227ca 0120
.org 0x1227cc
	b.n 0x1227d6	@ 001227cc 03e0
