@ FUN_080603e0  entry 0x080603e0  size 594
.thumb
.org 0x603e0
FUN_080603e0:
	push {r4, r5, r6, r7, lr}	@ 000603e0 f0b5
.org 0x603e2
	sub sp, #8	@ 000603e2 82b0
.org 0x603e4
	adds r5, r0, #0	@ 000603e4 051c
.org 0x603e6
	ldrb r0, [r5, #14]	@ 000603e6 a87b
.org 0x603e8
	cmp r0, #0	@ 000603e8 0028
.org 0x603ea
	bne.n 0x60468	@ 000603ea 3dd1
.org 0x603ec
	adds r4, r5, #0	@ 000603ec 2c1c
.org 0x603ee
	adds r4, #180	@ 000603ee b434
.org 0x603f0
	movs r0, #11	@ 000603f0 0b20
.org 0x603f2
	strb r0, [r4, #28]	@ 000603f2 2077
.org 0x603f4
	ldr r1, [pc, #76]	@ 000603f4 1349
.org 0x603f6
	adds r0, r5, #0	@ 000603f6 281c
.org 0x603f8
	bl 0x1cf00	@ 000603f8 bcf782fd
.org 0x603fc
	movs r3, #0	@ 000603fc 0023
.org 0x603fe
	ldr r0, [pc, #72]	@ 000603fe 1248
.org 0x60400
	ldr r2, [r0, #0]	@ 00060400 0268
.org 0x60402
	ldr r1, [r5, #84]	@ 00060402 696d
.org 0x60404
	ldr r0, [r2, #84]	@ 00060404 506d
.org 0x60406
	adds r6, r4, #0	@ 00060406 261c
.org 0x60408
	cmp r1, r0	@ 00060408 8142
.org 0x6040a
	bge.n 0x6040e	@ 0006040a 00da
.org 0x6040c
	movs r3, #1	@ 0006040c 0123
.org 0x6040e
	adds r0, r5, #0	@ 0006040e 281c
.org 0x60410
	adds r0, #76	@ 00060410 4c30
.org 0x60412
	strb r3, [r0, #0]	@ 00060412 0370
.org 0x60414
	movs r3, #0	@ 00060414 0023
.org 0x60416
	ldr r1, [r5, #84]	@ 00060416 696d
.org 0x60418
	ldr r0, [r2, #84]	@ 00060418 506d
.org 0x6041a
	cmp r1, r0	@ 0006041a 8142
.org 0x6041c
	bge.n 0x60420	@ 0006041c 00da
.org 0x6041e
	movs r3, #1	@ 0006041e 0123
.org 0x60420
	movs r0, #74	@ 00060420 4a20
.org 0x60422
	adds r0, r0, r5	@ 00060422 4019
.org 0x60424
	mov ip, r0	@ 00060424 8446
.org 0x60426
	lsls r2, r3, #4	@ 00060426 1a01
.org 0x60428
	ldrb r1, [r0, #0]	@ 00060428 0178
.org 0x6042a
	movs r0, #17	@ 0006042a 1120
.org 0x6042c
	negs r0, r0	@ 0006042c 4042
.org 0x6042e
	ands r0, r1	@ 0006042e 0840
.org 0x60430
	orrs r0, r2	@ 00060430 1043
.org 0x60432
	mov r1, ip	@ 00060432 6146
.org 0x60434
	strb r0, [r1, #0]	@ 00060434 0870
.org 0x60436
	cmp r3, #0	@ 00060436 002b
.org 0x60438
	beq.n 0x6044c	@ 00060438 08d0
.org 0x6043a
	ldrb r0, [r5, #10]	@ 0006043a a87a
.org 0x6043c
	movs r1, #16	@ 0006043c 1021
.org 0x6043e
	orrs r0, r1	@ 0006043e 0843
.org 0x60440
	b.n 0x60452	@ 00060440 07e0
.org 0x60442
	.byte 0x00	@ 00060442 data
.org 0x60443
	.byte 0x00	@ 00060443 data
.org 0x60444
	.byte 0x0b,0xa5,0x00,0x00	@ 00060444 data
.org 0x60448
	.byte 0xf0,0xdb,0x02,0x02	@ 00060448 data
.org 0x6044c
	ldrb r1, [r5, #10]	@ 0006044c a97a
.org 0x6044e
	movs r0, #239	@ 0006044e ef20
.org 0x60450
	ands r0, r1	@ 00060450 0840
.org 0x60452
	strb r0, [r5, #10]	@ 00060452 a872
.org 0x60454
	movs r0, #140	@ 00060454 8c20
.org 0x60456
	lsls r0, r0, #1	@ 00060456 4000
.org 0x60458
	bl 0x2b10	@ 00060458 a2f75afb
.org 0x6045c
	movs r0, #0	@ 0006045c 0020
.org 0x6045e
	str r0, [r6, #12]	@ 0006045e f060
.org 0x60460
	strb r0, [r5, #15]	@ 00060460 e873
.org 0x60462
	ldrb r0, [r5, #14]	@ 00060462 a87b
.org 0x60464
	adds r0, #1	@ 00060464 0130
.org 0x60466
	strb r0, [r5, #14]	@ 00060466 a873
.org 0x60468
	adds r0, r5, #0	@ 00060468 281c
.org 0x6046a
	bl 0x1cff0	@ 0006046a bcf7c1fd
.org 0x6046e
	ldrb r1, [r5, #15]	@ 0006046e e97b
.org 0x60470
	adds r0, r1, #0	@ 00060470 081c
.org 0x60472
	cmp r0, #0	@ 00060472 0028
.org 0x60474
	bne.n 0x60488	@ 00060474 08d1
.org 0x60476
	adds r0, r5, #0	@ 00060476 281c
.org 0x60478
	adds r0, #115	@ 00060478 7330
.org 0x6047a
	ldrb r0, [r0, #0]	@ 0006047a 0078
.org 0x6047c
	cmp r0, #3	@ 0006047c 0328
.org 0x6047e
	beq.n 0x60482	@ 0006047e 00d0
.org 0x60480
	b.n 0x60658	@ 00060480 eae0
.org 0x60482
	adds r0, r1, #1	@ 00060482 481c
.org 0x60484
	strb r0, [r5, #15]	@ 00060484 e873
.org 0x60486
	b.n 0x60658	@ 00060486 e7e0
.org 0x60488
	adds r6, r5, #0	@ 00060488 2e1c
.org 0x6048a
	adds r6, #180	@ 0006048a b436
.org 0x6048c
	cmp r0, #1	@ 0006048c 0128
.org 0x6048e
	bne.n 0x60530	@ 0006048e 4fd1
.org 0x60490
	adds r0, r5, #0	@ 00060490 281c
.org 0x60492
	adds r0, #84	@ 00060492 5430
.org 0x60494
	movs r1, #0	@ 00060494 0021
.org 0x60496
	movs r2, #193	@ 00060496 c122
.org 0x60498
	bl 0xdad0c	@ 00060498 7af038fc
.org 0x6049c
	adds r1, r0, #0	@ 0006049c 011c
.org 0x6049e
	str r1, [r6, #12]	@ 0006049e f160
.org 0x604a0
	cmp r1, #0	@ 000604a0 0029
.org 0x604a2
	bne.n 0x604ac	@ 000604a2 03d1
.org 0x604a4
	movs r0, #13	@ 000604a4 0d20
.org 0x604a6
	strb r0, [r5, #13]	@ 000604a6 6873
.org 0x604a8
	strb r1, [r5, #14]	@ 000604a8 a973
.org 0x604aa
	b.n 0x60658	@ 000604aa d5e0
.org 0x604ac
	adds r1, #116	@ 000604ac 7431
.org 0x604ae
	movs r0, #255	@ 000604ae ff20
.org 0x604b0
	strb r0, [r1, #0]	@ 000604b0 0870
.org 0x604b2
	ldr r0, [r6, #12]	@ 000604b2 f068
.org 0x604b4
	adds r0, #117	@ 000604b4 7530
.org 0x604b6
	movs r1, #0	@ 000604b6 0021
.org 0x604b8
	strb r1, [r0, #0]	@ 000604b8 0170
.org 0x604ba
	ldr r0, [r6, #12]	@ 000604ba f068
.org 0x604bc
	adds r0, #118	@ 000604bc 7630
.org 0x604be
	strb r1, [r0, #0]	@ 000604be 0170
.org 0x604c0
	ldr r1, [r6, #12]	@ 000604c0 f168
.org 0x604c2
	ldr r0, [r5, #88]	@ 000604c2 a86d
.org 0x604c4
	ldr r2, [pc, #56]	@ 000604c4 0e4a
.org 0x604c6
	adds r0, r0, r2	@ 000604c6 8018
.org 0x604c8
	str r0, [r1, #88]	@ 000604c8 8865
.org 0x604ca
	ldr r0, [r5, #88]	@ 000604ca a86d
.org 0x604cc
	adds r0, r0, r2	@ 000604cc 8018
.org 0x604ce
	str r0, [r1, #104]	@ 000604ce 8866
.org 0x604d0
	ldr r0, [r5, #88]	@ 000604d0 a86d
.org 0x604d2
	ldr r2, [pc, #48]	@ 000604d2 0c4a
.org 0x604d4
	adds r0, r0, r2	@ 000604d4 8018
.org 0x604d6
	str r0, [r1, #96]	@ 000604d6 0866
.org 0x604d8
	adds r1, #128	@ 000604d8 8031
.org 0x604da
	ldr r0, [r5, #88]	@ 000604da a86d
.org 0x604dc
	adds r0, r0, r2	@ 000604dc 8018
.org 0x604de
	str r0, [r1, #0]	@ 000604de 0860
.org 0x604e0
	ldrb r1, [r5, #10]	@ 000604e0 a97a
.org 0x604e2
	movs r0, #16	@ 000604e2 1020
.org 0x604e4
	ands r0, r1	@ 000604e4 0840
.org 0x604e6
	cmp r0, #0	@ 000604e6 0028
.org 0x604e8
	beq.n 0x60508	@ 000604e8 0ed0
.org 0x604ea
	ldr r2, [r6, #12]	@ 000604ea f268
.org 0x604ec
	ldr r0, [r5, #84]	@ 000604ec 686d
.org 0x604ee
	movs r3, #192	@ 000604ee c023
.org 0x604f0
	lsls r3, r3, #5	@ 000604f0 5b01
.org 0x604f2
	adds r0, r0, r3	@ 000604f2 c018
.org 0x604f4
	str r0, [r2, #84]	@ 000604f4 5065
.org 0x604f6
	ldr r0, [r5, #84]	@ 000604f6 686d
.org 0x604f8
	movs r1, #240	@ 000604f8 f021
.org 0x604fa
	lsls r1, r1, #8	@ 000604fa 0902
.org 0x604fc
	b.n 0x60516	@ 000604fc 0be0
.org 0x604fe
	.byte 0x00	@ 000604fe data
.org 0x604ff
	.byte 0x00	@ 000604ff data
.org 0x60500
	.byte 0x00,0xe3,0xff,0xff	@ 00060500 data
.org 0x60504
	.byte 0x00,0xe4,0xff,0xff	@ 00060504 data
.org 0x60508
	ldr r2, [r6, #12]	@ 00060508 f268
.org 0x6050a
	ldr r0, [r5, #84]	@ 0006050a 686d
.org 0x6050c
	ldr r3, [pc, #100]	@ 0006050c 194b
.org 0x6050e
	adds r0, r0, r3	@ 0006050e c018
.org 0x60510
	str r0, [r2, #84]	@ 00060510 5065
.org 0x60512
	ldr r0, [r5, #84]	@ 00060512 686d
.org 0x60514
	ldr r1, [pc, #96]	@ 00060514 1849
.org 0x60516
	adds r0, r0, r1	@ 00060516 4018
.org 0x60518
	str r0, [r2, #100]	@ 00060518 5066
.org 0x6051a
	ldr r0, [r5, #84]	@ 0006051a 686d
.org 0x6051c
	adds r0, r0, r1	@ 0006051c 4018
.org 0x6051e
	str r0, [r2, #92]	@ 0006051e d065
.org 0x60520
	ldr r0, [r5, #84]	@ 00060520 686d
.org 0x60522
	adds r0, r0, r3	@ 00060522 c018
.org 0x60524
	str r0, [r2, #124]	@ 00060524 d067
.org 0x60526
	movs r0, #64	@ 00060526 4020
.org 0x60528
	strb r0, [r5, #18]	@ 00060528 a874
.org 0x6052a
	ldrb r0, [r5, #15]	@ 0006052a e87b
.org 0x6052c
	adds r0, #1	@ 0006052c 0130
.org 0x6052e
	strb r0, [r5, #15]	@ 0006052e e873
.org 0x60530
	ldr r0, [r6, #12]	@ 00060530 f068
.org 0x60532
	cmp r0, #0	@ 00060532 0028
.org 0x60534
	bne.n 0x60538	@ 00060534 00d1
.org 0x60536
	b.n 0x60642	@ 00060536 84e0
.org 0x60538
	adds r4, r0, #0	@ 00060538 041c
.org 0x6053a
	ldr r1, [pc, #64]	@ 0006053a 1049
.org 0x6053c
	ldr r2, [pc, #64]	@ 0006053c 104a
.org 0x6053e
	ldr r0, [r2, #0]	@ 0006053e 1068
.org 0x60540
	movs r3, #186	@ 00060540 ba23
.org 0x60542
	lsls r3, r3, #1	@ 00060542 5b00
.org 0x60544
	adds r0, r0, r3	@ 00060544 c018
.org 0x60546
	ldrb r0, [r0, #0]	@ 00060546 0078
.org 0x60548
	lsls r0, r0, #3	@ 00060548 c000
.org 0x6054a
	adds r3, r0, r1	@ 0006054a 4318
.org 0x6054c
	ldr r0, [r3, #0]	@ 0006054c 1868
.org 0x6054e
	ldr r1, [r3, #4]	@ 0006054e 5968
.org 0x60550
	str r0, [sp, #0]	@ 00060550 0090
.org 0x60552
	str r1, [sp, #4]	@ 00060552 0191
.org 0x60554
	ldrb r1, [r5, #10]	@ 00060554 a97a
.org 0x60556
	movs r0, #16	@ 00060556 1020
.org 0x60558
	ands r0, r1	@ 00060558 0840
.org 0x6055a
	adds r3, r2, #0	@ 0006055a 131c
.org 0x6055c
	cmp r0, #0	@ 0006055c 0028
.org 0x6055e
	beq.n 0x60584	@ 0006055e 11d0
.org 0x60560
	ldr r0, [r5, #84]	@ 00060560 686d
.org 0x60562
	movs r1, #240	@ 00060562 f021
.org 0x60564
	lsls r1, r1, #8	@ 00060564 0902
.org 0x60566
	adds r0, r0, r1	@ 00060566 4018
.org 0x60568
	str r0, [r4, #100]	@ 00060568 6066
.org 0x6056a
	ldr r0, [r5, #84]	@ 0006056a 686d
.org 0x6056c
	adds r0, r0, r1	@ 0006056c 4018
.org 0x6056e
	str r0, [r4, #92]	@ 0006056e e065
.org 0x60570
	b.n 0x60592	@ 00060570 0fe0
.org 0x60572
	.byte 0x00	@ 00060572 data
.org 0x60573
	.byte 0x00	@ 00060573 data
.org 0x60574
	.byte 0x00,0x10,0xff,0xff	@ 00060574 data
.org 0x60578
	.byte 0x00,0xe8,0xff,0xff	@ 00060578 data
.org 0x6057c
	.byte 0x6c,0x33,0x85,0x08	@ 0006057c data
.org 0x60580
	.byte 0xf0,0xdb,0x02,0x02	@ 00060580 data
.org 0x60584
	ldr r0, [r5, #84]	@ 00060584 686d
.org 0x60586
	ldr r1, [pc, #76]	@ 00060586 1349
.org 0x60588
	adds r0, r0, r1	@ 00060588 4018
.org 0x6058a
	str r0, [r4, #84]	@ 0006058a 6065
.org 0x6058c
	ldr r0, [r5, #84]	@ 0006058c 686d
.org 0x6058e
	adds r0, r0, r1	@ 0006058e 4018
.org 0x60590
	str r0, [r4, #124]	@ 00060590 e067
.org 0x60592
	ldr r2, [pc, #68]	@ 00060592 114a
.org 0x60594
	ldrh r1, [r2, #8]	@ 00060594 1189
.org 0x60596
	movs r0, #8	@ 00060596 0820
.org 0x60598
	ands r0, r1	@ 00060598 0840
.org 0x6059a
	mov ip, r2	@ 0006059a 9446
.org 0x6059c
	cmp r0, #0	@ 0006059c 0028
.org 0x6059e
	bne.n 0x605e8	@ 0006059e 23d1
.org 0x605a0
	ldr r2, [r3, #0]	@ 000605a0 1a68
.org 0x605a2
	ldr r1, [sp, #0]	@ 000605a2 0099
.org 0x605a4
	asrs r0, r1, #16	@ 000605a4 0814
.org 0x605a6
	ldr r1, [r2, #88]	@ 000605a6 916d
.org 0x605a8
	adds r7, r1, r0	@ 000605a8 0f18
.org 0x605aa
	ldr r3, [sp, #4]	@ 000605aa 019b
.org 0x605ac
	asrs r1, r3, #17	@ 000605ac 5914
.org 0x605ae
	adds r0, r7, r1	@ 000605ae 7818
.org 0x605b0
	ldr r3, [r4, #88]	@ 000605b0 a36d
.org 0x605b2
	cmp r3, r0	@ 000605b2 8342
.org 0x605b4
	bge.n 0x605e8	@ 000605b4 18da
.org 0x605b6
	subs r0, r7, r1	@ 000605b6 781a
.org 0x605b8
	cmp r3, r0	@ 000605b8 8342
.org 0x605ba
	ble.n 0x605e8	@ 000605ba 15dd
.org 0x605bc
	ldrb r1, [r5, #10]	@ 000605bc a97a
.org 0x605be
	movs r0, #16	@ 000605be 1020
.org 0x605c0
	ands r0, r1	@ 000605c0 0840
.org 0x605c2
	cmp r0, #0	@ 000605c2 0028
.org 0x605c4
	beq.n 0x605dc	@ 000605c4 0ad0
.org 0x605c6
	ldr r2, [r2, #84]	@ 000605c6 526d
.org 0x605c8
	ldr r0, [r4, #84]	@ 000605c8 606d
.org 0x605ca
	cmp r0, r2	@ 000605ca 9042
.org 0x605cc
	bge.n 0x605e8	@ 000605cc 0cda
.org 0x605ce
	str r2, [r4, #100]	@ 000605ce 6266
.org 0x605d0
	str r2, [r4, #92]	@ 000605d0 e265
.org 0x605d2
	b.n 0x605e8	@ 000605d2 09e0
.org 0x605d4
	.byte 0x00,0x10,0xff,0xff	@ 000605d4 data
.org 0x605d8
	.byte 0x10,0xe9,0x02,0x02	@ 000605d8 data
.org 0x605dc
	ldr r2, [r2, #84]	@ 000605dc 526d
.org 0x605de
	ldr r0, [r4, #100]	@ 000605de 606e
.org 0x605e0
	cmp r0, r2	@ 000605e0 9042
.org 0x605e2
	ble.n 0x605e8	@ 000605e2 01dd
.org 0x605e4
	str r2, [r4, #84]	@ 000605e4 6265
.org 0x605e6
	str r2, [r4, #124]	@ 000605e6 e267
.org 0x605e8
	ldrb r0, [r5, #18]	@ 000605e8 a87c
.org 0x605ea
	movs r3, #1	@ 000605ea 0123
.org 0x605ec
	ands r3, r0	@ 000605ec 0340
.org 0x605ee
	cmp r3, #0	@ 000605ee 002b
.org 0x605f0
	beq.n 0x6061e	@ 000605f0 15d0
.org 0x605f2
	mov r1, ip	@ 000605f2 6146
.org 0x605f4
	ldrh r0, [r1, #0]	@ 000605f4 0888
.org 0x605f6
	cmp r0, #11	@ 000605f6 0b28
.org 0x605f8
	bne.n 0x6060c	@ 000605f8 08d1
.org 0x605fa
	ldr r0, [r6, #12]	@ 000605fa f068
.org 0x605fc
	adds r0, #120	@ 000605fc 7830
.org 0x605fe
	movs r1, #57	@ 000605fe 3921
.org 0x60600
	strb r1, [r0, #0]	@ 00060600 0170
.org 0x60602
	ldr r0, [r6, #12]	@ 00060602 f068
.org 0x60604
	adds r0, #121	@ 00060604 7930
.org 0x60606
	movs r1, #6	@ 00060606 0621
.org 0x60608
	strb r1, [r0, #0]	@ 00060608 0170
.org 0x6060a
	b.n 0x6062c	@ 0006060a 0fe0
.org 0x6060c
	ldr r0, [r6, #12]	@ 0006060c f068
.org 0x6060e
	adds r0, #120	@ 0006060e 7830
.org 0x60610
	movs r1, #53	@ 00060610 3521
.org 0x60612
	strb r1, [r0, #0]	@ 00060612 0170
.org 0x60614
	ldr r0, [r6, #12]	@ 00060614 f068
.org 0x60616
	adds r0, #121	@ 00060616 7930
.org 0x60618
	movs r1, #10	@ 00060618 0a21
.org 0x6061a
	strb r1, [r0, #0]	@ 0006061a 0170
.org 0x6061c
	b.n 0x6062c	@ 0006061c 06e0
.org 0x6061e
	ldr r0, [r6, #12]	@ 0006061e f068
.org 0x60620
	adds r0, #120	@ 00060620 7830
.org 0x60622
	movs r1, #255	@ 00060622 ff21
.org 0x60624
	strb r1, [r0, #0]	@ 00060624 0170
.org 0x60626
	ldr r0, [r6, #12]	@ 00060626 f068
.org 0x60628
	adds r0, #121	@ 00060628 7930
.org 0x6062a
	strb r3, [r0, #0]	@ 0006062a 0370
.org 0x6062c
	ldrb r0, [r5, #18]	@ 0006062c a87c
.org 0x6062e
	cmp r0, #6	@ 0006062e 0628
.org 0x60630
	bne.n 0x60642	@ 00060630 07d1
