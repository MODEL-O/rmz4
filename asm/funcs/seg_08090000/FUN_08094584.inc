@ FUN_08094584  entry 0x08094584  size 232
.thumb
.org 0x94584
FUN_08094584:
	push {r4, r5, r6, r7, lr}	@ 00094584 f0b5
.org 0x94586
	sub sp, #8	@ 00094586 82b0
.org 0x94588
	adds r7, r0, #0	@ 00094588 071c
.org 0x9458a
	ldrb r0, [r7, #16]	@ 0009458a 387c
.org 0x9458c
	ldrb r4, [r7, #17]	@ 0009458c 7c7c
.org 0x9458e
	cmp r0, #2	@ 0009458e 0228
.org 0x94590
	bne.n 0x945c4	@ 00094590 18d1
.org 0x94592
	ldr r0, [pc, #216]	@ 00094592 3648
.org 0x94594
	ldr r1, [pc, #216]	@ 00094594 3649
.org 0x94596
	lsls r4, r4, #2	@ 00094596 a400
.org 0x94598
	adds r4, r4, r1	@ 00094598 6418
.org 0x9459a
	ldr r1, [r4, #0]	@ 0009459a 2168
.org 0x9459c
	asrs r3, r1, #3	@ 0009459c cb10
.org 0x9459e
	adds r0, #4	@ 0009459e 0430
.org 0x945a0
	adds r3, r3, r0	@ 000945a0 1b18
.org 0x945a2
	movs r5, #7	@ 000945a2 0725
.org 0x945a4
	ands r1, r5	@ 000945a4 2940
.org 0x945a6
	movs r2, #1	@ 000945a6 0122
.org 0x945a8
	adds r0, r2, #0	@ 000945a8 101c
.org 0x945aa
	lsls r0, r1	@ 000945aa 8840
.org 0x945ac
	ldrb r1, [r3, #0]	@ 000945ac 1978
.org 0x945ae
	orrs r0, r1	@ 000945ae 0843
.org 0x945b0
	strb r0, [r3, #0]	@ 000945b0 1870
.org 0x945b2
	ldr r3, [pc, #192]	@ 000945b2 304b
.org 0x945b4
	ldr r0, [r4, #0]	@ 000945b4 2068
.org 0x945b6
	asrs r1, r0, #3	@ 000945b6 c110
.org 0x945b8
	adds r1, r1, r3	@ 000945b8 c918
.org 0x945ba
	ands r0, r5	@ 000945ba 2840
.org 0x945bc
	lsls r2, r0	@ 000945bc 8240
.org 0x945be
	ldrb r0, [r1, #0]	@ 000945be 0878
.org 0x945c0
	orrs r2, r0	@ 000945c0 0243
.org 0x945c2
	strb r2, [r1, #0]	@ 000945c2 0a70
.org 0x945c4
	movs r0, #42	@ 000945c4 2a20
.org 0x945c6
	bl 0x2b10	@ 000945c6 6ef7a3fa
.org 0x945ca
	ldrb r1, [r7, #10]	@ 000945ca b97a
.org 0x945cc
	movs r0, #254	@ 000945cc fe20
.org 0x945ce
	ands r0, r1	@ 000945ce 0840
.org 0x945d0
	movs r1, #0	@ 000945d0 0021
.org 0x945d2
	strb r0, [r7, #10]	@ 000945d2 b872
.org 0x945d4
	adds r0, r7, #0	@ 000945d4 381c
.org 0x945d6
	adds r0, #140	@ 000945d6 8c30
.org 0x945d8
	str r1, [r0, #0]	@ 000945d8 0160
.org 0x945da
	adds r0, #4	@ 000945da 0430
.org 0x945dc
	str r1, [r0, #0]	@ 000945dc 0160
.org 0x945de
	adds r0, #4	@ 000945de 0430
.org 0x945e0
	strb r1, [r0, #0]	@ 000945e0 0170
.org 0x945e2
	ldrb r1, [r7, #10]	@ 000945e2 b97a
.org 0x945e4
	movs r0, #251	@ 000945e4 fb20
.org 0x945e6
	ands r0, r1	@ 000945e6 0840
.org 0x945e8
	strb r0, [r7, #10]	@ 000945e8 b872
.org 0x945ea
	ldr r6, [pc, #140]	@ 000945ea 234e
.org 0x945ec
	ldr r0, [r6, #0]	@ 000945ec 3068
.org 0x945ee
	ldr r5, [pc, #140]	@ 000945ee 234d
.org 0x945f0
	muls r0, r5	@ 000945f0 6843
.org 0x945f2
	ldr r2, [pc, #140]	@ 000945f2 234a
.org 0x945f4
	adds r0, r0, r2	@ 000945f4 8018
.org 0x945f6
	lsls r0, r0, #1	@ 000945f6 4000
.org 0x945f8
	lsrs r4, r0, #1	@ 000945f8 4408
.org 0x945fa
	lsrs r0, r0, #17	@ 000945fa 400c
.org 0x945fc
	movs r3, #7	@ 000945fc 0723
.org 0x945fe
	ands r0, r3	@ 000945fe 1840
.org 0x94600
	subs r0, #3	@ 00094600 0338
.org 0x94602
	lsls r0, r0, #8	@ 00094602 0002
.org 0x94604
	ldr r1, [r7, #84]	@ 00094604 796d
.org 0x94606
	adds r1, r1, r0	@ 00094606 0918
.org 0x94608
	str r1, [sp, #0]	@ 00094608 0091
.org 0x9460a
	adds r0, r4, #0	@ 0009460a 201c
.org 0x9460c
	muls r0, r5	@ 0009460c 6843
.org 0x9460e
	adds r0, r0, r2	@ 0009460e 8018
.org 0x94610
	lsls r0, r0, #1	@ 00094610 4000
.org 0x94612
	lsrs r1, r0, #1	@ 00094612 4108
.org 0x94614
	str r1, [r6, #0]	@ 00094614 3160
.org 0x94616
	lsrs r0, r0, #17	@ 00094616 400c
.org 0x94618
	ands r0, r3	@ 00094618 1840
.org 0x9461a
	lsls r0, r0, #8	@ 0009461a 0002
.org 0x9461c
	ldr r1, [pc, #100]	@ 0009461c 1949
.org 0x9461e
	adds r0, r0, r1	@ 0009461e 4018
.org 0x94620
	ldr r1, [r7, #88]	@ 00094620 b96d
.org 0x94622
	adds r1, r1, r0	@ 00094622 0918
.org 0x94624
	str r1, [sp, #4]	@ 00094624 0191
.org 0x94626
	movs r0, #1	@ 00094626 0120
.org 0x94628
	mov r1, sp	@ 00094628 6946
.org 0x9462a
	bl 0xd0c88	@ 0009462a 3cf02dfb
.org 0x9462e
	adds r0, r7, #0	@ 0009462e 381c
.org 0x94630
	bl 0x94e6c	@ 00094630 00f01cfc
.org 0x94634
	adds r0, r7, #0	@ 00094634 381c
.org 0x94636
	bl 0x94f00	@ 00094636 00f063fc
.org 0x9463a
	ldr r2, [pc, #76]	@ 0009463a 134a
.org 0x9463c
	ldrh r1, [r2, #12]	@ 0009463c 9189
.org 0x9463e
	ldr r0, [pc, #76]	@ 0009463e 1348
.org 0x94640
	cmp r1, r0	@ 00094640 8142
.org 0x94642
	bhi.n 0x94648	@ 00094642 01d8
.org 0x94644
	adds r0, r1, #1	@ 00094644 481c
.org 0x94646
	strh r0, [r2, #12]	@ 00094646 9081
.org 0x94648
	adds r1, r7, #0	@ 00094648 391c
.org 0x9464a
	adds r1, #84	@ 0009464a 5431
.org 0x9464c
	adds r0, r7, #0	@ 0009464c 381c
.org 0x9464e
	bl 0x2abe0	@ 0009464e 96f7c7fa
.org 0x94652
	ldr r1, [pc, #60]	@ 00094652 0f49
.org 0x94654
	ldrb r0, [r7, #9]	@ 00094654 787a
.org 0x94656
	lsls r0, r0, #2	@ 00094656 8000
.org 0x94658
	adds r0, r0, r1	@ 00094658 4018
.org 0x9465a
	movs r1, #4	@ 0009465a 0421
.org 0x9465c
	str r1, [r7, #12]	@ 0009465c f960
.org 0x9465e
	ldr r0, [r0, #0]	@ 0009465e 0068
.org 0x94660
	ldr r0, [r0, #16]	@ 00094660 0069
.org 0x94662
	str r0, [r7, #20]	@ 00094662 7861
.org 0x94664
	add sp, #8	@ 00094664 02b0
.org 0x94666
	pop {r4, r5, r6, r7}	@ 00094666 f0bc
.org 0x94668
	pop {r0}	@ 00094668 01bc
.org 0x9466a
	bx r0	@ 0009466a 0047
