@ FUN_080a552c  entry 0x080a552c  size 92
.thumb
.org 0xa552c
FUN_080a552c:
	push {r4, r5, r6, lr}	@ 000a552c 70b5
.org 0xa552e
	adds r6, r0, #0	@ 000a552e 061c
.org 0xa5530
	lsls r1, r1, #24	@ 000a5530 0906
.org 0xa5532
	lsrs r5, r1, #24	@ 000a5532 0d0e
.org 0xa5534
	lsls r2, r2, #24	@ 000a5534 1206
.org 0xa5536
	lsrs r4, r2, #24	@ 000a5536 140e
.org 0xa5538
	ldr r0, [pc, #76]	@ 000a5538 1348
.org 0xa553a
	ldr r0, [r0, #0]	@ 000a553a 0068
.org 0xa553c
	bl 0x5500	@ 000a553c 5ff7e0ff
.org 0xa5540
	adds r3, r0, #0	@ 000a5540 031c
.org 0xa5542
	cmp r3, #0	@ 000a5542 002b
.org 0xa5544
	beq.n 0xa5580	@ 000a5544 1cd0
.org 0xa5546
	adds r1, r3, #0	@ 000a5546 191c
.org 0xa5548
	adds r1, #37	@ 000a5548 2531
.org 0xa554a
	movs r2, #0	@ 000a554a 0022
.org 0xa554c
	movs r0, #24	@ 000a554c 1820
.org 0xa554e
	strb r0, [r1, #0]	@ 000a554e 0870
.org 0xa5550
	ldr r0, [pc, #56]	@ 000a5550 0e48
.org 0xa5552
	movs r1, #61	@ 000a5552 3d21
.org 0xa5554
	strb r1, [r3, #9]	@ 000a5554 5972
.org 0xa5556
	adds r0, #244	@ 000a5556 f430
.org 0xa5558
	ldr r0, [r0, #0]	@ 000a5558 0068
.org 0xa555a
	ldr r0, [r0, #0]	@ 000a555a 0068
.org 0xa555c
	str r0, [r3, #20]	@ 000a555c 5861
.org 0xa555e
	movs r0, #0	@ 000a555e 0020
.org 0xa5560
	strh r2, [r3, #32]	@ 000a5560 1a84
.org 0xa5562
	adds r1, r3, #0	@ 000a5562 191c
.org 0xa5564
	adds r1, #34	@ 000a5564 2231
.org 0xa5566
	strb r0, [r1, #0]	@ 000a5566 0870
.org 0xa5568
	ldrb r1, [r3, #11]	@ 000a5568 d97a
.org 0xa556a
	movs r0, #16	@ 000a556a 1020
.org 0xa556c
	orrs r0, r1	@ 000a556c 0843
.org 0xa556e
	strb r0, [r3, #11]	@ 000a556e d872
.org 0xa5570
	ldrb r0, [r3, #28]	@ 000a5570 187f
.org 0xa5572
	strb r0, [r3, #29]	@ 000a5572 5877
.org 0xa5574
	ldr r0, [r6, #0]	@ 000a5574 3068
.org 0xa5576
	ldr r1, [r6, #4]	@ 000a5576 7168
.org 0xa5578
	str r0, [r3, #84]	@ 000a5578 5865
.org 0xa557a
	str r1, [r3, #88]	@ 000a557a 9965
.org 0xa557c
	strb r5, [r3, #16]	@ 000a557c 1d74
.org 0xa557e
	strb r4, [r3, #17]	@ 000a557e 5c74
.org 0xa5580
	adds r0, r3, #0	@ 000a5580 181c
.org 0xa5582
	pop {r4, r5, r6}	@ 000a5582 70bc
.org 0xa5584
	pop {r1}	@ 000a5584 02bc
.org 0xa5586
	bx r1	@ 000a5586 0847
