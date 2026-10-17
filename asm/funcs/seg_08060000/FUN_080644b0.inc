@ FUN_080644b0  entry 0x080644b0  size 294
.thumb
.org 0x644b0
FUN_080644b0:
	push {r4, r5, r6, lr}	@ 000644b0 70b5
.org 0x644b2
	sub sp, #12	@ 000644b2 83b0
.org 0x644b4
	adds r6, r0, #0	@ 000644b4 061c
.org 0x644b6
	movs r5, #1	@ 000644b6 0125
.org 0x644b8
	ldrb r0, [r6, #15]	@ 000644b8 f07b
.org 0x644ba
	cmp r0, #0	@ 000644ba 0028
.org 0x644bc
	bne.n 0x6454c	@ 000644bc 46d1
.org 0x644be
	ldr r2, [pc, #76]	@ 000644be 134a
.org 0x644c0
	ldr r1, [r2, #0]	@ 000644c0 1168
.org 0x644c2
	ldr r0, [pc, #76]	@ 000644c2 1348
.org 0x644c4
	muls r0, r1	@ 000644c4 4843
.org 0x644c6
	ldr r1, [pc, #76]	@ 000644c6 1349
.org 0x644c8
	adds r0, r0, r1	@ 000644c8 4018
.org 0x644ca
	lsls r0, r0, #1	@ 000644ca 4000
.org 0x644cc
	lsrs r1, r0, #1	@ 000644cc 4108
.org 0x644ce
	str r1, [r2, #0]	@ 000644ce 1160
.org 0x644d0
	lsrs r4, r0, #17	@ 000644d0 440c
.org 0x644d2
	movs r0, #1	@ 000644d2 0120
.org 0x644d4
	ands r4, r0	@ 000644d4 0440
.org 0x644d6
	adds r0, r6, #0	@ 000644d6 301c
.org 0x644d8
	movs r1, #0	@ 000644d8 0021
.org 0x644da
	bl 0x65a94	@ 000644da 01f0dbfa
.org 0x644de
	adds r1, r4, #0	@ 000644de 211c
.org 0x644e0
	ands r1, r5	@ 000644e0 2940
.org 0x644e2
	adds r0, r6, #0	@ 000644e2 301c
.org 0x644e4
	adds r0, #76	@ 000644e4 4c30
.org 0x644e6
	strb r1, [r0, #0]	@ 000644e6 0170
.org 0x644e8
	adds r3, r6, #0	@ 000644e8 331c
.org 0x644ea
	adds r3, #74	@ 000644ea 4a33
.org 0x644ec
	lsls r1, r1, #4	@ 000644ec 0901
.org 0x644ee
	ldrb r2, [r3, #0]	@ 000644ee 1a78
.org 0x644f0
	movs r0, #17	@ 000644f0 1120
.org 0x644f2
	negs r0, r0	@ 000644f2 4042
.org 0x644f4
	ands r0, r2	@ 000644f4 1040
.org 0x644f6
	orrs r0, r1	@ 000644f6 0843
.org 0x644f8
	strb r0, [r3, #0]	@ 000644f8 1870
.org 0x644fa
	adds r0, r4, #0	@ 000644fa 201c
.org 0x644fc
	ands r0, r5	@ 000644fc 2840
.org 0x644fe
	cmp r0, #0	@ 000644fe 0028
.org 0x64500
	beq.n 0x64518	@ 00064500 0ad0
.org 0x64502
	ldrb r0, [r6, #10]	@ 00064502 b07a
.org 0x64504
	movs r1, #16	@ 00064504 1021
.org 0x64506
	orrs r0, r1	@ 00064506 0843
.org 0x64508
	b.n 0x6451e	@ 00064508 09e0
.org 0x6450a
	.byte 0x00	@ 0006450a data
.org 0x6450b
	.byte 0x00	@ 0006450b data
.org 0x6450c
	.byte 0x38,0xdc,0x02,0x02	@ 0006450c data
.org 0x64510
	.byte 0xfd,0x43,0x03,0x00	@ 00064510 data
.org 0x64514
	.byte 0xc3,0x9e,0x26,0x00	@ 00064514 data
.org 0x64518
	ldrb r1, [r6, #10]	@ 00064518 b17a
.org 0x6451a
	movs r0, #239	@ 0006451a ef20
.org 0x6451c
	ands r0, r1	@ 0006451c 0840
.org 0x6451e
	strb r0, [r6, #10]	@ 0006451e b072
.org 0x64520
	cmp r4, #0	@ 00064520 002c
.org 0x64522
	beq.n 0x64532	@ 00064522 06d0
.org 0x64524
	adds r0, r6, #0	@ 00064524 301c
.org 0x64526
	adds r0, #208	@ 00064526 d030
.org 0x64528
	ldr r0, [r0, #0]	@ 00064528 0068
.org 0x6452a
	movs r2, #160	@ 0006452a a022
.org 0x6452c
	lsls r2, r2, #6	@ 0006452c 9201
.org 0x6452e
	adds r0, r0, r2	@ 0006452e 8018
.org 0x64530
	b.n 0x6453e	@ 00064530 05e0
.org 0x64532
	adds r0, r6, #0	@ 00064532 301c
.org 0x64534
	adds r0, #208	@ 00064534 d030
.org 0x64536
	ldr r0, [r0, #0]	@ 00064536 0068
.org 0x64538
	movs r3, #200	@ 00064538 c823
.org 0x6453a
	lsls r3, r3, #8	@ 0006453a 1b02
.org 0x6453c
	adds r0, r0, r3	@ 0006453c c018
.org 0x6453e
	str r0, [r6, #84]	@ 0006453e 7065
.org 0x64540
	movs r0, #192	@ 00064540 c020
.org 0x64542
	lsls r0, r0, #2	@ 00064542 8000
.org 0x64544
	str r0, [r6, #96]	@ 00064544 3066
.org 0x64546
	ldrb r0, [r6, #15]	@ 00064546 f07b
.org 0x64548
	adds r0, #1	@ 00064548 0130
.org 0x6454a
	strb r0, [r6, #15]	@ 0006454a f073
.org 0x6454c
	adds r0, r6, #0	@ 0006454c 301c
.org 0x6454e
	bl 0x1cff0	@ 0006454e b8f74ffd
.org 0x64552
	adds r0, r6, #0	@ 00064552 301c
.org 0x64554
	adds r0, #116	@ 00064554 7430
.org 0x64556
	ldr r4, [pc, #140]	@ 00064556 234c
.org 0x64558
	ldr r3, [pc, #140]	@ 00064558 234b
.org 0x6455a
	adds r1, r6, #0	@ 0006455a 311c
.org 0x6455c
	adds r1, #180	@ 0006455c b431
.org 0x6455e
	ldrb r2, [r1, #0]	@ 0006455e 0a78
.org 0x64560
	lsls r1, r2, #1	@ 00064560 5100
.org 0x64562
	adds r1, r1, r3	@ 00064562 c918
.org 0x64564
	ldrh r1, [r1, #0]	@ 00064564 0988
.org 0x64566
	lsls r1, r1, #2	@ 00064566 8900
.org 0x64568
	adds r1, r1, r4	@ 00064568 0919
.org 0x6456a
	adds r3, r6, #0	@ 0006456a 331c
.org 0x6456c
	adds r3, #113	@ 0006456c 7133
.org 0x6456e
	movs r5, #0	@ 0006456e 0025
.org 0x64570
	ldrsb r5, [r3, r5]	@ 00064570 5d57
.org 0x64572
	ldr r1, [r1, #0]	@ 00064572 0968
.org 0x64574
	lsls r3, r5, #2	@ 00064574 ab00
.org 0x64576
	adds r3, r3, r1	@ 00064576 5b18
.org 0x64578
	ldr r4, [pc, #112]	@ 00064578 1c4c
.org 0x6457a
	adds r1, r6, #0	@ 0006457a 311c
.org 0x6457c
	adds r1, #181	@ 0006457c b531
.org 0x6457e
	ldrb r1, [r1, #0]	@ 0006457e 0978
.org 0x64580
	lsls r1, r1, #2	@ 00064580 8900
.org 0x64582
	adds r1, r1, r4	@ 00064582 0919
.org 0x64584
	ldr r1, [r1, #0]	@ 00064584 0968
.org 0x64586
	lsls r2, r2, #2	@ 00064586 9200
.org 0x64588
	adds r2, r2, r1	@ 00064588 5218
.org 0x6458a
	ldr r1, [r2, #0]	@ 0006458a 1168
.org 0x6458c
	adds r1, r1, r5	@ 0006458c 4919
.org 0x6458e
	ldrb r1, [r1, #0]	@ 0006458e 0978
.org 0x64590
	lsls r2, r1, #1	@ 00064590 4a00
.org 0x64592
	adds r2, r2, r1	@ 00064592 5218
.org 0x64594
	lsls r2, r2, #3	@ 00064594 d200
.org 0x64596
	ldr r1, [r3, #0]	@ 00064596 1968
.org 0x64598
	adds r1, r1, r2	@ 00064598 8918
.org 0x6459a
	bl 0x5784	@ 0006459a a1f7f3f8
.org 0x6459e
	ldr r1, [r6, #88]	@ 0006459e b16d
.org 0x645a0
	ldr r0, [r6, #96]	@ 000645a0 306e
.org 0x645a2
	adds r1, r1, r0	@ 000645a2 0918
.org 0x645a4
	str r1, [r6, #88]	@ 000645a4 b165
.org 0x645a6
	adds r0, r6, #0	@ 000645a6 301c
.org 0x645a8
	adds r0, #212	@ 000645a8 d430
.org 0x645aa
	ldr r0, [r0, #0]	@ 000645aa 0068
.org 0x645ac
	movs r4, #136	@ 000645ac 8824
.org 0x645ae
	lsls r4, r4, #8	@ 000645ae 2402
.org 0x645b0
	adds r0, r0, r4	@ 000645b0 0019
.org 0x645b2
	cmp r1, r0	@ 000645b2 8142
.org 0x645b4
	blt.n 0x645dc	@ 000645b4 12db
.org 0x645b6
	str r0, [r6, #88]	@ 000645b6 b065
.org 0x645b8
	mov r1, sp	@ 000645b8 6946
.org 0x645ba
	ldr r0, [pc, #52]	@ 000645ba 0d48
.org 0x645bc
	ldmia r0!, {r2, r3, r4}	@ 000645bc 1cc8
.org 0x645be
	stmia r1!, {r2, r3, r4}	@ 000645be 1cc1
.org 0x645c0
	adds r0, r6, #0	@ 000645c0 301c
.org 0x645c2
	bl 0x66160	@ 000645c2 01f0cdfd
.org 0x645c6
	lsls r0, r0, #2	@ 000645c6 8000
.org 0x645c8
	add r0, sp	@ 000645c8 6844
.org 0x645ca
	ldr r1, [r0, #0]	@ 000645ca 0168
.org 0x645cc
	adds r0, r6, #0	@ 000645cc 301c
.org 0x645ce
	adds r0, #224	@ 000645ce e030
.org 0x645d0
	movs r2, #0	@ 000645d0 0022
.org 0x645d2
	strb r1, [r0, #0]	@ 000645d2 0170
.org 0x645d4
	movs r0, #13	@ 000645d4 0d20
