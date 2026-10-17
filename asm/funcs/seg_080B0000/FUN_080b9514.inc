@ FUN_080b9514  entry 0x080b9514  size 110
.thumb
.org 0xb9514
FUN_080b9514:
	push {r4, r5, r6, r7, lr}	@ 000b9514 f0b5
.org 0xb9516
	adds r4, r0, #0	@ 000b9516 041c
.org 0xb9518
	adds r7, r1, #0	@ 000b9518 0f1c
.org 0xb951a
	lsls r2, r2, #24	@ 000b951a 1206
.org 0xb951c
	lsrs r6, r2, #24	@ 000b951c 160e
.org 0xb951e
	lsls r3, r3, #24	@ 000b951e 1b06
.org 0xb9520
	lsrs r5, r3, #24	@ 000b9520 1d0e
.org 0xb9522
	ldr r0, [pc, #96]	@ 000b9522 1848
.org 0xb9524
	ldr r0, [r0, #0]	@ 000b9524 0068
.org 0xb9526
	bl 0x5500	@ 000b9526 4bf7ebff
.org 0xb952a
	adds r3, r0, #0	@ 000b952a 031c
.org 0xb952c
	cmp r3, #0	@ 000b952c 002b
.org 0xb952e
	beq.n 0xb957a	@ 000b952e 24d0
.org 0xb9530
	adds r1, r3, #0	@ 000b9530 191c
.org 0xb9532
	adds r1, #37	@ 000b9532 2531
.org 0xb9534
	movs r2, #0	@ 000b9534 0022
.org 0xb9536
	movs r0, #24	@ 000b9536 1820
.org 0xb9538
	strb r0, [r1, #0]	@ 000b9538 0870
.org 0xb953a
	ldr r0, [pc, #76]	@ 000b953a 1348
.org 0xb953c
	movs r1, #107	@ 000b953c 6b21
.org 0xb953e
	strb r1, [r3, #9]	@ 000b953e 5972
.org 0xb9540
	movs r1, #214	@ 000b9540 d621
.org 0xb9542
	lsls r1, r1, #1	@ 000b9542 4900
.org 0xb9544
	adds r0, r0, r1	@ 000b9544 4018
.org 0xb9546
	ldr r0, [r0, #0]	@ 000b9546 0068
.org 0xb9548
	ldr r0, [r0, #0]	@ 000b9548 0068
.org 0xb954a
	str r0, [r3, #20]	@ 000b954a 5861
.org 0xb954c
	movs r0, #0	@ 000b954c 0020
.org 0xb954e
	strh r2, [r3, #32]	@ 000b954e 1a84
.org 0xb9550
	adds r1, r3, #0	@ 000b9550 191c
.org 0xb9552
	adds r1, #34	@ 000b9552 2231
.org 0xb9554
	strb r0, [r1, #0]	@ 000b9554 0870
.org 0xb9556
	ldrb r1, [r3, #11]	@ 000b9556 d97a
.org 0xb9558
	movs r0, #16	@ 000b9558 1020
.org 0xb955a
	orrs r0, r1	@ 000b955a 0843
.org 0xb955c
	strb r0, [r3, #11]	@ 000b955c d872
.org 0xb955e
	ldrb r0, [r3, #28]	@ 000b955e 187f
.org 0xb9560
	strb r0, [r3, #29]	@ 000b9560 5877
.org 0xb9562
	str r4, [r3, #40]	@ 000b9562 9c62
.org 0xb9564
	ldr r0, [r7, #0]	@ 000b9564 3868
.org 0xb9566
	ldr r1, [r7, #4]	@ 000b9566 7968
.org 0xb9568
	str r0, [r3, #84]	@ 000b9568 5865
.org 0xb956a
	str r1, [r3, #88]	@ 000b956a 9965
.org 0xb956c
	strb r6, [r3, #16]	@ 000b956c 1e74
.org 0xb956e
	strb r5, [r3, #17]	@ 000b956e 5d74
.org 0xb9570
	adds r1, r4, #0	@ 000b9570 211c
.org 0xb9572
	adds r1, #204	@ 000b9572 cc31
.org 0xb9574
	ldrh r0, [r1, #0]	@ 000b9574 0888
.org 0xb9576
	adds r0, #1	@ 000b9576 0130
.org 0xb9578
	strh r0, [r1, #0]	@ 000b9578 0880
.org 0xb957a
	adds r0, r3, #0	@ 000b957a 181c
.org 0xb957c
	pop {r4, r5, r6, r7}	@ 000b957c f0bc
.org 0xb957e
	pop {r1}	@ 000b957e 02bc
.org 0xb9580
	bx r1	@ 000b9580 0847
