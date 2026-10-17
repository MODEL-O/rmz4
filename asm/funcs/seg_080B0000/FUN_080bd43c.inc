@ FUN_080bd43c  entry 0x080bd43c  size 140
.thumb
.org 0xbd43c
FUN_080bd43c:
	push {r4, r5, r6, r7, lr}	@ 000bd43c f0b5
.org 0xbd43e
	adds r6, r0, #0	@ 000bd43e 061c
.org 0xbd440
	adds r5, r1, #0	@ 000bd440 0d1c
.org 0xbd442
	lsls r2, r2, #24	@ 000bd442 1206
.org 0xbd444
	lsrs r4, r2, #24	@ 000bd444 140e
.org 0xbd446
	ldr r0, [pc, #128]	@ 000bd446 2048
.org 0xbd448
	ldr r0, [r0, #0]	@ 000bd448 0068
.org 0xbd44a
	bl 0x5500	@ 000bd44a 48f759f8
.org 0xbd44e
	adds r3, r0, #0	@ 000bd44e 031c
.org 0xbd450
	cmp r3, #0	@ 000bd450 002b
.org 0xbd452
	beq.n 0xbd4c0	@ 000bd452 35d0
.org 0xbd454
	adds r2, r3, #0	@ 000bd454 1a1c
.org 0xbd456
	adds r2, #37	@ 000bd456 2532
.org 0xbd458
	movs r1, #0	@ 000bd458 0021
.org 0xbd45a
	movs r0, #8	@ 000bd45a 0820
.org 0xbd45c
	strb r0, [r2, #0]	@ 000bd45c 1070
.org 0xbd45e
	ldr r0, [pc, #108]	@ 000bd45e 1b48
.org 0xbd460
	strb r1, [r3, #9]	@ 000bd460 5972
.org 0xbd462
	ldr r0, [r0, #0]	@ 000bd462 0068
.org 0xbd464
	ldr r0, [r0, #0]	@ 000bd464 0068
.org 0xbd466
	str r0, [r3, #20]	@ 000bd466 5861
.org 0xbd468
	movs r7, #0	@ 000bd468 0027
.org 0xbd46a
	strh r1, [r3, #32]	@ 000bd46a 1984
.org 0xbd46c
	adds r0, r3, #0	@ 000bd46c 181c
.org 0xbd46e
	adds r0, #34	@ 000bd46e 2230
.org 0xbd470
	strb r7, [r0, #0]	@ 000bd470 0770
.org 0xbd472
	ldr r0, [r6, #0]	@ 000bd472 3068
.org 0xbd474
	str r0, [r3, #84]	@ 000bd474 5865
.org 0xbd476
	ldr r0, [r6, #4]	@ 000bd476 7068
.org 0xbd478
	str r0, [r3, #88]	@ 000bd478 9865
.org 0xbd47a
	adds r0, r4, #0	@ 000bd47a 201c
.org 0xbd47c
	adds r0, #128	@ 000bd47c 8030
.org 0xbd47e
	lsls r0, r0, #24	@ 000bd47e 0006
.org 0xbd480
	lsrs r0, r0, #24	@ 000bd480 000e
.org 0xbd482
	adds r4, r0, #0	@ 000bd482 041c
.org 0xbd484
	adds r0, r3, #0	@ 000bd484 181c
.org 0xbd486
	adds r0, #180	@ 000bd486 b430
.org 0xbd488
	str r5, [r0, #0]	@ 000bd488 0560
.org 0xbd48a
	ldr r2, [pc, #68]	@ 000bd48a 114a
.org 0xbd48c
	adds r0, r4, #0	@ 000bd48c 201c
.org 0xbd48e
	adds r0, #64	@ 000bd48e 4030
.org 0xbd490
	lsls r0, r0, #24	@ 000bd490 0006
.org 0xbd492
	lsrs r0, r0, #23	@ 000bd492 c00d
.org 0xbd494
	adds r0, r0, r2	@ 000bd494 8018
.org 0xbd496
	movs r1, #0	@ 000bd496 0021
.org 0xbd498
	ldrsh r0, [r0, r1]	@ 000bd498 405e
.org 0xbd49a
	muls r0, r5	@ 000bd49a 6843
.org 0xbd49c
	cmp r0, #0	@ 000bd49c 0028
.org 0xbd49e
	bge.n 0xbd4a2	@ 000bd49e 00da
.org 0xbd4a0
	adds r0, #255	@ 000bd4a0 ff30
.org 0xbd4a2
	asrs r0, r0, #8	@ 000bd4a2 0012
.org 0xbd4a4
	str r0, [r3, #92]	@ 000bd4a4 d865
.org 0xbd4a6
	lsls r0, r4, #1	@ 000bd4a6 6000
.org 0xbd4a8
	adds r0, r0, r2	@ 000bd4a8 8018
.org 0xbd4aa
	movs r1, #0	@ 000bd4aa 0021
.org 0xbd4ac
	ldrsh r0, [r0, r1]	@ 000bd4ac 405e
.org 0xbd4ae
	muls r0, r5	@ 000bd4ae 6843
.org 0xbd4b0
	cmp r0, #0	@ 000bd4b0 0028
.org 0xbd4b2
	bge.n 0xbd4b6	@ 000bd4b2 00da
.org 0xbd4b4
	adds r0, #255	@ 000bd4b4 ff30
.org 0xbd4b6
	asrs r0, r0, #8	@ 000bd4b6 0012
.org 0xbd4b8
	str r0, [r3, #96]	@ 000bd4b8 1866
.org 0xbd4ba
	movs r0, #1	@ 000bd4ba 0120
.org 0xbd4bc
	strb r0, [r3, #16]	@ 000bd4bc 1874
.org 0xbd4be
	strb r7, [r3, #17]	@ 000bd4be 5f74
.org 0xbd4c0
	adds r0, r3, #0	@ 000bd4c0 181c
.org 0xbd4c2
	pop {r4, r5, r6, r7}	@ 000bd4c2 f0bc
.org 0xbd4c4
	pop {r1}	@ 000bd4c4 02bc
.org 0xbd4c6
	bx r1	@ 000bd4c6 0847
