@ FUN_080f6528  entry 0x080f6528  size 138
.thumb
.org 0xf6528
FUN_080f6528:
	push {r4, r5, lr}	@ 000f6528 30b5
.org 0xf652a
	adds r5, r0, #0	@ 000f652a 051c
.org 0xf652c
	bl 0x1cc9c	@ 000f652c 26f7b6fb
.org 0xf6530
	ldrb r1, [r5, #10]	@ 000f6530 a97a
.org 0xf6532
	movs r0, #1	@ 000f6532 0120
.org 0xf6534
	orrs r0, r1	@ 000f6534 0843
.org 0xf6536
	movs r1, #2	@ 000f6536 0221
.org 0xf6538
	orrs r0, r1	@ 000f6538 0843
.org 0xf653a
	strb r0, [r5, #10]	@ 000f653a a872
.org 0xf653c
	ldr r1, [r5, #84]	@ 000f653c 696d
.org 0xf653e
	ldr r0, [pc, #16]	@ 000f653e 0448
.org 0xf6540
	cmp r1, r0	@ 000f6540 8142
.org 0xf6542
	bgt.n 0xf6554	@ 000f6542 07dc
.org 0xf6544
	movs r1, #150	@ 000f6544 9621
.org 0xf6546
	lsls r1, r1, #7	@ 000f6546 c901
.org 0xf6548
	adds r0, r5, #0	@ 000f6548 281c
.org 0xf654a
	bl 0x1cf00	@ 000f654a 26f7d9fc
.org 0xf654e
	b.n 0xf655e	@ 000f654e 06e0
.org 0xf6550
	.byte 0xff,0x1f,0x1c,0x00	@ 000f6550 data
.org 0xf6554
	movs r1, #252	@ 000f6554 fc21
.org 0xf6556
	lsls r1, r1, #7	@ 000f6556 c901
.org 0xf6558
	adds r0, r5, #0	@ 000f6558 281c
.org 0xf655a
	bl 0x1cf00	@ 000f655a 26f7d1fc
.org 0xf655e
	ldrb r1, [r5, #11]	@ 000f655e e97a
.org 0xf6560
	movs r0, #8	@ 000f6560 0820
.org 0xf6562
	orrs r0, r1	@ 000f6562 0843
.org 0xf6564
	strb r0, [r5, #11]	@ 000f6564 e872
.org 0xf6566
	ldrb r0, [r5, #16]	@ 000f6566 287c
.org 0xf6568
	lsls r0, r0, #3	@ 000f6568 c000
.org 0xf656a
	ldr r1, [pc, #76]	@ 000f656a 1349
.org 0xf656c
	adds r0, r0, r1	@ 000f656c 4018
.org 0xf656e
	str r0, [r5, #48]	@ 000f656e 2863
.org 0xf6570
	movs r4, #0	@ 000f6570 0024
.org 0xf6572
	ldr r0, [pc, #72]	@ 000f6572 1248
.org 0xf6574
	strh r0, [r5, #38]	@ 000f6574 e884
.org 0xf6576
	ldr r0, [r5, #84]	@ 000f6576 686d
.org 0xf6578
	ldr r1, [r5, #88]	@ 000f6578 a96d
.org 0xf657a
	bl 0x8534	@ 000f657a 11f7dbff
.org 0xf657e
	ldr r1, [pc, #64]	@ 000f657e 1049
.org 0xf6580
	adds r0, r0, r1	@ 000f6580 4018
.org 0xf6582
	str r0, [r5, #88]	@ 000f6582 a865
.org 0xf6584
	strb r4, [r5, #13]	@ 000f6584 6c73
.org 0xf6586
	strb r4, [r5, #14]	@ 000f6586 ac73
.org 0xf6588
	ldrb r1, [r5, #16]	@ 000f6588 297c
.org 0xf658a
	adds r0, r5, #0	@ 000f658a 281c
.org 0xf658c
	bl 0xf6a24	@ 000f658c 00f04afa
.org 0xf6590
	ldrb r2, [r5, #13]	@ 000f6590 6a7b
.org 0xf6592
	ldrb r3, [r5, #14]	@ 000f6592 ab7b
.org 0xf6594
	ldr r1, [pc, #44]	@ 000f6594 0b49
.org 0xf6596
	ldrb r0, [r5, #9]	@ 000f6596 687a
.org 0xf6598
	lsls r0, r0, #2	@ 000f6598 8000
.org 0xf659a
	adds r0, r0, r1	@ 000f659a 4018
.org 0xf659c
	movs r1, #1	@ 000f659c 0121
.org 0xf659e
	str r1, [r5, #12]	@ 000f659e e960
.org 0xf65a0
	ldr r0, [r0, #0]	@ 000f65a0 0068
.org 0xf65a2
	ldr r0, [r0, #4]	@ 000f65a2 4068
.org 0xf65a4
	str r0, [r5, #20]	@ 000f65a4 6861
.org 0xf65a6
	strb r2, [r5, #13]	@ 000f65a6 6a73
.org 0xf65a8
	strb r3, [r5, #14]	@ 000f65a8 ab73
.org 0xf65aa
	adds r0, r5, #0	@ 000f65aa 281c
.org 0xf65ac
	bl 0xf64c0	@ 000f65ac fff788ff
.org 0xf65b0
	pop {r4, r5}	@ 000f65b0 30bc
