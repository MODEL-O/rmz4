@ FUN_0809b734  entry 0x0809b734  size 110
.thumb
.org 0x9b734
FUN_0809b734:
	push {r4, r5, r6, r7, lr}	@ 0009b734 f0b5
.org 0x9b736
	adds r6, r0, #0	@ 0009b736 061c
.org 0x9b738
	adds r7, r1, #0	@ 0009b738 0f1c
.org 0x9b73a
	lsls r2, r2, #24	@ 0009b73a 1206
.org 0x9b73c
	lsrs r5, r2, #24	@ 0009b73c 150e
.org 0x9b73e
	lsls r3, r3, #24	@ 0009b73e 1b06
.org 0x9b740
	lsrs r4, r3, #24	@ 0009b740 1c0e
.org 0x9b742
	ldr r0, [pc, #96]	@ 0009b742 1848
.org 0x9b744
	ldr r0, [r0, #0]	@ 0009b744 0068
.org 0x9b746
	bl 0x5500	@ 0009b746 69f7dbfe
.org 0x9b74a
	mov ip, r0	@ 0009b74a 8446
.org 0x9b74c
	cmp r0, #0	@ 0009b74c 0028
.org 0x9b74e
	beq.n 0x9b79a	@ 0009b74e 24d0
.org 0x9b750
	mov r1, ip	@ 0009b750 6146
.org 0x9b752
	adds r1, #37	@ 0009b752 2531
.org 0x9b754
	movs r3, #0	@ 0009b754 0023
.org 0x9b756
	movs r0, #24	@ 0009b756 1820
.org 0x9b758
	strb r0, [r1, #0]	@ 0009b758 0870
.org 0x9b75a
	ldr r0, [pc, #76]	@ 0009b75a 1348
.org 0x9b75c
	movs r1, #39	@ 0009b75c 2721
.org 0x9b75e
	mov r2, ip	@ 0009b75e 6246
.org 0x9b760
	strb r1, [r2, #9]	@ 0009b760 5172
.org 0x9b762
	adds r0, #156	@ 0009b762 9c30
.org 0x9b764
	ldr r0, [r0, #0]	@ 0009b764 0068
.org 0x9b766
	ldr r0, [r0, #0]	@ 0009b766 0068
.org 0x9b768
	str r0, [r2, #20]	@ 0009b768 5061
.org 0x9b76a
	movs r2, #0	@ 0009b76a 0022
.org 0x9b76c
	mov r0, ip	@ 0009b76c 6046
.org 0x9b76e
	strh r3, [r0, #32]	@ 0009b76e 0384
.org 0x9b770
	adds r0, #34	@ 0009b770 2230
.org 0x9b772
	strb r2, [r0, #0]	@ 0009b772 0270
.org 0x9b774
	mov r3, ip	@ 0009b774 6346
.org 0x9b776
	ldrb r1, [r3, #11]	@ 0009b776 d97a
.org 0x9b778
	movs r0, #16	@ 0009b778 1020
.org 0x9b77a
	orrs r0, r1	@ 0009b77a 0843
.org 0x9b77c
	strb r0, [r3, #11]	@ 0009b77c d872
.org 0x9b77e
	ldrb r0, [r3, #28]	@ 0009b77e 187f
.org 0x9b780
	strb r0, [r3, #29]	@ 0009b780 5877
.org 0x9b782
	str r6, [r3, #40]	@ 0009b782 9e62
.org 0x9b784
	ldr r0, [r7, #0]	@ 0009b784 3868
.org 0x9b786
	ldr r1, [r7, #4]	@ 0009b786 7968
.org 0x9b788
	str r0, [r3, #84]	@ 0009b788 5865
.org 0x9b78a
	str r1, [r3, #88]	@ 0009b78a 9965
.org 0x9b78c
	strb r5, [r3, #16]	@ 0009b78c 1d74
.org 0x9b78e
	strb r4, [r3, #17]	@ 0009b78e 5c74
.org 0x9b790
	mov r0, ip	@ 0009b790 6046
.org 0x9b792
	adds r0, #180	@ 0009b792 b430
.org 0x9b794
	strb r2, [r0, #0]	@ 0009b794 0270
.org 0x9b796
	adds r0, #1	@ 0009b796 0130
.org 0x9b798
	strb r2, [r0, #0]	@ 0009b798 0270
.org 0x9b79a
	mov r0, ip	@ 0009b79a 6046
.org 0x9b79c
	pop {r4, r5, r6, r7}	@ 0009b79c f0bc
.org 0x9b79e
	pop {r1}	@ 0009b79e 02bc
.org 0x9b7a0
	bx r1	@ 0009b7a0 0847
