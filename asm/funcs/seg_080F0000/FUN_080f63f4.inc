@ FUN_080f63f4  entry 0x080f63f4  size 90
.thumb
.org 0xf63f4
FUN_080f63f4:
	push {r4, r5, r6, lr}	@ 000f63f4 70b5
.org 0xf63f6
	adds r6, r0, #0	@ 000f63f6 061c
.org 0xf63f8
	lsls r1, r1, #24	@ 000f63f8 0906
.org 0xf63fa
	lsrs r5, r1, #24	@ 000f63fa 0d0e
.org 0xf63fc
	lsls r2, r2, #24	@ 000f63fc 1206
.org 0xf63fe
	lsrs r4, r2, #24	@ 000f63fe 140e
.org 0xf6400
	ldr r0, [pc, #76]	@ 000f6400 1348
.org 0xf6402
	ldr r0, [r0, #0]	@ 000f6402 0068
.org 0xf6404
	bl 0x5500	@ 000f6404 0ff77cf8
.org 0xf6408
	adds r3, r0, #0	@ 000f6408 031c
.org 0xf640a
	cmp r3, #0	@ 000f640a 002b
.org 0xf640c
	beq.n 0xf6446	@ 000f640c 1bd0
.org 0xf640e
	adds r1, r3, #0	@ 000f640e 191c
.org 0xf6410
	adds r1, #37	@ 000f6410 2531
.org 0xf6412
	movs r2, #0	@ 000f6412 0022
.org 0xf6414
	movs r0, #30	@ 000f6414 1e20
.org 0xf6416
	strb r0, [r1, #0]	@ 000f6416 0870
.org 0xf6418
	ldr r1, [pc, #56]	@ 000f6418 0e49
.org 0xf641a
	movs r0, #24	@ 000f641a 1820
.org 0xf641c
	strb r0, [r3, #9]	@ 000f641c 5872
.org 0xf641e
	ldr r0, [r1, #96]	@ 000f641e 086e
.org 0xf6420
	ldr r0, [r0, #0]	@ 000f6420 0068
.org 0xf6422
	str r0, [r3, #20]	@ 000f6422 5861
.org 0xf6424
	movs r0, #0	@ 000f6424 0020
.org 0xf6426
	strh r2, [r3, #32]	@ 000f6426 1a84
.org 0xf6428
	adds r1, r3, #0	@ 000f6428 191c
.org 0xf642a
	adds r1, #34	@ 000f642a 2231
.org 0xf642c
	strb r0, [r1, #0]	@ 000f642c 0870
.org 0xf642e
	ldrb r1, [r3, #11]	@ 000f642e d97a
.org 0xf6430
	movs r0, #16	@ 000f6430 1020
.org 0xf6432
	orrs r0, r1	@ 000f6432 0843
.org 0xf6434
	strb r0, [r3, #11]	@ 000f6434 d872
.org 0xf6436
	ldrb r0, [r3, #28]	@ 000f6436 187f
.org 0xf6438
	strb r0, [r3, #29]	@ 000f6438 5877
.org 0xf643a
	ldr r0, [r6, #0]	@ 000f643a 3068
.org 0xf643c
	ldr r1, [r6, #4]	@ 000f643c 7168
.org 0xf643e
	str r0, [r3, #84]	@ 000f643e 5865
.org 0xf6440
	str r1, [r3, #88]	@ 000f6440 9965
.org 0xf6442
	strb r5, [r3, #16]	@ 000f6442 1d74
.org 0xf6444
	strb r4, [r3, #17]	@ 000f6444 5c74
.org 0xf6446
	adds r0, r3, #0	@ 000f6446 181c
.org 0xf6448
	pop {r4, r5, r6}	@ 000f6448 70bc
.org 0xf644a
	pop {r1}	@ 000f644a 02bc
.org 0xf644c
	bx r1	@ 000f644c 0847
