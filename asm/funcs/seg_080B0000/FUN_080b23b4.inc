@ FUN_080b23b4  entry 0x080b23b4  size 184
.thumb
.org 0xb23b4
FUN_080b23b4:
	push {r4, r5, lr}	@ 000b23b4 30b5
.org 0xb23b6
	adds r5, r0, #0	@ 000b23b6 051c
.org 0xb23b8
	ldrb r0, [r5, #16]	@ 000b23b8 287c
.org 0xb23ba
	cmp r0, #0	@ 000b23ba 0028
.org 0xb23bc
	bne.n 0xb2454	@ 000b23bc 4ad1
.org 0xb23be
	adds r0, r5, #0	@ 000b23be 281c
.org 0xb23c0
	adds r0, #180	@ 000b23c0 b430
.org 0xb23c2
	ldrb r0, [r0, #0]	@ 000b23c2 0078
.org 0xb23c4
	cmp r0, #0	@ 000b23c4 0028
.org 0xb23c6
	bne.n 0xb2406	@ 000b23c6 1ed1
.org 0xb23c8
	adds r0, r5, #0	@ 000b23c8 281c
.org 0xb23ca
	adds r0, #140	@ 000b23ca 8c30
.org 0xb23cc
	ldr r0, [r0, #0]	@ 000b23cc 0068
.org 0xb23ce
	movs r1, #128	@ 000b23ce 8021
.org 0xb23d0
	lsls r1, r1, #9	@ 000b23d0 4902
.org 0xb23d2
	ands r0, r1	@ 000b23d2 0840
.org 0xb23d4
	cmp r0, #0	@ 000b23d4 0028
.org 0xb23d6
	beq.n 0xb23ee	@ 000b23d6 0ad0
.org 0xb23d8
	adds r4, r5, #0	@ 000b23d8 2c1c
.org 0xb23da
	adds r4, #84	@ 000b23da 5434
.org 0xb23dc
	ldrb r2, [r5, #10]	@ 000b23dc aa7a
.org 0xb23de
	lsrs r2, r2, #4	@ 000b23de 1209
.org 0xb23e0
	movs r0, #1	@ 000b23e0 0120
.org 0xb23e2
	ands r2, r0	@ 000b23e2 0240
.org 0xb23e4
	adds r0, r4, #0	@ 000b23e4 201c
.org 0xb23e6
	movs r1, #0	@ 000b23e6 0021
.org 0xb23e8
	bl 0xe6270	@ 000b23e8 33f042ff
.org 0xb23ec
	b.n 0xb241c	@ 000b23ec 16e0
.org 0xb23ee
	adds r4, r5, #0	@ 000b23ee 2c1c
.org 0xb23f0
	adds r4, #84	@ 000b23f0 5434
.org 0xb23f2
	movs r1, #128	@ 000b23f2 8021
.org 0xb23f4
	lsls r1, r1, #1	@ 000b23f4 4900
.org 0xb23f6
	ldrb r2, [r5, #10]	@ 000b23f6 aa7a
.org 0xb23f8
	lsrs r2, r2, #4	@ 000b23f8 1209
.org 0xb23fa
	movs r0, #1	@ 000b23fa 0120
.org 0xb23fc
	ands r2, r0	@ 000b23fc 0240
.org 0xb23fe
	adds r0, r4, #0	@ 000b23fe 201c
.org 0xb2400
	bl 0xe6270	@ 000b2400 33f036ff
.org 0xb2404
	b.n 0xb241c	@ 000b2404 0ae0
.org 0xb2406
	adds r4, r5, #0	@ 000b2406 2c1c
.org 0xb2408
	adds r4, #84	@ 000b2408 5434
.org 0xb240a
	movs r1, #128	@ 000b240a 8021
.org 0xb240c
	lsls r1, r1, #2	@ 000b240c 8900
.org 0xb240e
	ldrb r2, [r5, #10]	@ 000b240e aa7a
.org 0xb2410
	lsrs r2, r2, #4	@ 000b2410 1209
.org 0xb2412
	movs r0, #1	@ 000b2412 0120
.org 0xb2414
	ands r2, r0	@ 000b2414 0240
.org 0xb2416
	adds r0, r4, #0	@ 000b2416 201c
.org 0xb2418
	bl 0xe6270	@ 000b2418 33f02aff
.org 0xb241c
	ldr r2, [pc, #32]	@ 000b241c 084a
.org 0xb241e
	ldrh r1, [r2, #12]	@ 000b241e 9189
.org 0xb2420
	ldr r0, [pc, #32]	@ 000b2420 0848
.org 0xb2422
	cmp r1, r0	@ 000b2422 8142
.org 0xb2424
	bhi.n 0xb242a	@ 000b2424 01d8
.org 0xb2426
	adds r0, r1, #1	@ 000b2426 481c
.org 0xb2428
	strh r0, [r2, #12]	@ 000b2428 9081
.org 0xb242a
	adds r0, r5, #0	@ 000b242a 281c
.org 0xb242c
	adds r1, r4, #0	@ 000b242c 211c
.org 0xb242e
	bl 0x2abe0	@ 000b242e 78f7d7fb
.org 0xb2432
	ldrb r0, [r5, #17]	@ 000b2432 687c
.org 0xb2434
	cmp r0, #1	@ 000b2434 0128
.org 0xb2436
	bhi.n 0xb2448	@ 000b2436 07d8
.org 0xb2438
	movs r0, #3	@ 000b2438 0320
.org 0xb243a
	movs r1, #30	@ 000b243a 1e21
.org 0xb243c
	b.n 0xb244c	@ 000b243c 06e0
.org 0xb243e
	.byte 0x00	@ 000b243e data
.org 0xb243f
	.byte 0x00	@ 000b243f data
.org 0xb2440
	.byte 0xe0,0xe8,0x02,0x02	@ 000b2440 data
.org 0xb2444
	.byte 0x0e,0x27,0x00,0x00	@ 000b2444 data
.org 0xb2448
	movs r0, #3	@ 000b2448 0320
.org 0xb244a
	movs r1, #255	@ 000b244a ff21
.org 0xb244c
	adds r2, r4, #0	@ 000b244c 221c
.org 0xb244e
	bl 0x2ab88	@ 000b244e 78f79bfb
.org 0xb2452
	b.n 0xb245e	@ 000b2452 04e0
.org 0xb2454
	adds r1, r5, #0	@ 000b2454 291c
.org 0xb2456
	adds r1, #84	@ 000b2456 5431
.org 0xb2458
	movs r0, #2	@ 000b2458 0220
.org 0xb245a
	bl 0xd0c88	@ 000b245a 1ef015fc
.org 0xb245e
	ldr r1, [pc, #24]	@ 000b245e 0649
.org 0xb2460
	ldrb r0, [r5, #9]	@ 000b2460 687a
.org 0xb2462
	lsls r0, r0, #2	@ 000b2462 8000
.org 0xb2464
	adds r0, r0, r1	@ 000b2464 4018
.org 0xb2466
	movs r1, #4	@ 000b2466 0421
.org 0xb2468
	str r1, [r5, #12]	@ 000b2468 e960
.org 0xb246a
	ldr r0, [r0, #0]	@ 000b246a 0068
