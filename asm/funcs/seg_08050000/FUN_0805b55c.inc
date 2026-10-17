@ FUN_0805b55c  entry 0x0805b55c  size 428
.thumb
.org 0x5b55c
FUN_0805b55c:
	push {r4, r5, r6, lr}	@ 0005b55c 70b5
.org 0x5b55e
	adds r4, r0, #0	@ 0005b55e 041c
.org 0x5b560
	movs r6, #1	@ 0005b560 0126
.org 0x5b562
	ldrb r5, [r4, #15]	@ 0005b562 e57b
.org 0x5b564
	cmp r5, #0	@ 0005b564 002d
.org 0x5b566
	beq.n 0x5b56a	@ 0005b566 00d0
.org 0x5b568
	b.n 0x5b6aa	@ 0005b568 9fe0
.org 0x5b56a
	movs r0, #193	@ 0005b56a c120
.org 0x5b56c
	bl 0x2b10	@ 0005b56c a7f7d0fa
.org 0x5b570
	adds r3, r4, #0	@ 0005b570 231c
.org 0x5b572
	adds r3, #200	@ 0005b572 c833
.org 0x5b574
	ldr r2, [r3, #0]	@ 0005b574 1a68
.org 0x5b576
	cmp r2, #0	@ 0005b576 002a
.org 0x5b578
	beq.n 0x5b632	@ 0005b578 5bd0
.org 0x5b57a
	movs r0, #191	@ 0005b57a bf20
.org 0x5b57c
	adds r0, r0, r4	@ 0005b57c 0019
.org 0x5b57e
	mov ip, r0	@ 0005b57e 8446
.org 0x5b580
	ldrb r0, [r0, #0]	@ 0005b580 0078
.org 0x5b582
	cmp r0, #0	@ 0005b582 0028
.org 0x5b584
	bne.n 0x5b5c2	@ 0005b584 1dd1
.org 0x5b586
	ldrb r1, [r2, #10]	@ 0005b586 917a
.org 0x5b588
	movs r0, #254	@ 0005b588 fe20
.org 0x5b58a
	ands r0, r1	@ 0005b58a 0840
.org 0x5b58c
	movs r1, #253	@ 0005b58c fd21
.org 0x5b58e
	ands r0, r1	@ 0005b58e 0840
.org 0x5b590
	strb r0, [r2, #10]	@ 0005b590 9072
.org 0x5b592
	adds r0, r2, #0	@ 0005b592 101c
.org 0x5b594
	adds r0, #140	@ 0005b594 8c30
.org 0x5b596
	str r5, [r0, #0]	@ 0005b596 0560
.org 0x5b598
	adds r0, #4	@ 0005b598 0430
.org 0x5b59a
	str r5, [r0, #0]	@ 0005b59a 0560
.org 0x5b59c
	adds r0, #4	@ 0005b59c 0430
.org 0x5b59e
	strb r5, [r0, #0]	@ 0005b59e 0570
.org 0x5b5a0
	ldrb r1, [r2, #10]	@ 0005b5a0 917a
.org 0x5b5a2
	movs r0, #251	@ 0005b5a2 fb20
.org 0x5b5a4
	ands r0, r1	@ 0005b5a4 0840
.org 0x5b5a6
	strb r0, [r2, #10]	@ 0005b5a6 9072
.org 0x5b5a8
	ldr r1, [pc, #208]	@ 0005b5a8 3449
.org 0x5b5aa
	ldrb r0, [r2, #9]	@ 0005b5aa 507a
.org 0x5b5ac
	lsls r0, r0, #2	@ 0005b5ac 8000
.org 0x5b5ae
	adds r0, r0, r1	@ 0005b5ae 4018
.org 0x5b5b0
	movs r1, #3	@ 0005b5b0 0321
.org 0x5b5b2
	str r1, [r2, #12]	@ 0005b5b2 d160
.org 0x5b5b4
	ldr r0, [r0, #0]	@ 0005b5b4 0068
.org 0x5b5b6
	ldr r0, [r0, #12]	@ 0005b5b6 c068
.org 0x5b5b8
	str r0, [r2, #20]	@ 0005b5b8 5061
.org 0x5b5ba
	str r5, [r3, #0]	@ 0005b5ba 1d60
.org 0x5b5bc
	movs r0, #255	@ 0005b5bc ff20
.org 0x5b5be
	mov r1, ip	@ 0005b5be 6146
.org 0x5b5c0
	strb r0, [r1, #0]	@ 0005b5c0 0870
.org 0x5b5c2
	ldr r1, [r3, #0]	@ 0005b5c2 1968
.org 0x5b5c4
	cmp r1, #0	@ 0005b5c4 0029
.org 0x5b5c6
	beq.n 0x5b632	@ 0005b5c6 34d0
.org 0x5b5c8
	mov r2, ip	@ 0005b5c8 6246
.org 0x5b5ca
	ldrb r0, [r2, #0]	@ 0005b5ca 1078
.org 0x5b5cc
	cmp r0, #1	@ 0005b5cc 0128
.org 0x5b5ce
	bne.n 0x5b5d6	@ 0005b5ce 02d1
.org 0x5b5d0
	adds r0, r1, #0	@ 0005b5d0 081c
.org 0x5b5d2
	adds r0, #181	@ 0005b5d2 b530
.org 0x5b5d4
	strb r6, [r0, #0]	@ 0005b5d4 0670
.org 0x5b5d6
	ldr r1, [r3, #0]	@ 0005b5d6 1968
.org 0x5b5d8
	cmp r1, #0	@ 0005b5d8 0029
.org 0x5b5da
	beq.n 0x5b632	@ 0005b5da 2ad0
.org 0x5b5dc
	mov r2, ip	@ 0005b5dc 6246
.org 0x5b5de
	ldrb r0, [r2, #0]	@ 0005b5de 1078
.org 0x5b5e0
	cmp r0, #2	@ 0005b5e0 0228
.org 0x5b5e2
	bne.n 0x5b5ea	@ 0005b5e2 02d1
.org 0x5b5e4
	adds r0, r1, #0	@ 0005b5e4 081c
.org 0x5b5e6
	adds r0, #181	@ 0005b5e6 b530
.org 0x5b5e8
	strb r6, [r0, #0]	@ 0005b5e8 0670
.org 0x5b5ea
	ldr r1, [r3, #0]	@ 0005b5ea 1968
.org 0x5b5ec
	cmp r1, #0	@ 0005b5ec 0029
.org 0x5b5ee
	beq.n 0x5b632	@ 0005b5ee 20d0
.org 0x5b5f0
	mov r2, ip	@ 0005b5f0 6246
.org 0x5b5f2
	ldrb r0, [r2, #0]	@ 0005b5f2 1078
.org 0x5b5f4
	cmp r0, #3	@ 0005b5f4 0328
.org 0x5b5f6
	bne.n 0x5b5fe	@ 0005b5f6 02d1
.org 0x5b5f8
	adds r0, r1, #0	@ 0005b5f8 081c
.org 0x5b5fa
	adds r0, #181	@ 0005b5fa b530
.org 0x5b5fc
	strb r6, [r0, #0]	@ 0005b5fc 0670
.org 0x5b5fe
	ldr r1, [r3, #0]	@ 0005b5fe 1968
.org 0x5b600
	cmp r1, #0	@ 0005b600 0029
.org 0x5b602
	beq.n 0x5b632	@ 0005b602 16d0
.org 0x5b604
	mov r2, ip	@ 0005b604 6246
.org 0x5b606
	ldrb r0, [r2, #0]	@ 0005b606 1078
.org 0x5b608
	cmp r0, #4	@ 0005b608 0428
.org 0x5b60a
	bne.n 0x5b618	@ 0005b60a 05d1
.org 0x5b60c
	adds r0, r1, #0	@ 0005b60c 081c
.org 0x5b60e
	adds r0, #182	@ 0005b60e b630
.org 0x5b610
	strb r6, [r0, #0]	@ 0005b610 0670
.org 0x5b612
	str r5, [r3, #0]	@ 0005b612 1d60
.org 0x5b614
	movs r0, #255	@ 0005b614 ff20
.org 0x5b616
	strb r0, [r2, #0]	@ 0005b616 1070
.org 0x5b618
	ldr r1, [r3, #0]	@ 0005b618 1968
.org 0x5b61a
	cmp r1, #0	@ 0005b61a 0029
.org 0x5b61c
	beq.n 0x5b632	@ 0005b61c 09d0
.org 0x5b61e
	mov r2, ip	@ 0005b61e 6246
.org 0x5b620
	ldrb r0, [r2, #0]	@ 0005b620 1078
.org 0x5b622
	cmp r0, #5	@ 0005b622 0528
.org 0x5b624
	bne.n 0x5b632	@ 0005b624 05d1
.org 0x5b626
	adds r0, r1, #0	@ 0005b626 081c
.org 0x5b628
	adds r0, #182	@ 0005b628 b630
.org 0x5b62a
	strb r6, [r0, #0]	@ 0005b62a 0670
.org 0x5b62c
	str r5, [r3, #0]	@ 0005b62c 1d60
.org 0x5b62e
	movs r0, #255	@ 0005b62e ff20
.org 0x5b630
	strb r0, [r2, #0]	@ 0005b630 1070
.org 0x5b632
	adds r0, r4, #0	@ 0005b632 201c
.org 0x5b634
	adds r0, #116	@ 0005b634 7430
.org 0x5b636
	ldr r1, [pc, #72]	@ 0005b636 1249
.org 0x5b638
	bl 0x5784	@ 0005b638 aaf7a4f8
.org 0x5b63c
	ldr r1, [pc, #68]	@ 0005b63c 1149
.org 0x5b63e
	adds r0, r4, #0	@ 0005b63e 201c
.org 0x5b640
	bl 0x1cf00	@ 0005b640 c1f75efc
.org 0x5b644
	adds r0, r4, #0	@ 0005b644 201c
.org 0x5b646
	adds r0, #189	@ 0005b646 bd30
.org 0x5b648
	movs r2, #1	@ 0005b648 0122
.org 0x5b64a
	strb r2, [r0, #0]	@ 0005b64a 0270
.org 0x5b64c
	subs r0, #1	@ 0005b64c 0138
.org 0x5b64e
	ldrb r5, [r0, #0]	@ 0005b64e 0578
.org 0x5b650
	adds r1, r5, #0	@ 0005b650 291c
.org 0x5b652
	ands r1, r2	@ 0005b652 1140
.org 0x5b654
	subs r0, #112	@ 0005b654 7038
.org 0x5b656
	strb r1, [r0, #0]	@ 0005b656 0170
.org 0x5b658
	movs r0, #74	@ 0005b658 4a20
.org 0x5b65a
	adds r0, r0, r4	@ 0005b65a 0019
.org 0x5b65c
	mov ip, r0	@ 0005b65c 8446
.org 0x5b65e
	lsls r1, r1, #4	@ 0005b65e 0901
.org 0x5b660
	ldrb r3, [r0, #0]	@ 0005b660 0378
.org 0x5b662
	movs r0, #17	@ 0005b662 1120
.org 0x5b664
	negs r0, r0	@ 0005b664 4042
.org 0x5b666
	ands r0, r3	@ 0005b666 1840
.org 0x5b668
	orrs r0, r1	@ 0005b668 0843
.org 0x5b66a
	mov r1, ip	@ 0005b66a 6146
.org 0x5b66c
	strb r0, [r1, #0]	@ 0005b66c 0870
.org 0x5b66e
	ands r2, r5	@ 0005b66e 2a40
.org 0x5b670
	cmp r2, #0	@ 0005b670 002a
.org 0x5b672
	beq.n 0x5b688	@ 0005b672 09d0
.org 0x5b674
	ldrb r0, [r4, #10]	@ 0005b674 a07a
.org 0x5b676
	movs r1, #16	@ 0005b676 1021
.org 0x5b678
	orrs r0, r1	@ 0005b678 0843
.org 0x5b67a
	b.n 0x5b68e	@ 0005b67a 08e0
.org 0x5b67c
	.byte 0xf4,0x49,0x86,0x08	@ 0005b67c data
.org 0x5b680
	.byte 0xfc,0x88,0x85,0x08	@ 0005b680 data
.org 0x5b684
	.byte 0x04,0xa3,0x00,0x00	@ 0005b684 data
.org 0x5b688
	ldrb r1, [r4, #10]	@ 0005b688 a17a
.org 0x5b68a
	movs r0, #239	@ 0005b68a ef20
.org 0x5b68c
	ands r0, r1	@ 0005b68c 0840
.org 0x5b68e
	strb r0, [r4, #10]	@ 0005b68e a072
.org 0x5b690
	movs r0, #128	@ 0005b690 8020
.org 0x5b692
	lsls r0, r0, #2	@ 0005b692 8000
.org 0x5b694
	str r0, [r4, #92]	@ 0005b694 e065
.org 0x5b696
	movs r0, #16	@ 0005b696 1020
.org 0x5b698
	negs r0, r0	@ 0005b698 4042
.org 0x5b69a
	str r0, [r4, #100]	@ 0005b69a 6066
.org 0x5b69c
	movs r0, #208	@ 0005b69c d020
.org 0x5b69e
	muls r0, r5	@ 0005b69e 6843
.org 0x5b6a0
	subs r0, #40	@ 0005b6a0 2838
.org 0x5b6a2
	strb r0, [r4, #18]	@ 0005b6a2 a074
.org 0x5b6a4
	ldrb r0, [r4, #15]	@ 0005b6a4 e07b
.org 0x5b6a6
	adds r0, #1	@ 0005b6a6 0130
.org 0x5b6a8
	strb r0, [r4, #15]	@ 0005b6a8 e073
.org 0x5b6aa
	adds r0, r4, #0	@ 0005b6aa 201c
.org 0x5b6ac
	bl 0x1cff0	@ 0005b6ac c1f7a0fc
.org 0x5b6b0
	ldr r3, [pc, #96]	@ 0005b6b0 184b
.org 0x5b6b2
	ldrb r0, [r4, #18]	@ 0005b6b2 a07c
.org 0x5b6b4
	adds r0, #64	@ 0005b6b4 4030
.org 0x5b6b6
	lsls r0, r0, #24	@ 0005b6b6 0006
.org 0x5b6b8
	lsrs r0, r0, #23	@ 0005b6b8 c00d
.org 0x5b6ba
	adds r0, r0, r3	@ 0005b6ba c018
.org 0x5b6bc
	movs r2, #0	@ 0005b6bc 0022
.org 0x5b6be
	ldrsh r0, [r0, r2]	@ 0005b6be 805e
.org 0x5b6c0
	ldr r2, [r4, #92]	@ 0005b6c0 e26d
.org 0x5b6c2
	adds r1, r2, #0	@ 0005b6c2 111c
.org 0x5b6c4
	muls r1, r0	@ 0005b6c4 4143
.org 0x5b6c6
	cmp r1, #0	@ 0005b6c6 0029
.org 0x5b6c8
	bge.n 0x5b6cc	@ 0005b6c8 00da
.org 0x5b6ca
	adds r1, #255	@ 0005b6ca ff31
.org 0x5b6cc
	asrs r1, r1, #8	@ 0005b6cc 0912
.org 0x5b6ce
	ldr r0, [r4, #84]	@ 0005b6ce 606d
.org 0x5b6d0
	adds r0, r0, r1	@ 0005b6d0 4018
.org 0x5b6d2
	str r0, [r4, #84]	@ 0005b6d2 6065
.org 0x5b6d4
	ldrb r0, [r4, #18]	@ 0005b6d4 a07c
.org 0x5b6d6
	lsls r0, r0, #1	@ 0005b6d6 4000
.org 0x5b6d8
	adds r0, r0, r3	@ 0005b6d8 c018
.org 0x5b6da
	movs r1, #0	@ 0005b6da 0021
.org 0x5b6dc
	ldrsh r0, [r0, r1]	@ 0005b6dc 405e
.org 0x5b6de
	muls r0, r2	@ 0005b6de 5043
.org 0x5b6e0
	cmp r0, #0	@ 0005b6e0 0028
.org 0x5b6e2
	bge.n 0x5b6e6	@ 0005b6e2 00da
.org 0x5b6e4
	adds r0, #255	@ 0005b6e4 ff30
.org 0x5b6e6
	asrs r0, r0, #8	@ 0005b6e6 0012
.org 0x5b6e8
	ldr r1, [r4, #88]	@ 0005b6e8 a16d
.org 0x5b6ea
	adds r1, r1, r0	@ 0005b6ea 0918
.org 0x5b6ec
	str r1, [r4, #88]	@ 0005b6ec a165
.org 0x5b6ee
	ldr r0, [r4, #100]	@ 0005b6ee 606e
.org 0x5b6f0
	adds r0, r2, r0	@ 0005b6f0 1018
.org 0x5b6f2
	str r0, [r4, #92]	@ 0005b6f2 e065
.org 0x5b6f4
	cmp r0, #0	@ 0005b6f4 0028
.org 0x5b6f6
	bge.n 0x5b6fc	@ 0005b6f6 01da
.org 0x5b6f8
	movs r0, #0	@ 0005b6f8 0020
.org 0x5b6fa
	str r0, [r4, #92]	@ 0005b6fa e065
.org 0x5b6fc
	ldr r0, [r4, #92]	@ 0005b6fc e06d
.org 0x5b6fe
	cmp r0, #0	@ 0005b6fe 0028
.org 0x5b700
	bne.n 0x5b70e	@ 0005b700 05d1
.org 0x5b702
	ldr r1, [r4, #44]	@ 0005b702 e16a
.org 0x5b704
	cmp r1, #0	@ 0005b704 0029
.org 0x5b706
	bne.n 0x5b70e	@ 0005b706 02d1
