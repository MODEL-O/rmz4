@ FUN_080c1448  entry 0x080c1448  size 170
.thumb
.org 0xc1448
FUN_080c1448:
	push {r4, r5, r6, r7, lr}	@ 000c1448 f0b5
.org 0xc144a
	adds r6, r0, #0	@ 000c144a 061c
.org 0xc144c
	ldrb r7, [r6, #16]	@ 000c144c 377c
.org 0xc144e
	ldrb r4, [r6, #17]	@ 000c144e 747c
.org 0xc1450
	ldr r1, [pc, #60]	@ 000c1450 0f49
.org 0xc1452
	ldrb r0, [r6, #9]	@ 000c1452 707a
.org 0xc1454
	lsls r0, r0, #2	@ 000c1454 8000
.org 0xc1456
	adds r0, r0, r1	@ 000c1456 4018
.org 0xc1458
	movs r1, #1	@ 000c1458 0121
.org 0xc145a
	str r1, [r6, #12]	@ 000c145a f160
.org 0xc145c
	ldr r0, [r0, #0]	@ 000c145c 0068
.org 0xc145e
	ldr r0, [r0, #4]	@ 000c145e 4068
.org 0xc1460
	str r0, [r6, #20]	@ 000c1460 7061
.org 0xc1462
	movs r2, #0	@ 000c1462 0022
.org 0xc1464
	strb r2, [r6, #13]	@ 000c1464 7273
.org 0xc1466
	strb r2, [r6, #14]	@ 000c1466 b273
.org 0xc1468
	strb r2, [r6, #15]	@ 000c1468 f273
.org 0xc146a
	ldrb r0, [r6, #10]	@ 000c146a b07a
.org 0xc146c
	movs r5, #0	@ 000c146c 0025
.org 0xc146e
	orrs r0, r1	@ 000c146e 0843
.org 0xc1470
	movs r1, #2	@ 000c1470 0221
.org 0xc1472
	orrs r0, r1	@ 000c1472 0843
.org 0xc1474
	strb r0, [r6, #10]	@ 000c1474 b072
.org 0xc1476
	adds r0, r6, #0	@ 000c1476 301c
.org 0xc1478
	adds r0, #180	@ 000c1478 b430
.org 0xc147a
	strb r2, [r0, #0]	@ 000c147a 0270
.org 0xc147c
	adds r0, r6, #0	@ 000c147c 301c
.org 0xc147e
	bl 0x1cc9c	@ 000c147e 5bf70dfc
.org 0xc1482
	cmp r4, #0	@ 000c1482 002c
.org 0xc1484
	beq.n 0xc1494	@ 000c1484 06d0
.org 0xc1486
	ldrb r0, [r6, #10]	@ 000c1486 b07a
.org 0xc1488
	movs r1, #16	@ 000c1488 1021
.org 0xc148a
	orrs r0, r1	@ 000c148a 0843
.org 0xc148c
	b.n 0xc149a	@ 000c148c 05e0
.org 0xc148e
	.byte 0x00	@ 000c148e data
.org 0xc148f
	.byte 0x00	@ 000c148f data
.org 0xc1490
	.byte 0xf4,0x49,0x86,0x08	@ 000c1490 data
.org 0xc1494
	ldrb r1, [r6, #10]	@ 000c1494 b17a
.org 0xc1496
	movs r0, #239	@ 000c1496 ef20
.org 0xc1498
	ands r0, r1	@ 000c1498 0840
.org 0xc149a
	strb r0, [r6, #10]	@ 000c149a b072
.org 0xc149c
	movs r1, #1	@ 000c149c 0121
.org 0xc149e
	ands r1, r4	@ 000c149e 2140
.org 0xc14a0
	adds r0, r6, #0	@ 000c14a0 301c
.org 0xc14a2
	adds r0, #76	@ 000c14a2 4c30
.org 0xc14a4
	movs r5, #0	@ 000c14a4 0025
.org 0xc14a6
	strb r1, [r0, #0]	@ 000c14a6 0170
.org 0xc14a8
	adds r3, r6, #0	@ 000c14a8 331c
.org 0xc14aa
	adds r3, #74	@ 000c14aa 4a33
.org 0xc14ac
	lsls r1, r1, #4	@ 000c14ac 0901
.org 0xc14ae
	ldrb r2, [r3, #0]	@ 000c14ae 1a78
.org 0xc14b0
	movs r0, #17	@ 000c14b0 1120
.org 0xc14b2
	negs r0, r0	@ 000c14b2 4042
.org 0xc14b4
	ands r0, r2	@ 000c14b4 1040
.org 0xc14b6
	orrs r0, r1	@ 000c14b6 0843
.org 0xc14b8
	strb r0, [r3, #0]	@ 000c14b8 1870
.org 0xc14ba
	ldr r1, [pc, #60]	@ 000c14ba 0f49
.org 0xc14bc
	lsls r0, r7, #2	@ 000c14bc b800
.org 0xc14be
	adds r0, r0, r1	@ 000c14be 4018
.org 0xc14c0
	ldrh r1, [r0, #0]	@ 000c14c0 0188
.org 0xc14c2
	adds r0, r6, #0	@ 000c14c2 301c
.org 0xc14c4
	bl 0x1cf00	@ 000c14c4 5bf71cfd
.org 0xc14c8
	adds r0, r6, #0	@ 000c14c8 301c
.org 0xc14ca
	bl 0x1cff0	@ 000c14ca 5bf791fd
.org 0xc14ce
	ldrb r1, [r6, #10]	@ 000c14ce b17a
.org 0xc14d0
	movs r0, #4	@ 000c14d0 0420
.org 0xc14d2
	orrs r0, r1	@ 000c14d2 0843
.org 0xc14d4
	strb r0, [r6, #10]	@ 000c14d4 b072
.org 0xc14d6
	adds r4, r6, #0	@ 000c14d6 341c
.org 0xc14d8
	adds r4, #116	@ 000c14d8 7434
.org 0xc14da
	ldr r1, [pc, #32]	@ 000c14da 0849
.org 0xc14dc
	adds r2, r6, #0	@ 000c14dc 321c
.org 0xc14de
	adds r2, #84	@ 000c14de 5432
.org 0xc14e0
	adds r0, r4, #0	@ 000c14e0 201c
.org 0xc14e2
	movs r3, #64	@ 000c14e2 4023
.org 0xc14e4
	bl 0x5760	@ 000c14e4 44f73cf9
.org 0xc14e8
	str r6, [r4, #44]	@ 000c14e8 e662
.org 0xc14ea
	str r5, [r4, #36]	@ 000c14ea 6562
.org 0xc14ec
	adds r0, r6, #0	@ 000c14ec 301c
.org 0xc14ee
	bl 0xc1500	@ 000c14ee 00f007f8
