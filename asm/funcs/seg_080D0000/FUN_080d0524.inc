@ FUN_080d0524  entry 0x080d0524  size 112
.thumb
.org 0xd0524
FUN_080d0524:
	push {r4, r5, lr}	@ 000d0524 30b5
.org 0xd0526
	adds r4, r0, #0	@ 000d0526 041c
.org 0xd0528
	ldr r5, [r4, #40]	@ 000d0528 a56a
.org 0xd052a
	ldrb r1, [r4, #15]	@ 000d052a e17b
.org 0xd052c
	cmp r1, #0	@ 000d052c 0029
.org 0xd052e
	bne.n 0xd0552	@ 000d052e 10d1
.org 0xd0530
	adds r0, #140	@ 000d0530 8c30
.org 0xd0532
	str r1, [r0, #0]	@ 000d0532 0160
.org 0xd0534
	adds r0, #4	@ 000d0534 0430
.org 0xd0536
	str r1, [r0, #0]	@ 000d0536 0160
.org 0xd0538
	adds r0, #4	@ 000d0538 0430
.org 0xd053a
	strb r1, [r0, #0]	@ 000d053a 0170
.org 0xd053c
	ldrb r1, [r4, #10]	@ 000d053c a17a
.org 0xd053e
	movs r0, #251	@ 000d053e fb20
.org 0xd0540
	ands r0, r1	@ 000d0540 0840
.org 0xd0542
	strb r0, [r4, #10]	@ 000d0542 a072
.org 0xd0544
	ldr r1, [pc, #76]	@ 000d0544 1349
.org 0xd0546
	adds r0, r4, #0	@ 000d0546 201c
.org 0xd0548
	bl 0x1cf00	@ 000d0548 4cf7dafc
.org 0xd054c
	ldrb r0, [r4, #15]	@ 000d054c e07b
.org 0xd054e
	adds r0, #1	@ 000d054e 0130
.org 0xd0550
	strb r0, [r4, #15]	@ 000d0550 e073
.org 0xd0552
	adds r0, r4, #0	@ 000d0552 201c
.org 0xd0554
	bl 0x1cff0	@ 000d0554 4cf74cfd
.org 0xd0558
	adds r0, r4, #0	@ 000d0558 201c
.org 0xd055a
	adds r0, #115	@ 000d055a 7330
.org 0xd055c
	ldrb r0, [r0, #0]	@ 000d055c 0078
.org 0xd055e
	cmp r0, #3	@ 000d055e 0328
.org 0xd0560
	bne.n 0xd058e	@ 000d0560 15d1
.org 0xd0562
	adds r1, r5, #0	@ 000d0562 291c
.org 0xd0564
	adds r1, #204	@ 000d0564 cc31
.org 0xd0566
	ldrh r2, [r1, #0]	@ 000d0566 0a88
.org 0xd0568
	movs r3, #0	@ 000d0568 0023
.org 0xd056a
	ldrsh r0, [r1, r3]	@ 000d056a c85e
.org 0xd056c
	cmp r0, #0	@ 000d056c 0028
.org 0xd056e
	beq.n 0xd0574	@ 000d056e 01d0
.org 0xd0570
	subs r0, r2, #1	@ 000d0570 501e
.org 0xd0572
	strh r0, [r1, #0]	@ 000d0572 0880
.org 0xd0574
	ldrb r1, [r4, #10]	@ 000d0574 a17a
.org 0xd0576
	movs r0, #254	@ 000d0576 fe20
.org 0xd0578
	ands r0, r1	@ 000d0578 0840
.org 0xd057a
	strb r0, [r4, #10]	@ 000d057a a072
.org 0xd057c
	ldr r1, [pc, #24]	@ 000d057c 0649
.org 0xd057e
	ldrb r0, [r4, #9]	@ 000d057e 607a
.org 0xd0580
	lsls r0, r0, #2	@ 000d0580 8000
.org 0xd0582
	adds r0, r0, r1	@ 000d0582 4018
.org 0xd0584
	movs r1, #4	@ 000d0584 0421
.org 0xd0586
	str r1, [r4, #12]	@ 000d0586 e160
.org 0xd0588
	ldr r0, [r0, #0]	@ 000d0588 0068
.org 0xd058a
	ldr r0, [r0, #16]	@ 000d058a 0069
.org 0xd058c
	str r0, [r4, #20]	@ 000d058c 6061
.org 0xd058e
	pop {r4, r5}	@ 000d058e 30bc
.org 0xd0590
	pop {r0}	@ 000d0590 01bc
.org 0xd0592
	bx r0	@ 000d0592 0047
