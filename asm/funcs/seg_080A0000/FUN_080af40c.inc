@ FUN_080af40c  entry 0x080af40c  size 220
.thumb
.org 0xaf40c
FUN_080af40c:
	push {r4, r5, lr}	@ 000af40c 30b5
.org 0xaf40e
	adds r5, r0, #0	@ 000af40e 051c
.org 0xaf410
	ldr r3, [r5, #44]	@ 000af410 eb6a
.org 0xaf412
	cmp r3, #0	@ 000af412 002b
.org 0xaf414
	beq.n 0xaf4d6	@ 000af414 5fd0
.org 0xaf416
	ldrb r0, [r3, #12]	@ 000af416 187b
.org 0xaf418
	cmp r0, #1	@ 000af418 0128
.org 0xaf41a
	bhi.n 0xaf452	@ 000af41a 1ad8
.org 0xaf41c
	ldrb r1, [r3, #10]	@ 000af41c 997a
.org 0xaf41e
	movs r0, #254	@ 000af41e fe20
.org 0xaf420
	ands r0, r1	@ 000af420 0840
.org 0xaf422
	movs r2, #0	@ 000af422 0022
.org 0xaf424
	movs r1, #253	@ 000af424 fd21
.org 0xaf426
	ands r0, r1	@ 000af426 0840
.org 0xaf428
	strb r0, [r3, #10]	@ 000af428 9872
.org 0xaf42a
	adds r0, r3, #0	@ 000af42a 181c
.org 0xaf42c
	adds r0, #140	@ 000af42c 8c30
.org 0xaf42e
	str r2, [r0, #0]	@ 000af42e 0260
.org 0xaf430
	adds r0, #4	@ 000af430 0430
.org 0xaf432
	str r2, [r0, #0]	@ 000af432 0260
.org 0xaf434
	adds r0, #4	@ 000af434 0430
.org 0xaf436
	strb r2, [r0, #0]	@ 000af436 0270
.org 0xaf438
	ldrb r1, [r3, #10]	@ 000af438 997a
.org 0xaf43a
	movs r0, #251	@ 000af43a fb20
.org 0xaf43c
	ands r0, r1	@ 000af43c 0840
.org 0xaf43e
	strb r0, [r3, #10]	@ 000af43e 9872
.org 0xaf440
	ldr r1, [pc, #64]	@ 000af440 1049
.org 0xaf442
	ldrb r0, [r3, #9]	@ 000af442 587a
.org 0xaf444
	lsls r0, r0, #2	@ 000af444 8000
.org 0xaf446
	adds r0, r0, r1	@ 000af446 4018
.org 0xaf448
	movs r1, #3	@ 000af448 0321
.org 0xaf44a
	str r1, [r3, #12]	@ 000af44a d960
.org 0xaf44c
	ldr r0, [r0, #0]	@ 000af44c 0068
.org 0xaf44e
	ldr r0, [r0, #12]	@ 000af44e c068
.org 0xaf450
	str r0, [r3, #20]	@ 000af450 5861
.org 0xaf452
	adds r0, r5, #0	@ 000af452 281c
.org 0xaf454
	adds r0, #180	@ 000af454 b430
.org 0xaf456
	ldrb r0, [r0, #0]	@ 000af456 0078
.org 0xaf458
	cmp r0, #0	@ 000af458 0028
.org 0xaf45a
	bne.n 0xaf4a0	@ 000af45a 21d1
.org 0xaf45c
	adds r0, r5, #0	@ 000af45c 281c
.org 0xaf45e
	adds r0, #140	@ 000af45e 8c30
.org 0xaf460
	ldr r0, [r0, #0]	@ 000af460 0068
.org 0xaf462
	movs r1, #128	@ 000af462 8021
.org 0xaf464
	lsls r1, r1, #9	@ 000af464 4902
.org 0xaf466
	ands r0, r1	@ 000af466 0840
.org 0xaf468
	cmp r0, #0	@ 000af468 0028
.org 0xaf46a
	beq.n 0xaf488	@ 000af46a 0dd0
.org 0xaf46c
	adds r4, r5, #0	@ 000af46c 2c1c
.org 0xaf46e
	adds r4, #84	@ 000af46e 5434
.org 0xaf470
	ldrb r2, [r5, #10]	@ 000af470 aa7a
.org 0xaf472
	lsrs r2, r2, #4	@ 000af472 1209
.org 0xaf474
	movs r0, #1	@ 000af474 0120
.org 0xaf476
	ands r2, r0	@ 000af476 0240
.org 0xaf478
	adds r0, r4, #0	@ 000af478 201c
.org 0xaf47a
	movs r1, #0	@ 000af47a 0021
.org 0xaf47c
	bl 0xe4a54	@ 000af47c 35f0eafa
.org 0xaf480
	b.n 0xaf4b6	@ 000af480 19e0
.org 0xaf482
	.byte 0x00	@ 000af482 data
.org 0xaf483
	.byte 0x00	@ 000af483 data
.org 0xaf484
	.byte 0x40,0xdb,0x85,0x08	@ 000af484 data
.org 0xaf488
	adds r4, r5, #0	@ 000af488 2c1c
.org 0xaf48a
	adds r4, #84	@ 000af48a 5434
.org 0xaf48c
	movs r1, #128	@ 000af48c 8021
.org 0xaf48e
	lsls r1, r1, #1	@ 000af48e 4900
.org 0xaf490
	ldrb r2, [r5, #10]	@ 000af490 aa7a
.org 0xaf492
	lsrs r2, r2, #4	@ 000af492 1209
.org 0xaf494
	movs r0, #1	@ 000af494 0120
.org 0xaf496
	ands r2, r0	@ 000af496 0240
.org 0xaf498
	adds r0, r4, #0	@ 000af498 201c
.org 0xaf49a
	bl 0xe4a54	@ 000af49a 35f0dbfa
.org 0xaf49e
	b.n 0xaf4b6	@ 000af49e 0ae0
.org 0xaf4a0
	adds r4, r5, #0	@ 000af4a0 2c1c
.org 0xaf4a2
	adds r4, #84	@ 000af4a2 5434
.org 0xaf4a4
	movs r1, #128	@ 000af4a4 8021
.org 0xaf4a6
	lsls r1, r1, #2	@ 000af4a6 8900
.org 0xaf4a8
	ldrb r2, [r5, #10]	@ 000af4a8 aa7a
.org 0xaf4aa
	lsrs r2, r2, #4	@ 000af4aa 1209
.org 0xaf4ac
	movs r0, #1	@ 000af4ac 0120
.org 0xaf4ae
	ands r2, r0	@ 000af4ae 0240
.org 0xaf4b0
	adds r0, r4, #0	@ 000af4b0 201c
.org 0xaf4b2
	bl 0xe4a54	@ 000af4b2 35f0cffa
.org 0xaf4b6
	ldr r2, [pc, #56]	@ 000af4b6 0e4a
.org 0xaf4b8
	ldrh r1, [r2, #12]	@ 000af4b8 9189
.org 0xaf4ba
	ldr r0, [pc, #56]	@ 000af4ba 0e48
.org 0xaf4bc
	cmp r1, r0	@ 000af4bc 8142
.org 0xaf4be
	bhi.n 0xaf4c4	@ 000af4be 01d8
.org 0xaf4c0
	adds r0, r1, #1	@ 000af4c0 481c
.org 0xaf4c2
	strh r0, [r2, #12]	@ 000af4c2 9081
.org 0xaf4c4
	adds r0, r5, #0	@ 000af4c4 281c
.org 0xaf4c6
	adds r1, r4, #0	@ 000af4c6 211c
.org 0xaf4c8
	bl 0x2abe0	@ 000af4c8 7bf78afb
.org 0xaf4cc
	movs r0, #4	@ 000af4cc 0420
.org 0xaf4ce
	movs r1, #17	@ 000af4ce 1121
.org 0xaf4d0
	adds r2, r4, #0	@ 000af4d0 221c
.org 0xaf4d2
	bl 0x2ab88	@ 000af4d2 7bf759fb
.org 0xaf4d6
	ldr r1, [pc, #32]	@ 000af4d6 0849
.org 0xaf4d8
	ldrb r0, [r5, #9]	@ 000af4d8 687a
.org 0xaf4da
	lsls r0, r0, #2	@ 000af4da 8000
.org 0xaf4dc
	adds r0, r0, r1	@ 000af4dc 4018
.org 0xaf4de
	movs r1, #4	@ 000af4de 0421
.org 0xaf4e0
	str r1, [r5, #12]	@ 000af4e0 e960
.org 0xaf4e2
	ldr r0, [r0, #0]	@ 000af4e2 0068
.org 0xaf4e4
	ldr r0, [r0, #16]	@ 000af4e4 0069
.org 0xaf4e6
	str r0, [r5, #20]	@ 000af4e6 6861
