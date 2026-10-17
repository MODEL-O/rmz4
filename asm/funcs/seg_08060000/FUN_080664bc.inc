@ FUN_080664bc  entry 0x080664bc  size 198
.thumb
.org 0x664bc
FUN_080664bc:
	push {r4, r5, r6, r7, lr}	@ 000664bc f0b5
.org 0x664be
	mov r7, sl	@ 000664be 5746
.org 0x664c0
	mov r6, r9	@ 000664c0 4e46
.org 0x664c2
	mov r5, r8	@ 000664c2 4546
.org 0x664c4
	push {r5, r6, r7}	@ 000664c4 e0b4
.org 0x664c6
	sub sp, #28	@ 000664c6 87b0
.org 0x664c8
	str r0, [sp, #24]	@ 000664c8 0690
.org 0x664ca
	lsls r1, r1, #24	@ 000664ca 0906
.org 0x664cc
	lsls r2, r2, #24	@ 000664cc 1206
.org 0x664ce
	mov r3, sp	@ 000664ce 6b46
.org 0x664d0
	ldr r0, [pc, #176]	@ 000664d0 2c48
.org 0x664d2
	ldmia r0!, {r4, r5, r6}	@ 000664d2 70c8
.org 0x664d4
	stmia r3!, {r4, r5, r6}	@ 000664d4 70c3
.org 0x664d6
	add r4, sp, #12	@ 000664d6 03ac
.org 0x664d8
	adds r3, r4, #0	@ 000664d8 231c
.org 0x664da
	ldr r0, [pc, #172]	@ 000664da 2b48
.org 0x664dc
	ldmia r0!, {r5, r6, r7}	@ 000664dc e0c8
.org 0x664de
	stmia r3!, {r5, r6, r7}	@ 000664de e0c3
.org 0x664e0
	lsrs r1, r1, #22	@ 000664e0 890d
.org 0x664e2
	mov r7, sp	@ 000664e2 6f46
.org 0x664e4
	adds r0, r7, r1	@ 000664e4 7818
.org 0x664e6
	ldr r0, [r0, #0]	@ 000664e6 0068
.org 0x664e8
	mov r9, r0	@ 000664e8 8146
.org 0x664ea
	lsrs r2, r2, #22	@ 000664ea 920d
.org 0x664ec
	adds r4, r4, r2	@ 000664ec a418
.org 0x664ee
	ldr r2, [pc, #156]	@ 000664ee 274a
.org 0x664f0
	ldr r0, [r2, #0]	@ 000664f0 1068
.org 0x664f2
	ldr r5, [pc, #156]	@ 000664f2 274d
.org 0x664f4
	muls r0, r5	@ 000664f4 6843
.org 0x664f6
	ldr r3, [pc, #156]	@ 000664f6 274b
.org 0x664f8
	adds r0, r0, r3	@ 000664f8 c018
.org 0x664fa
	lsls r0, r0, #1	@ 000664fa 4000
.org 0x664fc
	lsrs r1, r0, #1	@ 000664fc 4108
.org 0x664fe
	str r1, [r2, #0]	@ 000664fe 1160
.org 0x66500
	lsrs r0, r0, #17	@ 00066500 400c
.org 0x66502
	movs r1, #1	@ 00066502 0121
.org 0x66504
	ands r0, r1	@ 00066504 0840
.org 0x66506
	ldr r1, [r4, #0]	@ 00066506 2168
.org 0x66508
	subs r0, r1, r0	@ 00066508 081a
.org 0x6650a
	cmp r0, #0	@ 0006650a 0028
.org 0x6650c
	ble.n 0x66572	@ 0006650c 31dd
.org 0x6650e
	mov r4, r9	@ 0006650e 4c46
.org 0x66510
	negs r1, r4	@ 00066510 6142
.org 0x66512
	mov sl, r2	@ 00066512 9246
.org 0x66514
	adds r7, r0, #0	@ 00066514 071c
.org 0x66516
	lsrs r0, r1, #31	@ 00066516 c80f
.org 0x66518
	adds r1, r1, r0	@ 00066518 0918
.org 0x6651a
	asrs r1, r1, #1	@ 0006651a 4910
.org 0x6651c
	mov r8, r1	@ 0006651c 8846
.org 0x6651e
	ldr r6, [sp, #24]	@ 0006651e 069e
.org 0x66520
	ldr r5, [r6, #0]	@ 00066520 3568
.org 0x66522
	add r5, r8	@ 00066522 4544
.org 0x66524
	mov r1, sl	@ 00066524 5146
.org 0x66526
	ldr r0, [r1, #0]	@ 00066526 0868
.org 0x66528
	ldr r2, [pc, #100]	@ 00066528 194a
.org 0x6652a
	muls r0, r2	@ 0006652a 5043
.org 0x6652c
	ldr r3, [pc, #100]	@ 0006652c 194b
.org 0x6652e
	adds r0, r0, r3	@ 0006652e c018
.org 0x66530
	lsls r0, r0, #1	@ 00066530 4000
.org 0x66532
	lsrs r6, r0, #1	@ 00066532 4608
.org 0x66534
	str r6, [r1, #0]	@ 00066534 0e60
.org 0x66536
	lsrs r0, r0, #17	@ 00066536 400c
.org 0x66538
	mov r1, r9	@ 00066538 4946
.org 0x6653a
	bl 0x129198	@ 0006653a c2f02dfe
.org 0x6653e
	adds r5, r5, r0	@ 0006653e 2d18
.org 0x66540
	ldr r0, [sp, #24]	@ 00066540 0698
.org 0x66542
	ldr r4, [r0, #4]	@ 00066542 4468
.org 0x66544
	add r4, r8	@ 00066544 4444
.org 0x66546
	ldr r1, [pc, #72]	@ 00066546 1249
.org 0x66548
	adds r0, r6, #0	@ 00066548 301c
.org 0x6654a
	muls r0, r1	@ 0006654a 4843
.org 0x6654c
	ldr r2, [pc, #68]	@ 0006654c 114a
.org 0x6654e
	adds r0, r0, r2	@ 0006654e 8018
.org 0x66550
	lsls r0, r0, #1	@ 00066550 4000
.org 0x66552
	lsrs r1, r0, #1	@ 00066552 4108
.org 0x66554
	mov r3, sl	@ 00066554 5346
.org 0x66556
	str r1, [r3, #0]	@ 00066556 1960
.org 0x66558
	lsrs r0, r0, #17	@ 00066558 400c
.org 0x6655a
	mov r1, r9	@ 0006655a 4946
.org 0x6655c
	bl 0x129198	@ 0006655c c2f01cfe
.org 0x66560
	adds r4, r4, r0	@ 00066560 2418
.org 0x66562
	adds r0, r5, #0	@ 00066562 281c
.org 0x66564
	adds r1, r4, #0	@ 00066564 211c
.org 0x66566
	movs r2, #0	@ 00066566 0022
.org 0x66568
	bl 0xd0ff4	@ 00066568 6af044fd
.org 0x6656c
	subs r7, #1	@ 0006656c 013f
.org 0x6656e
	cmp r7, #0	@ 0006656e 002f
.org 0x66570
	bne.n 0x6651e	@ 00066570 d5d1
.org 0x66572
	add sp, #28	@ 00066572 07b0
.org 0x66574
	pop {r3, r4, r5}	@ 00066574 38bc
.org 0x66576
	mov r8, r3	@ 00066576 9846
.org 0x66578
	mov r9, r4	@ 00066578 a146
.org 0x6657a
	mov sl, r5	@ 0006657a aa46
.org 0x6657c
	pop {r4, r5, r6, r7}	@ 0006657c f0bc
.org 0x6657e
	pop {r0}	@ 0006657e 01bc
.org 0x66580
	bx r0	@ 00066580 0047
