@ FUN_081024fc  entry 0x081024fc  size 152
.thumb
.org 0x1024fc
FUN_081024fc:
	push {r4, r5, lr}	@ 001024fc 30b5
.org 0x1024fe
	adds r4, r0, #0	@ 001024fe 041c
.org 0x102500
	ldrb r0, [r4, #14]	@ 00102500 a07b
.org 0x102502
	cmp r0, #0	@ 00102502 0028
.org 0x102504
	bne.n 0x102534	@ 00102504 16d1
.org 0x102506
	adds r0, r4, #0	@ 00102506 201c
.org 0x102508
	adds r0, #190	@ 00102508 be30
.org 0x10250a
	ldrh r1, [r0, #0]	@ 0010250a 0188
.org 0x10250c
	adds r0, r4, #0	@ 0010250c 201c
.org 0x10250e
	bl 0x1cf00	@ 0010250e 1af7f7fc
.org 0x102512
	ldr r2, [pc, #64]	@ 00102512 104a
.org 0x102514
	ldr r1, [r2, #0]	@ 00102514 1168
.org 0x102516
	ldr r0, [pc, #64]	@ 00102516 1048
.org 0x102518
	muls r0, r1	@ 00102518 4843
.org 0x10251a
	ldr r1, [pc, #64]	@ 0010251a 1049
.org 0x10251c
	adds r0, r0, r1	@ 0010251c 4018
.org 0x10251e
	lsls r0, r0, #1	@ 0010251e 4000
.org 0x102520
	lsrs r1, r0, #1	@ 00102520 4108
.org 0x102522
	str r1, [r2, #0]	@ 00102522 1160
.org 0x102524
	lsrs r0, r0, #17	@ 00102524 400c
.org 0x102526
	movs r1, #63	@ 00102526 3f21
.org 0x102528
	ands r0, r1	@ 00102528 0840
.org 0x10252a
	adds r0, #32	@ 0010252a 2030
.org 0x10252c
	strb r0, [r4, #18]	@ 0010252c a074
.org 0x10252e
	ldrb r0, [r4, #14]	@ 0010252e a07b
.org 0x102530
	adds r0, #1	@ 00102530 0130
.org 0x102532
	strb r0, [r4, #14]	@ 00102532 a073
.org 0x102534
	ldrb r0, [r4, #18]	@ 00102534 a07c
.org 0x102536
	subs r0, #1	@ 00102536 0138
.org 0x102538
	strb r0, [r4, #18]	@ 00102538 a074
.org 0x10253a
	lsls r0, r0, #24	@ 0010253a 0006
.org 0x10253c
	lsrs r0, r0, #24	@ 0010253c 000e
.org 0x10253e
	cmp r0, #255	@ 0010253e ff28
.org 0x102540
	bne.n 0x10259a	@ 00102540 2bd1
.org 0x102542
	ldrb r1, [r4, #10]	@ 00102542 a17a
.org 0x102544
	lsrs r0, r1, #4	@ 00102544 0809
.org 0x102546
	movs r2, #1	@ 00102546 0122
.org 0x102548
	bics r2, r0	@ 00102548 8243
.org 0x10254a
	cmp r2, #0	@ 0010254a 002a
.org 0x10254c
	beq.n 0x102560	@ 0010254c 08d0
.org 0x10254e
	movs r0, #16	@ 0010254e 1020
.org 0x102550
	orrs r0, r1	@ 00102550 0843
.org 0x102552
	b.n 0x102564	@ 00102552 07e0
.org 0x102554
	.byte 0x38,0xdc,0x02,0x02	@ 00102554 data
.org 0x102558
	.byte 0xfd,0x43,0x03,0x00	@ 00102558 data
.org 0x10255c
	.byte 0xc3,0x9e,0x26,0x00	@ 0010255c data
.org 0x102560
	movs r0, #239	@ 00102560 ef20
.org 0x102562
	ands r0, r1	@ 00102562 0840
.org 0x102564
	strb r0, [r4, #10]	@ 00102564 a072
.org 0x102566
	movs r5, #1	@ 00102566 0125
.org 0x102568
	adds r1, r5, #0	@ 00102568 291c
.org 0x10256a
	ands r1, r2	@ 0010256a 1140
.org 0x10256c
	adds r0, r4, #0	@ 0010256c 201c
.org 0x10256e
	adds r0, #76	@ 0010256e 4c30
.org 0x102570
	strb r1, [r0, #0]	@ 00102570 0170
.org 0x102572
	adds r3, r4, #0	@ 00102572 231c
.org 0x102574
	adds r3, #74	@ 00102574 4a33
.org 0x102576
	lsls r1, r1, #4	@ 00102576 0901
.org 0x102578
	ldrb r2, [r3, #0]	@ 00102578 1a78
.org 0x10257a
	movs r0, #17	@ 0010257a 1120
.org 0x10257c
	negs r0, r0	@ 0010257c 4042
.org 0x10257e
	ands r0, r2	@ 0010257e 1040
.org 0x102580
	orrs r0, r1	@ 00102580 0843
.org 0x102582
	strb r0, [r3, #0]	@ 00102582 1870
.org 0x102584
	ldr r0, [r4, #92]	@ 00102584 e06d
.org 0x102586
	lsls r0, r0, #8	@ 00102586 0002
.org 0x102588
	negs r0, r0	@ 00102588 4042
.org 0x10258a
	cmp r0, #0	@ 0010258a 0028
.org 0x10258c
	bge.n 0x102590	@ 0010258c 00da
.org 0x10258e
	adds r0, #255	@ 0010258e ff30
.org 0x102590
	asrs r0, r0, #8	@ 00102590 0012
.org 0x102592
	str r0, [r4, #92]	@ 00102592 e065
