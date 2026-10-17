@ FUN_080e1508  entry 0x080e1508  size 78
.thumb
.org 0xe1508
FUN_080e1508:
	push {r4, r5, r6, lr}	@ 000e1508 70b5
.org 0xe150a
	adds r6, r0, #0	@ 000e150a 061c
.org 0xe150c
	lsls r1, r1, #24	@ 000e150c 0906
.org 0xe150e
	lsrs r5, r1, #24	@ 000e150e 0d0e
.org 0xe1510
	lsls r2, r2, #24	@ 000e1510 1206
.org 0xe1512
	lsrs r4, r2, #24	@ 000e1512 140e
.org 0xe1514
	ldr r0, [pc, #64]	@ 000e1514 1048
.org 0xe1516
	ldr r0, [r0, #0]	@ 000e1516 0068
.org 0xe1518
	bl 0x5500	@ 000e1518 23f7f2ff
.org 0xe151c
	adds r3, r0, #0	@ 000e151c 031c
.org 0xe151e
	cmp r3, #0	@ 000e151e 002b
.org 0xe1520
	beq.n 0xe1550	@ 000e1520 16d0
.org 0xe1522
	adds r1, r3, #0	@ 000e1522 191c
.org 0xe1524
	adds r1, #37	@ 000e1524 2531
.org 0xe1526
	movs r2, #0	@ 000e1526 0022
.org 0xe1528
	movs r0, #1	@ 000e1528 0120
.org 0xe152a
	strb r0, [r1, #0]	@ 000e152a 0870
.org 0xe152c
	ldr r0, [pc, #44]	@ 000e152c 0b48
.org 0xe152e
	movs r1, #61	@ 000e152e 3d21
.org 0xe1530
	strb r1, [r3, #9]	@ 000e1530 5972
.org 0xe1532
	adds r0, #244	@ 000e1532 f430
.org 0xe1534
	ldr r0, [r0, #0]	@ 000e1534 0068
.org 0xe1536
	ldr r0, [r0, #0]	@ 000e1536 0068
.org 0xe1538
	str r0, [r3, #20]	@ 000e1538 5861
.org 0xe153a
	movs r0, #0	@ 000e153a 0020
.org 0xe153c
	strh r2, [r3, #32]	@ 000e153c 1a84
.org 0xe153e
	adds r1, r3, #0	@ 000e153e 191c
.org 0xe1540
	adds r1, #34	@ 000e1540 2231
.org 0xe1542
	strb r0, [r1, #0]	@ 000e1542 0870
.org 0xe1544
	ldr r0, [r6, #0]	@ 000e1544 3068
.org 0xe1546
	ldr r1, [r6, #4]	@ 000e1546 7168
.org 0xe1548
	str r0, [r3, #84]	@ 000e1548 5865
.org 0xe154a
	str r1, [r3, #88]	@ 000e154a 9965
.org 0xe154c
	strb r5, [r3, #16]	@ 000e154c 1d74
.org 0xe154e
	strb r4, [r3, #17]	@ 000e154e 5c74
.org 0xe1550
	pop {r4, r5, r6}	@ 000e1550 70bc
.org 0xe1552
	pop {r0}	@ 000e1552 01bc
.org 0xe1554
	bx r0	@ 000e1554 0047
