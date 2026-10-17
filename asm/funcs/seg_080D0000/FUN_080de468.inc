@ FUN_080de468  entry 0x080de468  size 80
.thumb
.org 0xde468
FUN_080de468:
	push {r4, r5, r6, lr}	@ 000de468 70b5
.org 0xde46a
	adds r6, r0, #0	@ 000de46a 061c
.org 0xde46c
	lsls r1, r1, #24	@ 000de46c 0906
.org 0xde46e
	lsrs r5, r1, #24	@ 000de46e 0d0e
.org 0xde470
	lsls r2, r2, #24	@ 000de470 1206
.org 0xde472
	lsrs r4, r2, #24	@ 000de472 140e
.org 0xde474
	ldr r0, [pc, #64]	@ 000de474 1048
.org 0xde476
	ldr r0, [r0, #0]	@ 000de476 0068
.org 0xde478
	bl 0x5500	@ 000de478 27f742f8
.org 0xde47c
	adds r3, r0, #0	@ 000de47c 031c
.org 0xde47e
	cmp r3, #0	@ 000de47e 002b
.org 0xde480
	beq.n 0xde4b0	@ 000de480 16d0
.org 0xde482
	adds r1, r3, #0	@ 000de482 191c
.org 0xde484
	adds r1, #37	@ 000de484 2531
.org 0xde486
	movs r2, #0	@ 000de486 0022
.org 0xde488
	movs r0, #1	@ 000de488 0120
.org 0xde48a
	strb r0, [r1, #0]	@ 000de48a 0870
.org 0xde48c
	ldr r0, [pc, #44]	@ 000de48c 0b48
.org 0xde48e
	movs r1, #47	@ 000de48e 2f21
.org 0xde490
	strb r1, [r3, #9]	@ 000de490 5972
.org 0xde492
	adds r0, #188	@ 000de492 bc30
.org 0xde494
	ldr r0, [r0, #0]	@ 000de494 0068
.org 0xde496
	ldr r0, [r0, #0]	@ 000de496 0068
.org 0xde498
	str r0, [r3, #20]	@ 000de498 5861
.org 0xde49a
	movs r0, #0	@ 000de49a 0020
.org 0xde49c
	strh r2, [r3, #32]	@ 000de49c 1a84
.org 0xde49e
	adds r1, r3, #0	@ 000de49e 191c
.org 0xde4a0
	adds r1, #34	@ 000de4a0 2231
.org 0xde4a2
	strb r0, [r1, #0]	@ 000de4a2 0870
.org 0xde4a4
	ldr r0, [r6, #0]	@ 000de4a4 3068
.org 0xde4a6
	ldr r1, [r6, #4]	@ 000de4a6 7168
.org 0xde4a8
	str r0, [r3, #84]	@ 000de4a8 5865
.org 0xde4aa
	str r1, [r3, #88]	@ 000de4aa 9965
.org 0xde4ac
	strb r5, [r3, #16]	@ 000de4ac 1d74
.org 0xde4ae
	strb r4, [r3, #17]	@ 000de4ae 5c74
.org 0xde4b0
	adds r0, r3, #0	@ 000de4b0 181c
.org 0xde4b2
	pop {r4, r5, r6}	@ 000de4b2 70bc
.org 0xde4b4
	pop {r1}	@ 000de4b4 02bc
.org 0xde4b6
	bx r1	@ 000de4b6 0847
