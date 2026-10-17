@ FUN_080014b0  entry 0x080014b0  size 134
.thumb
.org 0x14b0
FUN_080014b0:
	push {r4, r5, r6, r7, lr}	@ 000014b0 f0b5
.org 0x14b2
	adds r4, r0, #0	@ 000014b2 041c
.org 0x14b4
	ldrh r2, [r4, #0]	@ 000014b4 2288
.org 0x14b6
	strh r2, [r4, #2]	@ 000014b6 6280
.org 0x14b8
	cmp r1, #0	@ 000014b8 0029
.org 0x14ba
	beq.n 0x14c2	@ 000014ba 02d0
.org 0x14bc
	movs r0, #0	@ 000014bc 0020
.org 0x14be
	strh r0, [r4, #8]	@ 000014be 2081
.org 0x14c0
	b.n 0x1536	@ 000014c0 39e0
.org 0x14c2
	movs r0, #1	@ 000014c2 0120
.org 0x14c4
	strh r0, [r4, #8]	@ 000014c4 2081
.org 0x14c6
	ldr r0, [pc, #72]	@ 000014c6 1248
.org 0x14c8
	ldrh r0, [r0, #0]	@ 000014c8 0088
.org 0x14ca
	mvns r0, r0	@ 000014ca c043
.org 0x14cc
	strh r0, [r4, #0]	@ 000014cc 2080
.org 0x14ce
	bics r0, r2	@ 000014ce 9043
.org 0x14d0
	strh r0, [r4, #4]	@ 000014d0 a080
.org 0x14d2
	strh r1, [r4, #6]	@ 000014d2 e180
.org 0x14d4
	movs r1, #0	@ 000014d4 0021
.org 0x14d6
	movs r7, #1	@ 000014d6 0127
.org 0x14d8
	adds r6, r4, #0	@ 000014d8 261c
.org 0x14da
	adds r6, #10	@ 000014da 0a36
.org 0x14dc
	ldrh r2, [r4, #0]	@ 000014dc 2288
.org 0x14de
	lsls r0, r1, #16	@ 000014de 0804
.org 0x14e0
	asrs r3, r0, #16	@ 000014e0 0314
.org 0x14e2
	asrs r2, r3	@ 000014e2 1a41
.org 0x14e4
	ands r2, r7	@ 000014e4 3a40
.org 0x14e6
	adds r5, r0, #0	@ 000014e6 051c
.org 0x14e8
	cmp r2, #0	@ 000014e8 002a
.org 0x14ea
	beq.n 0x1524	@ 000014ea 1bd0
.org 0x14ec
	adds r2, r6, r3	@ 000014ec f218
.org 0x14ee
	movs r0, #0	@ 000014ee 0020
.org 0x14f0
	ldrsb r0, [r2, r0]	@ 000014f0 1056
.org 0x14f2
	cmp r0, #0	@ 000014f2 0028
.org 0x14f4
	bne.n 0x1518	@ 000014f4 10d1
.org 0x14f6
	adds r0, r7, #0	@ 000014f6 381c
.org 0x14f8
	lsls r0, r3	@ 000014f8 9840
.org 0x14fa
	ldrh r1, [r4, #6]	@ 000014fa e188
.org 0x14fc
	orrs r0, r1	@ 000014fc 0843
.org 0x14fe
	strh r0, [r4, #6]	@ 000014fe e080
.org 0x1500
	ldrh r0, [r4, #4]	@ 00001500 a088
.org 0x1502
	asrs r0, r3	@ 00001502 1841
.org 0x1504
	ands r0, r7	@ 00001504 3840
.org 0x1506
	cmp r0, #0	@ 00001506 0028
.org 0x1508
	beq.n 0x1514	@ 00001508 04d0
.org 0x150a
	ldrb r0, [r4, #20]	@ 0000150a 207d
.org 0x150c
	b.n 0x1516	@ 0000150c 03e0
.org 0x150e
	.byte 0x00	@ 0000150e data
.org 0x150f
	.byte 0x00	@ 0000150f data
.org 0x1510
	.byte 0x30,0x01,0x00,0x04	@ 00001510 data
.org 0x1514
	ldrb r0, [r4, #21]	@ 00001514 607d
.org 0x1516
	strb r0, [r2, #0]	@ 00001516 1070
.org 0x1518
	asrs r1, r5, #16	@ 00001518 2914
.org 0x151a
	adds r1, r6, r1	@ 0000151a 7118
.org 0x151c
	ldrb r0, [r1, #0]	@ 0000151c 0878
.org 0x151e
	subs r0, #1	@ 0000151e 0138
.org 0x1520
	strb r0, [r1, #0]	@ 00001520 0870
.org 0x1522
	b.n 0x1528	@ 00001522 01e0
.org 0x1524
	adds r0, r6, r3	@ 00001524 f018
.org 0x1526
	strb r2, [r0, #0]	@ 00001526 0270
.org 0x1528
	movs r1, #128	@ 00001528 8021
.org 0x152a
	lsls r1, r1, #9	@ 0000152a 4902
.org 0x152c
	adds r0, r5, r1	@ 0000152c 6818
.org 0x152e
	lsrs r1, r0, #16	@ 0000152e 010c
.org 0x1530
	asrs r0, r0, #16	@ 00001530 0014
.org 0x1532
	cmp r0, #9	@ 00001532 0928
.org 0x1534
	ble.n 0x14dc	@ 00001534 d2dd
