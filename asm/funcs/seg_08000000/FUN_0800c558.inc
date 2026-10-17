@ FUN_0800c558  entry 0x0800c558  size 238
.thumb
.org 0xc558
FUN_0800c558:
	push {r4, r5, r6, r7, lr}	@ 0000c558 f0b5
.org 0xc55a
	mov r7, sl	@ 0000c55a 5746
.org 0xc55c
	mov r6, r9	@ 0000c55c 4e46
.org 0xc55e
	mov r5, r8	@ 0000c55e 4546
.org 0xc560
	push {r5, r6, r7}	@ 0000c560 e0b4
.org 0xc562
	adds r5, r0, #0	@ 0000c562 051c
.org 0xc564
	adds r0, #112	@ 0000c564 7030
.org 0xc566
	ldrh r0, [r0, #0]	@ 0000c566 0088
.org 0xc568
	mov ip, r0	@ 0000c568 8446
.org 0xc56a
	movs r0, #128	@ 0000c56a 8020
.org 0xc56c
	lsls r0, r0, #1	@ 0000c56c 4000
.org 0xc56e
	mov r9, r0	@ 0000c56e 8146
.org 0xc570
	ldr r1, [r5, #104]	@ 0000c570 a96e
.org 0xc572
	mov sl, r1	@ 0000c572 8a46
.org 0xc574
	ldr r3, [r5, #108]	@ 0000c574 eb6e
.org 0xc576
	mov r8, r3	@ 0000c576 9846
.org 0xc578
	movs r6, #0	@ 0000c578 0026
.org 0xc57a
	movs r3, #0	@ 0000c57a 0023
.org 0xc57c
	movs r2, #0	@ 0000c57c 0022
.org 0xc57e
	ldr r4, [pc, #200]	@ 0000c57e 324c
.org 0xc580
	mov r7, ip	@ 0000c580 6746
.org 0xc582
	adds r1, r7, r2	@ 0000c582 b918
.org 0xc584
	asrs r1, r1, #6	@ 0000c584 8911
.org 0xc586
	adds r0, r1, #0	@ 0000c586 081c
.org 0xc588
	adds r0, #64	@ 0000c588 4030
.org 0xc58a
	lsls r0, r0, #24	@ 0000c58a 0006
.org 0xc58c
	lsrs r0, r0, #23	@ 0000c58c c00d
.org 0xc58e
	adds r0, r0, r4	@ 0000c58e 0019
.org 0xc590
	movs r7, #0	@ 0000c590 0027
.org 0xc592
	ldrsh r0, [r0, r7]	@ 0000c592 c05f
.org 0xc594
	adds r3, r3, r0	@ 0000c594 1b18
.org 0xc596
	lsls r1, r1, #24	@ 0000c596 0906
.org 0xc598
	lsrs r1, r1, #23	@ 0000c598 c90d
.org 0xc59a
	adds r1, r1, r4	@ 0000c59a 0919
.org 0xc59c
	movs r7, #0	@ 0000c59c 0027
.org 0xc59e
	ldrsh r0, [r1, r7]	@ 0000c59e c85f
.org 0xc5a0
	adds r6, r6, r0	@ 0000c5a0 3618
.org 0xc5a2
	adds r0, r2, #1	@ 0000c5a2 501c
.org 0xc5a4
	lsls r0, r0, #24	@ 0000c5a4 0006
.org 0xc5a6
	lsrs r2, r0, #24	@ 0000c5a6 020e
.org 0xc5a8
	cmp r2, #63	@ 0000c5a8 3f2a
.org 0xc5aa
	bls.n 0xc580	@ 0000c5aa e9d9
.org 0xc5ac
	lsrs r3, r3, #6	@ 0000c5ac 9b09
.org 0xc5ae
	lsrs r6, r6, #6	@ 0000c5ae b609
.org 0xc5b0
	ldr r7, [pc, #152]	@ 0000c5b0 264f
.org 0xc5b2
	lsls r0, r3, #8	@ 0000c5b2 1802
.org 0xc5b4
	mov r1, r9	@ 0000c5b4 4946
.org 0xc5b6
	bl 0x129120	@ 0000c5b6 1cf1b3fd
.org 0xc5ba
	adds r4, r0, #0	@ 0000c5ba 041c
.org 0xc5bc
	strh r4, [r7, #0]	@ 0000c5bc 3c80
.org 0xc5be
	lsls r0, r6, #8	@ 0000c5be 3002
.org 0xc5c0
	mov r1, r9	@ 0000c5c0 4946
.org 0xc5c2
	bl 0x129120	@ 0000c5c2 1cf1adfd
.org 0xc5c6
	strh r0, [r7, #2]	@ 0000c5c6 7880
.org 0xc5c8
	negs r0, r6	@ 0000c5c8 7042
.org 0xc5ca
	lsls r0, r0, #8	@ 0000c5ca 0002
.org 0xc5cc
	mov r1, r9	@ 0000c5cc 4946
.org 0xc5ce
	bl 0x129120	@ 0000c5ce 1cf1a7fd
.org 0xc5d2
	strh r0, [r7, #4]	@ 0000c5d2 b880
.org 0xc5d4
	strh r4, [r7, #6]	@ 0000c5d4 fc80
.org 0xc5d6
	ldr r6, [r5, #116]	@ 0000c5d6 6e6f
.org 0xc5d8
	ldr r2, [r5, #120]	@ 0000c5d8 aa6f
.org 0xc5da
	mov r0, r8	@ 0000c5da 4046
.org 0xc5dc
	subs r0, r0, r2	@ 0000c5dc 801a
.org 0xc5de
	mov r8, r0	@ 0000c5de 8046
.org 0xc5e0
	ldr r0, [r5, #52]	@ 0000c5e0 686b
.org 0xc5e2
	lsls r0, r0, #8	@ 0000c5e2 0002
.org 0xc5e4
	mov r1, sl	@ 0000c5e4 5146
.org 0xc5e6
	subs r4, r0, r1	@ 0000c5e6 441a
.org 0xc5e8
	movs r3, #0	@ 0000c5e8 0023
.org 0xc5ea
	ldrsh r0, [r7, r3]	@ 0000c5ea f85e
.org 0xc5ec
	muls r0, r4	@ 0000c5ec 6043
.org 0xc5ee
	cmp r0, #0	@ 0000c5ee 0028
.org 0xc5f0
	bge.n 0xc5f4	@ 0000c5f0 00da
.org 0xc5f2
	adds r0, #255	@ 0000c5f2 ff30
.org 0xc5f4
	asrs r1, r0, #8	@ 0000c5f4 0112
.org 0xc5f6
	ldr r0, [r5, #56]	@ 0000c5f6 a86b
.org 0xc5f8
	lsls r0, r0, #8	@ 0000c5f8 0002
.org 0xc5fa
	mov r5, r8	@ 0000c5fa 4546
.org 0xc5fc
	subs r0, r0, r5	@ 0000c5fc 401b
.org 0xc5fe
	subs r3, r0, r2	@ 0000c5fe 831a
.org 0xc600
	movs r5, #2	@ 0000c600 0225
.org 0xc602
	ldrsh r0, [r7, r5]	@ 0000c602 785f
.org 0xc604
	muls r0, r3	@ 0000c604 5843
.org 0xc606
	cmp r0, #0	@ 0000c606 0028
.org 0xc608
	bge.n 0xc60c	@ 0000c608 00da
.org 0xc60a
	adds r0, #255	@ 0000c60a ff30
.org 0xc60c
	asrs r0, r0, #8	@ 0000c60c 0012
.org 0xc60e
	adds r0, r1, r0	@ 0000c60e 0818
.org 0xc610
	adds r0, r0, r6	@ 0000c610 8019
.org 0xc612
	str r0, [r7, #8]	@ 0000c612 b860
.org 0xc614
	movs r1, #4	@ 0000c614 0421
.org 0xc616
	ldrsh r0, [r7, r1]	@ 0000c616 785e
.org 0xc618
	muls r0, r4	@ 0000c618 6043
.org 0xc61a
	cmp r0, #0	@ 0000c61a 0028
.org 0xc61c
	bge.n 0xc620	@ 0000c61c 00da
.org 0xc61e
	adds r0, #255	@ 0000c61e ff30
.org 0xc620
	asrs r1, r0, #8	@ 0000c620 0112
.org 0xc622
	movs r4, #6	@ 0000c622 0624
.org 0xc624
	ldrsh r0, [r7, r4]	@ 0000c624 385f
.org 0xc626
	muls r0, r3	@ 0000c626 5843
.org 0xc628
	cmp r0, #0	@ 0000c628 0028
.org 0xc62a
	bge.n 0xc62e	@ 0000c62a 00da
.org 0xc62c
	adds r0, #255	@ 0000c62c ff30
.org 0xc62e
	asrs r0, r0, #8	@ 0000c62e 0012
.org 0xc630
	adds r0, r1, r0	@ 0000c630 0818
.org 0xc632
	adds r0, r0, r2	@ 0000c632 8018
.org 0xc634
	ldr r5, [pc, #20]	@ 0000c634 054d
.org 0xc636
	str r0, [r5, #12]	@ 0000c636 e860
.org 0xc638
	pop {r3, r4, r5}	@ 0000c638 38bc
.org 0xc63a
	mov r8, r3	@ 0000c63a 9846
.org 0xc63c
	mov r9, r4	@ 0000c63c a146
.org 0xc63e
	mov sl, r5	@ 0000c63e aa46
.org 0xc640
	pop {r4, r5, r6, r7}	@ 0000c640 f0bc
.org 0xc642
	pop {r0}	@ 0000c642 01bc
.org 0xc644
	bx r0	@ 0000c644 0047
