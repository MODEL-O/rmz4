@ FUN_080b13e4  entry 0x080b13e4  size 372
.thumb
.org 0xb13e4
FUN_080b13e4:
	push {r4, r5, r6, lr}	@ 000b13e4 70b5
.org 0xb13e6
	adds r4, r0, #0	@ 000b13e6 041c
.org 0xb13e8
	adds r3, r4, #0	@ 000b13e8 231c
.org 0xb13ea
	adds r3, #140	@ 000b13ea 8c33
.org 0xb13ec
	ldr r2, [r3, #0]	@ 000b13ec 1a68
.org 0xb13ee
	movs r0, #128	@ 000b13ee 8020
.org 0xb13f0
	lsls r0, r0, #2	@ 000b13f0 8000
.org 0xb13f2
	ands r2, r0	@ 000b13f2 0240
.org 0xb13f4
	cmp r2, #0	@ 000b13f4 002a
.org 0xb13f6
	bne.n 0xb1404	@ 000b13f6 05d1
.org 0xb13f8
	adds r0, r4, #0	@ 000b13f8 201c
.org 0xb13fa
	adds r0, #194	@ 000b13fa c230
.org 0xb13fc
	ldrb r1, [r0, #0]	@ 000b13fc 0178
.org 0xb13fe
	adds r6, r0, #0	@ 000b13fe 061c
.org 0xb1400
	cmp r1, #255	@ 000b1400 ff29
.org 0xb1402
	bne.n 0xb1440	@ 000b1402 1dd1
.org 0xb1404
	ldr r1, [pc, #52]	@ 000b1404 0d49
.org 0xb1406
	ldrb r0, [r4, #9]	@ 000b1406 607a
.org 0xb1408
	lsls r0, r0, #2	@ 000b1408 8000
.org 0xb140a
	adds r0, r0, r1	@ 000b140a 4018
.org 0xb140c
	movs r1, #2	@ 000b140c 0221
.org 0xb140e
	str r1, [r4, #12]	@ 000b140e e160
.org 0xb1410
	ldr r0, [r0, #0]	@ 000b1410 0068
.org 0xb1412
	ldr r0, [r0, #8]	@ 000b1412 8068
.org 0xb1414
	str r0, [r4, #20]	@ 000b1414 6061
.org 0xb1416
	movs r1, #0	@ 000b1416 0021
.org 0xb1418
	str r1, [r3, #0]	@ 000b1418 1960
.org 0xb141a
	adds r0, r4, #0	@ 000b141a 201c
.org 0xb141c
	adds r0, #144	@ 000b141c 9030
.org 0xb141e
	str r1, [r0, #0]	@ 000b141e 0160
.org 0xb1420
	adds r0, #4	@ 000b1420 0430
.org 0xb1422
	strb r1, [r0, #0]	@ 000b1422 0170
.org 0xb1424
	ldrb r1, [r4, #10]	@ 000b1424 a17a
.org 0xb1426
	movs r0, #251	@ 000b1426 fb20
.org 0xb1428
	ands r0, r1	@ 000b1428 0840
.org 0xb142a
	strb r0, [r4, #10]	@ 000b142a a072
.org 0xb142c
	adds r1, r4, #0	@ 000b142c 211c
.org 0xb142e
	adds r1, #194	@ 000b142e c231
.org 0xb1430
	movs r0, #255	@ 000b1430 ff20
.org 0xb1432
	strb r0, [r1, #0]	@ 000b1432 0870
.org 0xb1434
	adds r0, r4, #0	@ 000b1434 201c
.org 0xb1436
	bl 0xb10a8	@ 000b1436 fff737fe
.org 0xb143a
	b.n 0xb1572	@ 000b143a 9ae0
.org 0xb143c
	.byte 0x40,0xdb,0x85,0x08	@ 000b143c data
.org 0xb1440
	ldr r0, [r4, #44]	@ 000b1440 e06a
.org 0xb1442
	ldrb r0, [r0, #12]	@ 000b1442 007b
.org 0xb1444
	cmp r0, #1	@ 000b1444 0128
.org 0xb1446
	bls.n 0xb144a	@ 000b1446 00d9
.org 0xb1448
	str r2, [r4, #44]	@ 000b1448 e262
.org 0xb144a
	ldr r0, [pc, #52]	@ 000b144a 0d48
.org 0xb144c
	ldrb r1, [r0, #4]	@ 000b144c 0179
.org 0xb144e
	movs r0, #64	@ 000b144e 4020
.org 0xb1450
	ands r0, r1	@ 000b1450 0840
.org 0xb1452
	cmp r0, #0	@ 000b1452 0028
.org 0xb1454
	bne.n 0xb146a	@ 000b1454 09d1
.org 0xb1456
	ldr r0, [pc, #44]	@ 000b1456 0b48
.org 0xb1458
	adds r1, r4, #0	@ 000b1458 211c
.org 0xb145a
	adds r1, #84	@ 000b145a 5431
.org 0xb145c
	bl 0x1fb14	@ 000b145c 6ef75afb
.org 0xb1460
	cmp r0, #0	@ 000b1460 0028
.org 0xb1462
	bne.n 0xb146a	@ 000b1462 02d1
.org 0xb1464
	movs r0, #38	@ 000b1464 2620
.org 0xb1466
	bl 0x6984	@ 000b1466 55f78dfa
.org 0xb146a
	ldr r0, [r4, #40]	@ 000b146a a06a
.org 0xb146c
	cmp r0, #0	@ 000b146c 0028
.org 0xb146e
	bne.n 0xb14f0	@ 000b146e 3fd1
.org 0xb1470
	adds r1, r4, #0	@ 000b1470 211c
.org 0xb1472
	adds r1, #193	@ 000b1472 c131
.org 0xb1474
	ldrb r0, [r1, #0]	@ 000b1474 0878
.org 0xb1476
	cmp r0, #2	@ 000b1476 0228
.org 0xb1478
	bls.n 0xb1488	@ 000b1478 06d9
.org 0xb147a
	adds r0, #1	@ 000b147a 0130
.org 0xb147c
	strb r0, [r1, #0]	@ 000b147c 0870
.org 0xb147e
	b.n 0xb1502	@ 000b147e 40e0
.org 0xb1480
	.byte 0x70,0x0a,0x00,0x02	@ 000b1480 data
.org 0xb1484
	.byte 0xf8,0xe9,0x02,0x02	@ 000b1484 data
.org 0xb1488
	adds r0, r4, #0	@ 000b1488 201c
.org 0xb148a
	bl 0xb1170	@ 000b148a fff771fe
.org 0xb148e
	ldrb r5, [r6, #0]	@ 000b148e 3578
.org 0xb1490
	cmp r5, #0	@ 000b1490 002d
.org 0xb1492
	bne.n 0xb14dc	@ 000b1492 23d1
.org 0xb1494
	ldrb r0, [r4, #30]	@ 000b1494 a07f
.org 0xb1496
	lsls r0, r0, #8	@ 000b1496 0002
.org 0xb1498
	adds r1, r4, #0	@ 000b1498 211c
.org 0xb149a
	adds r1, #112	@ 000b149a 7031
.org 0xb149c
	ldrb r1, [r1, #0]	@ 000b149c 0978
.org 0xb149e
	orrs r0, r1	@ 000b149e 0843
.org 0xb14a0
	movs r1, #185	@ 000b14a0 b921
.org 0xb14a2
	lsls r1, r1, #8	@ 000b14a2 0902
.org 0xb14a4
	cmp r0, r1	@ 000b14a4 8842
.org 0xb14a6
	beq.n 0xb14ae	@ 000b14a6 02d0
.org 0xb14a8
	adds r0, r4, #0	@ 000b14a8 201c
.org 0xb14aa
	bl 0x1cf00	@ 000b14aa 6bf729fd
.org 0xb14ae
	ldr r1, [pc, #40]	@ 000b14ae 0a49
.org 0xb14b0
	ldrb r0, [r4, #13]	@ 000b14b0 607b
.org 0xb14b2
	lsls r0, r0, #2	@ 000b14b2 8000
.org 0xb14b4
	adds r0, r0, r1	@ 000b14b4 4018
.org 0xb14b6
	ldr r1, [r0, #0]	@ 000b14b6 0168
.org 0xb14b8
	adds r0, r4, #0	@ 000b14b8 201c
.org 0xb14ba
	bl 0x128f80	@ 000b14ba 77f061fd
.org 0xb14be
	ldrb r1, [r4, #19]	@ 000b14be e17c
.org 0xb14c0
	adds r0, r4, #0	@ 000b14c0 201c
.org 0xb14c2
	adds r0, #36	@ 000b14c2 2430
.org 0xb14c4
	strb r1, [r0, #0]	@ 000b14c4 0170
.org 0xb14c6
	ldrb r0, [r4, #19]	@ 000b14c6 e07c
.org 0xb14c8
	adds r0, #1	@ 000b14c8 0130
.org 0xb14ca
	strb r0, [r4, #19]	@ 000b14ca e074
.org 0xb14cc
	lsls r0, r0, #24	@ 000b14cc 0006
.org 0xb14ce
	lsrs r0, r0, #24	@ 000b14ce 000e
.org 0xb14d0
	cmp r0, #255	@ 000b14d0 ff28
.org 0xb14d2
	bne.n 0xb14f6	@ 000b14d2 10d1
.org 0xb14d4
	strb r5, [r4, #19]	@ 000b14d4 e574
.org 0xb14d6
	b.n 0xb14f6	@ 000b14d6 0ee0
.org 0xb14d8
	.byte 0x08,0x34,0x86,0x08	@ 000b14d8 data
.org 0xb14dc
	ldr r1, [pc, #12]	@ 000b14dc 0349
.org 0xb14de
	adds r0, r4, #0	@ 000b14de 201c
.org 0xb14e0
	bl 0x1cf00	@ 000b14e0 6bf70efd
.org 0xb14e4
	adds r0, r4, #0	@ 000b14e4 201c
.org 0xb14e6
	bl 0xb157c	@ 000b14e6 00f049f8
.org 0xb14ea
	b.n 0xb14f6	@ 000b14ea 04e0
.org 0xb14ec
	.byte 0x01,0xb9,0x00,0x00	@ 000b14ec data
.org 0xb14f0
	adds r0, r4, #0	@ 000b14f0 201c
.org 0xb14f2
	bl 0xb11b8	@ 000b14f2 fff761fe
.org 0xb14f6
	ldr r1, [r4, #44]	@ 000b14f6 e16a
.org 0xb14f8
	cmp r1, #0	@ 000b14f8 0029
.org 0xb14fa
	beq.n 0xb156c	@ 000b14fa 37d0
.org 0xb14fc
	ldrb r0, [r1, #12]	@ 000b14fc 087b
.org 0xb14fe
	cmp r0, #1	@ 000b14fe 0128
.org 0xb1500
	bls.n 0xb151c	@ 000b1500 0cd9
.org 0xb1502
	ldr r1, [pc, #20]	@ 000b1502 0549
.org 0xb1504
	ldrb r0, [r4, #9]	@ 000b1504 607a
.org 0xb1506
	lsls r0, r0, #2	@ 000b1506 8000
.org 0xb1508
	adds r0, r0, r1	@ 000b1508 4018
.org 0xb150a
	movs r1, #2	@ 000b150a 0221
.org 0xb150c
	str r1, [r4, #12]	@ 000b150c e160
.org 0xb150e
	ldr r0, [r0, #0]	@ 000b150e 0068
.org 0xb1510
	ldr r0, [r0, #8]	@ 000b1510 8068
.org 0xb1512
	str r0, [r4, #20]	@ 000b1512 6061
.org 0xb1514
	b.n 0xb1572	@ 000b1514 2de0
.org 0xb1516
	.byte 0x00	@ 000b1516 data
.org 0xb1517
	.byte 0x00	@ 000b1517 data
.org 0xb1518
	.byte 0x40,0xdb,0x85,0x08	@ 000b1518 data
.org 0xb151c
	ldrb r2, [r4, #18]	@ 000b151c a27c
.org 0xb151e
	cmp r2, #0	@ 000b151e 002a
.org 0xb1520
	bne.n 0xb154c	@ 000b1520 14d1
.org 0xb1522
	ldrb r0, [r1, #18]	@ 000b1522 887c
.org 0xb1524
	cmp r0, #0	@ 000b1524 0028
.org 0xb1526
	beq.n 0xb156c	@ 000b1526 21d0
.org 0xb1528
	strb r0, [r4, #18]	@ 000b1528 a074
.org 0xb152a
	adds r0, r1, #0	@ 000b152a 081c
.org 0xb152c
	adds r0, #194	@ 000b152c c230
.org 0xb152e
	ldrb r0, [r0, #0]	@ 000b152e 0078
.org 0xb1530
	strb r0, [r6, #0]	@ 000b1530 3070
.org 0xb1532
	lsls r0, r0, #24	@ 000b1532 0006
.org 0xb1534
	lsrs r0, r0, #24	@ 000b1534 000e
.org 0xb1536
	cmp r0, #15	@ 000b1536 0f28
.org 0xb1538
	bne.n 0xb156c	@ 000b1538 18d1
.org 0xb153a
	adds r0, r4, #0	@ 000b153a 201c
.org 0xb153c
	adds r0, #116	@ 000b153c 7430
.org 0xb153e
	ldr r1, [pc, #8]	@ 000b153e 0249
.org 0xb1540
	bl 0x5784	@ 000b1540 54f720f9
.org 0xb1544
	b.n 0xb156c	@ 000b1544 12e0
.org 0xb1546
	.byte 0x00	@ 000b1546 data
.org 0xb1547
	.byte 0x00	@ 000b1547 data
.org 0xb1548
	.byte 0x28,0x34,0x86,0x08	@ 000b1548 data
.org 0xb154c
	ldrb r0, [r1, #18]	@ 000b154c 887c
.org 0xb154e
	cmp r0, #0	@ 000b154e 0028
.org 0xb1550
	bne.n 0xb156c	@ 000b1550 0cd1
.org 0xb1552
	strb r2, [r1, #18]	@ 000b1552 8a74
.org 0xb1554
	ldr r0, [r4, #44]	@ 000b1554 e06a
.org 0xb1556
	ldrb r1, [r6, #0]	@ 000b1556 3178
