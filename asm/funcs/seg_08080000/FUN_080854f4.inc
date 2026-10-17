@ FUN_080854f4  entry 0x080854f4  size 286
.thumb
.org 0x854f4
FUN_080854f4:
	push {r4, r5, r6, lr}	@ 000854f4 70b5
.org 0x854f6
	adds r5, r0, #0	@ 000854f6 051c
.org 0x854f8
	ldr r1, [pc, #92]	@ 000854f8 1749
.org 0x854fa
	ldrb r0, [r5, #9]	@ 000854fa 687a
.org 0x854fc
	lsls r0, r0, #2	@ 000854fc 8000
.org 0x854fe
	adds r0, r0, r1	@ 000854fe 4018
.org 0x85500
	movs r6, #1	@ 00085500 0126
.org 0x85502
	str r6, [r5, #12]	@ 00085502 ee60
.org 0x85504
	ldr r0, [r0, #0]	@ 00085504 0068
.org 0x85506
	ldr r0, [r0, #4]	@ 00085506 4068
.org 0x85508
	str r0, [r5, #20]	@ 00085508 6861
.org 0x8550a
	movs r0, #0	@ 0008550a 0020
.org 0x8550c
	strb r0, [r5, #13]	@ 0008550c 6873
.org 0x8550e
	ldrb r0, [r5, #10]	@ 0008550e a87a
.org 0x85510
	movs r1, #2	@ 00085510 0221
.org 0x85512
	orrs r0, r1	@ 00085512 0843
.org 0x85514
	movs r1, #4	@ 00085514 0421
.org 0x85516
	orrs r0, r1	@ 00085516 0843
.org 0x85518
	strb r0, [r5, #10]	@ 00085518 a872
.org 0x8551a
	adds r4, r5, #0	@ 0008551a 2c1c
.org 0x8551c
	adds r4, #116	@ 0008551c 7434
.org 0x8551e
	ldr r1, [pc, #60]	@ 0008551e 0f49
.org 0x85520
	adds r2, r5, #0	@ 00085520 2a1c
.org 0x85522
	adds r2, #84	@ 00085522 5432
.org 0x85524
	adds r0, r4, #0	@ 00085524 201c
.org 0x85526
	movs r3, #2	@ 00085526 0223
.org 0x85528
	bl 0x5760	@ 00085528 80f71af9
.org 0x8552c
	str r5, [r4, #44]	@ 0008552c e562
.org 0x8552e
	ldr r0, [pc, #48]	@ 0008552e 0c48
.org 0x85530
	str r0, [r4, #36]	@ 00085530 6062
.org 0x85532
	adds r1, r5, #0	@ 00085532 291c
.org 0x85534
	adds r1, #184	@ 00085534 b831
.org 0x85536
	ldr r0, [r5, #84]	@ 00085536 686d
.org 0x85538
	str r0, [r1, #0]	@ 00085538 0860
.org 0x8553a
	adds r1, #4	@ 0008553a 0431
.org 0x8553c
	ldr r0, [r5, #88]	@ 0008553c a86d
.org 0x8553e
	str r0, [r1, #0]	@ 0008553e 0860
.org 0x85540
	ldr r0, [r5, #84]	@ 00085540 686d
.org 0x85542
	ldr r1, [r5, #88]	@ 00085542 a96d
.org 0x85544
	bl 0x7c7c	@ 00085544 82f79afb
.org 0x85548
	lsls r0, r0, #16	@ 00085548 0004
.org 0x8554a
	lsrs r0, r0, #16	@ 0008554a 000c
.org 0x8554c
	cmp r0, #0	@ 0008554c 0028
.org 0x8554e
	beq.n 0x85564	@ 0008554e 09d0
.org 0x85550
	adds r0, r5, #0	@ 00085550 281c
.org 0x85552
	adds r0, #194	@ 00085552 c230
.org 0x85554
	strb r6, [r0, #0]	@ 00085554 0670
.org 0x85556
	b.n 0x8556a	@ 00085556 08e0
.org 0x85558
	.byte 0x40,0xdb,0x85,0x08	@ 00085558 data
.org 0x8555c
	.byte 0xe0,0xeb,0x85,0x08	@ 0008555c data
.org 0x85560
	.byte 0xb1,0x57,0x08,0x08	@ 00085560 data
.org 0x85564
	adds r1, r5, #0	@ 00085564 291c
.org 0x85566
	adds r1, #194	@ 00085566 c231
.org 0x85568
	strb r0, [r1, #0]	@ 00085568 0870
.org 0x8556a
	adds r0, r5, #0	@ 0008556a 281c
.org 0x8556c
	bl 0x1cc9c	@ 0008556c 97f796fb
.org 0x85570
	movs r2, #0	@ 00085570 0022
.org 0x85572
	ldr r0, [pc, #28]	@ 00085572 0748
.org 0x85574
	ldr r0, [r0, #0]	@ 00085574 0068
.org 0x85576
	ldr r0, [r0, #84]	@ 00085576 406d
.org 0x85578
	ldr r1, [r5, #84]	@ 00085578 696d
.org 0x8557a
	subs r0, r0, r1	@ 0008557a 401a
.org 0x8557c
	cmp r0, #0	@ 0008557c 0028
.org 0x8557e
	ble.n 0x85582	@ 0008557e 00dd
.org 0x85580
	movs r2, #1	@ 00085580 0122
.org 0x85582
	cmp r2, #0	@ 00085582 002a
.org 0x85584
	beq.n 0x85594	@ 00085584 06d0
.org 0x85586
	ldrb r1, [r5, #10]	@ 00085586 a97a
.org 0x85588
	movs r0, #16	@ 00085588 1020
.org 0x8558a
	orrs r0, r1	@ 0008558a 0843
.org 0x8558c
	b.n 0x8559a	@ 0008558c 05e0
.org 0x8558e
	.byte 0x00	@ 0008558e data
.org 0x8558f
	.byte 0x00	@ 0008558f data
.org 0x85590
	.byte 0xf0,0xdb,0x02,0x02	@ 00085590 data
.org 0x85594
	ldrb r1, [r5, #10]	@ 00085594 a97a
.org 0x85596
	movs r0, #239	@ 00085596 ef20
.org 0x85598
	ands r0, r1	@ 00085598 0840
.org 0x8559a
	strb r0, [r5, #10]	@ 0008559a a872
.org 0x8559c
	movs r3, #1	@ 0008559c 0123
.org 0x8559e
	adds r1, r2, #0	@ 0008559e 111c
.org 0x855a0
	adds r0, r5, #0	@ 000855a0 281c
.org 0x855a2
	adds r0, #76	@ 000855a2 4c30
.org 0x855a4
	strb r1, [r0, #0]	@ 000855a4 0170
.org 0x855a6
	adds r4, r5, #0	@ 000855a6 2c1c
.org 0x855a8
	adds r4, #74	@ 000855a8 4a34
.org 0x855aa
	lsls r1, r1, #4	@ 000855aa 0901
.org 0x855ac
	ldrb r2, [r4, #0]	@ 000855ac 2278
.org 0x855ae
	movs r0, #17	@ 000855ae 1120
.org 0x855b0
	negs r0, r0	@ 000855b0 4042
.org 0x855b2
	ands r0, r2	@ 000855b2 1040
.org 0x855b4
	orrs r0, r1	@ 000855b4 0843
.org 0x855b6
	strb r0, [r4, #0]	@ 000855b6 2070
.org 0x855b8
	ldrb r0, [r5, #10]	@ 000855b8 a87a
.org 0x855ba
	orrs r3, r0	@ 000855ba 0343
.org 0x855bc
	strb r3, [r5, #10]	@ 000855bc ab72
.org 0x855be
	movs r1, #216	@ 000855be d821
.org 0x855c0
	lsls r1, r1, #5	@ 000855c0 4901
.org 0x855c2
	adds r0, r5, #0	@ 000855c2 281c
.org 0x855c4
	bl 0x1cf00	@ 000855c4 97f79cfc
.org 0x855c8
	ldr r1, [r5, #88]	@ 000855c8 a96d
.org 0x855ca
	ldr r0, [pc, #88]	@ 000855ca 1648
.org 0x855cc
	adds r1, r1, r0	@ 000855cc 0918
.org 0x855ce
	str r1, [r5, #88]	@ 000855ce a965
.org 0x855d0
	ldr r0, [r5, #84]	@ 000855d0 686d
.org 0x855d2
	bl 0x7c7c	@ 000855d2 82f753fb
.org 0x855d6
	lsls r0, r0, #16	@ 000855d6 0004
.org 0x855d8
	cmp r0, #0	@ 000855d8 0028
.org 0x855da
	beq.n 0x855e6	@ 000855da 04d0
.org 0x855dc
	ldr r0, [r5, #84]	@ 000855dc 686d
.org 0x855de
	ldr r1, [r5, #88]	@ 000855de a96d
.org 0x855e0
	bl 0x8534	@ 000855e0 82f7a8ff
.org 0x855e4
	str r0, [r5, #88]	@ 000855e4 a865
.org 0x855e6
	adds r0, r5, #0	@ 000855e6 281c
.org 0x855e8
	bl 0x7f90c	@ 000855e8 faf790f9
.org 0x855ec
	cmp r0, #0	@ 000855ec 0028
.org 0x855ee
	beq.n 0x85610	@ 000855ee 0fd0
.org 0x855f0
	ldr r1, [pc, #52]	@ 000855f0 0d49
.org 0x855f2
	ldrb r0, [r5, #13]	@ 000855f2 687b
.org 0x855f4
	lsls r0, r0, #2	@ 000855f4 8000
.org 0x855f6
	adds r0, r0, r1	@ 000855f6 4018
.org 0x855f8
	ldr r1, [r0, #0]	@ 000855f8 0168
.org 0x855fa
	adds r0, r5, #0	@ 000855fa 281c
.org 0x855fc
	bl 0x128f80	@ 000855fc a3f0c0fc
.org 0x85600
	ldr r1, [pc, #40]	@ 00085600 0a49
.org 0x85602
	ldrb r0, [r5, #13]	@ 00085602 687b
.org 0x85604
	lsls r0, r0, #2	@ 00085604 8000
.org 0x85606
	adds r0, r0, r1	@ 00085606 4018
.org 0x85608
	ldr r1, [r0, #0]	@ 00085608 0168
.org 0x8560a
	adds r0, r5, #0	@ 0008560a 281c
.org 0x8560c
	bl 0x128f80	@ 0008560c a3f0b8fc
.org 0x85610
	adds r1, r5, #0	@ 00085610 291c
