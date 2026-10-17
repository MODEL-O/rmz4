@ FUN_0803b594  entry 0x0803b594  size 204
.thumb
.org 0x3b594
FUN_0803b594:
	push {r4, r5, r6, r7, lr}	@ 0003b594 f0b5
.org 0x3b596
	mov r7, r8	@ 0003b596 4746
.org 0x3b598
	push {r7}	@ 0003b598 80b4
.org 0x3b59a
	sub sp, #8	@ 0003b59a 82b0
.org 0x3b59c
	adds r5, r0, #0	@ 0003b59c 051c
.org 0x3b59e
	adds r0, #180	@ 0003b59e b430
.org 0x3b5a0
	ldr r7, [r0, #0]	@ 0003b5a0 0768
.org 0x3b5a2
	adds r0, r5, #0	@ 0003b5a2 281c
.org 0x3b5a4
	bl 0x1cc9c	@ 0003b5a4 e1f77afb
.org 0x3b5a8
	adds r0, r5, #0	@ 0003b5a8 281c
.org 0x3b5aa
	bl 0x1ceec	@ 0003b5aa e1f79ffc
.org 0x3b5ae
	ldrb r1, [r5, #10]	@ 0003b5ae a97a
.org 0x3b5b0
	movs r0, #1	@ 0003b5b0 0120
.org 0x3b5b2
	orrs r0, r1	@ 0003b5b2 0843
.org 0x3b5b4
	movs r1, #2	@ 0003b5b4 0221
.org 0x3b5b6
	orrs r0, r1	@ 0003b5b6 0843
.org 0x3b5b8
	strb r0, [r5, #10]	@ 0003b5b8 a872
.org 0x3b5ba
	movs r1, #160	@ 0003b5ba a021
.org 0x3b5bc
	lsls r1, r1, #7	@ 0003b5bc c901
.org 0x3b5be
	adds r0, r5, #0	@ 0003b5be 281c
.org 0x3b5c0
	bl 0x1cf00	@ 0003b5c0 e1f79efc
.org 0x3b5c4
	movs r0, #22	@ 0003b5c4 1620
.org 0x3b5c6
	bl 0x2b10	@ 0003b5c6 c7f7a3fa
.org 0x3b5ca
	ldrb r1, [r5, #10]	@ 0003b5ca a97a
.org 0x3b5cc
	movs r0, #16	@ 0003b5cc 1020
.org 0x3b5ce
	ands r0, r1	@ 0003b5ce 0840
.org 0x3b5d0
	lsls r0, r0, #24	@ 0003b5d0 0006
.org 0x3b5d2
	lsrs r1, r0, #24	@ 0003b5d2 010e
.org 0x3b5d4
	cmp r1, #0	@ 0003b5d4 0029
.org 0x3b5d6
	beq.n 0x3b5e4	@ 0003b5d6 05d0
.org 0x3b5d8
	movs r0, #152	@ 0003b5d8 9820
.org 0x3b5da
	lsls r0, r0, #3	@ 0003b5da c000
.org 0x3b5dc
	str r0, [r5, #92]	@ 0003b5dc e865
.org 0x3b5de
	movs r0, #0	@ 0003b5de 0020
.org 0x3b5e0
	str r0, [r5, #96]	@ 0003b5e0 2866
.org 0x3b5e2
	b.n 0x3b5ea	@ 0003b5e2 02e0
.org 0x3b5e4
	ldr r0, [pc, #120]	@ 0003b5e4 1e48
.org 0x3b5e6
	str r0, [r5, #92]	@ 0003b5e6 e865
.org 0x3b5e8
	str r1, [r5, #96]	@ 0003b5e8 2966
.org 0x3b5ea
	ldrb r1, [r5, #10]	@ 0003b5ea a97a
.org 0x3b5ec
	movs r0, #4	@ 0003b5ec 0420
.org 0x3b5ee
	movs r4, #0	@ 0003b5ee 0024
.org 0x3b5f0
	orrs r0, r1	@ 0003b5f0 0843
.org 0x3b5f2
	strb r0, [r5, #10]	@ 0003b5f2 a872
.org 0x3b5f4
	adds r6, r5, #0	@ 0003b5f4 2e1c
.org 0x3b5f6
	adds r6, #116	@ 0003b5f6 7436
.org 0x3b5f8
	ldr r0, [pc, #104]	@ 0003b5f8 1a48
.org 0x3b5fa
	mov r8, r0	@ 0003b5fa 8046
.org 0x3b5fc
	adds r2, r5, #0	@ 0003b5fc 2a1c
.org 0x3b5fe
	adds r2, #84	@ 0003b5fe 5432
.org 0x3b600
	adds r0, r6, #0	@ 0003b600 301c
.org 0x3b602
	mov r1, r8	@ 0003b602 4146
.org 0x3b604
	movs r3, #1	@ 0003b604 0123
.org 0x3b606
	bl 0x5760	@ 0003b606 caf7abf8
.org 0x3b60a
	str r5, [r6, #44]	@ 0003b60a f562
.org 0x3b60c
	str r4, [r6, #36]	@ 0003b60c 7462
.org 0x3b60e
	adds r0, r5, #0	@ 0003b60e 281c
.org 0x3b610
	adds r0, #180	@ 0003b610 b430
.org 0x3b612
	ldr r0, [r0, #0]	@ 0003b612 0068
.org 0x3b614
	ldr r1, [r0, #12]	@ 0003b614 c168
.org 0x3b616
	ldr r0, [pc, #80]	@ 0003b616 1448
.org 0x3b618
	ands r1, r0	@ 0003b618 0140
.org 0x3b61a
	movs r0, #128	@ 0003b61a 8020
.org 0x3b61c
	lsls r0, r0, #10	@ 0003b61c 8002
.org 0x3b61e
	movs r4, #2	@ 0003b61e 0224
.org 0x3b620
	cmp r1, r0	@ 0003b620 8142
.org 0x3b622
	bne.n 0x3b626	@ 0003b622 00d1
.org 0x3b624
	movs r4, #3	@ 0003b624 0324
.org 0x3b626
	adds r0, r7, #0	@ 0003b626 381c
.org 0x3b628
	bl 0x3a4a8	@ 0003b628 fef73eff
.org 0x3b62c
	adds r0, r4, r0	@ 0003b62c 2018
.org 0x3b62e
	lsls r0, r0, #24	@ 0003b62e 0006
.org 0x3b630
	lsrs r4, r0, #24	@ 0003b630 040e
.org 0x3b632
	adds r0, r7, #0	@ 0003b632 381c
.org 0x3b634
	bl 0x38a78	@ 0003b634 fdf720fa
.org 0x3b638
	lsls r0, r0, #24	@ 0003b638 0006
.org 0x3b63a
	cmp r0, #0	@ 0003b63a 0028
.org 0x3b63c
	beq.n 0x3b642	@ 0003b63c 01d0
.org 0x3b63e
	lsls r0, r4, #25	@ 0003b63e 6006
.org 0x3b640
	lsrs r4, r0, #24	@ 0003b640 040e
.org 0x3b642
	movs r3, #1	@ 0003b642 0123
.org 0x3b644
	negs r3, r3	@ 0003b644 5b42
.org 0x3b646
	str r3, [sp, #0]	@ 0003b646 0093
.org 0x3b648
	str r3, [sp, #4]	@ 0003b648 0193
.org 0x3b64a
	adds r0, r6, #0	@ 0003b64a 301c
.org 0x3b64c
	mov r1, r8	@ 0003b64c 4146
.org 0x3b64e
	adds r2, r4, #0	@ 0003b64e 221c
.org 0x3b650
	bl 0x5794	@ 0003b650 caf7a0f8
.org 0x3b654
	add sp, #8	@ 0003b654 02b0
.org 0x3b656
	pop {r3}	@ 0003b656 08bc
.org 0x3b658
	mov r8, r3	@ 0003b658 9846
.org 0x3b65a
	pop {r4, r5, r6, r7}	@ 0003b65a f0bc
.org 0x3b65c
	pop {r0}	@ 0003b65c 01bc
.org 0x3b65e
	bx r0	@ 0003b65e 0047
