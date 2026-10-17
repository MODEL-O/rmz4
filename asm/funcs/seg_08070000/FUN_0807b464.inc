@ FUN_0807b464  entry 0x0807b464  size 292
.thumb
.org 0x7b464
FUN_0807b464:
	push {r4, r5, r6, r7, lr}	@ 0007b464 f0b5
.org 0x7b466
	mov r7, r9	@ 0007b466 4f46
.org 0x7b468
	mov r6, r8	@ 0007b468 4646
.org 0x7b46a
	push {r6, r7}	@ 0007b46a c0b4
.org 0x7b46c
	adds r4, r0, #0	@ 0007b46c 041c
.org 0x7b46e
	movs r0, #0	@ 0007b46e 0020
.org 0x7b470
	mov r8, r0	@ 0007b470 8046
.org 0x7b472
	ldr r0, [pc, #204]	@ 0007b472 3348
.org 0x7b474
	ldr r0, [r0, #0]	@ 0007b474 0068
.org 0x7b476
	ldr r1, [r4, #84]	@ 0007b476 616d
.org 0x7b478
	ldr r0, [r0, #84]	@ 0007b478 406d
.org 0x7b47a
	cmp r1, r0	@ 0007b47a 8142
.org 0x7b47c
	bge.n 0x7b482	@ 0007b47c 01da
.org 0x7b47e
	movs r1, #1	@ 0007b47e 0121
.org 0x7b480
	mov r8, r1	@ 0007b480 8846
.org 0x7b482
	ldr r1, [pc, #192]	@ 0007b482 3049
.org 0x7b484
	ldrb r0, [r4, #9]	@ 0007b484 607a
.org 0x7b486
	lsls r0, r0, #2	@ 0007b486 8000
.org 0x7b488
	adds r0, r0, r1	@ 0007b488 4018
.org 0x7b48a
	movs r7, #1	@ 0007b48a 0127
.org 0x7b48c
	str r7, [r4, #12]	@ 0007b48c e760
.org 0x7b48e
	ldr r0, [r0, #0]	@ 0007b48e 0068
.org 0x7b490
	ldr r0, [r0, #4]	@ 0007b490 4068
.org 0x7b492
	str r0, [r4, #20]	@ 0007b492 6061
.org 0x7b494
	movs r5, #0	@ 0007b494 0025
.org 0x7b496
	movs r1, #1	@ 0007b496 0121
.org 0x7b498
	strb r7, [r4, #13]	@ 0007b498 6773
.org 0x7b49a
	strb r5, [r4, #14]	@ 0007b49a a573
.org 0x7b49c
	strb r5, [r4, #15]	@ 0007b49c e573
.org 0x7b49e
	ldrb r0, [r4, #10]	@ 0007b49e a07a
.org 0x7b4a0
	movs r2, #0	@ 0007b4a0 0022
.org 0x7b4a2
	mov r9, r2	@ 0007b4a2 9146
.org 0x7b4a4
	orrs r0, r1	@ 0007b4a4 0843
.org 0x7b4a6
	movs r1, #2	@ 0007b4a6 0221
.org 0x7b4a8
	orrs r0, r1	@ 0007b4a8 0843
.org 0x7b4aa
	strb r0, [r4, #10]	@ 0007b4aa a072
.org 0x7b4ac
	adds r1, r4, #0	@ 0007b4ac 211c
.org 0x7b4ae
	adds r1, #188	@ 0007b4ae bc31
.org 0x7b4b0
	movs r0, #255	@ 0007b4b0 ff20
.org 0x7b4b2
	strb r0, [r1, #0]	@ 0007b4b2 0870
.org 0x7b4b4
	adds r0, r4, #0	@ 0007b4b4 201c
.org 0x7b4b6
	adds r0, #189	@ 0007b4b6 bd30
.org 0x7b4b8
	strb r5, [r0, #0]	@ 0007b4b8 0570
.org 0x7b4ba
	adds r0, #1	@ 0007b4ba 0130
.org 0x7b4bc
	strb r5, [r0, #0]	@ 0007b4bc 0570
.org 0x7b4be
	adds r1, #12	@ 0007b4be 0c31
.org 0x7b4c0
	ldr r0, [r4, #84]	@ 0007b4c0 606d
.org 0x7b4c2
	str r0, [r1, #0]	@ 0007b4c2 0860
.org 0x7b4c4
	adds r0, r4, #0	@ 0007b4c4 201c
.org 0x7b4c6
	adds r0, #213	@ 0007b4c6 d530
.org 0x7b4c8
	strb r5, [r0, #0]	@ 0007b4c8 0570
.org 0x7b4ca
	adds r3, r4, #0	@ 0007b4ca 231c
.org 0x7b4cc
	adds r3, #191	@ 0007b4cc bf33
.org 0x7b4ce
	strb r5, [r3, #0]	@ 0007b4ce 1d70
.org 0x7b4d0
	ldr r2, [pc, #116]	@ 0007b4d0 1d4a
.org 0x7b4d2
	ldr r1, [r2, #0]	@ 0007b4d2 1168
.org 0x7b4d4
	ldr r0, [pc, #116]	@ 0007b4d4 1d48
.org 0x7b4d6
	muls r0, r1	@ 0007b4d6 4843
.org 0x7b4d8
	ldr r1, [pc, #116]	@ 0007b4d8 1d49
.org 0x7b4da
	adds r0, r0, r1	@ 0007b4da 4018
.org 0x7b4dc
	lsls r0, r0, #1	@ 0007b4dc 4000
.org 0x7b4de
	lsrs r1, r0, #1	@ 0007b4de 4108
.org 0x7b4e0
	str r1, [r2, #0]	@ 0007b4e0 1160
.org 0x7b4e2
	lsrs r0, r0, #17	@ 0007b4e2 400c
.org 0x7b4e4
	ands r0, r7	@ 0007b4e4 3840
.org 0x7b4e6
	adds r6, r3, #0	@ 0007b4e6 1e1c
.org 0x7b4e8
	cmp r0, #0	@ 0007b4e8 0028
.org 0x7b4ea
	beq.n 0x7b4f0	@ 0007b4ea 01d0
.org 0x7b4ec
	movs r0, #2	@ 0007b4ec 0220
.org 0x7b4ee
	strb r0, [r6, #0]	@ 0007b4ee 3070
.org 0x7b4f0
	adds r0, r4, #0	@ 0007b4f0 201c
.org 0x7b4f2
	adds r0, #204	@ 0007b4f2 cc30
.org 0x7b4f4
	strh r5, [r0, #0]	@ 0007b4f4 0580
.org 0x7b4f6
	adds r0, #4	@ 0007b4f6 0430
.org 0x7b4f8
	str r5, [r0, #0]	@ 0007b4f8 0560
.org 0x7b4fa
	adds r0, #8	@ 0007b4fa 0830
.org 0x7b4fc
	str r5, [r0, #0]	@ 0007b4fc 0560
.org 0x7b4fe
	str r5, [r4, #44]	@ 0007b4fe e562
.org 0x7b500
	adds r0, r4, #0	@ 0007b500 201c
.org 0x7b502
	bl 0x1cc9c	@ 0007b502 a1f7cbfb
.org 0x7b506
	adds r0, r4, #0	@ 0007b506 201c
.org 0x7b508
	bl 0x1ceec	@ 0007b508 a1f7f0fc
.org 0x7b50c
	adds r1, r4, #0	@ 0007b50c 211c
.org 0x7b50e
	adds r1, #37	@ 0007b50e 2531
.org 0x7b510
	movs r0, #24	@ 0007b510 1820
.org 0x7b512
	strb r0, [r1, #0]	@ 0007b512 0870
.org 0x7b514
	mov r1, r8	@ 0007b514 4146
.org 0x7b516
	ands r1, r7	@ 0007b516 3940
.org 0x7b518
	adds r0, r4, #0	@ 0007b518 201c
.org 0x7b51a
	adds r0, #76	@ 0007b51a 4c30
.org 0x7b51c
	strb r1, [r0, #0]	@ 0007b51c 0170
.org 0x7b51e
	adds r3, r4, #0	@ 0007b51e 231c
.org 0x7b520
	adds r3, #74	@ 0007b520 4a33
.org 0x7b522
	lsls r1, r1, #4	@ 0007b522 0901
.org 0x7b524
	ldrb r2, [r3, #0]	@ 0007b524 1a78
.org 0x7b526
	movs r0, #17	@ 0007b526 1120
.org 0x7b528
	negs r0, r0	@ 0007b528 4042
.org 0x7b52a
	ands r0, r2	@ 0007b52a 1040
.org 0x7b52c
	orrs r0, r1	@ 0007b52c 0843
.org 0x7b52e
	strb r0, [r3, #0]	@ 0007b52e 1870
.org 0x7b530
	mov r2, r8	@ 0007b530 4246
.org 0x7b532
	ands r2, r7	@ 0007b532 3a40
.org 0x7b534
	cmp r2, #0	@ 0007b534 002a
.org 0x7b536
	beq.n 0x7b554	@ 0007b536 0dd0
.org 0x7b538
	ldrb r0, [r4, #10]	@ 0007b538 a07a
.org 0x7b53a
	movs r1, #16	@ 0007b53a 1021
.org 0x7b53c
	orrs r0, r1	@ 0007b53c 0843
.org 0x7b53e
	b.n 0x7b55a	@ 0007b53e 0ce0
.org 0x7b540
	.byte 0xf0,0xdb,0x02,0x02	@ 0007b540 data
.org 0x7b544
	.byte 0x70,0x7d,0x85,0x08	@ 0007b544 data
.org 0x7b548
	.byte 0x38,0xdc,0x02,0x02	@ 0007b548 data
.org 0x7b54c
	.byte 0xfd,0x43,0x03,0x00	@ 0007b54c data
.org 0x7b550
	.byte 0xc3,0x9e,0x26,0x00	@ 0007b550 data
.org 0x7b554
	ldrb r1, [r4, #10]	@ 0007b554 a17a
.org 0x7b556
	movs r0, #239	@ 0007b556 ef20
.org 0x7b558
	ands r0, r1	@ 0007b558 0840
.org 0x7b55a
	strb r0, [r4, #10]	@ 0007b55a a072
.org 0x7b55c
	ldr r0, [pc, #60]	@ 0007b55c 0f48
.org 0x7b55e
	ldr r0, [r0, #0]	@ 0007b55e 0068
.org 0x7b560
	ldr r1, [r0, #0]	@ 0007b560 0168
.org 0x7b562
	adds r0, r4, #0	@ 0007b562 201c
.org 0x7b564
	movs r2, #96	@ 0007b564 6022
.org 0x7b566
	bl 0x503cc	@ 0007b566 d4f731ff
.org 0x7b56a
	adds r0, r4, #0	@ 0007b56a 201c
.org 0x7b56c
	bl 0x7ea4c	@ 0007b56c 03f06efa
.org 0x7b570
	adds r0, r4, #0	@ 0007b570 201c
.org 0x7b572
	adds r0, #206	@ 0007b572 ce30
.org 0x7b574
	movs r2, #0	@ 0007b574 0022
.org 0x7b576
	strb r2, [r0, #0]	@ 0007b576 0270
.org 0x7b578
	adds r0, #1	@ 0007b578 0130
.org 0x7b57a
	strb r2, [r0, #0]	@ 0007b57a 0270
.org 0x7b57c
	ldrb r1, [r6, #0]	@ 0007b57c 3178
.org 0x7b57e
	movs r0, #254	@ 0007b57e fe20
.org 0x7b580
	ands r0, r1	@ 0007b580 0840
.org 0x7b582
	strb r0, [r6, #0]	@ 0007b582 3070
.org 0x7b584
	adds r0, r4, #0	@ 0007b584 201c
.org 0x7b586
	adds r0, #212	@ 0007b586 d430
