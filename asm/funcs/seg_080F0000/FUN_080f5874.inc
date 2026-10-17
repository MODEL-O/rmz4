@ FUN_080f5874  entry 0x080f5874  size 90
.thumb
.org 0xf5874
FUN_080f5874:
	push {r4, r5, r6, lr}	@ 000f5874 70b5
.org 0xf5876
	adds r6, r0, #0	@ 000f5876 061c
.org 0xf5878
	lsls r1, r1, #24	@ 000f5878 0906
.org 0xf587a
	lsrs r5, r1, #24	@ 000f587a 0d0e
.org 0xf587c
	lsls r2, r2, #24	@ 000f587c 1206
.org 0xf587e
	lsrs r4, r2, #24	@ 000f587e 140e
.org 0xf5880
	ldr r0, [pc, #76]	@ 000f5880 1348
.org 0xf5882
	ldr r0, [r0, #0]	@ 000f5882 0068
.org 0xf5884
	bl 0x5500	@ 000f5884 0ff73cfe
.org 0xf5888
	adds r3, r0, #0	@ 000f5888 031c
.org 0xf588a
	cmp r3, #0	@ 000f588a 002b
.org 0xf588c
	beq.n 0xf58c6	@ 000f588c 1bd0
.org 0xf588e
	adds r1, r3, #0	@ 000f588e 191c
.org 0xf5890
	adds r1, #37	@ 000f5890 2531
.org 0xf5892
	movs r2, #0	@ 000f5892 0022
.org 0xf5894
	movs r0, #30	@ 000f5894 1e20
.org 0xf5896
	strb r0, [r1, #0]	@ 000f5896 0870
.org 0xf5898
	ldr r1, [pc, #56]	@ 000f5898 0e49
.org 0xf589a
	movs r0, #21	@ 000f589a 1520
.org 0xf589c
	strb r0, [r3, #9]	@ 000f589c 5872
.org 0xf589e
	ldr r0, [r1, #84]	@ 000f589e 486d
.org 0xf58a0
	ldr r0, [r0, #0]	@ 000f58a0 0068
.org 0xf58a2
	str r0, [r3, #20]	@ 000f58a2 5861
.org 0xf58a4
	movs r0, #0	@ 000f58a4 0020
.org 0xf58a6
	strh r2, [r3, #32]	@ 000f58a6 1a84
.org 0xf58a8
	adds r1, r3, #0	@ 000f58a8 191c
.org 0xf58aa
	adds r1, #34	@ 000f58aa 2231
.org 0xf58ac
	strb r0, [r1, #0]	@ 000f58ac 0870
.org 0xf58ae
	ldrb r1, [r3, #11]	@ 000f58ae d97a
.org 0xf58b0
	movs r0, #16	@ 000f58b0 1020
.org 0xf58b2
	orrs r0, r1	@ 000f58b2 0843
.org 0xf58b4
	strb r0, [r3, #11]	@ 000f58b4 d872
.org 0xf58b6
	ldrb r0, [r3, #28]	@ 000f58b6 187f
.org 0xf58b8
	strb r0, [r3, #29]	@ 000f58b8 5877
.org 0xf58ba
	ldr r0, [r6, #0]	@ 000f58ba 3068
.org 0xf58bc
	ldr r1, [r6, #4]	@ 000f58bc 7168
.org 0xf58be
	str r0, [r3, #84]	@ 000f58be 5865
.org 0xf58c0
	str r1, [r3, #88]	@ 000f58c0 9965
.org 0xf58c2
	strb r5, [r3, #16]	@ 000f58c2 1d74
.org 0xf58c4
	strb r4, [r3, #17]	@ 000f58c4 5c74
.org 0xf58c6
	adds r0, r3, #0	@ 000f58c6 181c
.org 0xf58c8
	pop {r4, r5, r6}	@ 000f58c8 70bc
.org 0xf58ca
	pop {r1}	@ 000f58ca 02bc
.org 0xf58cc
	bx r1	@ 000f58cc 0847
