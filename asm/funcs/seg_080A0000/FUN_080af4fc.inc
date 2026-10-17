@ FUN_080af4fc  entry 0x080af4fc  size 84
.thumb
.org 0xaf4fc
FUN_080af4fc:
	push {r4, lr}	@ 000af4fc 10b5
.org 0xaf4fe
	adds r4, r0, #0	@ 000af4fe 041c
.org 0xaf500
	ldr r3, [r4, #44]	@ 000af500 e36a
.org 0xaf502
	cmp r3, #0	@ 000af502 002b
.org 0xaf504
	beq.n 0xaf544	@ 000af504 1ed0
.org 0xaf506
	ldrb r0, [r3, #12]	@ 000af506 187b
.org 0xaf508
	cmp r0, #1	@ 000af508 0128
.org 0xaf50a
	bhi.n 0xaf544	@ 000af50a 1bd8
.org 0xaf50c
	ldrb r1, [r3, #10]	@ 000af50c 997a
.org 0xaf50e
	movs r0, #254	@ 000af50e fe20
.org 0xaf510
	ands r0, r1	@ 000af510 0840
.org 0xaf512
	movs r2, #0	@ 000af512 0022
.org 0xaf514
	movs r1, #253	@ 000af514 fd21
.org 0xaf516
	ands r0, r1	@ 000af516 0840
.org 0xaf518
	strb r0, [r3, #10]	@ 000af518 9872
.org 0xaf51a
	adds r0, r3, #0	@ 000af51a 181c
.org 0xaf51c
	adds r0, #140	@ 000af51c 8c30
.org 0xaf51e
	str r2, [r0, #0]	@ 000af51e 0260
.org 0xaf520
	adds r0, #4	@ 000af520 0430
.org 0xaf522
	str r2, [r0, #0]	@ 000af522 0260
.org 0xaf524
	adds r0, #4	@ 000af524 0430
.org 0xaf526
	strb r2, [r0, #0]	@ 000af526 0270
.org 0xaf528
	ldrb r1, [r3, #10]	@ 000af528 997a
.org 0xaf52a
	movs r0, #251	@ 000af52a fb20
.org 0xaf52c
	ands r0, r1	@ 000af52c 0840
.org 0xaf52e
	strb r0, [r3, #10]	@ 000af52e 9872
.org 0xaf530
	ldr r1, [pc, #28]	@ 000af530 0749
.org 0xaf532
	ldrb r0, [r3, #9]	@ 000af532 587a
.org 0xaf534
	lsls r0, r0, #2	@ 000af534 8000
.org 0xaf536
	adds r0, r0, r1	@ 000af536 4018
.org 0xaf538
	movs r1, #3	@ 000af538 0321
.org 0xaf53a
	str r1, [r3, #12]	@ 000af53a d960
.org 0xaf53c
	ldr r0, [r0, #0]	@ 000af53c 0068
.org 0xaf53e
	ldr r0, [r0, #12]	@ 000af53e c068
.org 0xaf540
	str r0, [r3, #20]	@ 000af540 5861
.org 0xaf542
	str r2, [r4, #44]	@ 000af542 e262
.org 0xaf544
	adds r0, r4, #0	@ 000af544 201c
.org 0xaf546
	bl 0x7f8ec	@ 000af546 d0f7d1f9
.org 0xaf54a
	pop {r4}	@ 000af54a 10bc
.org 0xaf54c
	pop {r0}	@ 000af54c 01bc
.org 0xaf54e
	bx r0	@ 000af54e 0047
