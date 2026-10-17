@ FUN_08012470  entry 0x08012470  size 276
.thumb
.org 0x12470
FUN_08012470:
	push {r4, r5, r6, r7, lr}	@ 00012470 f0b5
.org 0x12472
	mov r7, r8	@ 00012472 4746
.org 0x12474
	push {r7}	@ 00012474 80b4
.org 0x12476
	mov r8, r0	@ 00012476 8046
.org 0x12478
	movs r4, #159	@ 00012478 9f24
.org 0x1247a
	movs r0, #160	@ 0001247a a020
.org 0x1247c
	lsls r0, r0, #2	@ 0001247c 8000
.org 0x1247e
	bl 0xa70	@ 0001247e eef7f7fa
.org 0x12482
	adds r7, r0, #0	@ 00012482 071c
.org 0x12484
	cmp r7, #0	@ 00012484 002f
.org 0x12486
	beq.n 0x1257a	@ 00012486 78d0
.org 0x12488
	ldr r2, [pc, #248]	@ 00012488 3e4a
.org 0x1248a
	movs r1, #186	@ 0001248a ba21
.org 0x1248c
	lsls r1, r1, #1	@ 0001248c 4900
.org 0x1248e
	adds r0, r2, r1	@ 0001248e 5018
.org 0x12490
	str r7, [r0, #0]	@ 00012490 0760
.org 0x12492
	movs r0, #188	@ 00012492 bc20
.org 0x12494
	lsls r0, r0, #1	@ 00012494 4000
.org 0x12496
	adds r1, r2, r0	@ 00012496 1118
.org 0x12498
	ldr r0, [pc, #236]	@ 00012498 3b48
.org 0x1249a
	str r0, [r1, #0]	@ 0001249a 0860
.org 0x1249c
	movs r0, #190	@ 0001249c be20
.org 0x1249e
	lsls r0, r0, #1	@ 0001249e 4000
.org 0x124a0
	adds r1, r2, r0	@ 000124a0 1118
.org 0x124a2
	ldr r0, [pc, #232]	@ 000124a2 3a48
.org 0x124a4
	str r0, [r1, #0]	@ 000124a4 0860
.org 0x124a6
	mov r1, r8	@ 000124a6 4146
.org 0x124a8
	ldr r0, [r1, #52]	@ 000124a8 486b
.org 0x124aa
	lsls r0, r0, #15	@ 000124aa c003
.org 0x124ac
	lsrs r1, r0, #16	@ 000124ac 010c
.org 0x124ae
	mov r2, r8	@ 000124ae 4246
.org 0x124b0
	ldr r0, [r2, #56]	@ 000124b0 906b
.org 0x124b2
	ldr r2, [pc, #220]	@ 000124b2 374a
.org 0x124b4
	adds r0, r0, r2	@ 000124b4 8018
.org 0x124b6
	lsls r0, r0, #16	@ 000124b6 0004
.org 0x124b8
	lsrs r6, r0, #16	@ 000124b8 060c
.org 0x124ba
	lsls r3, r6, #16	@ 000124ba 3304
.org 0x124bc
	asrs r0, r3, #16	@ 000124bc 1814
.org 0x124be
	adds r0, #159	@ 000124be 9f30
.org 0x124c0
	cmp r0, #71	@ 000124c0 4728
.org 0x124c2
	ble.n 0x124e2	@ 000124c2 0edd
.org 0x124c4
	adds r5, r1, #0	@ 000124c4 0d1c
.org 0x124c6
	movs r0, #159	@ 000124c6 9f20
.org 0x124c8
	lsls r0, r0, #2	@ 000124c8 8000
.org 0x124ca
	adds r2, r7, r0	@ 000124ca 3a18
.org 0x124cc
	asrs r1, r3, #16	@ 000124cc 1914
.org 0x124ce
	adds r0, r3, #0	@ 000124ce 181c
.org 0x124d0
	orrs r0, r5	@ 000124d0 2843
.org 0x124d2
	str r0, [r2, #0]	@ 000124d2 1060
.org 0x124d4
	subs r2, #4	@ 000124d4 043a
.org 0x124d6
	subs r4, #1	@ 000124d6 013c
.org 0x124d8
	adds r1, r1, r4	@ 000124d8 0919
.org 0x124da
	cmp r1, #71	@ 000124da 4729
.org 0x124dc
	ble.n 0x124e2	@ 000124dc 01dd
.org 0x124de
	cmp r4, #0	@ 000124de 002c
.org 0x124e0
	bge.n 0x124cc	@ 000124e0 f4da
.org 0x124e2
	mov r1, r8	@ 000124e2 4146
.org 0x124e4
	ldr r0, [r1, #52]	@ 000124e4 486b
.org 0x124e6
	lsls r0, r0, #14	@ 000124e6 8003
.org 0x124e8
	lsrs r1, r0, #16	@ 000124e8 010c
.org 0x124ea
	lsls r3, r6, #16	@ 000124ea 3304
.org 0x124ec
	asrs r0, r3, #16	@ 000124ec 1814
.org 0x124ee
	adds r0, r0, r4	@ 000124ee 0019
.org 0x124f0
	adds r6, r3, #0	@ 000124f0 1e1c
.org 0x124f2
	cmp r0, #55	@ 000124f2 3728
.org 0x124f4
	ble.n 0x12516	@ 000124f4 0fdd
.org 0x124f6
	cmp r4, #0	@ 000124f6 002c
.org 0x124f8
	blt.n 0x12516	@ 000124f8 0ddb
.org 0x124fa
	adds r5, r1, #0	@ 000124fa 0d1c
.org 0x124fc
	lsls r0, r4, #2	@ 000124fc a000
.org 0x124fe
	adds r2, r0, r7	@ 000124fe c219
.org 0x12500
	asrs r1, r3, #16	@ 00012500 1914
.org 0x12502
	adds r0, r3, #0	@ 00012502 181c
.org 0x12504
	orrs r0, r5	@ 00012504 2843
.org 0x12506
	str r0, [r2, #0]	@ 00012506 1060
.org 0x12508
	subs r2, #4	@ 00012508 043a
.org 0x1250a
	subs r4, #1	@ 0001250a 013c
.org 0x1250c
	adds r1, r1, r4	@ 0001250c 0919
.org 0x1250e
	cmp r1, #55	@ 0001250e 3729
.org 0x12510
	ble.n 0x12516	@ 00012510 01dd
.org 0x12512
	cmp r4, #0	@ 00012512 002c
.org 0x12514
	bge.n 0x12500	@ 00012514 f4da
.org 0x12516
	mov r2, r8	@ 00012516 4246
.org 0x12518
	ldr r0, [r2, #52]	@ 00012518 506b
.org 0x1251a
	lsls r0, r0, #13	@ 0001251a 4003
.org 0x1251c
	lsrs r1, r0, #16	@ 0001251c 010c
.org 0x1251e
	adds r3, r6, #0	@ 0001251e 331c
.org 0x12520
	asrs r0, r6, #16	@ 00012520 3014
.org 0x12522
	adds r0, r0, r4	@ 00012522 0019
.org 0x12524
	cmp r0, #47	@ 00012524 2f28
.org 0x12526
	ble.n 0x12548	@ 00012526 0fdd
.org 0x12528
	cmp r4, #0	@ 00012528 002c
.org 0x1252a
	blt.n 0x12548	@ 0001252a 0ddb
.org 0x1252c
	adds r5, r1, #0	@ 0001252c 0d1c
.org 0x1252e
	lsls r0, r4, #2	@ 0001252e a000
.org 0x12530
	adds r2, r0, r7	@ 00012530 c219
.org 0x12532
	asrs r1, r3, #16	@ 00012532 1914
.org 0x12534
	adds r0, r3, #0	@ 00012534 181c
.org 0x12536
	orrs r0, r5	@ 00012536 2843
.org 0x12538
	str r0, [r2, #0]	@ 00012538 1060
.org 0x1253a
	subs r2, #4	@ 0001253a 043a
.org 0x1253c
	subs r4, #1	@ 0001253c 013c
.org 0x1253e
	adds r1, r1, r4	@ 0001253e 0919
.org 0x12540
	cmp r1, #47	@ 00012540 2f29
.org 0x12542
	ble.n 0x12548	@ 00012542 01dd
.org 0x12544
	cmp r4, #0	@ 00012544 002c
.org 0x12546
	bge.n 0x12532	@ 00012546 f4da
.org 0x12548
	mov r1, r8	@ 00012548 4146
.org 0x1254a
	ldr r0, [r1, #52]	@ 0001254a 486b
.org 0x1254c
	lsls r0, r0, #12	@ 0001254c 0003
.org 0x1254e
	lsrs r1, r0, #16	@ 0001254e 010c
.org 0x12550
	adds r3, r6, #0	@ 00012550 331c
.org 0x12552
	asrs r0, r3, #16	@ 00012552 1814
.org 0x12554
	adds r0, r0, r4	@ 00012554 0019
.org 0x12556
	cmp r0, #0	@ 00012556 0028
.org 0x12558
	blt.n 0x1257a	@ 00012558 0fdb
.org 0x1255a
	cmp r4, #0	@ 0001255a 002c
.org 0x1255c
	blt.n 0x1257a	@ 0001255c 0ddb
.org 0x1255e
	adds r5, r1, #0	@ 0001255e 0d1c
.org 0x12560
	lsls r0, r4, #2	@ 00012560 a000
.org 0x12562
	adds r2, r0, r7	@ 00012562 c219
.org 0x12564
	asrs r1, r3, #16	@ 00012564 1914
.org 0x12566
	adds r0, r3, #0	@ 00012566 181c
.org 0x12568
	orrs r0, r5	@ 00012568 2843
.org 0x1256a
	str r0, [r2, #0]	@ 0001256a 1060
.org 0x1256c
	subs r2, #4	@ 0001256c 043a
.org 0x1256e
	subs r4, #1	@ 0001256e 013c
.org 0x12570
	adds r1, r1, r4	@ 00012570 0919
.org 0x12572
	cmp r1, #0	@ 00012572 0029
.org 0x12574
	blt.n 0x1257a	@ 00012574 01db
.org 0x12576
	cmp r4, #0	@ 00012576 002c
.org 0x12578
	bge.n 0x12564	@ 00012578 f4da
.org 0x1257a
	pop {r3}	@ 0001257a 08bc
.org 0x1257c
	mov r8, r3	@ 0001257c 9846
.org 0x1257e
	pop {r4, r5, r6, r7}	@ 0001257e f0bc
.org 0x12580
	pop {r0}	@ 00012580 01bc
.org 0x12582
	bx r0	@ 00012582 0047
