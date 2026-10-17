@ FUN_0810a410  entry 0x0810a410  size 70
.thumb
.org 0x10a410
FUN_0810a410:
	push {r4, r5, lr}	@ 0010a410 30b5
.org 0x10a412
	adds r5, r0, #0	@ 0010a412 051c
.org 0x10a414
	lsls r1, r1, #24	@ 0010a414 0906
.org 0x10a416
	lsrs r4, r1, #24	@ 0010a416 0c0e
.org 0x10a418
	ldr r0, [pc, #60]	@ 0010a418 0f48
.org 0x10a41a
	ldr r0, [r0, #0]	@ 0010a41a 0068
.org 0x10a41c
	bl 0x5500	@ 0010a41c fbf670f8
.org 0x10a420
	adds r3, r0, #0	@ 0010a420 031c
.org 0x10a422
	cmp r3, #0	@ 0010a422 002b
.org 0x10a424
	beq.n 0x10a44e	@ 0010a424 13d0
.org 0x10a426
	adds r1, r3, #0	@ 0010a426 191c
.org 0x10a428
	adds r1, #37	@ 0010a428 2531
.org 0x10a42a
	movs r2, #0	@ 0010a42a 0022
.org 0x10a42c
	movs r0, #16	@ 0010a42c 1020
.org 0x10a42e
	strb r0, [r1, #0]	@ 0010a42e 0870
.org 0x10a430
	ldr r1, [pc, #40]	@ 0010a430 0a49
.org 0x10a432
	movs r0, #1	@ 0010a432 0120
.org 0x10a434
	strb r0, [r3, #9]	@ 0010a434 5872
.org 0x10a436
	ldr r0, [r1, #4]	@ 0010a436 4868
.org 0x10a438
	ldr r0, [r0, #0]	@ 0010a438 0068
.org 0x10a43a
	str r0, [r3, #20]	@ 0010a43a 5861
.org 0x10a43c
	movs r0, #0	@ 0010a43c 0020
.org 0x10a43e
	strh r2, [r3, #32]	@ 0010a43e 1a84
.org 0x10a440
	adds r1, r3, #0	@ 0010a440 191c
.org 0x10a442
	adds r1, #34	@ 0010a442 2231
.org 0x10a444
	strb r0, [r1, #0]	@ 0010a444 0870
.org 0x10a446
	str r5, [r3, #40]	@ 0010a446 9d62
.org 0x10a448
	strb r4, [r3, #16]	@ 0010a448 1c74
.org 0x10a44a
	movs r0, #255	@ 0010a44a ff20
.org 0x10a44c
	strb r0, [r3, #17]	@ 0010a44c 5874
.org 0x10a44e
	adds r0, r3, #0	@ 0010a44e 181c
.org 0x10a450
	pop {r4, r5}	@ 0010a450 30bc
.org 0x10a452
	pop {r1}	@ 0010a452 02bc
.org 0x10a454
	bx r1	@ 0010a454 0847
