@ FUN_080fb540  entry 0x080fb540  size 156
.thumb
.org 0xfb540
FUN_080fb540:
	push {r4, r5, lr}	@ 000fb540 30b5
.org 0xfb542
	adds r4, r0, #0	@ 000fb542 041c
.org 0xfb544
	ldrb r0, [r4, #14]	@ 000fb544 a07b
.org 0xfb546
	cmp r0, #0	@ 000fb546 0028
.org 0xfb548
	bne.n 0xfb578	@ 000fb548 16d1
.org 0xfb54a
	adds r0, r4, #0	@ 000fb54a 201c
.org 0xfb54c
	adds r0, #180	@ 000fb54c b430
.org 0xfb54e
	ldrb r0, [r0, #0]	@ 000fb54e 0078
.org 0xfb550
	cmp r0, #0	@ 000fb550 0028
.org 0xfb552
	beq.n 0xfb564	@ 000fb552 07d0
.org 0xfb554
	ldr r1, [pc, #8]	@ 000fb554 0249
.org 0xfb556
	adds r0, r4, #0	@ 000fb556 201c
.org 0xfb558
	bl 0x1cf00	@ 000fb558 21f7d2fc
.org 0xfb55c
	b.n 0xfb56c	@ 000fb55c 06e0
.org 0xfb55e
	.byte 0x00	@ 000fb55e data
.org 0xfb55f
	.byte 0x00	@ 000fb55f data
.org 0xfb560
	.byte 0x02,0x96,0x00,0x00	@ 000fb560 data
.org 0xfb564
	ldr r1, [pc, #124]	@ 000fb564 1f49
.org 0xfb566
	adds r0, r4, #0	@ 000fb566 201c
.org 0xfb568
	bl 0x1cf00	@ 000fb568 21f7cafc
.org 0xfb56c
	ldr r0, [pc, #120]	@ 000fb56c 1e48
.org 0xfb56e
	bl 0x2b10	@ 000fb56e 07f7cffa
.org 0xfb572
	ldrb r0, [r4, #14]	@ 000fb572 a07b
.org 0xfb574
	adds r0, #1	@ 000fb574 0130
.org 0xfb576
	strb r0, [r4, #14]	@ 000fb576 a073
.org 0xfb578
	adds r0, r4, #0	@ 000fb578 201c
.org 0xfb57a
	adds r0, #113	@ 000fb57a 7130
.org 0xfb57c
	ldrb r3, [r0, #0]	@ 000fb57c 0378
.org 0xfb57e
	adds r5, r4, #0	@ 000fb57e 251c
.org 0xfb580
	adds r5, #180	@ 000fb580 b435
.org 0xfb582
	ldrb r0, [r5, #0]	@ 000fb582 2878
.org 0xfb584
	cmp r0, #0	@ 000fb584 0028
.org 0xfb586
	beq.n 0xfb590	@ 000fb586 03d0
.org 0xfb588
	movs r0, #5	@ 000fb588 0520
.org 0xfb58a
	subs r0, r0, r3	@ 000fb58a c01a
.org 0xfb58c
	lsls r0, r0, #24	@ 000fb58c 0006
.org 0xfb58e
	lsrs r3, r0, #24	@ 000fb58e 030e
.org 0xfb590
	adds r2, r4, #0	@ 000fb590 221c
.org 0xfb592
	adds r2, #184	@ 000fb592 b832
.org 0xfb594
	ldr r1, [pc, #84]	@ 000fb594 1549
.org 0xfb596
	lsls r0, r3, #2	@ 000fb596 9800
.org 0xfb598
	adds r0, r0, r1	@ 000fb598 4018
.org 0xfb59a
	ldr r1, [r2, #0]	@ 000fb59a 1168
.org 0xfb59c
	ldr r0, [r0, #0]	@ 000fb59c 0068
.org 0xfb59e
	adds r1, r1, r0	@ 000fb59e 0918
.org 0xfb5a0
	str r1, [r4, #88]	@ 000fb5a0 a165
.org 0xfb5a2
	subs r0, r3, #1	@ 000fb5a2 581e
.org 0xfb5a4
	lsls r0, r0, #24	@ 000fb5a4 0006
.org 0xfb5a6
	lsrs r0, r0, #24	@ 000fb5a6 000e
.org 0xfb5a8
	cmp r0, #3	@ 000fb5a8 0328
.org 0xfb5aa
	bhi.n 0xfb5be	@ 000fb5aa 08d8
.org 0xfb5ac
	adds r0, r4, #0	@ 000fb5ac 201c
.org 0xfb5ae
	adds r0, #116	@ 000fb5ae 7430
.org 0xfb5b0
	lsls r1, r3, #3	@ 000fb5b0 d900
.org 0xfb5b2
	adds r1, r1, r3	@ 000fb5b2 c918
.org 0xfb5b4
	lsls r1, r1, #3	@ 000fb5b4 c900
.org 0xfb5b6
	ldr r2, [pc, #56]	@ 000fb5b6 0e4a
.org 0xfb5b8
	adds r1, r1, r2	@ 000fb5b8 8918
.org 0xfb5ba
	bl 0x5784	@ 000fb5ba 0af7e3f8
.org 0xfb5be
	adds r0, r4, #0	@ 000fb5be 201c
.org 0xfb5c0
	adds r0, #115	@ 000fb5c0 7330
.org 0xfb5c2
	ldrb r0, [r0, #0]	@ 000fb5c2 0078
.org 0xfb5c4
	cmp r0, #3	@ 000fb5c4 0328
.org 0xfb5c6
	bne.n 0xfb5dc	@ 000fb5c6 09d1
.org 0xfb5c8
	ldrb r0, [r5, #0]	@ 000fb5c8 2878
.org 0xfb5ca
	movs r1, #1	@ 000fb5ca 0121
.org 0xfb5cc
	eors r0, r1	@ 000fb5cc 4840
.org 0xfb5ce
	strb r0, [r5, #0]	@ 000fb5ce 2870
.org 0xfb5d0
	cmp r0, #0	@ 000fb5d0 0028
.org 0xfb5d2
	beq.n 0xfb5d6	@ 000fb5d2 00d0
.org 0xfb5d4
	movs r0, #1	@ 000fb5d4 0120
.org 0xfb5d6
	strb r0, [r4, #13]	@ 000fb5d6 6073
.org 0xfb5d8
	movs r0, #0	@ 000fb5d8 0020
.org 0xfb5da
	strb r0, [r4, #14]	@ 000fb5da a073
