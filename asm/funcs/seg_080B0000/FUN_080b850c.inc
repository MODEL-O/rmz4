@ FUN_080b850c  entry 0x080b850c  size 162
.thumb
.org 0xb850c
FUN_080b850c:
	push {r4, r5, lr}	@ 000b850c 30b5
.org 0xb850e
	adds r5, r0, #0	@ 000b850e 051c
.org 0xb8510
	bl 0x1cc9c	@ 000b8510 64f7c4fb
.org 0xb8514
	ldrb r1, [r5, #10]	@ 000b8514 a97a
.org 0xb8516
	movs r0, #1	@ 000b8516 0120
.org 0xb8518
	movs r4, #0	@ 000b8518 0024
.org 0xb851a
	orrs r0, r1	@ 000b851a 0843
.org 0xb851c
	movs r1, #2	@ 000b851c 0221
.org 0xb851e
	orrs r0, r1	@ 000b851e 0843
.org 0xb8520
	strb r0, [r5, #10]	@ 000b8520 a872
.org 0xb8522
	ldrb r0, [r5, #16]	@ 000b8522 287c
.org 0xb8524
	cmp r0, #0	@ 000b8524 0028
.org 0xb8526
	bne.n 0xb8568	@ 000b8526 1fd1
.org 0xb8528
	ldr r1, [pc, #48]	@ 000b8528 0c49
.org 0xb852a
	adds r0, r5, #0	@ 000b852a 281c
.org 0xb852c
	bl 0x1cf00	@ 000b852c 64f7e8fc
.org 0xb8530
	adds r1, r5, #0	@ 000b8530 291c
.org 0xb8532
	adds r1, #37	@ 000b8532 2531
.org 0xb8534
	movs r0, #22	@ 000b8534 1620
.org 0xb8536
	strb r0, [r1, #0]	@ 000b8536 0870
.org 0xb8538
	ldrb r0, [r5, #10]	@ 000b8538 a87a
.org 0xb853a
	movs r1, #4	@ 000b853a 0421
.org 0xb853c
	orrs r0, r1	@ 000b853c 0843
.org 0xb853e
	strb r0, [r5, #10]	@ 000b853e a872
.org 0xb8540
	adds r4, r5, #0	@ 000b8540 2c1c
.org 0xb8542
	adds r4, #116	@ 000b8542 7434
.org 0xb8544
	ldr r1, [pc, #24]	@ 000b8544 0649
.org 0xb8546
	adds r2, r5, #0	@ 000b8546 2a1c
.org 0xb8548
	adds r2, #84	@ 000b8548 5432
.org 0xb854a
	adds r0, r4, #0	@ 000b854a 201c
.org 0xb854c
	movs r3, #8	@ 000b854c 0823
.org 0xb854e
	bl 0x5760	@ 000b854e 4df707f9
.org 0xb8552
	str r5, [r4, #44]	@ 000b8552 e562
.org 0xb8554
	ldr r0, [pc, #12]	@ 000b8554 0348
.org 0xb8556
	str r0, [r4, #36]	@ 000b8556 6062
.org 0xb8558
	b.n 0xb857a	@ 000b8558 0fe0
.org 0xb855a
	.byte 0x00	@ 000b855a data
.org 0xb855b
	.byte 0x00	@ 000b855b data
.org 0xb855c
	.byte 0x03,0xd8,0x00,0x00	@ 000b855c data
.org 0xb8560
	.byte 0xe8,0x41,0x86,0x08	@ 000b8560 data
.org 0xb8564
	.byte 0x4d,0x87,0x0b,0x08	@ 000b8564 data
.org 0xb8568
	movs r1, #216	@ 000b8568 d821
.org 0xb856a
	lsls r1, r1, #8	@ 000b856a 0902
.org 0xb856c
	adds r0, r5, #0	@ 000b856c 281c
.org 0xb856e
	bl 0x1cf00	@ 000b856e 64f7c7fc
.org 0xb8572
	adds r1, r5, #0	@ 000b8572 291c
.org 0xb8574
	adds r1, #37	@ 000b8574 2531
.org 0xb8576
	movs r0, #24	@ 000b8576 1820
.org 0xb8578
	strb r0, [r1, #0]	@ 000b8578 0870
.org 0xb857a
	adds r0, r5, #0	@ 000b857a 281c
.org 0xb857c
	bl 0x1cff0	@ 000b857c 64f738fd
.org 0xb8580
	movs r2, #0	@ 000b8580 0022
.org 0xb8582
	ldrb r1, [r5, #10]	@ 000b8582 a97a
.org 0xb8584
	movs r0, #239	@ 000b8584 ef20
.org 0xb8586
	ands r0, r1	@ 000b8586 0840
.org 0xb8588
	strb r0, [r5, #10]	@ 000b8588 a872
.org 0xb858a
	movs r3, #1	@ 000b858a 0123
.org 0xb858c
	adds r0, r5, #0	@ 000b858c 281c
.org 0xb858e
	adds r0, #76	@ 000b858e 4c30
.org 0xb8590
	strb r2, [r0, #0]	@ 000b8590 0270
.org 0xb8592
	adds r2, r5, #0	@ 000b8592 2a1c
.org 0xb8594
	adds r2, #74	@ 000b8594 4a32
.org 0xb8596
	ldrb r1, [r2, #0]	@ 000b8596 1178
.org 0xb8598
	movs r0, #17	@ 000b8598 1120
.org 0xb859a
	negs r0, r0	@ 000b859a 4042
.org 0xb859c
	ands r0, r1	@ 000b859c 0840
.org 0xb859e
	strb r0, [r2, #0]	@ 000b859e 1070
.org 0xb85a0
	ldr r1, [pc, #24]	@ 000b85a0 0649
.org 0xb85a2
	ldrb r0, [r5, #9]	@ 000b85a2 687a
.org 0xb85a4
	lsls r0, r0, #2	@ 000b85a4 8000
.org 0xb85a6
	adds r0, r0, r1	@ 000b85a6 4018
.org 0xb85a8
	str r3, [r5, #12]	@ 000b85a8 eb60
.org 0xb85aa
	ldr r0, [r0, #0]	@ 000b85aa 0068
.org 0xb85ac
	ldr r0, [r0, #4]	@ 000b85ac 4068
