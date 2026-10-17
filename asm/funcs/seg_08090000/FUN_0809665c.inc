@ FUN_0809665c  entry 0x0809665c  size 92
.thumb
.org 0x9665c
FUN_0809665c:
	push {r4, r5, r6, lr}	@ 0009665c 70b5
.org 0x9665e
	adds r4, r0, #0	@ 0009665e 041c
.org 0x96660
	lsls r1, r1, #24	@ 00096660 0906
.org 0x96662
	lsrs r6, r1, #24	@ 00096662 0e0e
.org 0x96664
	lsls r2, r2, #24	@ 00096664 1206
.org 0x96666
	lsrs r5, r2, #24	@ 00096666 150e
.org 0x96668
	ldr r0, [pc, #76]	@ 00096668 1348
.org 0x9666a
	ldr r0, [r0, #0]	@ 0009666a 0068
.org 0x9666c
	bl 0x5500	@ 0009666c 6ef748ff
.org 0x96670
	adds r3, r0, #0	@ 00096670 031c
.org 0x96672
	cmp r3, #0	@ 00096672 002b
.org 0x96674
	beq.n 0x966b0	@ 00096674 1cd0
.org 0x96676
	adds r1, r3, #0	@ 00096676 191c
.org 0x96678
	adds r1, #37	@ 00096678 2531
.org 0x9667a
	movs r2, #0	@ 0009667a 0022
.org 0x9667c
	movs r0, #24	@ 0009667c 1820
.org 0x9667e
	strb r0, [r1, #0]	@ 0009667e 0870
.org 0x96680
	ldr r1, [pc, #56]	@ 00096680 0e49
.org 0x96682
	movs r0, #29	@ 00096682 1d20
.org 0x96684
	strb r0, [r3, #9]	@ 00096684 5872
.org 0x96686
	ldr r0, [r1, #116]	@ 00096686 486f
.org 0x96688
	ldr r0, [r0, #0]	@ 00096688 0068
.org 0x9668a
	str r0, [r3, #20]	@ 0009668a 5861
.org 0x9668c
	movs r0, #0	@ 0009668c 0020
.org 0x9668e
	strh r2, [r3, #32]	@ 0009668e 1a84
.org 0x96690
	adds r1, r3, #0	@ 00096690 191c
.org 0x96692
	adds r1, #34	@ 00096692 2231
.org 0x96694
	strb r0, [r1, #0]	@ 00096694 0870
.org 0x96696
	ldrb r1, [r3, #11]	@ 00096696 d97a
.org 0x96698
	movs r0, #16	@ 00096698 1020
.org 0x9669a
	orrs r0, r1	@ 0009669a 0843
.org 0x9669c
	strb r0, [r3, #11]	@ 0009669c d872
.org 0x9669e
	ldrb r0, [r3, #28]	@ 0009669e 187f
.org 0x966a0
	strb r0, [r3, #29]	@ 000966a0 5877
.org 0x966a2
	ldr r0, [r4, #84]	@ 000966a2 606d
.org 0x966a4
	ldr r1, [r4, #88]	@ 000966a4 a16d
.org 0x966a6
	str r0, [r3, #84]	@ 000966a6 5865
.org 0x966a8
	str r1, [r3, #88]	@ 000966a8 9965
.org 0x966aa
	str r4, [r3, #40]	@ 000966aa 9c62
.org 0x966ac
	strb r6, [r3, #16]	@ 000966ac 1e74
.org 0x966ae
	strb r5, [r3, #17]	@ 000966ae 5d74
.org 0x966b0
	adds r0, r3, #0	@ 000966b0 181c
.org 0x966b2
	pop {r4, r5, r6}	@ 000966b2 70bc
.org 0x966b4
	pop {r1}	@ 000966b4 02bc
.org 0x966b6
	bx r1	@ 000966b6 0847
