@ FUN_08120368  entry 0x08120368  size 498
.thumb
.org 0x120368
FUN_08120368:
	push {r4, r5, r6, r7, lr}	@ 00120368 f0b5
.org 0x12036a
	sub sp, #4	@ 0012036a 81b0
.org 0x12036c
	adds r5, r0, #0	@ 0012036c 051c
.org 0x12036e
	ldrb r6, [r5, #3]	@ 0012036e ee78
.org 0x120370
	cmp r6, #0	@ 00120370 002e
.org 0x120372
	bne.n 0x1203a8	@ 00120372 19d1
.org 0x120374
	ldr r0, [pc, #92]	@ 00120374 1748
.org 0x120376
	adds r4, r5, r0	@ 00120376 2c18
.org 0x120378
	ldr r1, [pc, #92]	@ 00120378 1749
.org 0x12037a
	str r6, [sp, #0]	@ 0012037a 0096
.org 0x12037c
	adds r0, r4, #0	@ 0012037c 201c
.org 0x12037e
	movs r2, #130	@ 0012037e 8222
.org 0x120380
	movs r3, #0	@ 00120380 0023
.org 0x120382
	bl 0x27b8	@ 00120382 e2f619fa
.org 0x120386
	ldr r0, [pc, #84]	@ 00120386 1548
.org 0x120388
	ldrh r0, [r0, #0]	@ 00120388 0088
.org 0x12038a
	movs r1, #248	@ 0012038a f821
.org 0x12038c
	lsls r1, r1, #5	@ 0012038c 4901
.org 0x12038e
	ands r1, r0	@ 0012038e 0140
.org 0x120390
	lsls r1, r1, #3	@ 00120390 c900
.org 0x120392
	movs r2, #128	@ 00120392 8022
.org 0x120394
	lsls r2, r2, #5	@ 00120394 5201
.org 0x120396
	adds r0, r4, #0	@ 00120396 201c
.org 0x120398
	bl 0x1f1c	@ 00120398 e1f6c0fd
.org 0x12039c
	ldr r1, [pc, #64]	@ 0012039c 1049
.org 0x12039e
	adds r0, r5, r1	@ 0012039e 6818
.org 0x1203a0
	strb r6, [r0, #13]	@ 001203a0 4673
.org 0x1203a2
	ldrb r0, [r5, #3]	@ 001203a2 e878
.org 0x1203a4
	adds r0, #1	@ 001203a4 0130
.org 0x1203a6
	strb r0, [r5, #3]	@ 001203a6 e870
.org 0x1203a8
	adds r0, r5, #0	@ 001203a8 281c
.org 0x1203aa
	bl 0x120c08	@ 001203aa 00f02dfc
.org 0x1203ae
	ldrb r4, [r5, #3]	@ 001203ae ec78
.org 0x1203b0
	cmp r4, #1	@ 001203b0 012c
.org 0x1203b2
	bne.n 0x120478	@ 001203b2 61d1
.org 0x1203b4
	ldr r2, [pc, #44]	@ 001203b4 0b4a
.org 0x1203b6
	ldrh r1, [r2, #6]	@ 001203b6 d188
.org 0x1203b8
	movs r0, #32	@ 001203b8 2020
.org 0x1203ba
	ands r0, r1	@ 001203ba 0840
.org 0x1203bc
	lsls r0, r0, #16	@ 001203bc 0004
.org 0x1203be
	lsrs r6, r0, #16	@ 001203be 060c
.org 0x1203c0
	cmp r6, #0	@ 001203c0 002e
.org 0x1203c2
	beq.n 0x1203e8	@ 001203c2 11d0
.org 0x1203c4
	movs r0, #1	@ 001203c4 0120
.org 0x1203c6
	bl 0x2b10	@ 001203c6 e2f6a3fb
.org 0x1203ca
	movs r0, #0	@ 001203ca 0020
.org 0x1203cc
	strb r4, [r5, #2]	@ 001203cc ac70
.org 0x1203ce
	strb r0, [r5, #3]	@ 001203ce e870
.org 0x1203d0
	b.n 0x1205a2	@ 001203d0 e7e0
.org 0x1203d2
	.byte 0x00	@ 001203d2 data
.org 0x1203d3
	.byte 0x00	@ 001203d3 data
.org 0x1203d4
	.byte 0xd8,0x0e,0x00,0x00	@ 001203d4 data
.org 0x1203d8
	.byte 0x00,0xc0,0xb2,0x08	@ 001203d8 data
.org 0x1203dc
	.byte 0x06,0x0a,0x00,0x02	@ 001203dc data
.org 0x1203e0
	.byte 0xcc,0x0d,0x00,0x00	@ 001203e0 data
.org 0x1203e4
	.byte 0x60,0x07,0x00,0x02	@ 001203e4 data
.org 0x1203e8
	movs r0, #16	@ 001203e8 1020
.org 0x1203ea
	ands r0, r1	@ 001203ea 0840
.org 0x1203ec
	lsls r0, r0, #16	@ 001203ec 0004
.org 0x1203ee
	lsrs r7, r0, #16	@ 001203ee 070c
.org 0x1203f0
	cmp r7, #0	@ 001203f0 002f
.org 0x1203f2
	beq.n 0x120404	@ 001203f2 07d0
.org 0x1203f4
	movs r0, #1	@ 001203f4 0120
.org 0x1203f6
	bl 0x2b10	@ 001203f6 e2f68bfb
.org 0x1203fa
	movs r0, #3	@ 001203fa 0320
.org 0x1203fc
	strb r0, [r5, #2]	@ 001203fc a870
.org 0x1203fe
	strb r6, [r5, #3]	@ 001203fe ee70
.org 0x120400
	movs r0, #0	@ 00120400 0020
.org 0x120402
	b.n 0x1205a2	@ 00120402 cee0
.org 0x120404
	ldrh r1, [r2, #4]	@ 00120404 9188
.org 0x120406
	ands r4, r1	@ 00120406 0c40
.org 0x120408
	cmp r4, #0	@ 00120408 002c
.org 0x12040a
	bne.n 0x120414	@ 0012040a 03d1
.org 0x12040c
	movs r0, #128	@ 0012040c 8020
.org 0x12040e
	ands r0, r1	@ 0012040e 0840
.org 0x120410
	cmp r0, #0	@ 00120410 0028
.org 0x120412
	beq.n 0x120460	@ 00120412 25d0
.org 0x120414
	ldr r0, [pc, #56]	@ 00120414 0e48
.org 0x120416
	adds r6, r5, r0	@ 00120416 2e18
.org 0x120418
	ldrb r0, [r6, #3]	@ 00120418 f078
.org 0x12041a
	cmp r0, #0	@ 0012041a 0028
.org 0x12041c
	beq.n 0x120500	@ 0012041c 70d0
.org 0x12041e
	ldr r1, [pc, #52]	@ 0012041e 0d49
.org 0x120420
	adds r4, r5, r1	@ 00120420 6c18
.org 0x120422
	ldr r1, [pc, #52]	@ 00120422 0d49
.org 0x120424
	str r7, [sp, #0]	@ 00120424 0097
.org 0x120426
	adds r0, r4, #0	@ 00120426 201c
.org 0x120428
	movs r2, #176	@ 00120428 b022
.org 0x12042a
	movs r3, #0	@ 0012042a 0023
.org 0x12042c
	bl 0x27b8	@ 0012042c e2f6c4f9
.org 0x120430
	ldr r0, [pc, #40]	@ 00120430 0a48
.org 0x120432
	ldrh r0, [r0, #0]	@ 00120432 0088
.org 0x120434
	movs r1, #248	@ 00120434 f821
.org 0x120436
	lsls r1, r1, #5	@ 00120436 4901
.org 0x120438
	ands r1, r0	@ 00120438 0140
.org 0x12043a
	lsls r1, r1, #3	@ 0012043a c900
.org 0x12043c
	movs r2, #128	@ 0012043c 8022
.org 0x12043e
	lsls r2, r2, #5	@ 0012043e 5201
.org 0x120440
	adds r0, r4, #0	@ 00120440 201c
.org 0x120442
	bl 0x1f1c	@ 00120442 e1f66bfd
.org 0x120446
	movs r0, #2	@ 00120446 0220
.org 0x120448
	bl 0x2b10	@ 00120448 e2f662fb
.org 0x12044c
	strb r7, [r6, #2]	@ 0012044c b770
.org 0x12044e
	b.n 0x12059c	@ 0012044e a5e0
.org 0x120450
	.byte 0xcc,0x0d,0x00,0x00	@ 00120450 data
.org 0x120454
	.byte 0xd8,0x0e,0x00,0x00	@ 00120454 data
.org 0x120458
	.byte 0x00,0xc0,0xb2,0x08	@ 00120458 data
.org 0x12045c
	.byte 0x06,0x0a,0x00,0x02	@ 0012045c data
.org 0x120460
	movs r0, #2	@ 00120460 0220
.org 0x120462
	ands r0, r1	@ 00120462 0840
.org 0x120464
	cmp r0, #0	@ 00120464 0028
.org 0x120466
	bne.n 0x12046a	@ 00120466 00d1
.org 0x120468
	b.n 0x1205a0	@ 00120468 9ae0
.org 0x12046a
	ldr r0, [pc, #8]	@ 0012046a 0248
.org 0x12046c
	adds r1, r5, r0	@ 0012046c 2918
.org 0x12046e
	movs r0, #1	@ 0012046e 0120
.org 0x120470
	strb r0, [r1, #17]	@ 00120470 4874
.org 0x120472
	b.n 0x1205a0	@ 00120472 95e0
.org 0x120474
	.byte 0xcc,0x0d,0x00,0x00	@ 00120474 data
.org 0x120478
	cmp r4, #2	@ 00120478 022c
.org 0x12047a
	beq.n 0x12047e	@ 0012047a 00d0
.org 0x12047c
	b.n 0x12058c	@ 0012047c 86e0
.org 0x12047e
	ldr r2, [pc, #64]	@ 0012047e 104a
.org 0x120480
	ldrh r1, [r2, #4]	@ 00120480 9188
.org 0x120482
	adds r6, r1, #0	@ 00120482 0e1c
.org 0x120484
	ands r6, r4	@ 00120484 2640
.org 0x120486
	cmp r6, #0	@ 00120486 002e
.org 0x120488
	beq.n 0x1204d0	@ 00120488 22d0
.org 0x12048a
	ldr r1, [pc, #56]	@ 0012048a 0e49
.org 0x12048c
	adds r4, r5, r1	@ 0012048c 6c18
.org 0x12048e
	ldr r1, [pc, #56]	@ 0012048e 0e49
.org 0x120490
	movs r0, #0	@ 00120490 0020
.org 0x120492
	str r0, [sp, #0]	@ 00120492 0090
.org 0x120494
	adds r0, r4, #0	@ 00120494 201c
.org 0x120496
	movs r2, #130	@ 00120496 8222
.org 0x120498
	movs r3, #0	@ 00120498 0023
.org 0x12049a
	bl 0x27b8	@ 0012049a e2f68df9
.org 0x12049e
	ldr r0, [pc, #44]	@ 0012049e 0b48
.org 0x1204a0
	ldrh r0, [r0, #0]	@ 001204a0 0088
.org 0x1204a2
	movs r1, #248	@ 001204a2 f821
.org 0x1204a4
	lsls r1, r1, #5	@ 001204a4 4901
.org 0x1204a6
	ands r1, r0	@ 001204a6 0140
.org 0x1204a8
	lsls r1, r1, #3	@ 001204a8 c900
.org 0x1204aa
	movs r2, #128	@ 001204aa 8022
.org 0x1204ac
	lsls r2, r2, #5	@ 001204ac 5201
.org 0x1204ae
	adds r0, r4, #0	@ 001204ae 201c
.org 0x1204b0
	bl 0x1f1c	@ 001204b0 e1f634fd
.org 0x1204b4
	movs r0, #3	@ 001204b4 0320
.org 0x1204b6
	bl 0x2b10	@ 001204b6 e2f62bfb
.org 0x1204ba
	movs r0, #1	@ 001204ba 0120
.org 0x1204bc
	b.n 0x12059e	@ 001204bc 6fe0
.org 0x1204be
	.byte 0x00	@ 001204be data
.org 0x1204bf
	.byte 0x00	@ 001204bf data
.org 0x1204c0
	.byte 0x60,0x07,0x00,0x02	@ 001204c0 data
.org 0x1204c4
	.byte 0xd8,0x0e,0x00,0x00	@ 001204c4 data
.org 0x1204c8
	.byte 0x00,0xc0,0xb2,0x08	@ 001204c8 data
.org 0x1204cc
	.byte 0x06,0x0a,0x00,0x02	@ 001204cc data
.org 0x1204d0
	movs r0, #1	@ 001204d0 0120
.org 0x1204d2
	ands r0, r1	@ 001204d2 0840
.org 0x1204d4
	cmp r0, #0	@ 001204d4 0028
.org 0x1204d6
	beq.n 0x120508	@ 001204d6 17d0
.org 0x1204d8
	ldr r0, [pc, #28]	@ 001204d8 0748
.org 0x1204da
	adds r4, r5, r0	@ 001204da 2c18
.org 0x1204dc
	ldr r1, [pc, #28]	@ 001204dc 0749
.org 0x1204de
	adds r0, r5, r1	@ 001204de 6818
.org 0x1204e0
	ldrb r1, [r4, #2]	@ 001204e0 a178
.org 0x1204e2
	adds r0, r0, r1	@ 001204e2 4018
.org 0x1204e4
	ldrb r0, [r0, #0]	@ 001204e4 0078
.org 0x1204e6
	cmp r0, #255	@ 001204e6 ff28
.org 0x1204e8
	beq.n 0x120500	@ 001204e8 0ad0
.org 0x1204ea
	movs r0, #2	@ 001204ea 0220
.org 0x1204ec
	bl 0x2b10	@ 001204ec e2f610fb
.org 0x1204f0
	movs r0, #3	@ 001204f0 0320
.org 0x1204f2
	strb r0, [r5, #3]	@ 001204f2 e870
.org 0x1204f4
	strb r6, [r4, #18]	@ 001204f4 a674
.org 0x1204f6
	b.n 0x1205a0	@ 001204f6 53e0
.org 0x1204f8
	.byte 0xcc,0x0d,0x00,0x00	@ 001204f8 data
.org 0x1204fc
	.byte 0xd2,0x0d,0x00,0x00	@ 001204fc data
.org 0x120500
	movs r0, #4	@ 00120500 0420
.org 0x120502
	bl 0x2b10	@ 00120502 e2f605fb
.org 0x120506
	b.n 0x1205a0	@ 00120506 4be0
.org 0x120508
	ldrh r1, [r2, #6]	@ 00120508 d188
.org 0x12050a
	movs r0, #64	@ 0012050a 4020
.org 0x12050c
	ands r0, r1	@ 0012050c 0840
.org 0x12050e
	cmp r0, #0	@ 0012050e 0028
.org 0x120510
	beq.n 0x12054e	@ 00120510 1dd0
.org 0x120512
	ldr r0, [pc, #24]	@ 00120512 0648
.org 0x120514
	adds r4, r5, r0	@ 00120514 2c18
.org 0x120516
	ldrb r0, [r4, #2]	@ 00120516 a078
.org 0x120518
	cmp r0, #0	@ 00120518 0028
.org 0x12051a
	beq.n 0x120530	@ 0012051a 09d0
.org 0x12051c
	movs r0, #1	@ 0012051c 0120
.org 0x12051e
	bl 0x2b10	@ 0012051e e2f6f7fa
.org 0x120522
	ldrb r0, [r4, #2]	@ 00120522 a078
.org 0x120524
	subs r0, #1	@ 00120524 0138
.org 0x120526
	strb r0, [r4, #2]	@ 00120526 a070
.org 0x120528
	b.n 0x1205a0	@ 00120528 3ae0
.org 0x12052a
	.byte 0x00	@ 0012052a data
.org 0x12052b
	.byte 0x00	@ 0012052b data
.org 0x12052c
	.byte 0xcc,0x0d,0x00,0x00	@ 0012052c data
.org 0x120530
	ldrb r0, [r4, #14]	@ 00120530 a07b
.org 0x120532
	cmp r0, #0	@ 00120532 0028
.org 0x120534
	beq.n 0x120544	@ 00120534 06d0
.org 0x120536
	movs r0, #1	@ 00120536 0120
.org 0x120538
	bl 0x2b10	@ 00120538 e2f6eafa
.org 0x12053c
	ldrb r0, [r4, #13]	@ 0012053c 607b
.org 0x12053e
	subs r0, #1	@ 0012053e 0138
.org 0x120540
	strb r0, [r4, #13]	@ 00120540 6073
.org 0x120542
	b.n 0x1205a0	@ 00120542 2de0
.org 0x120544
	movs r0, #3	@ 00120544 0320
.org 0x120546
	bl 0x2b10	@ 00120546 e2f6e3fa
.org 0x12054a
	movs r0, #1	@ 0012054a 0120
.org 0x12054c
	b.n 0x12059e	@ 0012054c 27e0
.org 0x12054e
	movs r0, #128	@ 0012054e 8020
.org 0x120550
	ands r0, r1	@ 00120550 0840
.org 0x120552
	cmp r0, #0	@ 00120552 0028
.org 0x120554
	beq.n 0x1205a0	@ 00120554 24d0
.org 0x120556
	ldr r1, [pc, #28]	@ 00120556 0749
.org 0x120558
	adds r4, r5, r1	@ 00120558 6c18
