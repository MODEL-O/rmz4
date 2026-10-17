@ FUN_080824d4  entry 0x080824d4  size 86
.thumb
.org 0x824d4
FUN_080824d4:
	push {r4, r5, r6, lr}	@ 000824d4 70b5
.org 0x824d6
	adds r4, r0, #0	@ 000824d6 041c
.org 0x824d8
	ldr r5, [r4, #44]	@ 000824d8 e56a
.org 0x824da
	adds r2, r5, #0	@ 000824da 2a1c
.org 0x824dc
	adds r2, #180	@ 000824dc b432
.org 0x824de
	ldr r6, [pc, #76]	@ 000824de 134e
.org 0x824e0
	ldr r0, [r6, #0]	@ 000824e0 3068
.org 0x824e2
	ldr r0, [r0, #84]	@ 000824e2 406d
.org 0x824e4
	ldr r1, [r5, #84]	@ 000824e4 696d
.org 0x824e6
	subs r0, r0, r1	@ 000824e6 401a
.org 0x824e8
	str r0, [r2, #0]	@ 000824e8 1060
.org 0x824ea
	ldr r0, [r4, #20]	@ 000824ea 6069
.org 0x824ec
	movs r1, #1	@ 000824ec 0121
.org 0x824ee
	ands r0, r1	@ 000824ee 0840
.org 0x824f0
	cmp r0, #0	@ 000824f0 0028
.org 0x824f2
	beq.n 0x82524	@ 000824f2 17d0
.org 0x824f4
	movs r0, #11	@ 000824f4 0b20
.org 0x824f6
	bl 0x6984	@ 000824f6 84f745fa
.org 0x824fa
	ldr r1, [r4, #20]	@ 000824fa 6169
.org 0x824fc
	movs r0, #128	@ 000824fc 8020
.org 0x824fe
	lsls r0, r0, #2	@ 000824fe 8000
.org 0x82500
	ands r0, r1	@ 00082500 0840
.org 0x82502
	cmp r0, #0	@ 00082502 0028
.org 0x82504
	beq.n 0x82524	@ 00082504 0ed0
.org 0x82506
	movs r0, #128	@ 00082506 8020
.org 0x82508
	lsls r0, r0, #10	@ 00082508 8002
.org 0x8250a
	ands r1, r0	@ 0008250a 0140
.org 0x8250c
	cmp r1, #0	@ 0008250c 0029
.org 0x8250e
	beq.n 0x82524	@ 0008250e 09d0
.org 0x82510
	ldr r0, [r6, #0]	@ 00082510 3068
.org 0x82512
	cmp r0, #0	@ 00082512 0028
.org 0x82514
	beq.n 0x82524	@ 00082514 06d0
.org 0x82516
	movs r1, #3	@ 00082516 0321
.org 0x82518
	movs r2, #1	@ 00082518 0122
.org 0x8251a
	bl 0x3a578	@ 0008251a b8f72df8
.org 0x8251e
	adds r1, r5, #0	@ 0008251e 291c
.org 0x82520
	adds r1, #188	@ 00082520 bc31
.org 0x82522
	strb r0, [r1, #0]	@ 00082522 0870
.org 0x82524
	pop {r4, r5, r6}	@ 00082524 70bc
.org 0x82526
	pop {r0}	@ 00082526 01bc
.org 0x82528
	bx r0	@ 00082528 0047
