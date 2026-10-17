@ FUN_08048508  entry 0x08048508  size 270
.thumb
.org 0x48508
FUN_08048508:
	push {r4, r5, r6, r7, lr}	@ 00048508 f0b5
.org 0x4850a
	adds r6, r0, #0	@ 0004850a 061c
.org 0x4850c
	ldr r1, [pc, #108]	@ 0004850c 1b49
.org 0x4850e
	ldrb r0, [r6, #9]	@ 0004850e 707a
.org 0x48510
	lsls r0, r0, #2	@ 00048510 8000
.org 0x48512
	adds r0, r0, r1	@ 00048512 4018
.org 0x48514
	movs r1, #1	@ 00048514 0121
.org 0x48516
	str r1, [r6, #12]	@ 00048516 f160
.org 0x48518
	ldr r0, [r0, #0]	@ 00048518 0068
.org 0x4851a
	ldr r0, [r0, #4]	@ 0004851a 4068
.org 0x4851c
	str r0, [r6, #20]	@ 0004851c 7061
.org 0x4851e
	adds r0, r6, #0	@ 0004851e 301c
.org 0x48520
	bl 0x1cc9c	@ 00048520 d4f7bcfb
.org 0x48524
	adds r0, r6, #0	@ 00048524 301c
.org 0x48526
	bl 0x1ceec	@ 00048526 d4f7e1fc
.org 0x4852a
	ldrb r1, [r6, #10]	@ 0004852a b17a
.org 0x4852c
	movs r0, #1	@ 0004852c 0120
.org 0x4852e
	movs r7, #0	@ 0004852e 0027
.org 0x48530
	movs r5, #0	@ 00048530 0025
.org 0x48532
	orrs r0, r1	@ 00048532 0843
.org 0x48534
	movs r1, #2	@ 00048534 0221
.org 0x48536
	orrs r0, r1	@ 00048536 0843
.org 0x48538
	strb r0, [r6, #10]	@ 00048538 b072
.org 0x4853a
	ldr r1, [pc, #68]	@ 0004853a 1149
.org 0x4853c
	ldrb r0, [r6, #17]	@ 0004853c 707c
.org 0x4853e
	lsls r0, r0, #1	@ 0004853e 4000
.org 0x48540
	adds r0, r0, r1	@ 00048540 4018
.org 0x48542
	ldrh r1, [r0, #0]	@ 00048542 0188
.org 0x48544
	adds r0, r6, #0	@ 00048544 301c
.org 0x48546
	bl 0x1cf00	@ 00048546 d4f7dbfc
.org 0x4854a
	ldrb r0, [r6, #10]	@ 0004854a b07a
.org 0x4854c
	movs r1, #4	@ 0004854c 0421
.org 0x4854e
	orrs r0, r1	@ 0004854e 0843
.org 0x48550
	strb r0, [r6, #10]	@ 00048550 b072
.org 0x48552
	adds r4, r6, #0	@ 00048552 341c
.org 0x48554
	adds r4, #116	@ 00048554 7434
.org 0x48556
	ldr r1, [pc, #44]	@ 00048556 0b49
.org 0x48558
	adds r2, r6, #0	@ 00048558 321c
.org 0x4855a
	adds r2, #84	@ 0004855a 5432
.org 0x4855c
	adds r0, r4, #0	@ 0004855c 201c
.org 0x4855e
	movs r3, #8	@ 0004855e 0823
.org 0x48560
	bl 0x5760	@ 00048560 bdf7fef8
.org 0x48564
	str r6, [r4, #44]	@ 00048564 e662
.org 0x48566
	str r5, [r4, #36]	@ 00048566 6562
.org 0x48568
	ldr r1, [pc, #28]	@ 00048568 0749
.org 0x4856a
	ldrb r0, [r6, #17]	@ 0004856a 707c
.org 0x4856c
	adds r0, r0, r1	@ 0004856c 4018
.org 0x4856e
	ldrb r2, [r0, #0]	@ 0004856e 0278
.org 0x48570
	cmp r2, #0	@ 00048570 002a
.org 0x48572
	beq.n 0x4858c	@ 00048572 0bd0
.org 0x48574
	ldrb r0, [r6, #10]	@ 00048574 b07a
.org 0x48576
	movs r1, #16	@ 00048576 1021
.org 0x48578
	orrs r0, r1	@ 00048578 0843
.org 0x4857a
	b.n 0x48592	@ 0004857a 0ae0
.org 0x4857c
	.byte 0xf8,0x39,0x85,0x08	@ 0004857c data
.org 0x48580
	.byte 0x54,0x70,0x85,0x08	@ 00048580 data
.org 0x48584
	.byte 0x24,0x70,0x85,0x08	@ 00048584 data
.org 0x48588
	.byte 0x64,0x70,0x85,0x08	@ 00048588 data
.org 0x4858c
	ldrb r1, [r6, #10]	@ 0004858c b17a
.org 0x4858e
	movs r0, #239	@ 0004858e ef20
.org 0x48590
	ands r0, r1	@ 00048590 0840
.org 0x48592
	strb r0, [r6, #10]	@ 00048592 b072
.org 0x48594
	movs r1, #1	@ 00048594 0121
.org 0x48596
	ands r1, r2	@ 00048596 1140
.org 0x48598
	adds r0, r6, #0	@ 00048598 301c
.org 0x4859a
	adds r0, #76	@ 0004859a 4c30
.org 0x4859c
	strb r1, [r0, #0]	@ 0004859c 0170
.org 0x4859e
	adds r3, r6, #0	@ 0004859e 331c
.org 0x485a0
	adds r3, #74	@ 000485a0 4a33
.org 0x485a2
	lsls r1, r1, #4	@ 000485a2 0901
.org 0x485a4
	ldrb r2, [r3, #0]	@ 000485a4 1a78
.org 0x485a6
	movs r0, #17	@ 000485a6 1120
.org 0x485a8
	negs r0, r0	@ 000485a8 4042
.org 0x485aa
	ands r0, r2	@ 000485aa 1040
.org 0x485ac
	orrs r0, r1	@ 000485ac 0843
.org 0x485ae
	strb r0, [r3, #0]	@ 000485ae 1870
.org 0x485b0
	ldr r1, [pc, #20]	@ 000485b0 0549
.org 0x485b2
	ldrb r0, [r6, #17]	@ 000485b2 707c
.org 0x485b4
	adds r0, r0, r1	@ 000485b4 4018
.org 0x485b6
	ldrb r2, [r0, #0]	@ 000485b6 0278
.org 0x485b8
	adds r4, r3, #0	@ 000485b8 1c1c
.org 0x485ba
	cmp r2, #0	@ 000485ba 002a
.org 0x485bc
	beq.n 0x485cc	@ 000485bc 06d0
.org 0x485be
	ldrb r0, [r6, #10]	@ 000485be b07a
.org 0x485c0
	movs r1, #32	@ 000485c0 2021
.org 0x485c2
	orrs r0, r1	@ 000485c2 0843
.org 0x485c4
	b.n 0x485d2	@ 000485c4 05e0
.org 0x485c6
	.byte 0x00	@ 000485c6 data
.org 0x485c7
	.byte 0x00	@ 000485c7 data
.org 0x485c8
	.byte 0x6c,0x70,0x85,0x08	@ 000485c8 data
.org 0x485cc
	ldrb r1, [r6, #10]	@ 000485cc b17a
.org 0x485ce
	movs r0, #223	@ 000485ce df20
.org 0x485d0
	ands r0, r1	@ 000485d0 0840
.org 0x485d2
	strb r0, [r6, #10]	@ 000485d2 b072
.org 0x485d4
	movs r3, #1	@ 000485d4 0123
.org 0x485d6
	adds r1, r3, #0	@ 000485d6 191c
.org 0x485d8
	ands r1, r2	@ 000485d8 1140
.org 0x485da
	adds r0, r6, #0	@ 000485da 301c
.org 0x485dc
	adds r0, #77	@ 000485dc 4d30
.org 0x485de
	strb r1, [r0, #0]	@ 000485de 0170
.org 0x485e0
	lsls r1, r1, #5	@ 000485e0 4901
.org 0x485e2
	ldrb r2, [r4, #0]	@ 000485e2 2278
.org 0x485e4
	movs r0, #33	@ 000485e4 2120
.org 0x485e6
	negs r0, r0	@ 000485e6 4042
.org 0x485e8
	ands r0, r2	@ 000485e8 1040
.org 0x485ea
	orrs r0, r1	@ 000485ea 0843
.org 0x485ec
	strb r0, [r4, #0]	@ 000485ec 2070
.org 0x485ee
	ldr r1, [pc, #60]	@ 000485ee 0f49
.org 0x485f0
	ldrb r0, [r6, #17]	@ 000485f0 707c
.org 0x485f2
	lsls r0, r0, #29	@ 000485f2 4007
.org 0x485f4
	movs r2, #128	@ 000485f4 8022
.org 0x485f6
	lsls r2, r2, #23	@ 000485f6 d205
.org 0x485f8
	adds r0, r0, r2	@ 000485f8 8018
.org 0x485fa
	lsrs r0, r0, #23	@ 000485fa c00d
.org 0x485fc
	adds r0, r0, r1	@ 000485fc 4018
.org 0x485fe
	movs r2, #0	@ 000485fe 0022
.org 0x48600
	ldrsh r0, [r0, r2]	@ 00048600 805e
.org 0x48602
	lsls r0, r0, #2	@ 00048602 8000
.org 0x48604
	str r0, [r6, #92]	@ 00048604 f065
.org 0x48606
	ldrb r0, [r6, #17]	@ 00048606 707c
.org 0x48608
	lsls r0, r0, #29	@ 00048608 4007
.org 0x4860a
	lsrs r0, r0, #23	@ 0004860a c00d
.org 0x4860c
	adds r0, r0, r1	@ 0004860c 4018
.org 0x4860e
	movs r1, #0	@ 0004860e 0021
.org 0x48610
	ldrsh r0, [r0, r1]	@ 00048610 405e
.org 0x48612
	lsls r0, r0, #2	@ 00048612 8000
.org 0x48614
	str r0, [r6, #96]	@ 00048614 3066
