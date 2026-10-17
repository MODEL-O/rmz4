@ FUN_080583dc  entry 0x080583dc  size 326
.thumb
.org 0x583dc
FUN_080583dc:
	push {r4, r5, r6, lr}	@ 000583dc 70b5
.org 0x583de
	adds r4, r0, #0	@ 000583de 041c
.org 0x583e0
	ldrb r0, [r4, #10]	@ 000583e0 a07a
.org 0x583e2
	lsrs r5, r0, #4	@ 000583e2 0509
.org 0x583e4
	movs r0, #1	@ 000583e4 0120
.org 0x583e6
	ands r5, r0	@ 000583e6 0540
.org 0x583e8
	ldrb r0, [r4, #15]	@ 000583e8 e07b
.org 0x583ea
	cmp r0, #0	@ 000583ea 0028
.org 0x583ec
	bne.n 0x58470	@ 000583ec 40d1
.org 0x583ee
	ldr r0, [pc, #16]	@ 000583ee 0448
.org 0x583f0
	ldr r1, [r4, #84]	@ 000583f0 616d
.org 0x583f2
	ldr r0, [r0, #56]	@ 000583f2 806b
.org 0x583f4
	cmp r1, r0	@ 000583f4 8142
.org 0x583f6
	bge.n 0x58408	@ 000583f6 07da
.org 0x583f8
	ldr r0, [pc, #8]	@ 000583f8 0248
.org 0x583fa
	str r0, [r4, #92]	@ 000583fa e065
.org 0x583fc
	b.n 0x58436	@ 000583fc 1be0
.org 0x583fe
	.byte 0x00	@ 000583fe data
.org 0x583ff
	.byte 0x00	@ 000583ff data
.org 0x58400
	.byte 0xf8,0xe9,0x02,0x02	@ 00058400 data
.org 0x58404
	.byte 0x00,0xfd,0xff,0xff	@ 00058404 data
.org 0x58408
	cmp r1, r0	@ 00058408 8142
.org 0x5840a
	ble.n 0x58414	@ 0005840a 03dd
.org 0x5840c
	movs r0, #192	@ 0005840c c020
.org 0x5840e
	lsls r0, r0, #2	@ 0005840e 8000
.org 0x58410
	str r0, [r4, #92]	@ 00058410 e065
.org 0x58412
	b.n 0x58436	@ 00058412 10e0
.org 0x58414
	ldr r2, [pc, #56]	@ 00058414 0e4a
.org 0x58416
	ldr r1, [r2, #0]	@ 00058416 1168
.org 0x58418
	ldr r0, [pc, #56]	@ 00058418 0e48
.org 0x5841a
	muls r0, r1	@ 0005841a 4843
.org 0x5841c
	ldr r1, [pc, #56]	@ 0005841c 0e49
.org 0x5841e
	adds r0, r0, r1	@ 0005841e 4018
.org 0x58420
	lsls r0, r0, #1	@ 00058420 4000
.org 0x58422
	lsrs r1, r0, #1	@ 00058422 4108
.org 0x58424
	str r1, [r2, #0]	@ 00058424 1160
.org 0x58426
	lsrs r0, r0, #17	@ 00058426 400c
.org 0x58428
	movs r1, #2	@ 00058428 0221
.org 0x5842a
	ands r0, r1	@ 0005842a 0840
.org 0x5842c
	subs r0, #1	@ 0005842c 0138
.org 0x5842e
	lsls r1, r0, #1	@ 0005842e 4100
.org 0x58430
	adds r1, r1, r0	@ 00058430 0918
.org 0x58432
	lsls r1, r1, #8	@ 00058432 0902
.org 0x58434
	str r1, [r4, #92]	@ 00058434 e165
.org 0x58436
	ldr r0, [r4, #92]	@ 00058436 e06d
.org 0x58438
	movs r6, #1	@ 00058438 0126
.org 0x5843a
	lsrs r0, r0, #31	@ 0005843a c00f
.org 0x5843c
	cmp r5, r0	@ 0005843c 8542
.org 0x5843e
	bne.n 0x58460	@ 0005843e 0fd1
.org 0x58440
	ldr r1, [pc, #24]	@ 00058440 0649
.org 0x58442
	adds r0, r4, #0	@ 00058442 201c
.org 0x58444
	bl 0x1cf00	@ 00058444 c4f75cfd
.org 0x58448
	movs r0, #0	@ 00058448 0020
.org 0x5844a
	strb r0, [r4, #18]	@ 0005844a a074
.org 0x5844c
	b.n 0x5846a	@ 0005844c 0de0
.org 0x5844e
	.byte 0x00	@ 0005844e data
.org 0x5844f
	.byte 0x00	@ 0005844f data
.org 0x58450
	.byte 0x38,0xdc,0x02,0x02	@ 00058450 data
.org 0x58454
	.byte 0xfd,0x43,0x03,0x00	@ 00058454 data
.org 0x58458
	.byte 0xc3,0x9e,0x26,0x00	@ 00058458 data
.org 0x5845c
	.byte 0x07,0xa0,0x00,0x00	@ 0005845c data
.org 0x58460
	ldr r1, [pc, #92]	@ 00058460 1749
.org 0x58462
	adds r0, r4, #0	@ 00058462 201c
.org 0x58464
	bl 0x1cf00	@ 00058464 c4f74cfd
.org 0x58468
	strb r6, [r4, #18]	@ 00058468 a674
.org 0x5846a
	ldrb r0, [r4, #15]	@ 0005846a e07b
.org 0x5846c
	adds r0, #1	@ 0005846c 0130
.org 0x5846e
	strb r0, [r4, #15]	@ 0005846e e073
.org 0x58470
	ldrb r0, [r4, #18]	@ 00058470 a07c
.org 0x58472
	cmp r0, #0	@ 00058472 0028
.org 0x58474
	beq.n 0x584d4	@ 00058474 2ed0
.org 0x58476
	adds r0, r4, #0	@ 00058476 201c
.org 0x58478
	adds r0, #115	@ 00058478 7330
.org 0x5847a
	ldrb r0, [r0, #0]	@ 0005847a 0078
.org 0x5847c
	cmp r0, #3	@ 0005847c 0328
.org 0x5847e
	bne.n 0x584d4	@ 0005847e 29d1
.org 0x58480
	ldr r1, [pc, #64]	@ 00058480 1049
.org 0x58482
	adds r0, r4, #0	@ 00058482 201c
.org 0x58484
	bl 0x1cf00	@ 00058484 c4f73cfd
.org 0x58488
	adds r5, #1	@ 00058488 0135
.org 0x5848a
	movs r0, #1	@ 0005848a 0120
.org 0x5848c
	ands r5, r0	@ 0005848c 0540
.org 0x5848e
	movs r3, #1	@ 0005848e 0123
.org 0x58490
	adds r1, r5, #0	@ 00058490 291c
.org 0x58492
	ands r1, r3	@ 00058492 1940
.org 0x58494
	adds r0, r4, #0	@ 00058494 201c
.org 0x58496
	adds r0, #76	@ 00058496 4c30
.org 0x58498
	strb r1, [r0, #0]	@ 00058498 0170
.org 0x5849a
	movs r2, #74	@ 0005849a 4a22
.org 0x5849c
	adds r2, r2, r4	@ 0005849c 1219
.org 0x5849e
	mov ip, r2	@ 0005849e 9446
.org 0x584a0
	lsls r1, r1, #4	@ 000584a0 0901
.org 0x584a2
	ldrb r2, [r2, #0]	@ 000584a2 1278
.org 0x584a4
	movs r0, #17	@ 000584a4 1120
.org 0x584a6
	negs r0, r0	@ 000584a6 4042
.org 0x584a8
	ands r0, r2	@ 000584a8 1040
.org 0x584aa
	orrs r0, r1	@ 000584aa 0843
.org 0x584ac
	mov r1, ip	@ 000584ac 6146
.org 0x584ae
	strb r0, [r1, #0]	@ 000584ae 0870
.org 0x584b0
	ands r5, r3	@ 000584b0 1d40
.org 0x584b2
	cmp r5, #0	@ 000584b2 002d
.org 0x584b4
	beq.n 0x584c8	@ 000584b4 08d0
.org 0x584b6
	ldrb r0, [r4, #10]	@ 000584b6 a07a
.org 0x584b8
	movs r1, #16	@ 000584b8 1021
.org 0x584ba
	orrs r0, r1	@ 000584ba 0843
.org 0x584bc
	b.n 0x584ce	@ 000584bc 07e0
.org 0x584be
	.byte 0x00	@ 000584be data
.org 0x584bf
	.byte 0x00	@ 000584bf data
.org 0x584c0
	.byte 0x1d,0xa0,0x00,0x00	@ 000584c0 data
.org 0x584c4
	.byte 0x07,0xa0,0x00,0x00	@ 000584c4 data
.org 0x584c8
	ldrb r1, [r4, #10]	@ 000584c8 a17a
.org 0x584ca
	movs r0, #239	@ 000584ca ef20
.org 0x584cc
	ands r0, r1	@ 000584cc 0840
.org 0x584ce
	strb r0, [r4, #10]	@ 000584ce a072
.org 0x584d0
	movs r0, #0	@ 000584d0 0020
.org 0x584d2
	strb r0, [r4, #18]	@ 000584d2 a074
.org 0x584d4
	adds r0, r4, #0	@ 000584d4 201c
.org 0x584d6
	bl 0x1cff0	@ 000584d6 c4f78bfd
.org 0x584da
	adds r0, r4, #0	@ 000584da 201c
.org 0x584dc
	adds r0, #116	@ 000584dc 7430
.org 0x584de
	ldr r3, [pc, #104]	@ 000584de 1a4b
.org 0x584e0
	ldrb r1, [r4, #30]	@ 000584e0 a17f
.org 0x584e2
	lsls r1, r1, #8	@ 000584e2 0902
.org 0x584e4
	adds r2, r4, #0	@ 000584e4 221c
.org 0x584e6
	adds r2, #112	@ 000584e6 7032
.org 0x584e8
	ldrb r2, [r2, #0]	@ 000584e8 1278
.org 0x584ea
	orrs r1, r2	@ 000584ea 1143
.org 0x584ec
	ldr r2, [pc, #92]	@ 000584ec 174a
.org 0x584ee
	adds r1, r1, r2	@ 000584ee 8918
.org 0x584f0
	lsls r1, r1, #2	@ 000584f0 8900
.org 0x584f2
	adds r1, r1, r3	@ 000584f2 c918
.org 0x584f4
	adds r2, r4, #0	@ 000584f4 221c
.org 0x584f6
	adds r2, #113	@ 000584f6 7132
.org 0x584f8
	ldrb r2, [r2, #0]	@ 000584f8 1278
.org 0x584fa
	lsls r2, r2, #24	@ 000584fa 1206
.org 0x584fc
	asrs r2, r2, #24	@ 000584fc 1216
.org 0x584fe
	ldr r1, [r1, #0]	@ 000584fe 0968
.org 0x58500
	lsls r2, r2, #2	@ 00058500 9200
.org 0x58502
	adds r2, r2, r1	@ 00058502 5218
.org 0x58504
	ldr r1, [r2, #0]	@ 00058504 1168
.org 0x58506
	ldrb r2, [r1, #0]	@ 00058506 0a78
.org 0x58508
	lsls r1, r2, #1	@ 00058508 5100
.org 0x5850a
	adds r1, r1, r2	@ 0005850a 8918
.org 0x5850c
	lsls r1, r1, #3	@ 0005850c c900
.org 0x5850e
	ldr r2, [pc, #64]	@ 0005850e 104a
.org 0x58510
	adds r1, r1, r2	@ 00058510 8918
.org 0x58512
	bl 0x5784	@ 00058512 adf737f9
.org 0x58516
	ldr r0, [r4, #84]	@ 00058516 606d
.org 0x58518
	ldr r1, [r4, #92]	@ 00058518 e16d
.org 0x5851a
	adds r0, r0, r1	@ 0005851a 4018
.org 0x5851c
	str r0, [r4, #84]	@ 0005851c 6065
.org 0x5851e
	adds r1, r4, #0	@ 0005851e 211c
.org 0x58520
	adds r1, #204	@ 00058520 cc31
