@ FUN_080c4610  entry 0x080c4610  size 108
.thumb
.org 0xc4610
FUN_080c4610:
	push {r4, r5, r6, lr}	@ 000c4610 70b5
.org 0xc4612
	adds r5, r0, #0	@ 000c4612 051c
.org 0xc4614
	ldr r0, [r5, #40]	@ 000c4614 a86a
.org 0xc4616
	ldrb r4, [r0, #10]	@ 000c4616 847a
.org 0xc4618
	lsrs r4, r4, #4	@ 000c4618 2409
.org 0xc461a
	movs r2, #1	@ 000c461a 0122
.org 0xc461c
	ands r4, r2	@ 000c461c 1440
.org 0xc461e
	ldr r1, [pc, #48]	@ 000c461e 0c49
.org 0xc4620
	ldrb r0, [r5, #9]	@ 000c4620 687a
.org 0xc4622
	lsls r0, r0, #2	@ 000c4622 8000
.org 0xc4624
	adds r0, r0, r1	@ 000c4624 4018
.org 0xc4626
	str r2, [r5, #12]	@ 000c4626 ea60
.org 0xc4628
	ldr r0, [r0, #0]	@ 000c4628 0068
.org 0xc462a
	ldr r0, [r0, #4]	@ 000c462a 4068
.org 0xc462c
	str r0, [r5, #20]	@ 000c462c 6861
.org 0xc462e
	ldrb r1, [r5, #10]	@ 000c462e a97a
.org 0xc4630
	movs r0, #1	@ 000c4630 0120
.org 0xc4632
	movs r6, #0	@ 000c4632 0026
.org 0xc4634
	orrs r0, r1	@ 000c4634 0843
.org 0xc4636
	movs r1, #2	@ 000c4636 0221
.org 0xc4638
	orrs r0, r1	@ 000c4638 0843
.org 0xc463a
	strb r0, [r5, #10]	@ 000c463a a872
.org 0xc463c
	adds r0, r5, #0	@ 000c463c 281c
.org 0xc463e
	bl 0x1cc9c	@ 000c463e 58f72dfb
.org 0xc4642
	cmp r4, #0	@ 000c4642 002c
.org 0xc4644
	beq.n 0xc4654	@ 000c4644 06d0
.org 0xc4646
	ldrb r0, [r5, #10]	@ 000c4646 a87a
.org 0xc4648
	movs r1, #16	@ 000c4648 1021
.org 0xc464a
	orrs r0, r1	@ 000c464a 0843
.org 0xc464c
	b.n 0xc465a	@ 000c464c 05e0
.org 0xc464e
	.byte 0x00	@ 000c464e data
.org 0xc464f
	.byte 0x00	@ 000c464f data
.org 0xc4650
	.byte 0xf4,0x49,0x86,0x08	@ 000c4650 data
.org 0xc4654
	ldrb r1, [r5, #10]	@ 000c4654 a97a
.org 0xc4656
	movs r0, #239	@ 000c4656 ef20
.org 0xc4658
	ands r0, r1	@ 000c4658 0840
.org 0xc465a
	strb r0, [r5, #10]	@ 000c465a a872
.org 0xc465c
	adds r1, r4, #0	@ 000c465c 211c
.org 0xc465e
	adds r0, r5, #0	@ 000c465e 281c
.org 0xc4660
	adds r0, #76	@ 000c4660 4c30
.org 0xc4662
	strb r1, [r0, #0]	@ 000c4662 0170
.org 0xc4664
	adds r3, r5, #0	@ 000c4664 2b1c
.org 0xc4666
	adds r3, #74	@ 000c4666 4a33
.org 0xc4668
	lsls r1, r1, #4	@ 000c4668 0901
.org 0xc466a
	ldrb r2, [r3, #0]	@ 000c466a 1a78
.org 0xc466c
	movs r0, #17	@ 000c466c 1120
.org 0xc466e
	negs r0, r0	@ 000c466e 4042
.org 0xc4670
	ands r0, r2	@ 000c4670 1040
.org 0xc4672
	orrs r0, r1	@ 000c4672 0843
.org 0xc4674
	strb r0, [r3, #0]	@ 000c4674 1870
.org 0xc4676
	adds r0, r5, #0	@ 000c4676 281c
.org 0xc4678
	bl 0xc4684	@ 000c4678 00f004f8
