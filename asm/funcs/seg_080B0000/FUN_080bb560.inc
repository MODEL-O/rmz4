@ FUN_080bb560  entry 0x080bb560  size 222
.thumb
.org 0xbb560
FUN_080bb560:
	push {r4, r5, lr}	@ 000bb560 30b5
.org 0xbb562
	adds r5, r0, #0	@ 000bb562 051c
.org 0xbb564
	ldr r1, [r5, #40]	@ 000bb564 a96a
.org 0xbb566
	ldrb r0, [r5, #15]	@ 000bb566 e87b
.org 0xbb568
	cmp r0, #0	@ 000bb568 0028
.org 0xbb56a
	bne.n 0xbb5a0	@ 000bb56a 19d1
.org 0xbb56c
	adds r1, #191	@ 000bb56c bf31
.org 0xbb56e
	ldrb r0, [r1, #0]	@ 000bb56e 0878
.org 0xbb570
	movs r4, #4	@ 000bb570 0424
.org 0xbb572
	orrs r0, r4	@ 000bb572 2043
.org 0xbb574
	strb r0, [r1, #0]	@ 000bb574 0870
.org 0xbb576
	adds r0, r5, #0	@ 000bb576 281c
.org 0xbb578
	adds r0, #116	@ 000bb578 7430
.org 0xbb57a
	ldr r1, [pc, #196]	@ 000bb57a 3149
.org 0xbb57c
	bl 0x5784	@ 000bb57c 4af702f9
.org 0xbb580
	ldr r1, [pc, #192]	@ 000bb580 3049
.org 0xbb582
	ldr r0, [pc, #196]	@ 000bb582 3148
.org 0xbb584
	strh r0, [r1, #0]	@ 000bb584 0880
.org 0xbb586
	adds r2, r5, #0	@ 000bb586 2a1c
.org 0xbb588
	adds r2, #69	@ 000bb588 4532
.org 0xbb58a
	ldrb r1, [r2, #0]	@ 000bb58a 1178
.org 0xbb58c
	movs r0, #13	@ 000bb58c 0d20
.org 0xbb58e
	negs r0, r0	@ 000bb58e 4042
.org 0xbb590
	ands r0, r1	@ 000bb590 0840
.org 0xbb592
	orrs r0, r4	@ 000bb592 2043
.org 0xbb594
	strb r0, [r2, #0]	@ 000bb594 1070
.org 0xbb596
	movs r0, #32	@ 000bb596 2020
.org 0xbb598
	strb r0, [r5, #18]	@ 000bb598 a874
.org 0xbb59a
	ldrb r0, [r5, #15]	@ 000bb59a e87b
.org 0xbb59c
	adds r0, #1	@ 000bb59c 0130
.org 0xbb59e
	strb r0, [r5, #15]	@ 000bb59e e873
.org 0xbb5a0
	adds r0, r5, #0	@ 000bb5a0 281c
.org 0xbb5a2
	bl 0x1cff0	@ 000bb5a2 61f725fd
.org 0xbb5a6
	ldrb r0, [r5, #18]	@ 000bb5a6 a87c
.org 0xbb5a8
	subs r4, r0, #1	@ 000bb5a8 441e
.org 0xbb5aa
	strb r4, [r5, #18]	@ 000bb5aa ac74
.org 0xbb5ac
	ldrb r0, [r5, #18]	@ 000bb5ac a87c
.org 0xbb5ae
	ldr r2, [pc, #156]	@ 000bb5ae 274a
.org 0xbb5b0
	lsls r0, r0, #25	@ 000bb5b0 4006
.org 0xbb5b2
	lsrs r0, r0, #23	@ 000bb5b2 c00d
.org 0xbb5b4
	adds r0, r0, r2	@ 000bb5b4 8018
.org 0xbb5b6
	movs r1, #0	@ 000bb5b6 0021
.org 0xbb5b8
	ldrsh r0, [r0, r1]	@ 000bb5b8 405e
.org 0xbb5ba
	adds r1, r0, #0	@ 000bb5ba 011c
.org 0xbb5bc
	cmp r0, #0	@ 000bb5bc 0028
.org 0xbb5be
	bge.n 0xbb5c2	@ 000bb5be 00da
.org 0xbb5c0
	adds r1, r0, #3	@ 000bb5c0 c11c
.org 0xbb5c2
	asrs r0, r1, #2	@ 000bb5c2 8810
.org 0xbb5c4
	lsls r0, r0, #24	@ 000bb5c4 0006
.org 0xbb5c6
	lsrs r0, r0, #23	@ 000bb5c6 c00d
.org 0xbb5c8
	adds r0, r0, r2	@ 000bb5c8 8018
.org 0xbb5ca
	movs r1, #0	@ 000bb5ca 0021
.org 0xbb5cc
	ldrsh r0, [r0, r1]	@ 000bb5cc 405e
.org 0xbb5ce
	cmp r0, #0	@ 000bb5ce 0028
.org 0xbb5d0
	bge.n 0xbb5d4	@ 000bb5d0 00da
.org 0xbb5d2
	adds r0, #15	@ 000bb5d2 0f30
.org 0xbb5d4
	asrs r2, r0, #4	@ 000bb5d4 0211
.org 0xbb5d6
	ldr r3, [pc, #108]	@ 000bb5d6 1b4b
.org 0xbb5d8
	movs r0, #31	@ 000bb5d8 1f20
.org 0xbb5da
	adds r1, r2, #0	@ 000bb5da 111c
.org 0xbb5dc
	ands r1, r0	@ 000bb5dc 0140
.org 0xbb5de
	movs r0, #16	@ 000bb5de 1020
.org 0xbb5e0
	subs r0, r0, r2	@ 000bb5e0 801a
.org 0xbb5e2
	lsls r0, r0, #8	@ 000bb5e2 0002
.org 0xbb5e4
	orrs r1, r0	@ 000bb5e4 0143
.org 0xbb5e6
	strh r1, [r3, #2]	@ 000bb5e6 5980
.org 0xbb5e8
	lsls r0, r4, #24	@ 000bb5e8 2006
.org 0xbb5ea
	lsrs r2, r0, #24	@ 000bb5ea 020e
.org 0xbb5ec
	cmp r2, #0	@ 000bb5ec 002a
.org 0xbb5ee
	bne.n 0xbb638	@ 000bb5ee 23d1
.org 0xbb5f0
	strh r2, [r3, #0]	@ 000bb5f0 1a80
.org 0xbb5f2
	adds r3, r5, #0	@ 000bb5f2 2b1c
.org 0xbb5f4
	adds r3, #69	@ 000bb5f4 4533
.org 0xbb5f6
	ldrb r1, [r3, #0]	@ 000bb5f6 1978
.org 0xbb5f8
	movs r0, #13	@ 000bb5f8 0d20
.org 0xbb5fa
	negs r0, r0	@ 000bb5fa 4042
.org 0xbb5fc
	ands r0, r1	@ 000bb5fc 0840
.org 0xbb5fe
	strb r0, [r3, #0]	@ 000bb5fe 1870
.org 0xbb600
	ldrb r1, [r5, #10]	@ 000bb600 a97a
.org 0xbb602
	movs r0, #254	@ 000bb602 fe20
.org 0xbb604
	ands r0, r1	@ 000bb604 0840
.org 0xbb606
	movs r1, #253	@ 000bb606 fd21
.org 0xbb608
	ands r0, r1	@ 000bb608 0840
.org 0xbb60a
	strb r0, [r5, #10]	@ 000bb60a a872
.org 0xbb60c
	adds r0, r5, #0	@ 000bb60c 281c
.org 0xbb60e
	adds r0, #140	@ 000bb60e 8c30
.org 0xbb610
	str r2, [r0, #0]	@ 000bb610 0260
.org 0xbb612
	adds r0, #4	@ 000bb612 0430
.org 0xbb614
	str r2, [r0, #0]	@ 000bb614 0260
.org 0xbb616
	adds r1, r5, #0	@ 000bb616 291c
.org 0xbb618
	adds r1, #148	@ 000bb618 9431
.org 0xbb61a
	movs r0, #0	@ 000bb61a 0020
.org 0xbb61c
	strb r0, [r1, #0]	@ 000bb61c 0870
.org 0xbb61e
	ldrb r1, [r5, #10]	@ 000bb61e a97a
.org 0xbb620
	movs r0, #251	@ 000bb620 fb20
.org 0xbb622
	ands r0, r1	@ 000bb622 0840
.org 0xbb624
	strb r0, [r5, #10]	@ 000bb624 a872
.org 0xbb626
	ldr r1, [pc, #40]	@ 000bb626 0a49
.org 0xbb628
	ldrb r0, [r5, #9]	@ 000bb628 687a
.org 0xbb62a
	lsls r0, r0, #2	@ 000bb62a 8000
.org 0xbb62c
	adds r0, r0, r1	@ 000bb62c 4018
.org 0xbb62e
	movs r1, #3	@ 000bb62e 0321
.org 0xbb630
	str r1, [r5, #12]	@ 000bb630 e960
.org 0xbb632
	ldr r0, [r0, #0]	@ 000bb632 0068
.org 0xbb634
	ldr r0, [r0, #12]	@ 000bb634 c068
.org 0xbb636
	str r0, [r5, #20]	@ 000bb636 6861
.org 0xbb638
	pop {r4, r5}	@ 000bb638 30bc
.org 0xbb63a
	pop {r0}	@ 000bb63a 01bc
.org 0xbb63c
	bx r0	@ 000bb63c 0047
