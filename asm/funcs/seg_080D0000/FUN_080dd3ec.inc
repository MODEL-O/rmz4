@ FUN_080dd3ec  entry 0x080dd3ec  size 244
.thumb
.org 0xdd3ec
FUN_080dd3ec:
	push {r4, r5, r6, r7, lr}	@ 000dd3ec f0b5
.org 0xdd3ee
	adds r5, r0, #0	@ 000dd3ee 051c
.org 0xdd3f0
	ldr r7, [r5, #40]	@ 000dd3f0 af6a
.org 0xdd3f2
	bl 0x1cff0	@ 000dd3f2 3ff7fdfd
.org 0xdd3f6
	ldrb r0, [r5, #13]	@ 000dd3f6 687b
.org 0xdd3f8
	cmp r0, #0	@ 000dd3f8 0028
.org 0xdd3fa
	bne.n 0xdd4a8	@ 000dd3fa 55d1
.org 0xdd3fc
	ldr r2, [pc, #36]	@ 000dd3fc 094a
.org 0xdd3fe
	ldr r1, [r2, #0]	@ 000dd3fe 1168
.org 0xdd400
	ldr r0, [pc, #36]	@ 000dd400 0948
.org 0xdd402
	muls r0, r1	@ 000dd402 4843
.org 0xdd404
	ldr r1, [pc, #36]	@ 000dd404 0949
.org 0xdd406
	adds r0, r0, r1	@ 000dd406 4018
.org 0xdd408
	lsls r0, r0, #1	@ 000dd408 4000
.org 0xdd40a
	lsrs r1, r0, #1	@ 000dd40a 4108
.org 0xdd40c
	str r1, [r2, #0]	@ 000dd40c 1160
.org 0xdd40e
	lsrs r3, r0, #17	@ 000dd40e 430c
.org 0xdd410
	movs r0, #1	@ 000dd410 0120
.org 0xdd412
	ands r3, r0	@ 000dd412 0340
.org 0xdd414
	adds r6, r2, #0	@ 000dd414 161c
.org 0xdd416
	cmp r3, #0	@ 000dd416 002b
.org 0xdd418
	beq.n 0xdd430	@ 000dd418 0ad0
.org 0xdd41a
	ldrb r1, [r5, #10]	@ 000dd41a a97a
.org 0xdd41c
	movs r0, #16	@ 000dd41c 1020
.org 0xdd41e
	orrs r0, r1	@ 000dd41e 0843
.org 0xdd420
	b.n 0xdd436	@ 000dd420 09e0
.org 0xdd422
	.byte 0x00	@ 000dd422 data
.org 0xdd423
	.byte 0x00	@ 000dd423 data
.org 0xdd424
	.byte 0x38,0xdc,0x02,0x02	@ 000dd424 data
.org 0xdd428
	.byte 0xfd,0x43,0x03,0x00	@ 000dd428 data
.org 0xdd42c
	.byte 0xc3,0x9e,0x26,0x00	@ 000dd42c data
.org 0xdd430
	ldrb r1, [r5, #10]	@ 000dd430 a97a
.org 0xdd432
	movs r0, #239	@ 000dd432 ef20
.org 0xdd434
	ands r0, r1	@ 000dd434 0840
.org 0xdd436
	strb r0, [r5, #10]	@ 000dd436 a872
.org 0xdd438
	movs r4, #1	@ 000dd438 0124
.org 0xdd43a
	adds r1, r3, #0	@ 000dd43a 191c
.org 0xdd43c
	adds r0, r5, #0	@ 000dd43c 281c
.org 0xdd43e
	adds r0, #76	@ 000dd43e 4c30
.org 0xdd440
	strb r1, [r0, #0]	@ 000dd440 0170
.org 0xdd442
	adds r3, r5, #0	@ 000dd442 2b1c
.org 0xdd444
	adds r3, #74	@ 000dd444 4a33
.org 0xdd446
	lsls r1, r1, #4	@ 000dd446 0901
.org 0xdd448
	ldrb r2, [r3, #0]	@ 000dd448 1a78
.org 0xdd44a
	movs r0, #17	@ 000dd44a 1120
.org 0xdd44c
	negs r0, r0	@ 000dd44c 4042
.org 0xdd44e
	ands r0, r2	@ 000dd44e 1040
.org 0xdd450
	orrs r0, r1	@ 000dd450 0843
.org 0xdd452
	strb r0, [r3, #0]	@ 000dd452 1870
.org 0xdd454
	ldr r1, [r6, #0]	@ 000dd454 3168
.org 0xdd456
	ldr r0, [pc, #28]	@ 000dd456 0748
.org 0xdd458
	muls r0, r1	@ 000dd458 4843
.org 0xdd45a
	ldr r1, [pc, #28]	@ 000dd45a 0749
.org 0xdd45c
	adds r0, r0, r1	@ 000dd45c 4018
.org 0xdd45e
	lsls r0, r0, #1	@ 000dd45e 4000
.org 0xdd460
	lsrs r1, r0, #1	@ 000dd460 4108
.org 0xdd462
	str r1, [r6, #0]	@ 000dd462 3160
.org 0xdd464
	lsrs r2, r0, #17	@ 000dd464 420c
.org 0xdd466
	ands r2, r4	@ 000dd466 2240
.org 0xdd468
	cmp r2, #0	@ 000dd468 002a
.org 0xdd46a
	beq.n 0xdd47c	@ 000dd46a 07d0
.org 0xdd46c
	ldrb r0, [r5, #10]	@ 000dd46c a87a
.org 0xdd46e
	movs r1, #32	@ 000dd46e 2021
.org 0xdd470
	orrs r0, r1	@ 000dd470 0843
.org 0xdd472
	b.n 0xdd482	@ 000dd472 06e0
.org 0xdd474
	.byte 0xfd,0x43,0x03,0x00	@ 000dd474 data
.org 0xdd478
	.byte 0xc3,0x9e,0x26,0x00	@ 000dd478 data
.org 0xdd47c
	ldrb r1, [r5, #10]	@ 000dd47c a97a
.org 0xdd47e
	movs r0, #223	@ 000dd47e df20
.org 0xdd480
	ands r0, r1	@ 000dd480 0840
.org 0xdd482
	strb r0, [r5, #10]	@ 000dd482 a872
.org 0xdd484
	adds r1, r2, #0	@ 000dd484 111c
.org 0xdd486
	adds r2, r5, #0	@ 000dd486 2a1c
.org 0xdd488
	adds r2, #77	@ 000dd488 4d32
.org 0xdd48a
	strb r1, [r2, #0]	@ 000dd48a 1170
.org 0xdd48c
	lsls r1, r1, #5	@ 000dd48c 4901
.org 0xdd48e
	ldrb r2, [r3, #0]	@ 000dd48e 1a78
.org 0xdd490
	movs r0, #33	@ 000dd490 2120
.org 0xdd492
	negs r0, r0	@ 000dd492 4042
.org 0xdd494
	ands r0, r2	@ 000dd494 1040
.org 0xdd496
	orrs r0, r1	@ 000dd496 0843
.org 0xdd498
	strb r0, [r3, #0]	@ 000dd498 1870
.org 0xdd49a
	ldrb r0, [r7, #13]	@ 000dd49a 787b
.org 0xdd49c
	cmp r0, #4	@ 000dd49c 0428
.org 0xdd49e
	beq.n 0xdd4f0	@ 000dd49e 27d0
.org 0xdd4a0
	ldrb r0, [r5, #13]	@ 000dd4a0 687b
.org 0xdd4a2
	adds r0, #1	@ 000dd4a2 0130
.org 0xdd4a4
	strb r0, [r5, #13]	@ 000dd4a4 6873
.org 0xdd4a6
	b.n 0xdd4f0	@ 000dd4a6 23e0
.org 0xdd4a8
	ldrb r0, [r5, #18]	@ 000dd4a8 a87c
.org 0xdd4aa
	adds r0, #1	@ 000dd4aa 0130
.org 0xdd4ac
	strb r0, [r5, #18]	@ 000dd4ac a874
.org 0xdd4ae
	movs r1, #1	@ 000dd4ae 0121
.org 0xdd4b0
	ands r0, r1	@ 000dd4b0 0840
.org 0xdd4b2
	cmp r0, #0	@ 000dd4b2 0028
.org 0xdd4b4
	beq.n 0xdd4be	@ 000dd4b4 03d0
.org 0xdd4b6
	ldrb r1, [r5, #10]	@ 000dd4b6 a97a
.org 0xdd4b8
	movs r0, #254	@ 000dd4b8 fe20
.org 0xdd4ba
	ands r0, r1	@ 000dd4ba 0840
.org 0xdd4bc
	b.n 0xdd4c4	@ 000dd4bc 02e0
.org 0xdd4be
	ldrb r0, [r5, #10]	@ 000dd4be a87a
.org 0xdd4c0
	movs r1, #1	@ 000dd4c0 0121
.org 0xdd4c2
	orrs r0, r1	@ 000dd4c2 0843
.org 0xdd4c4
	strb r0, [r5, #10]	@ 000dd4c4 a872
.org 0xdd4c6
	ldr r1, [r5, #88]	@ 000dd4c6 a96d
.org 0xdd4c8
	adds r1, #192	@ 000dd4c8 c031
.org 0xdd4ca
	str r1, [r5, #88]	@ 000dd4ca a965
.org 0xdd4cc
	ldr r0, [r5, #84]	@ 000dd4cc 686d
.org 0xdd4ce
	bl 0x7c7c	@ 000dd4ce 2af7d5fb
.org 0xdd4d2
	lsls r0, r0, #16	@ 000dd4d2 0004
.org 0xdd4d4
	cmp r0, #0	@ 000dd4d4 0028
.org 0xdd4d6
	beq.n 0xdd4f0	@ 000dd4d6 0bd0
.org 0xdd4d8
	ldr r1, [pc, #28]	@ 000dd4d8 0749
.org 0xdd4da
	ldrb r0, [r5, #9]	@ 000dd4da 687a
.org 0xdd4dc
	lsls r0, r0, #2	@ 000dd4dc 8000
.org 0xdd4de
	adds r0, r0, r1	@ 000dd4de 4018
