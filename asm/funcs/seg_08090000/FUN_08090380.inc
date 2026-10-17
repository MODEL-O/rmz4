@ FUN_08090380  entry 0x08090380  size 268
.thumb
.org 0x90380
FUN_08090380:
	push {r4, r5, r6, r7, lr}	@ 00090380 f0b5
.org 0x90382
	mov r7, r8	@ 00090382 4746
.org 0x90384
	push {r7}	@ 00090384 80b4
.org 0x90386
	adds r4, r0, #0	@ 00090386 041c
.org 0x90388
	ldr r7, [r4, #40]	@ 00090388 a76a
.org 0x9038a
	ldrb r0, [r7, #10]	@ 0009038a b87a
.org 0x9038c
	lsrs r5, r0, #4	@ 0009038c 0509
.org 0x9038e
	movs r0, #1	@ 0009038e 0120
.org 0x90390
	ands r5, r0	@ 00090390 0540
.org 0x90392
	adds r0, r4, #0	@ 00090392 201c
.org 0x90394
	adds r0, #183	@ 00090394 b730
.org 0x90396
	ldrb r6, [r0, #0]	@ 00090396 0678
.org 0x90398
	ldrb r0, [r4, #15]	@ 00090398 e07b
.org 0x9039a
	cmp r0, #0	@ 0009039a 0028
.org 0x9039c
	bne.n 0x90414	@ 0009039c 3ad1
.org 0x9039e
	adds r0, r4, #0	@ 0009039e 201c
.org 0x903a0
	adds r0, #116	@ 000903a0 7430
.org 0x903a2
	ldr r1, [pc, #28]	@ 000903a2 0749
.org 0x903a4
	bl 0x5784	@ 000903a4 75f7eef9
.org 0x903a8
	ldrb r1, [r4, #10]	@ 000903a8 a17a
.org 0x903aa
	movs r0, #1	@ 000903aa 0120
.org 0x903ac
	movs r3, #0	@ 000903ac 0023
.org 0x903ae
	adds r2, r0, #0	@ 000903ae 021c
.org 0x903b0
	orrs r2, r1	@ 000903b0 0a43
.org 0x903b2
	strb r2, [r4, #10]	@ 000903b2 a272
.org 0x903b4
	adds r1, r5, #0	@ 000903b4 291c
.org 0x903b6
	cmp r1, #0	@ 000903b6 0029
.org 0x903b8
	beq.n 0x903c4	@ 000903b8 04d0
.org 0x903ba
	movs r0, #16	@ 000903ba 1020
.org 0x903bc
	orrs r2, r0	@ 000903bc 0243
.org 0x903be
	b.n 0x903c8	@ 000903be 03e0
.org 0x903c0
	.byte 0x8c,0x00,0x86,0x08	@ 000903c0 data
.org 0x903c4
	movs r0, #239	@ 000903c4 ef20
.org 0x903c6
	ands r2, r0	@ 000903c6 0240
.org 0x903c8
	strb r2, [r4, #10]	@ 000903c8 a272
.org 0x903ca
	adds r0, r4, #0	@ 000903ca 201c
.org 0x903cc
	adds r0, #76	@ 000903cc 4c30
.org 0x903ce
	strb r1, [r0, #0]	@ 000903ce 0170
.org 0x903d0
	adds r3, r4, #0	@ 000903d0 231c
.org 0x903d2
	adds r3, #74	@ 000903d2 4a33
.org 0x903d4
	lsls r1, r1, #4	@ 000903d4 0901
.org 0x903d6
	ldrb r2, [r3, #0]	@ 000903d6 1a78
.org 0x903d8
	movs r0, #17	@ 000903d8 1120
.org 0x903da
	negs r0, r0	@ 000903da 4042
.org 0x903dc
	ands r0, r2	@ 000903dc 1040
.org 0x903de
	orrs r0, r1	@ 000903de 0843
.org 0x903e0
	strb r0, [r3, #0]	@ 000903e0 1870
.org 0x903e2
	ldr r1, [pc, #120]	@ 000903e2 1e49
.org 0x903e4
	adds r0, r4, #0	@ 000903e4 201c
.org 0x903e6
	bl 0x1cf00	@ 000903e6 8cf78bfd
.org 0x903ea
	ldr r1, [pc, #116]	@ 000903ea 1d49
.org 0x903ec
	adds r0, r6, #0	@ 000903ec 301c
.org 0x903ee
	adds r0, #64	@ 000903ee 4030
.org 0x903f0
	lsls r0, r0, #24	@ 000903f0 0006
.org 0x903f2
	lsrs r0, r0, #23	@ 000903f2 c00d
.org 0x903f4
	adds r0, r0, r1	@ 000903f4 4018
.org 0x903f6
	movs r2, #0	@ 000903f6 0022
.org 0x903f8
	ldrsh r0, [r0, r2]	@ 000903f8 805e
.org 0x903fa
	lsls r0, r0, #6	@ 000903fa 8001
.org 0x903fc
	str r0, [r4, #92]	@ 000903fc e065
.org 0x903fe
	lsls r0, r6, #1	@ 000903fe 7000
.org 0x90400
	adds r0, r0, r1	@ 00090400 4018
.org 0x90402
	movs r1, #0	@ 00090402 0021
.org 0x90404
	ldrsh r0, [r0, r1]	@ 00090404 405e
.org 0x90406
	lsls r0, r0, #6	@ 00090406 8001
.org 0x90408
	str r0, [r4, #96]	@ 00090408 2066
.org 0x9040a
	movs r0, #12	@ 0009040a 0c20
.org 0x9040c
	strb r0, [r4, #18]	@ 0009040c a074
.org 0x9040e
	ldrb r0, [r4, #15]	@ 0009040e e07b
.org 0x90410
	adds r0, #1	@ 00090410 0130
.org 0x90412
	strb r0, [r4, #15]	@ 00090412 e073
.org 0x90414
	adds r0, r4, #0	@ 00090414 201c
.org 0x90416
	bl 0x1cff0	@ 00090416 8cf7ebfd
.org 0x9041a
	ldrb r0, [r4, #18]	@ 0009041a a07c
.org 0x9041c
	cmp r0, #0	@ 0009041c 0028
.org 0x9041e
	beq.n 0x90424	@ 0009041e 01d0
.org 0x90420
	subs r0, #1	@ 00090420 0138
.org 0x90422
	strb r0, [r4, #18]	@ 00090422 a074
.org 0x90424
	ldrb r0, [r4, #18]	@ 00090424 a07c
.org 0x90426
	lsls r0, r0, #6	@ 00090426 8001
.org 0x90428
	movs r1, #12	@ 00090428 0c21
.org 0x9042a
	bl 0x128fb8	@ 0009042a 98f0c5fd
.org 0x9042e
	ldr r1, [pc, #48]	@ 0009042e 0c49
.org 0x90430
	lsls r0, r0, #24	@ 00090430 0006
.org 0x90432
	lsrs r0, r0, #23	@ 00090432 c00d
.org 0x90434
	adds r0, r0, r1	@ 00090434 4018
.org 0x90436
	ldrh r6, [r0, #0]	@ 00090436 0688
.org 0x90438
	movs r2, #128	@ 00090438 8022
.org 0x9043a
	lsls r2, r2, #1	@ 0009043a 5200
.org 0x9043c
	mov r8, r2	@ 0009043c 9046
.org 0x9043e
	ldr r5, [r7, #84]	@ 0009043e 7d6d
.org 0x90440
	ldr r0, [r4, #92]	@ 00090440 e06d
.org 0x90442
	muls r0, r6	@ 00090442 7043
.org 0x90444
	mov r1, r8	@ 00090444 4146
.org 0x90446
	bl 0x128fb8	@ 00090446 98f0b7fd
.org 0x9044a
	adds r2, r0, #0	@ 0009044a 021c
.org 0x9044c
	ldrb r1, [r7, #10]	@ 0009044c b97a
.org 0x9044e
	movs r0, #16	@ 0009044e 1020
.org 0x90450
	ands r0, r1	@ 00090450 0840
.org 0x90452
	cmp r0, #0	@ 00090452 0028
.org 0x90454
	beq.n 0x90464	@ 00090454 06d0
.org 0x90456
	movs r1, #128	@ 00090456 8021
.org 0x90458
	lsls r1, r1, #3	@ 00090458 c900
.org 0x9045a
	b.n 0x90466	@ 0009045a 04e0
.org 0x9045c
	.byte 0x09,0x39,0x00,0x00	@ 0009045c data
.org 0x90460
	.byte 0x0c,0x93,0x12,0x08	@ 00090460 data
.org 0x90464
	ldr r1, [pc, #48]	@ 00090464 0c49
.org 0x90466
	adds r0, r2, r1	@ 00090466 5018
.org 0x90468
	adds r0, r5, r0	@ 00090468 2818
.org 0x9046a
	str r0, [r4, #84]	@ 0009046a 6065
.org 0x9046c
	ldr r0, [r4, #96]	@ 0009046c 206e
.org 0x9046e
	muls r0, r6	@ 0009046e 7043
.org 0x90470
	mov r1, r8	@ 00090470 4146
.org 0x90472
	bl 0x128fb8	@ 00090472 98f0a1fd
.org 0x90476
	ldr r2, [pc, #36]	@ 00090476 094a
.org 0x90478
	adds r0, r0, r2	@ 00090478 8018
.org 0x9047a
	ldr r1, [r7, #88]	@ 0009047a b96d
.org 0x9047c
	adds r1, r1, r0	@ 0009047c 0918
.org 0x9047e
	str r1, [r4, #88]	@ 0009047e a165
.org 0x90480
	ldrb r0, [r4, #18]	@ 00090480 a07c
.org 0x90482
	cmp r0, #0	@ 00090482 0028
.org 0x90484
	bne.n 0x9048e	@ 00090484 03d1
.org 0x90486
	adds r1, r4, #0	@ 00090486 211c
.org 0x90488
	adds r1, #182	@ 00090488 b631
.org 0x9048a
	movs r0, #1	@ 0009048a 0120
