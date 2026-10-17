@ FUN_080954a0  entry 0x080954a0  size 468
.thumb
.org 0x954a0
FUN_080954a0:
	push {r4, r5, r6, r7, lr}	@ 000954a0 f0b5
.org 0x954a2
	mov r7, sl	@ 000954a2 5746
.org 0x954a4
	mov r6, r9	@ 000954a4 4e46
.org 0x954a6
	mov r5, r8	@ 000954a6 4546
.org 0x954a8
	push {r5, r6, r7}	@ 000954a8 e0b4
.org 0x954aa
	sub sp, #60	@ 000954aa 8fb0
.org 0x954ac
	adds r7, r0, #0	@ 000954ac 071c
.org 0x954ae
	ldr r1, [pc, #284]	@ 000954ae 4749
.org 0x954b0
	mov r0, sp	@ 000954b0 6846
.org 0x954b2
	movs r2, #4	@ 000954b2 0422
.org 0x954b4
	bl 0x129258	@ 000954b4 93f0d0fe
.org 0x954b8
	add r6, sp, #4	@ 000954b8 01ae
.org 0x954ba
	ldr r1, [pc, #276]	@ 000954ba 4549
.org 0x954bc
	adds r0, r6, #0	@ 000954bc 301c
.org 0x954be
	movs r2, #4	@ 000954be 0422
.org 0x954c0
	bl 0x129258	@ 000954c0 93f0cafe
.org 0x954c4
	add r5, sp, #8	@ 000954c4 02ad
.org 0x954c6
	ldr r1, [pc, #268]	@ 000954c6 4349
.org 0x954c8
	adds r0, r5, #0	@ 000954c8 281c
.org 0x954ca
	movs r2, #4	@ 000954ca 0422
.org 0x954cc
	bl 0x129258	@ 000954cc 93f0c4fe
.org 0x954d0
	add r4, sp, #12	@ 000954d0 03ac
.org 0x954d2
	ldr r1, [pc, #260]	@ 000954d2 4149
.org 0x954d4
	adds r0, r4, #0	@ 000954d4 201c
.org 0x954d6
	movs r2, #4	@ 000954d6 0422
.org 0x954d8
	bl 0x129258	@ 000954d8 93f0befe
.org 0x954dc
	mov r0, sp	@ 000954dc 6846
.org 0x954de
	str r0, [sp, #20]	@ 000954de 0590
.org 0x954e0
	add r1, sp, #20	@ 000954e0 05a9
.org 0x954e2
	str r6, [r1, #4]	@ 000954e2 4e60
.org 0x954e4
	str r5, [sp, #28]	@ 000954e4 0795
.org 0x954e6
	add r0, sp, #28	@ 000954e6 07a8
.org 0x954e8
	str r4, [r0, #4]	@ 000954e8 4460
.org 0x954ea
	str r1, [sp, #36]	@ 000954ea 0991
.org 0x954ec
	add r1, sp, #36	@ 000954ec 09a9
.org 0x954ee
	mov r8, r1	@ 000954ee 8846
.org 0x954f0
	str r0, [r1, #4]	@ 000954f0 4860
.org 0x954f2
	mov r2, sp	@ 000954f2 6a46
.org 0x954f4
	adds r2, #16	@ 000954f4 1032
.org 0x954f6
	str r2, [sp, #52]	@ 000954f6 0d92
.org 0x954f8
	ldr r1, [pc, #224]	@ 000954f8 3849
.org 0x954fa
	adds r0, r2, #0	@ 000954fa 101c
.org 0x954fc
	movs r2, #4	@ 000954fc 0422
.org 0x954fe
	bl 0x129258	@ 000954fe 93f0abfe
.org 0x95502
	ldr r3, [r7, #40]	@ 00095502 bb6a
.org 0x95504
	mov r9, r3	@ 00095504 9946
.org 0x95506
	ldrb r5, [r7, #17]	@ 00095506 7d7c
.org 0x95508
	str r5, [sp, #56]	@ 00095508 0e95
.org 0x9550a
	ldrb r0, [r3, #10]	@ 0009550a 987a
.org 0x9550c
	lsrs r6, r0, #4	@ 0009550c 0609
.org 0x9550e
	movs r0, #1	@ 0009550e 0120
.org 0x95510
	ands r6, r0	@ 00095510 0640
.org 0x95512
	ldrb r0, [r7, #15]	@ 00095512 f87b
.org 0x95514
	cmp r0, #0	@ 00095514 0028
.org 0x95516
	bne.n 0x955be	@ 00095516 52d1
.org 0x95518
	ldr r0, [pc, #196]	@ 00095518 3148
.org 0x9551a
	lsls r4, r5, #2	@ 0009551a ac00
.org 0x9551c
	adds r0, r4, r0	@ 0009551c 2018
.org 0x9551e
	ldrh r0, [r0, #0]	@ 0009551e 0088
.org 0x95520
	bl 0x2b10	@ 00095520 6df7f6fa
.org 0x95524
	movs r0, #184	@ 00095524 b820
.org 0x95526
	adds r0, r0, r7	@ 00095526 c019
.org 0x95528
	mov sl, r0	@ 00095528 8246
.org 0x9552a
	ldr r0, [r0, #0]	@ 0009552a 0068
.org 0x9552c
	cmp r0, #0	@ 0009552c 0028
.org 0x9552e
	bne.n 0x9556c	@ 0009552e 1dd1
.org 0x95530
	mov r1, r8	@ 00095530 4146
.org 0x95532
	adds r2, r4, r1	@ 00095532 6218
.org 0x95534
	ldr r0, [r2, #0]	@ 00095534 1068
.org 0x95536
	ldr r0, [r0, #0]	@ 00095536 0068
.org 0x95538
	movs r3, #0	@ 00095538 0023
.org 0x9553a
	ldrsh r1, [r0, r3]	@ 0009553a c15e
.org 0x9553c
	lsls r0, r6, #1	@ 0009553c 7000
.org 0x9553e
	subs r0, #1	@ 0009553e 0138
.org 0x95540
	muls r1, r0	@ 00095540 4143
.org 0x95542
	mov r3, r9	@ 00095542 4b46
.org 0x95544
	ldr r0, [r3, #84]	@ 00095544 586d
.org 0x95546
	adds r0, r0, r1	@ 00095546 4018
.org 0x95548
	str r0, [sp, #44]	@ 00095548 0b90
.org 0x9554a
	ldr r0, [r2, #0]	@ 0009554a 1068
.org 0x9554c
	ldr r0, [r0, #0]	@ 0009554c 0068
.org 0x9554e
	movs r2, #2	@ 0009554e 0222
.org 0x95550
	ldrsh r1, [r0, r2]	@ 00095550 815e
.org 0x95552
	ldr r0, [r3, #88]	@ 00095552 986d
.org 0x95554
	adds r0, r0, r1	@ 00095554 4018
.org 0x95556
	add r1, sp, #44	@ 00095556 0ba9
.org 0x95558
	str r0, [r1, #4]	@ 00095558 4860
.org 0x9555a
	lsls r0, r5, #1	@ 0009555a 6800
.org 0x9555c
	ldr r3, [sp, #52]	@ 0009555c 0d9b
.org 0x9555e
	adds r0, r3, r0	@ 0009555e 1818
.org 0x95560
	ldrb r2, [r0, #0]	@ 00095560 0278
.org 0x95562
	adds r0, r7, #0	@ 00095562 381c
.org 0x95564
	bl 0x95188	@ 00095564 fff710fe
.org 0x95568
	mov r1, sl	@ 00095568 5146
.org 0x9556a
	str r0, [r1, #0]	@ 0009556a 0860
.org 0x9556c
	adds r5, r7, #0	@ 0009556c 3d1c
.org 0x9556e
	adds r5, #188	@ 0009556e bc35
.org 0x95570
	ldr r0, [r5, #0]	@ 00095570 2868
.org 0x95572
	cmp r0, #0	@ 00095572 0028
.org 0x95574
	bne.n 0x955b0	@ 00095574 1cd1
.org 0x95576
	mov r2, r8	@ 00095576 4246
.org 0x95578
	adds r0, r4, r2	@ 00095578 a018
.org 0x9557a
	ldr r0, [r0, #0]	@ 0009557a 0068
.org 0x9557c
	ldr r2, [r0, #4]	@ 0009557c 4268
.org 0x9557e
	movs r3, #0	@ 0009557e 0023
.org 0x95580
	ldrsh r1, [r2, r3]	@ 00095580 d15e
.org 0x95582
	lsls r0, r6, #1	@ 00095582 7000
.org 0x95584
	subs r0, #1	@ 00095584 0138
.org 0x95586
	muls r1, r0	@ 00095586 4143
.org 0x95588
	mov r3, r9	@ 00095588 4b46
.org 0x9558a
	ldr r0, [r3, #84]	@ 0009558a 586d
.org 0x9558c
	adds r0, r0, r1	@ 0009558c 4018
.org 0x9558e
	str r0, [sp, #44]	@ 0009558e 0b90
.org 0x95590
	add r1, sp, #44	@ 00095590 0ba9
.org 0x95592
	movs r0, #2	@ 00095592 0220
.org 0x95594
	ldrsh r2, [r2, r0]	@ 00095594 125e
.org 0x95596
	ldr r0, [r3, #88]	@ 00095596 986d
.org 0x95598
	adds r0, r0, r2	@ 00095598 8018
.org 0x9559a
	str r0, [r1, #4]	@ 0009559a 4860
.org 0x9559c
	ldr r3, [sp, #56]	@ 0009559c 0e9b
.org 0x9559e
	lsls r2, r3, #1	@ 0009559e 5a00
.org 0x955a0
	mov r0, sp	@ 000955a0 6846
.org 0x955a2
	adds r0, #17	@ 000955a2 1130
.org 0x955a4
	adds r0, r0, r2	@ 000955a4 8018
.org 0x955a6
	ldrb r2, [r0, #0]	@ 000955a6 0278
.org 0x955a8
	adds r0, r7, #0	@ 000955a8 381c
.org 0x955aa
	bl 0x95188	@ 000955aa fff7edfd
.org 0x955ae
	str r0, [r5, #0]	@ 000955ae 2860
.org 0x955b0
	ldrb r0, [r7, #10]	@ 000955b0 b87a
.org 0x955b2
	movs r1, #254	@ 000955b2 fe21
.org 0x955b4
	ands r1, r0	@ 000955b4 0140
.org 0x955b6
	strb r1, [r7, #10]	@ 000955b6 b972
.org 0x955b8
	ldrb r0, [r7, #15]	@ 000955b8 f87b
.org 0x955ba
	adds r0, #1	@ 000955ba 0130
.org 0x955bc
	strb r0, [r7, #15]	@ 000955bc f873
.org 0x955be
	adds r2, r6, #0	@ 000955be 321c
.org 0x955c0
	cmp r2, #0	@ 000955c0 002a
.org 0x955c2
	beq.n 0x955e4	@ 000955c2 0fd0
.org 0x955c4
	ldrb r1, [r7, #10]	@ 000955c4 b97a
.org 0x955c6
	movs r0, #16	@ 000955c6 1020
.org 0x955c8
	orrs r0, r1	@ 000955c8 0843
.org 0x955ca
	b.n 0x955ea	@ 000955ca 0ee0
.org 0x955cc
	.byte 0xfc,0x9b,0x12,0x08	@ 000955cc data
.org 0x955d0
	.byte 0x00,0x9c,0x12,0x08	@ 000955d0 data
.org 0x955d4
	.byte 0x04,0x9c,0x12,0x08	@ 000955d4 data
.org 0x955d8
	.byte 0x08,0x9c,0x12,0x08	@ 000955d8 data
.org 0x955dc
	.byte 0x0c,0x9c,0x12,0x08	@ 000955dc data
.org 0x955e0
	.byte 0xbc,0x07,0x86,0x08	@ 000955e0 data
.org 0x955e4
	ldrb r1, [r7, #10]	@ 000955e4 b97a
.org 0x955e6
	movs r0, #239	@ 000955e6 ef20
.org 0x955e8
	ands r0, r1	@ 000955e8 0840
.org 0x955ea
	strb r0, [r7, #10]	@ 000955ea b872
.org 0x955ec
	adds r1, r2, #0	@ 000955ec 111c
.org 0x955ee
	adds r0, r7, #0	@ 000955ee 381c
.org 0x955f0
	adds r0, #76	@ 000955f0 4c30
.org 0x955f2
	strb r1, [r0, #0]	@ 000955f2 0170
.org 0x955f4
	adds r3, r7, #0	@ 000955f4 3b1c
.org 0x955f6
	adds r3, #74	@ 000955f6 4a33
.org 0x955f8
	lsls r1, r1, #4	@ 000955f8 0901
.org 0x955fa
	ldrb r2, [r3, #0]	@ 000955fa 1a78
.org 0x955fc
	movs r0, #17	@ 000955fc 1120
.org 0x955fe
	negs r0, r0	@ 000955fe 4042
.org 0x95600
	ands r0, r2	@ 00095600 1040
.org 0x95602
	orrs r0, r1	@ 00095602 0843
.org 0x95604
	strb r0, [r3, #0]	@ 00095604 1870
.org 0x95606
	mov r2, r9	@ 00095606 4a46
.org 0x95608
	ldr r0, [r2, #84]	@ 00095608 506d
.org 0x9560a
	ldr r1, [r2, #88]	@ 0009560a 916d
.org 0x9560c
	str r0, [r7, #84]	@ 0009560c 7865
.org 0x9560e
	str r1, [r7, #88]	@ 0009560e b965
.org 0x95610
	adds r0, r7, #0	@ 00095610 381c
.org 0x95612
	adds r0, #184	@ 00095612 b830
.org 0x95614
	ldr r1, [r0, #0]	@ 00095614 0168
.org 0x95616
	adds r3, r0, #0	@ 00095616 031c
.org 0x95618
	cmp r1, #0	@ 00095618 0029
.org 0x9561a
	beq.n 0x95626	@ 0009561a 04d0
.org 0x9561c
	ldrb r0, [r1, #12]	@ 0009561c 087b
.org 0x9561e
	cmp r0, #1	@ 0009561e 0128
.org 0x95620
	bls.n 0x95626	@ 00095620 01d9
.org 0x95622
	movs r0, #0	@ 00095622 0020
.org 0x95624
	str r0, [r3, #0]	@ 00095624 1860
.org 0x95626
	adds r0, r7, #0	@ 00095626 381c
.org 0x95628
	adds r0, #188	@ 00095628 bc30
.org 0x9562a
	ldr r1, [r0, #0]	@ 0009562a 0168
.org 0x9562c
	adds r2, r0, #0	@ 0009562c 021c
.org 0x9562e
	cmp r1, #0	@ 0009562e 0029
.org 0x95630
	beq.n 0x9563c	@ 00095630 04d0
.org 0x95632
	ldrb r0, [r1, #12]	@ 00095632 087b
.org 0x95634
	cmp r0, #1	@ 00095634 0128
.org 0x95636
	bls.n 0x9563c	@ 00095636 01d9
.org 0x95638
	movs r0, #0	@ 00095638 0020
.org 0x9563a
	str r0, [r2, #0]	@ 0009563a 1060
.org 0x9563c
	ldr r0, [r3, #0]	@ 0009563c 1868
.org 0x9563e
	cmp r0, #0	@ 0009563e 0028
.org 0x95640
	bne.n 0x9567c	@ 00095640 1cd1
.org 0x95642
	ldr r2, [r2, #0]	@ 00095642 1268
.org 0x95644
	cmp r2, #0	@ 00095644 002a
.org 0x95646
	bne.n 0x9567c	@ 00095646 19d1
.org 0x95648
	ldrb r1, [r7, #10]	@ 00095648 b97a
.org 0x9564a
	movs r0, #254	@ 0009564a fe20
.org 0x9564c
	ands r0, r1	@ 0009564c 0840
.org 0x9564e
	movs r1, #253	@ 0009564e fd21
.org 0x95650
	ands r0, r1	@ 00095650 0840
.org 0x95652
	strb r0, [r7, #10]	@ 00095652 b872
.org 0x95654
	adds r0, r7, #0	@ 00095654 381c
.org 0x95656
	adds r0, #140	@ 00095656 8c30
.org 0x95658
	str r2, [r0, #0]	@ 00095658 0260
.org 0x9565a
	adds r0, #4	@ 0009565a 0430
.org 0x9565c
	str r2, [r0, #0]	@ 0009565c 0260
.org 0x9565e
	adds r0, #4	@ 0009565e 0430
.org 0x95660
	strb r2, [r0, #0]	@ 00095660 0270
.org 0x95662
	ldrb r1, [r7, #10]	@ 00095662 b97a
.org 0x95664
	movs r0, #251	@ 00095664 fb20
.org 0x95666
	ands r0, r1	@ 00095666 0840
.org 0x95668
	strb r0, [r7, #10]	@ 00095668 b872
.org 0x9566a
	ldr r1, [pc, #32]	@ 0009566a 0849
.org 0x9566c
	ldrb r0, [r7, #9]	@ 0009566c 787a
.org 0x9566e
	lsls r0, r0, #2	@ 0009566e 8000
.org 0x95670
	adds r0, r0, r1	@ 00095670 4018
.org 0x95672
	movs r1, #3	@ 00095672 0321
