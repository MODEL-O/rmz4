@ FUN_08082538  entry 0x08082538  size 232
.thumb
.org 0x82538
FUN_08082538:
	push {r4, lr}	@ 00082538 10b5
.org 0x8253a
	adds r4, r0, #0	@ 0008253a 041c
.org 0x8253c
	ldrb r0, [r4, #14]	@ 0008253c a07b
.org 0x8253e
	cmp r0, #0	@ 0008253e 0028
.org 0x82540
	beq.n 0x82548	@ 00082540 02d0
.org 0x82542
	cmp r0, #1	@ 00082542 0128
.org 0x82544
	beq.n 0x825fa	@ 00082544 59d0
.org 0x82546
	b.n 0x8261e	@ 00082546 6ae0
.org 0x82548
	adds r1, r4, #0	@ 00082548 211c
.org 0x8254a
	adds r1, #190	@ 0008254a be31
.org 0x8254c
	strb r0, [r1, #0]	@ 0008254c 0870
.org 0x8254e
	movs r1, #176	@ 0008254e b021
.org 0x82550
	lsls r1, r1, #5	@ 00082550 4901
.org 0x82552
	adds r0, r4, #0	@ 00082552 201c
.org 0x82554
	bl 0x1cf00	@ 00082554 9af7d4fc
.org 0x82558
	adds r0, r4, #0	@ 00082558 201c
.org 0x8255a
	adds r0, #116	@ 0008255a 7430
.org 0x8255c
	ldr r1, [pc, #32]	@ 0008255c 0849
.org 0x8255e
	bl 0x5784	@ 0008255e 83f711f9
.org 0x82562
	movs r0, #24	@ 00082562 1820
.org 0x82564
	strb r0, [r4, #18]	@ 00082564 a074
.org 0x82566
	ldrb r0, [r4, #16]	@ 00082566 207c
.org 0x82568
	cmp r0, #1	@ 00082568 0128
.org 0x8256a
	bne.n 0x825a0	@ 0008256a 19d1
.org 0x8256c
	ldr r0, [r4, #40]	@ 0008256c a06a
.org 0x8256e
	ldr r1, [r4, #84]	@ 0008256e 616d
.org 0x82570
	subs r2, r0, r1	@ 00082570 421a
.org 0x82572
	cmp r2, #0	@ 00082572 002a
.org 0x82574
	blt.n 0x82584	@ 00082574 06db
.org 0x82576
	movs r0, #128	@ 00082576 8020
.org 0x82578
	lsls r0, r0, #9	@ 00082578 4002
.org 0x8257a
	cmp r2, r0	@ 0008257a 8242
.org 0x8257c
	bgt.n 0x8258e	@ 0008257c 07dc
.org 0x8257e
	b.n 0x825ee	@ 0008257e 36e0
.org 0x82580
	.byte 0x88,0xe7,0x85,0x08	@ 00082580 data
.org 0x82584
	subs r1, r1, r0	@ 00082584 091a
.org 0x82586
	movs r0, #128	@ 00082586 8020
.org 0x82588
	lsls r0, r0, #9	@ 00082588 4002
.org 0x8258a
	cmp r1, r0	@ 0008258a 8142
.org 0x8258c
	ble.n 0x825ee	@ 0008258c 2fdd
.org 0x8258e
	ldrb r2, [r4, #10]	@ 0008258e a27a
.org 0x82590
	lsrs r0, r2, #4	@ 00082590 1009
.org 0x82592
	movs r1, #1	@ 00082592 0121
.org 0x82594
	bics r1, r0	@ 00082594 8143
.org 0x82596
	cmp r1, #0	@ 00082596 0029
.org 0x82598
	beq.n 0x825d0	@ 00082598 1ad0
.org 0x8259a
	movs r0, #16	@ 0008259a 1020
.org 0x8259c
	orrs r0, r2	@ 0008259c 1043
.org 0x8259e
	b.n 0x825d4	@ 0008259e 19e0
.org 0x825a0
	ldr r0, [r4, #40]	@ 000825a0 a06a
.org 0x825a2
	ldr r1, [r4, #84]	@ 000825a2 616d
.org 0x825a4
	subs r2, r0, r1	@ 000825a4 421a
.org 0x825a6
	cmp r2, #0	@ 000825a6 002a
.org 0x825a8
	blt.n 0x825b4	@ 000825a8 04db
.org 0x825aa
	movs r0, #128	@ 000825aa 8020
.org 0x825ac
	lsls r0, r0, #7	@ 000825ac c001
.org 0x825ae
	cmp r2, r0	@ 000825ae 8242
.org 0x825b0
	bgt.n 0x825be	@ 000825b0 05dc
.org 0x825b2
	b.n 0x825ee	@ 000825b2 1ce0
.org 0x825b4
	subs r1, r1, r0	@ 000825b4 091a
.org 0x825b6
	movs r0, #128	@ 000825b6 8020
.org 0x825b8
	lsls r0, r0, #7	@ 000825b8 c001
.org 0x825ba
	cmp r1, r0	@ 000825ba 8142
.org 0x825bc
	ble.n 0x825ee	@ 000825bc 17dd
.org 0x825be
	ldrb r2, [r4, #10]	@ 000825be a27a
.org 0x825c0
	lsrs r0, r2, #4	@ 000825c0 1009
.org 0x825c2
	movs r1, #1	@ 000825c2 0121
.org 0x825c4
	bics r1, r0	@ 000825c4 8143
.org 0x825c6
	cmp r1, #0	@ 000825c6 0029
.org 0x825c8
	beq.n 0x825d0	@ 000825c8 02d0
.org 0x825ca
	movs r0, #16	@ 000825ca 1020
.org 0x825cc
	orrs r0, r2	@ 000825cc 1043
.org 0x825ce
	b.n 0x825d4	@ 000825ce 01e0
.org 0x825d0
	movs r0, #239	@ 000825d0 ef20
.org 0x825d2
	ands r0, r2	@ 000825d2 1040
.org 0x825d4
	strb r0, [r4, #10]	@ 000825d4 a072
.org 0x825d6
	adds r0, r4, #0	@ 000825d6 201c
.org 0x825d8
	adds r0, #76	@ 000825d8 4c30
.org 0x825da
	strb r1, [r0, #0]	@ 000825da 0170
.org 0x825dc
	adds r3, r4, #0	@ 000825dc 231c
.org 0x825de
	adds r3, #74	@ 000825de 4a33
.org 0x825e0
	lsls r1, r1, #4	@ 000825e0 0901
.org 0x825e2
	ldrb r2, [r3, #0]	@ 000825e2 1a78
.org 0x825e4
	movs r0, #17	@ 000825e4 1120
.org 0x825e6
	negs r0, r0	@ 000825e6 4042
.org 0x825e8
	ands r0, r2	@ 000825e8 1040
.org 0x825ea
	orrs r0, r1	@ 000825ea 0843
.org 0x825ec
	strb r0, [r3, #0]	@ 000825ec 1870
.org 0x825ee
	adds r0, r4, #0	@ 000825ee 201c
.org 0x825f0
	bl 0x83418	@ 000825f0 00f012ff
.org 0x825f4
	ldrb r0, [r4, #14]	@ 000825f4 a07b
.org 0x825f6
	adds r0, #1	@ 000825f6 0130
.org 0x825f8
	strb r0, [r4, #14]	@ 000825f8 a073
.org 0x825fa
	ldr r1, [r4, #92]	@ 000825fa e16d
.org 0x825fc
	ldr r2, [r4, #96]	@ 000825fc 226e
.org 0x825fe
	adds r0, r4, #0	@ 000825fe 201c
.org 0x82600
	bl 0x83464	@ 00082600 00f030ff
.org 0x82604
	ldrb r0, [r4, #18]	@ 00082604 a07c
.org 0x82606
	subs r0, #1	@ 00082606 0138
.org 0x82608
	strb r0, [r4, #18]	@ 00082608 a074
.org 0x8260a
	lsls r0, r0, #24	@ 0008260a 0006
.org 0x8260c
	lsrs r1, r0, #24	@ 0008260c 010e
.org 0x8260e
	cmp r1, #0	@ 0008260e 0029
.org 0x82610
	bne.n 0x82618	@ 00082610 02d1
.org 0x82612
	movs r0, #4	@ 00082612 0420
.org 0x82614
	strb r0, [r4, #13]	@ 00082614 6073
.org 0x82616
	strb r1, [r4, #14]	@ 00082616 a173
.org 0x82618
	adds r0, r4, #0	@ 00082618 201c
.org 0x8261a
	bl 0x1cff0	@ 0008261a 9af7e9fc
.org 0x8261e
	pop {r4}	@ 0008261e 10bc
