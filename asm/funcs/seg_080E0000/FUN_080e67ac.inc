@ FUN_080e67ac  entry 0x080e67ac  size 130
.thumb
.org 0xe67ac
FUN_080e67ac:
	push {r4, r5, r6, r7, lr}	@ 000e67ac f0b5
.org 0xe67ae
	adds r6, r0, #0	@ 000e67ae 061c
.org 0xe67b0
	lsls r4, r1, #16	@ 000e67b0 0c04
.org 0xe67b2
	lsrs r7, r4, #16	@ 000e67b2 270c
.org 0xe67b4
	lsls r2, r2, #24	@ 000e67b4 1206
.org 0xe67b6
	lsrs r5, r2, #24	@ 000e67b6 150e
.org 0xe67b8
	ldr r0, [pc, #76]	@ 000e67b8 1348
.org 0xe67ba
	ldr r0, [r0, #0]	@ 000e67ba 0068
.org 0xe67bc
	bl 0x5500	@ 000e67bc 1ef7a0fe
.org 0xe67c0
	adds r3, r0, #0	@ 000e67c0 031c
.org 0xe67c2
	cmp r3, #0	@ 000e67c2 002b
.org 0xe67c4
	beq.n 0xe6832	@ 000e67c4 35d0
.org 0xe67c6
	adds r1, r3, #0	@ 000e67c6 191c
.org 0xe67c8
	adds r1, #37	@ 000e67c8 2531
.org 0xe67ca
	movs r2, #0	@ 000e67ca 0022
.org 0xe67cc
	movs r0, #1	@ 000e67cc 0120
.org 0xe67ce
	strb r0, [r1, #0]	@ 000e67ce 0870
.org 0xe67d0
	ldr r0, [pc, #56]	@ 000e67d0 0e48
.org 0xe67d2
	movs r1, #81	@ 000e67d2 5121
.org 0xe67d4
	strb r1, [r3, #9]	@ 000e67d4 5972
.org 0xe67d6
	adds r1, #243	@ 000e67d6 f331
.org 0xe67d8
	adds r0, r0, r1	@ 000e67d8 4018
.org 0xe67da
	ldr r0, [r0, #0]	@ 000e67da 0068
.org 0xe67dc
	ldr r0, [r0, #0]	@ 000e67dc 0068
.org 0xe67de
	str r0, [r3, #20]	@ 000e67de 5861
.org 0xe67e0
	movs r0, #0	@ 000e67e0 0020
.org 0xe67e2
	strh r2, [r3, #32]	@ 000e67e2 1a84
.org 0xe67e4
	adds r1, r3, #0	@ 000e67e4 191c
.org 0xe67e6
	adds r1, #34	@ 000e67e6 2231
.org 0xe67e8
	strb r0, [r1, #0]	@ 000e67e8 0870
.org 0xe67ea
	ldr r0, [r6, #0]	@ 000e67ea 3068
.org 0xe67ec
	ldr r1, [r6, #4]	@ 000e67ec 7168
.org 0xe67ee
	str r0, [r3, #84]	@ 000e67ee 5865
.org 0xe67f0
	str r1, [r3, #88]	@ 000e67f0 9965
.org 0xe67f2
	lsrs r0, r4, #24	@ 000e67f2 200e
.org 0xe67f4
	strb r0, [r3, #16]	@ 000e67f4 1874
.org 0xe67f6
	strb r7, [r3, #17]	@ 000e67f6 5f74
.org 0xe67f8
	adds r2, r5, #0	@ 000e67f8 2a1c
.org 0xe67fa
	cmp r2, #0	@ 000e67fa 002a
.org 0xe67fc
	beq.n 0xe6810	@ 000e67fc 08d0
.org 0xe67fe
	ldrb r0, [r3, #10]	@ 000e67fe 987a
.org 0xe6800
	movs r1, #16	@ 000e6800 1021
.org 0xe6802
	orrs r0, r1	@ 000e6802 0843
.org 0xe6804
	b.n 0xe6816	@ 000e6804 07e0
.org 0xe6806
	.byte 0x00	@ 000e6806 data
.org 0xe6807
	.byte 0x00	@ 000e6807 data
.org 0xe6808
	.byte 0x9c,0xed,0x02,0x02	@ 000e6808 data
.org 0xe680c
	.byte 0x64,0x6f,0x86,0x08	@ 000e680c data
.org 0xe6810
	ldrb r1, [r3, #10]	@ 000e6810 997a
.org 0xe6812
	movs r0, #239	@ 000e6812 ef20
.org 0xe6814
	ands r0, r1	@ 000e6814 0840
.org 0xe6816
	strb r0, [r3, #10]	@ 000e6816 9872
.org 0xe6818
	movs r1, #1	@ 000e6818 0121
.org 0xe681a
	ands r1, r2	@ 000e681a 1140
.org 0xe681c
	adds r0, r3, #0	@ 000e681c 181c
.org 0xe681e
	adds r0, #76	@ 000e681e 4c30
.org 0xe6820
	strb r1, [r0, #0]	@ 000e6820 0170
.org 0xe6822
	adds r3, #74	@ 000e6822 4a33
.org 0xe6824
	lsls r1, r1, #4	@ 000e6824 0901
.org 0xe6826
	ldrb r2, [r3, #0]	@ 000e6826 1a78
.org 0xe6828
	movs r0, #17	@ 000e6828 1120
.org 0xe682a
	negs r0, r0	@ 000e682a 4042
.org 0xe682c
	ands r0, r2	@ 000e682c 1040
