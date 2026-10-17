@ FUN_080a45e8  entry 0x080a45e8  size 170
.thumb
.org 0xa45e8
FUN_080a45e8:
	push {r4, r5, r6, lr}	@ 000a45e8 70b5
.org 0xa45ea
	adds r6, r0, #0	@ 000a45ea 061c
.org 0xa45ec
	ldrb r4, [r6, #17]	@ 000a45ec 747c
.org 0xa45ee
	movs r0, #45	@ 000a45ee 2d20
.org 0xa45f0
	bl 0x2b10	@ 000a45f0 5ef78efa
.org 0xa45f4
	ldr r1, [pc, #68]	@ 000a45f4 1149
.org 0xa45f6
	ldrb r0, [r6, #9]	@ 000a45f6 707a
.org 0xa45f8
	lsls r0, r0, #2	@ 000a45f8 8000
.org 0xa45fa
	adds r0, r0, r1	@ 000a45fa 4018
.org 0xa45fc
	movs r1, #1	@ 000a45fc 0121
.org 0xa45fe
	str r1, [r6, #12]	@ 000a45fe f160
.org 0xa4600
	ldr r0, [r0, #0]	@ 000a4600 0068
.org 0xa4602
	ldr r0, [r0, #4]	@ 000a4602 4068
.org 0xa4604
	str r0, [r6, #20]	@ 000a4604 7061
.org 0xa4606
	ldrb r1, [r6, #10]	@ 000a4606 b17a
.org 0xa4608
	movs r0, #1	@ 000a4608 0120
.org 0xa460a
	movs r5, #0	@ 000a460a 0025
.org 0xa460c
	orrs r0, r1	@ 000a460c 0843
.org 0xa460e
	movs r1, #2	@ 000a460e 0221
.org 0xa4610
	orrs r0, r1	@ 000a4610 0843
.org 0xa4612
	strb r0, [r6, #10]	@ 000a4612 b072
.org 0xa4614
	lsls r1, r4, #1	@ 000a4614 6100
.org 0xa4616
	subs r1, #1	@ 000a4616 0139
.org 0xa4618
	lsls r0, r1, #2	@ 000a4618 8800
.org 0xa461a
	adds r0, r0, r1	@ 000a461a 4018
.org 0xa461c
	lsls r0, r0, #7	@ 000a461c c001
.org 0xa461e
	str r0, [r6, #92]	@ 000a461e f065
.org 0xa4620
	adds r1, r6, #0	@ 000a4620 311c
.org 0xa4622
	adds r1, #180	@ 000a4622 b431
.org 0xa4624
	movs r0, #128	@ 000a4624 8020
.org 0xa4626
	str r0, [r1, #0]	@ 000a4626 0860
.org 0xa4628
	adds r0, r6, #0	@ 000a4628 301c
.org 0xa462a
	bl 0x1cc9c	@ 000a462a 78f737fb
.org 0xa462e
	cmp r4, #0	@ 000a462e 002c
.org 0xa4630
	beq.n 0xa4640	@ 000a4630 06d0
.org 0xa4632
	ldrb r0, [r6, #10]	@ 000a4632 b07a
.org 0xa4634
	movs r1, #16	@ 000a4634 1021
.org 0xa4636
	orrs r0, r1	@ 000a4636 0843
.org 0xa4638
	b.n 0xa4646	@ 000a4638 05e0
.org 0xa463a
	.byte 0x00	@ 000a463a data
.org 0xa463b
	.byte 0x00	@ 000a463b data
.org 0xa463c
	.byte 0x40,0xdb,0x85,0x08	@ 000a463c data
.org 0xa4640
	ldrb r1, [r6, #10]	@ 000a4640 b17a
.org 0xa4642
	movs r0, #239	@ 000a4642 ef20
.org 0xa4644
	ands r0, r1	@ 000a4644 0840
.org 0xa4646
	strb r0, [r6, #10]	@ 000a4646 b072
.org 0xa4648
	movs r1, #1	@ 000a4648 0121
.org 0xa464a
	ands r1, r4	@ 000a464a 2140
.org 0xa464c
	adds r0, r6, #0	@ 000a464c 301c
.org 0xa464e
	adds r0, #76	@ 000a464e 4c30
.org 0xa4650
	movs r5, #0	@ 000a4650 0025
.org 0xa4652
	strb r1, [r0, #0]	@ 000a4652 0170
.org 0xa4654
	adds r3, r6, #0	@ 000a4654 331c
.org 0xa4656
	adds r3, #74	@ 000a4656 4a33
.org 0xa4658
	lsls r1, r1, #4	@ 000a4658 0901
.org 0xa465a
	ldrb r2, [r3, #0]	@ 000a465a 1a78
.org 0xa465c
	movs r0, #17	@ 000a465c 1120
.org 0xa465e
	negs r0, r0	@ 000a465e 4042
.org 0xa4660
	ands r0, r2	@ 000a4660 1040
.org 0xa4662
	orrs r0, r1	@ 000a4662 0843
.org 0xa4664
	strb r0, [r3, #0]	@ 000a4664 1870
.org 0xa4666
	ldr r1, [pc, #48]	@ 000a4666 0c49
.org 0xa4668
	adds r0, r6, #0	@ 000a4668 301c
.org 0xa466a
	bl 0x1cf00	@ 000a466a 78f749fc
.org 0xa466e
	ldrb r1, [r6, #10]	@ 000a466e b17a
.org 0xa4670
	movs r0, #4	@ 000a4670 0420
.org 0xa4672
	orrs r0, r1	@ 000a4672 0843
.org 0xa4674
	strb r0, [r6, #10]	@ 000a4674 b072
.org 0xa4676
	adds r4, r6, #0	@ 000a4676 341c
.org 0xa4678
	adds r4, #116	@ 000a4678 7434
.org 0xa467a
	ldr r1, [pc, #32]	@ 000a467a 0849
.org 0xa467c
	adds r2, r6, #0	@ 000a467c 321c
.org 0xa467e
	adds r2, #84	@ 000a467e 5432
.org 0xa4680
	adds r0, r4, #0	@ 000a4680 201c
.org 0xa4682
	movs r3, #3	@ 000a4682 0323
.org 0xa4684
	bl 0x5760	@ 000a4684 61f76cf8
.org 0xa4688
	str r6, [r4, #44]	@ 000a4688 e662
.org 0xa468a
	str r5, [r4, #36]	@ 000a468a 6562
.org 0xa468c
	adds r0, r6, #0	@ 000a468c 301c
.org 0xa468e
	bl 0xa46a0	@ 000a468e 00f007f8
