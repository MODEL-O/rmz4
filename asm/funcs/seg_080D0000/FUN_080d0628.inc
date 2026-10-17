@ FUN_080d0628  entry 0x080d0628  size 156
.thumb
.org 0xd0628
FUN_080d0628:
	push {r4, r5, r6, lr}	@ 000d0628 70b5
.org 0xd062a
	adds r6, r0, #0	@ 000d062a 061c
.org 0xd062c
	bl 0x1cc9c	@ 000d062c 4cf736fb
.org 0xd0630
	ldrb r0, [r6, #10]	@ 000d0630 b07a
.org 0xd0632
	movs r2, #1	@ 000d0632 0122
.org 0xd0634
	movs r1, #0	@ 000d0634 0021
.org 0xd0636
	movs r5, #0	@ 000d0636 0025
.org 0xd0638
	orrs r2, r0	@ 000d0638 0243
.org 0xd063a
	movs r0, #2	@ 000d063a 0220
.org 0xd063c
	orrs r2, r0	@ 000d063c 0243
.org 0xd063e
	orrs r2, r1	@ 000d063e 0a43
.org 0xd0640
	strb r2, [r6, #10]	@ 000d0640 b272
.org 0xd0642
	ldr r1, [pc, #128]	@ 000d0642 2049
.org 0xd0644
	ldrb r0, [r6, #9]	@ 000d0644 707a
.org 0xd0646
	lsls r0, r0, #2	@ 000d0646 8000
.org 0xd0648
	adds r0, r0, r1	@ 000d0648 4018
.org 0xd064a
	movs r1, #1	@ 000d064a 0121
.org 0xd064c
	str r1, [r6, #12]	@ 000d064c f160
.org 0xd064e
	ldr r0, [r0, #0]	@ 000d064e 0068
.org 0xd0650
	ldr r0, [r0, #4]	@ 000d0650 4068
.org 0xd0652
	str r0, [r6, #20]	@ 000d0652 7061
.org 0xd0654
	movs r0, #4	@ 000d0654 0420
.org 0xd0656
	orrs r2, r0	@ 000d0656 0243
.org 0xd0658
	strb r2, [r6, #10]	@ 000d0658 b272
.org 0xd065a
	adds r4, r6, #0	@ 000d065a 341c
.org 0xd065c
	adds r4, #116	@ 000d065c 7434
.org 0xd065e
	ldr r1, [pc, #104]	@ 000d065e 1a49
.org 0xd0660
	adds r2, r6, #0	@ 000d0660 321c
.org 0xd0662
	adds r2, #84	@ 000d0662 5432
.org 0xd0664
	adds r0, r4, #0	@ 000d0664 201c
.org 0xd0666
	movs r3, #255	@ 000d0666 ff23
.org 0xd0668
	bl 0x5760	@ 000d0668 35f77af8
.org 0xd066c
	str r6, [r4, #44]	@ 000d066c e662
.org 0xd066e
	str r5, [r4, #36]	@ 000d066e 6562
.org 0xd0670
	ldr r2, [pc, #88]	@ 000d0670 164a
.org 0xd0672
	ldrb r0, [r6, #16]	@ 000d0672 307c
.org 0xd0674
	lsls r0, r0, #29	@ 000d0674 4007
.org 0xd0676
	movs r1, #128	@ 000d0676 8021
.org 0xd0678
	lsls r1, r1, #23	@ 000d0678 c905
.org 0xd067a
	adds r0, r0, r1	@ 000d067a 4018
.org 0xd067c
	lsrs r0, r0, #23	@ 000d067c c00d
.org 0xd067e
	adds r0, r0, r2	@ 000d067e 8018
.org 0xd0680
	movs r3, #0	@ 000d0680 0023
.org 0xd0682
	ldrsh r1, [r0, r3]	@ 000d0682 c15e
.org 0xd0684
	lsls r0, r1, #1	@ 000d0684 4800
.org 0xd0686
	adds r0, r0, r1	@ 000d0686 4018
.org 0xd0688
	lsls r0, r0, #7	@ 000d0688 c001
.org 0xd068a
	cmp r0, #0	@ 000d068a 0028
.org 0xd068c
	bge.n 0xd0690	@ 000d068c 00da
.org 0xd068e
	adds r0, #255	@ 000d068e ff30
.org 0xd0690
	asrs r0, r0, #8	@ 000d0690 0012
.org 0xd0692
	str r0, [r6, #92]	@ 000d0692 f065
.org 0xd0694
	ldrb r0, [r6, #16]	@ 000d0694 307c
.org 0xd0696
	lsls r0, r0, #29	@ 000d0696 4007
.org 0xd0698
	lsrs r0, r0, #23	@ 000d0698 c00d
.org 0xd069a
	adds r0, r0, r2	@ 000d069a 8018
.org 0xd069c
	movs r2, #0	@ 000d069c 0022
.org 0xd069e
	ldrsh r1, [r0, r2]	@ 000d069e 815e
.org 0xd06a0
	lsls r0, r1, #1	@ 000d06a0 4800
.org 0xd06a2
	adds r0, r0, r1	@ 000d06a2 4018
.org 0xd06a4
	lsls r0, r0, #7	@ 000d06a4 c001
.org 0xd06a6
	cmp r0, #0	@ 000d06a6 0028
.org 0xd06a8
	bge.n 0xd06ac	@ 000d06a8 00da
.org 0xd06aa
	adds r0, #255	@ 000d06aa ff30
.org 0xd06ac
	asrs r0, r0, #8	@ 000d06ac 0012
.org 0xd06ae
	str r0, [r6, #96]	@ 000d06ae 3066
.org 0xd06b0
	adds r0, r6, #0	@ 000d06b0 301c
.org 0xd06b2
	movs r1, #1	@ 000d06b2 0121
.org 0xd06b4
	bl 0x1cf00	@ 000d06b4 4cf724fc
.org 0xd06b8
	adds r0, r6, #0	@ 000d06b8 301c
.org 0xd06ba
	bl 0xd06d0	@ 000d06ba 00f009f8
.org 0xd06be
	pop {r4, r5, r6}	@ 000d06be 70bc
.org 0xd06c0
	pop {r0}	@ 000d06c0 01bc
.org 0xd06c2
	bx r0	@ 000d06c2 0047
