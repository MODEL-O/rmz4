@ FUN_080f7558  entry 0x080f7558  size 90
.thumb
.org 0xf7558
FUN_080f7558:
	push {r4, r5, r6, lr}	@ 000f7558 70b5
.org 0xf755a
	adds r6, r0, #0	@ 000f755a 061c
.org 0xf755c
	lsls r1, r1, #24	@ 000f755c 0906
.org 0xf755e
	lsrs r5, r1, #24	@ 000f755e 0d0e
.org 0xf7560
	lsls r2, r2, #24	@ 000f7560 1206
.org 0xf7562
	lsrs r4, r2, #24	@ 000f7562 140e
.org 0xf7564
	ldr r0, [pc, #76]	@ 000f7564 1348
.org 0xf7566
	ldr r0, [r0, #0]	@ 000f7566 0068
.org 0xf7568
	bl 0x5500	@ 000f7568 0df7caff
.org 0xf756c
	adds r3, r0, #0	@ 000f756c 031c
.org 0xf756e
	cmp r3, #0	@ 000f756e 002b
.org 0xf7570
	beq.n 0xf75aa	@ 000f7570 1bd0
.org 0xf7572
	adds r1, r3, #0	@ 000f7572 191c
.org 0xf7574
	adds r1, #37	@ 000f7574 2531
.org 0xf7576
	movs r2, #0	@ 000f7576 0022
.org 0xf7578
	movs r0, #30	@ 000f7578 1e20
.org 0xf757a
	strb r0, [r1, #0]	@ 000f757a 0870
.org 0xf757c
	ldr r1, [pc, #56]	@ 000f757c 0e49
.org 0xf757e
	movs r0, #27	@ 000f757e 1b20
.org 0xf7580
	strb r0, [r3, #9]	@ 000f7580 5872
.org 0xf7582
	ldr r0, [r1, #108]	@ 000f7582 c86e
.org 0xf7584
	ldr r0, [r0, #0]	@ 000f7584 0068
.org 0xf7586
	str r0, [r3, #20]	@ 000f7586 5861
.org 0xf7588
	movs r0, #0	@ 000f7588 0020
.org 0xf758a
	strh r2, [r3, #32]	@ 000f758a 1a84
.org 0xf758c
	adds r1, r3, #0	@ 000f758c 191c
.org 0xf758e
	adds r1, #34	@ 000f758e 2231
.org 0xf7590
	strb r0, [r1, #0]	@ 000f7590 0870
.org 0xf7592
	ldrb r1, [r3, #11]	@ 000f7592 d97a
.org 0xf7594
	movs r0, #16	@ 000f7594 1020
.org 0xf7596
	orrs r0, r1	@ 000f7596 0843
.org 0xf7598
	strb r0, [r3, #11]	@ 000f7598 d872
.org 0xf759a
	ldrb r0, [r3, #28]	@ 000f759a 187f
.org 0xf759c
	strb r0, [r3, #29]	@ 000f759c 5877
.org 0xf759e
	ldr r0, [r6, #0]	@ 000f759e 3068
.org 0xf75a0
	ldr r1, [r6, #4]	@ 000f75a0 7168
.org 0xf75a2
	str r0, [r3, #84]	@ 000f75a2 5865
.org 0xf75a4
	str r1, [r3, #88]	@ 000f75a4 9965
.org 0xf75a6
	strb r5, [r3, #16]	@ 000f75a6 1d74
.org 0xf75a8
	strb r4, [r3, #17]	@ 000f75a8 5c74
.org 0xf75aa
	adds r0, r3, #0	@ 000f75aa 181c
.org 0xf75ac
	pop {r4, r5, r6}	@ 000f75ac 70bc
.org 0xf75ae
	pop {r1}	@ 000f75ae 02bc
.org 0xf75b0
	bx r1	@ 000f75b0 0847
