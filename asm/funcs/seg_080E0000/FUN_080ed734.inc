@ FUN_080ed734  entry 0x080ed734  size 86
.thumb
.org 0xed734
FUN_080ed734:
	push {r4, r5, lr}	@ 000ed734 30b5
.org 0xed736
	adds r4, r0, #0	@ 000ed736 041c
.org 0xed738
	lsls r1, r1, #24	@ 000ed738 0906
.org 0xed73a
	lsrs r5, r1, #24	@ 000ed73a 0d0e
.org 0xed73c
	ldr r0, [pc, #76]	@ 000ed73c 1348
.org 0xed73e
	ldr r0, [r0, #0]	@ 000ed73e 0068
.org 0xed740
	bl 0x5500	@ 000ed740 17f7defe
.org 0xed744
	adds r3, r0, #0	@ 000ed744 031c
.org 0xed746
	cmp r3, #0	@ 000ed746 002b
.org 0xed748
	beq.n 0xed782	@ 000ed748 1bd0
.org 0xed74a
	adds r1, r3, #0	@ 000ed74a 191c
.org 0xed74c
	adds r1, #37	@ 000ed74c 2531
.org 0xed74e
	movs r2, #0	@ 000ed74e 0022
.org 0xed750
	movs r0, #30	@ 000ed750 1e20
.org 0xed752
	strb r0, [r1, #0]	@ 000ed752 0870
.org 0xed754
	ldr r1, [pc, #56]	@ 000ed754 0e49
.org 0xed756
	movs r0, #15	@ 000ed756 0f20
.org 0xed758
	strb r0, [r3, #9]	@ 000ed758 5872
.org 0xed75a
	ldr r0, [r1, #60]	@ 000ed75a c86b
.org 0xed75c
	ldr r0, [r0, #0]	@ 000ed75c 0068
.org 0xed75e
	str r0, [r3, #20]	@ 000ed75e 5861
.org 0xed760
	movs r0, #0	@ 000ed760 0020
.org 0xed762
	strh r2, [r3, #32]	@ 000ed762 1a84
.org 0xed764
	adds r1, r3, #0	@ 000ed764 191c
.org 0xed766
	adds r1, #34	@ 000ed766 2231
.org 0xed768
	strb r0, [r1, #0]	@ 000ed768 0870
.org 0xed76a
	ldrb r1, [r3, #11]	@ 000ed76a d97a
.org 0xed76c
	movs r0, #16	@ 000ed76c 1020
.org 0xed76e
	orrs r0, r1	@ 000ed76e 0843
.org 0xed770
	strb r0, [r3, #11]	@ 000ed770 d872
.org 0xed772
	ldrb r0, [r3, #28]	@ 000ed772 187f
.org 0xed774
	strb r0, [r3, #29]	@ 000ed774 5877
.org 0xed776
	strb r5, [r3, #16]	@ 000ed776 1d74
.org 0xed778
	ldr r0, [r4, #84]	@ 000ed778 606d
.org 0xed77a
	str r0, [r3, #84]	@ 000ed77a 5865
.org 0xed77c
	ldr r0, [r4, #88]	@ 000ed77c a06d
.org 0xed77e
	str r0, [r3, #88]	@ 000ed77e 9865
.org 0xed780
	str r4, [r3, #40]	@ 000ed780 9c62
.org 0xed782
	adds r0, r3, #0	@ 000ed782 181c
.org 0xed784
	pop {r4, r5}	@ 000ed784 30bc
.org 0xed786
	pop {r1}	@ 000ed786 02bc
.org 0xed788
	bx r1	@ 000ed788 0847
