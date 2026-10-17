@ FUN_080dc458  entry 0x080dc458  size 120
.thumb
.org 0xdc458
FUN_080dc458:
	push {r4, r5, r6, r7, lr}	@ 000dc458 f0b5
.org 0xdc45a
	mov r7, r8	@ 000dc45a 4746
.org 0xdc45c
	push {r7}	@ 000dc45c 80b4
.org 0xdc45e
	adds r6, r0, #0	@ 000dc45e 061c
.org 0xdc460
	adds r4, r1, #0	@ 000dc460 0c1c
.org 0xdc462
	adds r5, r2, #0	@ 000dc462 151c
.org 0xdc464
	mov r8, r3	@ 000dc464 9846
.org 0xdc466
	ldr r0, [sp, #28]	@ 000dc466 0798
.org 0xdc468
	lsls r0, r0, #24	@ 000dc468 0006
.org 0xdc46a
	lsrs r7, r0, #24	@ 000dc46a 070e
.org 0xdc46c
	ldr r0, [pc, #96]	@ 000dc46c 1848
.org 0xdc46e
	ldr r0, [r0, #0]	@ 000dc46e 0068
.org 0xdc470
	bl 0x5500	@ 000dc470 29f746f8
.org 0xdc474
	adds r3, r0, #0	@ 000dc474 031c
.org 0xdc476
	cmp r3, #0	@ 000dc476 002b
.org 0xdc478
	beq.n 0xdc4c6	@ 000dc478 25d0
.org 0xdc47a
	adds r1, r3, #0	@ 000dc47a 191c
.org 0xdc47c
	adds r1, #37	@ 000dc47c 2531
.org 0xdc47e
	movs r2, #0	@ 000dc47e 0022
.org 0xdc480
	movs r0, #1	@ 000dc480 0120
.org 0xdc482
	strb r0, [r1, #0]	@ 000dc482 0870
.org 0xdc484
	ldr r0, [pc, #76]	@ 000dc484 1348
.org 0xdc486
	movs r1, #43	@ 000dc486 2b21
.org 0xdc488
	strb r1, [r3, #9]	@ 000dc488 5972
.org 0xdc48a
	adds r0, #172	@ 000dc48a ac30
.org 0xdc48c
	ldr r0, [r0, #0]	@ 000dc48c 0068
.org 0xdc48e
	ldr r0, [r0, #0]	@ 000dc48e 0068
.org 0xdc490
	str r0, [r3, #20]	@ 000dc490 5861
.org 0xdc492
	movs r1, #0	@ 000dc492 0021
.org 0xdc494
	strh r2, [r3, #32]	@ 000dc494 1a84
.org 0xdc496
	adds r0, r3, #0	@ 000dc496 181c
.org 0xdc498
	adds r0, #34	@ 000dc498 2230
.org 0xdc49a
	strb r1, [r0, #0]	@ 000dc49a 0170
.org 0xdc49c
	movs r0, #4	@ 000dc49c 0420
.org 0xdc49e
	strb r0, [r3, #16]	@ 000dc49e 1874
.org 0xdc4a0
	str r6, [r3, #40]	@ 000dc4a0 9e62
.org 0xdc4a2
	ldr r0, [sp, #24]	@ 000dc4a2 0698
.org 0xdc4a4
	str r0, [r3, #116]	@ 000dc4a4 5867
.org 0xdc4a6
	ldr r0, [r4, #0]	@ 000dc4a6 2068
.org 0xdc4a8
	str r0, [r3, #84]	@ 000dc4a8 5865
.org 0xdc4aa
	ldr r0, [r4, #4]	@ 000dc4aa 6068
.org 0xdc4ac
	str r0, [r3, #88]	@ 000dc4ac 9865
.org 0xdc4ae
	ldr r0, [r5, #0]	@ 000dc4ae 2868
.org 0xdc4b0
	str r0, [r3, #92]	@ 000dc4b0 d865
.org 0xdc4b2
	ldr r0, [r5, #4]	@ 000dc4b2 6868
.org 0xdc4b4
	str r0, [r3, #96]	@ 000dc4b4 1866
.org 0xdc4b6
	mov r0, r8	@ 000dc4b6 4046
.org 0xdc4b8
	str r0, [r3, #104]	@ 000dc4b8 9866
.org 0xdc4ba
	strb r7, [r3, #18]	@ 000dc4ba 9f74
.org 0xdc4bc
	adds r0, r3, #0	@ 000dc4bc 181c
.org 0xdc4be
	adds r0, #120	@ 000dc4be 7830
.org 0xdc4c0
	strb r1, [r0, #0]	@ 000dc4c0 0170
.org 0xdc4c2
	adds r0, #1	@ 000dc4c2 0130
.org 0xdc4c4
	strb r1, [r0, #0]	@ 000dc4c4 0170
.org 0xdc4c6
	pop {r3}	@ 000dc4c6 08bc
.org 0xdc4c8
	mov r8, r3	@ 000dc4c8 9846
.org 0xdc4ca
	pop {r4, r5, r6, r7}	@ 000dc4ca f0bc
.org 0xdc4cc
	pop {r0}	@ 000dc4cc 01bc
.org 0xdc4ce
	bx r0	@ 000dc4ce 0047
