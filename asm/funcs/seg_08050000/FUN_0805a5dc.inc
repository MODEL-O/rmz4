@ FUN_0805a5dc  entry 0x0805a5dc  size 166
.thumb
.org 0x5a5dc
FUN_0805a5dc:
	push {r4, r5, r6, lr}	@ 0005a5dc 70b5
.org 0x5a5de
	adds r4, r0, #0	@ 0005a5de 041c
.org 0x5a5e0
	ldrb r0, [r4, #10]	@ 0005a5e0 a07a
.org 0x5a5e2
	lsrs r5, r0, #4	@ 0005a5e2 0509
.org 0x5a5e4
	movs r6, #1	@ 0005a5e4 0126
.org 0x5a5e6
	ands r5, r6	@ 0005a5e6 3540
.org 0x5a5e8
	ldrb r0, [r4, #15]	@ 0005a5e8 e07b
.org 0x5a5ea
	cmp r0, #0	@ 0005a5ea 0028
.org 0x5a5ec
	bne.n 0x5a64e	@ 0005a5ec 2fd1
.org 0x5a5ee
	movs r0, #184	@ 0005a5ee b820
.org 0x5a5f0
	bl 0x2b10	@ 0005a5f0 a8f78efa
.org 0x5a5f4
	adds r0, r4, #0	@ 0005a5f4 201c
.org 0x5a5f6
	adds r0, #116	@ 0005a5f6 7430
.org 0x5a5f8
	ldr r1, [pc, #52]	@ 0005a5f8 0d49
.org 0x5a5fa
	bl 0x5784	@ 0005a5fa abf7c3f8
.org 0x5a5fe
	adds r5, #1	@ 0005a5fe 0135
.org 0x5a600
	movs r0, #1	@ 0005a600 0120
.org 0x5a602
	ands r5, r0	@ 0005a602 0540
.org 0x5a604
	adds r1, r5, #0	@ 0005a604 291c
.org 0x5a606
	ands r1, r6	@ 0005a606 3140
.org 0x5a608
	adds r0, r4, #0	@ 0005a608 201c
.org 0x5a60a
	adds r0, #76	@ 0005a60a 4c30
.org 0x5a60c
	strb r1, [r0, #0]	@ 0005a60c 0170
.org 0x5a60e
	adds r3, r4, #0	@ 0005a60e 231c
.org 0x5a610
	adds r3, #74	@ 0005a610 4a33
.org 0x5a612
	lsls r1, r1, #4	@ 0005a612 0901
.org 0x5a614
	ldrb r2, [r3, #0]	@ 0005a614 1a78
.org 0x5a616
	movs r0, #17	@ 0005a616 1120
.org 0x5a618
	negs r0, r0	@ 0005a618 4042
.org 0x5a61a
	ands r0, r2	@ 0005a61a 1040
.org 0x5a61c
	orrs r0, r1	@ 0005a61c 0843
.org 0x5a61e
	strb r0, [r3, #0]	@ 0005a61e 1870
.org 0x5a620
	adds r0, r5, #0	@ 0005a620 281c
.org 0x5a622
	ands r0, r6	@ 0005a622 3040
.org 0x5a624
	cmp r0, #0	@ 0005a624 0028
.org 0x5a626
	beq.n 0x5a634	@ 0005a626 05d0
.org 0x5a628
	ldrb r0, [r4, #10]	@ 0005a628 a07a
.org 0x5a62a
	movs r1, #16	@ 0005a62a 1021
.org 0x5a62c
	orrs r0, r1	@ 0005a62c 0843
.org 0x5a62e
	b.n 0x5a63a	@ 0005a62e 04e0
.org 0x5a630
	.byte 0xe4,0x88,0x85,0x08	@ 0005a630 data
.org 0x5a634
	ldrb r1, [r4, #10]	@ 0005a634 a17a
.org 0x5a636
	movs r0, #239	@ 0005a636 ef20
.org 0x5a638
	ands r0, r1	@ 0005a638 0840
.org 0x5a63a
	strb r0, [r4, #10]	@ 0005a63a a072
.org 0x5a63c
	movs r0, #144	@ 0005a63c 9020
.org 0x5a63e
	lsls r0, r0, #2	@ 0005a63e 8000
.org 0x5a640
	str r0, [r4, #92]	@ 0005a640 e065
.org 0x5a642
	lsls r0, r5, #1	@ 0005a642 6800
.org 0x5a644
	subs r0, #1	@ 0005a644 0138
.org 0x5a646
	str r0, [r4, #104]	@ 0005a646 a066
.org 0x5a648
	ldrb r0, [r4, #15]	@ 0005a648 e07b
.org 0x5a64a
	adds r0, #1	@ 0005a64a 0130
.org 0x5a64c
	strb r0, [r4, #15]	@ 0005a64c e073
.org 0x5a64e
	adds r0, r4, #0	@ 0005a64e 201c
.org 0x5a650
	bl 0x1cff0	@ 0005a650 c2f7cefc
.org 0x5a654
	ldr r1, [r4, #92]	@ 0005a654 e16d
.org 0x5a656
	ldr r0, [r4, #104]	@ 0005a656 a06e
.org 0x5a658
	muls r1, r0	@ 0005a658 4143
.org 0x5a65a
	ldr r0, [r4, #84]	@ 0005a65a 606d
.org 0x5a65c
	adds r0, r0, r1	@ 0005a65c 4018
.org 0x5a65e
	str r0, [r4, #84]	@ 0005a65e 6065
.org 0x5a660
	adds r0, r4, #0	@ 0005a660 201c
.org 0x5a662
	bl 0x5c3a8	@ 0005a662 01f0a1fe
.org 0x5a666
	ldr r1, [r4, #84]	@ 0005a666 616d
.org 0x5a668
	subs r0, r0, r1	@ 0005a668 401a
.org 0x5a66a
	movs r1, #180	@ 0005a66a b421
.org 0x5a66c
	lsls r1, r1, #9	@ 0005a66c 4902
.org 0x5a66e
	adds r0, r0, r1	@ 0005a66e 4018
.org 0x5a670
	movs r1, #240	@ 0005a670 f021
.org 0x5a672
	lsls r1, r1, #9	@ 0005a672 4902
.org 0x5a674
	cmp r0, r1	@ 0005a674 8842
.org 0x5a676
	bls.n 0x5a680	@ 0005a676 03d9
.org 0x5a678
	movs r1, #0	@ 0005a678 0021
.org 0x5a67a
	movs r0, #4	@ 0005a67a 0420
.org 0x5a67c
	strb r0, [r4, #14]	@ 0005a67c a073
.org 0x5a67e
	strb r1, [r4, #15]	@ 0005a67e e173
.org 0x5a680
	pop {r4, r5, r6}	@ 0005a680 70bc
