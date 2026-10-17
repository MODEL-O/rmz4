@ FUN_080ae714  entry 0x080ae714  size 96
.thumb
.org 0xae714
FUN_080ae714:
	push {r4, r5, r6, r7, lr}	@ 000ae714 f0b5
.org 0xae716
	adds r6, r0, #0	@ 000ae716 061c
.org 0xae718
	adds r7, r1, #0	@ 000ae718 0f1c
.org 0xae71a
	lsls r2, r2, #24	@ 000ae71a 1206
.org 0xae71c
	lsrs r5, r2, #24	@ 000ae71c 150e
.org 0xae71e
	lsls r3, r3, #24	@ 000ae71e 1b06
.org 0xae720
	lsrs r4, r3, #24	@ 000ae720 1c0e
.org 0xae722
	ldr r0, [pc, #80]	@ 000ae722 1448
.org 0xae724
	ldr r0, [r0, #0]	@ 000ae724 0068
.org 0xae726
	bl 0x5500	@ 000ae726 56f7ebfe
.org 0xae72a
	adds r3, r0, #0	@ 000ae72a 031c
.org 0xae72c
	cmp r3, #0	@ 000ae72c 002b
.org 0xae72e
	beq.n 0xae76e	@ 000ae72e 1ed0
.org 0xae730
	adds r1, r3, #0	@ 000ae730 191c
.org 0xae732
	adds r1, #37	@ 000ae732 2531
.org 0xae734
	movs r2, #0	@ 000ae734 0022
.org 0xae736
	movs r0, #24	@ 000ae736 1820
.org 0xae738
	strb r0, [r1, #0]	@ 000ae738 0870
.org 0xae73a
	ldr r0, [pc, #60]	@ 000ae73a 0f48
.org 0xae73c
	movs r1, #81	@ 000ae73c 5121
.org 0xae73e
	strb r1, [r3, #9]	@ 000ae73e 5972
.org 0xae740
	adds r1, #243	@ 000ae740 f331
.org 0xae742
	adds r0, r0, r1	@ 000ae742 4018
.org 0xae744
	ldr r0, [r0, #0]	@ 000ae744 0068
.org 0xae746
	ldr r0, [r0, #0]	@ 000ae746 0068
.org 0xae748
	str r0, [r3, #20]	@ 000ae748 5861
.org 0xae74a
	movs r0, #0	@ 000ae74a 0020
.org 0xae74c
	strh r2, [r3, #32]	@ 000ae74c 1a84
.org 0xae74e
	adds r1, r3, #0	@ 000ae74e 191c
.org 0xae750
	adds r1, #34	@ 000ae750 2231
.org 0xae752
	strb r0, [r1, #0]	@ 000ae752 0870
.org 0xae754
	ldrb r1, [r3, #11]	@ 000ae754 d97a
.org 0xae756
	movs r0, #16	@ 000ae756 1020
.org 0xae758
	orrs r0, r1	@ 000ae758 0843
.org 0xae75a
	strb r0, [r3, #11]	@ 000ae75a d872
.org 0xae75c
	ldrb r0, [r3, #28]	@ 000ae75c 187f
.org 0xae75e
	strb r0, [r3, #29]	@ 000ae75e 5877
.org 0xae760
	str r6, [r3, #40]	@ 000ae760 9e62
.org 0xae762
	ldr r0, [r7, #0]	@ 000ae762 3868
.org 0xae764
	ldr r1, [r7, #4]	@ 000ae764 7968
.org 0xae766
	str r0, [r3, #84]	@ 000ae766 5865
.org 0xae768
	str r1, [r3, #88]	@ 000ae768 9965
.org 0xae76a
	strb r5, [r3, #16]	@ 000ae76a 1d74
.org 0xae76c
	strb r4, [r3, #17]	@ 000ae76c 5c74
.org 0xae76e
	pop {r4, r5, r6, r7}	@ 000ae76e f0bc
.org 0xae770
	pop {r0}	@ 000ae770 01bc
.org 0xae772
	bx r0	@ 000ae772 0047
