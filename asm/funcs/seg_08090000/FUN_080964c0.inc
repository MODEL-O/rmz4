@ FUN_080964c0  entry 0x080964c0  size 222
.thumb
.org 0x964c0
FUN_080964c0:
	push {r4, r5, r6, r7, lr}	@ 000964c0 f0b5
.org 0x964c2
	mov r7, sl	@ 000964c2 5746
.org 0x964c4
	mov r6, r9	@ 000964c4 4e46
.org 0x964c6
	mov r5, r8	@ 000964c6 4546
.org 0x964c8
	push {r5, r6, r7}	@ 000964c8 e0b4
.org 0x964ca
	sub sp, #16	@ 000964ca 84b0
.org 0x964cc
	adds r7, r0, #0	@ 000964cc 071c
.org 0x964ce
	ldr r1, [pc, #208]	@ 000964ce 3449
.org 0x964d0
	mov r0, sp	@ 000964d0 6846
.org 0x964d2
	movs r2, #4	@ 000964d2 0422
.org 0x964d4
	bl 0x129258	@ 000964d4 92f0c0fe
.org 0x964d8
	ldrb r0, [r7, #10]	@ 000964d8 b87a
.org 0x964da
	lsrs r0, r0, #4	@ 000964da 0009
.org 0x964dc
	mov r8, r0	@ 000964dc 8046
.org 0x964de
	movs r0, #1	@ 000964de 0120
.org 0x964e0
	mov r1, r8	@ 000964e0 4146
.org 0x964e2
	ands r1, r0	@ 000964e2 0140
.org 0x964e4
	mov r8, r1	@ 000964e4 8846
.org 0x964e6
	ldr r2, [pc, #188]	@ 000964e6 2f4a
.org 0x964e8
	ldr r0, [r2, #0]	@ 000964e8 1068
.org 0x964ea
	ldr r4, [pc, #188]	@ 000964ea 2f4c
.org 0x964ec
	muls r0, r4	@ 000964ec 6043
.org 0x964ee
	ldr r3, [pc, #188]	@ 000964ee 2f4b
.org 0x964f0
	adds r0, r0, r3	@ 000964f0 c018
.org 0x964f2
	lsls r0, r0, #1	@ 000964f2 4000
.org 0x964f4
	lsrs r1, r0, #1	@ 000964f4 4108
.org 0x964f6
	str r1, [r2, #0]	@ 000964f6 1160
.org 0x964f8
	lsrs r0, r0, #17	@ 000964f8 400c
.org 0x964fa
	movs r1, #3	@ 000964fa 0321
.org 0x964fc
	ands r0, r1	@ 000964fc 0840
.org 0x964fe
	adds r6, r0, #0	@ 000964fe 061c
.org 0x96500
	adds r6, #16	@ 00096500 1036
.org 0x96502
	cmp r6, #0	@ 00096502 002e
.org 0x96504
	beq.n 0x96574	@ 00096504 36d0
.org 0x96506
	mov r1, r8	@ 00096506 4146
.org 0x96508
	lsls r0, r1, #1	@ 00096508 4800
.org 0x9650a
	subs r0, #1	@ 0009650a 0138
.org 0x9650c
	lsls r0, r0, #10	@ 0009650c 8002
.org 0x9650e
	negs r0, r0	@ 0009650e 4042
.org 0x96510
	str r0, [sp, #12]	@ 00096510 0390
.org 0x96512
	mov r9, r2	@ 00096512 9146
.org 0x96514
	mov sl, r3	@ 00096514 9a46
.org 0x96516
	ldr r4, [r7, #84]	@ 00096516 7c6d
.org 0x96518
	ldr r2, [sp, #12]	@ 00096518 039a
.org 0x9651a
	adds r4, r4, r2	@ 0009651a a418
.org 0x9651c
	mov r1, r9	@ 0009651c 4946
.org 0x9651e
	ldr r0, [r1, #0]	@ 0009651e 0868
.org 0x96520
	ldr r2, [pc, #132]	@ 00096520 214a
.org 0x96522
	muls r0, r2	@ 00096522 5043
.org 0x96524
	add r0, sl	@ 00096524 5044
.org 0x96526
	lsls r0, r0, #1	@ 00096526 4000
.org 0x96528
	lsrs r5, r0, #1	@ 00096528 4508
.org 0x9652a
	str r5, [r1, #0]	@ 0009652a 0d60
.org 0x9652c
	lsrs r0, r0, #17	@ 0009652c 400c
.org 0x9652e
	movs r1, #56	@ 0009652e 3821
.org 0x96530
	bl 0x129198	@ 00096530 92f032fe
.org 0x96534
	subs r0, #28	@ 00096534 1c38
.org 0x96536
	lsls r0, r0, #8	@ 00096536 0002
.org 0x96538
	adds r4, r4, r0	@ 00096538 2418
.org 0x9653a
	str r4, [sp, #4]	@ 0009653a 0194
.org 0x9653c
	ldr r1, [pc, #104]	@ 0009653c 1a49
.org 0x9653e
	adds r0, r5, #0	@ 0009653e 281c
.org 0x96540
	muls r0, r1	@ 00096540 4843
.org 0x96542
	add r0, sl	@ 00096542 5044
.org 0x96544
	lsls r0, r0, #1	@ 00096544 4000
.org 0x96546
	lsrs r1, r0, #1	@ 00096546 4108
.org 0x96548
	mov r2, r9	@ 00096548 4a46
.org 0x9654a
	str r1, [r2, #0]	@ 0009654a 1160
.org 0x9654c
	lsrs r0, r0, #17	@ 0009654c 400c
.org 0x9654e
	movs r1, #63	@ 0009654e 3f21
.org 0x96550
	ands r0, r1	@ 00096550 0840
.org 0x96552
	lsls r0, r0, #8	@ 00096552 0002
.org 0x96554
	ldr r1, [pc, #88]	@ 00096554 1649
.org 0x96556
	adds r0, r0, r1	@ 00096556 4018
.org 0x96558
	ldr r1, [r7, #88]	@ 00096558 b96d
.org 0x9655a
	adds r1, r1, r0	@ 0009655a 0918
.org 0x9655c
	add r0, sp, #4	@ 0009655c 01a8
.org 0x9655e
	str r1, [r0, #4]	@ 0009655e 4160
.org 0x96560
	movs r1, #3	@ 00096560 0321
.org 0x96562
	ands r1, r6	@ 00096562 3140
.org 0x96564
	add r1, sp	@ 00096564 6944
.org 0x96566
	ldrb r1, [r1, #0]	@ 00096566 0978
.org 0x96568
	mov r2, r8	@ 00096568 4246
.org 0x9656a
	bl 0xe03d8	@ 0009656a 49f035ff
.org 0x9656e
	subs r6, #1	@ 0009656e 013e
.org 0x96570
	cmp r6, #0	@ 00096570 002e
.org 0x96572
	bne.n 0x96516	@ 00096572 d0d1
.org 0x96574
	ldrb r1, [r7, #10]	@ 00096574 b97a
.org 0x96576
	movs r0, #254	@ 00096576 fe20
.org 0x96578
	ands r0, r1	@ 00096578 0840
.org 0x9657a
	strb r0, [r7, #10]	@ 0009657a b872
.org 0x9657c
	ldr r1, [pc, #52]	@ 0009657c 0d49
.org 0x9657e
	ldrb r0, [r7, #9]	@ 0009657e 787a
.org 0x96580
	lsls r0, r0, #2	@ 00096580 8000
.org 0x96582
	adds r0, r0, r1	@ 00096582 4018
.org 0x96584
	movs r1, #4	@ 00096584 0421
.org 0x96586
	str r1, [r7, #12]	@ 00096586 f960
.org 0x96588
	ldr r0, [r0, #0]	@ 00096588 0068
.org 0x9658a
	ldr r0, [r0, #16]	@ 0009658a 0069
.org 0x9658c
	str r0, [r7, #20]	@ 0009658c 7861
.org 0x9658e
	add sp, #16	@ 0009658e 04b0
.org 0x96590
	pop {r3, r4, r5}	@ 00096590 38bc
.org 0x96592
	mov r8, r3	@ 00096592 9846
.org 0x96594
	mov r9, r4	@ 00096594 a146
.org 0x96596
	mov sl, r5	@ 00096596 aa46
.org 0x96598
	pop {r4, r5, r6, r7}	@ 00096598 f0bc
.org 0x9659a
	pop {r0}	@ 0009659a 01bc
.org 0x9659c
	bx r0	@ 0009659c 0047
