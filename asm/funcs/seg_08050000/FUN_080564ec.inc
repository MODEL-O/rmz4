@ FUN_080564ec  entry 0x080564ec  size 254
.thumb
.org 0x564ec
FUN_080564ec:
	push {r4, r5, r6, r7, lr}	@ 000564ec f0b5
.org 0x564ee
	adds r4, r0, #0	@ 000564ee 041c
.org 0x564f0
	ldrb r0, [r4, #15]	@ 000564f0 e07b
.org 0x564f2
	cmp r0, #0	@ 000564f2 0028
.org 0x564f4
	bne.n 0x5654e	@ 000564f4 2bd1
.org 0x564f6
	ldr r1, [pc, #244]	@ 000564f6 3d49
.org 0x564f8
	adds r0, r4, #0	@ 000564f8 201c
.org 0x564fa
	bl 0x1cf00	@ 000564fa c6f701fd
.org 0x564fe
	adds r0, r4, #0	@ 000564fe 201c
.org 0x56500
	bl 0x5977c	@ 00056500 03f03cf9
.org 0x56504
	movs r5, #160	@ 00056504 a025
.org 0x56506
	lsls r5, r5, #3	@ 00056506 ed00
.org 0x56508
	adds r0, r4, #0	@ 00056508 201c
.org 0x5650a
	bl 0x599a4	@ 0005650a 03f04bfa
.org 0x5650e
	adds r1, r0, #0	@ 0005650e 011c
.org 0x56510
	ldr r2, [pc, #220]	@ 00056510 374a
.org 0x56512
	adds r0, #64	@ 00056512 4030
.org 0x56514
	lsls r0, r0, #24	@ 00056514 0006
.org 0x56516
	lsrs r0, r0, #23	@ 00056516 c00d
.org 0x56518
	adds r0, r0, r2	@ 00056518 8018
.org 0x5651a
	movs r3, #0	@ 0005651a 0023
.org 0x5651c
	ldrsh r0, [r0, r3]	@ 0005651c c05e
.org 0x5651e
	muls r0, r5	@ 0005651e 6843
.org 0x56520
	cmp r0, #0	@ 00056520 0028
.org 0x56522
	bge.n 0x56526	@ 00056522 00da
.org 0x56524
	adds r0, #255	@ 00056524 ff30
.org 0x56526
	asrs r0, r0, #8	@ 00056526 0012
.org 0x56528
	str r0, [r4, #92]	@ 00056528 e065
.org 0x5652a
	lsls r0, r1, #24	@ 0005652a 0806
.org 0x5652c
	lsrs r0, r0, #23	@ 0005652c c00d
.org 0x5652e
	adds r0, r0, r2	@ 0005652e 8018
.org 0x56530
	movs r7, #0	@ 00056530 0027
.org 0x56532
	ldrsh r0, [r0, r7]	@ 00056532 c05f
.org 0x56534
	muls r0, r5	@ 00056534 6843
.org 0x56536
	cmp r0, #0	@ 00056536 0028
.org 0x56538
	bge.n 0x5653c	@ 00056538 00da
.org 0x5653a
	adds r0, #255	@ 0005653a ff30
.org 0x5653c
	asrs r0, r0, #8	@ 0005653c 0012
.org 0x5653e
	str r0, [r4, #96]	@ 0005653e 2066
.org 0x56540
	adds r0, r4, #0	@ 00056540 201c
.org 0x56542
	adds r0, #188	@ 00056542 bc30
.org 0x56544
	ldr r0, [r0, #0]	@ 00056544 0068
.org 0x56546
	str r0, [r4, #104]	@ 00056546 a066
.org 0x56548
	ldrb r0, [r4, #15]	@ 00056548 e07b
.org 0x5654a
	adds r0, #1	@ 0005654a 0130
.org 0x5654c
	strb r0, [r4, #15]	@ 0005654c e073
.org 0x5654e
	adds r0, r4, #0	@ 0005654e 201c
.org 0x56550
	bl 0x1cff0	@ 00056550 c6f74efd
.org 0x56554
	adds r0, r4, #0	@ 00056554 201c
.org 0x56556
	adds r0, #116	@ 00056556 7430
.org 0x56558
	ldr r3, [pc, #152]	@ 00056558 264b
.org 0x5655a
	ldrb r1, [r4, #30]	@ 0005655a a17f
.org 0x5655c
	lsls r1, r1, #8	@ 0005655c 0902
.org 0x5655e
	adds r2, r4, #0	@ 0005655e 221c
.org 0x56560
	adds r2, #112	@ 00056560 7032
.org 0x56562
	ldrb r2, [r2, #0]	@ 00056562 1278
.org 0x56564
	orrs r1, r2	@ 00056564 1143
.org 0x56566
	ldr r2, [pc, #144]	@ 00056566 244a
.org 0x56568
	adds r1, r1, r2	@ 00056568 8918
.org 0x5656a
	lsls r1, r1, #2	@ 0005656a 8900
.org 0x5656c
	adds r1, r1, r3	@ 0005656c c918
.org 0x5656e
	adds r2, r4, #0	@ 0005656e 221c
.org 0x56570
	adds r2, #113	@ 00056570 7132
.org 0x56572
	ldrb r2, [r2, #0]	@ 00056572 1278
.org 0x56574
	lsls r2, r2, #24	@ 00056574 1206
.org 0x56576
	asrs r2, r2, #24	@ 00056576 1216
.org 0x56578
	ldr r1, [r1, #0]	@ 00056578 0968
.org 0x5657a
	lsls r2, r2, #2	@ 0005657a 9200
.org 0x5657c
	adds r2, r2, r1	@ 0005657c 5218
.org 0x5657e
	ldr r1, [r2, #0]	@ 0005657e 1168
.org 0x56580
	ldrb r2, [r1, #0]	@ 00056580 0a78
.org 0x56582
	lsls r1, r2, #1	@ 00056582 5100
.org 0x56584
	adds r1, r1, r2	@ 00056584 8918
.org 0x56586
	lsls r1, r1, #3	@ 00056586 c900
.org 0x56588
	ldr r2, [pc, #112]	@ 00056588 1c4a
.org 0x5658a
	adds r1, r1, r2	@ 0005658a 8918
.org 0x5658c
	bl 0x5784	@ 0005658c aff7faf8
.org 0x56590
	ldr r5, [r4, #84]	@ 00056590 656d
.org 0x56592
	ldr r0, [r4, #92]	@ 00056592 e06d
.org 0x56594
	adds r5, r5, r0	@ 00056594 2d18
.org 0x56596
	str r5, [r4, #84]	@ 00056596 6565
.org 0x56598
	adds r2, r4, #0	@ 00056598 221c
.org 0x5659a
	adds r2, #188	@ 0005659a bc32
.org 0x5659c
	ldr r5, [r2, #0]	@ 0005659c 1568
.org 0x5659e
	ldr r0, [r4, #96]	@ 0005659e 206e
.org 0x565a0
	adds r5, r5, r0	@ 000565a0 2d18
.org 0x565a2
	str r5, [r2, #0]	@ 000565a2 1560
.org 0x565a4
	adds r6, r4, #0	@ 000565a4 261c
.org 0x565a6
	adds r6, #84	@ 000565a6 5436
.org 0x565a8
	ldr r3, [pc, #68]	@ 000565a8 114b
.org 0x565aa
	mov ip, r3	@ 000565aa 9c46
.org 0x565ac
	adds r3, r4, #0	@ 000565ac 231c
.org 0x565ae
	adds r3, #181	@ 000565ae b533
.org 0x565b0
	ldrb r0, [r3, #0]	@ 000565b0 1878
.org 0x565b2
	lsls r0, r0, #1	@ 000565b2 4000
.org 0x565b4
	add r0, ip	@ 000565b4 6044
.org 0x565b6
	movs r7, #0	@ 000565b6 0027
.org 0x565b8
	ldrsh r0, [r0, r7]	@ 000565b8 c05f
.org 0x565ba
	lsls r0, r0, #1	@ 000565ba 4000
.org 0x565bc
	adds r0, r5, r0	@ 000565bc 2818
.org 0x565be
	str r0, [r6, #4]	@ 000565be 7060
.org 0x565c0
	ldr r0, [r4, #104]	@ 000565c0 a06e
.org 0x565c2
	ldr r7, [pc, #60]	@ 000565c2 0f4f
.org 0x565c4
	adds r1, r0, r7	@ 000565c4 c119
.org 0x565c6
	cmp r5, r1	@ 000565c6 8d42
.org 0x565c8
	bgt.n 0x565e4	@ 000565c8 0cdc
.org 0x565ca
	str r1, [r2, #0]	@ 000565ca 1160
.org 0x565cc
	ldrb r0, [r3, #0]	@ 000565cc 1878
.org 0x565ce
	lsls r0, r0, #1	@ 000565ce 4000
.org 0x565d0
	add r0, ip	@ 000565d0 6044
.org 0x565d2
	movs r2, #0	@ 000565d2 0022
.org 0x565d4
	ldrsh r0, [r0, r2]	@ 000565d4 805e
.org 0x565d6
	lsls r0, r0, #1	@ 000565d6 4000
.org 0x565d8
	adds r0, r1, r0	@ 000565d8 0818
.org 0x565da
	str r0, [r6, #4]	@ 000565da 7060
.org 0x565dc
	movs r1, #0	@ 000565dc 0021
.org 0x565de
	movs r0, #8	@ 000565de 0820
.org 0x565e0
	strb r0, [r4, #14]	@ 000565e0 a073
.org 0x565e2
	strb r1, [r4, #15]	@ 000565e2 e173
.org 0x565e4
	pop {r4, r5, r6, r7}	@ 000565e4 f0bc
.org 0x565e6
	pop {r0}	@ 000565e6 01bc
.org 0x565e8
	bx r0	@ 000565e8 0047
