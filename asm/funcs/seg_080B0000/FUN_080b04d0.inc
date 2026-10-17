@ FUN_080b04d0  entry 0x080b04d0  size 216
.thumb
.org 0xb04d0
FUN_080b04d0:
	push {r4, r5, r6, lr}	@ 000b04d0 70b5
.org 0xb04d2
	adds r6, r0, #0	@ 000b04d2 061c
.org 0xb04d4
	ldrb r5, [r6, #16]	@ 000b04d4 357c
.org 0xb04d6
	cmp r5, #1	@ 000b04d6 012d
.org 0xb04d8
	bne.n 0xb0504	@ 000b04d8 14d1
.org 0xb04da
	adds r4, r6, #0	@ 000b04da 341c
.org 0xb04dc
	adds r4, #84	@ 000b04dc 5434
.org 0xb04de
	movs r0, #2	@ 000b04de 0220
.org 0xb04e0
	adds r1, r4, #0	@ 000b04e0 211c
.org 0xb04e2
	bl 0xd0c88	@ 000b04e2 20f0d1fb
.org 0xb04e6
	ldr r1, [r6, #40]	@ 000b04e6 b16a
.org 0xb04e8
	adds r1, #183	@ 000b04e8 b731
.org 0xb04ea
	ldrb r0, [r6, #17]	@ 000b04ea 707c
.org 0xb04ec
	lsls r5, r0	@ 000b04ec 8540
.org 0xb04ee
	ldrb r0, [r1, #0]	@ 000b04ee 0878
.org 0xb04f0
	bics r0, r5	@ 000b04f0 a843
.org 0xb04f2
	strb r0, [r1, #0]	@ 000b04f2 0870
.org 0xb04f4
	movs r0, #1	@ 000b04f4 0120
.org 0xb04f6
	movs r1, #255	@ 000b04f6 ff21
.org 0xb04f8
	adds r2, r4, #0	@ 000b04f8 221c
.org 0xb04fa
	bl 0x2ab88	@ 000b04fa 7af745fb
.org 0xb04fe
	movs r0, #42	@ 000b04fe 2a20
.org 0xb0500
	bl 0x2b10	@ 000b0500 52f706fb
.org 0xb0504
	ldrb r0, [r6, #16]	@ 000b0504 307c
.org 0xb0506
	adds r4, r6, #0	@ 000b0506 341c
.org 0xb0508
	adds r4, #84	@ 000b0508 5434
.org 0xb050a
	cmp r0, #0	@ 000b050a 0028
.org 0xb050c
	bne.n 0xb057a	@ 000b050c 35d1
.org 0xb050e
	adds r0, r6, #0	@ 000b050e 301c
.org 0xb0510
	adds r0, #181	@ 000b0510 b530
.org 0xb0512
	ldrb r1, [r0, #0]	@ 000b0512 0178
.org 0xb0514
	adds r5, r0, #0	@ 000b0514 051c
.org 0xb0516
	cmp r1, #0	@ 000b0516 0029
.org 0xb0518
	bne.n 0xb0548	@ 000b0518 16d1
.org 0xb051a
	ldrb r0, [r6, #18]	@ 000b051a b07c
.org 0xb051c
	cmp r0, #255	@ 000b051c ff28
.org 0xb051e
	beq.n 0xb0548	@ 000b051e 13d0
.org 0xb0520
	adds r0, r6, #0	@ 000b0520 301c
.org 0xb0522
	adds r0, #140	@ 000b0522 8c30
.org 0xb0524
	ldr r0, [r0, #0]	@ 000b0524 0068
.org 0xb0526
	movs r1, #128	@ 000b0526 8021
.org 0xb0528
	lsls r1, r1, #9	@ 000b0528 4902
.org 0xb052a
	ands r0, r1	@ 000b052a 0840
.org 0xb052c
	cmp r0, #0	@ 000b052c 0028
.org 0xb052e
	beq.n 0xb0536	@ 000b052e 02d0
.org 0xb0530
	adds r0, r4, #0	@ 000b0530 201c
.org 0xb0532
	movs r1, #0	@ 000b0532 0021
.org 0xb0534
	b.n 0xb0540	@ 000b0534 04e0
.org 0xb0536
	movs r0, #42	@ 000b0536 2a20
.org 0xb0538
	bl 0x2b10	@ 000b0538 52f7eafa
.org 0xb053c
	adds r0, r4, #0	@ 000b053c 201c
.org 0xb053e
	movs r1, #1	@ 000b053e 0121
.org 0xb0540
	movs r2, #0	@ 000b0540 0022
.org 0xb0542
	bl 0xe52b4	@ 000b0542 34f0b7fe
.org 0xb0546
	b.n 0xb056a	@ 000b0546 10e0
.org 0xb0548
	adds r4, r6, #0	@ 000b0548 341c
.org 0xb054a
	adds r4, #84	@ 000b054a 5434
.org 0xb054c
	adds r0, r4, #0	@ 000b054c 201c
.org 0xb054e
	movs r1, #2	@ 000b054e 0221
.org 0xb0550
	movs r2, #0	@ 000b0550 0022
.org 0xb0552
	bl 0xe52b4	@ 000b0552 34f0affe
.org 0xb0556
	ldrb r0, [r5, #0]	@ 000b0556 2878
.org 0xb0558
	cmp r0, #1	@ 000b0558 0128
.org 0xb055a
	bne.n 0xb0564	@ 000b055a 03d1
.org 0xb055c
	movs r0, #42	@ 000b055c 2a20
.org 0xb055e
	bl 0x2b10	@ 000b055e 52f7d7fa
.org 0xb0562
	b.n 0xb056a	@ 000b0562 02e0
.org 0xb0564
	movs r0, #53	@ 000b0564 3520
.org 0xb0566
	bl 0x2b10	@ 000b0566 52f7d3fa
.org 0xb056a
	ldrb r0, [r5, #0]	@ 000b056a 2878
.org 0xb056c
	cmp r0, #2	@ 000b056c 0228
.org 0xb056e
	beq.n 0xb057a	@ 000b056e 04d0
.org 0xb0570
	movs r0, #3	@ 000b0570 0320
.org 0xb0572
	movs r1, #28	@ 000b0572 1c21
.org 0xb0574
	adds r2, r4, #0	@ 000b0574 221c
.org 0xb0576
	bl 0x2ab88	@ 000b0576 7af707fb
.org 0xb057a
	ldr r2, [pc, #44]	@ 000b057a 0b4a
.org 0xb057c
	ldrh r1, [r2, #12]	@ 000b057c 9189
.org 0xb057e
	ldr r0, [pc, #44]	@ 000b057e 0b48
.org 0xb0580
	cmp r1, r0	@ 000b0580 8142
.org 0xb0582
	bhi.n 0xb0588	@ 000b0582 01d8
.org 0xb0584
	adds r0, r1, #1	@ 000b0584 481c
.org 0xb0586
	strh r0, [r2, #12]	@ 000b0586 9081
.org 0xb0588
	adds r0, r6, #0	@ 000b0588 301c
.org 0xb058a
	adds r1, r4, #0	@ 000b058a 211c
.org 0xb058c
	bl 0x2abe0	@ 000b058c 7af728fb
.org 0xb0590
	ldr r1, [pc, #28]	@ 000b0590 0749
.org 0xb0592
	ldrb r0, [r6, #9]	@ 000b0592 707a
.org 0xb0594
	lsls r0, r0, #2	@ 000b0594 8000
.org 0xb0596
	adds r0, r0, r1	@ 000b0596 4018
.org 0xb0598
	movs r1, #4	@ 000b0598 0421
.org 0xb059a
	str r1, [r6, #12]	@ 000b059a f160
.org 0xb059c
	ldr r0, [r0, #0]	@ 000b059c 0068
.org 0xb059e
	ldr r0, [r0, #16]	@ 000b059e 0069
.org 0xb05a0
	str r0, [r6, #20]	@ 000b05a0 7061
.org 0xb05a2
	pop {r4, r5, r6}	@ 000b05a2 70bc
.org 0xb05a4
	pop {r0}	@ 000b05a4 01bc
.org 0xb05a6
	bx r0	@ 000b05a6 0047
