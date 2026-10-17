@ FUN_08034760  entry 0x08034760  size 82
.thumb
.org 0x34760
FUN_08034760:
	push {r4, r5, r6, lr}	@ 00034760 70b5
.org 0x34762
	adds r5, r0, #0	@ 00034762 051c
.org 0x34764
	ldr r4, [pc, #76]	@ 00034764 134c
.org 0x34766
	ldr r0, [pc, #80]	@ 00034766 1448
.org 0x34768
	adds r6, r5, r0	@ 00034768 2e18
.org 0x3476a
	ldrb r0, [r6, #0]	@ 0003476a 3078
.org 0x3476c
	lsls r0, r0, #1	@ 0003476c 4000
.org 0x3476e
	adds r0, r0, r4	@ 0003476e 0019
.org 0x34770
	ldrh r1, [r0, #0]	@ 00034770 0188
.org 0x34772
	adds r0, r5, #0	@ 00034772 281c
.org 0x34774
	bl 0x3a3b0	@ 00034774 05f01cfe
.org 0x34778
	ldrb r0, [r6, #0]	@ 00034778 3078
.org 0x3477a
	lsls r0, r0, #1	@ 0003477a 4000
.org 0x3477c
	adds r0, r0, r4	@ 0003477c 0019
.org 0x3477e
	ldrh r1, [r0, #0]	@ 0003477e 0188
.org 0x34780
	adds r0, r5, #0	@ 00034780 281c
.org 0x34782
	bl 0x3a3f0	@ 00034782 05f035fe
.org 0x34786
	movs r0, #169	@ 00034786 a920
.org 0x34788
	lsls r0, r0, #1	@ 00034788 4000
.org 0x3478a
	adds r1, r5, r0	@ 0003478a 2918
.org 0x3478c
	ldrb r0, [r1, #0]	@ 0003478c 0878
.org 0x3478e
	subs r0, #1	@ 0003478e 0138
.org 0x34790
	strb r0, [r1, #0]	@ 00034790 0870
.org 0x34792
	lsls r0, r0, #24	@ 00034792 0006
.org 0x34794
	lsrs r0, r0, #24	@ 00034794 000e
.org 0x34796
	cmp r0, #255	@ 00034796 ff28
.org 0x34798
	bne.n 0x347ac	@ 00034798 08d1
.org 0x3479a
	ldr r0, [pc, #32]	@ 0003479a 0848
.org 0x3479c
	adds r1, r5, r0	@ 0003479c 2918
.org 0x3479e
	movs r0, #2	@ 0003479e 0220
.org 0x347a0
	strb r0, [r1, #0]	@ 000347a0 0870
.org 0x347a2
	movs r0, #129	@ 000347a2 8120
.org 0x347a4
	lsls r0, r0, #1	@ 000347a4 4000
.org 0x347a6
	adds r1, r5, r0	@ 000347a6 2918
.org 0x347a8
	movs r0, #0	@ 000347a8 0020
.org 0x347aa
	strb r0, [r1, #0]	@ 000347aa 0870
.org 0x347ac
	pop {r4, r5, r6}	@ 000347ac 70bc
.org 0x347ae
	pop {r0}	@ 000347ae 01bc
.org 0x347b0
	bx r0	@ 000347b0 0047
