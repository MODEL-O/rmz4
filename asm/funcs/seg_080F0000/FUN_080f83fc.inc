@ FUN_080f83fc  entry 0x080f83fc  size 88
.thumb
.org 0xf83fc
FUN_080f83fc:
	push {r4, r5, r6, lr}	@ 000f83fc 70b5
.org 0xf83fe
	adds r6, r0, #0	@ 000f83fe 061c
.org 0xf8400
	lsls r1, r1, #24	@ 000f8400 0906
.org 0xf8402
	lsrs r5, r1, #24	@ 000f8402 0d0e
.org 0xf8404
	lsls r2, r2, #24	@ 000f8404 1206
.org 0xf8406
	lsrs r4, r2, #24	@ 000f8406 140e
.org 0xf8408
	ldr r0, [pc, #72]	@ 000f8408 1248
.org 0xf840a
	ldr r0, [r0, #0]	@ 000f840a 0068
.org 0xf840c
	bl 0x5500	@ 000f840c 0df778f8
.org 0xf8410
	adds r3, r0, #0	@ 000f8410 031c
.org 0xf8412
	cmp r3, #0	@ 000f8412 002b
.org 0xf8414
	beq.n 0xf844c	@ 000f8414 1ad0
.org 0xf8416
	adds r1, r3, #0	@ 000f8416 191c
.org 0xf8418
	adds r1, #37	@ 000f8418 2531
.org 0xf841a
	movs r2, #0	@ 000f841a 0022
.org 0xf841c
	movs r0, #30	@ 000f841c 1e20
.org 0xf841e
	strb r0, [r1, #0]	@ 000f841e 0870
.org 0xf8420
	ldr r1, [pc, #52]	@ 000f8420 0d49
.org 0xf8422
	strb r0, [r3, #9]	@ 000f8422 5872
.org 0xf8424
	ldr r0, [r1, #120]	@ 000f8424 886f
.org 0xf8426
	ldr r0, [r0, #0]	@ 000f8426 0068
.org 0xf8428
	str r0, [r3, #20]	@ 000f8428 5861
.org 0xf842a
	movs r0, #0	@ 000f842a 0020
.org 0xf842c
	strh r2, [r3, #32]	@ 000f842c 1a84
.org 0xf842e
	adds r1, r3, #0	@ 000f842e 191c
.org 0xf8430
	adds r1, #34	@ 000f8430 2231
.org 0xf8432
	strb r0, [r1, #0]	@ 000f8432 0870
.org 0xf8434
	ldrb r1, [r3, #11]	@ 000f8434 d97a
.org 0xf8436
	movs r0, #16	@ 000f8436 1020
.org 0xf8438
	orrs r0, r1	@ 000f8438 0843
.org 0xf843a
	strb r0, [r3, #11]	@ 000f843a d872
.org 0xf843c
	ldrb r0, [r3, #28]	@ 000f843c 187f
.org 0xf843e
	strb r0, [r3, #29]	@ 000f843e 5877
.org 0xf8440
	ldr r0, [r6, #0]	@ 000f8440 3068
.org 0xf8442
	ldr r1, [r6, #4]	@ 000f8442 7168
.org 0xf8444
	str r0, [r3, #84]	@ 000f8444 5865
.org 0xf8446
	str r1, [r3, #88]	@ 000f8446 9965
.org 0xf8448
	strb r5, [r3, #16]	@ 000f8448 1d74
.org 0xf844a
	strb r4, [r3, #17]	@ 000f844a 5c74
.org 0xf844c
	adds r0, r3, #0	@ 000f844c 181c
.org 0xf844e
	pop {r4, r5, r6}	@ 000f844e 70bc
.org 0xf8450
	pop {r1}	@ 000f8450 02bc
.org 0xf8452
	bx r1	@ 000f8452 0847
