@ FUN_080db588  entry 0x080db588  size 150
.thumb
.org 0xdb588
FUN_080db588:
	push {r4, r5, lr}	@ 000db588 30b5
.org 0xdb58a
	adds r5, r0, #0	@ 000db58a 051c
.org 0xdb58c
	bl 0x1cd28	@ 000db58c 41f7ccfb
.org 0xdb590
	ldrb r1, [r5, #10]	@ 000db590 a97a
.org 0xdb592
	movs r0, #1	@ 000db592 0120
.org 0xdb594
	movs r4, #0	@ 000db594 0024
.org 0xdb596
	orrs r0, r1	@ 000db596 0843
.org 0xdb598
	movs r1, #2	@ 000db598 0221
.org 0xdb59a
	orrs r0, r1	@ 000db59a 0843
.org 0xdb59c
	strb r0, [r5, #10]	@ 000db59c a872
.org 0xdb59e
	adds r0, r5, #0	@ 000db59e 281c
.org 0xdb5a0
	movs r1, #0	@ 000db5a0 0021
.org 0xdb5a2
	bl 0x1cf00	@ 000db5a2 41f7adfc
.org 0xdb5a6
	adds r0, r5, #0	@ 000db5a6 281c
.org 0xdb5a8
	bl 0x1cff0	@ 000db5a8 41f722fd
.org 0xdb5ac
	adds r0, r5, #0	@ 000db5ac 281c
.org 0xdb5ae
	adds r0, #124	@ 000db5ae 7c30
.org 0xdb5b0
	ldrb r2, [r0, #0]	@ 000db5b0 0278
.org 0xdb5b2
	cmp r2, #0	@ 000db5b2 002a
.org 0xdb5b4
	beq.n 0xdb5be	@ 000db5b4 03d0
.org 0xdb5b6
	ldrb r0, [r5, #10]	@ 000db5b6 a87a
.org 0xdb5b8
	movs r1, #16	@ 000db5b8 1021
.org 0xdb5ba
	orrs r0, r1	@ 000db5ba 0843
.org 0xdb5bc
	b.n 0xdb5c4	@ 000db5bc 02e0
.org 0xdb5be
	ldrb r1, [r5, #10]	@ 000db5be a97a
.org 0xdb5c0
	movs r0, #239	@ 000db5c0 ef20
.org 0xdb5c2
	ands r0, r1	@ 000db5c2 0840
.org 0xdb5c4
	strb r0, [r5, #10]	@ 000db5c4 a872
.org 0xdb5c6
	movs r3, #1	@ 000db5c6 0123
.org 0xdb5c8
	adds r1, r3, #0	@ 000db5c8 191c
.org 0xdb5ca
	ands r1, r2	@ 000db5ca 1140
.org 0xdb5cc
	adds r0, r5, #0	@ 000db5cc 281c
.org 0xdb5ce
	adds r0, #76	@ 000db5ce 4c30
.org 0xdb5d0
	movs r4, #0	@ 000db5d0 0024
.org 0xdb5d2
	strb r1, [r0, #0]	@ 000db5d2 0170
.org 0xdb5d4
	movs r0, #74	@ 000db5d4 4a20
.org 0xdb5d6
	adds r0, r0, r5	@ 000db5d6 4019
.org 0xdb5d8
	mov ip, r0	@ 000db5d8 8446
.org 0xdb5da
	lsls r1, r1, #4	@ 000db5da 0901
.org 0xdb5dc
	ldrb r2, [r0, #0]	@ 000db5dc 0278
.org 0xdb5de
	movs r0, #17	@ 000db5de 1120
.org 0xdb5e0
	negs r0, r0	@ 000db5e0 4042
.org 0xdb5e2
	ands r0, r2	@ 000db5e2 1040
.org 0xdb5e4
	orrs r0, r1	@ 000db5e4 0843
.org 0xdb5e6
	mov r1, ip	@ 000db5e6 6146
.org 0xdb5e8
	strb r0, [r1, #0]	@ 000db5e8 0870
.org 0xdb5ea
	adds r1, r5, #0	@ 000db5ea 291c
.org 0xdb5ec
	adds r1, #37	@ 000db5ec 2531
.org 0xdb5ee
	movs r0, #25	@ 000db5ee 1920
.org 0xdb5f0
	strb r0, [r1, #0]	@ 000db5f0 0870
.org 0xdb5f2
	ldr r0, [r5, #84]	@ 000db5f2 686d
.org 0xdb5f4
	str r0, [r5, #116]	@ 000db5f4 6867
.org 0xdb5f6
	ldr r0, [r5, #88]	@ 000db5f6 a86d
.org 0xdb5f8
	adds r0, #1	@ 000db5f8 0130
.org 0xdb5fa
	str r0, [r5, #120]	@ 000db5fa a867
.org 0xdb5fc
	strb r4, [r5, #18]	@ 000db5fc ac74
.org 0xdb5fe
	strb r3, [r5, #19]	@ 000db5fe eb74
.org 0xdb600
	str r4, [r5, #96]	@ 000db600 2c66
.org 0xdb602
	ldr r1, [pc, #28]	@ 000db602 0749
.org 0xdb604
	ldrb r0, [r5, #9]	@ 000db604 687a
.org 0xdb606
	lsls r0, r0, #2	@ 000db606 8000
.org 0xdb608
	adds r0, r0, r1	@ 000db608 4018
.org 0xdb60a
	str r3, [r5, #12]	@ 000db60a eb60
.org 0xdb60c
	ldr r0, [r0, #0]	@ 000db60c 0068
.org 0xdb60e
	ldr r0, [r0, #4]	@ 000db60e 4068
.org 0xdb610
	str r0, [r5, #20]	@ 000db610 6861
.org 0xdb612
	adds r0, r5, #0	@ 000db612 281c
.org 0xdb614
	bl 0xdb624	@ 000db614 00f006f8
.org 0xdb618
	pop {r4, r5}	@ 000db618 30bc
.org 0xdb61a
	pop {r0}	@ 000db61a 01bc
.org 0xdb61c
	bx r0	@ 000db61c 0047
