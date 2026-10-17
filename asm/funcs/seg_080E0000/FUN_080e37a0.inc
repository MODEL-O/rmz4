@ FUN_080e37a0  entry 0x080e37a0  size 90
.thumb
.org 0xe37a0
FUN_080e37a0:
	push {r4, r5, r6, r7, lr}	@ 000e37a0 f0b5
.org 0xe37a2
	adds r5, r0, #0	@ 000e37a2 051c
.org 0xe37a4
	lsls r4, r1, #16	@ 000e37a4 0c04
.org 0xe37a6
	lsrs r6, r4, #16	@ 000e37a6 260c
.org 0xe37a8
	lsls r2, r2, #24	@ 000e37a8 1206
.org 0xe37aa
	lsrs r7, r2, #24	@ 000e37aa 170e
.org 0xe37ac
	ldr r0, [pc, #76]	@ 000e37ac 1348
.org 0xe37ae
	ldr r0, [r0, #0]	@ 000e37ae 0068
.org 0xe37b0
	bl 0x5500	@ 000e37b0 21f7a6fe
.org 0xe37b4
	adds r3, r0, #0	@ 000e37b4 031c
.org 0xe37b6
	cmp r3, #0	@ 000e37b6 002b
.org 0xe37b8
	beq.n 0xe37f2	@ 000e37b8 1bd0
.org 0xe37ba
	adds r1, r3, #0	@ 000e37ba 191c
.org 0xe37bc
	adds r1, #37	@ 000e37bc 2531
.org 0xe37be
	movs r2, #0	@ 000e37be 0022
.org 0xe37c0
	movs r0, #1	@ 000e37c0 0120
.org 0xe37c2
	strb r0, [r1, #0]	@ 000e37c2 0870
.org 0xe37c4
	ldr r0, [pc, #56]	@ 000e37c4 0e48
.org 0xe37c6
	movs r1, #71	@ 000e37c6 4721
.org 0xe37c8
	strb r1, [r3, #9]	@ 000e37c8 5972
.org 0xe37ca
	adds r1, #213	@ 000e37ca d531
.org 0xe37cc
	adds r0, r0, r1	@ 000e37cc 4018
.org 0xe37ce
	ldr r0, [r0, #0]	@ 000e37ce 0068
.org 0xe37d0
	ldr r0, [r0, #0]	@ 000e37d0 0068
.org 0xe37d2
	str r0, [r3, #20]	@ 000e37d2 5861
.org 0xe37d4
	movs r0, #0	@ 000e37d4 0020
.org 0xe37d6
	strh r2, [r3, #32]	@ 000e37d6 1a84
.org 0xe37d8
	adds r1, r3, #0	@ 000e37d8 191c
.org 0xe37da
	adds r1, #34	@ 000e37da 2231
.org 0xe37dc
	strb r0, [r1, #0]	@ 000e37dc 0870
.org 0xe37de
	ldr r0, [r5, #0]	@ 000e37de 2868
.org 0xe37e0
	ldr r1, [r5, #4]	@ 000e37e0 6968
.org 0xe37e2
	str r0, [r3, #84]	@ 000e37e2 5865
.org 0xe37e4
	str r1, [r3, #88]	@ 000e37e4 9965
.org 0xe37e6
	lsrs r0, r4, #24	@ 000e37e6 200e
.org 0xe37e8
	strb r0, [r3, #16]	@ 000e37e8 1874
.org 0xe37ea
	strb r6, [r3, #17]	@ 000e37ea 5e74
.org 0xe37ec
	adds r0, r3, #0	@ 000e37ec 181c
.org 0xe37ee
	adds r0, #117	@ 000e37ee 7530
.org 0xe37f0
	strb r7, [r0, #0]	@ 000e37f0 0770
.org 0xe37f2
	adds r0, r3, #0	@ 000e37f2 181c
.org 0xe37f4
	pop {r4, r5, r6, r7}	@ 000e37f4 f0bc
.org 0xe37f6
	pop {r1}	@ 000e37f6 02bc
.org 0xe37f8
	bx r1	@ 000e37f8 0847
