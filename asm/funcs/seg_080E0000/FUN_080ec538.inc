@ FUN_080ec538  entry 0x080ec538  size 156
.thumb
.org 0xec538
FUN_080ec538:
	push {r4, r5, lr}	@ 000ec538 30b5
.org 0xec53a
	adds r5, r0, #0	@ 000ec53a 051c
.org 0xec53c
	movs r4, #0	@ 000ec53c 0024
.org 0xec53e
	ldr r1, [pc, #148]	@ 000ec53e 2549
.org 0xec540
	ldrb r0, [r5, #9]	@ 000ec540 687a
.org 0xec542
	lsls r0, r0, #2	@ 000ec542 8000
.org 0xec544
	adds r0, r0, r1	@ 000ec544 4018
.org 0xec546
	movs r1, #1	@ 000ec546 0121
.org 0xec548
	str r1, [r5, #12]	@ 000ec548 e960
.org 0xec54a
	ldr r0, [r0, #0]	@ 000ec54a 0068
.org 0xec54c
	ldr r0, [r0, #4]	@ 000ec54c 4068
.org 0xec54e
	str r0, [r5, #20]	@ 000ec54e 6861
.org 0xec550
	strb r4, [r5, #13]	@ 000ec550 6c73
.org 0xec552
	strb r4, [r5, #14]	@ 000ec552 ac73
.org 0xec554
	strb r4, [r5, #15]	@ 000ec554 ec73
.org 0xec556
	ldrb r0, [r5, #10]	@ 000ec556 a87a
.org 0xec558
	orrs r0, r1	@ 000ec558 0843
.org 0xec55a
	movs r1, #2	@ 000ec55a 0221
.org 0xec55c
	orrs r0, r1	@ 000ec55c 0843
.org 0xec55e
	strb r0, [r5, #10]	@ 000ec55e a872
.org 0xec560
	adds r0, r5, #0	@ 000ec560 281c
.org 0xec562
	adds r0, #182	@ 000ec562 b630
.org 0xec564
	strb r4, [r0, #0]	@ 000ec564 0470
.org 0xec566
	adds r1, r5, #0	@ 000ec566 291c
.org 0xec568
	adds r1, #188	@ 000ec568 bc31
.org 0xec56a
	ldr r0, [r5, #84]	@ 000ec56a 686d
.org 0xec56c
	str r0, [r1, #0]	@ 000ec56c 0860
.org 0xec56e
	adds r1, #4	@ 000ec56e 0431
.org 0xec570
	ldr r0, [r5, #88]	@ 000ec570 a86d
.org 0xec572
	str r0, [r1, #0]	@ 000ec572 0860
.org 0xec574
	adds r0, r5, #0	@ 000ec574 281c
.org 0xec576
	bl 0x1cc9c	@ 000ec576 30f791fb
.org 0xec57a
	adds r1, r5, #0	@ 000ec57a 291c
.org 0xec57c
	adds r1, #37	@ 000ec57c 2531
.org 0xec57e
	movs r0, #25	@ 000ec57e 1920
.org 0xec580
	strb r0, [r1, #0]	@ 000ec580 0870
.org 0xec582
	ldrb r1, [r5, #10]	@ 000ec582 a97a
.org 0xec584
	movs r0, #239	@ 000ec584 ef20
.org 0xec586
	ands r0, r1	@ 000ec586 0840
.org 0xec588
	strb r0, [r5, #10]	@ 000ec588 a872
.org 0xec58a
	adds r0, r5, #0	@ 000ec58a 281c
.org 0xec58c
	adds r0, #76	@ 000ec58c 4c30
.org 0xec58e
	strb r4, [r0, #0]	@ 000ec58e 0470
.org 0xec590
	adds r2, r5, #0	@ 000ec590 2a1c
.org 0xec592
	adds r2, #74	@ 000ec592 4a32
.org 0xec594
	ldrb r1, [r2, #0]	@ 000ec594 1178
.org 0xec596
	movs r0, #17	@ 000ec596 1120
.org 0xec598
	negs r0, r0	@ 000ec598 4042
.org 0xec59a
	ands r0, r1	@ 000ec59a 0840
.org 0xec59c
	strb r0, [r2, #0]	@ 000ec59c 1070
.org 0xec59e
	movs r1, #164	@ 000ec59e a421
.org 0xec5a0
	lsls r1, r1, #6	@ 000ec5a0 8901
.org 0xec5a2
	adds r0, r5, #0	@ 000ec5a2 281c
.org 0xec5a4
	bl 0x1cf00	@ 000ec5a4 30f7acfc
.org 0xec5a8
	ldrb r1, [r5, #10]	@ 000ec5a8 a97a
.org 0xec5aa
	movs r0, #4	@ 000ec5aa 0420
.org 0xec5ac
	orrs r0, r1	@ 000ec5ac 0843
.org 0xec5ae
	strb r0, [r5, #10]	@ 000ec5ae a872
.org 0xec5b0
	adds r4, r5, #0	@ 000ec5b0 2c1c
.org 0xec5b2
	adds r4, #116	@ 000ec5b2 7434
.org 0xec5b4
	ldr r1, [pc, #32]	@ 000ec5b4 0849
.org 0xec5b6
	adds r2, r5, #0	@ 000ec5b6 2a1c
.org 0xec5b8
	adds r2, #84	@ 000ec5b8 5432
.org 0xec5ba
	adds r0, r4, #0	@ 000ec5ba 201c
.org 0xec5bc
	movs r3, #64	@ 000ec5bc 4023
.org 0xec5be
	bl 0x5760	@ 000ec5be 19f7cff8
.org 0xec5c2
	str r5, [r4, #44]	@ 000ec5c2 e562
.org 0xec5c4
	ldr r0, [pc, #20]	@ 000ec5c4 0548
.org 0xec5c6
	str r0, [r4, #36]	@ 000ec5c6 6062
.org 0xec5c8
	adds r0, r5, #0	@ 000ec5c8 281c
.org 0xec5ca
	bl 0xec5e0	@ 000ec5ca 00f009f8
.org 0xec5ce
	pop {r4, r5}	@ 000ec5ce 30bc
.org 0xec5d0
	pop {r0}	@ 000ec5d0 01bc
.org 0xec5d2
	bx r0	@ 000ec5d2 0047
