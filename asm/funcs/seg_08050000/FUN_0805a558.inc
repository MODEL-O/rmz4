@ FUN_0805a558  entry 0x0805a558  size 126
.thumb
.org 0x5a558
FUN_0805a558:
	push {r4, r5, r6, lr}	@ 0005a558 70b5
.org 0x5a55a
	adds r4, r0, #0	@ 0005a55a 041c
.org 0x5a55c
	ldrb r0, [r4, #10]	@ 0005a55c a07a
.org 0x5a55e
	lsrs r5, r0, #4	@ 0005a55e 0509
.org 0x5a560
	movs r0, #1	@ 0005a560 0120
.org 0x5a562
	ands r5, r0	@ 0005a562 0540
.org 0x5a564
	ldrb r6, [r4, #15]	@ 0005a564 e67b
.org 0x5a566
	cmp r6, #0	@ 0005a566 002e
.org 0x5a568
	bne.n 0x5a58c	@ 0005a568 10d1
.org 0x5a56a
	movs r0, #184	@ 0005a56a b820
.org 0x5a56c
	bl 0x2b10	@ 0005a56c a8f7d0fa
.org 0x5a570
	adds r0, r4, #0	@ 0005a570 201c
.org 0x5a572
	adds r0, #116	@ 0005a572 7430
.org 0x5a574
	ldr r1, [pc, #96]	@ 0005a574 1849
.org 0x5a576
	bl 0x5784	@ 0005a576 abf705f9
.org 0x5a57a
	str r6, [r4, #92]	@ 0005a57a e665
.org 0x5a57c
	movs r0, #32	@ 0005a57c 2020
.org 0x5a57e
	str r0, [r4, #100]	@ 0005a57e 6066
.org 0x5a580
	lsls r0, r5, #1	@ 0005a580 6800
.org 0x5a582
	subs r0, #1	@ 0005a582 0138
.org 0x5a584
	str r0, [r4, #104]	@ 0005a584 a066
.org 0x5a586
	ldrb r0, [r4, #15]	@ 0005a586 e07b
.org 0x5a588
	adds r0, #1	@ 0005a588 0130
.org 0x5a58a
	strb r0, [r4, #15]	@ 0005a58a e073
.org 0x5a58c
	adds r0, r4, #0	@ 0005a58c 201c
.org 0x5a58e
	bl 0x1cff0	@ 0005a58e c2f72ffd
.org 0x5a592
	ldr r1, [r4, #92]	@ 0005a592 e16d
.org 0x5a594
	ldr r0, [r4, #104]	@ 0005a594 a06e
.org 0x5a596
	adds r2, r1, #0	@ 0005a596 0a1c
.org 0x5a598
	muls r2, r0	@ 0005a598 4243
.org 0x5a59a
	ldr r0, [r4, #84]	@ 0005a59a 606d
.org 0x5a59c
	adds r0, r0, r2	@ 0005a59c 8018
.org 0x5a59e
	str r0, [r4, #84]	@ 0005a59e 6065
.org 0x5a5a0
	ldr r0, [r4, #100]	@ 0005a5a0 606e
.org 0x5a5a2
	adds r1, r1, r0	@ 0005a5a2 0918
.org 0x5a5a4
	str r1, [r4, #92]	@ 0005a5a4 e165
.org 0x5a5a6
	movs r0, #144	@ 0005a5a6 9020
.org 0x5a5a8
	lsls r0, r0, #2	@ 0005a5a8 8000
.org 0x5a5aa
	cmp r1, r0	@ 0005a5aa 8142
.org 0x5a5ac
	ble.n 0x5a5b0	@ 0005a5ac 00dd
.org 0x5a5ae
	str r0, [r4, #92]	@ 0005a5ae e065
.org 0x5a5b0
	adds r0, r4, #0	@ 0005a5b0 201c
.org 0x5a5b2
	bl 0x5c3a8	@ 0005a5b2 01f0f9fe
.org 0x5a5b6
	ldr r1, [r4, #84]	@ 0005a5b6 616d
.org 0x5a5b8
	subs r0, r0, r1	@ 0005a5b8 401a
.org 0x5a5ba
	movs r1, #180	@ 0005a5ba b421
.org 0x5a5bc
	lsls r1, r1, #9	@ 0005a5bc 4902
.org 0x5a5be
	adds r0, r0, r1	@ 0005a5be 4018
.org 0x5a5c0
	movs r1, #240	@ 0005a5c0 f021
.org 0x5a5c2
	lsls r1, r1, #9	@ 0005a5c2 4902
.org 0x5a5c4
	cmp r0, r1	@ 0005a5c4 8842
.org 0x5a5c6
	bls.n 0x5a5d0	@ 0005a5c6 03d9
.org 0x5a5c8
	movs r1, #0	@ 0005a5c8 0021
.org 0x5a5ca
	movs r0, #3	@ 0005a5ca 0320
.org 0x5a5cc
	strb r0, [r4, #14]	@ 0005a5cc a073
.org 0x5a5ce
	strb r1, [r4, #15]	@ 0005a5ce e173
.org 0x5a5d0
	pop {r4, r5, r6}	@ 0005a5d0 70bc
.org 0x5a5d2
	pop {r0}	@ 0005a5d2 01bc
.org 0x5a5d4
	bx r0	@ 0005a5d4 0047
