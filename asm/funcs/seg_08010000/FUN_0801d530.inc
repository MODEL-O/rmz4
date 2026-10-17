@ FUN_0801d530  entry 0x0801d530  size 128
.thumb
.org 0x1d530
FUN_0801d530:
	push {r4, r5, lr}	@ 0001d530 30b5
.org 0x1d532
	lsls r0, r0, #24	@ 0001d532 0006
.org 0x1d534
	lsrs r5, r0, #24	@ 0001d534 050e
.org 0x1d536
	lsls r1, r1, #24	@ 0001d536 0906
.org 0x1d538
	lsrs r1, r1, #24	@ 0001d538 090e
.org 0x1d53a
	ldr r4, [pc, #116]	@ 0001d53a 1d4c
.org 0x1d53c
	ldr r2, [pc, #116]	@ 0001d53c 1d4a
.org 0x1d53e
	adds r0, r4, r2	@ 0001d53e a018
.org 0x1d540
	movs r2, #0	@ 0001d540 0022
.org 0x1d542
	strh r1, [r0, #0]	@ 0001d542 0180
.org 0x1d544
	ldr r1, [pc, #112]	@ 0001d544 1c49
.org 0x1d546
	adds r0, r4, r1	@ 0001d546 6018
.org 0x1d548
	strh r2, [r0, #0]	@ 0001d548 0280
.org 0x1d54a
	adds r1, #2	@ 0001d54a 0231
.org 0x1d54c
	adds r0, r4, r1	@ 0001d54c 6018
.org 0x1d54e
	strb r5, [r0, #0]	@ 0001d54e 0570
.org 0x1d550
	ldr r0, [pc, #104]	@ 0001d550 1a48
.org 0x1d552
	adds r1, r4, r0	@ 0001d552 2118
.org 0x1d554
	movs r0, #1	@ 0001d554 0120
.org 0x1d556
	strh r0, [r1, #0]	@ 0001d556 0880
.org 0x1d558
	ldr r0, [pc, #100]	@ 0001d558 1948
.org 0x1d55a
	adds r1, r4, r0	@ 0001d55a 2118
.org 0x1d55c
	ldr r0, [pc, #100]	@ 0001d55c 1948
.org 0x1d55e
	str r0, [r1, #0]	@ 0001d55e 0860
.org 0x1d560
	movs r0, #140	@ 0001d560 8c20
.org 0x1d562
	lsls r0, r0, #3	@ 0001d562 c000
.org 0x1d564
	adds r1, r4, r0	@ 0001d564 2118
.org 0x1d566
	ldr r0, [pc, #96]	@ 0001d566 1848
.org 0x1d568
	str r0, [r1, #0]	@ 0001d568 0860
.org 0x1d56a
	ldr r0, [pc, #96]	@ 0001d56a 1848
.org 0x1d56c
	adds r1, r4, r0	@ 0001d56c 2118
.org 0x1d56e
	movs r0, #255	@ 0001d56e ff20
.org 0x1d570
	strb r0, [r1, #0]	@ 0001d570 0870
.org 0x1d572
	ldr r1, [pc, #92]	@ 0001d572 1749
.org 0x1d574
	adds r0, r4, r1	@ 0001d574 6018
.org 0x1d576
	strh r2, [r0, #0]	@ 0001d576 0280
.org 0x1d578
	bl 0x1e17c	@ 0001d578 00f000fe
.org 0x1d57c
	movs r1, #1	@ 0001d57c 0121
.org 0x1d57e
	negs r1, r1	@ 0001d57e 4942
.org 0x1d580
	adds r3, r4, #0	@ 0001d580 231c
.org 0x1d582
	adds r0, r3, #0	@ 0001d582 181c
.org 0x1d584
	adds r0, #128	@ 0001d584 8030
.org 0x1d586
	str r1, [r0, #0]	@ 0001d586 0160
.org 0x1d588
	subs r0, #4	@ 0001d588 0438
.org 0x1d58a
	cmp r0, r4	@ 0001d58a a042
.org 0x1d58c
	bge.n 0x1d586	@ 0001d58c fbda
.org 0x1d58e
	ldr r0, [pc, #68]	@ 0001d58e 1148
.org 0x1d590
	adds r2, r3, r0	@ 0001d590 1a18
.org 0x1d592
	ldr r0, [pc, #68]	@ 0001d592 1148
.org 0x1d594
	lsls r1, r5, #2	@ 0001d594 a900
.org 0x1d596
	adds r0, r1, r0	@ 0001d596 0818
.org 0x1d598
	ldr r0, [r0, #0]	@ 0001d598 0068
.org 0x1d59a
	str r0, [r2, #0]	@ 0001d59a 1060
.org 0x1d59c
	movs r0, #139	@ 0001d59c 8b20
.org 0x1d59e
	lsls r0, r0, #3	@ 0001d59e c000
.org 0x1d5a0
	adds r2, r3, r0	@ 0001d5a0 1a18
.org 0x1d5a2
	ldr r0, [pc, #56]	@ 0001d5a2 0e48
.org 0x1d5a4
	adds r1, r1, r0	@ 0001d5a4 0918
.org 0x1d5a6
	ldr r0, [r1, #0]	@ 0001d5a6 0868
.org 0x1d5a8
	str r0, [r2, #0]	@ 0001d5a8 1060
.org 0x1d5aa
	pop {r4, r5}	@ 0001d5aa 30bc
.org 0x1d5ac
	pop {r0}	@ 0001d5ac 01bc
.org 0x1d5ae
	bx r0	@ 0001d5ae 0047
