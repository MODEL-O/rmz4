@ FUN_08005534  entry 0x08005534  size 52
.thumb
.org 0x5534
FUN_08005534:
	push {r4, lr}	@ 00005534 10b5
.org 0x5536
	adds r4, r0, #0	@ 00005536 041c
.org 0x5538
	ldr r0, [pc, #44]	@ 00005538 0b48
.org 0x553a
	ldr r3, [r0, #0]	@ 0000553a 0368
.org 0x553c
	ldr r2, [r3, #16]	@ 0000553c 1a69
.org 0x553e
	cmp r2, #0	@ 0000553e 002a
.org 0x5540
	beq.n 0x5560	@ 00005540 0ed0
.org 0x5542
	ldr r0, [r2, #0]	@ 00005542 1068
.org 0x5544
	str r0, [r3, #16]	@ 00005544 1861
.org 0x5546
	ldrh r0, [r3, #10]	@ 00005546 5889
.org 0x5548
	subs r0, #1	@ 00005548 0138
.org 0x554a
	movs r1, #0	@ 0000554a 0021
.org 0x554c
	strh r0, [r3, #10]	@ 0000554c 5881
.org 0x554e
	ldr r0, [r4, #0]	@ 0000554e 2068
.org 0x5550
	str r0, [r2, #0]	@ 00005550 1060
.org 0x5552
	str r4, [r2, #4]	@ 00005552 5460
.org 0x5554
	ldr r0, [r4, #0]	@ 00005554 2068
.org 0x5556
	str r2, [r0, #4]	@ 00005556 4260
.org 0x5558
	str r2, [r4, #0]	@ 00005558 2260
.org 0x555a
	strh r1, [r2, #10]	@ 0000555a 5181
.org 0x555c
	str r1, [r2, #12]	@ 0000555c d160
.org 0x555e
	str r1, [r2, #16]	@ 0000555e 1161
.org 0x5560
	adds r0, r2, #0	@ 00005560 101c
.org 0x5562
	pop {r4}	@ 00005562 10bc
.org 0x5564
	pop {r1}	@ 00005564 02bc
.org 0x5566
	bx r1	@ 00005566 0847
