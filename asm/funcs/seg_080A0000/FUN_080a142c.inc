@ FUN_080a142c  entry 0x080a142c  size 166
.thumb
.org 0xa142c
FUN_080a142c:
	push {r4, r5, r6, lr}	@ 000a142c 70b5
.org 0xa142e
	sub sp, #12	@ 000a142e 83b0
.org 0xa1430
	adds r4, r0, #0	@ 000a1430 041c
.org 0xa1432
	mov r0, sp	@ 000a1432 6846
.org 0xa1434
	ldr r1, [pc, #116]	@ 000a1434 1d49
.org 0xa1436
	ldmia r1!, {r2, r3, r5}	@ 000a1436 2cc9
.org 0xa1438
	stmia r0!, {r2, r3, r5}	@ 000a1438 2cc0
.org 0xa143a
	ldr r6, [r4, #40]	@ 000a143a a66a
.org 0xa143c
	ldrb r5, [r4, #17]	@ 000a143c 657c
.org 0xa143e
	ldrb r0, [r4, #15]	@ 000a143e e07b
.org 0xa1440
	cmp r0, #0	@ 000a1440 0028
.org 0xa1442
	bne.n 0xa146e	@ 000a1442 14d1
.org 0xa1444
	adds r1, r4, #0	@ 000a1444 211c
.org 0xa1446
	adds r1, #37	@ 000a1446 2531
.org 0xa1448
	movs r0, #25	@ 000a1448 1920
.org 0xa144a
	strb r0, [r1, #0]	@ 000a144a 0870
.org 0xa144c
	adds r0, r4, #0	@ 000a144c 201c
.org 0xa144e
	adds r0, #116	@ 000a144e 7430
.org 0xa1450
	ldr r1, [pc, #92]	@ 000a1450 1749
.org 0xa1452
	bl 0x5784	@ 000a1452 64f797f9
.org 0xa1456
	movs r1, #131	@ 000a1456 8321
.org 0xa1458
	lsls r1, r1, #8	@ 000a1458 0902
.org 0xa145a
	adds r0, r4, #0	@ 000a145a 201c
.org 0xa145c
	bl 0x1cf00	@ 000a145c 7bf750fd
.org 0xa1460
	lsls r0, r5, #2	@ 000a1460 a800
.org 0xa1462
	add r0, sp	@ 000a1462 6844
.org 0xa1464
	ldr r0, [r0, #0]	@ 000a1464 0068
.org 0xa1466
	str r0, [r4, #100]	@ 000a1466 6066
.org 0xa1468
	ldrb r0, [r4, #15]	@ 000a1468 e07b
.org 0xa146a
	adds r0, #1	@ 000a146a 0130
.org 0xa146c
	strb r0, [r4, #15]	@ 000a146c e073
.org 0xa146e
	ldrb r0, [r6, #12]	@ 000a146e 307b
.org 0xa1470
	cmp r0, #1	@ 000a1470 0128
.org 0xa1472
	bls.n 0xa14b8	@ 000a1472 21d9
.org 0xa1474
	ldrb r1, [r4, #10]	@ 000a1474 a17a
.org 0xa1476
	movs r0, #254	@ 000a1476 fe20
.org 0xa1478
	ands r0, r1	@ 000a1478 0840
.org 0xa147a
	movs r2, #0	@ 000a147a 0022
.org 0xa147c
	movs r1, #253	@ 000a147c fd21
.org 0xa147e
	ands r0, r1	@ 000a147e 0840
.org 0xa1480
	strb r0, [r4, #10]	@ 000a1480 a072
.org 0xa1482
	adds r0, r4, #0	@ 000a1482 201c
.org 0xa1484
	adds r0, #140	@ 000a1484 8c30
.org 0xa1486
	str r2, [r0, #0]	@ 000a1486 0260
.org 0xa1488
	adds r0, #4	@ 000a1488 0430
.org 0xa148a
	str r2, [r0, #0]	@ 000a148a 0260
.org 0xa148c
	adds r0, #4	@ 000a148c 0430
.org 0xa148e
	strb r2, [r0, #0]	@ 000a148e 0270
.org 0xa1490
	ldrb r1, [r4, #10]	@ 000a1490 a17a
.org 0xa1492
	movs r0, #251	@ 000a1492 fb20
.org 0xa1494
	ands r0, r1	@ 000a1494 0840
.org 0xa1496
	strb r0, [r4, #10]	@ 000a1496 a072
.org 0xa1498
	ldr r1, [pc, #24]	@ 000a1498 0649
.org 0xa149a
	ldrb r0, [r4, #9]	@ 000a149a 607a
.org 0xa149c
	lsls r0, r0, #2	@ 000a149c 8000
.org 0xa149e
	adds r0, r0, r1	@ 000a149e 4018
.org 0xa14a0
	movs r1, #3	@ 000a14a0 0321
.org 0xa14a2
	str r1, [r4, #12]	@ 000a14a2 e160
.org 0xa14a4
	ldr r0, [r0, #0]	@ 000a14a4 0068
.org 0xa14a6
	ldr r0, [r0, #12]	@ 000a14a6 c068
.org 0xa14a8
	str r0, [r4, #20]	@ 000a14a8 6061
.org 0xa14aa
	b.n 0xa14d6	@ 000a14aa 14e0
.org 0xa14ac
	.byte 0x0c,0x9d,0x12,0x08	@ 000a14ac data
.org 0xa14b0
	.byte 0xd8,0x1a,0x86,0x08	@ 000a14b0 data
.org 0xa14b4
	.byte 0x40,0xdb,0x85,0x08	@ 000a14b4 data
.org 0xa14b8
	adds r0, r4, #0	@ 000a14b8 201c
.org 0xa14ba
	bl 0x1cff0	@ 000a14ba 7bf799fd
.org 0xa14be
	ldr r0, [r4, #44]	@ 000a14be e06a
.org 0xa14c0
	cmp r0, #0	@ 000a14c0 0028
.org 0xa14c2
	bne.n 0xa14d6	@ 000a14c2 08d1
.org 0xa14c4
	ldr r0, [r4, #100]	@ 000a14c4 606e
.org 0xa14c6
	subs r1, r0, #1	@ 000a14c6 411e
.org 0xa14c8
	str r1, [r4, #100]	@ 000a14c8 6166
.org 0xa14ca
	cmp r1, #0	@ 000a14ca 0029
.org 0xa14cc
	bne.n 0xa14d6	@ 000a14cc 03d1
.org 0xa14ce
	movs r0, #1	@ 000a14ce 0120
.org 0xa14d0
	strb r0, [r4, #13]	@ 000a14d0 6073
