@ FUN_080d14d0  entry 0x080d14d0  size 118
.thumb
.org 0xd14d0
FUN_080d14d0:
	push {r4, lr}	@ 000d14d0 10b5
.org 0xd14d2
	adds r4, r0, #0	@ 000d14d2 041c
.org 0xd14d4
	bl 0x1cff0	@ 000d14d4 4bf78cfd
.org 0xd14d8
	ldrb r0, [r4, #18]	@ 000d14d8 a07c
.org 0xd14da
	adds r0, #1	@ 000d14da 0130
.org 0xd14dc
	strb r0, [r4, #18]	@ 000d14dc a074
.org 0xd14de
	ldr r0, [r4, #92]	@ 000d14de e06d
.org 0xd14e0
	adds r0, #8	@ 000d14e0 0830
.org 0xd14e2
	str r0, [r4, #92]	@ 000d14e2 e065
.org 0xd14e4
	ldr r0, [r4, #96]	@ 000d14e4 206e
.org 0xd14e6
	subs r0, #96	@ 000d14e6 6038
.org 0xd14e8
	str r0, [r4, #96]	@ 000d14e8 2066
.org 0xd14ea
	ldr r1, [pc, #92]	@ 000d14ea 1749
.org 0xd14ec
	cmp r0, r1	@ 000d14ec 8842
.org 0xd14ee
	bge.n 0xd14f2	@ 000d14ee 00da
.org 0xd14f0
	str r1, [r4, #96]	@ 000d14f0 2166
.org 0xd14f2
	ldr r0, [r4, #88]	@ 000d14f2 a06d
.org 0xd14f4
	ldr r1, [r4, #96]	@ 000d14f4 216e
.org 0xd14f6
	adds r0, r0, r1	@ 000d14f6 4018
.org 0xd14f8
	str r0, [r4, #88]	@ 000d14f8 a065
.org 0xd14fa
	ldr r1, [pc, #80]	@ 000d14fa 1449
.org 0xd14fc
	ldrb r0, [r4, #18]	@ 000d14fc a07c
.org 0xd14fe
	lsls r0, r0, #1	@ 000d14fe 4000
.org 0xd1500
	adds r0, r0, r1	@ 000d1500 4018
.org 0xd1502
	movs r2, #0	@ 000d1502 0022
.org 0xd1504
	ldrsh r1, [r0, r2]	@ 000d1504 815e
.org 0xd1506
	ldr r0, [r4, #92]	@ 000d1506 e06d
.org 0xd1508
	asrs r0, r0, #8	@ 000d1508 0012
.org 0xd150a
	muls r1, r0	@ 000d150a 4143
.org 0xd150c
	ldr r0, [r4, #116]	@ 000d150c 606f
.org 0xd150e
	adds r0, r0, r1	@ 000d150e 4018
.org 0xd1510
	str r0, [r4, #84]	@ 000d1510 6065
.org 0xd1512
	ldr r0, [pc, #60]	@ 000d1512 0f48
.org 0xd1514
	adds r1, r4, #0	@ 000d1514 211c
.org 0xd1516
	adds r1, #84	@ 000d1516 5431
.org 0xd1518
	bl 0x1fb14	@ 000d1518 4ef7fcfa
.org 0xd151c
	cmp r0, #0	@ 000d151c 0028
.org 0xd151e
	bne.n 0xd152e	@ 000d151e 06d1
.org 0xd1520
	ldr r0, [r4, #96]	@ 000d1520 206e
.org 0xd1522
	lsls r0, r0, #1	@ 000d1522 4000
.org 0xd1524
	ldr r1, [r4, #88]	@ 000d1524 a16d
.org 0xd1526
	subs r1, r1, r0	@ 000d1526 091a
.org 0xd1528
	ldr r0, [r4, #124]	@ 000d1528 e06f
.org 0xd152a
	cmp r0, r1	@ 000d152a 8842
.org 0xd152c
	ble.n 0xd1540	@ 000d152c 08dd
.org 0xd152e
	ldr r1, [pc, #36]	@ 000d152e 0949
.org 0xd1530
	ldrb r0, [r4, #9]	@ 000d1530 607a
.org 0xd1532
	lsls r0, r0, #2	@ 000d1532 8000
.org 0xd1534
	adds r0, r0, r1	@ 000d1534 4018
.org 0xd1536
	movs r1, #2	@ 000d1536 0221
.org 0xd1538
	str r1, [r4, #12]	@ 000d1538 e160
.org 0xd153a
	ldr r0, [r0, #0]	@ 000d153a 0068
.org 0xd153c
	ldr r0, [r0, #8]	@ 000d153c 8068
.org 0xd153e
	str r0, [r4, #20]	@ 000d153e 6061
.org 0xd1540
	pop {r4}	@ 000d1540 10bc
.org 0xd1542
	pop {r0}	@ 000d1542 01bc
.org 0xd1544
	bx r0	@ 000d1544 0047
