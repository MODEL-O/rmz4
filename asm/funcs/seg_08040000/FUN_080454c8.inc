@ FUN_080454c8  entry 0x080454c8  size 220
.thumb
.org 0x454c8
FUN_080454c8:
	push {r4, r5, lr}	@ 000454c8 30b5
.org 0x454ca
	adds r5, r0, #0	@ 000454ca 051c
.org 0x454cc
	adds r4, r1, #0	@ 000454cc 0c1c
.org 0x454ce
	ldr r0, [pc, #64]	@ 000454ce 1048
.org 0x454d0
	ldr r0, [r0, #0]	@ 000454d0 0068
.org 0x454d2
	bl 0x5500	@ 000454d2 c0f715f8
.org 0x454d6
	adds r3, r0, #0	@ 000454d6 031c
.org 0x454d8
	cmp r3, #0	@ 000454d8 002b
.org 0x454da
	beq.n 0x455bc	@ 000454da 6fd0
.org 0x454dc
	adds r0, r5, #0	@ 000454dc 281c
.org 0x454de
	adds r0, #248	@ 000454de f830
.org 0x454e0
	ldrb r0, [r0, #0]	@ 000454e0 0078
.org 0x454e2
	cmp r0, #2	@ 000454e2 0228
.org 0x454e4
	bne.n 0x45520	@ 000454e4 1cd1
.org 0x454e6
	ldr r1, [pc, #44]	@ 000454e6 0b49
.org 0x454e8
	movs r0, #23	@ 000454e8 1720
.org 0x454ea
	strb r0, [r3, #9]	@ 000454ea 5872
.org 0x454ec
	ldr r0, [r1, #92]	@ 000454ec c86d
.org 0x454ee
	ldr r0, [r0, #0]	@ 000454ee 0068
.org 0x454f0
	str r0, [r3, #20]	@ 000454f0 5861
.org 0x454f2
	ldrb r1, [r3, #11]	@ 000454f2 d97a
.org 0x454f4
	movs r0, #191	@ 000454f4 bf20
.org 0x454f6
	ands r0, r1	@ 000454f6 0840
.org 0x454f8
	strb r0, [r3, #11]	@ 000454f8 d872
.org 0x454fa
	adds r1, r3, #0	@ 000454fa 191c
.org 0x454fc
	adds r1, #37	@ 000454fc 2531
.org 0x454fe
	movs r0, #16	@ 000454fe 1020
.org 0x45500
	strb r0, [r1, #0]	@ 00045500 0870
.org 0x45502
	ldr r0, [pc, #20]	@ 00045502 0548
.org 0x45504
	ldrh r0, [r0, #0]	@ 00045504 0088
.org 0x45506
	strh r0, [r3, #32]	@ 00045506 1884
.org 0x45508
	ldr r0, [pc, #16]	@ 00045508 0448
.org 0x4550a
	ldrb r0, [r0, #0]	@ 0004550a 0078
.org 0x4550c
	b.n 0x45546	@ 0004550c 1be0
.org 0x4550e
	.byte 0x00	@ 0004550e data
.org 0x4550f
	.byte 0x00	@ 0004550f data
.org 0x45510
	.byte 0x88,0xed,0x02,0x02	@ 00045510 data
.org 0x45514
	.byte 0xf8,0x39,0x85,0x08	@ 00045514 data
.org 0x45518
	.byte 0xfc,0x36,0x85,0x08	@ 00045518 data
.org 0x4551c
	.byte 0x04,0x37,0x85,0x08	@ 0004551c data
.org 0x45520
	ldr r1, [pc, #68]	@ 00045520 1149
.org 0x45522
	movs r0, #23	@ 00045522 1720
.org 0x45524
	strb r0, [r3, #9]	@ 00045524 5872
.org 0x45526
	ldr r0, [r1, #92]	@ 00045526 c86d
.org 0x45528
	ldr r0, [r0, #0]	@ 00045528 0068
.org 0x4552a
	str r0, [r3, #20]	@ 0004552a 5861
.org 0x4552c
	ldrb r1, [r3, #11]	@ 0004552c d97a
.org 0x4552e
	movs r0, #191	@ 0004552e bf20
.org 0x45530
	ands r0, r1	@ 00045530 0840
.org 0x45532
	strb r0, [r3, #11]	@ 00045532 d872
.org 0x45534
	adds r1, r3, #0	@ 00045534 191c
.org 0x45536
	adds r1, #37	@ 00045536 2531
.org 0x45538
	movs r0, #16	@ 00045538 1020
.org 0x4553a
	strb r0, [r1, #0]	@ 0004553a 0870
.org 0x4553c
	ldr r0, [pc, #44]	@ 0004553c 0b48
.org 0x4553e
	ldrh r0, [r0, #2]	@ 0004553e 4088
.org 0x45540
	strh r0, [r3, #32]	@ 00045540 1884
.org 0x45542
	ldr r0, [pc, #44]	@ 00045542 0b48
.org 0x45544
	ldrb r0, [r0, #1]	@ 00045544 4078
.org 0x45546
	subs r1, #3	@ 00045546 0339
.org 0x45548
	strb r0, [r1, #0]	@ 00045548 0870
.org 0x4554a
	str r4, [r3, #40]	@ 0004554a 9c62
.org 0x4554c
	str r5, [r3, #44]	@ 0004554c dd62
.org 0x4554e
	movs r0, #0	@ 0004554e 0020
.org 0x45550
	strb r0, [r3, #16]	@ 00045550 1874
.org 0x45552
	strb r0, [r3, #17]	@ 00045552 5874
.org 0x45554
	ldrb r0, [r4, #10]	@ 00045554 a07a
.org 0x45556
	lsrs r2, r0, #4	@ 00045556 0209
.org 0x45558
	movs r0, #1	@ 00045558 0120
.org 0x4555a
	ands r2, r0	@ 0004555a 0240
.org 0x4555c
	cmp r2, #0	@ 0004555c 002a
.org 0x4555e
	beq.n 0x45574	@ 0004555e 09d0
.org 0x45560
	ldrb r0, [r3, #10]	@ 00045560 987a
.org 0x45562
	movs r1, #16	@ 00045562 1021
.org 0x45564
	orrs r0, r1	@ 00045564 0843
.org 0x45566
	b.n 0x4557a	@ 00045566 08e0
.org 0x45568
	.byte 0xf8,0x39,0x85,0x08	@ 00045568 data
.org 0x4556c
	.byte 0xfc,0x36,0x85,0x08	@ 0004556c data
.org 0x45570
	.byte 0x04,0x37,0x85,0x08	@ 00045570 data
.org 0x45574
	ldrb r1, [r3, #10]	@ 00045574 997a
.org 0x45576
	movs r0, #239	@ 00045576 ef20
.org 0x45578
	ands r0, r1	@ 00045578 0840
.org 0x4557a
	strb r0, [r3, #10]	@ 0004557a 9872
.org 0x4557c
	adds r1, r2, #0	@ 0004557c 111c
.org 0x4557e
	adds r0, r3, #0	@ 0004557e 181c
.org 0x45580
	adds r0, #76	@ 00045580 4c30
.org 0x45582
	strb r1, [r0, #0]	@ 00045582 0170
.org 0x45584
	movs r0, #74	@ 00045584 4a20
.org 0x45586
	adds r0, r0, r3	@ 00045586 c018
.org 0x45588
	mov ip, r0	@ 00045588 8446
.org 0x4558a
	lsls r1, r1, #4	@ 0004558a 0901
.org 0x4558c
	ldrb r2, [r0, #0]	@ 0004558c 0278
.org 0x4558e
	movs r0, #17	@ 0004558e 1120
.org 0x45590
	negs r0, r0	@ 00045590 4042
.org 0x45592
	ands r0, r2	@ 00045592 1040
.org 0x45594
	orrs r0, r1	@ 00045594 0843
.org 0x45596
	mov r1, ip	@ 00045596 6146
.org 0x45598
	strb r0, [r1, #0]	@ 00045598 0870
.org 0x4559a
	ldrb r1, [r3, #10]	@ 0004559a 997a
.org 0x4559c
	movs r0, #16	@ 0004559c 1020
.org 0x4559e
	ands r0, r1	@ 0004559e 0840
.org 0x455a0
	cmp r0, #0	@ 000455a0 0028
.org 0x455a2
	beq.n 0x455ac	@ 000455a2 03d0
