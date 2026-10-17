@ FUN_080a14e0  entry 0x080a14e0  size 74
.thumb
.org 0xa14e0
FUN_080a14e0:
	push {r4, lr}	@ 000a14e0 10b5
.org 0xa14e2
	adds r4, r0, #0	@ 000a14e2 041c
.org 0xa14e4
	ldrb r0, [r4, #15]	@ 000a14e4 e07b
.org 0xa14e6
	cmp r0, #0	@ 000a14e6 0028
.org 0xa14e8
	bne.n 0xa150a	@ 000a14e8 0fd1
.org 0xa14ea
	adds r1, r4, #0	@ 000a14ea 211c
.org 0xa14ec
	adds r1, #37	@ 000a14ec 2531
.org 0xa14ee
	movs r0, #24	@ 000a14ee 1820
.org 0xa14f0
	strb r0, [r1, #0]	@ 000a14f0 0870
.org 0xa14f2
	adds r0, r4, #0	@ 000a14f2 201c
.org 0xa14f4
	adds r0, #116	@ 000a14f4 7430
.org 0xa14f6
	ldr r1, [pc, #52]	@ 000a14f6 0d49
.org 0xa14f8
	bl 0x5784	@ 000a14f8 64f744f9
.org 0xa14fc
	ldr r1, [pc, #48]	@ 000a14fc 0c49
.org 0xa14fe
	adds r0, r4, #0	@ 000a14fe 201c
.org 0xa1500
	bl 0x1cf00	@ 000a1500 7bf7fefc
.org 0xa1504
	ldrb r0, [r4, #15]	@ 000a1504 e07b
.org 0xa1506
	adds r0, #1	@ 000a1506 0130
.org 0xa1508
	strb r0, [r4, #15]	@ 000a1508 e073
.org 0xa150a
	adds r0, r4, #0	@ 000a150a 201c
.org 0xa150c
	bl 0x1cff0	@ 000a150c 7bf770fd
.org 0xa1510
	adds r0, r4, #0	@ 000a1510 201c
.org 0xa1512
	adds r0, #115	@ 000a1512 7330
.org 0xa1514
	ldrb r0, [r0, #0]	@ 000a1514 0078
.org 0xa1516
	cmp r0, #4	@ 000a1516 0428
.org 0xa1518
	bne.n 0xa1524	@ 000a1518 04d1
.org 0xa151a
	movs r1, #0	@ 000a151a 0021
.org 0xa151c
	movs r0, #2	@ 000a151c 0220
.org 0xa151e
	strb r0, [r4, #13]	@ 000a151e 6073
.org 0xa1520
	strb r1, [r4, #14]	@ 000a1520 a173
.org 0xa1522
	strb r1, [r4, #15]	@ 000a1522 e173
.org 0xa1524
	pop {r4}	@ 000a1524 10bc
.org 0xa1526
	pop {r0}	@ 000a1526 01bc
.org 0xa1528
	bx r0	@ 000a1528 0047
