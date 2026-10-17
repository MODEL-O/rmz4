@ FUN_0802a60c  entry 0x0802a60c  size 98
.thumb
.org 0x2a60c
FUN_0802a60c:
	push {r4, lr}	@ 0002a60c 10b5
.org 0x2a60e
	adds r4, r0, #0	@ 0002a60e 041c
.org 0x2a610
	ldr r0, [pc, #84]	@ 0002a610 1548
.org 0x2a612
	ldr r1, [pc, #88]	@ 0002a612 1649
.org 0x2a614
	adds r0, r0, r1	@ 0002a614 4018
.org 0x2a616
	ldr r1, [r0, #0]	@ 0002a616 0168
.org 0x2a618
	adds r0, r1, #0	@ 0002a618 081c
.org 0x2a61a
	adds r0, #180	@ 0002a61a b430
.org 0x2a61c
	ldrb r0, [r0, #19]	@ 0002a61c c07c
.org 0x2a61e
	cmp r0, #1	@ 0002a61e 0128
.org 0x2a620
	beq.n 0x2a662	@ 0002a620 1fd0
.org 0x2a622
	cmp r0, #3	@ 0002a622 0328
.org 0x2a624
	beq.n 0x2a662	@ 0002a624 1dd0
.org 0x2a626
	cmp r0, #2	@ 0002a626 0228
.org 0x2a628
	beq.n 0x2a662	@ 0002a628 1bd0
.org 0x2a62a
	ldr r0, [pc, #68]	@ 0002a62a 1148
.org 0x2a62c
	ldrh r0, [r0, #0]	@ 0002a62c 0088
.org 0x2a62e
	subs r0, #3	@ 0002a62e 0338
.org 0x2a630
	lsls r0, r0, #16	@ 0002a630 0004
.org 0x2a632
	lsrs r0, r0, #16	@ 0002a632 000c
.org 0x2a634
	cmp r0, #7	@ 0002a634 0728
.org 0x2a636
	bhi.n 0x2a662	@ 0002a636 14d8
.org 0x2a638
	ldrb r0, [r4, #1]	@ 0002a638 6078
.org 0x2a63a
	cmp r0, #0	@ 0002a63a 0028
.org 0x2a63c
	bne.n 0x2a65a	@ 0002a63c 0dd1
.org 0x2a63e
	adds r1, #244	@ 0002a63e f431
.org 0x2a640
	ldrb r0, [r1, #0]	@ 0002a640 0878
.org 0x2a642
	cmp r0, #7	@ 0002a642 0728
.org 0x2a644
	bhi.n 0x2a662	@ 0002a644 0dd8
.org 0x2a646
	adds r0, #1	@ 0002a646 0130
.org 0x2a648
	strb r0, [r1, #0]	@ 0002a648 0870
.org 0x2a64a
	movs r0, #138	@ 0002a64a 8a20
.org 0x2a64c
	lsls r0, r0, #1	@ 0002a64c 4000
.org 0x2a64e
	movs r1, #0	@ 0002a64e 0021
.org 0x2a650
	bl 0x10e608	@ 0002a650 e3f0daff
.org 0x2a654
	ldrb r0, [r4, #1]	@ 0002a654 6078
.org 0x2a656
	adds r0, #1	@ 0002a656 0130
.org 0x2a658
	strb r0, [r4, #1]	@ 0002a658 6070
.org 0x2a65a
	ldr r0, [pc, #24]	@ 0002a65a 0648
.org 0x2a65c
	ldrh r0, [r0, #2]	@ 0002a65c 4088
.org 0x2a65e
	cmp r0, #0	@ 0002a65e 0028
.org 0x2a660
	bne.n 0x2a678	@ 0002a660 0ad1
.org 0x2a662
	movs r0, #0	@ 0002a662 0020
.org 0x2a664
	b.n 0x2a67a	@ 0002a664 09e0
.org 0x2a666
	.byte 0x00	@ 0002a666 data
.org 0x2a667
	.byte 0x00	@ 0002a667 data
.org 0x2a668
	.byte 0x10,0xf6,0x02,0x02	@ 0002a668 data
.org 0x2a66c
	.byte 0xa8,0x63,0x00,0x00	@ 0002a66c data
