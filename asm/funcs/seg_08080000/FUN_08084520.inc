@ FUN_08084520  entry 0x08084520  size 290
.thumb
.org 0x84520
FUN_08084520:
	push {r4, r5, r6, r7, lr}	@ 00084520 f0b5
.org 0x84522
	mov r7, r8	@ 00084522 4746
.org 0x84524
	push {r7}	@ 00084524 80b4
.org 0x84526
	adds r4, r0, #0	@ 00084526 041c
.org 0x84528
	adds r5, r4, #0	@ 00084528 251c
.org 0x8452a
	adds r5, #84	@ 0008452a 5435
.org 0x8452c
	ldr r6, [pc, #20]	@ 0008452c 054e
.org 0x8452e
	adds r0, #180	@ 0008452e b430
.org 0x84530
	ldrb r2, [r0, #8]	@ 00084530 027a
.org 0x84532
	ldrb r1, [r4, #10]	@ 00084532 a17a
.org 0x84534
	movs r3, #16	@ 00084534 1023
.org 0x84536
	adds r0, r3, #0	@ 00084536 181c
.org 0x84538
	ands r0, r1	@ 00084538 0840
.org 0x8453a
	cmp r0, #0	@ 0008453a 0028
.org 0x8453c
	beq.n 0x84548	@ 0008453c 04d0
.org 0x8453e
	orrs r3, r2	@ 0008453e 1343
.org 0x84540
	b.n 0x8454a	@ 00084540 03e0
.org 0x84542
	.byte 0x00	@ 00084542 data
.org 0x84543
	.byte 0x00	@ 00084543 data
.org 0x84544
	.byte 0x54,0xea,0x85,0x08	@ 00084544 data
.org 0x84548
	adds r3, r2, #0	@ 00084548 131c
.org 0x8454a
	adds r0, r5, #0	@ 0008454a 281c
.org 0x8454c
	adds r1, r6, #0	@ 0008454c 311c
.org 0x8454e
	movs r2, #0	@ 0008454e 0022
.org 0x84550
	bl 0xd4c8c	@ 00084550 50f09cfb
.org 0x84554
	adds r7, r4, #0	@ 00084554 271c
.org 0x84556
	adds r7, #84	@ 00084556 5437
.org 0x84558
	ldr r0, [pc, #28]	@ 00084558 0748
.org 0x8455a
	mov ip, r0	@ 0008455a 8446
.org 0x8455c
	adds r2, r4, #0	@ 0008455c 221c
.org 0x8455e
	adds r2, #180	@ 0008455e b432
.org 0x84560
	ldrb r6, [r2, #8]	@ 00084560 167a
.org 0x84562
	ldrb r1, [r4, #10]	@ 00084562 a17a
.org 0x84564
	movs r3, #16	@ 00084564 1023
.org 0x84566
	adds r0, r3, #0	@ 00084566 181c
.org 0x84568
	ands r0, r1	@ 00084568 0840
.org 0x8456a
	adds r5, r7, #0	@ 0008456a 3d1c
.org 0x8456c
	mov r8, r2	@ 0008456c 9046
.org 0x8456e
	cmp r0, #0	@ 0008456e 0028
.org 0x84570
	beq.n 0x8457c	@ 00084570 04d0
.org 0x84572
	orrs r3, r6	@ 00084572 3343
.org 0x84574
	b.n 0x8457e	@ 00084574 03e0
.org 0x84576
	.byte 0x00	@ 00084576 data
.org 0x84577
	.byte 0x00	@ 00084577 data
.org 0x84578
	.byte 0x54,0xea,0x85,0x08	@ 00084578 data
.org 0x8457c
	adds r3, r6, #0	@ 0008457c 331c
.org 0x8457e
	adds r0, r7, #0	@ 0008457e 381c
.org 0x84580
	mov r1, ip	@ 00084580 6146
.org 0x84582
	movs r2, #0	@ 00084582 0022
.org 0x84584
	bl 0xd4c8c	@ 00084584 50f082fb
.org 0x84588
	adds r6, r5, #0	@ 00084588 2e1c
.org 0x8458a
	ldr r7, [pc, #20]	@ 0008458a 054f
.org 0x8458c
	mov r0, r8	@ 0008458c 4046
.org 0x8458e
	ldrb r2, [r0, #8]	@ 0008458e 027a
.org 0x84590
	ldrb r1, [r4, #10]	@ 00084590 a17a
.org 0x84592
	movs r3, #16	@ 00084592 1023
.org 0x84594
	adds r0, r3, #0	@ 00084594 181c
.org 0x84596
	ands r0, r1	@ 00084596 0840
.org 0x84598
	cmp r0, #0	@ 00084598 0028
.org 0x8459a
	beq.n 0x845a4	@ 0008459a 03d0
.org 0x8459c
	orrs r3, r2	@ 0008459c 1343
.org 0x8459e
	b.n 0x845a6	@ 0008459e 02e0
.org 0x845a0
	.byte 0x70,0xea,0x85,0x08	@ 000845a0 data
.org 0x845a4
	adds r3, r2, #0	@ 000845a4 131c
.org 0x845a6
	adds r0, r6, #0	@ 000845a6 301c
.org 0x845a8
	adds r1, r7, #0	@ 000845a8 391c
.org 0x845aa
	movs r2, #0	@ 000845aa 0022
.org 0x845ac
	bl 0xd4c8c	@ 000845ac 50f06efb
.org 0x845b0
	adds r6, r5, #0	@ 000845b0 2e1c
.org 0x845b2
	ldr r7, [pc, #20]	@ 000845b2 054f
.org 0x845b4
	mov r0, r8	@ 000845b4 4046
.org 0x845b6
	ldrb r2, [r0, #8]	@ 000845b6 027a
.org 0x845b8
	ldrb r1, [r4, #10]	@ 000845b8 a17a
.org 0x845ba
	movs r3, #16	@ 000845ba 1023
.org 0x845bc
	adds r0, r3, #0	@ 000845bc 181c
.org 0x845be
	ands r0, r1	@ 000845be 0840
.org 0x845c0
	cmp r0, #0	@ 000845c0 0028
.org 0x845c2
	beq.n 0x845cc	@ 000845c2 03d0
.org 0x845c4
	orrs r3, r2	@ 000845c4 1343
.org 0x845c6
	b.n 0x845ce	@ 000845c6 02e0
.org 0x845c8
	.byte 0x70,0xea,0x85,0x08	@ 000845c8 data
.org 0x845cc
	adds r3, r2, #0	@ 000845cc 131c
.org 0x845ce
	adds r0, r6, #0	@ 000845ce 301c
.org 0x845d0
	adds r1, r7, #0	@ 000845d0 391c
.org 0x845d2
	movs r2, #0	@ 000845d2 0022
.org 0x845d4
	bl 0xd4c8c	@ 000845d4 50f05afb
.org 0x845d8
	movs r0, #1	@ 000845d8 0120
.org 0x845da
	adds r1, r5, #0	@ 000845da 291c
.org 0x845dc
	bl 0xd0c88	@ 000845dc 4cf054fb
.org 0x845e0
	ldrb r1, [r4, #10]	@ 000845e0 a17a
.org 0x845e2
	movs r0, #16	@ 000845e2 1020
.org 0x845e4
	ands r0, r1	@ 000845e4 0840
.org 0x845e6
	cmp r0, #0	@ 000845e6 0028
.org 0x845e8
	beq.n 0x845fc	@ 000845e8 08d0
.org 0x845ea
	movs r0, #2	@ 000845ea 0220
.org 0x845ec
	adds r1, r5, #0	@ 000845ec 291c
.org 0x845ee
	bl 0xd0c88	@ 000845ee 4cf04bfb
.org 0x845f2
	movs r0, #2	@ 000845f2 0220
.org 0x845f4
	adds r1, r5, #0	@ 000845f4 291c
.org 0x845f6
	bl 0xd0c88	@ 000845f6 4cf047fb
.org 0x845fa
	b.n 0x8460c	@ 000845fa 07e0
.org 0x845fc
	movs r0, #2	@ 000845fc 0220
.org 0x845fe
	adds r1, r5, #0	@ 000845fe 291c
.org 0x84600
	bl 0xd0c88	@ 00084600 4cf042fb
.org 0x84604
	movs r0, #2	@ 00084604 0220
.org 0x84606
	adds r1, r5, #0	@ 00084606 291c
.org 0x84608
	bl 0xd0c88	@ 00084608 4cf03efb
.org 0x8460c
	ldrb r1, [r4, #10]	@ 0008460c a17a
.org 0x8460e
	movs r0, #254	@ 0008460e fe20
.org 0x84610
	ands r0, r1	@ 00084610 0840
.org 0x84612
	strb r0, [r4, #10]	@ 00084612 a072
.org 0x84614
	movs r0, #42	@ 00084614 2a20
.org 0x84616
	bl 0x2b10	@ 00084616 7ef77bfa
.org 0x8461a
	adds r2, r5, #0	@ 0008461a 2a1c
.org 0x8461c
	movs r0, #4	@ 0008461c 0420
.org 0x8461e
	movs r1, #18	@ 0008461e 1221
.org 0x84620
	bl 0x2ab88	@ 00084620 a6f7b2fa
.org 0x84624
	ldr r2, [pc, #48]	@ 00084624 0c4a
.org 0x84626
	ldrh r1, [r2, #12]	@ 00084626 9189
.org 0x84628
	ldr r0, [pc, #48]	@ 00084628 0c48
.org 0x8462a
	cmp r1, r0	@ 0008462a 8142
.org 0x8462c
	bhi.n 0x84632	@ 0008462c 01d8
.org 0x8462e
	adds r0, r1, #1	@ 0008462e 481c
.org 0x84630
	strh r0, [r2, #12]	@ 00084630 9081
.org 0x84632
	adds r0, r4, #0	@ 00084632 201c
.org 0x84634
	adds r1, r5, #0	@ 00084634 291c
.org 0x84636
	bl 0x2abe0	@ 00084636 a6f7d3fa
.org 0x8463a
	ldr r1, [pc, #36]	@ 0008463a 0949
.org 0x8463c
	ldrb r0, [r4, #9]	@ 0008463c 607a
.org 0x8463e
	lsls r0, r0, #2	@ 0008463e 8000
.org 0x84640
	adds r0, r0, r1	@ 00084640 4018
