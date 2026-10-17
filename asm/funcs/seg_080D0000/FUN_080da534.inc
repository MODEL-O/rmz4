@ FUN_080da534  entry 0x080da534  size 72
.thumb
.org 0xda534
FUN_080da534:
	push {r4, lr}	@ 000da534 10b5
.org 0xda536
	adds r4, r0, #0	@ 000da536 041c
.org 0xda538
	ldr r0, [pc, #64]	@ 000da538 1048
.org 0xda53a
	ldr r0, [r0, #0]	@ 000da53a 0068
.org 0xda53c
	bl 0x5500	@ 000da53c 2af7e0ff
.org 0xda540
	adds r3, r0, #0	@ 000da540 031c
.org 0xda542
	cmp r3, #0	@ 000da542 002b
.org 0xda544
	beq.n 0xda574	@ 000da544 16d0
.org 0xda546
	adds r1, r3, #0	@ 000da546 191c
.org 0xda548
	adds r1, #37	@ 000da548 2531
.org 0xda54a
	movs r2, #0	@ 000da54a 0022
.org 0xda54c
	movs r0, #1	@ 000da54c 0120
.org 0xda54e
	strb r0, [r1, #0]	@ 000da54e 0870
.org 0xda550
	ldr r0, [pc, #44]	@ 000da550 0b48
.org 0xda552
	movs r1, #35	@ 000da552 2321
.org 0xda554
	strb r1, [r3, #9]	@ 000da554 5972
.org 0xda556
	adds r0, #140	@ 000da556 8c30
.org 0xda558
	ldr r0, [r0, #0]	@ 000da558 0068
.org 0xda55a
	ldr r0, [r0, #0]	@ 000da55a 0068
.org 0xda55c
	str r0, [r3, #20]	@ 000da55c 5861
.org 0xda55e
	movs r0, #0	@ 000da55e 0020
.org 0xda560
	strh r2, [r3, #32]	@ 000da560 1a84
.org 0xda562
	adds r1, r3, #0	@ 000da562 191c
.org 0xda564
	adds r1, #34	@ 000da564 2231
.org 0xda566
	strb r0, [r1, #0]	@ 000da566 0870
.org 0xda568
	ldr r0, [r4, #0]	@ 000da568 2068
.org 0xda56a
	ldr r1, [r4, #4]	@ 000da56a 6168
.org 0xda56c
	str r0, [r3, #84]	@ 000da56c 5865
.org 0xda56e
	str r1, [r3, #88]	@ 000da56e 9965
.org 0xda570
	str r0, [r3, #100]	@ 000da570 5866
.org 0xda572
	str r1, [r3, #104]	@ 000da572 9966
.org 0xda574
	adds r0, r3, #0	@ 000da574 181c
.org 0xda576
	pop {r4}	@ 000da576 10bc
.org 0xda578
	pop {r1}	@ 000da578 02bc
.org 0xda57a
	bx r1	@ 000da57a 0847
