@ FUN_080904a0  entry 0x080904a0  size 302
.thumb
.org 0x904a0
FUN_080904a0:
	push {r4, r5, r6, r7, lr}	@ 000904a0 f0b5
.org 0x904a2
	mov r7, r8	@ 000904a2 4746
.org 0x904a4
	push {r7}	@ 000904a4 80b4
.org 0x904a6
	adds r4, r0, #0	@ 000904a6 041c
.org 0x904a8
	ldr r5, [r4, #40]	@ 000904a8 a56a
.org 0x904aa
	ldr r7, [r5, #40]	@ 000904aa af6a
.org 0x904ac
	ldrb r0, [r5, #10]	@ 000904ac a87a
.org 0x904ae
	lsrs r1, r0, #4	@ 000904ae 0109
.org 0x904b0
	movs r0, #1	@ 000904b0 0120
.org 0x904b2
	ands r1, r0	@ 000904b2 0140
.org 0x904b4
	ldrb r0, [r4, #17]	@ 000904b4 607c
.org 0x904b6
	mov r8, r0	@ 000904b6 8046
.org 0x904b8
	ldrb r0, [r5, #12]	@ 000904b8 287b
.org 0x904ba
	cmp r0, #1	@ 000904ba 0128
.org 0x904bc
	bls.n 0x904fc	@ 000904bc 1ed9
.org 0x904be
	ldrb r1, [r4, #10]	@ 000904be a17a
.org 0x904c0
	movs r0, #254	@ 000904c0 fe20
.org 0x904c2
	ands r0, r1	@ 000904c2 0840
.org 0x904c4
	movs r2, #0	@ 000904c4 0022
.org 0x904c6
	movs r1, #253	@ 000904c6 fd21
.org 0x904c8
	ands r0, r1	@ 000904c8 0840
.org 0x904ca
	strb r0, [r4, #10]	@ 000904ca a072
.org 0x904cc
	adds r0, r4, #0	@ 000904cc 201c
.org 0x904ce
	adds r0, #140	@ 000904ce 8c30
.org 0x904d0
	str r2, [r0, #0]	@ 000904d0 0260
.org 0x904d2
	adds r0, #4	@ 000904d2 0430
.org 0x904d4
	str r2, [r0, #0]	@ 000904d4 0260
.org 0x904d6
	adds r0, #4	@ 000904d6 0430
.org 0x904d8
	strb r2, [r0, #0]	@ 000904d8 0270
.org 0x904da
	ldrb r1, [r4, #10]	@ 000904da a17a
.org 0x904dc
	movs r0, #251	@ 000904dc fb20
.org 0x904de
	ands r0, r1	@ 000904de 0840
.org 0x904e0
	strb r0, [r4, #10]	@ 000904e0 a072
.org 0x904e2
	ldr r1, [pc, #20]	@ 000904e2 0549
.org 0x904e4
	ldrb r0, [r4, #9]	@ 000904e4 607a
.org 0x904e6
	lsls r0, r0, #2	@ 000904e6 8000
.org 0x904e8
	adds r0, r0, r1	@ 000904e8 4018
.org 0x904ea
	movs r1, #3	@ 000904ea 0321
.org 0x904ec
	str r1, [r4, #12]	@ 000904ec e160
.org 0x904ee
	ldr r0, [r0, #0]	@ 000904ee 0068
.org 0x904f0
	ldr r0, [r0, #12]	@ 000904f0 c068
.org 0x904f2
	str r0, [r4, #20]	@ 000904f2 6061
.org 0x904f4
	b.n 0x905d4	@ 000904f4 6ee0
.org 0x904f6
	.byte 0x00	@ 000904f6 data
.org 0x904f7
	.byte 0x00	@ 000904f7 data
.org 0x904f8
	.byte 0x40,0xdb,0x85,0x08	@ 000904f8 data
.org 0x904fc
	ldrb r0, [r4, #13]	@ 000904fc 607b
.org 0x904fe
	cmp r0, #0	@ 000904fe 0028
.org 0x90500
	bne.n 0x90532	@ 00090500 17d1
.org 0x90502
	ldrb r0, [r5, #13]	@ 00090502 687b
.org 0x90504
	cmp r0, #0	@ 00090504 0028
.org 0x90506
	beq.n 0x90528	@ 00090506 0fd0
.org 0x90508
	adds r0, r4, #0	@ 00090508 201c
.org 0x9050a
	adds r0, #116	@ 0009050a 7430
.org 0x9050c
	ldr r1, [pc, #20]	@ 0009050c 0549
.org 0x9050e
	bl 0x5784	@ 0009050e 75f739f9
.org 0x90512
	ldrb r1, [r4, #10]	@ 00090512 a17a
.org 0x90514
	movs r0, #1	@ 00090514 0120
.org 0x90516
	orrs r0, r1	@ 00090516 0843
.org 0x90518
	strb r0, [r4, #10]	@ 00090518 a072
.org 0x9051a
	ldrb r0, [r4, #13]	@ 0009051a 607b
.org 0x9051c
	adds r0, #1	@ 0009051c 0130
.org 0x9051e
	strb r0, [r4, #13]	@ 0009051e 6073
.org 0x90520
	b.n 0x9054c	@ 00090520 14e0
.org 0x90522
	.byte 0x00	@ 00090522 data
.org 0x90523
	.byte 0x00	@ 00090523 data
.org 0x90524
	.byte 0x8c,0x00,0x86,0x08	@ 00090524 data
.org 0x90528
	ldr r0, [r5, #84]	@ 00090528 686d
.org 0x9052a
	ldr r1, [r5, #88]	@ 0009052a a96d
.org 0x9052c
	str r0, [r4, #84]	@ 0009052c 6065
.org 0x9052e
	str r1, [r4, #88]	@ 0009052e a165
.org 0x90530
	b.n 0x905d4	@ 00090530 50e0
.org 0x90532
	ldrb r6, [r5, #13]	@ 00090532 6e7b
.org 0x90534
	cmp r6, #0	@ 00090534 002e
.org 0x90536
	bne.n 0x90558	@ 00090536 0fd1
.org 0x90538
	adds r0, r4, #0	@ 00090538 201c
.org 0x9053a
	adds r0, #116	@ 0009053a 7430
.org 0x9053c
	ldr r1, [pc, #20]	@ 0009053c 0549
.org 0x9053e
	bl 0x5784	@ 0009053e 75f721f9
.org 0x90542
	ldrb r1, [r4, #10]	@ 00090542 a17a
.org 0x90544
	movs r0, #254	@ 00090544 fe20
.org 0x90546
	ands r0, r1	@ 00090546 0840
.org 0x90548
	strb r0, [r4, #10]	@ 00090548 a072
.org 0x9054a
	strb r6, [r4, #13]	@ 0009054a 6673
.org 0x9054c
	adds r0, r4, #0	@ 0009054c 201c
.org 0x9054e
	bl 0x904a0	@ 0009054e fff7a7ff
.org 0x90552
	b.n 0x905d4	@ 00090552 3fe0
.org 0x90554
	.byte 0x74,0x00,0x86,0x08	@ 00090554 data
.org 0x90558
	adds r2, r1, #0	@ 00090558 0a1c
.org 0x9055a
	cmp r2, #0	@ 0009055a 002a
.org 0x9055c
	beq.n 0x90566	@ 0009055c 03d0
.org 0x9055e
	ldrb r1, [r4, #10]	@ 0009055e a17a
.org 0x90560
	movs r0, #16	@ 00090560 1020
.org 0x90562
	orrs r0, r1	@ 00090562 0843
.org 0x90564
	b.n 0x9056c	@ 00090564 02e0
.org 0x90566
	ldrb r1, [r4, #10]	@ 00090566 a17a
.org 0x90568
	movs r0, #239	@ 00090568 ef20
.org 0x9056a
	ands r0, r1	@ 0009056a 0840
.org 0x9056c
	strb r0, [r4, #10]	@ 0009056c a072
.org 0x9056e
	adds r1, r2, #0	@ 0009056e 111c
.org 0x90570
	adds r0, r4, #0	@ 00090570 201c
.org 0x90572
	adds r0, #76	@ 00090572 4c30
.org 0x90574
	strb r1, [r0, #0]	@ 00090574 0170
.org 0x90576
	adds r3, r4, #0	@ 00090576 231c
.org 0x90578
	adds r3, #74	@ 00090578 4a33
.org 0x9057a
	lsls r1, r1, #4	@ 0009057a 0901
.org 0x9057c
	ldrb r2, [r3, #0]	@ 0009057c 1a78
.org 0x9057e
	movs r0, #17	@ 0009057e 1120
.org 0x90580
	negs r0, r0	@ 00090580 4042
.org 0x90582
	ands r0, r2	@ 00090582 1040
.org 0x90584
	orrs r0, r1	@ 00090584 0843
.org 0x90586
	strb r0, [r3, #0]	@ 00090586 1870
.org 0x90588
	adds r0, r4, #0	@ 00090588 201c
.org 0x9058a
	bl 0x1cff0	@ 0009058a 8cf731fd
.org 0x9058e
	ldr r2, [r7, #84]	@ 0009058e 7a6d
.org 0x90590
	ldrb r1, [r7, #10]	@ 00090590 b97a
.org 0x90592
	movs r0, #16	@ 00090592 1020
.org 0x90594
	ands r0, r1	@ 00090594 0840
.org 0x90596
	cmp r0, #0	@ 00090596 0028
.org 0x90598
	beq.n 0x905a2	@ 00090598 03d0
.org 0x9059a
	movs r3, #128	@ 0009059a 8023
.org 0x9059c
	lsls r3, r3, #3	@ 0009059c db00
.org 0x9059e
	adds r1, r2, r3	@ 0009059e d118
.org 0x905a0
	b.n 0x905a6	@ 000905a0 01e0
.org 0x905a2
	ldr r0, [pc, #60]	@ 000905a2 0f48
.org 0x905a4
	adds r1, r2, r0	@ 000905a4 1118
.org 0x905a6
	ldr r0, [r5, #84]	@ 000905a6 686d
.org 0x905a8
	subs r0, r0, r1	@ 000905a8 401a
.org 0x905aa
	mov r2, r8	@ 000905aa 4246
.org 0x905ac
	adds r2, #1	@ 000905ac 0132
.org 0x905ae
	muls r0, r2	@ 000905ae 5043
.org 0x905b0
	cmp r0, #0	@ 000905b0 0028
.org 0x905b2
	bge.n 0x905b6	@ 000905b2 00da
.org 0x905b4
	adds r0, #3	@ 000905b4 0330
.org 0x905b6
	asrs r0, r0, #2	@ 000905b6 8010
.org 0x905b8
	adds r0, r1, r0	@ 000905b8 0818
.org 0x905ba
	str r0, [r4, #84]	@ 000905ba 6065
.org 0x905bc
	ldr r0, [r7, #88]	@ 000905bc b86d
.org 0x905be
	ldr r3, [pc, #36]	@ 000905be 094b
.org 0x905c0
	adds r1, r0, r3	@ 000905c0 c118
.org 0x905c2
	ldr r0, [r5, #88]	@ 000905c2 a86d
.org 0x905c4
	subs r0, r0, r1	@ 000905c4 401a
.org 0x905c6
	muls r0, r2	@ 000905c6 5043
.org 0x905c8
	cmp r0, #0	@ 000905c8 0028
.org 0x905ca
	bge.n 0x905ce	@ 000905ca 00da
.org 0x905cc
	adds r0, #3	@ 000905cc 0330
