@ FUN_08033428  entry 0x08033428  size 150
.thumb
.org 0x33428
FUN_08033428:
	push {r4, r5, r6, lr}	@ 00033428 70b5
.org 0x3342a
	adds r4, r0, #0	@ 0003342a 041c
.org 0x3342c
	movs r0, #162	@ 0003342c a220
.org 0x3342e
	lsls r0, r0, #1	@ 0003342e 4000
.org 0x33430
	adds r1, r4, r0	@ 00033430 2118
.org 0x33432
	adds r0, r4, #0	@ 00033432 201c
.org 0x33434
	bl 0x39fd8	@ 00033434 06f0d0fd
.org 0x33438
	lsls r0, r0, #24	@ 00033438 0006
.org 0x3343a
	lsrs r3, r0, #24	@ 0003343a 030e
.org 0x3343c
	cmp r3, #0	@ 0003343c 002b
.org 0x3343e
	beq.n 0x33464	@ 0003343e 11d0
.org 0x33440
	ldr r0, [pc, #24]	@ 00033440 0648
.org 0x33442
	adds r1, r4, r0	@ 00033442 2118
.org 0x33444
	movs r0, #255	@ 00033444 ff20
.org 0x33446
	strb r0, [r1, #0]	@ 00033446 0870
.org 0x33448
	adds r0, #1	@ 00033448 0130
.org 0x3344a
	adds r1, r4, r0	@ 0003344a 2118
.org 0x3344c
	movs r2, #0	@ 0003344c 0022
.org 0x3344e
	movs r0, #3	@ 0003344e 0320
.org 0x33450
	strb r0, [r1, #0]	@ 00033450 0870
.org 0x33452
	ldr r1, [pc, #12]	@ 00033452 0349
.org 0x33454
	adds r0, r4, r1	@ 00033454 6018
.org 0x33456
	strb r2, [r0, #0]	@ 00033456 0270
.org 0x33458
	b.n 0x334ba	@ 00033458 2fe0
.org 0x3345a
	.byte 0x00	@ 0003345a data
.org 0x3345b
	.byte 0x00	@ 0003345b data
.org 0x3345c
	.byte 0x47,0x01,0x00,0x00	@ 0003345c data
.org 0x33460
	.byte 0x01,0x01,0x00,0x00	@ 00033460 data
.org 0x33464
	adds r5, r4, #0	@ 00033464 251c
.org 0x33466
	adds r5, #180	@ 00033466 b435
.org 0x33468
	ldr r1, [pc, #28]	@ 00033468 0749
.org 0x3346a
	adds r0, r4, r1	@ 0003346a 6018
.org 0x3346c
	ldrb r2, [r0, #0]	@ 0003346c 0278
.org 0x3346e
	adds r1, r2, #0	@ 0003346e 111c
.org 0x33470
	adds r6, r0, #0	@ 00033470 061c
.org 0x33472
	cmp r1, #255	@ 00033472 ff29
.org 0x33474
	beq.n 0x3348c	@ 00033474 0ad0
.org 0x33476
	movs r1, #162	@ 00033476 a221
.org 0x33478
	lsls r1, r1, #1	@ 00033478 4900
.org 0x3347a
	adds r0, r4, r1	@ 0003347a 6018
.org 0x3347c
	strb r2, [r0, #0]	@ 0003347c 0270
.org 0x3347e
	movs r0, #255	@ 0003347e ff20
.org 0x33480
	strb r0, [r6, #0]	@ 00033480 3070
.org 0x33482
	adds r0, #1	@ 00033482 0130
.org 0x33484
	b.n 0x334ae	@ 00033484 13e0
.org 0x33486
	.byte 0x00	@ 00033486 data
.org 0x33487
	.byte 0x00	@ 00033487 data
.org 0x33488
	.byte 0x47,0x01,0x00,0x00	@ 00033488 data
.org 0x3348c
	ldr r0, [pc, #52]	@ 0003348c 0d48
.org 0x3348e
	adds r1, r4, r0	@ 0003348e 2118
.org 0x33490
	ldrb r0, [r1, #0]	@ 00033490 0878
.org 0x33492
	cmp r0, #0	@ 00033492 0028
.org 0x33494
	beq.n 0x334ce	@ 00033494 1bd0
.org 0x33496
	ldrb r0, [r5, #12]	@ 00033496 287b
.org 0x33498
	cmp r0, #4	@ 00033498 0428
.org 0x3349a
	beq.n 0x334a2	@ 0003349a 02d0
.org 0x3349c
	ldrb r0, [r5, #13]	@ 0003349c 687b
.org 0x3349e
	cmp r0, #4	@ 0003349e 0428
.org 0x334a0
	bne.n 0x334cc	@ 000334a0 14d1
.org 0x334a2
	movs r0, #162	@ 000334a2 a220
.org 0x334a4
	lsls r0, r0, #1	@ 000334a4 4000
.org 0x334a6
	adds r1, r4, r0	@ 000334a6 2118
.org 0x334a8
	movs r0, #4	@ 000334a8 0420
.org 0x334aa
	strb r0, [r1, #0]	@ 000334aa 0870
.org 0x334ac
	adds r0, #252	@ 000334ac fc30
.org 0x334ae
	adds r1, r4, r0	@ 000334ae 2118
.org 0x334b0
	movs r0, #3	@ 000334b0 0320
.org 0x334b2
	strb r0, [r1, #0]	@ 000334b2 0870
.org 0x334b4
	ldr r1, [pc, #16]	@ 000334b4 0449
.org 0x334b6
	adds r0, r4, r1	@ 000334b6 6018
.org 0x334b8
	strb r3, [r0, #0]	@ 000334b8 0370
.org 0x334ba
	adds r0, r4, #0	@ 000334ba 201c
.org 0x334bc
	bl 0x334dc	@ 000334bc 00f00ef8
