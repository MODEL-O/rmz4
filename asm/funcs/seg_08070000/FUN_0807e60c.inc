@ FUN_0807e60c  entry 0x0807e60c  size 172
.thumb
.org 0x7e60c
FUN_0807e60c:
	push {r4, r5, r6, lr}	@ 0007e60c 70b5
.org 0x7e60e
	adds r4, r0, #0	@ 0007e60e 041c
.org 0x7e610
	ldrb r0, [r4, #10]	@ 0007e610 a07a
.org 0x7e612
	lsrs r5, r0, #4	@ 0007e612 0509
.org 0x7e614
	movs r6, #1	@ 0007e614 0126
.org 0x7e616
	ands r5, r6	@ 0007e616 3540
.org 0x7e618
	ldrb r0, [r4, #15]	@ 0007e618 e07b
.org 0x7e61a
	cmp r0, #0	@ 0007e61a 0028
.org 0x7e61c
	bne.n 0x7e664	@ 0007e61c 22d1
.org 0x7e61e
	adds r0, r4, #0	@ 0007e61e 201c
.org 0x7e620
	movs r1, #4	@ 0007e620 0421
.org 0x7e622
	bl 0x7e8c8	@ 0007e622 00f051f9
.org 0x7e626
	adds r3, r5, #1	@ 0007e626 6b1c
.org 0x7e628
	movs r0, #1	@ 0007e628 0120
.org 0x7e62a
	ands r3, r0	@ 0007e62a 0340
.org 0x7e62c
	adds r1, r3, #0	@ 0007e62c 191c
.org 0x7e62e
	ands r1, r6	@ 0007e62e 3140
.org 0x7e630
	adds r0, r4, #0	@ 0007e630 201c
.org 0x7e632
	adds r0, #76	@ 0007e632 4c30
.org 0x7e634
	strb r1, [r0, #0]	@ 0007e634 0170
.org 0x7e636
	adds r5, r4, #0	@ 0007e636 251c
.org 0x7e638
	adds r5, #74	@ 0007e638 4a35
.org 0x7e63a
	lsls r1, r1, #4	@ 0007e63a 0901
.org 0x7e63c
	ldrb r2, [r5, #0]	@ 0007e63c 2a78
.org 0x7e63e
	movs r0, #17	@ 0007e63e 1120
.org 0x7e640
	negs r0, r0	@ 0007e640 4042
.org 0x7e642
	ands r0, r2	@ 0007e642 1040
.org 0x7e644
	orrs r0, r1	@ 0007e644 0843
.org 0x7e646
	strb r0, [r5, #0]	@ 0007e646 2870
.org 0x7e648
	ands r3, r6	@ 0007e648 3340
.org 0x7e64a
	cmp r3, #0	@ 0007e64a 002b
.org 0x7e64c
	beq.n 0x7e656	@ 0007e64c 03d0
.org 0x7e64e
	ldrb r0, [r4, #10]	@ 0007e64e a07a
.org 0x7e650
	movs r1, #16	@ 0007e650 1021
.org 0x7e652
	orrs r0, r1	@ 0007e652 0843
.org 0x7e654
	b.n 0x7e65c	@ 0007e654 02e0
.org 0x7e656
	ldrb r1, [r4, #10]	@ 0007e656 a17a
.org 0x7e658
	movs r0, #239	@ 0007e658 ef20
.org 0x7e65a
	ands r0, r1	@ 0007e65a 0840
.org 0x7e65c
	strb r0, [r4, #10]	@ 0007e65c a072
.org 0x7e65e
	ldrb r0, [r4, #15]	@ 0007e65e e07b
.org 0x7e660
	adds r0, #1	@ 0007e660 0130
.org 0x7e662
	strb r0, [r4, #15]	@ 0007e662 e073
.org 0x7e664
	adds r5, r4, #0	@ 0007e664 251c
.org 0x7e666
	adds r5, #188	@ 0007e666 bc35
.org 0x7e668
	ldrb r0, [r5, #0]	@ 0007e668 2878
.org 0x7e66a
	cmp r0, #0	@ 0007e66a 0028
.org 0x7e66c
	beq.n 0x7e674	@ 0007e66c 02d0
.org 0x7e66e
	adds r0, r4, #0	@ 0007e66e 201c
.org 0x7e670
	bl 0x1cff0	@ 0007e670 9ef7befc
.org 0x7e674
	adds r0, r4, #0	@ 0007e674 201c
.org 0x7e676
	adds r0, #116	@ 0007e676 7430
.org 0x7e678
	ldr r3, [pc, #60]	@ 0007e678 0f4b
.org 0x7e67a
	ldr r2, [pc, #64]	@ 0007e67a 104a
.org 0x7e67c
	ldrb r1, [r5, #0]	@ 0007e67c 2978
.org 0x7e67e
	lsls r1, r1, #1	@ 0007e67e 4900
.org 0x7e680
	adds r1, r1, r2	@ 0007e680 8918
.org 0x7e682
	ldrh r2, [r1, #0]	@ 0007e682 0a88
.org 0x7e684
	lsls r2, r2, #2	@ 0007e684 9200
.org 0x7e686
	adds r2, r2, r3	@ 0007e686 d218
.org 0x7e688
	adds r1, r4, #0	@ 0007e688 211c
.org 0x7e68a
	adds r1, #113	@ 0007e68a 7131
.org 0x7e68c
	ldrb r1, [r1, #0]	@ 0007e68c 0978
.org 0x7e68e
	lsls r1, r1, #24	@ 0007e68e 0906
.org 0x7e690
	asrs r1, r1, #24	@ 0007e690 0916
.org 0x7e692
	ldr r2, [r2, #0]	@ 0007e692 1268
.org 0x7e694
	lsls r1, r1, #2	@ 0007e694 8900
.org 0x7e696
	adds r1, r1, r2	@ 0007e696 8918
.org 0x7e698
	ldr r1, [r1, #0]	@ 0007e698 0968
.org 0x7e69a
	bl 0x5784	@ 0007e69a 87f773f8
.org 0x7e69e
	adds r0, r4, #0	@ 0007e69e 201c
.org 0x7e6a0
	adds r0, #115	@ 0007e6a0 7330
.org 0x7e6a2
	ldrb r0, [r0, #0]	@ 0007e6a2 0078
.org 0x7e6a4
	cmp r0, #3	@ 0007e6a4 0328
.org 0x7e6a6
	bne.n 0x7e6b2	@ 0007e6a6 04d1
.org 0x7e6a8
	ldrb r0, [r4, #14]	@ 0007e6a8 a07b
.org 0x7e6aa
	adds r0, #1	@ 0007e6aa 0130
.org 0x7e6ac
	movs r1, #0	@ 0007e6ac 0021
.org 0x7e6ae
	strb r0, [r4, #14]	@ 0007e6ae a073
.org 0x7e6b0
	strb r1, [r4, #15]	@ 0007e6b0 e173
.org 0x7e6b2
	pop {r4, r5, r6}	@ 0007e6b2 70bc
.org 0x7e6b4
	pop {r0}	@ 0007e6b4 01bc
.org 0x7e6b6
	bx r0	@ 0007e6b6 0047
