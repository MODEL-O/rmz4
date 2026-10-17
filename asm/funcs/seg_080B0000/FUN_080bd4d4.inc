@ FUN_080bd4d4  entry 0x080bd4d4  size 140
.thumb
.org 0xbd4d4
FUN_080bd4d4:
	push {r4, r5, r6, lr}	@ 000bd4d4 70b5
.org 0xbd4d6
	adds r6, r0, #0	@ 000bd4d6 061c
.org 0xbd4d8
	adds r5, r1, #0	@ 000bd4d8 0d1c
.org 0xbd4da
	lsls r2, r2, #24	@ 000bd4da 1206
.org 0xbd4dc
	lsrs r4, r2, #24	@ 000bd4dc 140e
.org 0xbd4de
	ldr r0, [pc, #128]	@ 000bd4de 2048
.org 0xbd4e0
	ldr r0, [r0, #0]	@ 000bd4e0 0068
.org 0xbd4e2
	bl 0x5500	@ 000bd4e2 48f70df8
.org 0xbd4e6
	adds r3, r0, #0	@ 000bd4e6 031c
.org 0xbd4e8
	cmp r3, #0	@ 000bd4e8 002b
.org 0xbd4ea
	beq.n 0xbd558	@ 000bd4ea 35d0
.org 0xbd4ec
	adds r2, r3, #0	@ 000bd4ec 1a1c
.org 0xbd4ee
	adds r2, #37	@ 000bd4ee 2532
.org 0xbd4f0
	movs r1, #0	@ 000bd4f0 0021
.org 0xbd4f2
	movs r0, #8	@ 000bd4f2 0820
.org 0xbd4f4
	strb r0, [r2, #0]	@ 000bd4f4 1070
.org 0xbd4f6
	ldr r0, [pc, #108]	@ 000bd4f6 1b48
.org 0xbd4f8
	strb r1, [r3, #9]	@ 000bd4f8 5972
.org 0xbd4fa
	ldr r0, [r0, #0]	@ 000bd4fa 0068
.org 0xbd4fc
	ldr r0, [r0, #0]	@ 000bd4fc 0068
.org 0xbd4fe
	str r0, [r3, #20]	@ 000bd4fe 5861
.org 0xbd500
	movs r0, #0	@ 000bd500 0020
.org 0xbd502
	strh r1, [r3, #32]	@ 000bd502 1984
.org 0xbd504
	adds r1, r3, #0	@ 000bd504 191c
.org 0xbd506
	adds r1, #34	@ 000bd506 2231
.org 0xbd508
	strb r0, [r1, #0]	@ 000bd508 0870
.org 0xbd50a
	ldr r0, [r6, #0]	@ 000bd50a 3068
.org 0xbd50c
	str r0, [r3, #84]	@ 000bd50c 5865
.org 0xbd50e
	ldr r0, [r6, #4]	@ 000bd50e 7068
.org 0xbd510
	str r0, [r3, #88]	@ 000bd510 9865
.org 0xbd512
	adds r0, r4, #0	@ 000bd512 201c
.org 0xbd514
	adds r0, #128	@ 000bd514 8030
.org 0xbd516
	lsls r0, r0, #24	@ 000bd516 0006
.org 0xbd518
	lsrs r0, r0, #24	@ 000bd518 000e
.org 0xbd51a
	adds r4, r0, #0	@ 000bd51a 041c
.org 0xbd51c
	adds r0, r3, #0	@ 000bd51c 181c
.org 0xbd51e
	adds r0, #180	@ 000bd51e b430
.org 0xbd520
	str r5, [r0, #0]	@ 000bd520 0560
.org 0xbd522
	ldr r2, [pc, #68]	@ 000bd522 114a
.org 0xbd524
	adds r0, r4, #0	@ 000bd524 201c
.org 0xbd526
	adds r0, #64	@ 000bd526 4030
.org 0xbd528
	lsls r0, r0, #24	@ 000bd528 0006
.org 0xbd52a
	lsrs r0, r0, #23	@ 000bd52a c00d
.org 0xbd52c
	adds r0, r0, r2	@ 000bd52c 8018
.org 0xbd52e
	movs r1, #0	@ 000bd52e 0021
.org 0xbd530
	ldrsh r0, [r0, r1]	@ 000bd530 405e
.org 0xbd532
	muls r0, r5	@ 000bd532 6843
.org 0xbd534
	cmp r0, #0	@ 000bd534 0028
.org 0xbd536
	bge.n 0xbd53a	@ 000bd536 00da
.org 0xbd538
	adds r0, #255	@ 000bd538 ff30
.org 0xbd53a
	asrs r0, r0, #8	@ 000bd53a 0012
.org 0xbd53c
	str r0, [r3, #92]	@ 000bd53c d865
.org 0xbd53e
	lsls r0, r4, #1	@ 000bd53e 6000
.org 0xbd540
	adds r0, r0, r2	@ 000bd540 8018
.org 0xbd542
	movs r1, #0	@ 000bd542 0021
.org 0xbd544
	ldrsh r0, [r0, r1]	@ 000bd544 405e
.org 0xbd546
	muls r0, r5	@ 000bd546 6843
.org 0xbd548
	cmp r0, #0	@ 000bd548 0028
.org 0xbd54a
	bge.n 0xbd54e	@ 000bd54a 00da
.org 0xbd54c
	adds r0, #255	@ 000bd54c ff30
.org 0xbd54e
	asrs r0, r0, #8	@ 000bd54e 0012
.org 0xbd550
	str r0, [r3, #96]	@ 000bd550 1866
.org 0xbd552
	movs r0, #1	@ 000bd552 0120
.org 0xbd554
	strb r0, [r3, #16]	@ 000bd554 1874
.org 0xbd556
	strb r0, [r3, #17]	@ 000bd556 5874
.org 0xbd558
	adds r0, r3, #0	@ 000bd558 181c
.org 0xbd55a
	pop {r4, r5, r6}	@ 000bd55a 70bc
.org 0xbd55c
	pop {r1}	@ 000bd55c 02bc
.org 0xbd55e
	bx r1	@ 000bd55e 0847
