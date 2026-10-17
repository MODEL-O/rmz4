@ FUN_080c8504  entry 0x080c8504  size 140
.thumb
.org 0xc8504
FUN_080c8504:
	push {r4, r5, lr}	@ 000c8504 30b5
.org 0xc8506
	adds r4, r0, #0	@ 000c8506 041c
.org 0xc8508
	ldr r5, [r4, #40]	@ 000c8508 a56a
.org 0xc850a
	ldrb r0, [r4, #15]	@ 000c850a e07b
.org 0xc850c
	cmp r0, #0	@ 000c850c 0028
.org 0xc850e
	bne.n 0xc852c	@ 000c850e 0dd1
.org 0xc8510
	adds r0, r4, #0	@ 000c8510 201c
.org 0xc8512
	adds r0, #116	@ 000c8512 7430
.org 0xc8514
	ldr r1, [pc, #44]	@ 000c8514 0b49
.org 0xc8516
	bl 0x5784	@ 000c8516 3df735f9
.org 0xc851a
	ldr r1, [pc, #44]	@ 000c851a 0b49
.org 0xc851c
	adds r0, r4, #0	@ 000c851c 201c
.org 0xc851e
	bl 0x1cf00	@ 000c851e 54f7effc
.org 0xc8522
	movs r0, #48	@ 000c8522 3020
.org 0xc8524
	strb r0, [r4, #18]	@ 000c8524 a074
.org 0xc8526
	ldrb r0, [r4, #15]	@ 000c8526 e07b
.org 0xc8528
	adds r0, #1	@ 000c8528 0130
.org 0xc852a
	strb r0, [r4, #15]	@ 000c852a e073
.org 0xc852c
	adds r0, r4, #0	@ 000c852c 201c
.org 0xc852e
	bl 0x1cff0	@ 000c852e 54f75ffd
.org 0xc8532
	ldr r2, [r5, #84]	@ 000c8532 6a6d
.org 0xc8534
	ldrb r1, [r5, #10]	@ 000c8534 a97a
.org 0xc8536
	movs r0, #16	@ 000c8536 1020
.org 0xc8538
	ands r0, r1	@ 000c8538 0840
.org 0xc853a
	cmp r0, #0	@ 000c853a 0028
.org 0xc853c
	beq.n 0xc854c	@ 000c853c 06d0
.org 0xc853e
	movs r1, #128	@ 000c853e 8021
.org 0xc8540
	lsls r1, r1, #4	@ 000c8540 0901
.org 0xc8542
	b.n 0xc854e	@ 000c8542 04e0
.org 0xc8544
	.byte 0xd4,0x5f,0x86,0x08	@ 000c8544 data
.org 0xc8548
	.byte 0x09,0x83,0x00,0x00	@ 000c8548 data
.org 0xc854c
	ldr r1, [pc, #44]	@ 000c854c 0b49
.org 0xc854e
	adds r0, r2, r1	@ 000c854e 5018
.org 0xc8550
	str r0, [r4, #84]	@ 000c8550 6065
.org 0xc8552
	ldr r0, [r5, #88]	@ 000c8552 a86d
.org 0xc8554
	str r0, [r4, #88]	@ 000c8554 a065
.org 0xc8556
	ldrb r0, [r5, #12]	@ 000c8556 287b
.org 0xc8558
	cmp r0, #1	@ 000c8558 0128
.org 0xc855a
	bhi.n 0xc8562	@ 000c855a 02d8
.org 0xc855c
	ldr r0, [r5, #44]	@ 000c855c e86a
.org 0xc855e
	cmp r0, #0	@ 000c855e 0028
.org 0xc8560
	beq.n 0xc8584	@ 000c8560 10d0
.org 0xc8562
	ldr r1, [pc, #28]	@ 000c8562 0749
.org 0xc8564
	ldrb r0, [r4, #9]	@ 000c8564 607a
.org 0xc8566
	lsls r0, r0, #2	@ 000c8566 8000
.org 0xc8568
	adds r0, r0, r1	@ 000c8568 4018
.org 0xc856a
	movs r1, #2	@ 000c856a 0221
.org 0xc856c
	str r1, [r4, #12]	@ 000c856c e160
.org 0xc856e
	ldr r0, [r0, #0]	@ 000c856e 0068
.org 0xc8570
	ldr r0, [r0, #8]	@ 000c8570 8068
.org 0xc8572
	str r0, [r4, #20]	@ 000c8572 6061
.org 0xc8574
	adds r0, r4, #0	@ 000c8574 201c
.org 0xc8576
	bl 0xc870c	@ 000c8576 00f0c9f8
.org 0xc857a
	b.n 0xc859a	@ 000c857a 0ee0
.org 0xc857c
	.byte 0x00,0xf8,0xff,0xff	@ 000c857c data
.org 0xc8580
	.byte 0xf4,0x49,0x86,0x08	@ 000c8580 data
.org 0xc8584
	ldrb r0, [r4, #18]	@ 000c8584 a07c
.org 0xc8586
	subs r0, #1	@ 000c8586 0138
.org 0xc8588
	strb r0, [r4, #18]	@ 000c8588 a074
.org 0xc858a
	lsls r0, r0, #24	@ 000c858a 0006
.org 0xc858c
	lsrs r1, r0, #24	@ 000c858c 010e
.org 0xc858e
	cmp r1, #0	@ 000c858e 0029
