@ FUN_080ba534  entry 0x080ba534  size 100
.thumb
.org 0xba534
FUN_080ba534:
	push {r4, r5, lr}	@ 000ba534 30b5
.org 0xba536
	adds r3, r0, #0	@ 000ba536 031c
.org 0xba538
	ldr r2, [r3, #40]	@ 000ba538 9a6a
.org 0xba53a
	ldr r0, [pc, #92]	@ 000ba53a 1748
.org 0xba53c
	movs r4, #0	@ 000ba53c 0024
.org 0xba53e
	strh r4, [r0, #0]	@ 000ba53e 0480
.org 0xba540
	movs r0, #69	@ 000ba540 4520
.org 0xba542
	adds r0, r0, r3	@ 000ba542 c018
.org 0xba544
	mov ip, r0	@ 000ba544 8446
.org 0xba546
	ldrb r1, [r0, #0]	@ 000ba546 0178
.org 0xba548
	movs r0, #13	@ 000ba548 0d20
.org 0xba54a
	negs r0, r0	@ 000ba54a 4042
.org 0xba54c
	ands r0, r1	@ 000ba54c 0840
.org 0xba54e
	mov r1, ip	@ 000ba54e 6146
.org 0xba550
	strb r0, [r1, #0]	@ 000ba550 0870
.org 0xba552
	adds r2, #204	@ 000ba552 cc32
.org 0xba554
	ldrh r1, [r2, #0]	@ 000ba554 1188
.org 0xba556
	movs r5, #0	@ 000ba556 0025
.org 0xba558
	ldrsh r0, [r2, r5]	@ 000ba558 505f
.org 0xba55a
	cmp r0, #0	@ 000ba55a 0028
.org 0xba55c
	beq.n 0xba562	@ 000ba55c 01d0
.org 0xba55e
	subs r0, r1, #1	@ 000ba55e 481e
.org 0xba560
	strh r0, [r2, #0]	@ 000ba560 1080
.org 0xba562
	adds r0, r3, #0	@ 000ba562 181c
.org 0xba564
	adds r0, #140	@ 000ba564 8c30
.org 0xba566
	str r4, [r0, #0]	@ 000ba566 0460
.org 0xba568
	adds r0, #4	@ 000ba568 0430
.org 0xba56a
	str r4, [r0, #0]	@ 000ba56a 0460
.org 0xba56c
	adds r1, r3, #0	@ 000ba56c 191c
.org 0xba56e
	adds r1, #148	@ 000ba56e 9431
.org 0xba570
	movs r0, #0	@ 000ba570 0020
.org 0xba572
	strb r0, [r1, #0]	@ 000ba572 0870
.org 0xba574
	ldrb r1, [r3, #10]	@ 000ba574 997a
.org 0xba576
	movs r0, #251	@ 000ba576 fb20
.org 0xba578
	ands r0, r1	@ 000ba578 0840
.org 0xba57a
	movs r1, #254	@ 000ba57a fe21
.org 0xba57c
	ands r0, r1	@ 000ba57c 0840
.org 0xba57e
	strb r0, [r3, #10]	@ 000ba57e 9872
.org 0xba580
	ldr r1, [pc, #24]	@ 000ba580 0649
.org 0xba582
	ldrb r0, [r3, #9]	@ 000ba582 587a
.org 0xba584
	lsls r0, r0, #2	@ 000ba584 8000
.org 0xba586
	adds r0, r0, r1	@ 000ba586 4018
.org 0xba588
	movs r1, #4	@ 000ba588 0421
.org 0xba58a
	str r1, [r3, #12]	@ 000ba58a d960
.org 0xba58c
	ldr r0, [r0, #0]	@ 000ba58c 0068
.org 0xba58e
	ldr r0, [r0, #16]	@ 000ba58e 0069
.org 0xba590
	str r0, [r3, #20]	@ 000ba590 5861
.org 0xba592
	pop {r4, r5}	@ 000ba592 30bc
.org 0xba594
	pop {r0}	@ 000ba594 01bc
.org 0xba596
	bx r0	@ 000ba596 0047
