@ FUN_08031414  entry 0x08031414  size 272
.thumb
.org 0x31414
FUN_08031414:
	push {r4, r5, r6, lr}	@ 00031414 70b5
.org 0x31416
	adds r4, r0, #0	@ 00031416 041c
.org 0x31418
	ldrb r0, [r4, #30]	@ 00031418 a07f
.org 0x3141a
	lsls r0, r0, #8	@ 0003141a 0002
.org 0x3141c
	adds r1, r4, #0	@ 0003141c 211c
.org 0x3141e
	adds r1, #112	@ 0003141e 7031
.org 0x31420
	ldrb r1, [r1, #0]	@ 00031420 0978
.org 0x31422
	orrs r1, r0	@ 00031422 0143
.org 0x31424
	movs r2, #128	@ 00031424 8022
.org 0x31426
	lsls r2, r2, #3	@ 00031426 d200
.org 0x31428
	cmp r1, r2	@ 00031428 9142
.org 0x3142a
	beq.n 0x31442	@ 0003142a 0ad0
.org 0x3142c
	adds r0, r4, #0	@ 0003142c 201c
.org 0x3142e
	adds r0, #115	@ 0003142e 7330
.org 0x31430
	ldrb r0, [r0, #0]	@ 00031430 0078
.org 0x31432
	cmp r0, #3	@ 00031432 0328
.org 0x31434
	bne.n 0x31442	@ 00031434 05d1
.org 0x31436
	adds r0, r4, #0	@ 00031436 201c
.org 0x31438
	adds r1, r2, #0	@ 00031438 111c
.org 0x3143a
	movs r2, #1	@ 0003143a 0122
.org 0x3143c
	movs r3, #4	@ 0003143c 0423
.org 0x3143e
	bl 0x1cfc8	@ 0003143e ebf7c3fd
.org 0x31442
	movs r1, #150	@ 00031442 9621
.org 0x31444
	lsls r1, r1, #2	@ 00031444 8900
.org 0x31446
	adds r0, r4, r1	@ 00031446 6018
.org 0x31448
	ldr r1, [r0, #0]	@ 00031448 0168
.org 0x3144a
	movs r0, #32	@ 0003144a 2020
.org 0x3144c
	ands r0, r1	@ 0003144c 0840
.org 0x3144e
	cmp r0, #0	@ 0003144e 0028
.org 0x31450
	beq.n 0x31470	@ 00031450 0ed0
.org 0x31452
	adds r1, r4, #0	@ 00031452 211c
.org 0x31454
	adds r1, #76	@ 00031454 4c31
.org 0x31456
	movs r0, #0	@ 00031456 0020
.org 0x31458
	strb r0, [r1, #0]	@ 00031458 0870
.org 0x3145a
	adds r2, r4, #0	@ 0003145a 221c
.org 0x3145c
	adds r2, #74	@ 0003145c 4a32
.org 0x3145e
	ldrb r1, [r2, #0]	@ 0003145e 1178
.org 0x31460
	subs r0, #17	@ 00031460 1138
.org 0x31462
	ands r0, r1	@ 00031462 0840
.org 0x31464
	strb r0, [r2, #0]	@ 00031464 1070
.org 0x31466
	ldrb r1, [r4, #10]	@ 00031466 a17a
.org 0x31468
	movs r0, #239	@ 00031468 ef20
.org 0x3146a
	ands r0, r1	@ 0003146a 0840
.org 0x3146c
	strb r0, [r4, #10]	@ 0003146c a072
.org 0x3146e
	b.n 0x31492	@ 0003146e 10e0
.org 0x31470
	movs r0, #16	@ 00031470 1020
.org 0x31472
	ands r1, r0	@ 00031472 0140
.org 0x31474
	cmp r1, #0	@ 00031474 0029
.org 0x31476
	beq.n 0x31492	@ 00031476 0cd0
.org 0x31478
	adds r1, r4, #0	@ 00031478 211c
.org 0x3147a
	adds r1, #76	@ 0003147a 4c31
.org 0x3147c
	movs r0, #1	@ 0003147c 0120
.org 0x3147e
	strb r0, [r1, #0]	@ 0003147e 0870
.org 0x31480
	adds r2, r4, #0	@ 00031480 221c
.org 0x31482
	adds r2, #74	@ 00031482 4a32
.org 0x31484
	ldrb r0, [r2, #0]	@ 00031484 1078
.org 0x31486
	movs r1, #16	@ 00031486 1021
.org 0x31488
	orrs r0, r1	@ 00031488 0843
.org 0x3148a
	strb r0, [r2, #0]	@ 0003148a 1070
.org 0x3148c
	ldrb r0, [r4, #10]	@ 0003148c a07a
.org 0x3148e
	orrs r1, r0	@ 0003148e 0143
.org 0x31490
	strb r1, [r4, #10]	@ 00031490 a172
.org 0x31492
	ldr r1, [r4, #92]	@ 00031492 e16d
.org 0x31494
	cmp r1, #0	@ 00031494 0029
.org 0x31496
	bge.n 0x3149a	@ 00031496 00da
.org 0x31498
	negs r1, r1	@ 00031498 4942
.org 0x3149a
	lsls r1, r1, #16	@ 0003149a 0904
.org 0x3149c
	asrs r1, r1, #16	@ 0003149c 0914
.org 0x3149e
	ldr r0, [r4, #84]	@ 0003149e 606d
.org 0x314a0
	adds r0, r0, r1	@ 000314a0 4018
.org 0x314a2
	str r0, [r4, #84]	@ 000314a2 6065
.org 0x314a4
	movs r0, #186	@ 000314a4 ba20
.org 0x314a6
	lsls r0, r0, #1	@ 000314a6 4000
.org 0x314a8
	adds r5, r4, r0	@ 000314a8 2518
.org 0x314aa
	ldrb r1, [r5, #0]	@ 000314aa 2978
.org 0x314ac
	lsls r1, r1, #3	@ 000314ac c900
.org 0x314ae
	ldr r6, [pc, #100]	@ 000314ae 194e
.org 0x314b0
	adds r1, r1, r6	@ 000314b0 8919
.org 0x314b2
	adds r0, r4, #0	@ 000314b2 201c
.org 0x314b4
	movs r2, #0	@ 000314b4 0022
.org 0x314b6
	bl 0x2b7f0	@ 000314b6 faf79bf9
.org 0x314ba
	ldrb r1, [r5, #0]	@ 000314ba 2978
.org 0x314bc
	lsls r1, r1, #3	@ 000314bc c900
.org 0x314be
	adds r1, r1, r6	@ 000314be 8919
.org 0x314c0
	adds r0, r4, #0	@ 000314c0 201c
.org 0x314c2
	movs r2, #1	@ 000314c2 0122
.org 0x314c4
	bl 0x2b7f0	@ 000314c4 faf794f9
.org 0x314c8
	ldr r0, [r4, #88]	@ 000314c8 a06d
.org 0x314ca
	ldr r1, [r4, #96]	@ 000314ca 216e
.org 0x314cc
	adds r0, r0, r1	@ 000314cc 4018
.org 0x314ce
	str r0, [r4, #88]	@ 000314ce a065
.org 0x314d0
	adds r0, r4, #0	@ 000314d0 201c
.org 0x314d2
	bl 0x3851c	@ 000314d2 07f023f8
.org 0x314d6
	lsls r0, r0, #16	@ 000314d6 0004
.org 0x314d8
	asrs r0, r0, #16	@ 000314d8 0014
.org 0x314da
	ldr r1, [r4, #96]	@ 000314da 216e
.org 0x314dc
	adds r1, r1, r0	@ 000314dc 0918
.org 0x314de
	str r1, [r4, #96]	@ 000314de 2166
.org 0x314e0
	ldrb r1, [r5, #0]	@ 000314e0 2978
.org 0x314e2
	lsls r1, r1, #3	@ 000314e2 c900
.org 0x314e4
	adds r1, r1, r6	@ 000314e4 8919
.org 0x314e6
	adds r0, r4, #0	@ 000314e6 201c
.org 0x314e8
	movs r2, #0	@ 000314e8 0022
.org 0x314ea
	bl 0x2bfe8	@ 000314ea faf77dfd
.org 0x314ee
	lsls r0, r0, #16	@ 000314ee 0004
.org 0x314f0
	cmp r0, #0	@ 000314f0 0028
.org 0x314f2
	bne.n 0x31508	@ 000314f2 09d1
.org 0x314f4
	ldrb r1, [r5, #0]	@ 000314f4 2978
.org 0x314f6
	lsls r1, r1, #3	@ 000314f6 c900
.org 0x314f8
	adds r1, r1, r6	@ 000314f8 8919
.org 0x314fa
	adds r0, r4, #0	@ 000314fa 201c
.org 0x314fc
	movs r2, #1	@ 000314fc 0122
.org 0x314fe
	bl 0x2c2d4	@ 000314fe faf7e9fe
.org 0x31502
	lsls r0, r0, #16	@ 00031502 0004
.org 0x31504
	cmp r0, #0	@ 00031504 0028
.org 0x31506
	beq.n 0x31518	@ 00031506 07d0
.org 0x31508
	movs r1, #0	@ 00031508 0021
.org 0x3150a
	movs r0, #2	@ 0003150a 0220
.org 0x3150c
	strb r0, [r4, #14]	@ 0003150c a073
.org 0x3150e
	strb r1, [r4, #15]	@ 0003150e e173
.org 0x31510
	b.n 0x31524	@ 00031510 08e0
.org 0x31512
	.byte 0x00	@ 00031512 data
.org 0x31513
	.byte 0x00	@ 00031513 data
.org 0x31514
	.byte 0x6c,0x33,0x85,0x08	@ 00031514 data
.org 0x31518
	ldr r0, [r4, #96]	@ 00031518 206e
.org 0x3151a
	cmp r0, #0	@ 0003151a 0028
.org 0x3151c
	ble.n 0x31524	@ 0003151c 02dd
.org 0x3151e
	movs r0, #2	@ 0003151e 0220
.org 0x31520
	strb r0, [r4, #14]	@ 00031520 a073
.org 0x31522
	strb r0, [r4, #15]	@ 00031522 e073
