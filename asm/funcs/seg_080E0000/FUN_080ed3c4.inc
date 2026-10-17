@ FUN_080ed3c4  entry 0x080ed3c4  size 82
.thumb
.org 0xed3c4
FUN_080ed3c4:
	push {r4, r5, lr}	@ 000ed3c4 30b5
.org 0xed3c6
	adds r5, r0, #0	@ 000ed3c6 051c
.org 0xed3c8
	adds r4, r1, #0	@ 000ed3c8 0c1c
.org 0xed3ca
	ldr r0, [pc, #76]	@ 000ed3ca 1348
.org 0xed3cc
	ldr r0, [r0, #0]	@ 000ed3cc 0068
.org 0xed3ce
	bl 0x5500	@ 000ed3ce 18f797f8
.org 0xed3d2
	adds r3, r0, #0	@ 000ed3d2 031c
.org 0xed3d4
	cmp r3, #0	@ 000ed3d4 002b
.org 0xed3d6
	beq.n 0xed40e	@ 000ed3d6 1ad0
.org 0xed3d8
	adds r1, r3, #0	@ 000ed3d8 191c
.org 0xed3da
	adds r1, #37	@ 000ed3da 2531
.org 0xed3dc
	movs r2, #0	@ 000ed3dc 0022
.org 0xed3de
	movs r0, #30	@ 000ed3de 1e20
.org 0xed3e0
	strb r0, [r1, #0]	@ 000ed3e0 0870
.org 0xed3e2
	ldr r1, [pc, #56]	@ 000ed3e2 0e49
.org 0xed3e4
	movs r0, #13	@ 000ed3e4 0d20
.org 0xed3e6
	strb r0, [r3, #9]	@ 000ed3e6 5872
.org 0xed3e8
	ldr r0, [r1, #52]	@ 000ed3e8 486b
.org 0xed3ea
	ldr r0, [r0, #0]	@ 000ed3ea 0068
.org 0xed3ec
	str r0, [r3, #20]	@ 000ed3ec 5861
.org 0xed3ee
	movs r0, #0	@ 000ed3ee 0020
.org 0xed3f0
	strh r2, [r3, #32]	@ 000ed3f0 1a84
.org 0xed3f2
	adds r1, r3, #0	@ 000ed3f2 191c
.org 0xed3f4
	adds r1, #34	@ 000ed3f4 2231
.org 0xed3f6
	strb r0, [r1, #0]	@ 000ed3f6 0870
.org 0xed3f8
	ldrb r1, [r3, #11]	@ 000ed3f8 d97a
.org 0xed3fa
	movs r0, #16	@ 000ed3fa 1020
.org 0xed3fc
	orrs r0, r1	@ 000ed3fc 0843
.org 0xed3fe
	strb r0, [r3, #11]	@ 000ed3fe d872
.org 0xed400
	ldrb r0, [r3, #28]	@ 000ed400 187f
.org 0xed402
	strb r0, [r3, #29]	@ 000ed402 5877
.org 0xed404
	ldr r0, [r4, #0]	@ 000ed404 2068
.org 0xed406
	ldr r1, [r4, #4]	@ 000ed406 6168
.org 0xed408
	str r0, [r3, #84]	@ 000ed408 5865
.org 0xed40a
	str r1, [r3, #88]	@ 000ed40a 9965
.org 0xed40c
	str r5, [r3, #40]	@ 000ed40c 9d62
.org 0xed40e
	adds r0, r3, #0	@ 000ed40e 181c
.org 0xed410
	pop {r4, r5}	@ 000ed410 30bc
.org 0xed412
	pop {r1}	@ 000ed412 02bc
.org 0xed414
	bx r1	@ 000ed414 0847
