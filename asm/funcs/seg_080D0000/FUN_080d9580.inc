@ FUN_080d9580  entry 0x080d9580  size 284
.thumb
.org 0xd9580
FUN_080d9580:
	push {r4, r5, r6, lr}	@ 000d9580 70b5
.org 0xd9582
	adds r6, r0, #0	@ 000d9582 061c
.org 0xd9584
	ldr r1, [pc, #68]	@ 000d9584 1149
.org 0xd9586
	ldrb r0, [r6, #9]	@ 000d9586 707a
.org 0xd9588
	lsls r0, r0, #2	@ 000d9588 8000
.org 0xd958a
	adds r0, r0, r1	@ 000d958a 4018
.org 0xd958c
	movs r1, #1	@ 000d958c 0121
.org 0xd958e
	str r1, [r6, #12]	@ 000d958e f160
.org 0xd9590
	ldr r0, [r0, #0]	@ 000d9590 0068
.org 0xd9592
	ldr r0, [r0, #4]	@ 000d9592 4068
.org 0xd9594
	str r0, [r6, #20]	@ 000d9594 7061
.org 0xd9596
	adds r0, r6, #0	@ 000d9596 301c
.org 0xd9598
	bl 0x1cc9c	@ 000d9598 43f780fb
.org 0xd959c
	ldrb r1, [r6, #10]	@ 000d959c b17a
.org 0xd959e
	movs r0, #1	@ 000d959e 0120
.org 0xd95a0
	orrs r0, r1	@ 000d95a0 0843
.org 0xd95a2
	movs r1, #2	@ 000d95a2 0221
.org 0xd95a4
	orrs r0, r1	@ 000d95a4 0843
.org 0xd95a6
	strb r0, [r6, #10]	@ 000d95a6 b072
.org 0xd95a8
	adds r0, r6, #0	@ 000d95a8 301c
.org 0xd95aa
	bl 0x1ceec	@ 000d95aa 43f79ffc
.org 0xd95ae
	ldr r1, [pc, #32]	@ 000d95ae 0849
.org 0xd95b0
	adds r0, r6, #0	@ 000d95b0 301c
.org 0xd95b2
	bl 0x1cf00	@ 000d95b2 43f7a5fc
.org 0xd95b6
	adds r0, r6, #0	@ 000d95b6 301c
.org 0xd95b8
	bl 0x1cff0	@ 000d95b8 43f71afd
.org 0xd95bc
	ldrb r0, [r6, #17]	@ 000d95bc 707c
.org 0xd95be
	cmp r0, #1	@ 000d95be 0128
.org 0xd95c0
	beq.n 0xd9620	@ 000d95c0 2ed0
.org 0xd95c2
	cmp r0, #1	@ 000d95c2 0128
.org 0xd95c4
	bgt.n 0xd95d4	@ 000d95c4 06dc
.org 0xd95c6
	cmp r0, #0	@ 000d95c6 0028
.org 0xd95c8
	beq.n 0xd95da	@ 000d95c8 07d0
.org 0xd95ca
	b.n 0xd969e	@ 000d95ca 68e0
.org 0xd95cc
	.byte 0x64,0x6f,0x86,0x08	@ 000d95cc data
.org 0xd95d0
	.byte 0x07,0x81,0x00,0x00	@ 000d95d0 data
.org 0xd95d4
	cmp r0, #2	@ 000d95d4 0228
.org 0xd95d6
	beq.n 0xd9664	@ 000d95d6 45d0
.org 0xd95d8
	b.n 0xd969e	@ 000d95d8 61e0
.org 0xd95da
	ldr r5, [pc, #56]	@ 000d95da 0e4d
.org 0xd95dc
	ldr r0, [r5, #0]	@ 000d95dc 2868
.org 0xd95de
	ldr r4, [pc, #56]	@ 000d95de 0e4c
.org 0xd95e0
	muls r0, r4	@ 000d95e0 6043
.org 0xd95e2
	ldr r1, [pc, #56]	@ 000d95e2 0e49
.org 0xd95e4
	adds r0, r0, r1	@ 000d95e4 4018
.org 0xd95e6
	lsls r0, r0, #1	@ 000d95e6 4000
.org 0xd95e8
	lsrs r2, r0, #1	@ 000d95e8 4208
.org 0xd95ea
	lsrs r0, r0, #17	@ 000d95ea 400c
.org 0xd95ec
	movs r3, #15	@ 000d95ec 0f23
.org 0xd95ee
	ands r0, r3	@ 000d95ee 1840
.org 0xd95f0
	adds r0, #16	@ 000d95f0 1030
.org 0xd95f2
	str r0, [r6, #100]	@ 000d95f2 7066
.org 0xd95f4
	lsls r0, r0, #4	@ 000d95f4 0001
.org 0xd95f6
	str r0, [r6, #92]	@ 000d95f6 f065
.org 0xd95f8
	adds r0, r2, #0	@ 000d95f8 101c
.org 0xd95fa
	muls r0, r4	@ 000d95fa 6043
.org 0xd95fc
	adds r0, r0, r1	@ 000d95fc 4018
.org 0xd95fe
	lsls r0, r0, #1	@ 000d95fe 4000
.org 0xd9600
	lsrs r1, r0, #1	@ 000d9600 4108
.org 0xd9602
	str r1, [r5, #0]	@ 000d9602 2960
.org 0xd9604
	lsrs r0, r0, #17	@ 000d9604 400c
.org 0xd9606
	ands r0, r3	@ 000d9606 1840
.org 0xd9608
	adds r0, #28	@ 000d9608 1c30
.org 0xd960a
	str r0, [r6, #104]	@ 000d960a b066
.org 0xd960c
	lsls r0, r0, #4	@ 000d960c 0001
.org 0xd960e
	str r0, [r6, #96]	@ 000d960e 3066
.org 0xd9610
	b.n 0xd969e	@ 000d9610 45e0
.org 0xd9612
	.byte 0x00	@ 000d9612 data
.org 0xd9613
	.byte 0x00	@ 000d9613 data
.org 0xd9614
	.byte 0x38,0xdc,0x02,0x02	@ 000d9614 data
.org 0xd9618
	.byte 0xfd,0x43,0x03,0x00	@ 000d9618 data
.org 0xd961c
	.byte 0xc3,0x9e,0x26,0x00	@ 000d961c data
.org 0xd9620
	ldr r5, [pc, #52]	@ 000d9620 0d4d
.org 0xd9622
	ldr r0, [r5, #0]	@ 000d9622 2868
.org 0xd9624
	ldr r4, [pc, #52]	@ 000d9624 0d4c
.org 0xd9626
	adds r1, r0, #0	@ 000d9626 011c
.org 0xd9628
	muls r1, r4	@ 000d9628 6143
.org 0xd962a
	ldr r2, [pc, #52]	@ 000d962a 0d4a
.org 0xd962c
	adds r1, r1, r2	@ 000d962c 8918
.org 0xd962e
	lsls r1, r1, #1	@ 000d962e 4900
.org 0xd9630
	lsrs r0, r1, #1	@ 000d9630 4808
.org 0xd9632
	lsrs r1, r1, #17	@ 000d9632 490c
.org 0xd9634
	movs r3, #15	@ 000d9634 0f23
.org 0xd9636
	ands r1, r3	@ 000d9636 1940
.org 0xd9638
	adds r1, #32	@ 000d9638 2031
.org 0xd963a
	str r1, [r6, #100]	@ 000d963a 7166
.org 0xd963c
	muls r0, r4	@ 000d963c 6043
.org 0xd963e
	adds r0, r0, r2	@ 000d963e 8018
.org 0xd9640
	lsls r0, r0, #1	@ 000d9640 4000
.org 0xd9642
	lsrs r2, r0, #1	@ 000d9642 4208
.org 0xd9644
	str r2, [r5, #0]	@ 000d9644 2a60
.org 0xd9646
	lsrs r0, r0, #17	@ 000d9646 400c
.org 0xd9648
	ands r0, r3	@ 000d9648 1840
.org 0xd964a
	str r0, [r6, #104]	@ 000d964a b066
.org 0xd964c
	lsls r1, r1, #4	@ 000d964c 0901
.org 0xd964e
	str r1, [r6, #92]	@ 000d964e f165
.org 0xd9650
	movs r0, #0	@ 000d9650 0020
.org 0xd9652
	str r0, [r6, #96]	@ 000d9652 3066
.org 0xd9654
	b.n 0xd969e	@ 000d9654 23e0
.org 0xd9656
	.byte 0x00	@ 000d9656 data
.org 0xd9657
	.byte 0x00	@ 000d9657 data
.org 0xd9658
	.byte 0x38,0xdc,0x02,0x02	@ 000d9658 data
.org 0xd965c
	.byte 0xfd,0x43,0x03,0x00	@ 000d965c data
.org 0xd9660
	.byte 0xc3,0x9e,0x26,0x00	@ 000d9660 data
.org 0xd9664
	ldr r5, [pc, #88]	@ 000d9664 164d
.org 0xd9666
	ldr r0, [r5, #0]	@ 000d9666 2868
.org 0xd9668
	ldr r4, [pc, #88]	@ 000d9668 164c
.org 0xd966a
	muls r0, r4	@ 000d966a 6043
.org 0xd966c
	ldr r1, [pc, #88]	@ 000d966c 1649
.org 0xd966e
	adds r0, r0, r1	@ 000d966e 4018
.org 0xd9670
	lsls r0, r0, #1	@ 000d9670 4000
.org 0xd9672
	lsrs r2, r0, #1	@ 000d9672 4208
.org 0xd9674
	lsrs r0, r0, #17	@ 000d9674 400c
.org 0xd9676
	movs r3, #15	@ 000d9676 0f23
.org 0xd9678
	ands r0, r3	@ 000d9678 1840
.org 0xd967a
	adds r0, #16	@ 000d967a 1030
.org 0xd967c
	str r0, [r6, #100]	@ 000d967c 7066
.org 0xd967e
	lsls r0, r0, #4	@ 000d967e 0001
.org 0xd9680
	str r0, [r6, #92]	@ 000d9680 f065
.org 0xd9682
	adds r0, r2, #0	@ 000d9682 101c
.org 0xd9684
	muls r0, r4	@ 000d9684 6043
.org 0xd9686
	adds r0, r0, r1	@ 000d9686 4018
.org 0xd9688
	lsls r0, r0, #1	@ 000d9688 4000
.org 0xd968a
	lsrs r1, r0, #1	@ 000d968a 4108
.org 0xd968c
	str r1, [r5, #0]	@ 000d968c 2960
.org 0xd968e
	lsrs r0, r0, #17	@ 000d968e 400c
.org 0xd9690
	ands r0, r3	@ 000d9690 1840
.org 0xd9692
	movs r1, #28	@ 000d9692 1c21
.org 0xd9694
	negs r1, r1	@ 000d9694 4942
.org 0xd9696
	subs r1, r1, r0	@ 000d9696 091a
.org 0xd9698
	str r1, [r6, #104]	@ 000d9698 b166
.org 0xd969a
	lsls r1, r1, #4	@ 000d969a 0901
