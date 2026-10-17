@ FUN_080cd550  entry 0x080cd550  size 220
.thumb
.org 0xcd550
FUN_080cd550:
	push {r4, r5, r6, lr}	@ 000cd550 70b5
.org 0xcd552
	adds r6, r0, #0	@ 000cd552 061c
.org 0xcd554
	bl 0x1cc9c	@ 000cd554 4ff7a2fb
.org 0xcd558
	ldrb r1, [r6, #10]	@ 000cd558 b17a
.org 0xcd55a
	movs r0, #1	@ 000cd55a 0120
.org 0xcd55c
	orrs r0, r1	@ 000cd55c 0843
.org 0xcd55e
	movs r1, #2	@ 000cd55e 0221
.org 0xcd560
	orrs r0, r1	@ 000cd560 0843
.org 0xcd562
	movs r5, #0	@ 000cd562 0025
.org 0xcd564
	movs r1, #239	@ 000cd564 ef21
.org 0xcd566
	ands r0, r1	@ 000cd566 0840
.org 0xcd568
	strb r0, [r6, #10]	@ 000cd568 b072
.org 0xcd56a
	movs r2, #1	@ 000cd56a 0122
.org 0xcd56c
	adds r0, r6, #0	@ 000cd56c 301c
.org 0xcd56e
	adds r0, #76	@ 000cd56e 4c30
.org 0xcd570
	strb r5, [r0, #0]	@ 000cd570 0570
.org 0xcd572
	adds r3, r6, #0	@ 000cd572 331c
.org 0xcd574
	adds r3, #74	@ 000cd574 4a33
.org 0xcd576
	ldrb r1, [r3, #0]	@ 000cd576 1978
.org 0xcd578
	movs r0, #17	@ 000cd578 1120
.org 0xcd57a
	negs r0, r0	@ 000cd57a 4042
.org 0xcd57c
	ands r0, r1	@ 000cd57c 0840
.org 0xcd57e
	strb r0, [r3, #0]	@ 000cd57e 1870
.org 0xcd580
	ldr r1, [pc, #168]	@ 000cd580 2a49
.org 0xcd582
	ldrb r0, [r6, #9]	@ 000cd582 707a
.org 0xcd584
	lsls r0, r0, #2	@ 000cd584 8000
.org 0xcd586
	adds r0, r0, r1	@ 000cd586 4018
.org 0xcd588
	str r2, [r6, #12]	@ 000cd588 f260
.org 0xcd58a
	ldr r0, [r0, #0]	@ 000cd58a 0068
.org 0xcd58c
	ldr r0, [r0, #4]	@ 000cd58c 4068
.org 0xcd58e
	str r0, [r6, #20]	@ 000cd58e 7061
.org 0xcd590
	ldrb r1, [r6, #10]	@ 000cd590 b17a
.org 0xcd592
	movs r0, #4	@ 000cd592 0420
.org 0xcd594
	orrs r0, r1	@ 000cd594 0843
.org 0xcd596
	strb r0, [r6, #10]	@ 000cd596 b072
.org 0xcd598
	adds r4, r6, #0	@ 000cd598 341c
.org 0xcd59a
	adds r4, #116	@ 000cd59a 7434
.org 0xcd59c
	ldr r1, [pc, #144]	@ 000cd59c 2449
.org 0xcd59e
	adds r2, r6, #0	@ 000cd59e 321c
.org 0xcd5a0
	adds r2, #84	@ 000cd5a0 5432
.org 0xcd5a2
	adds r0, r4, #0	@ 000cd5a2 201c
.org 0xcd5a4
	movs r3, #255	@ 000cd5a4 ff23
.org 0xcd5a6
	bl 0x5760	@ 000cd5a6 38f7dbf8
.org 0xcd5aa
	str r6, [r4, #44]	@ 000cd5aa e662
.org 0xcd5ac
	str r5, [r4, #36]	@ 000cd5ac 6562
.org 0xcd5ae
	adds r5, r6, #0	@ 000cd5ae 351c
.org 0xcd5b0
	adds r5, #180	@ 000cd5b0 b435
.org 0xcd5b2
	ldr r0, [r6, #84]	@ 000cd5b2 706d
.org 0xcd5b4
	str r0, [r5, #0]	@ 000cd5b4 2860
.org 0xcd5b6
	adds r1, r6, #0	@ 000cd5b6 311c
.org 0xcd5b8
	adds r1, #184	@ 000cd5b8 b831
.org 0xcd5ba
	ldr r0, [r6, #88]	@ 000cd5ba b06d
.org 0xcd5bc
	str r0, [r1, #0]	@ 000cd5bc 0860
.org 0xcd5be
	ldr r3, [pc, #116]	@ 000cd5be 1d4b
.org 0xcd5c0
	ldr r2, [pc, #116]	@ 000cd5c0 1d4a
.org 0xcd5c2
	ldrb r0, [r6, #17]	@ 000cd5c2 707c
.org 0xcd5c4
	adds r0, r0, r2	@ 000cd5c4 8018
.org 0xcd5c6
	ldrb r0, [r0, #0]	@ 000cd5c6 0078
.org 0xcd5c8
	adds r0, #64	@ 000cd5c8 4030
.org 0xcd5ca
	lsls r0, r0, #24	@ 000cd5ca 0006
.org 0xcd5cc
	lsrs r0, r0, #23	@ 000cd5cc c00d
.org 0xcd5ce
	adds r0, r0, r3	@ 000cd5ce c018
.org 0xcd5d0
	movs r4, #0	@ 000cd5d0 0024
.org 0xcd5d2
	ldrsh r1, [r0, r4]	@ 000cd5d2 015f
.org 0xcd5d4
	lsls r0, r1, #1	@ 000cd5d4 4800
.org 0xcd5d6
	adds r4, r0, r1	@ 000cd5d6 4418
.org 0xcd5d8
	str r4, [r6, #92]	@ 000cd5d8 f465
.org 0xcd5da
	ldrb r0, [r6, #17]	@ 000cd5da 707c
.org 0xcd5dc
	adds r0, r0, r2	@ 000cd5dc 8018
.org 0xcd5de
	ldrb r0, [r0, #0]	@ 000cd5de 0078
.org 0xcd5e0
	lsls r0, r0, #1	@ 000cd5e0 4000
.org 0xcd5e2
	adds r0, r0, r3	@ 000cd5e2 c018
.org 0xcd5e4
	movs r2, #0	@ 000cd5e4 0022
.org 0xcd5e6
	ldrsh r1, [r0, r2]	@ 000cd5e6 815e
.org 0xcd5e8
	lsls r0, r1, #1	@ 000cd5e8 4800
.org 0xcd5ea
	adds r0, r0, r1	@ 000cd5ea 4018
.org 0xcd5ec
	lsls r0, r0, #8	@ 000cd5ec 0002
.org 0xcd5ee
	negs r0, r0	@ 000cd5ee 4042
.org 0xcd5f0
	cmp r0, #0	@ 000cd5f0 0028
.org 0xcd5f2
	bge.n 0xcd5f6	@ 000cd5f2 00da
.org 0xcd5f4
	adds r0, #255	@ 000cd5f4 ff30
.org 0xcd5f6
	asrs r0, r0, #8	@ 000cd5f6 0012
.org 0xcd5f8
	str r0, [r6, #96]	@ 000cd5f8 3066
.org 0xcd5fa
	ldr r0, [pc, #64]	@ 000cd5fa 1048
.org 0xcd5fc
	ldr r0, [r0, #0]	@ 000cd5fc 0068
.org 0xcd5fe
	ldr r1, [r0, #84]	@ 000cd5fe 416d
.org 0xcd600
	ldr r0, [r5, #0]	@ 000cd600 2868
.org 0xcd602
	cmp r1, r0	@ 000cd602 8142
.org 0xcd604
	ble.n 0xcd614	@ 000cd604 06dd
.org 0xcd606
	lsls r0, r4, #8	@ 000cd606 2002
.org 0xcd608
	negs r0, r0	@ 000cd608 4042
.org 0xcd60a
	cmp r0, #0	@ 000cd60a 0028
.org 0xcd60c
	bge.n 0xcd610	@ 000cd60c 00da
.org 0xcd60e
	adds r0, #255	@ 000cd60e ff30
.org 0xcd610
	asrs r0, r0, #8	@ 000cd610 0012
.org 0xcd612
	str r0, [r6, #92]	@ 000cd612 f065
.org 0xcd614
	movs r0, #0	@ 000cd614 0020
.org 0xcd616
	strb r0, [r6, #18]	@ 000cd616 b074
.org 0xcd618
	ldr r1, [pc, #36]	@ 000cd618 0949
.org 0xcd61a
	adds r0, r6, #0	@ 000cd61a 301c
.org 0xcd61c
	bl 0x1cf00	@ 000cd61c 4ff770fc
.org 0xcd620
	adds r0, r6, #0	@ 000cd620 301c
.org 0xcd622
	bl 0xcd644	@ 000cd622 00f00ff8
.org 0xcd626
	pop {r4, r5, r6}	@ 000cd626 70bc
.org 0xcd628
	pop {r0}	@ 000cd628 01bc
.org 0xcd62a
	bx r0	@ 000cd62a 0047
