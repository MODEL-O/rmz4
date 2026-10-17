@ FUN_080d1450  entry 0x080d1450  size 112
.thumb
.org 0xd1450
FUN_080d1450:
	push {r4, lr}	@ 000d1450 10b5
.org 0xd1452
	adds r4, r0, #0	@ 000d1452 041c
.org 0xd1454
	bl 0x1cff0	@ 000d1454 4bf7ccfd
.org 0xd1458
	ldrb r0, [r4, #18]	@ 000d1458 a07c
.org 0xd145a
	adds r0, #8	@ 000d145a 0830
.org 0xd145c
	strb r0, [r4, #18]	@ 000d145c a074
.org 0xd145e
	ldr r0, [r4, #96]	@ 000d145e 206e
.org 0xd1460
	subs r0, #96	@ 000d1460 6038
.org 0xd1462
	str r0, [r4, #96]	@ 000d1462 2066
.org 0xd1464
	ldr r1, [pc, #88]	@ 000d1464 1649
.org 0xd1466
	cmp r0, r1	@ 000d1466 8842
.org 0xd1468
	bge.n 0xd146c	@ 000d1468 00da
.org 0xd146a
	str r1, [r4, #96]	@ 000d146a 2166
.org 0xd146c
	ldr r0, [r4, #88]	@ 000d146c a06d
.org 0xd146e
	ldr r1, [r4, #96]	@ 000d146e 216e
.org 0xd1470
	adds r0, r0, r1	@ 000d1470 4018
.org 0xd1472
	str r0, [r4, #88]	@ 000d1472 a065
.org 0xd1474
	ldr r1, [pc, #76]	@ 000d1474 1349
.org 0xd1476
	ldrb r0, [r4, #18]	@ 000d1476 a07c
.org 0xd1478
	lsls r0, r0, #1	@ 000d1478 4000
.org 0xd147a
	adds r0, r0, r1	@ 000d147a 4018
.org 0xd147c
	ldrh r0, [r0, #0]	@ 000d147c 0088
.org 0xd147e
	lsls r0, r0, #16	@ 000d147e 0004
.org 0xd1480
	asrs r0, r0, #18	@ 000d1480 8014
.org 0xd1482
	ldr r1, [r4, #92]	@ 000d1482 e16d
.org 0xd1484
	adds r1, r1, r0	@ 000d1484 0918
.org 0xd1486
	ldr r0, [r4, #84]	@ 000d1486 606d
.org 0xd1488
	adds r0, r0, r1	@ 000d1488 4018
.org 0xd148a
	str r0, [r4, #84]	@ 000d148a 6065
.org 0xd148c
	ldr r0, [pc, #56]	@ 000d148c 0e48
.org 0xd148e
	adds r1, r4, #0	@ 000d148e 211c
.org 0xd1490
	adds r1, #84	@ 000d1490 5431
.org 0xd1492
	bl 0x1fb14	@ 000d1492 4ef73ffb
.org 0xd1496
	cmp r0, #0	@ 000d1496 0028
.org 0xd1498
	bne.n 0xd14a8	@ 000d1498 06d1
.org 0xd149a
	ldr r0, [r4, #96]	@ 000d149a 206e
.org 0xd149c
	lsls r0, r0, #1	@ 000d149c 4000
.org 0xd149e
	ldr r1, [r4, #88]	@ 000d149e a16d
.org 0xd14a0
	subs r1, r1, r0	@ 000d14a0 091a
.org 0xd14a2
	ldr r0, [r4, #124]	@ 000d14a2 e06f
.org 0xd14a4
	cmp r0, r1	@ 000d14a4 8842
.org 0xd14a6
	ble.n 0xd14ba	@ 000d14a6 08dd
.org 0xd14a8
	ldr r1, [pc, #32]	@ 000d14a8 0849
.org 0xd14aa
	ldrb r0, [r4, #9]	@ 000d14aa 607a
.org 0xd14ac
	lsls r0, r0, #2	@ 000d14ac 8000
.org 0xd14ae
	adds r0, r0, r1	@ 000d14ae 4018
.org 0xd14b0
	movs r1, #2	@ 000d14b0 0221
.org 0xd14b2
	str r1, [r4, #12]	@ 000d14b2 e160
.org 0xd14b4
	ldr r0, [r0, #0]	@ 000d14b4 0068
.org 0xd14b6
	ldr r0, [r0, #8]	@ 000d14b6 8068
.org 0xd14b8
	str r0, [r4, #20]	@ 000d14b8 6061
.org 0xd14ba
	pop {r4}	@ 000d14ba 10bc
.org 0xd14bc
	pop {r0}	@ 000d14bc 01bc
.org 0xd14be
	bx r0	@ 000d14be 0047
