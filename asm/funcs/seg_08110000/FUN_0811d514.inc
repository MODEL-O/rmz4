@ FUN_0811d514  entry 0x0811d514  size 158
.thumb
.org 0x11d514
FUN_0811d514:
	push {r4, r5, r6, r7, lr}	@ 0011d514 f0b5
.org 0x11d516
	sub sp, #4	@ 0011d516 81b0
.org 0x11d518
	adds r5, r0, #0	@ 0011d518 051c
.org 0x11d51a
	ldr r0, [pc, #152]	@ 0011d51a 2648
.org 0x11d51c
	adds r4, r5, r0	@ 0011d51c 2c18
.org 0x11d51e
	ldr r1, [pc, #152]	@ 0011d51e 2649
.org 0x11d520
	movs r0, #0	@ 0011d520 0020
.org 0x11d522
	str r0, [sp, #0]	@ 0011d522 0090
.org 0x11d524
	adds r0, r4, #0	@ 0011d524 201c
.org 0x11d526
	movs r2, #133	@ 0011d526 8522
.org 0x11d528
	movs r3, #0	@ 0011d528 0023
.org 0x11d52a
	bl 0x27b8	@ 0011d52a e5f645f9
.org 0x11d52e
	mov ip, r4	@ 0011d52e a446
.org 0x11d530
	movs r4, #0	@ 0011d530 0024
.org 0x11d532
	movs r1, #128	@ 0011d532 8021
.org 0x11d534
	lsls r1, r1, #6	@ 0011d534 8901
.org 0x11d536
	adds r6, r1, #0	@ 0011d536 0e1c
.org 0x11d538
	ldr r2, [pc, #128]	@ 0011d538 204a
.org 0x11d53a
	adds r0, r5, r2	@ 0011d53a a818
.org 0x11d53c
	adds r1, r0, r4	@ 0011d53c 0119
.org 0x11d53e
	ldrb r0, [r1, #0]	@ 0011d53e 0878
.org 0x11d540
	cmp r0, #255	@ 0011d540 ff28
.org 0x11d542
	beq.n 0x11d588	@ 0011d542 21d0
.org 0x11d544
	adds r2, r0, #0	@ 0011d544 021c
.org 0x11d546
	ldr r0, [pc, #120]	@ 0011d546 1e48
.org 0x11d548
	ldr r0, [r0, #0]	@ 0011d548 0068
.org 0x11d54a
	lsrs r1, r2, #1	@ 0011d54a 5108
.org 0x11d54c
	adds r0, r0, r1	@ 0011d54c 4018
.org 0x11d54e
	ldrb r1, [r0, #0]	@ 0011d54e 0178
.org 0x11d550
	movs r0, #1	@ 0011d550 0120
.org 0x11d552
	ands r2, r0	@ 0011d552 0240
.org 0x11d554
	lsls r2, r2, #2	@ 0011d554 9200
.org 0x11d556
	asrs r1, r2	@ 0011d556 1141
.org 0x11d558
	movs r0, #15	@ 0011d558 0f20
.org 0x11d55a
	ands r1, r0	@ 0011d55a 0140
.org 0x11d55c
	lsls r0, r4, #7	@ 0011d55c e001
.org 0x11d55e
	mov r7, ip	@ 0011d55e 6746
.org 0x11d560
	adds r3, r0, r7	@ 0011d560 c319
.org 0x11d562
	adds r2, r3, #0	@ 0011d562 1a1c
.org 0x11d564
	adds r2, #154	@ 0011d564 9a32
.org 0x11d566
	ldr r7, [pc, #92]	@ 0011d566 174f
.org 0x11d568
	adds r0, r7, #0	@ 0011d568 381c
.org 0x11d56a
	strh r0, [r2, #0]	@ 0011d56a 1080
.org 0x11d56c
	adds r2, #64	@ 0011d56c 4032
.org 0x11d56e
	adds r7, #32	@ 0011d56e 2037
.org 0x11d570
	adds r0, r7, #0	@ 0011d570 381c
.org 0x11d572
	strh r0, [r2, #0]	@ 0011d572 1080
.org 0x11d574
	subs r2, #62	@ 0011d574 3e3a
.org 0x11d576
	adds r0, r1, #0	@ 0011d576 081c
.org 0x11d578
	adds r0, #75	@ 0011d578 4b30
.org 0x11d57a
	orrs r0, r6	@ 0011d57a 3043
.org 0x11d57c
	strh r0, [r2, #0]	@ 0011d57c 1080
.org 0x11d57e
	adds r0, r3, #0	@ 0011d57e 181c
.org 0x11d580
	adds r0, #220	@ 0011d580 dc30
.org 0x11d582
	adds r1, #107	@ 0011d582 6b31
.org 0x11d584
	orrs r1, r6	@ 0011d584 3143
.org 0x11d586
	strh r1, [r0, #0]	@ 0011d586 0180
.org 0x11d588
	adds r0, r4, #1	@ 0011d588 601c
.org 0x11d58a
	lsls r0, r0, #24	@ 0011d58a 0006
.org 0x11d58c
	lsrs r4, r0, #24	@ 0011d58c 040e
.org 0x11d58e
	cmp r4, #6	@ 0011d58e 062c
.org 0x11d590
	bls.n 0x11d538	@ 0011d590 d2d9
.org 0x11d592
	ldr r1, [pc, #32]	@ 0011d592 0849
.org 0x11d594
	adds r0, r5, r1	@ 0011d594 6818
.org 0x11d596
	ldr r1, [pc, #48]	@ 0011d596 0c49
.org 0x11d598
	ldrh r2, [r1, #0]	@ 0011d598 0a88
.org 0x11d59a
	movs r1, #248	@ 0011d59a f821
.org 0x11d59c
	lsls r1, r1, #5	@ 0011d59c 4901
.org 0x11d59e
	ands r1, r2	@ 0011d59e 1140
.org 0x11d5a0
	lsls r1, r1, #3	@ 0011d5a0 c900
.org 0x11d5a2
	movs r2, #128	@ 0011d5a2 8022
.org 0x11d5a4
	lsls r2, r2, #5	@ 0011d5a4 5201
.org 0x11d5a6
	bl 0x1f1c	@ 0011d5a6 e4f6b9fc
.org 0x11d5aa
	add sp, #4	@ 0011d5aa 01b0
.org 0x11d5ac
	pop {r4, r5, r6, r7}	@ 0011d5ac f0bc
.org 0x11d5ae
	pop {r0}	@ 0011d5ae 01bc
.org 0x11d5b0
	bx r0	@ 0011d5b0 0047
