@ FUN_080d35d8  entry 0x080d35d8  size 180
.thumb
.org 0xd35d8
FUN_080d35d8:
	push {r4, r5, r6, lr}	@ 000d35d8 70b5
.org 0xd35da
	adds r6, r0, #0	@ 000d35da 061c
.org 0xd35dc
	ldr r4, [r6, #40]	@ 000d35dc b46a
.org 0xd35de
	bl 0x1cc9c	@ 000d35de 49f75dfb
.org 0xd35e2
	ldrb r1, [r4, #10]	@ 000d35e2 a17a
.org 0xd35e4
	movs r0, #8	@ 000d35e4 0820
.org 0xd35e6
	ands r0, r1	@ 000d35e6 0840
.org 0xd35e8
	cmp r0, #0	@ 000d35e8 0028
.org 0xd35ea
	beq.n 0xd3606	@ 000d35ea 0cd0
.org 0xd35ec
	adds r0, r4, #0	@ 000d35ec 201c
.org 0xd35ee
	adds r0, #73	@ 000d35ee 4930
.org 0xd35f0
	ldrb r0, [r0, #0]	@ 000d35f0 0078
.org 0xd35f2
	adds r3, r6, #0	@ 000d35f2 331c
.org 0xd35f4
	adds r3, #73	@ 000d35f4 4933
.org 0xd35f6
	movs r1, #12	@ 000d35f6 0c21
.org 0xd35f8
	ands r1, r0	@ 000d35f8 0140
.org 0xd35fa
	ldrb r2, [r3, #0]	@ 000d35fa 1a78
.org 0xd35fc
	movs r0, #13	@ 000d35fc 0d20
.org 0xd35fe
	negs r0, r0	@ 000d35fe 4042
.org 0xd3600
	ands r0, r2	@ 000d3600 1040
.org 0xd3602
	orrs r0, r1	@ 000d3602 0843
.org 0xd3604
	strb r0, [r3, #0]	@ 000d3604 1870
.org 0xd3606
	adds r1, r6, #0	@ 000d3606 311c
.org 0xd3608
	adds r1, #37	@ 000d3608 2531
.org 0xd360a
	movs r0, #0	@ 000d360a 0020
.org 0xd360c
	strb r0, [r1, #0]	@ 000d360c 0870
.org 0xd360e
	adds r0, r6, #0	@ 000d360e 301c
.org 0xd3610
	movs r1, #14	@ 000d3610 0e21
.org 0xd3612
	bl 0x1d3d0	@ 000d3612 49f7ddfe
.org 0xd3616
	ldr r2, [pc, #36]	@ 000d3616 094a
.org 0xd3618
	ldr r1, [r2, #0]	@ 000d3618 1168
.org 0xd361a
	ldr r0, [pc, #36]	@ 000d361a 0948
.org 0xd361c
	muls r0, r1	@ 000d361c 4843
.org 0xd361e
	ldr r1, [pc, #36]	@ 000d361e 0949
.org 0xd3620
	adds r0, r0, r1	@ 000d3620 4018
.org 0xd3622
	lsls r0, r0, #1	@ 000d3622 4000
.org 0xd3624
	lsrs r1, r0, #1	@ 000d3624 4108
.org 0xd3626
	str r1, [r2, #0]	@ 000d3626 1160
.org 0xd3628
	lsrs r2, r0, #17	@ 000d3628 420c
.org 0xd362a
	movs r0, #1	@ 000d362a 0120
.org 0xd362c
	ands r2, r0	@ 000d362c 0240
.org 0xd362e
	cmp r2, #0	@ 000d362e 002a
.org 0xd3630
	beq.n 0xd3648	@ 000d3630 0ad0
.org 0xd3632
	ldrb r0, [r6, #10]	@ 000d3632 b07a
.org 0xd3634
	movs r1, #16	@ 000d3634 1021
.org 0xd3636
	orrs r0, r1	@ 000d3636 0843
.org 0xd3638
	b.n 0xd364e	@ 000d3638 09e0
.org 0xd363a
	.byte 0x00	@ 000d363a data
.org 0xd363b
	.byte 0x00	@ 000d363b data
.org 0xd363c
	.byte 0x38,0xdc,0x02,0x02	@ 000d363c data
.org 0xd3640
	.byte 0xfd,0x43,0x03,0x00	@ 000d3640 data
.org 0xd3644
	.byte 0xc3,0x9e,0x26,0x00	@ 000d3644 data
.org 0xd3648
	ldrb r1, [r6, #10]	@ 000d3648 b17a
.org 0xd364a
	movs r0, #239	@ 000d364a ef20
.org 0xd364c
	ands r0, r1	@ 000d364c 0840
.org 0xd364e
	strb r0, [r6, #10]	@ 000d364e b072
.org 0xd3650
	movs r4, #1	@ 000d3650 0124
.org 0xd3652
	movs r5, #1	@ 000d3652 0125
.org 0xd3654
	adds r1, r5, #0	@ 000d3654 291c
.org 0xd3656
	ands r1, r2	@ 000d3656 1140
.org 0xd3658
	adds r0, r6, #0	@ 000d3658 301c
.org 0xd365a
	adds r0, #76	@ 000d365a 4c30
.org 0xd365c
	strb r1, [r0, #0]	@ 000d365c 0170
.org 0xd365e
	adds r3, r6, #0	@ 000d365e 331c
.org 0xd3660
	adds r3, #74	@ 000d3660 4a33
.org 0xd3662
	lsls r1, r1, #4	@ 000d3662 0901
.org 0xd3664
	ldrb r2, [r3, #0]	@ 000d3664 1a78
.org 0xd3666
	movs r0, #17	@ 000d3666 1120
.org 0xd3668
	negs r0, r0	@ 000d3668 4042
.org 0xd366a
	ands r0, r2	@ 000d366a 1040
.org 0xd366c
	orrs r0, r1	@ 000d366c 0843
.org 0xd366e
	strb r0, [r3, #0]	@ 000d366e 1870
.org 0xd3670
	ldr r1, [pc, #40]	@ 000d3670 0a49
.org 0xd3672
	adds r0, r6, #0	@ 000d3672 301c
.org 0xd3674
	bl 0x1cf00	@ 000d3674 49f744fc
.org 0xd3678
	ldrb r0, [r6, #10]	@ 000d3678 b07a
.org 0xd367a
	orrs r4, r0	@ 000d367a 0443
.org 0xd367c
	strb r4, [r6, #10]	@ 000d367c b472
.org 0xd367e
	ldr r1, [pc, #32]	@ 000d367e 0849
.org 0xd3680
	ldrb r0, [r6, #9]	@ 000d3680 707a
.org 0xd3682
	lsls r0, r0, #2	@ 000d3682 8000
.org 0xd3684
	adds r0, r0, r1	@ 000d3684 4018
.org 0xd3686
	str r5, [r6, #12]	@ 000d3686 f560
.org 0xd3688
	ldr r0, [r0, #0]	@ 000d3688 0068
.org 0xd368a
	ldr r0, [r0, #4]	@ 000d368a 4068
