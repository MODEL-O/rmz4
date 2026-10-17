@ FUN_080ec440  entry 0x080ec440  size 108
.thumb
.org 0xec440
FUN_080ec440:
	push {r4, r5, r6, r7, lr}	@ 000ec440 f0b5
.org 0xec442
	adds r6, r0, #0	@ 000ec442 061c
.org 0xec444
	adds r7, r1, #0	@ 000ec444 0f1c
.org 0xec446
	lsls r2, r2, #24	@ 000ec446 1206
.org 0xec448
	lsrs r5, r2, #24	@ 000ec448 150e
.org 0xec44a
	lsls r3, r3, #24	@ 000ec44a 1b06
.org 0xec44c
	lsrs r4, r3, #24	@ 000ec44c 1c0e
.org 0xec44e
	ldr r0, [pc, #92]	@ 000ec44e 1748
.org 0xec450
	ldr r0, [r0, #0]	@ 000ec450 0068
.org 0xec452
	bl 0x5500	@ 000ec452 19f755f8
.org 0xec456
	mov ip, r0	@ 000ec456 8446
.org 0xec458
	cmp r0, #0	@ 000ec458 0028
.org 0xec45a
	beq.n 0xec4a4	@ 000ec45a 23d0
.org 0xec45c
	mov r1, ip	@ 000ec45c 6146
.org 0xec45e
	adds r1, #37	@ 000ec45e 2531
.org 0xec460
	movs r3, #0	@ 000ec460 0023
.org 0xec462
	movs r0, #30	@ 000ec462 1e20
.org 0xec464
	strb r0, [r1, #0]	@ 000ec464 0870
.org 0xec466
	ldr r1, [pc, #72]	@ 000ec466 1249
.org 0xec468
	movs r0, #7	@ 000ec468 0720
.org 0xec46a
	mov r2, ip	@ 000ec46a 6246
.org 0xec46c
	strb r0, [r2, #9]	@ 000ec46c 5072
.org 0xec46e
	ldr r0, [r1, #28]	@ 000ec46e c869
.org 0xec470
	ldr r0, [r0, #0]	@ 000ec470 0068
.org 0xec472
	str r0, [r2, #20]	@ 000ec472 5061
.org 0xec474
	movs r2, #0	@ 000ec474 0022
.org 0xec476
	mov r0, ip	@ 000ec476 6046
.org 0xec478
	strh r3, [r0, #32]	@ 000ec478 0384
.org 0xec47a
	adds r0, #34	@ 000ec47a 2230
.org 0xec47c
	strb r2, [r0, #0]	@ 000ec47c 0270
.org 0xec47e
	mov r3, ip	@ 000ec47e 6346
.org 0xec480
	ldrb r1, [r3, #11]	@ 000ec480 d97a
.org 0xec482
	movs r0, #16	@ 000ec482 1020
.org 0xec484
	orrs r0, r1	@ 000ec484 0843
.org 0xec486
	strb r0, [r3, #11]	@ 000ec486 d872
.org 0xec488
	ldrb r0, [r3, #28]	@ 000ec488 187f
.org 0xec48a
	strb r0, [r3, #29]	@ 000ec48a 5877
.org 0xec48c
	str r6, [r3, #40]	@ 000ec48c 9e62
.org 0xec48e
	ldr r0, [r7, #0]	@ 000ec48e 3868
.org 0xec490
	ldr r1, [r7, #4]	@ 000ec490 7968
.org 0xec492
	str r0, [r3, #84]	@ 000ec492 5865
.org 0xec494
	str r1, [r3, #88]	@ 000ec494 9965
.org 0xec496
	strb r5, [r3, #16]	@ 000ec496 1d74
.org 0xec498
	strb r4, [r3, #17]	@ 000ec498 5c74
.org 0xec49a
	mov r0, ip	@ 000ec49a 6046
.org 0xec49c
	adds r0, #180	@ 000ec49c b430
.org 0xec49e
	strb r2, [r0, #0]	@ 000ec49e 0270
.org 0xec4a0
	adds r0, #1	@ 000ec4a0 0130
.org 0xec4a2
	strb r2, [r0, #0]	@ 000ec4a2 0270
.org 0xec4a4
	mov r0, ip	@ 000ec4a4 6046
.org 0xec4a6
	pop {r4, r5, r6, r7}	@ 000ec4a6 f0bc
.org 0xec4a8
	pop {r1}	@ 000ec4a8 02bc
.org 0xec4aa
	bx r1	@ 000ec4aa 0847
