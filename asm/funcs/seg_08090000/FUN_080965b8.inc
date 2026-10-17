@ FUN_080965b8  entry 0x080965b8  size 140
.thumb
.org 0x965b8
FUN_080965b8:
	push {r4, r5, r6, lr}	@ 000965b8 70b5
.org 0x965ba
	adds r6, r0, #0	@ 000965ba 061c
.org 0x965bc
	lsls r1, r1, #24	@ 000965bc 0906
.org 0x965be
	lsrs r5, r1, #24	@ 000965be 0d0e
.org 0x965c0
	lsls r2, r2, #24	@ 000965c0 1206
.org 0x965c2
	lsrs r4, r2, #24	@ 000965c2 140e
.org 0x965c4
	ldr r0, [pc, #124]	@ 000965c4 1f48
.org 0x965c6
	ldr r1, [pc, #128]	@ 000965c6 2049
.org 0x965c8
	adds r1, #136	@ 000965c8 8831
.org 0x965ca
	ldrh r1, [r1, #0]	@ 000965ca 0988
.org 0x965cc
	ldrh r2, [r0, #6]	@ 000965cc c288
.org 0x965ce
	lsrs r2, r2, #6	@ 000965ce 9209
.org 0x965d0
	subs r1, r1, r2	@ 000965d0 891a
.org 0x965d2
	lsls r1, r1, #5	@ 000965d2 4901
.org 0x965d4
	movs r2, #128	@ 000965d4 8022
.org 0x965d6
	lsls r2, r2, #9	@ 000965d6 5202
.org 0x965d8
	adds r1, r1, r2	@ 000965d8 8918
.org 0x965da
	bl 0x1d30	@ 000965da 6bf7a9fb
.org 0x965de
	ldr r0, [pc, #108]	@ 000965de 1b48
.org 0x965e0
	ldr r1, [pc, #108]	@ 000965e0 1b49
.org 0x965e2
	adds r1, #136	@ 000965e2 8831
.org 0x965e4
	ldrh r1, [r1, #0]	@ 000965e4 0988
.org 0x965e6
	ldrb r2, [r0, #7]	@ 000965e6 c279
.org 0x965e8
	subs r1, r1, r2	@ 000965e8 891a
.org 0x965ea
	lsls r1, r1, #5	@ 000965ea 4901
.org 0x965ec
	movs r2, #128	@ 000965ec 8022
.org 0x965ee
	lsls r2, r2, #2	@ 000965ee 9200
.org 0x965f0
	adds r1, r1, r2	@ 000965f0 8918
.org 0x965f2
	bl 0x2208	@ 000965f2 6bf709fe
.org 0x965f6
	ldr r0, [pc, #92]	@ 000965f6 1748
.org 0x965f8
	ldr r0, [r0, #0]	@ 000965f8 0068
.org 0x965fa
	bl 0x5500	@ 000965fa 6ef781ff
.org 0x965fe
	adds r3, r0, #0	@ 000965fe 031c
.org 0x96600
	cmp r3, #0	@ 00096600 002b
.org 0x96602
	beq.n 0x9663c	@ 00096602 1bd0
.org 0x96604
	adds r1, r3, #0	@ 00096604 191c
.org 0x96606
	adds r1, #37	@ 00096606 2531
.org 0x96608
	movs r2, #0	@ 00096608 0022
.org 0x9660a
	movs r0, #24	@ 0009660a 1820
.org 0x9660c
	strb r0, [r1, #0]	@ 0009660c 0870
.org 0x9660e
	ldr r1, [pc, #72]	@ 0009660e 1249
.org 0x96610
	movs r0, #29	@ 00096610 1d20
.org 0x96612
	strb r0, [r3, #9]	@ 00096612 5872
.org 0x96614
	ldr r0, [r1, #116]	@ 00096614 486f
.org 0x96616
	ldr r0, [r0, #0]	@ 00096616 0068
.org 0x96618
	str r0, [r3, #20]	@ 00096618 5861
.org 0x9661a
	movs r0, #0	@ 0009661a 0020
.org 0x9661c
	strh r2, [r3, #32]	@ 0009661c 1a84
.org 0x9661e
	adds r1, r3, #0	@ 0009661e 191c
.org 0x96620
	adds r1, #34	@ 00096620 2231
.org 0x96622
	strb r0, [r1, #0]	@ 00096622 0870
.org 0x96624
	ldrb r1, [r3, #11]	@ 00096624 d97a
.org 0x96626
	movs r0, #16	@ 00096626 1020
.org 0x96628
	orrs r0, r1	@ 00096628 0843
.org 0x9662a
	strb r0, [r3, #11]	@ 0009662a d872
.org 0x9662c
	ldrb r0, [r3, #28]	@ 0009662c 187f
.org 0x9662e
	strb r0, [r3, #29]	@ 0009662e 5877
.org 0x96630
	ldr r0, [r6, #0]	@ 00096630 3068
.org 0x96632
	ldr r1, [r6, #4]	@ 00096632 7168
.org 0x96634
	str r0, [r3, #84]	@ 00096634 5865
.org 0x96636
	str r1, [r3, #88]	@ 00096636 9965
.org 0x96638
	strb r5, [r3, #16]	@ 00096638 1d74
.org 0x9663a
	strb r4, [r3, #17]	@ 0009663a 5c74
.org 0x9663c
	adds r0, r3, #0	@ 0009663c 181c
.org 0x9663e
	pop {r4, r5, r6}	@ 0009663e 70bc
.org 0x96640
	pop {r1}	@ 00096640 02bc
.org 0x96642
	bx r1	@ 00096642 0847
