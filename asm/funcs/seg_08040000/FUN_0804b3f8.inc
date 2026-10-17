@ FUN_0804b3f8  entry 0x0804b3f8  size 92
.thumb
.org 0x4b3f8
FUN_0804b3f8:
	push {r4, r5, r6, r7, lr}	@ 0004b3f8 f0b5
.org 0x4b3fa
	adds r6, r0, #0	@ 0004b3fa 061c
.org 0x4b3fc
	adds r7, r1, #0	@ 0004b3fc 0f1c
.org 0x4b3fe
	lsls r2, r2, #24	@ 0004b3fe 1206
.org 0x4b400
	lsrs r5, r2, #24	@ 0004b400 150e
.org 0x4b402
	lsls r3, r3, #24	@ 0004b402 1b06
.org 0x4b404
	lsrs r4, r3, #24	@ 0004b404 1c0e
.org 0x4b406
	ldr r0, [pc, #76]	@ 0004b406 1348
.org 0x4b408
	ldr r0, [r0, #0]	@ 0004b408 0068
.org 0x4b40a
	bl 0x5500	@ 0004b40a baf779f8
.org 0x4b40e
	adds r2, r0, #0	@ 0004b40e 021c
.org 0x4b410
	cmp r2, #0	@ 0004b410 002a
.org 0x4b412
	beq.n 0x4b44e	@ 0004b412 1cd0
.org 0x4b414
	ldr r0, [pc, #64]	@ 0004b414 1048
.org 0x4b416
	movs r1, #41	@ 0004b416 2921
.org 0x4b418
	strb r1, [r2, #9]	@ 0004b418 5172
.org 0x4b41a
	adds r0, #164	@ 0004b41a a430
.org 0x4b41c
	ldr r0, [r0, #0]	@ 0004b41c 0068
.org 0x4b41e
	ldr r0, [r0, #0]	@ 0004b41e 0068
.org 0x4b420
	str r0, [r2, #20]	@ 0004b420 5061
.org 0x4b422
	ldrb r1, [r2, #11]	@ 0004b422 d17a
.org 0x4b424
	movs r0, #191	@ 0004b424 bf20
.org 0x4b426
	ands r0, r1	@ 0004b426 0840
.org 0x4b428
	strb r0, [r2, #11]	@ 0004b428 d072
.org 0x4b42a
	adds r1, r2, #0	@ 0004b42a 111c
.org 0x4b42c
	adds r1, #37	@ 0004b42c 2531
.org 0x4b42e
	movs r0, #16	@ 0004b42e 1020
.org 0x4b430
	strb r0, [r1, #0]	@ 0004b430 0870
.org 0x4b432
	ldr r0, [pc, #40]	@ 0004b432 0a48
.org 0x4b434
	ldrh r0, [r0, #0]	@ 0004b434 0088
.org 0x4b436
	strh r0, [r2, #32]	@ 0004b436 1084
.org 0x4b438
	ldr r0, [pc, #36]	@ 0004b438 0948
.org 0x4b43a
	ldrb r0, [r0, #0]	@ 0004b43a 0078
.org 0x4b43c
	subs r1, #3	@ 0004b43c 0339
.org 0x4b43e
	strb r0, [r1, #0]	@ 0004b43e 0870
.org 0x4b440
	str r6, [r2, #40]	@ 0004b440 9662
.org 0x4b442
	ldr r0, [r7, #0]	@ 0004b442 3868
.org 0x4b444
	ldr r1, [r7, #4]	@ 0004b444 7968
.org 0x4b446
	str r0, [r2, #84]	@ 0004b446 5065
.org 0x4b448
	str r1, [r2, #88]	@ 0004b448 9165
.org 0x4b44a
	strb r5, [r2, #16]	@ 0004b44a 1574
.org 0x4b44c
	strb r4, [r2, #17]	@ 0004b44c 5474
.org 0x4b44e
	pop {r4, r5, r6, r7}	@ 0004b44e f0bc
.org 0x4b450
	pop {r0}	@ 0004b450 01bc
.org 0x4b452
	bx r0	@ 0004b452 0047
