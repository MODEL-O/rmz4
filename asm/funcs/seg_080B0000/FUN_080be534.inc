@ FUN_080be534  entry 0x080be534  size 72
.thumb
.org 0xbe534
FUN_080be534:
	push {r4, r5, lr}	@ 000be534 30b5
.org 0xbe536
	adds r5, r0, #0	@ 000be536 051c
.org 0xbe538
	lsls r1, r1, #24	@ 000be538 0906
.org 0xbe53a
	lsrs r4, r1, #24	@ 000be53a 0c0e
.org 0xbe53c
	ldr r0, [pc, #60]	@ 000be53c 0f48
.org 0xbe53e
	ldr r0, [r0, #0]	@ 000be53e 0068
.org 0xbe540
	bl 0x5500	@ 000be540 46f7deff
.org 0xbe544
	adds r3, r0, #0	@ 000be544 031c
.org 0xbe546
	cmp r3, #0	@ 000be546 002b
.org 0xbe548
	beq.n 0xbe574	@ 000be548 14d0
.org 0xbe54a
	adds r1, r3, #0	@ 000be54a 191c
.org 0xbe54c
	adds r1, #37	@ 000be54c 2531
.org 0xbe54e
	movs r2, #0	@ 000be54e 0022
.org 0xbe550
	movs r0, #8	@ 000be550 0820
.org 0xbe552
	strb r0, [r1, #0]	@ 000be552 0870
.org 0xbe554
	ldr r1, [pc, #40]	@ 000be554 0a49
.org 0xbe556
	movs r0, #4	@ 000be556 0420
.org 0xbe558
	strb r0, [r3, #9]	@ 000be558 5872
.org 0xbe55a
	ldr r0, [r1, #16]	@ 000be55a 0869
.org 0xbe55c
	ldr r0, [r0, #0]	@ 000be55c 0068
.org 0xbe55e
	str r0, [r3, #20]	@ 000be55e 5861
.org 0xbe560
	movs r0, #0	@ 000be560 0020
.org 0xbe562
	strh r2, [r3, #32]	@ 000be562 1a84
.org 0xbe564
	adds r1, r3, #0	@ 000be564 191c
.org 0xbe566
	adds r1, #34	@ 000be566 2231
.org 0xbe568
	strb r0, [r1, #0]	@ 000be568 0870
.org 0xbe56a
	ldr r0, [r5, #0]	@ 000be56a 2868
.org 0xbe56c
	ldr r1, [r5, #4]	@ 000be56c 6968
.org 0xbe56e
	str r0, [r3, #84]	@ 000be56e 5865
.org 0xbe570
	str r1, [r3, #88]	@ 000be570 9965
.org 0xbe572
	strb r4, [r3, #17]	@ 000be572 5c74
.org 0xbe574
	adds r0, r3, #0	@ 000be574 181c
.org 0xbe576
	pop {r4, r5}	@ 000be576 30bc
.org 0xbe578
	pop {r1}	@ 000be578 02bc
.org 0xbe57a
	bx r1	@ 000be57a 0847
