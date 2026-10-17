@ FUN_080476dc  entry 0x080476dc  size 130
.thumb
.org 0x476dc
FUN_080476dc:
	push {r4, r5, lr}	@ 000476dc 30b5
.org 0x476de
	adds r4, r0, #0	@ 000476de 041c
.org 0x476e0
	lsls r1, r1, #24	@ 000476e0 0906
.org 0x476e2
	lsrs r5, r1, #24	@ 000476e2 0d0e
.org 0x476e4
	ldr r0, [pc, #60]	@ 000476e4 0f48
.org 0x476e6
	ldr r0, [r0, #0]	@ 000476e6 0068
.org 0x476e8
	bl 0x5500	@ 000476e8 bdf70aff
.org 0x476ec
	adds r2, r0, #0	@ 000476ec 021c
.org 0x476ee
	cmp r2, #0	@ 000476ee 002a
.org 0x476f0
	beq.n 0x47766	@ 000476f0 39d0
.org 0x476f2
	adds r0, r4, #0	@ 000476f2 201c
.org 0x476f4
	adds r0, #248	@ 000476f4 f830
.org 0x476f6
	ldrb r0, [r0, #0]	@ 000476f6 0078
.org 0x476f8
	cmp r0, #2	@ 000476f8 0228
.org 0x476fa
	bne.n 0x47734	@ 000476fa 1bd1
.org 0x476fc
	ldr r1, [pc, #40]	@ 000476fc 0a49
.org 0x476fe
	movs r0, #28	@ 000476fe 1c20
.org 0x47700
	strb r0, [r2, #9]	@ 00047700 5072
.org 0x47702
	ldr r0, [r1, #112]	@ 00047702 086f
.org 0x47704
	ldr r0, [r0, #0]	@ 00047704 0068
.org 0x47706
	str r0, [r2, #20]	@ 00047706 5061
.org 0x47708
	ldrb r1, [r2, #11]	@ 00047708 d17a
.org 0x4770a
	movs r0, #191	@ 0004770a bf20
.org 0x4770c
	ands r0, r1	@ 0004770c 0840
.org 0x4770e
	strb r0, [r2, #11]	@ 0004770e d072
.org 0x47710
	adds r1, r2, #0	@ 00047710 111c
.org 0x47712
	adds r1, #37	@ 00047712 2531
.org 0x47714
	movs r0, #16	@ 00047714 1020
.org 0x47716
	strb r0, [r1, #0]	@ 00047716 0870
.org 0x47718
	ldr r0, [pc, #16]	@ 00047718 0448
.org 0x4771a
	ldrh r0, [r0, #0]	@ 0004771a 0088
.org 0x4771c
	strh r0, [r2, #32]	@ 0004771c 1084
.org 0x4771e
	ldr r0, [pc, #16]	@ 0004771e 0448
.org 0x47720
	ldrb r0, [r0, #0]	@ 00047720 0078
.org 0x47722
	b.n 0x4775a	@ 00047722 1ae0
.org 0x47724
	.byte 0x88,0xed,0x02,0x02	@ 00047724 data
.org 0x47728
	.byte 0xf8,0x39,0x85,0x08	@ 00047728 data
.org 0x4772c
	.byte 0xfc,0x36,0x85,0x08	@ 0004772c data
.org 0x47730
	.byte 0x04,0x37,0x85,0x08	@ 00047730 data
.org 0x47734
	ldr r1, [pc, #56]	@ 00047734 0e49
.org 0x47736
	movs r0, #28	@ 00047736 1c20
.org 0x47738
	strb r0, [r2, #9]	@ 00047738 5072
.org 0x4773a
	ldr r0, [r1, #112]	@ 0004773a 086f
.org 0x4773c
	ldr r0, [r0, #0]	@ 0004773c 0068
.org 0x4773e
	str r0, [r2, #20]	@ 0004773e 5061
.org 0x47740
	ldrb r1, [r2, #11]	@ 00047740 d17a
.org 0x47742
	movs r0, #191	@ 00047742 bf20
.org 0x47744
	ands r0, r1	@ 00047744 0840
.org 0x47746
	strb r0, [r2, #11]	@ 00047746 d072
.org 0x47748
	adds r1, r2, #0	@ 00047748 111c
.org 0x4774a
	adds r1, #37	@ 0004774a 2531
.org 0x4774c
	movs r0, #16	@ 0004774c 1020
.org 0x4774e
	strb r0, [r1, #0]	@ 0004774e 0870
.org 0x47750
	ldr r0, [pc, #32]	@ 00047750 0848
.org 0x47752
	ldrh r0, [r0, #2]	@ 00047752 4088
.org 0x47754
	strh r0, [r2, #32]	@ 00047754 1084
.org 0x47756
	ldr r0, [pc, #32]	@ 00047756 0848
.org 0x47758
	ldrb r0, [r0, #1]	@ 00047758 4078
.org 0x4775a
	subs r1, #3	@ 0004775a 0339
.org 0x4775c
	strb r0, [r1, #0]	@ 0004775c 0870
