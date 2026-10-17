@ FUN_080d8728  entry 0x080d8728  size 220
.thumb
.org 0xd8728
FUN_080d8728:
	push {r4, r5, lr}	@ 000d8728 30b5
.org 0xd872a
	adds r4, r0, #0	@ 000d872a 041c
.org 0xd872c
	ldrb r0, [r4, #17]	@ 000d872c 607c
.org 0xd872e
	lsrs r5, r0, #1	@ 000d872e 4508
.org 0xd8730
	movs r2, #1	@ 000d8730 0122
.org 0xd8732
	ands r5, r2	@ 000d8732 1540
.org 0xd8734
	ldrb r0, [r4, #18]	@ 000d8734 a07c
.org 0xd8736
	subs r1, r0, #1	@ 000d8736 411e
.org 0xd8738
	movs r3, #0	@ 000d8738 0023
.org 0xd873a
	strb r1, [r4, #18]	@ 000d873a a174
.org 0xd873c
	lsls r0, r1, #24	@ 000d873c 0806
.org 0xd873e
	cmp r0, #0	@ 000d873e 0028
.org 0xd8740
	bne.n 0xd8760	@ 000d8740 0ed1
.org 0xd8742
	ldr r1, [pc, #24]	@ 000d8742 0649
.org 0xd8744
	ldrb r0, [r4, #9]	@ 000d8744 607a
.org 0xd8746
	lsls r0, r0, #2	@ 000d8746 8000
.org 0xd8748
	adds r0, r0, r1	@ 000d8748 4018
.org 0xd874a
	movs r1, #2	@ 000d874a 0221
.org 0xd874c
	str r1, [r4, #12]	@ 000d874c e160
.org 0xd874e
	ldr r0, [r0, #0]	@ 000d874e 0068
.org 0xd8750
	ldr r0, [r0, #8]	@ 000d8750 8068
.org 0xd8752
	str r0, [r4, #20]	@ 000d8752 6061
.org 0xd8754
	adds r0, r4, #0	@ 000d8754 201c
.org 0xd8756
	bl 0xd8978	@ 000d8756 00f00ff9
.org 0xd875a
	b.n 0xd8802	@ 000d875a 52e0
.org 0xd875c
	.byte 0x64,0x6f,0x86,0x08	@ 000d875c data
.org 0xd8760
	lsls r0, r1, #24	@ 000d8760 0806
.org 0xd8762
	lsrs r0, r0, #24	@ 000d8762 000e
.org 0xd8764
	cmp r0, #14	@ 000d8764 0e28
.org 0xd8766
	bhi.n 0xd8778	@ 000d8766 07d8
.org 0xd8768
	movs r0, #1	@ 000d8768 0120
.org 0xd876a
	ands r1, r0	@ 000d876a 0140
.org 0xd876c
	cmp r1, #0	@ 000d876c 0029
.org 0xd876e
	bne.n 0xd878c	@ 000d876e 0dd1
.org 0xd8770
	ldrb r1, [r4, #10]	@ 000d8770 a17a
.org 0xd8772
	movs r0, #254	@ 000d8772 fe20
.org 0xd8774
	ands r0, r1	@ 000d8774 0840
.org 0xd8776
	b.n 0xd8790	@ 000d8776 0be0
.org 0xd8778
	cmp r0, #29	@ 000d8778 1d28
.org 0xd877a
	bhi.n 0xd8792	@ 000d877a 0ad8
.org 0xd877c
	movs r0, #3	@ 000d877c 0320
.org 0xd877e
	ands r1, r0	@ 000d877e 0140
.org 0xd8780
	cmp r1, #0	@ 000d8780 0029
.org 0xd8782
	bne.n 0xd878c	@ 000d8782 03d1
.org 0xd8784
	ldrb r1, [r4, #10]	@ 000d8784 a17a
.org 0xd8786
	movs r0, #254	@ 000d8786 fe20
.org 0xd8788
	ands r0, r1	@ 000d8788 0840
.org 0xd878a
	b.n 0xd8790	@ 000d878a 01e0
.org 0xd878c
	ldrb r0, [r4, #10]	@ 000d878c a07a
.org 0xd878e
	orrs r0, r2	@ 000d878e 1043
.org 0xd8790
	strb r0, [r4, #10]	@ 000d8790 a072
.org 0xd8792
	adds r0, r4, #0	@ 000d8792 201c
.org 0xd8794
	bl 0x1cff0	@ 000d8794 44f72cfc
.org 0xd8798
	ldr r0, [r4, #84]	@ 000d8798 606d
.org 0xd879a
	ldr r1, [r4, #92]	@ 000d879a e16d
.org 0xd879c
	adds r0, r0, r1	@ 000d879c 4018
.org 0xd879e
	str r0, [r4, #84]	@ 000d879e 6065
.org 0xd87a0
	ldr r0, [r4, #88]	@ 000d87a0 a06d
.org 0xd87a2
	ldr r1, [r4, #96]	@ 000d87a2 216e
.org 0xd87a4
	adds r0, r0, r1	@ 000d87a4 4018
.org 0xd87a6
	str r0, [r4, #88]	@ 000d87a6 a065
.org 0xd87a8
	adds r1, #64	@ 000d87a8 4031
.org 0xd87aa
	str r1, [r4, #96]	@ 000d87aa 2166
.org 0xd87ac
	movs r0, #224	@ 000d87ac e020
.org 0xd87ae
	lsls r0, r0, #3	@ 000d87ae c000
.org 0xd87b0
	cmp r1, r0	@ 000d87b0 8142
.org 0xd87b2
	ble.n 0xd87b6	@ 000d87b2 00dd
.org 0xd87b4
	str r0, [r4, #96]	@ 000d87b4 2066
.org 0xd87b6
	ldrb r0, [r4, #19]	@ 000d87b6 e07c
.org 0xd87b8
	cmp r0, #0	@ 000d87b8 0028
.org 0xd87ba
	beq.n 0xd8802	@ 000d87ba 22d0
.org 0xd87bc
	ldr r0, [r4, #96]	@ 000d87bc 206e
.org 0xd87be
	cmp r0, #0	@ 000d87be 0028
.org 0xd87c0
	bgt.n 0xd87e0	@ 000d87c0 0edc
.org 0xd87c2
	movs r1, #1	@ 000d87c2 0121
.org 0xd87c4
	eors r1, r5	@ 000d87c4 6940
.org 0xd87c6
	lsls r0, r1, #1	@ 000d87c6 4800
.org 0xd87c8
	adds r0, r0, r1	@ 000d87c8 4018
.org 0xd87ca
	lsls r2, r0, #10	@ 000d87ca 8202
.org 0xd87cc
	ldr r0, [r4, #84]	@ 000d87cc 606d
.org 0xd87ce
	ldr r1, [r4, #88]	@ 000d87ce a16d
.org 0xd87d0
	subs r1, r1, r2	@ 000d87d0 891a
.org 0xd87d2
	bl 0x7c7c	@ 000d87d2 2ff753fa
.org 0xd87d6
	lsls r0, r0, #16	@ 000d87d6 0004
.org 0xd87d8
	cmp r0, #0	@ 000d87d8 0028
.org 0xd87da
	beq.n 0xd8802	@ 000d87da 12d0
.org 0xd87dc
	movs r0, #0	@ 000d87dc 0020
.org 0xd87de
	b.n 0xd87fa	@ 000d87de 0ce0
.org 0xd87e0
	adds r1, r5, #0	@ 000d87e0 291c
.org 0xd87e2
	lsls r0, r1, #1	@ 000d87e2 4800
.org 0xd87e4
	adds r0, r0, r1	@ 000d87e4 4018
.org 0xd87e6
	lsls r2, r0, #10	@ 000d87e6 8202
.org 0xd87e8
	ldr r0, [r4, #84]	@ 000d87e8 606d
.org 0xd87ea
	ldr r1, [r4, #88]	@ 000d87ea a16d
.org 0xd87ec
	adds r1, r1, r2	@ 000d87ec 8918
.org 0xd87ee
	bl 0x7c7c	@ 000d87ee 2ff745fa
.org 0xd87f2
	lsls r0, r0, #16	@ 000d87f2 0004
.org 0xd87f4
	cmp r0, #0	@ 000d87f4 0028
.org 0xd87f6
	beq.n 0xd8802	@ 000d87f6 04d0
.org 0xd87f8
	ldr r0, [pc, #12]	@ 000d87f8 0348
.org 0xd87fa
	str r0, [r4, #96]	@ 000d87fa 2066
.org 0xd87fc
	ldrb r0, [r4, #19]	@ 000d87fc e07c
.org 0xd87fe
	subs r0, #1	@ 000d87fe 0138
.org 0xd8800
	strb r0, [r4, #19]	@ 000d8800 e074
.org 0xd8802
	pop {r4, r5}	@ 000d8802 30bc
