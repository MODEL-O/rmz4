@ FUN_080b3730  entry 0x080b3730  size 128
.thumb
.org 0xb3730
FUN_080b3730:
	push {r4, r5, lr}	@ 000b3730 30b5
.org 0xb3732
	adds r4, r0, #0	@ 000b3732 041c
.org 0xb3734
	bl 0xb381c	@ 000b3734 00f072f8
.org 0xb3738
	lsls r0, r0, #24	@ 000b3738 0006
.org 0xb373a
	lsrs r0, r0, #24	@ 000b373a 000e
.org 0xb373c
	adds r2, r0, #0	@ 000b373c 021c
.org 0xb373e
	ldr r3, [pc, #100]	@ 000b373e 194b
.org 0xb3740
	adds r0, #64	@ 000b3740 4030
.org 0xb3742
	lsls r0, r0, #24	@ 000b3742 0006
.org 0xb3744
	lsrs r0, r0, #23	@ 000b3744 c00d
.org 0xb3746
	adds r0, r0, r3	@ 000b3746 c018
.org 0xb3748
	movs r1, #0	@ 000b3748 0021
.org 0xb374a
	ldrsh r0, [r0, r1]	@ 000b374a 405e
.org 0xb374c
	lsls r0, r0, #9	@ 000b374c 4002
.org 0xb374e
	negs r0, r0	@ 000b374e 4042
.org 0xb3750
	cmp r0, #0	@ 000b3750 0028
.org 0xb3752
	bge.n 0xb3756	@ 000b3752 00da
.org 0xb3754
	adds r0, #255	@ 000b3754 ff30
.org 0xb3756
	asrs r1, r0, #8	@ 000b3756 0112
.org 0xb3758
	ldr r0, [r4, #84]	@ 000b3758 606d
.org 0xb375a
	adds r0, r0, r1	@ 000b375a 4018
.org 0xb375c
	str r0, [r4, #84]	@ 000b375c 6065
.org 0xb375e
	lsls r0, r2, #1	@ 000b375e 5000
.org 0xb3760
	adds r0, r0, r3	@ 000b3760 c018
.org 0xb3762
	movs r1, #0	@ 000b3762 0021
.org 0xb3764
	ldrsh r0, [r0, r1]	@ 000b3764 405e
.org 0xb3766
	lsls r0, r0, #9	@ 000b3766 4002
.org 0xb3768
	negs r0, r0	@ 000b3768 4042
.org 0xb376a
	cmp r0, #0	@ 000b376a 0028
.org 0xb376c
	bge.n 0xb3770	@ 000b376c 00da
.org 0xb376e
	adds r0, #255	@ 000b376e ff30
.org 0xb3770
	asrs r1, r0, #8	@ 000b3770 0112
.org 0xb3772
	ldr r0, [r4, #88]	@ 000b3772 a06d
.org 0xb3774
	adds r0, r0, r1	@ 000b3774 4018
.org 0xb3776
	str r0, [r4, #88]	@ 000b3776 a065
.org 0xb3778
	adds r0, r4, #0	@ 000b3778 201c
.org 0xb377a
	adds r0, #182	@ 000b377a b630
.org 0xb377c
	movs r5, #0	@ 000b377c 0025
.org 0xb377e
	strb r5, [r0, #0]	@ 000b377e 0570
.org 0xb3780
	subs r0, #98	@ 000b3780 6238
.org 0xb3782
	bl 0x14654	@ 000b3782 60f767ff
.org 0xb3786
	lsls r0, r0, #24	@ 000b3786 0006
.org 0xb3788
	asrs r1, r0, #24	@ 000b3788 0116
.org 0xb378a
	cmp r1, #0	@ 000b378a 0029
.org 0xb378c
	beq.n 0xb37ac	@ 000b378c 0ed0
.org 0xb378e
	ldr r1, [pc, #24]	@ 000b378e 0649
.org 0xb3790
	ldrb r0, [r4, #9]	@ 000b3790 607a
.org 0xb3792
	lsls r0, r0, #2	@ 000b3792 8000
.org 0xb3794
	adds r0, r0, r1	@ 000b3794 4018
.org 0xb3796
	movs r1, #2	@ 000b3796 0221
.org 0xb3798
	str r1, [r4, #12]	@ 000b3798 e160
.org 0xb379a
	ldr r0, [r0, #0]	@ 000b379a 0068
.org 0xb379c
	ldr r0, [r0, #8]	@ 000b379c 8068
.org 0xb379e
	str r0, [r4, #20]	@ 000b379e 6061
.org 0xb37a0
	strb r5, [r4, #14]	@ 000b37a0 a573
.org 0xb37a2
	b.n 0xb37b2	@ 000b37a2 06e0
.org 0xb37a4
	.byte 0x0c,0x93,0x12,0x08	@ 000b37a4 data
.org 0xb37a8
	.byte 0x40,0xdb,0x85,0x08	@ 000b37a8 data
.org 0xb37ac
	movs r0, #4	@ 000b37ac 0420
.org 0xb37ae
	strb r0, [r4, #13]	@ 000b37ae 6073
