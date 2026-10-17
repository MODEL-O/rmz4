@ FUN_080953c0  entry 0x080953c0  size 212
.thumb
.org 0x953c0
FUN_080953c0:
	push {r4, r5, r6, r7, lr}	@ 000953c0 f0b5
.org 0x953c2
	sub sp, #8	@ 000953c2 82b0
.org 0x953c4
	adds r4, r0, #0	@ 000953c4 041c
.org 0x953c6
	ldr r0, [pc, #112]	@ 000953c6 1c48
.org 0x953c8
	ldr r1, [r0, #4]	@ 000953c8 4168
.org 0x953ca
	ldr r0, [r0, #0]	@ 000953ca 0068
.org 0x953cc
	str r0, [sp, #0]	@ 000953cc 0090
.org 0x953ce
	str r1, [sp, #4]	@ 000953ce 0191
.org 0x953d0
	ldr r7, [r4, #40]	@ 000953d0 a76a
.org 0x953d2
	ldrb r1, [r4, #17]	@ 000953d2 617c
.org 0x953d4
	ldrb r0, [r7, #10]	@ 000953d4 b87a
.org 0x953d6
	lsrs r5, r0, #4	@ 000953d6 0509
.org 0x953d8
	movs r0, #1	@ 000953d8 0120
.org 0x953da
	ands r5, r0	@ 000953da 0540
.org 0x953dc
	ldrb r0, [r4, #15]	@ 000953dc e07b
.org 0x953de
	cmp r0, #0	@ 000953de 0028
.org 0x953e0
	bne.n 0x953f4	@ 000953e0 08d1
.org 0x953e2
	lsls r0, r1, #2	@ 000953e2 8800
.org 0x953e4
	add r0, sp	@ 000953e4 6844
.org 0x953e6
	ldrh r1, [r0, #0]	@ 000953e6 0188
.org 0x953e8
	adds r0, r4, #0	@ 000953e8 201c
.org 0x953ea
	bl 0x1cf00	@ 000953ea 87f789fd
.org 0x953ee
	ldrb r0, [r4, #15]	@ 000953ee e07b
.org 0x953f0
	adds r0, #1	@ 000953f0 0130
.org 0x953f2
	strb r0, [r4, #15]	@ 000953f2 e073
.org 0x953f4
	adds r0, r4, #0	@ 000953f4 201c
.org 0x953f6
	adds r0, #181	@ 000953f6 b530
.org 0x953f8
	ldrb r0, [r0, #0]	@ 000953f8 0078
.org 0x953fa
	cmp r0, #0	@ 000953fa 0028
.org 0x953fc
	beq.n 0x95440	@ 000953fc 20d0
.org 0x953fe
	ldrb r1, [r4, #10]	@ 000953fe a17a
.org 0x95400
	movs r0, #254	@ 00095400 fe20
.org 0x95402
	ands r0, r1	@ 00095402 0840
.org 0x95404
	movs r2, #0	@ 00095404 0022
.org 0x95406
	movs r1, #253	@ 00095406 fd21
.org 0x95408
	ands r0, r1	@ 00095408 0840
.org 0x9540a
	strb r0, [r4, #10]	@ 0009540a a072
.org 0x9540c
	adds r0, r4, #0	@ 0009540c 201c
.org 0x9540e
	adds r0, #140	@ 0009540e 8c30
.org 0x95410
	str r2, [r0, #0]	@ 00095410 0260
.org 0x95412
	adds r0, #4	@ 00095412 0430
.org 0x95414
	str r2, [r0, #0]	@ 00095414 0260
.org 0x95416
	adds r0, #4	@ 00095416 0430
.org 0x95418
	strb r2, [r0, #0]	@ 00095418 0270
.org 0x9541a
	ldrb r1, [r4, #10]	@ 0009541a a17a
.org 0x9541c
	movs r0, #251	@ 0009541c fb20
.org 0x9541e
	ands r0, r1	@ 0009541e 0840
.org 0x95420
	strb r0, [r4, #10]	@ 00095420 a072
.org 0x95422
	ldr r1, [pc, #24]	@ 00095422 0649
.org 0x95424
	ldrb r0, [r4, #9]	@ 00095424 607a
.org 0x95426
	lsls r0, r0, #2	@ 00095426 8000
.org 0x95428
	adds r0, r0, r1	@ 00095428 4018
.org 0x9542a
	movs r1, #3	@ 0009542a 0321
.org 0x9542c
	str r1, [r4, #12]	@ 0009542c e160
.org 0x9542e
	ldr r0, [r0, #0]	@ 0009542e 0068
.org 0x95430
	ldr r0, [r0, #12]	@ 00095430 c068
.org 0x95432
	str r0, [r4, #20]	@ 00095432 6061
.org 0x95434
	b.n 0x95496	@ 00095434 2fe0
.org 0x95436
	.byte 0x00	@ 00095436 data
.org 0x95437
	.byte 0x00	@ 00095437 data
.org 0x95438
	.byte 0xf4,0x9b,0x12,0x08	@ 00095438 data
.org 0x9543c
	.byte 0x40,0xdb,0x85,0x08	@ 0009543c data
.org 0x95440
	adds r0, r4, #0	@ 00095440 201c
.org 0x95442
	bl 0x1cff0	@ 00095442 87f7d5fd
.org 0x95446
	adds r2, r5, #0	@ 00095446 2a1c
.org 0x95448
	cmp r2, #0	@ 00095448 002a
.org 0x9544a
	beq.n 0x95454	@ 0009544a 03d0
.org 0x9544c
	ldrb r1, [r4, #10]	@ 0009544c a17a
.org 0x9544e
	movs r0, #16	@ 0009544e 1020
.org 0x95450
	orrs r0, r1	@ 00095450 0843
.org 0x95452
	b.n 0x9545a	@ 00095452 02e0
.org 0x95454
	ldrb r1, [r4, #10]	@ 00095454 a17a
.org 0x95456
	movs r0, #239	@ 00095456 ef20
.org 0x95458
	ands r0, r1	@ 00095458 0840
.org 0x9545a
	strb r0, [r4, #10]	@ 0009545a a072
.org 0x9545c
	movs r6, #1	@ 0009545c 0126
.org 0x9545e
	adds r1, r6, #0	@ 0009545e 311c
.org 0x95460
	ands r1, r2	@ 00095460 1140
.org 0x95462
	adds r0, r4, #0	@ 00095462 201c
.org 0x95464
	adds r0, #76	@ 00095464 4c30
.org 0x95466
	movs r5, #0	@ 00095466 0025
.org 0x95468
	strb r1, [r0, #0]	@ 00095468 0170
.org 0x9546a
	adds r3, r4, #0	@ 0009546a 231c
.org 0x9546c
	adds r3, #74	@ 0009546c 4a33
.org 0x9546e
	lsls r1, r1, #4	@ 0009546e 0901
.org 0x95470
	ldrb r2, [r3, #0]	@ 00095470 1a78
.org 0x95472
	movs r0, #17	@ 00095472 1120
.org 0x95474
	negs r0, r0	@ 00095474 4042
.org 0x95476
	ands r0, r2	@ 00095476 1040
.org 0x95478
	orrs r0, r1	@ 00095478 0843
.org 0x9547a
	strb r0, [r3, #0]	@ 0009547a 1870
.org 0x9547c
	ldr r0, [r7, #84]	@ 0009547c 786d
.org 0x9547e
	ldr r1, [r7, #88]	@ 0009547e b96d
.org 0x95480
	str r0, [r4, #84]	@ 00095480 6065
.org 0x95482
	str r1, [r4, #88]	@ 00095482 a165
.org 0x95484
	adds r1, r4, #0	@ 00095484 211c
.org 0x95486
	adds r1, #180	@ 00095486 b431
.org 0x95488
	ldrb r0, [r1, #0]	@ 00095488 0878
.org 0x9548a
	cmp r0, #0	@ 0009548a 0028
.org 0x9548c
	beq.n 0x95496	@ 0009548c 03d0
.org 0x9548e
	strb r5, [r1, #0]	@ 0009548e 0d70
.org 0x95490
	strb r6, [r4, #13]	@ 00095490 6673
.org 0x95492
	strb r5, [r4, #14]	@ 00095492 a573
