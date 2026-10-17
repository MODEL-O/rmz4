@ FUN_08038430  entry 0x08038430  size 198
.thumb
.org 0x38430
FUN_08038430:
	push {r4, r5, lr}	@ 00038430 30b5
.org 0x38432
	adds r1, r0, #0	@ 00038432 011c
.org 0x38434
	adds r0, #180	@ 00038434 b430
.org 0x38436
	ldrb r0, [r0, #19]	@ 00038436 c07c
.org 0x38438
	cmp r0, #2	@ 00038438 0228
.org 0x3843a
	bne.n 0x384a4	@ 0003843a 33d1
.org 0x3843c
	adds r0, r1, #0	@ 0003843c 081c
.org 0x3843e
	adds r0, #243	@ 0003843e f330
.org 0x38440
	ldrb r1, [r0, #0]	@ 00038440 0178
.org 0x38442
	adds r5, r0, #0	@ 00038442 051c
.org 0x38444
	cmp r1, #5	@ 00038444 0529
.org 0x38446
	bls.n 0x3846c	@ 00038446 11d9
.org 0x38448
	ldr r3, [pc, #24]	@ 00038448 064b
.org 0x3844a
	ldrb r0, [r3, #9]	@ 0003844a 587a
.org 0x3844c
	movs r2, #8	@ 0003844c 0822
.org 0x3844e
	orrs r0, r2	@ 0003844e 1043
.org 0x38450
	strb r0, [r3, #9]	@ 00038450 5872
.org 0x38452
	ldr r1, [pc, #20]	@ 00038452 0549
.org 0x38454
	ldrb r0, [r1, #5]	@ 00038454 4879
.org 0x38456
	orrs r0, r2	@ 00038456 1043
.org 0x38458
	strb r0, [r1, #5]	@ 00038458 4871
.org 0x3845a
	adds r1, #36	@ 0003845a 2431
.org 0x3845c
	ldrb r0, [r1, #5]	@ 0003845c 4879
.org 0x3845e
	orrs r2, r0	@ 0003845e 0243
.org 0x38460
	strb r2, [r1, #5]	@ 00038460 4a71
.org 0x38462
	b.n 0x3848c	@ 00038462 13e0
.org 0x38464
	.byte 0xb0,0xe8,0x02,0x02	@ 00038464 data
.org 0x38468
	.byte 0x80,0x58,0x03,0x02	@ 00038468 data
.org 0x3846c
	ldr r4, [pc, #44]	@ 0003846c 0b4c
.org 0x3846e
	ldrb r2, [r4, #9]	@ 0003846e 627a
.org 0x38470
	movs r1, #247	@ 00038470 f721
.org 0x38472
	adds r0, r1, #0	@ 00038472 081c
.org 0x38474
	ands r0, r2	@ 00038474 1040
.org 0x38476
	strb r0, [r4, #9]	@ 00038476 6072
.org 0x38478
	ldr r2, [pc, #36]	@ 00038478 094a
.org 0x3847a
	ldrb r3, [r2, #5]	@ 0003847a 5379
.org 0x3847c
	adds r0, r1, #0	@ 0003847c 081c
.org 0x3847e
	ands r0, r3	@ 0003847e 1840
.org 0x38480
	strb r0, [r2, #5]	@ 00038480 5071
.org 0x38482
	adds r2, #36	@ 00038482 2432
.org 0x38484
	ldrb r0, [r2, #5]	@ 00038484 5079
.org 0x38486
	ands r1, r0	@ 00038486 0140
.org 0x38488
	strb r1, [r2, #5]	@ 00038488 5171
.org 0x3848a
	adds r3, r4, #0	@ 0003848a 231c
.org 0x3848c
	ldrb r0, [r5, #0]	@ 0003848c 2878
.org 0x3848e
	cmp r0, #4	@ 0003848e 0428
.org 0x38490
	bls.n 0x3850c	@ 00038490 3cd9
.org 0x38492
	ldrb r1, [r3, #9]	@ 00038492 597a
.org 0x38494
	movs r0, #2	@ 00038494 0220
.org 0x38496
	orrs r0, r1	@ 00038496 0843
.org 0x38498
	b.n 0x38512	@ 00038498 3be0
.org 0x3849a
	.byte 0x00	@ 0003849a data
.org 0x3849b
	.byte 0x00	@ 0003849b data
.org 0x3849c
	.byte 0xb0,0xe8,0x02,0x02	@ 0003849c data
.org 0x384a0
	.byte 0x80,0x58,0x03,0x02	@ 000384a0 data
.org 0x384a4
	adds r0, r1, #0	@ 000384a4 081c
.org 0x384a6
	adds r0, #243	@ 000384a6 f330
.org 0x384a8
	ldrb r1, [r0, #0]	@ 000384a8 0178
.org 0x384aa
	adds r5, r0, #0	@ 000384aa 051c
.org 0x384ac
	cmp r1, #6	@ 000384ac 0629
.org 0x384ae
	bne.n 0x384d4	@ 000384ae 11d1
.org 0x384b0
	ldr r3, [pc, #24]	@ 000384b0 064b
.org 0x384b2
	ldrb r0, [r3, #9]	@ 000384b2 587a
.org 0x384b4
	movs r2, #8	@ 000384b4 0822
.org 0x384b6
	orrs r0, r2	@ 000384b6 1043
.org 0x384b8
	strb r0, [r3, #9]	@ 000384b8 5872
.org 0x384ba
	ldr r1, [pc, #20]	@ 000384ba 0549
.org 0x384bc
	ldrb r0, [r1, #5]	@ 000384bc 4879
.org 0x384be
	orrs r0, r2	@ 000384be 1043
.org 0x384c0
	strb r0, [r1, #5]	@ 000384c0 4871
.org 0x384c2
	adds r1, #36	@ 000384c2 2431
.org 0x384c4
	ldrb r0, [r1, #5]	@ 000384c4 4879
.org 0x384c6
	orrs r2, r0	@ 000384c6 0243
.org 0x384c8
	strb r2, [r1, #5]	@ 000384c8 4a71
.org 0x384ca
	b.n 0x384f4	@ 000384ca 13e0
.org 0x384cc
	.byte 0xb0,0xe8,0x02,0x02	@ 000384cc data
.org 0x384d0
	.byte 0x80,0x58,0x03,0x02	@ 000384d0 data
.org 0x384d4
	ldr r4, [pc, #44]	@ 000384d4 0b4c
.org 0x384d6
	ldrb r2, [r4, #9]	@ 000384d6 627a
.org 0x384d8
	movs r1, #247	@ 000384d8 f721
.org 0x384da
	adds r0, r1, #0	@ 000384da 081c
.org 0x384dc
	ands r0, r2	@ 000384dc 1040
.org 0x384de
	strb r0, [r4, #9]	@ 000384de 6072
.org 0x384e0
	ldr r2, [pc, #36]	@ 000384e0 094a
.org 0x384e2
	ldrb r3, [r2, #5]	@ 000384e2 5379
.org 0x384e4
	adds r0, r1, #0	@ 000384e4 081c
.org 0x384e6
	ands r0, r3	@ 000384e6 1840
.org 0x384e8
	strb r0, [r2, #5]	@ 000384e8 5071
.org 0x384ea
	adds r2, #36	@ 000384ea 2432
.org 0x384ec
	ldrb r0, [r2, #5]	@ 000384ec 5079
.org 0x384ee
	ands r1, r0	@ 000384ee 0140
.org 0x384f0
	strb r1, [r2, #5]	@ 000384f0 5171
.org 0x384f2
	adds r3, r4, #0	@ 000384f2 231c
.org 0x384f4
	ldrb r0, [r5, #0]	@ 000384f4 2878
