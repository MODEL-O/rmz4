@ FUN_080df4d4  entry 0x080df4d4  size 196
.thumb
.org 0xdf4d4
FUN_080df4d4:
	push {r4, r5, r6, r7, lr}	@ 000df4d4 f0b5
.org 0xdf4d6
	sub sp, #12	@ 000df4d6 83b0
.org 0xdf4d8
	adds r6, r0, #0	@ 000df4d8 061c
.org 0xdf4da
	ldrb r7, [r6, #17]	@ 000df4da 777c
.org 0xdf4dc
	cmp r7, #0	@ 000df4dc 002f
.org 0xdf4de
	bne.n 0xdf528	@ 000df4de 23d1
.org 0xdf4e0
	ldr r0, [r6, #84]	@ 000df4e0 706d
.org 0xdf4e2
	str r0, [sp, #4]	@ 000df4e2 0190
.org 0xdf4e4
	ldr r0, [r6, #88]	@ 000df4e4 b06d
.org 0xdf4e6
	ldr r1, [pc, #60]	@ 000df4e6 0f49
.org 0xdf4e8
	adds r0, r0, r1	@ 000df4e8 4018
.org 0xdf4ea
	str r0, [sp, #8]	@ 000df4ea 0290
.org 0xdf4ec
	movs r0, #2	@ 000df4ec 0220
.org 0xdf4ee
	add r1, sp, #4	@ 000df4ee 01a9
.org 0xdf4f0
	bl 0xd0c88	@ 000df4f0 f1f7cafb
.org 0xdf4f4
	ldrb r1, [r6, #16]	@ 000df4f4 317c
.org 0xdf4f6
	ldrb r3, [r6, #10]	@ 000df4f6 b37a
.org 0xdf4f8
	lsrs r3, r3, #4	@ 000df4f8 1b09
.org 0xdf4fa
	movs r5, #1	@ 000df4fa 0125
.org 0xdf4fc
	ands r3, r5	@ 000df4fc 2b40
.org 0xdf4fe
	adds r4, r6, #0	@ 000df4fe 341c
.org 0xdf500
	adds r4, #116	@ 000df500 7434
.org 0xdf502
	ldrb r0, [r4, #0]	@ 000df502 2078
.org 0xdf504
	str r0, [sp, #0]	@ 000df504 0090
.org 0xdf506
	add r0, sp, #4	@ 000df506 01a8
.org 0xdf508
	movs r2, #2	@ 000df508 0222
.org 0xdf50a
	bl 0xdf2ec	@ 000df50a fff7effe
.org 0xdf50e
	ldrb r1, [r6, #16]	@ 000df50e 317c
.org 0xdf510
	ldrb r3, [r6, #10]	@ 000df510 b37a
.org 0xdf512
	lsrs r3, r3, #4	@ 000df512 1b09
.org 0xdf514
	ands r3, r5	@ 000df514 2b40
.org 0xdf516
	ldrb r0, [r4, #0]	@ 000df516 2078
.org 0xdf518
	str r0, [sp, #0]	@ 000df518 0090
.org 0xdf51a
	add r0, sp, #4	@ 000df51a 01a8
.org 0xdf51c
	movs r2, #5	@ 000df51c 0522
.org 0xdf51e
	bl 0xdf2ec	@ 000df51e fff7e5fe
.org 0xdf522
	b.n 0xdf586	@ 000df522 30e0
.org 0xdf524
	.byte 0x00,0xec,0xff,0xff	@ 000df524 data
.org 0xdf528
	cmp r7, #1	@ 000df528 012f
.org 0xdf52a
	bne.n 0xdf57c	@ 000df52a 27d1
.org 0xdf52c
	ldr r0, [r6, #84]	@ 000df52c 706d
.org 0xdf52e
	str r0, [sp, #4]	@ 000df52e 0190
.org 0xdf530
	ldr r0, [r6, #88]	@ 000df530 b06d
.org 0xdf532
	ldr r1, [pc, #68]	@ 000df532 1149
.org 0xdf534
	adds r0, r0, r1	@ 000df534 4018
.org 0xdf536
	str r0, [sp, #8]	@ 000df536 0290
.org 0xdf538
	movs r0, #1	@ 000df538 0120
.org 0xdf53a
	add r1, sp, #4	@ 000df53a 01a9
.org 0xdf53c
	bl 0xd0c88	@ 000df53c f1f7a4fb
.org 0xdf540
	movs r0, #42	@ 000df540 2a20
.org 0xdf542
	bl 0x2b10	@ 000df542 23f7e5fa
.org 0xdf546
	adds r5, r6, #0	@ 000df546 351c
.org 0xdf548
	adds r5, #84	@ 000df548 5435
.org 0xdf54a
	ldrb r1, [r6, #16]	@ 000df54a 317c
.org 0xdf54c
	ldrb r3, [r6, #10]	@ 000df54c b37a
.org 0xdf54e
	lsrs r3, r3, #4	@ 000df54e 1b09
.org 0xdf550
	ands r3, r7	@ 000df550 3b40
.org 0xdf552
	adds r4, r6, #0	@ 000df552 341c
.org 0xdf554
	adds r4, #116	@ 000df554 7434
.org 0xdf556
	ldrb r0, [r4, #0]	@ 000df556 2078
.org 0xdf558
	str r0, [sp, #0]	@ 000df558 0090
.org 0xdf55a
	adds r0, r5, #0	@ 000df55a 281c
.org 0xdf55c
	movs r2, #4	@ 000df55c 0422
.org 0xdf55e
	bl 0xdf2ec	@ 000df55e fff7c5fe
.org 0xdf562
	ldrb r1, [r6, #16]	@ 000df562 317c
.org 0xdf564
	ldrb r3, [r6, #10]	@ 000df564 b37a
.org 0xdf566
	lsrs r3, r3, #4	@ 000df566 1b09
.org 0xdf568
	ands r3, r7	@ 000df568 3b40
.org 0xdf56a
	ldrb r0, [r4, #0]	@ 000df56a 2078
.org 0xdf56c
	str r0, [sp, #0]	@ 000df56c 0090
.org 0xdf56e
	adds r0, r5, #0	@ 000df56e 281c
.org 0xdf570
	movs r2, #3	@ 000df570 0322
.org 0xdf572
	bl 0xdf2ec	@ 000df572 fff7bbfe
.org 0xdf576
	b.n 0xdf586	@ 000df576 06e0
.org 0xdf578
	.byte 0x00,0xf6,0xff,0xff	@ 000df578 data
.org 0xdf57c
	adds r1, r6, #0	@ 000df57c 311c
.org 0xdf57e
	adds r1, #84	@ 000df57e 5431
.org 0xdf580
	movs r0, #3	@ 000df580 0320
.org 0xdf582
	bl 0xd0c88	@ 000df582 f1f781fb
.org 0xdf586
	ldr r1, [pc, #24]	@ 000df586 0649
.org 0xdf588
	ldrb r0, [r6, #9]	@ 000df588 707a
.org 0xdf58a
	lsls r0, r0, #2	@ 000df58a 8000
.org 0xdf58c
	adds r0, r0, r1	@ 000df58c 4018
.org 0xdf58e
	movs r1, #4	@ 000df58e 0421
.org 0xdf590
	str r1, [r6, #12]	@ 000df590 f160
.org 0xdf592
	ldr r0, [r0, #0]	@ 000df592 0068
.org 0xdf594
	ldr r0, [r0, #16]	@ 000df594 0069
.org 0xdf596
	str r0, [r6, #20]	@ 000df596 7061
