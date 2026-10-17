@ FUN_08085418  entry 0x08085418  size 116
.thumb
.org 0x85418
FUN_08085418:
	push {r4, r5, lr}	@ 00085418 30b5
.org 0x8541a
	adds r4, r0, #0	@ 0008541a 041c
.org 0x8541c
	adds r5, r1, #0	@ 0008541c 0d1c
.org 0x8541e
	cmp r2, #0	@ 0008541e 002a
.org 0x85420
	beq.n 0x85456	@ 00085420 19d0
.org 0x85422
	ldr r0, [r4, #88]	@ 00085422 a06d
.org 0x85424
	adds r1, r0, r2	@ 00085424 8118
.org 0x85426
	str r1, [r4, #88]	@ 00085426 a165
.org 0x85428
	cmp r2, #0	@ 00085428 002a
.org 0x8542a
	bge.n 0x85444	@ 0008542a 0bda
.org 0x8542c
	ldr r0, [r4, #84]	@ 0008542c 606d
.org 0x8542e
	ldr r2, [pc, #16]	@ 0008542e 044a
.org 0x85430
	adds r1, r1, r2	@ 00085430 8918
.org 0x85432
	bl 0x7f8c	@ 00085432 82f7abfd
.org 0x85436
	adds r2, r0, #0	@ 00085436 021c
.org 0x85438
	cmp r2, #0	@ 00085438 002a
.org 0x8543a
	ble.n 0x85456	@ 0008543a 0cdd
.org 0x8543c
	b.n 0x85450	@ 0008543c 08e0
.org 0x8543e
	.byte 0x00	@ 0008543e data
.org 0x8543f
	.byte 0x00	@ 0008543f data
.org 0x85440
	.byte 0x00,0xf0,0xff,0xff	@ 00085440 data
.org 0x85444
	ldr r0, [r4, #84]	@ 00085444 606d
.org 0x85446
	bl 0x7db4	@ 00085446 82f7b5fc
.org 0x8544a
	adds r2, r0, #0	@ 0008544a 021c
.org 0x8544c
	cmp r2, #0	@ 0008544c 002a
.org 0x8544e
	bge.n 0x85456	@ 0008544e 02da
.org 0x85450
	ldr r1, [r4, #88]	@ 00085450 a16d
.org 0x85452
	adds r1, r1, r2	@ 00085452 8918
.org 0x85454
	str r1, [r4, #88]	@ 00085454 a165
.org 0x85456
	cmp r5, #0	@ 00085456 002d
.org 0x85458
	beq.n 0x85492	@ 00085458 1bd0
.org 0x8545a
	ldr r0, [r4, #84]	@ 0008545a 606d
.org 0x8545c
	adds r0, r0, r5	@ 0008545c 4019
.org 0x8545e
	str r0, [r4, #84]	@ 0008545e 6065
.org 0x85460
	cmp r5, #0	@ 00085460 002d
.org 0x85462
	bge.n 0x8547c	@ 00085462 0bda
.org 0x85464
	ldr r1, [r4, #88]	@ 00085464 a16d
.org 0x85466
	ldr r2, [pc, #16]	@ 00085466 044a
.org 0x85468
	adds r1, r1, r2	@ 00085468 8918
.org 0x8546a
	bl 0x834c	@ 0008546a 82f76fff
.org 0x8546e
	adds r2, r0, #0	@ 0008546e 021c
.org 0x85470
	cmp r2, #0	@ 00085470 002a
.org 0x85472
	ble.n 0x85492	@ 00085472 0edd
.org 0x85474
	b.n 0x8548c	@ 00085474 0ae0
.org 0x85476
	.byte 0x00	@ 00085476 data
.org 0x85477
	.byte 0x00	@ 00085477 data
.org 0x85478
	.byte 0x00,0xf8,0xff,0xff	@ 00085478 data
.org 0x8547c
	ldr r1, [r4, #88]	@ 0008547c a16d
.org 0x8547e
	ldr r2, [pc, #24]	@ 0008547e 064a
.org 0x85480
	adds r1, r1, r2	@ 00085480 8918
.org 0x85482
	bl 0x816c	@ 00085482 82f773fe
.org 0x85486
	adds r2, r0, #0	@ 00085486 021c
.org 0x85488
	cmp r2, #0	@ 00085488 002a
.org 0x8548a
	bge.n 0x85492	@ 0008548a 02da
