@ FUN_08034440  entry 0x08034440  size 146
.thumb
.org 0x34440
FUN_08034440:
	push {r4, r5, r6, lr}	@ 00034440 70b5
.org 0x34442
	adds r4, r0, #0	@ 00034442 041c
.org 0x34444
	ldrb r0, [r4, #30]	@ 00034444 a07f
.org 0x34446
	lsls r0, r0, #8	@ 00034446 0002
.org 0x34448
	adds r1, r4, #0	@ 00034448 211c
.org 0x3444a
	adds r1, #112	@ 0003444a 7031
.org 0x3444c
	ldrb r1, [r1, #0]	@ 0003444c 0978
.org 0x3444e
	orrs r1, r0	@ 0003444e 0143
.org 0x34450
	movs r2, #240	@ 00034450 f022
.org 0x34452
	lsls r2, r2, #5	@ 00034452 5201
.org 0x34454
	cmp r1, r2	@ 00034454 9142
.org 0x34456
	beq.n 0x34460	@ 00034456 03d0
.org 0x34458
	adds r0, r4, #0	@ 00034458 201c
.org 0x3445a
	adds r1, r2, #0	@ 0003445a 111c
.org 0x3445c
	bl 0x1cf00	@ 0003445c e8f750fd
.org 0x34460
	movs r1, #167	@ 00034460 a721
.org 0x34462
	lsls r1, r1, #1	@ 00034462 4900
.org 0x34464
	adds r0, r4, r1	@ 00034464 6018
.org 0x34466
	movs r6, #0	@ 00034466 0026
.org 0x34468
	strb r6, [r0, #0]	@ 00034468 0670
.org 0x3446a
	movs r0, #129	@ 0003446a 8120
.org 0x3446c
	lsls r0, r0, #1	@ 0003446c 4000
.org 0x3446e
	adds r5, r4, r0	@ 0003446e 2518
.org 0x34470
	ldrb r0, [r5, #0]	@ 00034470 2878
.org 0x34472
	cmp r0, #0	@ 00034472 0028
.org 0x34474
	bne.n 0x34486	@ 00034474 07d1
.org 0x34476
	adds r0, r4, #0	@ 00034476 201c
.org 0x34478
	movs r1, #0	@ 00034478 0021
.org 0x3447a
	bl 0x3d374	@ 0003447a 08f07bff
.org 0x3447e
	ldrb r0, [r5, #0]	@ 0003447e 2878
.org 0x34480
	adds r0, #1	@ 00034480 0130
.org 0x34482
	strb r0, [r5, #0]	@ 00034482 2870
.org 0x34484
	b.n 0x344d2	@ 00034484 25e0
.org 0x34486
	movs r0, #162	@ 00034486 a220
.org 0x34488
	lsls r0, r0, #1	@ 00034488 4000
.org 0x3448a
	adds r1, r4, r0	@ 0003448a 2118
.org 0x3448c
	adds r0, r4, #0	@ 0003448c 201c
.org 0x3448e
	bl 0x39fd8	@ 0003448e 05f0a3fd
.org 0x34492
	lsls r0, r0, #24	@ 00034492 0006
.org 0x34494
	lsrs r0, r0, #24	@ 00034494 000e
.org 0x34496
	cmp r0, #1	@ 00034496 0128
.org 0x34498
	bne.n 0x344b8	@ 00034498 0ed1
.org 0x3449a
	movs r0, #128	@ 0003449a 8020
.org 0x3449c
	lsls r0, r0, #1	@ 0003449c 4000
.org 0x3449e
	adds r1, r4, r0	@ 0003449e 2118
.org 0x344a0
	movs r0, #3	@ 000344a0 0320
.org 0x344a2
	strb r0, [r1, #0]	@ 000344a2 0870
.org 0x344a4
	ldr r1, [pc, #12]	@ 000344a4 0349
.org 0x344a6
	adds r0, r4, r1	@ 000344a6 6018
.org 0x344a8
	strb r6, [r0, #0]	@ 000344a8 0670
.org 0x344aa
	adds r0, r4, #0	@ 000344aa 201c
.org 0x344ac
	bl 0x334dc	@ 000344ac fff716f8
.org 0x344b0
	b.n 0x344d2	@ 000344b0 0fe0
.org 0x344b2
	.byte 0x00	@ 000344b2 data
.org 0x344b3
	.byte 0x00	@ 000344b3 data
.org 0x344b4
	.byte 0x01,0x01,0x00,0x00	@ 000344b4 data
.org 0x344b8
	ldr r1, [pc, #28]	@ 000344b8 0749
.org 0x344ba
	adds r0, r4, r1	@ 000344ba 6018
.org 0x344bc
	ldrb r2, [r0, #0]	@ 000344bc 0278
.org 0x344be
	cmp r2, #0	@ 000344be 002a
.org 0x344c0
	bne.n 0x344d2	@ 000344c0 07d1
.org 0x344c2
	ldr r0, [pc, #24]	@ 000344c2 0648
.org 0x344c4
	adds r1, r4, r0	@ 000344c4 2118
.org 0x344c6
	movs r0, #2	@ 000344c6 0220
.org 0x344c8
	strb r0, [r1, #0]	@ 000344c8 0870
.org 0x344ca
	strb r2, [r5, #0]	@ 000344ca 2a70
.org 0x344cc
	adds r0, r4, #0	@ 000344cc 201c
.org 0x344ce
	bl 0x344e0	@ 000344ce 00f007f8
