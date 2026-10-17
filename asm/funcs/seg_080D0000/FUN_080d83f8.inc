@ FUN_080d83f8  entry 0x080d83f8  size 78
.thumb
.org 0xd83f8
FUN_080d83f8:
	push {r4, r5, r6, lr}	@ 000d83f8 70b5
.org 0xd83fa
	adds r6, r0, #0	@ 000d83fa 061c
.org 0xd83fc
	lsls r1, r1, #24	@ 000d83fc 0906
.org 0xd83fe
	lsrs r5, r1, #24	@ 000d83fe 0d0e
.org 0xd8400
	lsls r2, r2, #24	@ 000d8400 1206
.org 0xd8402
	lsrs r4, r2, #24	@ 000d8402 140e
.org 0xd8404
	ldr r0, [pc, #64]	@ 000d8404 1048
.org 0xd8406
	ldr r0, [r0, #0]	@ 000d8406 0068
.org 0xd8408
	bl 0x5500	@ 000d8408 2df77af8
.org 0xd840c
	adds r3, r0, #0	@ 000d840c 031c
.org 0xd840e
	cmp r3, #0	@ 000d840e 002b
.org 0xd8410
	beq.n 0xd843e	@ 000d8410 15d0
.org 0xd8412
	adds r1, r3, #0	@ 000d8412 191c
.org 0xd8414
	adds r1, #37	@ 000d8414 2531
.org 0xd8416
	movs r2, #0	@ 000d8416 0022
.org 0xd8418
	movs r0, #1	@ 000d8418 0120
.org 0xd841a
	strb r0, [r1, #0]	@ 000d841a 0870
.org 0xd841c
	ldr r1, [pc, #44]	@ 000d841c 0b49
.org 0xd841e
	movs r0, #26	@ 000d841e 1a20
.org 0xd8420
	strb r0, [r3, #9]	@ 000d8420 5872
.org 0xd8422
	ldr r0, [r1, #104]	@ 000d8422 886e
.org 0xd8424
	ldr r0, [r0, #0]	@ 000d8424 0068
.org 0xd8426
	str r0, [r3, #20]	@ 000d8426 5861
.org 0xd8428
	movs r0, #0	@ 000d8428 0020
.org 0xd842a
	strh r2, [r3, #32]	@ 000d842a 1a84
.org 0xd842c
	adds r1, r3, #0	@ 000d842c 191c
.org 0xd842e
	adds r1, #34	@ 000d842e 2231
.org 0xd8430
	strb r0, [r1, #0]	@ 000d8430 0870
.org 0xd8432
	ldr r0, [r6, #0]	@ 000d8432 3068
.org 0xd8434
	ldr r1, [r6, #4]	@ 000d8434 7168
.org 0xd8436
	str r0, [r3, #84]	@ 000d8436 5865
.org 0xd8438
	str r1, [r3, #88]	@ 000d8438 9965
.org 0xd843a
	strb r5, [r3, #16]	@ 000d843a 1d74
.org 0xd843c
	strb r4, [r3, #17]	@ 000d843c 5c74
.org 0xd843e
	adds r0, r3, #0	@ 000d843e 181c
.org 0xd8440
	pop {r4, r5, r6}	@ 000d8440 70bc
.org 0xd8442
	pop {r1}	@ 000d8442 02bc
.org 0xd8444
	bx r1	@ 000d8444 0847
