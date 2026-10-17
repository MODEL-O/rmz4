@ FUN_0811a574  entry 0x0811a574  size 98
.thumb
.org 0x11a574
FUN_0811a574:
	push {r4, r5, r6, lr}	@ 0011a574 70b5
.org 0x11a576
	adds r4, r0, #0	@ 0011a576 041c
.org 0x11a578
	ldr r0, [pc, #92]	@ 0011a578 1748
.org 0x11a57a
	adds r5, r4, r0	@ 0011a57a 2518
.org 0x11a57c
	adds r0, #43	@ 0011a57c 2b30
.org 0x11a57e
	adds r1, r4, r0	@ 0011a57e 2118
.org 0x11a580
	ldrb r0, [r1, #0]	@ 0011a580 0878
.org 0x11a582
	cmp r0, #0	@ 0011a582 0028
.org 0x11a584
	bne.n 0x11a58a	@ 0011a584 01d1
.org 0x11a586
	adds r0, #1	@ 0011a586 0130
.org 0x11a588
	strb r0, [r1, #0]	@ 0011a588 0870
.org 0x11a58a
	movs r0, #221	@ 0011a58a dd20
.org 0x11a58c
	lsls r0, r0, #4	@ 0011a58c 0001
.org 0x11a58e
	adds r6, r4, r0	@ 0011a58e 2618
.org 0x11a590
	ldrb r0, [r6, #0]	@ 0011a590 3078
.org 0x11a592
	adds r0, #20	@ 0011a592 1430
.org 0x11a594
	bl 0x25d8	@ 0011a594 e8f620f8
.org 0x11a598
	movs r0, #19	@ 0011a598 1320
.org 0x11a59a
	bl 0x25d8	@ 0011a59a e8f61df8
.org 0x11a59e
	lsls r0, r0, #24	@ 0011a59e 0006
.org 0x11a5a0
	lsrs r0, r0, #24	@ 0011a5a0 000e
.org 0x11a5a2
	cmp r0, #3	@ 0011a5a2 0328
.org 0x11a5a4
	bne.n 0x11a5d0	@ 0011a5a4 14d1
.org 0x11a5a6
	ldr r0, [pc, #52]	@ 0011a5a6 0d48
.org 0x11a5a8
	ldr r1, [pc, #52]	@ 0011a5a8 0d49
.org 0x11a5aa
	ldrh r2, [r1, #0]	@ 0011a5aa 0a88
.org 0x11a5ac
	movs r1, #12	@ 0011a5ac 0c21
.org 0x11a5ae
	ands r1, r2	@ 0011a5ae 1140
.org 0x11a5b0
	lsls r1, r1, #12	@ 0011a5b0 0903
.org 0x11a5b2
	bl 0x1d30	@ 0011a5b2 e7f6bdfb
.org 0x11a5b6
	ldr r0, [pc, #44]	@ 0011a5b6 0b48
.org 0x11a5b8
	movs r1, #0	@ 0011a5b8 0021
.org 0x11a5ba
	bl 0x2208	@ 0011a5ba e7f625fe
.org 0x11a5be
	movs r0, #0	@ 0011a5be 0020
.org 0x11a5c0
	strb r0, [r4, #3]	@ 0011a5c0 e070
.org 0x11a5c2
	strb r0, [r6, #2]	@ 0011a5c2 b070
.org 0x11a5c4
	strh r0, [r5, #48]	@ 0011a5c4 2886
.org 0x11a5c6
	strh r0, [r5, #50]	@ 0011a5c6 6886
.org 0x11a5c8
	strh r0, [r5, #52]	@ 0011a5c8 a886
.org 0x11a5ca
	strh r0, [r5, #54]	@ 0011a5ca e886
.org 0x11a5cc
	ldr r1, [pc, #24]	@ 0011a5cc 0649
.org 0x11a5ce
	strh r0, [r1, #0]	@ 0011a5ce 0880
.org 0x11a5d0
	pop {r4, r5, r6}	@ 0011a5d0 70bc
.org 0x11a5d2
	pop {r0}	@ 0011a5d2 01bc
.org 0x11a5d4
	bx r0	@ 0011a5d4 0047
