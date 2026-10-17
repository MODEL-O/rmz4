@ FUN_08072534  entry 0x08072534  size 138
.thumb
.org 0x72534
FUN_08072534:
	push {r4, r5, r6, lr}	@ 00072534 70b5
.org 0x72536
	adds r6, r0, #0	@ 00072536 061c
.org 0x72538
	ldrb r0, [r6, #15]	@ 00072538 f07b
.org 0x7253a
	cmp r0, #0	@ 0007253a 0028
.org 0x7253c
	bne.n 0x7254c	@ 0007253c 06d1
.org 0x7253e
	adds r0, r6, #0	@ 0007253e 301c
.org 0x72540
	movs r1, #18	@ 00072540 1221
.org 0x72542
	bl 0x736c4	@ 00072542 01f0bff8
.org 0x72546
	ldrb r0, [r6, #15]	@ 00072546 f07b
.org 0x72548
	adds r0, #1	@ 00072548 0130
.org 0x7254a
	strb r0, [r6, #15]	@ 0007254a f073
.org 0x7254c
	adds r0, r6, #0	@ 0007254c 301c
.org 0x7254e
	bl 0x1cff0	@ 0007254e aaf74ffd
.org 0x72552
	adds r0, r6, #0	@ 00072552 301c
.org 0x72554
	adds r0, #116	@ 00072554 7430
.org 0x72556
	ldr r4, [pc, #104]	@ 00072556 1a4c
.org 0x72558
	ldr r3, [pc, #104]	@ 00072558 1a4b
.org 0x7255a
	adds r1, r6, #0	@ 0007255a 311c
.org 0x7255c
	adds r1, #184	@ 0007255c b831
.org 0x7255e
	ldrb r2, [r1, #0]	@ 0007255e 0a78
.org 0x72560
	lsls r1, r2, #1	@ 00072560 5100
.org 0x72562
	adds r1, r1, r3	@ 00072562 c918
.org 0x72564
	ldrh r1, [r1, #0]	@ 00072564 0988
.org 0x72566
	lsls r1, r1, #2	@ 00072566 8900
.org 0x72568
	adds r1, r1, r4	@ 00072568 0919
.org 0x7256a
	adds r3, r6, #0	@ 0007256a 331c
.org 0x7256c
	adds r3, #113	@ 0007256c 7133
.org 0x7256e
	movs r5, #0	@ 0007256e 0025
.org 0x72570
	ldrsb r5, [r3, r5]	@ 00072570 5d57
.org 0x72572
	ldr r1, [r1, #0]	@ 00072572 0968
.org 0x72574
	lsls r3, r5, #2	@ 00072574 ab00
.org 0x72576
	adds r3, r3, r1	@ 00072576 5b18
.org 0x72578
	ldr r4, [pc, #76]	@ 00072578 134c
.org 0x7257a
	adds r1, r6, #0	@ 0007257a 311c
.org 0x7257c
	adds r1, #185	@ 0007257c b931
.org 0x7257e
	ldrb r1, [r1, #0]	@ 0007257e 0978
.org 0x72580
	lsls r1, r1, #2	@ 00072580 8900
.org 0x72582
	adds r1, r1, r4	@ 00072582 0919
.org 0x72584
	ldr r1, [r1, #0]	@ 00072584 0968
.org 0x72586
	lsls r2, r2, #2	@ 00072586 9200
.org 0x72588
	adds r2, r2, r1	@ 00072588 5218
.org 0x7258a
	ldr r1, [r2, #0]	@ 0007258a 1168
.org 0x7258c
	adds r1, r1, r5	@ 0007258c 4919
.org 0x7258e
	ldrb r1, [r1, #0]	@ 0007258e 0978
.org 0x72590
	lsls r2, r1, #1	@ 00072590 4a00
.org 0x72592
	adds r2, r2, r1	@ 00072592 5218
.org 0x72594
	lsls r2, r2, #3	@ 00072594 d200
.org 0x72596
	ldr r1, [r3, #0]	@ 00072596 1968
.org 0x72598
	adds r1, r1, r2	@ 00072598 8918
.org 0x7259a
	bl 0x5784	@ 0007259a 93f7f3f8
.org 0x7259e
	adds r0, r6, #0	@ 0007259e 301c
.org 0x725a0
	bl 0x73a68	@ 000725a0 01f062fa
.org 0x725a4
	adds r0, r6, #0	@ 000725a4 301c
.org 0x725a6
	adds r0, #115	@ 000725a6 7330
.org 0x725a8
	ldrb r0, [r0, #0]	@ 000725a8 0078
.org 0x725aa
	cmp r0, #3	@ 000725aa 0328
.org 0x725ac
	bne.n 0x725b8	@ 000725ac 04d1
.org 0x725ae
	ldrb r0, [r6, #14]	@ 000725ae b07b
.org 0x725b0
	adds r0, #1	@ 000725b0 0130
.org 0x725b2
	movs r1, #0	@ 000725b2 0021
.org 0x725b4
	strb r0, [r6, #14]	@ 000725b4 b073
.org 0x725b6
	strb r1, [r6, #15]	@ 000725b6 f173
.org 0x725b8
	pop {r4, r5, r6}	@ 000725b8 70bc
.org 0x725ba
	pop {r0}	@ 000725ba 01bc
.org 0x725bc
	bx r0	@ 000725bc 0047
