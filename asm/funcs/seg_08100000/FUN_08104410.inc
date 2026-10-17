@ FUN_08104410  entry 0x08104410  size 428
.thumb
.org 0x104410
FUN_08104410:
	push {r4, r5, r6, r7, lr}	@ 00104410 f0b5
.org 0x104412
	mov r7, sl	@ 00104412 5746
.org 0x104414
	mov r6, r9	@ 00104414 4e46
.org 0x104416
	mov r5, r8	@ 00104416 4546
.org 0x104418
	push {r5, r6, r7}	@ 00104418 e0b4
.org 0x10441a
	sub sp, #4	@ 0010441a 81b0
.org 0x10441c
	adds r7, r0, #0	@ 0010441c 071c
.org 0x10441e
	ldrb r0, [r7, #19]	@ 0010441e f87c
.org 0x104420
	cmp r0, #0	@ 00104420 0028
.org 0x104422
	beq.n 0x104430	@ 00104422 05d0
.org 0x104424
	subs r0, #1	@ 00104424 0138
.org 0x104426
	strb r0, [r7, #19]	@ 00104426 f874
.org 0x104428
	movs r0, #180	@ 00104428 b420
.org 0x10442a
	adds r0, r0, r7	@ 0010442a c019
.org 0x10442c
	mov sl, r0	@ 0010442c 8246
.org 0x10442e
	b.n 0x104582	@ 0010442e a8e0
.org 0x104430
	ldrb r0, [r7, #18]	@ 00104430 b87c
.org 0x104432
	cmp r0, #3	@ 00104432 0328
.org 0x104434
	bhi.n 0x1044e0	@ 00104434 54d8
.org 0x104436
	lsls r0, r0, #2	@ 00104436 8000
.org 0x104438
	adds r1, r7, #0	@ 00104438 391c
.org 0x10443a
	adds r1, #180	@ 0010443a b431
.org 0x10443c
	adds r0, r1, r0	@ 0010443c 0818
.org 0x10443e
	ldr r0, [r0, #0]	@ 0010443e 0068
.org 0x104440
	mov sl, r1	@ 00104440 8a46
.org 0x104442
	cmp r0, #0	@ 00104442 0028
.org 0x104444
	beq.n 0x104448	@ 00104444 00d0
.org 0x104446
	b.n 0x104582	@ 00104446 9ce0
.org 0x104448
	ldr r6, [pc, #124]	@ 00104448 1f4e
.org 0x10444a
	ldr r1, [pc, #128]	@ 0010444a 2049
.org 0x10444c
	mov r8, r1	@ 0010444c 8846
.org 0x10444e
	ldr r0, [r1, #0]	@ 0010444e 0868
.org 0x104450
	ldr r2, [pc, #124]	@ 00104450 1f4a
.org 0x104452
	mov r9, r2	@ 00104452 9146
.org 0x104454
	mov r4, r9	@ 00104454 4c46
.org 0x104456
	muls r4, r0	@ 00104456 4443
.org 0x104458
	adds r0, r4, #0	@ 00104458 201c
.org 0x10445a
	ldr r5, [pc, #120]	@ 0010445a 1e4d
.org 0x10445c
	adds r0, r0, r5	@ 0010445c 4019
.org 0x10445e
	lsls r0, r0, #1	@ 0010445e 4000
.org 0x104460
	lsrs r4, r0, #1	@ 00104460 4408
.org 0x104462
	str r4, [r1, #0]	@ 00104462 0c60
.org 0x104464
	lsrs r0, r0, #17	@ 00104464 400c
.org 0x104466
	movs r1, #160	@ 00104466 a021
.org 0x104468
	lsls r1, r1, #7	@ 00104468 c901
.org 0x10446a
	bl 0x129198	@ 0010446a 24f095fe
.org 0x10446e
	lsls r0, r0, #1	@ 0010446e 4000
.org 0x104470
	ldr r1, [pc, #100]	@ 00104470 1949
.org 0x104472
	adds r0, r0, r1	@ 00104472 4018
.org 0x104474
	ldr r3, [r6, #56]	@ 00104474 b36b
.org 0x104476
	adds r3, r3, r0	@ 00104476 1b18
.org 0x104478
	ldr r1, [r6, #60]	@ 00104478 f16b
.org 0x10447a
	ldr r2, [pc, #96]	@ 0010447a 184a
.org 0x10447c
	adds r1, r1, r2	@ 0010447c 8918
.org 0x10447e
	mov r2, r9	@ 0010447e 4a46
.org 0x104480
	muls r2, r4	@ 00104480 6243
.org 0x104482
	adds r2, r2, r5	@ 00104482 5219
.org 0x104484
	lsls r2, r2, #1	@ 00104484 5200
.org 0x104486
	lsrs r0, r2, #1	@ 00104486 5008
.org 0x104488
	mov r4, r8	@ 00104488 4446
.org 0x10448a
	str r0, [r4, #0]	@ 0010448a 2060
.org 0x10448c
	lsrs r2, r2, #17	@ 0010448c 520c
.org 0x10448e
	movs r0, #1	@ 0010448e 0120
.org 0x104490
	ands r2, r0	@ 00104490 0240
.org 0x104492
	adds r2, #3	@ 00104492 0332
.org 0x104494
	adds r0, r3, #0	@ 00104494 181c
.org 0x104496
	bl 0x1040c0	@ 00104496 fff713fe
.org 0x10449a
	ldrb r1, [r7, #18]	@ 0010449a b97c
.org 0x10449c
	lsls r1, r1, #2	@ 0010449c 8900
.org 0x10449e
	add r1, sl	@ 0010449e 5144
.org 0x1044a0
	str r0, [r1, #0]	@ 001044a0 0860
.org 0x1044a2
	cmp r0, #0	@ 001044a2 0028
.org 0x1044a4
	beq.n 0x104582	@ 001044a4 6dd0
.org 0x1044a6
	ldr r0, [r4, #0]	@ 001044a6 2068
.org 0x1044a8
	mov r1, r9	@ 001044a8 4946
.org 0x1044aa
	muls r1, r0	@ 001044aa 4143
.org 0x1044ac
	adds r0, r1, #0	@ 001044ac 081c
.org 0x1044ae
	adds r0, r0, r5	@ 001044ae 4019
.org 0x1044b0
	lsls r0, r0, #1	@ 001044b0 4000
.org 0x1044b2
	lsrs r1, r0, #1	@ 001044b2 4108
.org 0x1044b4
	str r1, [r4, #0]	@ 001044b4 2160
.org 0x1044b6
	lsrs r0, r0, #17	@ 001044b6 400c
.org 0x1044b8
	movs r1, #63	@ 001044b8 3f21
.org 0x1044ba
	ands r0, r1	@ 001044ba 0840
.org 0x1044bc
	adds r0, #16	@ 001044bc 1030
.org 0x1044be
	strb r0, [r7, #19]	@ 001044be f874
.org 0x1044c0
	ldrb r0, [r7, #18]	@ 001044c0 b87c
.org 0x1044c2
	adds r0, #1	@ 001044c2 0130
.org 0x1044c4
	strb r0, [r7, #18]	@ 001044c4 b874
.org 0x1044c6
	b.n 0x104582	@ 001044c6 5ce0
.org 0x1044c8
	.byte 0xf8,0xe9,0x02,0x02	@ 001044c8 data
.org 0x1044cc
	.byte 0x38,0xdc,0x02,0x02	@ 001044cc data
.org 0x1044d0
	.byte 0xfd,0x43,0x03,0x00	@ 001044d0 data
.org 0x1044d4
	.byte 0xc3,0x9e,0x26,0x00	@ 001044d4 data
.org 0x1044d8
	.byte 0x00,0xa8,0xff,0xff	@ 001044d8 data
.org 0x1044dc
	.byte 0xff,0x6f,0x00,0x00	@ 001044dc data
.org 0x1044e0
	ldrb r0, [r7, #18]	@ 001044e0 b87c
.org 0x1044e2
	lsls r0, r0, #2	@ 001044e2 8000
.org 0x1044e4
	adds r0, r0, r7	@ 001044e4 c019
.org 0x1044e6
	ldr r0, [r0, #76]	@ 001044e6 c06c
.org 0x1044e8
	str r0, [sp, #0]	@ 001044e8 0090
.org 0x1044ea
	movs r2, #180	@ 001044ea b422
.org 0x1044ec
	adds r2, r2, r7	@ 001044ec d219
.org 0x1044ee
	mov sl, r2	@ 001044ee 9246
.org 0x1044f0
	cmp r0, #0	@ 001044f0 0028
.org 0x1044f2
	bne.n 0x104582	@ 001044f2 46d1
.org 0x1044f4
	ldr r6, [pc, #220]	@ 001044f4 374e
.org 0x1044f6
	ldr r4, [pc, #224]	@ 001044f6 384c
.org 0x1044f8
	mov r8, r4	@ 001044f8 a046
.org 0x1044fa
	ldr r0, [r4, #0]	@ 001044fa 2068
.org 0x1044fc
	ldr r1, [pc, #220]	@ 001044fc 3749
.org 0x1044fe
	mov r9, r1	@ 001044fe 8946
.org 0x104500
	mov r2, r9	@ 00104500 4a46
.org 0x104502
	muls r2, r0	@ 00104502 4243
.org 0x104504
	adds r0, r2, #0	@ 00104504 101c
.org 0x104506
	ldr r5, [pc, #216]	@ 00104506 364d
.org 0x104508
	adds r0, r0, r5	@ 00104508 4019
.org 0x10450a
	lsls r0, r0, #1	@ 0010450a 4000
.org 0x10450c
	lsrs r4, r0, #1	@ 0010450c 4408
.org 0x10450e
	mov r1, r8	@ 0010450e 4146
.org 0x104510
	str r4, [r1, #0]	@ 00104510 0c60
.org 0x104512
	lsrs r0, r0, #17	@ 00104512 400c
.org 0x104514
	movs r1, #160	@ 00104514 a021
.org 0x104516
	lsls r1, r1, #7	@ 00104516 c901
.org 0x104518
	bl 0x129198	@ 00104518 24f03efe
.org 0x10451c
	lsls r0, r0, #1	@ 0010451c 4000
.org 0x10451e
	ldr r2, [pc, #196]	@ 0010451e 314a
.org 0x104520
	adds r0, r0, r2	@ 00104520 8018
.org 0x104522
	ldr r3, [r6, #56]	@ 00104522 b36b
.org 0x104524
	adds r3, r3, r0	@ 00104524 1b18
.org 0x104526
	ldr r1, [r6, #60]	@ 00104526 f16b
.org 0x104528
	ldr r0, [pc, #188]	@ 00104528 2f48
.org 0x10452a
	adds r1, r1, r0	@ 0010452a 0918
.org 0x10452c
	mov r2, r9	@ 0010452c 4a46
.org 0x10452e
	muls r2, r4	@ 0010452e 6243
.org 0x104530
	adds r2, r2, r5	@ 00104530 5219
.org 0x104532
	lsls r2, r2, #1	@ 00104532 5200
.org 0x104534
	lsrs r0, r2, #1	@ 00104534 5008
.org 0x104536
	mov r4, r8	@ 00104536 4446
.org 0x104538
	str r0, [r4, #0]	@ 00104538 2060
.org 0x10453a
	lsrs r2, r2, #17	@ 0010453a 520c
.org 0x10453c
	movs r0, #1	@ 0010453c 0120
.org 0x10453e
	ands r2, r0	@ 0010453e 0240
.org 0x104540
	adds r2, #3	@ 00104540 0332
.org 0x104542
	adds r0, r3, #0	@ 00104542 181c
.org 0x104544
	bl 0x1040c0	@ 00104544 fff7bcfd
.org 0x104548
	ldrb r1, [r7, #18]	@ 00104548 b97c
.org 0x10454a
	lsls r1, r1, #2	@ 0010454a 8900
.org 0x10454c
	adds r1, r1, r7	@ 0010454c c919
.org 0x10454e
	str r0, [r1, #76]	@ 0010454e c864
.org 0x104550
	cmp r0, #0	@ 00104550 0028
.org 0x104552
	beq.n 0x104582	@ 00104552 16d0
.org 0x104554
	ldr r0, [r4, #0]	@ 00104554 2068
.org 0x104556
	mov r1, r9	@ 00104556 4946
.org 0x104558
	muls r1, r0	@ 00104558 4143
.org 0x10455a
	adds r0, r1, #0	@ 0010455a 081c
.org 0x10455c
	adds r0, r0, r5	@ 0010455c 4019
.org 0x10455e
	lsls r0, r0, #1	@ 0010455e 4000
.org 0x104560
	lsrs r1, r0, #1	@ 00104560 4108
.org 0x104562
	str r1, [r4, #0]	@ 00104562 2160
.org 0x104564
	lsrs r0, r0, #17	@ 00104564 400c
.org 0x104566
	movs r1, #63	@ 00104566 3f21
.org 0x104568
	ands r0, r1	@ 00104568 0840
.org 0x10456a
	adds r0, #16	@ 0010456a 1030
.org 0x10456c
	strb r0, [r7, #19]	@ 0010456c f874
.org 0x10456e
	ldrb r0, [r7, #18]	@ 0010456e b87c
.org 0x104570
	adds r0, #1	@ 00104570 0130
.org 0x104572
	strb r0, [r7, #18]	@ 00104572 b874
.org 0x104574
	lsls r0, r0, #24	@ 00104574 0006
.org 0x104576
	lsrs r0, r0, #24	@ 00104576 000e
.org 0x104578
	cmp r0, #7	@ 00104578 0728
.org 0x10457a
	bls.n 0x104582	@ 0010457a 02d9
.org 0x10457c
	mov r2, sp	@ 0010457c 6a46
.org 0x10457e
	ldrb r2, [r2, #0]	@ 0010457e 1278
.org 0x104580
	strb r2, [r7, #18]	@ 00104580 ba74
.org 0x104582
	movs r3, #0	@ 00104582 0023
.org 0x104584
	mov r1, sl	@ 00104584 5146
.org 0x104586
	movs r4, #0	@ 00104586 0024
.org 0x104588
	lsls r0, r3, #2	@ 00104588 9800
.org 0x10458a
	adds r2, r1, r0	@ 0010458a 0a18
.org 0x10458c
	ldr r0, [r2, #0]	@ 0010458c 1068
.org 0x10458e
	cmp r0, #0	@ 0010458e 0028
.org 0x104590
	beq.n 0x10459a	@ 00104590 03d0
.org 0x104592
	ldrb r0, [r0, #12]	@ 00104592 007b
.org 0x104594
	cmp r0, #2	@ 00104594 0228
.org 0x104596
	bls.n 0x10459a	@ 00104596 00d9
.org 0x104598
	str r4, [r2, #0]	@ 00104598 1460
.org 0x10459a
	adds r0, r3, #1	@ 0010459a 581c
.org 0x10459c
	lsls r0, r0, #24	@ 0010459c 0006
.org 0x10459e
	lsrs r3, r0, #24	@ 0010459e 030e
.org 0x1045a0
	cmp r3, #3	@ 001045a0 032b
.org 0x1045a2
	bls.n 0x104588	@ 001045a2 f1d9
.org 0x1045a4
	movs r3, #0	@ 001045a4 0023
.org 0x1045a6
	movs r2, #0	@ 001045a6 0022
.org 0x1045a8
	lsls r0, r3, #2	@ 001045a8 9800
.org 0x1045aa
	adds r1, r0, r7	@ 001045aa c119
.org 0x1045ac
	ldr r0, [r1, #92]	@ 001045ac c86d
.org 0x1045ae
	cmp r0, #0	@ 001045ae 0028
.org 0x1045b0
	beq.n 0x1045ba	@ 001045b0 03d0
.org 0x1045b2
	ldrb r0, [r0, #12]	@ 001045b2 007b
.org 0x1045b4
	cmp r0, #2	@ 001045b4 0228
.org 0x1045b6
	bls.n 0x1045ba	@ 001045b6 00d9
.org 0x1045b8
	str r2, [r1, #92]	@ 001045b8 ca65
.org 0x1045ba
	adds r0, r3, #1	@ 001045ba 581c
