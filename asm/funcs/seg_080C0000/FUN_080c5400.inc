@ FUN_080c5400  entry 0x080c5400  size 68
.thumb
.org 0xc5400
FUN_080c5400:
	push {r4, r5, lr}	@ 000c5400 30b5
.org 0xc5402
	adds r5, r0, #0	@ 000c5402 051c
.org 0xc5404
	lsls r1, r1, #24	@ 000c5404 0906
.org 0xc5406
	lsrs r4, r1, #24	@ 000c5406 0c0e
.org 0xc5408
	ldr r0, [pc, #56]	@ 000c5408 0e48
.org 0xc540a
	ldr r0, [r0, #0]	@ 000c540a 0068
.org 0xc540c
	bl 0x5500	@ 000c540c 40f778f8
.org 0xc5410
	adds r3, r0, #0	@ 000c5410 031c
.org 0xc5412
	cmp r3, #0	@ 000c5412 002b
.org 0xc5414
	beq.n 0xc543c	@ 000c5414 12d0
.org 0xc5416
	adds r1, r3, #0	@ 000c5416 191c
.org 0xc5418
	adds r1, #37	@ 000c5418 2531
.org 0xc541a
	movs r2, #0	@ 000c541a 0022
.org 0xc541c
	movs r0, #8	@ 000c541c 0820
.org 0xc541e
	strb r0, [r1, #0]	@ 000c541e 0870
.org 0xc5420
	ldr r1, [pc, #36]	@ 000c5420 0949
.org 0xc5422
	movs r0, #24	@ 000c5422 1820
.org 0xc5424
	strb r0, [r3, #9]	@ 000c5424 5872
.org 0xc5426
	ldr r0, [r1, #96]	@ 000c5426 086e
.org 0xc5428
	ldr r0, [r0, #0]	@ 000c5428 0068
.org 0xc542a
	str r0, [r3, #20]	@ 000c542a 5861
.org 0xc542c
	movs r0, #0	@ 000c542c 0020
.org 0xc542e
	strh r2, [r3, #32]	@ 000c542e 1a84
.org 0xc5430
	adds r1, r3, #0	@ 000c5430 191c
.org 0xc5432
	adds r1, #34	@ 000c5432 2231
.org 0xc5434
	strb r0, [r1, #0]	@ 000c5434 0870
.org 0xc5436
	str r5, [r3, #40]	@ 000c5436 9d62
.org 0xc5438
	strb r0, [r3, #16]	@ 000c5438 1874
.org 0xc543a
	strb r4, [r3, #17]	@ 000c543a 5c74
.org 0xc543c
	adds r0, r3, #0	@ 000c543c 181c
.org 0xc543e
	pop {r4, r5}	@ 000c543e 30bc
.org 0xc5440
	pop {r1}	@ 000c5440 02bc
.org 0xc5442
	bx r1	@ 000c5442 0847
