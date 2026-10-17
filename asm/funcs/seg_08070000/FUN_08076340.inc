@ FUN_08076340  entry 0x08076340  size 530
.thumb
.org 0x76340
FUN_08076340:
	push {r4, r5, r6, lr}	@ 00076340 70b5
.org 0x76342
	sub sp, #8	@ 00076342 82b0
.org 0x76344
	adds r6, r0, #0	@ 00076344 061c
.org 0x76346
	ldrb r4, [r6, #14]	@ 00076346 b47b
.org 0x76348
	cmp r4, #0	@ 00076348 002c
.org 0x7634a
	bne.n 0x763cc	@ 0007634a 3fd1
.org 0x7634c
	bl 0x1ce54	@ 0007634c a6f782fd
.org 0x76350
	adds r0, r6, #0	@ 00076350 301c
.org 0x76352
	bl 0x1ceec	@ 00076352 a6f7cbfd
.org 0x76356
	ldr r1, [pc, #48]	@ 00076356 0c49
.org 0x76358
	adds r0, r6, #0	@ 00076358 301c
.org 0x7635a
	bl 0x1cf00	@ 0007635a a6f7d1fd
.org 0x7635e
	adds r0, r6, #0	@ 0007635e 301c
.org 0x76360
	adds r0, #180	@ 00076360 b430
.org 0x76362
	ldr r1, [r6, #84]	@ 00076362 716d
.org 0x76364
	ldr r0, [r0, #24]	@ 00076364 8069
.org 0x76366
	cmp r1, r0	@ 00076366 8142
.org 0x76368
	ble.n 0x7638c	@ 00076368 10dd
.org 0x7636a
	adds r1, r6, #0	@ 0007636a 311c
.org 0x7636c
	adds r1, #76	@ 0007636c 4c31
.org 0x7636e
	movs r0, #1	@ 0007636e 0120
.org 0x76370
	strb r0, [r1, #0]	@ 00076370 0870
.org 0x76372
	adds r2, r6, #0	@ 00076372 321c
.org 0x76374
	adds r2, #74	@ 00076374 4a32
.org 0x76376
	ldrb r0, [r2, #0]	@ 00076376 1078
.org 0x76378
	movs r1, #16	@ 00076378 1021
.org 0x7637a
	orrs r0, r1	@ 0007637a 0843
.org 0x7637c
	strb r0, [r2, #0]	@ 0007637c 1070
.org 0x7637e
	ldrb r0, [r6, #10]	@ 0007637e b07a
.org 0x76380
	orrs r1, r0	@ 00076380 0143
.org 0x76382
	strb r1, [r6, #10]	@ 00076382 b172
.org 0x76384
	b.n 0x763a8	@ 00076384 10e0
.org 0x76386
	.byte 0x00	@ 00076386 data
.org 0x76387
	.byte 0x00	@ 00076387 data
.org 0x76388
	.byte 0x0f,0xaf,0x00,0x00	@ 00076388 data
.org 0x7638c
	adds r0, r6, #0	@ 0007638c 301c
.org 0x7638e
	adds r0, #76	@ 0007638e 4c30
.org 0x76390
	strb r4, [r0, #0]	@ 00076390 0470
.org 0x76392
	adds r2, r6, #0	@ 00076392 321c
.org 0x76394
	adds r2, #74	@ 00076394 4a32
.org 0x76396
	ldrb r1, [r2, #0]	@ 00076396 1178
.org 0x76398
	movs r0, #17	@ 00076398 1120
.org 0x7639a
	negs r0, r0	@ 0007639a 4042
.org 0x7639c
	ands r0, r1	@ 0007639c 0840
.org 0x7639e
	strb r0, [r2, #0]	@ 0007639e 1070
.org 0x763a0
	ldrb r1, [r6, #10]	@ 000763a0 b17a
.org 0x763a2
	movs r0, #239	@ 000763a2 ef20
.org 0x763a4
	ands r0, r1	@ 000763a4 0840
.org 0x763a6
	strb r0, [r6, #10]	@ 000763a6 b072
.org 0x763a8
	ldr r0, [r6, #88]	@ 000763a8 b06d
.org 0x763aa
	ldr r1, [pc, #228]	@ 000763aa 3949
.org 0x763ac
	adds r0, r0, r1	@ 000763ac 4018
.org 0x763ae
	str r0, [r6, #88]	@ 000763ae b065
.org 0x763b0
	movs r2, #0	@ 000763b0 0022
.org 0x763b2
	str r2, [r6, #100]	@ 000763b2 7266
.org 0x763b4
	adds r0, r6, #0	@ 000763b4 301c
.org 0x763b6
	adds r0, #180	@ 000763b6 b430
.org 0x763b8
	movs r1, #0	@ 000763b8 0021
.org 0x763ba
	strh r2, [r0, #34]	@ 000763ba 4284
.org 0x763bc
	strb r1, [r6, #19]	@ 000763bc f174
.org 0x763be
	subs r0, #64	@ 000763be 4038
.org 0x763c0
	ldr r1, [pc, #208]	@ 000763c0 3449
.org 0x763c2
	bl 0x5784	@ 000763c2 8ff7dff9
.org 0x763c6
	ldrb r0, [r6, #14]	@ 000763c6 b07b
.org 0x763c8
	adds r0, #1	@ 000763c8 0130
.org 0x763ca
	strb r0, [r6, #14]	@ 000763ca b073
.org 0x763cc
	adds r0, r6, #0	@ 000763cc 301c
.org 0x763ce
	bl 0x1cff0	@ 000763ce a6f70ffe
.org 0x763d2
	adds r4, r6, #0	@ 000763d2 341c
.org 0x763d4
	adds r4, #208	@ 000763d4 d034
.org 0x763d6
	ldr r5, [r4, #0]	@ 000763d6 2568
.org 0x763d8
	adds r0, r5, #0	@ 000763d8 281c
.org 0x763da
	movs r1, #6	@ 000763da 0621
.org 0x763dc
	bl 0x129198	@ 000763dc b2f0dcfe
.org 0x763e0
	adds r5, #1	@ 000763e0 0135
.org 0x763e2
	str r5, [r4, #0]	@ 000763e2 2560
.org 0x763e4
	adds r5, r6, #0	@ 000763e4 351c
.org 0x763e6
	adds r5, #36	@ 000763e6 2435
.org 0x763e8
	cmp r0, #0	@ 000763e8 0028
.org 0x763ea
	beq.n 0x763ee	@ 000763ea 00d0
.org 0x763ec
	b.n 0x7652a	@ 000763ec 9de0
.org 0x763ee
	ldrb r1, [r6, #10]	@ 000763ee b17a
.org 0x763f0
	movs r0, #16	@ 000763f0 1020
.org 0x763f2
	ands r0, r1	@ 000763f2 0840
.org 0x763f4
	cmp r0, #0	@ 000763f4 0028
.org 0x763f6
	beq.n 0x7649c	@ 000763f6 51d0
.org 0x763f8
	ldrb r0, [r5, #0]	@ 000763f8 2878
.org 0x763fa
	movs r2, #96	@ 000763fa 6022
.org 0x763fc
	subs r2, r2, r0	@ 000763fc 121a
.org 0x763fe
	lsls r2, r2, #24	@ 000763fe 1206
.org 0x76400
	ldr r4, [pc, #148]	@ 00076400 254c
.org 0x76402
	movs r1, #128	@ 00076402 8021
.org 0x76404
	lsls r1, r1, #23	@ 00076404 c905
.org 0x76406
	adds r0, r2, r1	@ 00076406 5018
.org 0x76408
	lsrs r0, r0, #23	@ 00076408 c00d
.org 0x7640a
	adds r0, r0, r4	@ 0007640a 0019
.org 0x7640c
	movs r1, #0	@ 0007640c 0021
.org 0x7640e
	ldrsh r0, [r0, r1]	@ 0007640e 405e
.org 0x76410
	lsls r1, r0, #2	@ 00076410 8100
.org 0x76412
	adds r1, r1, r0	@ 00076412 0918
.org 0x76414
	lsls r1, r1, #2	@ 00076414 8900
.org 0x76416
	ldr r0, [r6, #84]	@ 00076416 706d
.org 0x76418
	adds r0, r0, r1	@ 00076418 4018
.org 0x7641a
	str r0, [sp, #0]	@ 0007641a 0090
.org 0x7641c
	lsrs r2, r2, #23	@ 0007641c d20d
.org 0x7641e
	adds r2, r2, r4	@ 0007641e 1219
.org 0x76420
	movs r1, #0	@ 00076420 0021
.org 0x76422
	ldrsh r0, [r2, r1]	@ 00076422 505e
.org 0x76424
	lsls r1, r0, #2	@ 00076424 8100
.org 0x76426
	adds r1, r1, r0	@ 00076426 0918
.org 0x76428
	lsls r1, r1, #2	@ 00076428 8900
.org 0x7642a
	ldr r0, [r6, #88]	@ 0007642a b06d
.org 0x7642c
	adds r0, r0, r1	@ 0007642c 4018
.org 0x7642e
	str r0, [sp, #4]	@ 0007642e 0190
.org 0x76430
	ldrb r0, [r5, #0]	@ 00076430 2878
.org 0x76432
	movs r2, #80	@ 00076432 5022
.org 0x76434
	subs r2, r2, r0	@ 00076434 121a
.org 0x76436
	lsls r2, r2, #24	@ 00076436 1206
.org 0x76438
	lsrs r2, r2, #24	@ 00076438 120e
.org 0x7643a
	mov r0, sp	@ 0007643a 6846
.org 0x7643c
	movs r1, #2	@ 0007643c 0221
.org 0x7643e
	movs r3, #0	@ 0007643e 0023
.org 0x76440
	bl 0xcbf1c	@ 00076440 55f06cfd
.org 0x76444
	ldrb r0, [r5, #0]	@ 00076444 2878
.org 0x76446
	movs r2, #224	@ 00076446 e022
.org 0x76448
	subs r2, r2, r0	@ 00076448 121a
.org 0x7644a
	lsls r2, r2, #24	@ 0007644a 1206
.org 0x7644c
	movs r1, #128	@ 0007644c 8021
.org 0x7644e
	lsls r1, r1, #23	@ 0007644e c905
.org 0x76450
	adds r0, r2, r1	@ 00076450 5018
.org 0x76452
	lsrs r0, r0, #23	@ 00076452 c00d
.org 0x76454
	adds r0, r0, r4	@ 00076454 0019
.org 0x76456
	movs r1, #0	@ 00076456 0021
.org 0x76458
	ldrsh r0, [r0, r1]	@ 00076458 405e
.org 0x7645a
	lsls r1, r0, #2	@ 0007645a 8100
.org 0x7645c
	adds r1, r1, r0	@ 0007645c 0918
.org 0x7645e
	lsls r1, r1, #2	@ 0007645e 8900
.org 0x76460
	ldr r0, [r6, #84]	@ 00076460 706d
.org 0x76462
	adds r0, r0, r1	@ 00076462 4018
.org 0x76464
	str r0, [sp, #0]	@ 00076464 0090
.org 0x76466
	lsrs r2, r2, #23	@ 00076466 d20d
.org 0x76468
	adds r2, r2, r4	@ 00076468 1219
.org 0x7646a
	movs r1, #0	@ 0007646a 0021
.org 0x7646c
	ldrsh r0, [r2, r1]	@ 0007646c 505e
.org 0x7646e
	lsls r1, r0, #2	@ 0007646e 8100
.org 0x76470
	adds r1, r1, r0	@ 00076470 0918
.org 0x76472
	lsls r1, r1, #2	@ 00076472 8900
.org 0x76474
	ldr r0, [r6, #88]	@ 00076474 b06d
.org 0x76476
	adds r0, r0, r1	@ 00076476 4018
.org 0x76478
	str r0, [sp, #4]	@ 00076478 0190
.org 0x7647a
	ldrb r0, [r5, #0]	@ 0007647a 2878
.org 0x7647c
	movs r2, #208	@ 0007647c d022
.org 0x7647e
	subs r2, r2, r0	@ 0007647e 121a
.org 0x76480
	lsls r2, r2, #24	@ 00076480 1206
.org 0x76482
	lsrs r2, r2, #24	@ 00076482 120e
.org 0x76484
	mov r0, sp	@ 00076484 6846
.org 0x76486
	movs r1, #2	@ 00076486 0221
.org 0x76488
	movs r3, #1	@ 00076488 0123
.org 0x7648a
	bl 0xcbf1c	@ 0007648a 55f047fd
.org 0x7648e
	b.n 0x7652a	@ 0007648e 4ce0
.org 0x76490
	.byte 0x00,0xd9,0xff,0xff	@ 00076490 data
.org 0x76494
	.byte 0xfc,0xcf,0x85,0x08	@ 00076494 data
.org 0x76498
	.byte 0x0c,0x93,0x12,0x08	@ 00076498 data
.org 0x7649c
	ldrb r2, [r5, #0]	@ 0007649c 2a78
.org 0x7649e
	adds r2, #32	@ 0007649e 2032
.org 0x764a0
	lsls r2, r2, #24	@ 000764a0 1206
.org 0x764a2
	ldr r4, [pc, #192]	@ 000764a2 304c
.org 0x764a4
	movs r1, #128	@ 000764a4 8021
.org 0x764a6
	lsls r1, r1, #23	@ 000764a6 c905
.org 0x764a8
	adds r0, r2, r1	@ 000764a8 5018
.org 0x764aa
	lsrs r0, r0, #23	@ 000764aa c00d
.org 0x764ac
	adds r0, r0, r4	@ 000764ac 0019
.org 0x764ae
	movs r1, #0	@ 000764ae 0021
.org 0x764b0
	ldrsh r0, [r0, r1]	@ 000764b0 405e
.org 0x764b2
	lsls r1, r0, #2	@ 000764b2 8100
.org 0x764b4
	adds r1, r1, r0	@ 000764b4 0918
.org 0x764b6
	lsls r1, r1, #2	@ 000764b6 8900
.org 0x764b8
	ldr r0, [r6, #84]	@ 000764b8 706d
.org 0x764ba
	adds r0, r0, r1	@ 000764ba 4018
.org 0x764bc
	str r0, [sp, #0]	@ 000764bc 0090
.org 0x764be
	lsrs r2, r2, #23	@ 000764be d20d
.org 0x764c0
	adds r2, r2, r4	@ 000764c0 1219
.org 0x764c2
	movs r1, #0	@ 000764c2 0021
.org 0x764c4
	ldrsh r0, [r2, r1]	@ 000764c4 505e
.org 0x764c6
	lsls r1, r0, #2	@ 000764c6 8100
.org 0x764c8
	adds r1, r1, r0	@ 000764c8 0918
.org 0x764ca
	lsls r1, r1, #2	@ 000764ca 8900
.org 0x764cc
	ldr r0, [r6, #88]	@ 000764cc b06d
.org 0x764ce
	adds r0, r0, r1	@ 000764ce 4018
.org 0x764d0
	str r0, [sp, #4]	@ 000764d0 0190
.org 0x764d2
	ldrb r2, [r5, #0]	@ 000764d2 2a78
.org 0x764d4
	adds r2, #48	@ 000764d4 3032
.org 0x764d6
	lsls r2, r2, #24	@ 000764d6 1206
.org 0x764d8
	lsrs r2, r2, #24	@ 000764d8 120e
.org 0x764da
	mov r0, sp	@ 000764da 6846
.org 0x764dc
	movs r1, #2	@ 000764dc 0221
.org 0x764de
	movs r3, #0	@ 000764de 0023
.org 0x764e0
	bl 0xcbf1c	@ 000764e0 55f01cfd
.org 0x764e4
	ldrb r2, [r5, #0]	@ 000764e4 2a78
.org 0x764e6
	adds r2, #160	@ 000764e6 a032
.org 0x764e8
	lsls r2, r2, #24	@ 000764e8 1206
.org 0x764ea
	movs r1, #128	@ 000764ea 8021
.org 0x764ec
	lsls r1, r1, #23	@ 000764ec c905
.org 0x764ee
	adds r0, r2, r1	@ 000764ee 5018
.org 0x764f0
	lsrs r0, r0, #23	@ 000764f0 c00d
.org 0x764f2
	adds r0, r0, r4	@ 000764f2 0019
.org 0x764f4
	movs r1, #0	@ 000764f4 0021
.org 0x764f6
	ldrsh r0, [r0, r1]	@ 000764f6 405e
.org 0x764f8
	lsls r1, r0, #2	@ 000764f8 8100
.org 0x764fa
	adds r1, r1, r0	@ 000764fa 0918
.org 0x764fc
	lsls r1, r1, #2	@ 000764fc 8900
.org 0x764fe
	ldr r0, [r6, #84]	@ 000764fe 706d
.org 0x76500
	adds r0, r0, r1	@ 00076500 4018
.org 0x76502
	str r0, [sp, #0]	@ 00076502 0090
.org 0x76504
	lsrs r2, r2, #23	@ 00076504 d20d
.org 0x76506
	adds r2, r2, r4	@ 00076506 1219
.org 0x76508
	movs r1, #0	@ 00076508 0021
.org 0x7650a
	ldrsh r0, [r2, r1]	@ 0007650a 505e
.org 0x7650c
	lsls r1, r0, #2	@ 0007650c 8100
.org 0x7650e
	adds r1, r1, r0	@ 0007650e 0918
.org 0x76510
	lsls r1, r1, #2	@ 00076510 8900
.org 0x76512
	ldr r0, [r6, #88]	@ 00076512 b06d
.org 0x76514
	adds r0, r0, r1	@ 00076514 4018
.org 0x76516
	str r0, [sp, #4]	@ 00076516 0190
.org 0x76518
	ldrb r2, [r5, #0]	@ 00076518 2a78
.org 0x7651a
	adds r2, #176	@ 0007651a b032
.org 0x7651c
	lsls r2, r2, #24	@ 0007651c 1206
.org 0x7651e
	lsrs r2, r2, #24	@ 0007651e 120e
.org 0x76520
	mov r0, sp	@ 00076520 6846
.org 0x76522
	movs r1, #2	@ 00076522 0221
.org 0x76524
	movs r3, #1	@ 00076524 0123
.org 0x76526
	bl 0xcbf1c	@ 00076526 55f0f9fc
.org 0x7652a
	ldr r0, [r6, #100]	@ 0007652a 706e
.org 0x7652c
	adds r0, #8	@ 0007652c 0830
.org 0x7652e
	str r0, [r6, #100]	@ 0007652e 7066
.org 0x76530
	movs r1, #192	@ 00076530 c021
.org 0x76532
	lsls r1, r1, #1	@ 00076532 4900
.org 0x76534
	cmp r0, r1	@ 00076534 8842
.org 0x76536
	ble.n 0x7653a	@ 00076536 00dd
.org 0x76538
	str r1, [r6, #100]	@ 00076538 7166
.org 0x7653a
	adds r1, r6, #0	@ 0007653a 311c
.org 0x7653c
	adds r1, #180	@ 0007653c b431
.org 0x7653e
	ldr r2, [r6, #100]	@ 0007653e 726e
.org 0x76540
	ldrh r0, [r1, #34]	@ 00076540 488c
.org 0x76542
	adds r0, r0, r2	@ 00076542 8018
.org 0x76544
	strh r0, [r1, #34]	@ 00076544 4884
.org 0x76546
	lsrs r0, r0, #8	@ 00076546 000a
.org 0x76548
	strb r0, [r5, #0]	@ 00076548 2870
.org 0x7654a
	ldrh r1, [r1, #34]	@ 0007654a 498c
.org 0x7654c
	movs r0, #128	@ 0007654c 8020
.org 0x7654e
	lsls r0, r0, #5	@ 0007654e 4001
.org 0x76550
	cmp r1, r0	@ 00076550 8142
