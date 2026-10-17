@ FUN_08085394  entry 0x08085394  size 90
.thumb
.org 0x85394
FUN_08085394:
	push {r4, r5, r6, lr}	@ 00085394 70b5
.org 0x85396
	adds r4, r0, #0	@ 00085396 041c
.org 0x85398
	lsls r1, r1, #24	@ 00085398 0906
.org 0x8539a
	lsrs r6, r1, #24	@ 0008539a 0e0e
.org 0x8539c
	lsls r2, r2, #24	@ 0008539c 1206
.org 0x8539e
	lsrs r5, r2, #24	@ 0008539e 150e
.org 0x853a0
	ldr r0, [pc, #76]	@ 000853a0 1348
.org 0x853a2
	ldr r0, [r0, #0]	@ 000853a2 0068
.org 0x853a4
	bl 0x5500	@ 000853a4 80f7acf8
.org 0x853a8
	adds r3, r0, #0	@ 000853a8 031c
.org 0x853aa
	cmp r3, #0	@ 000853aa 002b
.org 0x853ac
	beq.n 0x853e6	@ 000853ac 1bd0
.org 0x853ae
	adds r1, r3, #0	@ 000853ae 191c
.org 0x853b0
	adds r1, #37	@ 000853b0 2531
.org 0x853b2
	movs r2, #0	@ 000853b2 0022
.org 0x853b4
	movs r0, #24	@ 000853b4 1820
.org 0x853b6
	strb r0, [r1, #0]	@ 000853b6 0870
.org 0x853b8
	ldr r1, [pc, #56]	@ 000853b8 0e49
.org 0x853ba
	movs r0, #6	@ 000853ba 0620
.org 0x853bc
	strb r0, [r3, #9]	@ 000853bc 5872
.org 0x853be
	ldr r0, [r1, #24]	@ 000853be 8869
.org 0x853c0
	ldr r0, [r0, #0]	@ 000853c0 0068
.org 0x853c2
	str r0, [r3, #20]	@ 000853c2 5861
.org 0x853c4
	movs r0, #0	@ 000853c4 0020
.org 0x853c6
	strh r2, [r3, #32]	@ 000853c6 1a84
.org 0x853c8
	adds r1, r3, #0	@ 000853c8 191c
.org 0x853ca
	adds r1, #34	@ 000853ca 2231
.org 0x853cc
	strb r0, [r1, #0]	@ 000853cc 0870
.org 0x853ce
	ldrb r1, [r3, #11]	@ 000853ce d97a
.org 0x853d0
	movs r0, #16	@ 000853d0 1020
.org 0x853d2
	orrs r0, r1	@ 000853d2 0843
.org 0x853d4
	strb r0, [r3, #11]	@ 000853d4 d872
.org 0x853d6
	ldrb r0, [r3, #28]	@ 000853d6 187f
.org 0x853d8
	strb r0, [r3, #29]	@ 000853d8 5877
.org 0x853da
	ldr r0, [r4, #0]	@ 000853da 2068
.org 0x853dc
	str r0, [r3, #84]	@ 000853dc 5865
.org 0x853de
	ldr r0, [r4, #4]	@ 000853de 6068
.org 0x853e0
	str r0, [r3, #88]	@ 000853e0 9865
.org 0x853e2
	strb r6, [r3, #16]	@ 000853e2 1e74
.org 0x853e4
	strb r5, [r3, #17]	@ 000853e4 5d74
.org 0x853e6
	adds r0, r3, #0	@ 000853e6 181c
.org 0x853e8
	pop {r4, r5, r6}	@ 000853e8 70bc
.org 0x853ea
	pop {r1}	@ 000853ea 02bc
.org 0x853ec
	bx r1	@ 000853ec 0847
