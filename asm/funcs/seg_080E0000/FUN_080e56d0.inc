@ FUN_080e56d0  entry 0x080e56d0  size 130
.thumb
.org 0xe56d0
FUN_080e56d0:
	push {r4, r5, r6, r7, lr}	@ 000e56d0 f0b5
.org 0xe56d2
	adds r6, r0, #0	@ 000e56d2 061c
.org 0xe56d4
	lsls r4, r1, #16	@ 000e56d4 0c04
.org 0xe56d6
	lsrs r7, r4, #16	@ 000e56d6 270c
.org 0xe56d8
	lsls r2, r2, #24	@ 000e56d8 1206
.org 0xe56da
	lsrs r5, r2, #24	@ 000e56da 150e
.org 0xe56dc
	ldr r0, [pc, #76]	@ 000e56dc 1348
.org 0xe56de
	ldr r0, [r0, #0]	@ 000e56de 0068
.org 0xe56e0
	bl 0x5500	@ 000e56e0 1ff70eff
.org 0xe56e4
	adds r3, r0, #0	@ 000e56e4 031c
.org 0xe56e6
	cmp r3, #0	@ 000e56e6 002b
.org 0xe56e8
	beq.n 0xe5756	@ 000e56e8 35d0
.org 0xe56ea
	adds r1, r3, #0	@ 000e56ea 191c
.org 0xe56ec
	adds r1, #37	@ 000e56ec 2531
.org 0xe56ee
	movs r2, #0	@ 000e56ee 0022
.org 0xe56f0
	movs r0, #1	@ 000e56f0 0120
.org 0xe56f2
	strb r0, [r1, #0]	@ 000e56f2 0870
.org 0xe56f4
	ldr r0, [pc, #56]	@ 000e56f4 0e48
.org 0xe56f6
	movs r1, #77	@ 000e56f6 4d21
.org 0xe56f8
	strb r1, [r3, #9]	@ 000e56f8 5972
.org 0xe56fa
	adds r1, #231	@ 000e56fa e731
.org 0xe56fc
	adds r0, r0, r1	@ 000e56fc 4018
.org 0xe56fe
	ldr r0, [r0, #0]	@ 000e56fe 0068
.org 0xe5700
	ldr r0, [r0, #0]	@ 000e5700 0068
.org 0xe5702
	str r0, [r3, #20]	@ 000e5702 5861
.org 0xe5704
	movs r0, #0	@ 000e5704 0020
.org 0xe5706
	strh r2, [r3, #32]	@ 000e5706 1a84
.org 0xe5708
	adds r1, r3, #0	@ 000e5708 191c
.org 0xe570a
	adds r1, #34	@ 000e570a 2231
.org 0xe570c
	strb r0, [r1, #0]	@ 000e570c 0870
.org 0xe570e
	ldr r0, [r6, #0]	@ 000e570e 3068
.org 0xe5710
	ldr r1, [r6, #4]	@ 000e5710 7168
.org 0xe5712
	str r0, [r3, #84]	@ 000e5712 5865
.org 0xe5714
	str r1, [r3, #88]	@ 000e5714 9965
.org 0xe5716
	lsrs r0, r4, #24	@ 000e5716 200e
.org 0xe5718
	strb r0, [r3, #16]	@ 000e5718 1874
.org 0xe571a
	strb r7, [r3, #17]	@ 000e571a 5f74
.org 0xe571c
	adds r2, r5, #0	@ 000e571c 2a1c
.org 0xe571e
	cmp r2, #0	@ 000e571e 002a
.org 0xe5720
	beq.n 0xe5734	@ 000e5720 08d0
.org 0xe5722
	ldrb r0, [r3, #10]	@ 000e5722 987a
.org 0xe5724
	movs r1, #16	@ 000e5724 1021
.org 0xe5726
	orrs r0, r1	@ 000e5726 0843
.org 0xe5728
	b.n 0xe573a	@ 000e5728 07e0
.org 0xe572a
	.byte 0x00	@ 000e572a data
.org 0xe572b
	.byte 0x00	@ 000e572b data
.org 0xe572c
	.byte 0x9c,0xed,0x02,0x02	@ 000e572c data
.org 0xe5730
	.byte 0x64,0x6f,0x86,0x08	@ 000e5730 data
.org 0xe5734
	ldrb r1, [r3, #10]	@ 000e5734 997a
.org 0xe5736
	movs r0, #239	@ 000e5736 ef20
.org 0xe5738
	ands r0, r1	@ 000e5738 0840
.org 0xe573a
	strb r0, [r3, #10]	@ 000e573a 9872
.org 0xe573c
	movs r1, #1	@ 000e573c 0121
.org 0xe573e
	ands r1, r2	@ 000e573e 1140
.org 0xe5740
	adds r0, r3, #0	@ 000e5740 181c
.org 0xe5742
	adds r0, #76	@ 000e5742 4c30
.org 0xe5744
	strb r1, [r0, #0]	@ 000e5744 0170
.org 0xe5746
	adds r3, #74	@ 000e5746 4a33
.org 0xe5748
	lsls r1, r1, #4	@ 000e5748 0901
.org 0xe574a
	ldrb r2, [r3, #0]	@ 000e574a 1a78
.org 0xe574c
	movs r0, #17	@ 000e574c 1120
.org 0xe574e
	negs r0, r0	@ 000e574e 4042
.org 0xe5750
	ands r0, r2	@ 000e5750 1040
