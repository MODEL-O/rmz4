@ FUN_080104fc  entry 0x080104fc  size 3672
.thumb
.org 0x104fc
FUN_080104fc:
	push {r4, r5, r6, r7, lr}	@ 000104fc f0b5
.org 0x104fe
	mov r7, sl	@ 000104fe 5746
.org 0x10500
	mov r6, r9	@ 00010500 4e46
.org 0x10502
	mov r5, r8	@ 00010502 4546
.org 0x10504
	push {r5, r6, r7}	@ 00010504 e0b4
.org 0x10506
	sub sp, #20	@ 00010506 85b0
.org 0x10508
	str r0, [sp, #0]	@ 00010508 0090
.org 0x1050a
	ldr r0, [pc, #836]	@ 0001050a d148
.org 0x1050c
	ldr r1, [pc, #836]	@ 0001050c d149
.org 0x1050e
	adds r0, r0, r1	@ 0001050e 4018
.org 0x10510
	ldrb r1, [r0, #0]	@ 00010510 0178
.org 0x10512
	movs r0, #15	@ 00010512 0f20
.org 0x10514
	ands r0, r1	@ 00010514 0840
.org 0x10516
	cmp r0, #3	@ 00010516 0328
.org 0x10518
	beq.n 0x1051c	@ 00010518 00d0
.org 0x1051a
	b.n 0x10ce0	@ 0001051a e1e3
.org 0x1051c
	movs r6, #159	@ 0001051c 9f26
.org 0x1051e
	ldr r2, [sp, #0]	@ 0001051e 009a
.org 0x10520
	ldrh r4, [r2, #52]	@ 00010520 948e
.org 0x10522
	ldrh r5, [r2, #56]	@ 00010522 158f
.org 0x10524
	movs r0, #160	@ 00010524 a020
.org 0x10526
	lsls r0, r0, #2	@ 00010526 8000
.org 0x10528
	bl 0xa70	@ 00010528 f0f7a2fa
.org 0x1052c
	mov r8, r0	@ 0001052c 8046
.org 0x1052e
	cmp r0, #0	@ 0001052e 0028
.org 0x10530
	bne.n 0x10536	@ 00010530 01d1
.org 0x10532
	bl 0x113b2	@ 00010532 00f03eff
.org 0x10536
	ldr r2, [pc, #800]	@ 00010536 c84a
.org 0x10538
	movs r3, #186	@ 00010538 ba23
.org 0x1053a
	lsls r3, r3, #1	@ 0001053a 5b00
.org 0x1053c
	adds r0, r2, r3	@ 0001053c d018
.org 0x1053e
	mov r7, r8	@ 0001053e 4746
.org 0x10540
	str r7, [r0, #0]	@ 00010540 0760
.org 0x10542
	movs r0, #188	@ 00010542 bc20
.org 0x10544
	lsls r0, r0, #1	@ 00010544 4000
.org 0x10546
	adds r1, r2, r0	@ 00010546 1118
.org 0x10548
	ldr r0, [pc, #784]	@ 00010548 c448
.org 0x1054a
	str r0, [r1, #0]	@ 0001054a 0860
.org 0x1054c
	adds r3, #8	@ 0001054c 0833
.org 0x1054e
	adds r1, r2, r3	@ 0001054e d118
.org 0x10550
	ldr r0, [pc, #780]	@ 00010550 c348
.org 0x10552
	str r0, [r1, #0]	@ 00010552 0860
.org 0x10554
	lsls r5, r5, #16	@ 00010554 2d04
.org 0x10556
	ldr r7, [pc, #780]	@ 00010556 c34f
.org 0x10558
	adds r0, r5, r7	@ 00010558 e819
.org 0x1055a
	ldr r2, [sp, #0]	@ 0001055a 009a
.org 0x1055c
	ldr r1, [r2, #104]	@ 0001055c 916e
.org 0x1055e
	lsls r1, r1, #3	@ 0001055e c900
.org 0x10560
	asrs r1, r1, #3	@ 00010560 c910
.org 0x10562
	lsls r4, r4, #16	@ 00010562 2404
.org 0x10564
	asrs r2, r4, #18	@ 00010564 a214
.org 0x10566
	adds r1, r1, r2	@ 00010566 8918
.org 0x10568
	lsls r1, r1, #16	@ 00010568 0904
.org 0x1056a
	lsrs r7, r1, #16	@ 0001056a 0f0c
.org 0x1056c
	lsrs r3, r0, #16	@ 0001056c 030c
.org 0x1056e
	mov r9, r3	@ 0001056e 9946
.org 0x10570
	asrs r0, r0, #14	@ 00010570 8013
.org 0x10572
	movs r1, #6	@ 00010572 0621
.org 0x10574
	bl 0x128fb8	@ 00010574 18f120fd
.org 0x10578
	adds r0, #116	@ 00010578 7430
.org 0x1057a
	lsls r0, r0, #16	@ 0001057a 0004
.org 0x1057c
	lsrs r1, r0, #16	@ 0001057c 010c
.org 0x1057e
	mov ip, r1	@ 0001057e 8c46
.org 0x10580
	asrs r3, r0, #16	@ 00010580 0314
.org 0x10582
	adds r0, r3, #0	@ 00010582 181c
.org 0x10584
	adds r0, #159	@ 00010584 9f30
.org 0x10586
	mov sl, r5	@ 00010586 aa46
.org 0x10588
	str r4, [sp, #8]	@ 00010588 0294
.org 0x1058a
	cmp r0, #254	@ 0001058a fe28
.org 0x1058c
	ble.n 0x105b4	@ 0001058c 12dd
.org 0x1058e
	adds r4, r7, #0	@ 0001058e 3c1c
.org 0x10590
	movs r2, #192	@ 00010590 c022
.org 0x10592
	lsls r2, r2, #15	@ 00010592 d203
.org 0x10594
	movs r1, #159	@ 00010594 9f21
.org 0x10596
	lsls r1, r1, #2	@ 00010596 8900
.org 0x10598
	add r1, r8	@ 00010598 4144
.org 0x1059a
	movs r5, #128	@ 0001059a 8025
.org 0x1059c
	lsls r5, r5, #9	@ 0001059c 6d02
.org 0x1059e
	adds r0, r2, #0	@ 0001059e 101c
.org 0x105a0
	orrs r0, r4	@ 000105a0 2043
.org 0x105a2
	str r0, [r1, #0]	@ 000105a2 0860
.org 0x105a4
	adds r2, r2, r5	@ 000105a4 5219
.org 0x105a6
	subs r1, #4	@ 000105a6 0439
.org 0x105a8
	subs r6, #1	@ 000105a8 013e
.org 0x105aa
	adds r0, r3, r6	@ 000105aa 9819
.org 0x105ac
	cmp r0, #254	@ 000105ac fe28
.org 0x105ae
	ble.n 0x105b4	@ 000105ae 01dd
.org 0x105b0
	cmp r6, #0	@ 000105b0 002e
.org 0x105b2
	bge.n 0x1059e	@ 000105b2 f4da
.org 0x105b4
	mov r3, ip	@ 000105b4 6346
.org 0x105b6
	lsls r2, r3, #16	@ 000105b6 1a04
.org 0x105b8
	asrs r0, r2, #16	@ 000105b8 1014
.org 0x105ba
	adds r0, r0, r6	@ 000105ba 8019
.org 0x105bc
	mov r4, r9	@ 000105bc 4c46
.org 0x105be
	lsls r4, r4, #16	@ 000105be 2404
.org 0x105c0
	str r4, [sp, #4]	@ 000105c0 0194
.org 0x105c2
	cmp r0, #247	@ 000105c2 f728
.org 0x105c4
	ble.n 0x105e6	@ 000105c4 0fdd
.org 0x105c6
	cmp r6, #0	@ 000105c6 002e
.org 0x105c8
	blt.n 0x105e6	@ 000105c8 0ddb
.org 0x105ca
	lsls r0, r6, #2	@ 000105ca b000
.org 0x105cc
	mov r5, r8	@ 000105cc 4546
.org 0x105ce
	adds r3, r0, r5	@ 000105ce 4319
.org 0x105d0
	asrs r1, r2, #16	@ 000105d0 1114
.org 0x105d2
	adds r0, r2, #0	@ 000105d2 101c
.org 0x105d4
	orrs r0, r7	@ 000105d4 3843
.org 0x105d6
	str r0, [r3, #0]	@ 000105d6 1860
.org 0x105d8
	subs r3, #4	@ 000105d8 043b
.org 0x105da
	subs r6, #1	@ 000105da 013e
.org 0x105dc
	adds r1, r1, r6	@ 000105dc 8919
.org 0x105de
	cmp r1, #247	@ 000105de f729
.org 0x105e0
	ble.n 0x105e6	@ 000105e0 01dd
.org 0x105e2
	cmp r6, #0	@ 000105e2 002e
.org 0x105e4
	bge.n 0x105d0	@ 000105e4 f4da
.org 0x105e6
	ldr r7, [sp, #4]	@ 000105e6 019f
.org 0x105e8
	asrs r0, r7, #14	@ 000105e8 b813
.org 0x105ea
	movs r1, #12	@ 000105ea 0c21
.org 0x105ec
	bl 0x128fb8	@ 000105ec 18f1e4fc
.org 0x105f0
	adds r0, #116	@ 000105f0 7430
.org 0x105f2
	lsls r0, r0, #16	@ 000105f2 0004
.org 0x105f4
	ldr r1, [sp, #0]	@ 000105f4 0099
.org 0x105f6
	ldr r2, [r1, #104]	@ 000105f6 8a6e
.org 0x105f8
	lsls r1, r2, #3	@ 000105f8 d100
.org 0x105fa
	subs r1, r1, r2	@ 000105fa 891a
.org 0x105fc
	asrs r1, r1, #3	@ 000105fc c910
.org 0x105fe
	ldr r3, [sp, #8]	@ 000105fe 029b
.org 0x10600
	asrs r2, r3, #18	@ 00010600 9a14
.org 0x10602
	adds r1, r1, r2	@ 00010602 8918
.org 0x10604
	lsls r1, r1, #16	@ 00010604 0904
.org 0x10606
	lsrs r7, r1, #16	@ 00010606 0f0c
.org 0x10608
	lsrs r4, r0, #16	@ 00010608 040c
.org 0x1060a
	mov ip, r4	@ 0001060a a446
.org 0x1060c
	asrs r3, r0, #16	@ 0001060c 0314
.org 0x1060e
	adds r0, r3, r6	@ 0001060e 9819
.org 0x10610
	cmp r0, #247	@ 00010610 f728
.org 0x10612
	ble.n 0x10642	@ 00010612 16dd
.org 0x10614
	cmp r6, #0	@ 00010614 002e
.org 0x10616
	blt.n 0x10642	@ 00010616 14db
.org 0x10618
	adds r4, r7, #0	@ 00010618 3c1c
.org 0x1061a
	lsls r0, r6, #16	@ 0001061a 3004
.org 0x1061c
	movs r1, #184	@ 0001061c b821
.org 0x1061e
	lsls r1, r1, #16	@ 0001061e 0904
.org 0x10620
	subs r1, r1, r0	@ 00010620 091a
.org 0x10622
	lsls r0, r6, #2	@ 00010622 b000
.org 0x10624
	mov r5, r8	@ 00010624 4546
.org 0x10626
	adds r2, r0, r5	@ 00010626 4219
.org 0x10628
	movs r5, #128	@ 00010628 8025
.org 0x1062a
	lsls r5, r5, #9	@ 0001062a 6d02
.org 0x1062c
	adds r0, r1, #0	@ 0001062c 081c
.org 0x1062e
	orrs r0, r4	@ 0001062e 2043
.org 0x10630
	str r0, [r2, #0]	@ 00010630 1060
.org 0x10632
	adds r1, r1, r5	@ 00010632 4919
.org 0x10634
	subs r2, #4	@ 00010634 043a
.org 0x10636
	subs r6, #1	@ 00010636 013e
.org 0x10638
	adds r0, r3, r6	@ 00010638 9819
.org 0x1063a
	cmp r0, #247	@ 0001063a f728
.org 0x1063c
	ble.n 0x10642	@ 0001063c 01dd
.org 0x1063e
	cmp r6, #0	@ 0001063e 002e
.org 0x10640
	bge.n 0x1062c	@ 00010640 f4da
.org 0x10642
	mov r0, ip	@ 00010642 6046
.org 0x10644
	lsls r2, r0, #16	@ 00010644 0204
.org 0x10646
	asrs r0, r2, #16	@ 00010646 1014
.org 0x10648
	adds r0, r0, r6	@ 00010648 8019
.org 0x1064a
	cmp r0, #221	@ 0001064a dd28
.org 0x1064c
	ble.n 0x1066e	@ 0001064c 0fdd
.org 0x1064e
	cmp r6, #0	@ 0001064e 002e
.org 0x10650
	blt.n 0x1066e	@ 00010650 0ddb
.org 0x10652
	lsls r0, r6, #2	@ 00010652 b000
.org 0x10654
	mov r1, r8	@ 00010654 4146
.org 0x10656
	adds r3, r0, r1	@ 00010656 4318
.org 0x10658
	asrs r1, r2, #16	@ 00010658 1114
.org 0x1065a
	adds r0, r2, #0	@ 0001065a 101c
.org 0x1065c
	orrs r0, r7	@ 0001065c 3843
.org 0x1065e
	str r0, [r3, #0]	@ 0001065e 1860
.org 0x10660
	subs r3, #4	@ 00010660 043b
.org 0x10662
	subs r6, #1	@ 00010662 013e
.org 0x10664
	adds r1, r1, r6	@ 00010664 8919
.org 0x10666
	cmp r1, #221	@ 00010666 dd29
.org 0x10668
	ble.n 0x1066e	@ 00010668 01dd
.org 0x1066a
	cmp r6, #0	@ 0001066a 002e
.org 0x1066c
	bge.n 0x10658	@ 0001066c f4da
.org 0x1066e
	ldr r2, [sp, #4]	@ 0001066e 019a
.org 0x10670
	asrs r0, r2, #14	@ 00010670 9013
.org 0x10672
	movs r1, #18	@ 00010672 1221
.org 0x10674
	bl 0x128fb8	@ 00010674 18f1a0fc
.org 0x10678
	adds r0, #116	@ 00010678 7430
.org 0x1067a
	lsls r0, r0, #16	@ 0001067a 0004
.org 0x1067c
	ldr r3, [sp, #0]	@ 0001067c 009b
.org 0x1067e
	ldr r2, [r3, #104]	@ 0001067e 9a6e
.org 0x10680
	lsls r1, r2, #1	@ 00010680 5100
.org 0x10682
	adds r1, r1, r2	@ 00010682 8918
.org 0x10684
	lsls r1, r1, #1	@ 00010684 4900
.org 0x10686
	asrs r1, r1, #3	@ 00010686 c910
.org 0x10688
	ldr r4, [sp, #8]	@ 00010688 029c
.org 0x1068a
	asrs r2, r4, #19	@ 0001068a e214
.org 0x1068c
	adds r1, r1, r2	@ 0001068c 8918
.org 0x1068e
	lsls r1, r1, #16	@ 0001068e 0904
.org 0x10690
	lsrs r7, r1, #16	@ 00010690 0f0c
.org 0x10692
	lsrs r5, r0, #16	@ 00010692 050c
.org 0x10694
	mov ip, r5	@ 00010694 ac46
.org 0x10696
	asrs r3, r0, #16	@ 00010696 0314
.org 0x10698
	adds r0, r3, r6	@ 00010698 9819
.org 0x1069a
	cmp r0, #221	@ 0001069a dd28
.org 0x1069c
	ble.n 0x106cc	@ 0001069c 16dd
.org 0x1069e
	cmp r6, #0	@ 0001069e 002e
.org 0x106a0
	blt.n 0x106cc	@ 000106a0 14db
.org 0x106a2
	adds r4, r7, #0	@ 000106a2 3c1c
.org 0x106a4
	lsls r0, r6, #16	@ 000106a4 3004
.org 0x106a6
	movs r1, #221	@ 000106a6 dd21
.org 0x106a8
	lsls r1, r1, #16	@ 000106a8 0904
.org 0x106aa
	subs r1, r1, r0	@ 000106aa 091a
.org 0x106ac
	lsls r0, r6, #2	@ 000106ac b000
.org 0x106ae
	mov r5, r8	@ 000106ae 4546
.org 0x106b0
	adds r2, r0, r5	@ 000106b0 4219
.org 0x106b2
	movs r5, #128	@ 000106b2 8025
.org 0x106b4
	lsls r5, r5, #9	@ 000106b4 6d02
.org 0x106b6
	adds r0, r1, #0	@ 000106b6 081c
.org 0x106b8
	orrs r0, r4	@ 000106b8 2043
.org 0x106ba
	str r0, [r2, #0]	@ 000106ba 1060
.org 0x106bc
	adds r1, r1, r5	@ 000106bc 4919
.org 0x106be
	subs r2, #4	@ 000106be 043a
.org 0x106c0
	subs r6, #1	@ 000106c0 013e
.org 0x106c2
	adds r0, r3, r6	@ 000106c2 9819
.org 0x106c4
	cmp r0, #221	@ 000106c4 dd28
.org 0x106c6
	ble.n 0x106cc	@ 000106c6 01dd
.org 0x106c8
	cmp r6, #0	@ 000106c8 002e
.org 0x106ca
	bge.n 0x106b6	@ 000106ca f4da
.org 0x106cc
	mov r0, ip	@ 000106cc 6046
.org 0x106ce
	lsls r2, r0, #16	@ 000106ce 0204
.org 0x106d0
	asrs r0, r2, #16	@ 000106d0 1014
.org 0x106d2
	adds r0, r0, r6	@ 000106d2 8019
.org 0x106d4
	cmp r0, #190	@ 000106d4 be28
.org 0x106d6
	ble.n 0x106f8	@ 000106d6 0fdd
.org 0x106d8
	cmp r6, #0	@ 000106d8 002e
.org 0x106da
	blt.n 0x106f8	@ 000106da 0ddb
.org 0x106dc
	lsls r0, r6, #2	@ 000106dc b000
.org 0x106de
	mov r1, r8	@ 000106de 4146
.org 0x106e0
	adds r3, r0, r1	@ 000106e0 4318
.org 0x106e2
	asrs r1, r2, #16	@ 000106e2 1114
.org 0x106e4
	adds r0, r2, #0	@ 000106e4 101c
.org 0x106e6
	orrs r0, r7	@ 000106e6 3843
.org 0x106e8
	str r0, [r3, #0]	@ 000106e8 1860
.org 0x106ea
	subs r3, #4	@ 000106ea 043b
.org 0x106ec
	subs r6, #1	@ 000106ec 013e
.org 0x106ee
	adds r1, r1, r6	@ 000106ee 8919
.org 0x106f0
	cmp r1, #190	@ 000106f0 be29
.org 0x106f2
	ble.n 0x106f8	@ 000106f2 01dd
.org 0x106f4
	cmp r6, #0	@ 000106f4 002e
.org 0x106f6
	bge.n 0x106e2	@ 000106f6 f4da
.org 0x106f8
	ldr r2, [sp, #4]	@ 000106f8 019a
.org 0x106fa
	asrs r0, r2, #14	@ 000106fa 9013
.org 0x106fc
	movs r1, #20	@ 000106fc 1421
.org 0x106fe
	bl 0x128fb8	@ 000106fe 18f15bfc
.org 0x10702
	adds r0, #116	@ 00010702 7430
.org 0x10704
	lsls r0, r0, #16	@ 00010704 0004
.org 0x10706
	ldr r3, [sp, #0]	@ 00010706 009b
.org 0x10708
	ldr r1, [r3, #104]	@ 00010708 996e
.org 0x1070a
	lsls r1, r1, #2	@ 0001070a 8900
.org 0x1070c
	asrs r1, r1, #3	@ 0001070c c910
.org 0x1070e
	ldr r4, [sp, #8]	@ 0001070e 029c
.org 0x10710
	asrs r2, r4, #20	@ 00010710 2215
.org 0x10712
	adds r1, r1, r2	@ 00010712 8918
.org 0x10714
	lsls r1, r1, #16	@ 00010714 0904
.org 0x10716
	lsrs r7, r1, #16	@ 00010716 0f0c
.org 0x10718
	lsrs r5, r0, #16	@ 00010718 050c
.org 0x1071a
	mov ip, r5	@ 0001071a ac46
.org 0x1071c
	asrs r1, r0, #16	@ 0001071c 0114
.org 0x1071e
	adds r0, r1, r6	@ 0001071e 8819
.org 0x10720
	cmp r0, #190	@ 00010720 be28
.org 0x10722
	ble.n 0x1074e	@ 00010722 14dd
.org 0x10724
	cmp r6, #0	@ 00010724 002e
.org 0x10726
	blt.n 0x1074e	@ 00010726 12db
.org 0x10728
	adds r3, r1, #0	@ 00010728 0b1c
.org 0x1072a
	lsls r0, r6, #16	@ 0001072a 3004
.org 0x1072c
	movs r1, #191	@ 0001072c bf21
.org 0x1072e
	lsls r1, r1, #16	@ 0001072e 0904
.org 0x10730
	subs r1, r1, r0	@ 00010730 091a
.org 0x10732
	lsls r0, r6, #2	@ 00010732 b000
.org 0x10734
	mov r4, r8	@ 00010734 4446
.org 0x10736
	adds r2, r0, r4	@ 00010736 0219
.org 0x10738
	movs r4, #128	@ 00010738 8024
.org 0x1073a
	lsls r4, r4, #9	@ 0001073a 6402
.org 0x1073c
	str r1, [r2, #0]	@ 0001073c 1160
.org 0x1073e
	adds r1, r1, r4	@ 0001073e 0919
.org 0x10740
	subs r2, #4	@ 00010740 043a
.org 0x10742
	subs r6, #1	@ 00010742 013e
.org 0x10744
	adds r0, r3, r6	@ 00010744 9819
.org 0x10746
	cmp r0, #190	@ 00010746 be28
.org 0x10748
	ble.n 0x1074e	@ 00010748 01dd
.org 0x1074a
	cmp r6, #0	@ 0001074a 002e
.org 0x1074c
	bge.n 0x1073c	@ 0001074c f6da
.org 0x1074e
	mov r5, ip	@ 0001074e 6546
.org 0x10750
	lsls r2, r5, #16	@ 00010750 2a04
.org 0x10752
	asrs r0, r2, #16	@ 00010752 1014
.org 0x10754
	adds r0, r0, r6	@ 00010754 8019
.org 0x10756
	cmp r0, #183	@ 00010756 b728
.org 0x10758
	ble.n 0x1077a	@ 00010758 0fdd
.org 0x1075a
	cmp r6, #0	@ 0001075a 002e
.org 0x1075c
	blt.n 0x1077a	@ 0001075c 0ddb
.org 0x1075e
	lsls r0, r6, #2	@ 0001075e b000
.org 0x10760
	mov r1, r8	@ 00010760 4146
.org 0x10762
	adds r3, r0, r1	@ 00010762 4318
.org 0x10764
	asrs r1, r2, #16	@ 00010764 1114
.org 0x10766
	adds r0, r2, #0	@ 00010766 101c
.org 0x10768
	orrs r0, r7	@ 00010768 3843
.org 0x1076a
	str r0, [r3, #0]	@ 0001076a 1860
.org 0x1076c
	subs r3, #4	@ 0001076c 043b
.org 0x1076e
	subs r6, #1	@ 0001076e 013e
.org 0x10770
	adds r1, r1, r6	@ 00010770 8919
.org 0x10772
	cmp r1, #183	@ 00010772 b729
.org 0x10774
	ble.n 0x1077a	@ 00010774 01dd
.org 0x10776
	cmp r6, #0	@ 00010776 002e
.org 0x10778
	bge.n 0x10764	@ 00010778 f4da
.org 0x1077a
	ldr r2, [sp, #4]	@ 0001077a 019a
.org 0x1077c
	asrs r0, r2, #14	@ 0001077c 9013
.org 0x1077e
	movs r1, #21	@ 0001077e 1521
.org 0x10780
	bl 0x128fb8	@ 00010780 18f11afc
.org 0x10784
	adds r0, #116	@ 00010784 7430
.org 0x10786
	lsls r0, r0, #16	@ 00010786 0004
.org 0x10788
	ldr r3, [sp, #0]	@ 00010788 009b
.org 0x1078a
	ldr r2, [r3, #104]	@ 0001078a 9a6e
.org 0x1078c
	lsls r1, r2, #1	@ 0001078c 5100
.org 0x1078e
	adds r1, r1, r2	@ 0001078e 8918
.org 0x10790
	asrs r1, r1, #3	@ 00010790 c910
.org 0x10792
	ldr r4, [sp, #8]	@ 00010792 029c
.org 0x10794
	asrs r2, r4, #21	@ 00010794 6215
.org 0x10796
	adds r1, r1, r2	@ 00010796 8918
.org 0x10798
	lsls r1, r1, #16	@ 00010798 0904
.org 0x1079a
	lsrs r7, r1, #16	@ 0001079a 0f0c
.org 0x1079c
	lsrs r5, r0, #16	@ 0001079c 050c
.org 0x1079e
	mov ip, r5	@ 0001079e ac46
.org 0x107a0
	asrs r1, r0, #16	@ 000107a0 0114
.org 0x107a2
	adds r0, r1, r6	@ 000107a2 8819
.org 0x107a4
	cmp r0, #183	@ 000107a4 b728
.org 0x107a6
	ble.n 0x107d2	@ 000107a6 14dd
.org 0x107a8
	cmp r6, #0	@ 000107a8 002e
.org 0x107aa
	blt.n 0x107d2	@ 000107aa 12db
.org 0x107ac
	adds r3, r1, #0	@ 000107ac 0b1c
.org 0x107ae
	lsls r0, r6, #16	@ 000107ae 3004
.org 0x107b0
	movs r1, #184	@ 000107b0 b821
.org 0x107b2
	lsls r1, r1, #16	@ 000107b2 0904
.org 0x107b4
	subs r1, r1, r0	@ 000107b4 091a
.org 0x107b6
	lsls r0, r6, #2	@ 000107b6 b000
.org 0x107b8
	mov r4, r8	@ 000107b8 4446
.org 0x107ba
	adds r2, r0, r4	@ 000107ba 0219
.org 0x107bc
	movs r4, #128	@ 000107bc 8024
.org 0x107be
	lsls r4, r4, #9	@ 000107be 6402
.org 0x107c0
	str r1, [r2, #0]	@ 000107c0 1160
.org 0x107c2
	adds r1, r1, r4	@ 000107c2 0919
.org 0x107c4
	subs r2, #4	@ 000107c4 043a
.org 0x107c6
	subs r6, #1	@ 000107c6 013e
.org 0x107c8
	adds r0, r3, r6	@ 000107c8 9819
.org 0x107ca
	cmp r0, #183	@ 000107ca b728
.org 0x107cc
	ble.n 0x107d2	@ 000107cc 01dd
.org 0x107ce
	cmp r6, #0	@ 000107ce 002e
.org 0x107d0
	bge.n 0x107c0	@ 000107d0 f6da
.org 0x107d2
	mov r5, ip	@ 000107d2 6546
.org 0x107d4
	lsls r2, r5, #16	@ 000107d4 2a04
.org 0x107d6
	asrs r0, r2, #16	@ 000107d6 1014
.org 0x107d8
	adds r0, r0, r6	@ 000107d8 8019
.org 0x107da
	cmp r0, #175	@ 000107da af28
.org 0x107dc
	ble.n 0x107fe	@ 000107dc 0fdd
.org 0x107de
	cmp r6, #0	@ 000107de 002e
.org 0x107e0
	blt.n 0x107fe	@ 000107e0 0ddb
.org 0x107e2
	lsls r0, r6, #2	@ 000107e2 b000
.org 0x107e4
	mov r1, r8	@ 000107e4 4146
.org 0x107e6
	adds r3, r0, r1	@ 000107e6 4318
.org 0x107e8
	asrs r1, r2, #16	@ 000107e8 1114
.org 0x107ea
	adds r0, r2, #0	@ 000107ea 101c
.org 0x107ec
	orrs r0, r7	@ 000107ec 3843
.org 0x107ee
	str r0, [r3, #0]	@ 000107ee 1860
.org 0x107f0
	subs r3, #4	@ 000107f0 043b
.org 0x107f2
	subs r6, #1	@ 000107f2 013e
.org 0x107f4
	adds r1, r1, r6	@ 000107f4 8919
.org 0x107f6
	cmp r1, #175	@ 000107f6 af29
.org 0x107f8
	ble.n 0x107fe	@ 000107f8 01dd
.org 0x107fa
	cmp r6, #0	@ 000107fa 002e
.org 0x107fc
	bge.n 0x107e8	@ 000107fc f4da
.org 0x107fe
	ldr r2, [sp, #4]	@ 000107fe 019a
.org 0x10800
	asrs r0, r2, #14	@ 00010800 9013
.org 0x10802
	movs r1, #22	@ 00010802 1621
.org 0x10804
	bl 0x128fb8	@ 00010804 18f1d8fb
.org 0x10808
	adds r0, #116	@ 00010808 7430
.org 0x1080a
	lsls r0, r0, #16	@ 0001080a 0004
.org 0x1080c
	ldr r3, [sp, #0]	@ 0001080c 009b
.org 0x1080e
	ldr r1, [r3, #104]	@ 0001080e 996e
.org 0x10810
	lsls r1, r1, #1	@ 00010810 4900
.org 0x10812
	asrs r1, r1, #3	@ 00010812 c910
.org 0x10814
	ldr r4, [sp, #8]	@ 00010814 029c
.org 0x10816
	asrs r2, r4, #22	@ 00010816 a215
.org 0x10818
	adds r1, r1, r2	@ 00010818 8918
.org 0x1081a
	lsls r1, r1, #16	@ 0001081a 0904
.org 0x1081c
	lsrs r7, r1, #16	@ 0001081c 0f0c
.org 0x1081e
	lsrs r5, r0, #16	@ 0001081e 050c
.org 0x10820
	mov ip, r5	@ 00010820 ac46
.org 0x10822
	asrs r3, r0, #16	@ 00010822 0314
.org 0x10824
	adds r0, r3, r6	@ 00010824 9819
.org 0x10826
	cmp r0, #175	@ 00010826 af28
.org 0x10828
	ble.n 0x10874	@ 00010828 24dd
.org 0x1082a
	cmp r6, #0	@ 0001082a 002e
.org 0x1082c
	blt.n 0x10874	@ 0001082c 22db
.org 0x1082e
	adds r4, r7, #0	@ 0001082e 3c1c
.org 0x10830
	lsls r0, r6, #16	@ 00010830 3004
.org 0x10832
	movs r1, #176	@ 00010832 b021
.org 0x10834
	lsls r1, r1, #16	@ 00010834 0904
.org 0x10836
	subs r1, r1, r0	@ 00010836 091a
.org 0x10838
	lsls r0, r6, #2	@ 00010838 b000
.org 0x1083a
	mov r5, r8	@ 0001083a 4546
.org 0x1083c
	adds r2, r0, r5	@ 0001083c 4219
.org 0x1083e
	movs r5, #128	@ 0001083e 8025
.org 0x10840
	lsls r5, r5, #9	@ 00010840 6d02
.org 0x10842
	adds r0, r1, #0	@ 00010842 081c
.org 0x10844
	orrs r0, r4	@ 00010844 2043
.org 0x10846
	str r0, [r2, #0]	@ 00010846 1060
.org 0x10848
	adds r1, r1, r5	@ 00010848 4919
.org 0x1084a
	subs r2, #4	@ 0001084a 043a
.org 0x1084c
	b.n 0x10868	@ 0001084c 0ce0
.org 0x1084e
	.byte 0x00	@ 0001084e data
.org 0x1084f
	.byte 0x00	@ 0001084f data
.org 0x10850
	.byte 0xb0,0x0a,0x00,0x02	@ 00010850 data
.org 0x10854
	.byte 0x10,0xc0,0x02,0x00	@ 00010854 data
.org 0x10858
	.byte 0x90,0x15,0x00,0x03	@ 00010858 data
.org 0x1085c
	.byte 0x1c,0x00,0x00,0x04	@ 0001085c data
.org 0x10860
	.byte 0x01,0x00,0x60,0xa6	@ 00010860 data
.org 0x10864
	.byte 0x00,0x00,0xa0,0xfb	@ 00010864 data
.org 0x10868
	subs r6, #1	@ 00010868 013e
.org 0x1086a
	adds r0, r3, r6	@ 0001086a 9819
.org 0x1086c
	cmp r0, #175	@ 0001086c af28
.org 0x1086e
	ble.n 0x10874	@ 0001086e 01dd
.org 0x10870
	cmp r6, #0	@ 00010870 002e
.org 0x10872
	bge.n 0x10842	@ 00010872 e6da
.org 0x10874
	mov r0, ip	@ 00010874 6046
.org 0x10876
	lsls r2, r0, #16	@ 00010876 0204
.org 0x10878
	asrs r0, r2, #16	@ 00010878 1014
.org 0x1087a
	adds r0, r0, r6	@ 0001087a 8019
.org 0x1087c
	cmp r0, #167	@ 0001087c a728
.org 0x1087e
	ble.n 0x108a0	@ 0001087e 0fdd
.org 0x10880
	cmp r6, #0	@ 00010880 002e
.org 0x10882
	blt.n 0x108a0	@ 00010882 0ddb
.org 0x10884
	lsls r0, r6, #2	@ 00010884 b000
.org 0x10886
	mov r1, r8	@ 00010886 4146
.org 0x10888
	adds r3, r0, r1	@ 00010888 4318
.org 0x1088a
	asrs r1, r2, #16	@ 0001088a 1114
.org 0x1088c
	adds r0, r2, #0	@ 0001088c 101c
.org 0x1088e
	orrs r0, r7	@ 0001088e 3843
.org 0x10890
	str r0, [r3, #0]	@ 00010890 1860
.org 0x10892
	subs r3, #4	@ 00010892 043b
.org 0x10894
	subs r6, #1	@ 00010894 013e
.org 0x10896
	adds r1, r1, r6	@ 00010896 8919
.org 0x10898
	cmp r1, #167	@ 00010898 a729
.org 0x1089a
	ble.n 0x108a0	@ 0001089a 01dd
.org 0x1089c
	cmp r6, #0	@ 0001089c 002e
.org 0x1089e
	bge.n 0x1088a	@ 0001089e f4da
.org 0x108a0
	ldr r2, [sp, #4]	@ 000108a0 019a
.org 0x108a2
	asrs r0, r2, #14	@ 000108a2 9013
.org 0x108a4
	movs r1, #23	@ 000108a4 1721
.org 0x108a6
	bl 0x128fb8	@ 000108a6 18f187fb
.org 0x108aa
	adds r0, #116	@ 000108aa 7430
.org 0x108ac
	lsls r0, r0, #16	@ 000108ac 0004
.org 0x108ae
	ldr r3, [sp, #0]	@ 000108ae 009b
.org 0x108b0
	ldr r1, [r3, #104]	@ 000108b0 996e
.org 0x108b2
	asrs r1, r1, #3	@ 000108b2 c910
.org 0x108b4
	ldr r4, [sp, #8]	@ 000108b4 029c
.org 0x108b6
	asrs r2, r4, #23	@ 000108b6 e215
.org 0x108b8
	adds r1, r1, r2	@ 000108b8 8918
.org 0x108ba
	lsls r1, r1, #16	@ 000108ba 0904
.org 0x108bc
	lsrs r7, r1, #16	@ 000108bc 0f0c
.org 0x108be
	lsrs r5, r0, #16	@ 000108be 050c
.org 0x108c0
	mov ip, r5	@ 000108c0 ac46
.org 0x108c2
	asrs r3, r0, #16	@ 000108c2 0314
.org 0x108c4
	adds r0, r3, r6	@ 000108c4 9819
.org 0x108c6
	cmp r0, #167	@ 000108c6 a728
.org 0x108c8
	ble.n 0x108f8	@ 000108c8 16dd
.org 0x108ca
	cmp r6, #0	@ 000108ca 002e
.org 0x108cc
	blt.n 0x108f8	@ 000108cc 14db
.org 0x108ce
	adds r4, r7, #0	@ 000108ce 3c1c
.org 0x108d0
	lsls r0, r6, #16	@ 000108d0 3004
.org 0x108d2
	movs r1, #168	@ 000108d2 a821
.org 0x108d4
	lsls r1, r1, #16	@ 000108d4 0904
.org 0x108d6
	subs r1, r1, r0	@ 000108d6 091a
.org 0x108d8
	lsls r0, r6, #2	@ 000108d8 b000
.org 0x108da
	mov r5, r8	@ 000108da 4546
.org 0x108dc
	adds r2, r0, r5	@ 000108dc 4219
.org 0x108de
	movs r5, #128	@ 000108de 8025
.org 0x108e0
	lsls r5, r5, #9	@ 000108e0 6d02
.org 0x108e2
	adds r0, r1, #0	@ 000108e2 081c
.org 0x108e4
	orrs r0, r4	@ 000108e4 2043
.org 0x108e6
	str r0, [r2, #0]	@ 000108e6 1060
.org 0x108e8
	adds r1, r1, r5	@ 000108e8 4919
.org 0x108ea
	subs r2, #4	@ 000108ea 043a
.org 0x108ec
	subs r6, #1	@ 000108ec 013e
.org 0x108ee
	adds r0, r3, r6	@ 000108ee 9819
.org 0x108f0
	cmp r0, #167	@ 000108f0 a728
.org 0x108f2
	ble.n 0x108f8	@ 000108f2 01dd
.org 0x108f4
	cmp r6, #0	@ 000108f4 002e
.org 0x108f6
	bge.n 0x108e2	@ 000108f6 f4da
.org 0x108f8
	mov r0, ip	@ 000108f8 6046
.org 0x108fa
	lsls r2, r0, #16	@ 000108fa 0204
.org 0x108fc
	asrs r0, r2, #16	@ 000108fc 1014
.org 0x108fe
	adds r0, r0, r6	@ 000108fe 8019
.org 0x10900
	cmp r0, #159	@ 00010900 9f28
.org 0x10902
	ble.n 0x10924	@ 00010902 0fdd
.org 0x10904
	cmp r6, #0	@ 00010904 002e
.org 0x10906
	blt.n 0x10924	@ 00010906 0ddb
.org 0x10908
	lsls r0, r6, #2	@ 00010908 b000
.org 0x1090a
	mov r1, r8	@ 0001090a 4146
.org 0x1090c
	adds r3, r0, r1	@ 0001090c 4318
.org 0x1090e
	asrs r1, r2, #16	@ 0001090e 1114
.org 0x10910
	adds r0, r2, #0	@ 00010910 101c
.org 0x10912
	orrs r0, r7	@ 00010912 3843
.org 0x10914
	str r0, [r3, #0]	@ 00010914 1860
.org 0x10916
	subs r3, #4	@ 00010916 043b
.org 0x10918
	subs r6, #1	@ 00010918 013e
.org 0x1091a
	adds r1, r1, r6	@ 0001091a 8919
.org 0x1091c
	cmp r1, #159	@ 0001091c 9f29
.org 0x1091e
	ble.n 0x10924	@ 0001091e 01dd
.org 0x10920
	cmp r6, #0	@ 00010920 002e
.org 0x10922
	bge.n 0x1090e	@ 00010922 f4da
.org 0x10924
	lsls r0, r6, #16	@ 00010924 3004
.org 0x10926
	lsrs r4, r0, #16	@ 00010926 040c
.org 0x10928
	ldr r0, [pc, #816]	@ 00010928 cc48
.org 0x1092a
	add r0, sl	@ 0001092a 5044
.org 0x1092c
	lsrs r2, r0, #16	@ 0001092c 020c
.org 0x1092e
	mov r9, r2	@ 0001092e 9146
.org 0x10930
	asrs r0, r0, #13	@ 00010930 4013
.org 0x10932
	movs r1, #24	@ 00010932 1821
.org 0x10934
	bl 0x128fb8	@ 00010934 18f140fb
.org 0x10938
	ldr r3, [sp, #0]	@ 00010938 009b
.org 0x1093a
	ldr r2, [r3, #104]	@ 0001093a 9a6e
.org 0x1093c
	lsls r1, r2, #3	@ 0001093c d100
.org 0x1093e
	subs r1, r1, r2	@ 0001093e 891a
.org 0x10940
	asrs r1, r1, #4	@ 00010940 0911
.org 0x10942
	ldr r5, [sp, #8]	@ 00010942 029d
.org 0x10944
	asrs r2, r5, #18	@ 00010944 aa14
.org 0x10946
	adds r1, r1, r2	@ 00010946 8918
.org 0x10948
	lsls r1, r1, #16	@ 00010948 0904
.org 0x1094a
	lsrs r7, r1, #16	@ 0001094a 0f0c
.org 0x1094c
	movs r6, #0	@ 0001094c 0026
.org 0x1094e
	lsls r2, r0, #16	@ 0001094e 0204
.org 0x10950
	asrs r0, r2, #16	@ 00010950 1014
.org 0x10952
	cmp r0, #25	@ 00010952 1928
.org 0x10954
	bgt.n 0x10978	@ 00010954 10dc
.org 0x10956
	lsls r0, r4, #16	@ 00010956 2004
.org 0x10958
	asrs r0, r0, #16	@ 00010958 0014
.org 0x1095a
	cmp r6, r0	@ 0001095a 8642
.org 0x1095c
	bgt.n 0x10978	@ 0001095c 0cdc
.org 0x1095e
	adds r5, r7, #0	@ 0001095e 3d1c
.org 0x10960
	mov r7, r8	@ 00010960 4746
.org 0x10962
	adds r3, r0, #0	@ 00010962 031c
.org 0x10964
	asrs r1, r2, #16	@ 00010964 1114
.org 0x10966
	adds r0, r2, #0	@ 00010966 101c
.org 0x10968
	orrs r0, r5	@ 00010968 2843
.org 0x1096a
	stmia r7!, {r0}	@ 0001096a 01c7
.org 0x1096c
	adds r6, #1	@ 0001096c 0136
.org 0x1096e
	adds r1, r1, r6	@ 0001096e 8919
.org 0x10970
	cmp r1, #25	@ 00010970 1929
.org 0x10972
	bgt.n 0x10978	@ 00010972 01dc
.org 0x10974
	cmp r6, r3	@ 00010974 9e42
.org 0x10976
	ble.n 0x10964	@ 00010976 f5dd
.org 0x10978
	mov r7, r9	@ 00010978 4f46
.org 0x1097a
	lsls r0, r7, #16	@ 0001097a 3804
.org 0x1097c
	asrs r2, r0, #13	@ 0001097c 4213
.org 0x1097e
	str r0, [sp, #4]	@ 0001097e 0190
.org 0x10980
	cmp r2, #0	@ 00010980 002a
.org 0x10982
	bge.n 0x10986	@ 00010982 00da
.org 0x10984
	adds r2, #31	@ 00010984 1f32
.org 0x10986
	lsls r2, r2, #11	@ 00010986 d202
.org 0x10988
	ldr r0, [sp, #0]	@ 00010988 0098
.org 0x1098a
	ldr r1, [r0, #104]	@ 0001098a 816e
.org 0x1098c
	lsls r0, r1, #1	@ 0001098c 4800
.org 0x1098e
	adds r0, r0, r1	@ 0001098e 4018
.org 0x10990
	lsls r0, r0, #1	@ 00010990 4000
.org 0x10992
	asrs r0, r0, #4	@ 00010992 0011
.org 0x10994
	ldr r3, [sp, #8]	@ 00010994 029b
.org 0x10996
	asrs r1, r3, #19	@ 00010996 d914
.org 0x10998
	adds r0, r0, r1	@ 00010998 4018
.org 0x1099a
	lsls r0, r0, #16	@ 0001099a 0004
.org 0x1099c
	lsrs r7, r0, #16	@ 0001099c 070c
.org 0x1099e
	lsrs r5, r2, #16	@ 0001099e 150c
.org 0x109a0
	mov ip, r5	@ 000109a0 ac46
.org 0x109a2
	asrs r2, r2, #16	@ 000109a2 1214
.org 0x109a4
	adds r0, r2, r6	@ 000109a4 9019
.org 0x109a6
	lsls r4, r4, #16	@ 000109a6 2404
.org 0x109a8
	mov sl, r4	@ 000109a8 a246
.org 0x109aa
	cmp r0, #25	@ 000109aa 1928
.org 0x109ac
	bgt.n 0x109e0	@ 000109ac 18dc
.org 0x109ae
	asrs r3, r4, #16	@ 000109ae 2314
.org 0x109b0
	cmp r6, r3	@ 000109b0 9e42
.org 0x109b2
	bgt.n 0x109e0	@ 000109b2 15dc
.org 0x109b4
	adds r4, r7, #0	@ 000109b4 3c1c
.org 0x109b6
	lsls r0, r6, #16	@ 000109b6 3004
.org 0x109b8
	movs r1, #208	@ 000109b8 d021
.org 0x109ba
	lsls r1, r1, #13	@ 000109ba 4903
.org 0x109bc
	subs r1, r1, r0	@ 000109bc 091a
.org 0x109be
	lsls r0, r6, #2	@ 000109be b000
.org 0x109c0
	add r0, r8	@ 000109c0 4044
.org 0x109c2
	str r0, [sp, #16]	@ 000109c2 0490
.org 0x109c4
	ldr r0, [pc, #664]	@ 000109c4 a648
.org 0x109c6
	mov r9, r0	@ 000109c6 8146
.org 0x109c8
	adds r0, r1, #0	@ 000109c8 081c
.org 0x109ca
	orrs r0, r4	@ 000109ca 2043
.org 0x109cc
	ldr r5, [sp, #16]	@ 000109cc 049d
.org 0x109ce
	stmia r5!, {r0}	@ 000109ce 01c5
.org 0x109d0
	str r5, [sp, #16]	@ 000109d0 0495
.org 0x109d2
	add r1, r9	@ 000109d2 4944
.org 0x109d4
	adds r6, #1	@ 000109d4 0136
.org 0x109d6
	adds r0, r2, r6	@ 000109d6 9019
.org 0x109d8
	cmp r0, #25	@ 000109d8 1928
.org 0x109da
	bgt.n 0x109e0	@ 000109da 01dc
.org 0x109dc
	cmp r6, r3	@ 000109dc 9e42
.org 0x109de
	ble.n 0x109c8	@ 000109de f3dd
.org 0x109e0
	mov r0, ip	@ 000109e0 6046
.org 0x109e2
	lsls r2, r0, #16	@ 000109e2 0204
.org 0x109e4
	asrs r0, r2, #16	@ 000109e4 1014
.org 0x109e6
	adds r0, r0, r6	@ 000109e6 8019
.org 0x109e8
	cmp r0, #38	@ 000109e8 2628
.org 0x109ea
	bgt.n 0x10a10	@ 000109ea 11dc
.org 0x109ec
	mov r3, sl	@ 000109ec 5346
.org 0x109ee
	asrs r1, r3, #16	@ 000109ee 1914
.org 0x109f0
	cmp r6, r1	@ 000109f0 8e42
.org 0x109f2
	bgt.n 0x10a10	@ 000109f2 0ddc
.org 0x109f4
	lsls r0, r6, #2	@ 000109f4 b000
.org 0x109f6
	mov r4, r8	@ 000109f6 4446
.org 0x109f8
	adds r5, r0, r4	@ 000109f8 0519
.org 0x109fa
	adds r3, r1, #0	@ 000109fa 0b1c
.org 0x109fc
	asrs r1, r2, #16	@ 000109fc 1114
.org 0x109fe
	adds r0, r2, #0	@ 000109fe 101c
.org 0x10a00
	orrs r0, r7	@ 00010a00 3843
.org 0x10a02
	stmia r5!, {r0}	@ 00010a02 01c5
.org 0x10a04
	adds r6, #1	@ 00010a04 0136
.org 0x10a06
	adds r1, r1, r6	@ 00010a06 8919
.org 0x10a08
	cmp r1, #38	@ 00010a08 2629
.org 0x10a0a
	bgt.n 0x10a10	@ 00010a0a 01dc
.org 0x10a0c
	cmp r6, r3	@ 00010a0c 9e42
.org 0x10a0e
	ble.n 0x109fc	@ 00010a0e f5dd
.org 0x10a10
	ldr r5, [sp, #4]	@ 00010a10 019d
.org 0x10a12
	asrs r0, r5, #13	@ 00010a12 6813
.org 0x10a14
	movs r1, #40	@ 00010a14 2821
.org 0x10a16
	bl 0x128fb8	@ 00010a16 18f1cffa
.org 0x10a1a
	lsls r0, r0, #16	@ 00010a1a 0004
.org 0x10a1c
	ldr r7, [sp, #0]	@ 00010a1c 009f
.org 0x10a1e
	ldr r2, [r7, #104]	@ 00010a1e ba6e
.org 0x10a20
	lsls r1, r2, #2	@ 00010a20 9100
.org 0x10a22
	adds r1, r1, r2	@ 00010a22 8918
.org 0x10a24
	asrs r1, r1, #4	@ 00010a24 0911
.org 0x10a26
	ldr r3, [sp, #8]	@ 00010a26 029b
.org 0x10a28
	asrs r2, r3, #20	@ 00010a28 1a15
.org 0x10a2a
	adds r1, r1, r2	@ 00010a2a 8918
.org 0x10a2c
	lsls r1, r1, #16	@ 00010a2c 0904
.org 0x10a2e
	lsrs r7, r1, #16	@ 00010a2e 0f0c
.org 0x10a30
	lsrs r4, r0, #16	@ 00010a30 040c
.org 0x10a32
	mov ip, r4	@ 00010a32 a446
.org 0x10a34
	asrs r3, r0, #16	@ 00010a34 0314
.org 0x10a36
	adds r0, r3, r6	@ 00010a36 9819
.org 0x10a38
	cmp r0, #38	@ 00010a38 2628
.org 0x10a3a
	bgt.n 0x10a70	@ 00010a3a 19dc
.org 0x10a3c
	mov r5, sl	@ 00010a3c 5546
.org 0x10a3e
	asrs r2, r5, #16	@ 00010a3e 2a14
.org 0x10a40
	cmp r6, r2	@ 00010a40 9642
.org 0x10a42
	bgt.n 0x10a70	@ 00010a42 15dc
.org 0x10a44
	adds r4, r7, #0	@ 00010a44 3c1c
.org 0x10a46
	lsls r0, r6, #16	@ 00010a46 3004
.org 0x10a48
	movs r1, #156	@ 00010a48 9c21
.org 0x10a4a
	lsls r1, r1, #14	@ 00010a4a 8903
.org 0x10a4c
	subs r1, r1, r0	@ 00010a4c 091a
.org 0x10a4e
	lsls r0, r6, #2	@ 00010a4e b000
.org 0x10a50
	add r0, r8	@ 00010a50 4044
.org 0x10a52
	str r0, [sp, #16]	@ 00010a52 0490
.org 0x10a54
	ldr r0, [pc, #520]	@ 00010a54 8248
.org 0x10a56
	mov r9, r0	@ 00010a56 8146
.org 0x10a58
	adds r0, r1, #0	@ 00010a58 081c
.org 0x10a5a
	orrs r0, r4	@ 00010a5a 2043
.org 0x10a5c
	ldr r5, [sp, #16]	@ 00010a5c 049d
.org 0x10a5e
	stmia r5!, {r0}	@ 00010a5e 01c5
.org 0x10a60
	str r5, [sp, #16]	@ 00010a60 0495
.org 0x10a62
	add r1, r9	@ 00010a62 4944
.org 0x10a64
	adds r6, #1	@ 00010a64 0136
.org 0x10a66
	adds r0, r3, r6	@ 00010a66 9819
.org 0x10a68
	cmp r0, #38	@ 00010a68 2628
.org 0x10a6a
	bgt.n 0x10a70	@ 00010a6a 01dc
.org 0x10a6c
	cmp r6, r2	@ 00010a6c 9642
.org 0x10a6e
	ble.n 0x10a58	@ 00010a6e f3dd
.org 0x10a70
	mov r0, ip	@ 00010a70 6046
.org 0x10a72
	lsls r2, r0, #16	@ 00010a72 0204
.org 0x10a74
	asrs r0, r2, #16	@ 00010a74 1014
.org 0x10a76
	adds r0, r0, r6	@ 00010a76 8019
.org 0x10a78
	cmp r0, #63	@ 00010a78 3f28
.org 0x10a7a
	bgt.n 0x10aa0	@ 00010a7a 11dc
.org 0x10a7c
	mov r3, sl	@ 00010a7c 5346
.org 0x10a7e
	asrs r1, r3, #16	@ 00010a7e 1914
.org 0x10a80
	cmp r6, r1	@ 00010a80 8e42
.org 0x10a82
	bgt.n 0x10aa0	@ 00010a82 0ddc
.org 0x10a84
	lsls r0, r6, #2	@ 00010a84 b000
.org 0x10a86
	mov r4, r8	@ 00010a86 4446
.org 0x10a88
	adds r5, r0, r4	@ 00010a88 0519
.org 0x10a8a
	adds r3, r1, #0	@ 00010a8a 0b1c
.org 0x10a8c
	asrs r1, r2, #16	@ 00010a8c 1114
.org 0x10a8e
	adds r0, r2, #0	@ 00010a8e 101c
.org 0x10a90
	orrs r0, r7	@ 00010a90 3843
.org 0x10a92
	stmia r5!, {r0}	@ 00010a92 01c5
.org 0x10a94
	adds r6, #1	@ 00010a94 0136
.org 0x10a96
	adds r1, r1, r6	@ 00010a96 8919
.org 0x10a98
	cmp r1, #63	@ 00010a98 3f29
.org 0x10a9a
	bgt.n 0x10aa0	@ 00010a9a 01dc
.org 0x10a9c
	cmp r6, r3	@ 00010a9c 9e42
.org 0x10a9e
	ble.n 0x10a8c	@ 00010a9e f5dd
.org 0x10aa0
	ldr r5, [sp, #4]	@ 00010aa0 019d
.org 0x10aa2
	asrs r0, r5, #13	@ 00010aa2 6813
.org 0x10aa4
	movs r1, #48	@ 00010aa4 3021
.org 0x10aa6
	bl 0x128fb8	@ 00010aa6 18f187fa
.org 0x10aaa
	lsls r0, r0, #16	@ 00010aaa 0004
.org 0x10aac
	ldr r7, [sp, #0]	@ 00010aac 009f
.org 0x10aae
	ldr r1, [r7, #104]	@ 00010aae b96e
.org 0x10ab0
	lsls r1, r1, #2	@ 00010ab0 8900
.org 0x10ab2
	asrs r1, r1, #4	@ 00010ab2 0911
.org 0x10ab4
	ldr r3, [sp, #8]	@ 00010ab4 029b
.org 0x10ab6
	asrs r2, r3, #21	@ 00010ab6 5a15
.org 0x10ab8
	adds r1, r1, r2	@ 00010ab8 8918
.org 0x10aba
	lsls r1, r1, #16	@ 00010aba 0904
.org 0x10abc
	lsrs r7, r1, #16	@ 00010abc 0f0c
.org 0x10abe
	lsrs r4, r0, #16	@ 00010abe 040c
.org 0x10ac0
	mov ip, r4	@ 00010ac0 a446
.org 0x10ac2
	asrs r3, r0, #16	@ 00010ac2 0314
.org 0x10ac4
	adds r0, r3, r6	@ 00010ac4 9819
.org 0x10ac6
	cmp r0, #63	@ 00010ac6 3f28
.org 0x10ac8
	bgt.n 0x10b00	@ 00010ac8 1adc
.org 0x10aca
	mov r5, sl	@ 00010aca 5546
.org 0x10acc
	asrs r2, r5, #16	@ 00010acc 2a14
.org 0x10ace
	cmp r6, r2	@ 00010ace 9642
.org 0x10ad0
	bgt.n 0x10b00	@ 00010ad0 16dc
.org 0x10ad2
	adds r4, r7, #0	@ 00010ad2 3c1c
.org 0x10ad4
	lsls r0, r6, #16	@ 00010ad4 3004
.org 0x10ad6
	negs r0, r0	@ 00010ad6 4042
.org 0x10ad8
	movs r5, #128	@ 00010ad8 8025
.org 0x10ada
	lsls r5, r5, #15	@ 00010ada ed03
.org 0x10adc
	adds r1, r0, r5	@ 00010adc 4119
.org 0x10ade
	lsls r0, r6, #2	@ 00010ade b000
.org 0x10ae0
	add r0, r8	@ 00010ae0 4044
.org 0x10ae2
	str r0, [sp, #16]	@ 00010ae2 0490
.org 0x10ae4
	ldr r0, [pc, #376]	@ 00010ae4 5e48
.org 0x10ae6
	mov r9, r0	@ 00010ae6 8146
.org 0x10ae8
	adds r0, r1, #0	@ 00010ae8 081c
.org 0x10aea
	orrs r0, r4	@ 00010aea 2043
.org 0x10aec
	ldr r5, [sp, #16]	@ 00010aec 049d
.org 0x10aee
	stmia r5!, {r0}	@ 00010aee 01c5
.org 0x10af0
	str r5, [sp, #16]	@ 00010af0 0495
.org 0x10af2
	add r1, r9	@ 00010af2 4944
.org 0x10af4
	adds r6, #1	@ 00010af4 0136
.org 0x10af6
	adds r0, r3, r6	@ 00010af6 9819
.org 0x10af8
	cmp r0, #63	@ 00010af8 3f28
.org 0x10afa
	bgt.n 0x10b00	@ 00010afa 01dc
.org 0x10afc
	cmp r6, r2	@ 00010afc 9642
.org 0x10afe
	ble.n 0x10ae8	@ 00010afe f3dd
.org 0x10b00
	mov r0, ip	@ 00010b00 6046
.org 0x10b02
	lsls r2, r0, #16	@ 00010b02 0204
.org 0x10b04
	asrs r0, r2, #16	@ 00010b04 1014
.org 0x10b06
	adds r0, r0, r6	@ 00010b06 8019
.org 0x10b08
	cmp r0, #78	@ 00010b08 4e28
.org 0x10b0a
	bgt.n 0x10b30	@ 00010b0a 11dc
.org 0x10b0c
	mov r3, sl	@ 00010b0c 5346
.org 0x10b0e
	asrs r1, r3, #16	@ 00010b0e 1914
.org 0x10b10
	cmp r6, r1	@ 00010b10 8e42
.org 0x10b12
	bgt.n 0x10b30	@ 00010b12 0ddc
.org 0x10b14
	lsls r0, r6, #2	@ 00010b14 b000
.org 0x10b16
	mov r4, r8	@ 00010b16 4446
.org 0x10b18
	adds r5, r0, r4	@ 00010b18 0519
.org 0x10b1a
	adds r3, r1, #0	@ 00010b1a 0b1c
.org 0x10b1c
	asrs r1, r2, #16	@ 00010b1c 1114
.org 0x10b1e
	adds r0, r2, #0	@ 00010b1e 101c
.org 0x10b20
	orrs r0, r7	@ 00010b20 3843
.org 0x10b22
	stmia r5!, {r0}	@ 00010b22 01c5
.org 0x10b24
	adds r6, #1	@ 00010b24 0136
.org 0x10b26
	adds r1, r1, r6	@ 00010b26 8919
.org 0x10b28
	cmp r1, #78	@ 00010b28 4e29
.org 0x10b2a
	bgt.n 0x10b30	@ 00010b2a 01dc
.org 0x10b2c
	cmp r6, r3	@ 00010b2c 9e42
.org 0x10b2e
	ble.n 0x10b1c	@ 00010b2e f5dd
.org 0x10b30
	ldr r5, [sp, #4]	@ 00010b30 019d
.org 0x10b32
	asrs r0, r5, #13	@ 00010b32 6813
.org 0x10b34
	movs r1, #56	@ 00010b34 3821
.org 0x10b36
	bl 0x128fb8	@ 00010b36 18f13ffa
.org 0x10b3a
	lsls r0, r0, #16	@ 00010b3a 0004
.org 0x10b3c
	ldr r7, [sp, #0]	@ 00010b3c 009f
.org 0x10b3e
	ldr r2, [r7, #104]	@ 00010b3e ba6e
.org 0x10b40
	lsls r1, r2, #1	@ 00010b40 5100
.org 0x10b42
	adds r1, r1, r2	@ 00010b42 8918
.org 0x10b44
	asrs r1, r1, #4	@ 00010b44 0911
.org 0x10b46
	ldr r3, [sp, #8]	@ 00010b46 029b
.org 0x10b48
	asrs r2, r3, #22	@ 00010b48 9a15
.org 0x10b4a
	adds r1, r1, r2	@ 00010b4a 8918
.org 0x10b4c
	lsls r1, r1, #16	@ 00010b4c 0904
.org 0x10b4e
	lsrs r7, r1, #16	@ 00010b4e 0f0c
.org 0x10b50
	lsrs r4, r0, #16	@ 00010b50 040c
.org 0x10b52
	mov ip, r4	@ 00010b52 a446
.org 0x10b54
	asrs r3, r0, #16	@ 00010b54 0314
.org 0x10b56
	adds r0, r3, r6	@ 00010b56 9819
.org 0x10b58
	cmp r0, #78	@ 00010b58 4e28
.org 0x10b5a
	bgt.n 0x10b90	@ 00010b5a 19dc
.org 0x10b5c
	mov r5, sl	@ 00010b5c 5546
.org 0x10b5e
	asrs r2, r5, #16	@ 00010b5e 2a14
.org 0x10b60
	cmp r6, r2	@ 00010b60 9642
.org 0x10b62
	bgt.n 0x10b90	@ 00010b62 15dc
.org 0x10b64
	adds r4, r7, #0	@ 00010b64 3c1c
.org 0x10b66
	lsls r0, r6, #16	@ 00010b66 3004
.org 0x10b68
	movs r1, #158	@ 00010b68 9e21
.org 0x10b6a
	lsls r1, r1, #15	@ 00010b6a c903
.org 0x10b6c
	subs r1, r1, r0	@ 00010b6c 091a
.org 0x10b6e
	lsls r0, r6, #2	@ 00010b6e b000
.org 0x10b70
	add r0, r8	@ 00010b70 4044
.org 0x10b72
	str r0, [sp, #16]	@ 00010b72 0490
.org 0x10b74
	ldr r0, [pc, #232]	@ 00010b74 3a48
.org 0x10b76
	mov r9, r0	@ 00010b76 8146
.org 0x10b78
	adds r0, r1, #0	@ 00010b78 081c
.org 0x10b7a
	orrs r0, r4	@ 00010b7a 2043
.org 0x10b7c
	ldr r5, [sp, #16]	@ 00010b7c 049d
.org 0x10b7e
	stmia r5!, {r0}	@ 00010b7e 01c5
.org 0x10b80
	str r5, [sp, #16]	@ 00010b80 0495
.org 0x10b82
	add r1, r9	@ 00010b82 4944
.org 0x10b84
	adds r6, #1	@ 00010b84 0136
.org 0x10b86
	adds r0, r3, r6	@ 00010b86 9819
.org 0x10b88
	cmp r0, #78	@ 00010b88 4e28
.org 0x10b8a
	bgt.n 0x10b90	@ 00010b8a 01dc
.org 0x10b8c
	cmp r6, r2	@ 00010b8c 9642
.org 0x10b8e
	ble.n 0x10b78	@ 00010b8e f3dd
.org 0x10b90
	mov r0, ip	@ 00010b90 6046
.org 0x10b92
	lsls r2, r0, #16	@ 00010b92 0204
.org 0x10b94
	asrs r0, r2, #16	@ 00010b94 1014
.org 0x10b96
	adds r0, r0, r6	@ 00010b96 8019
.org 0x10b98
	cmp r0, #105	@ 00010b98 6928
.org 0x10b9a
	bgt.n 0x10bc0	@ 00010b9a 11dc
.org 0x10b9c
	mov r3, sl	@ 00010b9c 5346
.org 0x10b9e
	asrs r1, r3, #16	@ 00010b9e 1914
.org 0x10ba0
	cmp r6, r1	@ 00010ba0 8e42
.org 0x10ba2
	bgt.n 0x10bc0	@ 00010ba2 0ddc
.org 0x10ba4
	lsls r0, r6, #2	@ 00010ba4 b000
.org 0x10ba6
	mov r4, r8	@ 00010ba6 4446
.org 0x10ba8
	adds r5, r0, r4	@ 00010ba8 0519
.org 0x10baa
	adds r3, r1, #0	@ 00010baa 0b1c
.org 0x10bac
	asrs r1, r2, #16	@ 00010bac 1114
.org 0x10bae
	adds r0, r2, #0	@ 00010bae 101c
.org 0x10bb0
	orrs r0, r7	@ 00010bb0 3843
.org 0x10bb2
	stmia r5!, {r0}	@ 00010bb2 01c5
.org 0x10bb4
	adds r6, #1	@ 00010bb4 0136
.org 0x10bb6
	adds r1, r1, r6	@ 00010bb6 8919
.org 0x10bb8
	cmp r1, #105	@ 00010bb8 6929
.org 0x10bba
	bgt.n 0x10bc0	@ 00010bba 01dc
.org 0x10bbc
	cmp r6, r3	@ 00010bbc 9e42
.org 0x10bbe
	ble.n 0x10bac	@ 00010bbe f5dd
.org 0x10bc0
	ldr r5, [sp, #4]	@ 00010bc0 019d
.org 0x10bc2
	asrs r0, r5, #13	@ 00010bc2 6813
.org 0x10bc4
	movs r1, #60	@ 00010bc4 3c21
.org 0x10bc6
	bl 0x128fb8	@ 00010bc6 18f1f7f9
.org 0x10bca
	lsls r0, r0, #16	@ 00010bca 0004
.org 0x10bcc
	ldr r7, [sp, #0]	@ 00010bcc 009f
.org 0x10bce
	ldr r1, [r7, #104]	@ 00010bce b96e
.org 0x10bd0
	lsls r1, r1, #1	@ 00010bd0 4900
.org 0x10bd2
	asrs r1, r1, #4	@ 00010bd2 0911
.org 0x10bd4
	ldr r3, [sp, #8]	@ 00010bd4 029b
.org 0x10bd6
	asrs r2, r3, #23	@ 00010bd6 da15
.org 0x10bd8
	adds r1, r1, r2	@ 00010bd8 8918
.org 0x10bda
	lsls r1, r1, #16	@ 00010bda 0904
.org 0x10bdc
	lsrs r7, r1, #16	@ 00010bdc 0f0c
.org 0x10bde
	lsrs r4, r0, #16	@ 00010bde 040c
.org 0x10be0
	mov ip, r4	@ 00010be0 a446
.org 0x10be2
	asrs r3, r0, #16	@ 00010be2 0314
.org 0x10be4
	adds r0, r3, r6	@ 00010be4 9819
.org 0x10be6
	cmp r0, #105	@ 00010be6 6928
.org 0x10be8
	bgt.n 0x10c1e	@ 00010be8 19dc
.org 0x10bea
	mov r5, sl	@ 00010bea 5546
.org 0x10bec
	asrs r2, r5, #16	@ 00010bec 2a14
.org 0x10bee
	cmp r6, r2	@ 00010bee 9642
.org 0x10bf0
	bgt.n 0x10c1e	@ 00010bf0 15dc
.org 0x10bf2
	adds r4, r7, #0	@ 00010bf2 3c1c
.org 0x10bf4
	lsls r0, r6, #16	@ 00010bf4 3004
.org 0x10bf6
	movs r1, #212	@ 00010bf6 d421
.org 0x10bf8
	lsls r1, r1, #15	@ 00010bf8 c903
.org 0x10bfa
	subs r1, r1, r0	@ 00010bfa 091a
.org 0x10bfc
	lsls r0, r6, #2	@ 00010bfc b000
.org 0x10bfe
	add r0, r8	@ 00010bfe 4044
.org 0x10c00
	str r0, [sp, #16]	@ 00010c00 0490
.org 0x10c02
	ldr r0, [pc, #92]	@ 00010c02 1748
.org 0x10c04
	mov r9, r0	@ 00010c04 8146
.org 0x10c06
	adds r0, r1, #0	@ 00010c06 081c
.org 0x10c08
	orrs r0, r4	@ 00010c08 2043
.org 0x10c0a
	ldr r5, [sp, #16]	@ 00010c0a 049d
.org 0x10c0c
	stmia r5!, {r0}	@ 00010c0c 01c5
.org 0x10c0e
	str r5, [sp, #16]	@ 00010c0e 0495
.org 0x10c10
	add r1, r9	@ 00010c10 4944
.org 0x10c12
	adds r6, #1	@ 00010c12 0136
.org 0x10c14
	adds r0, r3, r6	@ 00010c14 9819
.org 0x10c16
	cmp r0, #105	@ 00010c16 6928
.org 0x10c18
	bgt.n 0x10c1e	@ 00010c18 01dc
.org 0x10c1a
	cmp r6, r2	@ 00010c1a 9642
.org 0x10c1c
	ble.n 0x10c06	@ 00010c1c f3dd
.org 0x10c1e
	mov r0, ip	@ 00010c1e 6046
.org 0x10c20
	lsls r2, r0, #16	@ 00010c20 0204
.org 0x10c22
	asrs r0, r2, #16	@ 00010c22 1014
.org 0x10c24
	adds r0, r0, r6	@ 00010c24 8019
.org 0x10c26
	cmp r0, #158	@ 00010c26 9e28
.org 0x10c28
	bgt.n 0x10c4e	@ 00010c28 11dc
.org 0x10c2a
	mov r3, sl	@ 00010c2a 5346
.org 0x10c2c
	asrs r1, r3, #16	@ 00010c2c 1914
.org 0x10c2e
	cmp r6, r1	@ 00010c2e 8e42
.org 0x10c30
	bgt.n 0x10c4e	@ 00010c30 0ddc
.org 0x10c32
	lsls r0, r6, #2	@ 00010c32 b000
.org 0x10c34
	mov r4, r8	@ 00010c34 4446
.org 0x10c36
	adds r5, r0, r4	@ 00010c36 0519
.org 0x10c38
	adds r3, r1, #0	@ 00010c38 0b1c
.org 0x10c3a
	asrs r1, r2, #16	@ 00010c3a 1114
.org 0x10c3c
	adds r0, r2, #0	@ 00010c3c 101c
.org 0x10c3e
	orrs r0, r7	@ 00010c3e 3843
.org 0x10c40
	stmia r5!, {r0}	@ 00010c40 01c5
.org 0x10c42
	adds r6, #1	@ 00010c42 0136
.org 0x10c44
	adds r1, r1, r6	@ 00010c44 8919
.org 0x10c46
	cmp r1, #158	@ 00010c46 9e29
.org 0x10c48
	bgt.n 0x10c4e	@ 00010c48 01dc
.org 0x10c4a
	cmp r6, r3	@ 00010c4a 9e42
.org 0x10c4c
	ble.n 0x10c3a	@ 00010c4c f5dd
.org 0x10c4e
	ldr r5, [sp, #4]	@ 00010c4e 019d
.org 0x10c50
	asrs r3, r5, #13	@ 00010c50 6b13
.org 0x10c52
	cmp r3, #0	@ 00010c52 002b
.org 0x10c54
	bge.n 0x10c64	@ 00010c54 06da
.org 0x10c56
	adds r3, #63	@ 00010c56 3f33
.org 0x10c58
	b.n 0x10c64	@ 00010c58 04e0
.org 0x10c5a
	.byte 0x00	@ 00010c5a data
.org 0x10c5b
	.byte 0x00	@ 00010c5b data
.org 0x10c5c
	.byte 0x00,0x00,0xc0,0xfe	@ 00010c5c data
.org 0x10c60
	.byte 0x00,0x00,0xff,0xff	@ 00010c60 data
.org 0x10c64
	ldr r7, [sp, #0]	@ 00010c64 009f
.org 0x10c66
	ldr r0, [r7, #104]	@ 00010c66 b86e
.org 0x10c68
	asrs r0, r0, #4	@ 00010c68 0011
.org 0x10c6a
	ldr r2, [sp, #8]	@ 00010c6a 029a
.org 0x10c6c
	asrs r1, r2, #23	@ 00010c6c d115
.org 0x10c6e
	adds r0, r0, r1	@ 00010c6e 4018
.org 0x10c70
	lsls r0, r0, #16	@ 00010c70 0004
.org 0x10c72
	lsrs r7, r0, #16	@ 00010c72 070c
.org 0x10c74
	asrs r3, r3, #6	@ 00010c74 9b11
.org 0x10c76
	adds r0, r3, r6	@ 00010c76 9819
.org 0x10c78
	cmp r0, #158	@ 00010c78 9e28
.org 0x10c7a
	bgt.n 0x10cb0	@ 00010c7a 19dc
.org 0x10c7c
	mov r4, sl	@ 00010c7c 5446
.org 0x10c7e
	asrs r2, r4, #16	@ 00010c7e 2214
.org 0x10c80
	cmp r6, r2	@ 00010c80 9642
.org 0x10c82
	ble.n 0x10c86	@ 00010c82 00dd
.org 0x10c84
	b.n 0x113b2	@ 00010c84 95e3
.org 0x10c86
	mov r9, r7	@ 00010c86 b946
.org 0x10c88
	lsls r0, r6, #16	@ 00010c88 3004
.org 0x10c8a
	movs r1, #159	@ 00010c8a 9f21
.org 0x10c8c
	lsls r1, r1, #16	@ 00010c8c 0904
.org 0x10c8e
	subs r1, r1, r0	@ 00010c8e 091a
.org 0x10c90
	lsls r0, r6, #2	@ 00010c90 b000
.org 0x10c92
	mov r5, r8	@ 00010c92 4546
.org 0x10c94
	adds r4, r0, r5	@ 00010c94 4419
.org 0x10c96
	ldr r0, [pc, #68]	@ 00010c96 1148
.org 0x10c98
	mov ip, r0	@ 00010c98 8446
.org 0x10c9a
	adds r0, r1, #0	@ 00010c9a 081c
.org 0x10c9c
	mov r5, r9	@ 00010c9c 4d46
.org 0x10c9e
	orrs r0, r5	@ 00010c9e 2843
.org 0x10ca0
	stmia r4!, {r0}	@ 00010ca0 01c4
.org 0x10ca2
	add r1, ip	@ 00010ca2 6144
.org 0x10ca4
	adds r6, #1	@ 00010ca4 0136
.org 0x10ca6
	adds r0, r3, r6	@ 00010ca6 9819
.org 0x10ca8
	cmp r0, #158	@ 00010ca8 9e28
.org 0x10caa
	bgt.n 0x10cb0	@ 00010caa 01dc
.org 0x10cac
	cmp r6, r2	@ 00010cac 9642
.org 0x10cae
	ble.n 0x10c9a	@ 00010cae f4dd
.org 0x10cb0
	mov r0, sl	@ 00010cb0 5046
.org 0x10cb2
	asrs r3, r0, #16	@ 00010cb2 0314
.org 0x10cb4
	cmp r6, r3	@ 00010cb4 9e42
.org 0x10cb6
	ble.n 0x10cba	@ 00010cb6 00dd
.org 0x10cb8
	b.n 0x113b2	@ 00010cb8 7be3
.org 0x10cba
	adds r2, r7, #0	@ 00010cba 3a1c
.org 0x10cbc
	lsls r0, r6, #16	@ 00010cbc 3004
.org 0x10cbe
	movs r1, #160	@ 00010cbe a021
.org 0x10cc0
	lsls r1, r1, #16	@ 00010cc0 0904
.org 0x10cc2
	subs r1, r1, r0	@ 00010cc2 091a
.org 0x10cc4
	lsls r0, r6, #2	@ 00010cc4 b000
.org 0x10cc6
	mov r4, r8	@ 00010cc6 4446
.org 0x10cc8
	adds r5, r0, r4	@ 00010cc8 0519
.org 0x10cca
	ldr r4, [pc, #16]	@ 00010cca 044c
.org 0x10ccc
	adds r0, r1, #0	@ 00010ccc 081c
.org 0x10cce
	orrs r0, r2	@ 00010cce 1043
.org 0x10cd0
	stmia r5!, {r0}	@ 00010cd0 01c5
.org 0x10cd2
	adds r1, r1, r4	@ 00010cd2 0919
.org 0x10cd4
	adds r6, #1	@ 00010cd4 0136
.org 0x10cd6
	cmp r6, r3	@ 00010cd6 9e42
.org 0x10cd8
	ble.n 0x10ccc	@ 00010cd8 f8dd
.org 0x10cda
	b.n 0x113b2	@ 00010cda 6ae3
.org 0x10cdc
	.byte 0x00,0x00,0xff,0xff	@ 00010cdc data
.org 0x10ce0
	movs r5, #159	@ 00010ce0 9f25
.org 0x10ce2
	ldr r7, [sp, #0]	@ 00010ce2 009f
.org 0x10ce4
	ldrh r6, [r7, #52]	@ 00010ce4 be8e
.org 0x10ce6
	ldrh r4, [r7, #56]	@ 00010ce6 3c8f
.org 0x10ce8
	movs r0, #56	@ 00010ce8 3820
.org 0x10cea
	ldrsh r1, [r7, r0]	@ 00010cea 395e
.org 0x10cec
	ldr r0, [pc, #808]	@ 00010cec ca48
.org 0x10cee
	cmp r1, r0	@ 00010cee 8142
.org 0x10cf0
	bgt.n 0x10cf6	@ 00010cf0 01dc
.org 0x10cf2
	movs r4, #216	@ 00010cf2 d824
.org 0x10cf4
	lsls r4, r4, #1	@ 00010cf4 6400
.org 0x10cf6
	movs r0, #160	@ 00010cf6 a020
.org 0x10cf8
	lsls r0, r0, #2	@ 00010cf8 8000
.org 0x10cfa
	bl 0xa70	@ 00010cfa eff7b9fe
.org 0x10cfe
	mov r8, r0	@ 00010cfe 8046
.org 0x10d00
	cmp r0, #0	@ 00010d00 0028
.org 0x10d02
	bne.n 0x10d06	@ 00010d02 00d1
.org 0x10d04
	b.n 0x113b2	@ 00010d04 55e3
.org 0x10d06
	ldr r2, [pc, #788]	@ 00010d06 c54a
.org 0x10d08
	movs r1, #186	@ 00010d08 ba21
.org 0x10d0a
	lsls r1, r1, #1	@ 00010d0a 4900
.org 0x10d0c
	adds r0, r2, r1	@ 00010d0c 5018
.org 0x10d0e
	mov r3, r8	@ 00010d0e 4346
.org 0x10d10
	str r3, [r0, #0]	@ 00010d10 0360
.org 0x10d12
	movs r7, #188	@ 00010d12 bc27
.org 0x10d14
	lsls r7, r7, #1	@ 00010d14 7f00
.org 0x10d16
	adds r1, r2, r7	@ 00010d16 d119
.org 0x10d18
	ldr r0, [pc, #772]	@ 00010d18 c148
.org 0x10d1a
	str r0, [r1, #0]	@ 00010d1a 0860
.org 0x10d1c
	movs r0, #190	@ 00010d1c be20
.org 0x10d1e
	lsls r0, r0, #1	@ 00010d1e 4000
.org 0x10d20
	adds r1, r2, r0	@ 00010d20 1118
.org 0x10d22
	ldr r0, [pc, #768]	@ 00010d22 c048
.org 0x10d24
	str r0, [r1, #0]	@ 00010d24 0860
.org 0x10d26
	lsls r3, r4, #16	@ 00010d26 2304
.org 0x10d28
	ldr r2, [sp, #0]	@ 00010d28 009a
.org 0x10d2a
	ldr r1, [r2, #104]	@ 00010d2a 916e
.org 0x10d2c
	lsls r0, r1, #1	@ 00010d2c 4800
.org 0x10d2e
	adds r0, r0, r1	@ 00010d2e 4018
.org 0x10d30
	lsls r0, r0, #1	@ 00010d30 4000
.org 0x10d32
	asrs r0, r0, #3	@ 00010d32 c010
.org 0x10d34
	lsls r2, r6, #16	@ 00010d34 3204
.org 0x10d36
	asrs r1, r2, #18	@ 00010d36 9114
.org 0x10d38
	adds r0, r0, r1	@ 00010d38 4018
.org 0x10d3a
	lsls r0, r0, #16	@ 00010d3a 0004
.org 0x10d3c
	lsrs r4, r0, #16	@ 00010d3c 040c
.org 0x10d3e
	ldr r7, [pc, #744]	@ 00010d3e ba4f
.org 0x10d40
	adds r0, r3, r7	@ 00010d40 d819
.org 0x10d42
	asrs r0, r0, #18	@ 00010d42 8014
.org 0x10d44
	adds r0, #16	@ 00010d44 1030
.org 0x10d46
	lsls r0, r0, #16	@ 00010d46 0004
.org 0x10d48
	lsrs r6, r0, #16	@ 00010d48 060c
.org 0x10d4a
	asrs r1, r0, #16	@ 00010d4a 0114
.org 0x10d4c
	adds r0, r1, #0	@ 00010d4c 081c
.org 0x10d4e
	adds r0, #159	@ 00010d4e 9f30
.org 0x10d50
	mov sl, r3	@ 00010d50 9a46
.org 0x10d52
	mov r9, r2	@ 00010d52 9146
.org 0x10d54
	cmp r0, #254	@ 00010d54 fe28
.org 0x10d56
	ble.n 0x10d7e	@ 00010d56 12dd
.org 0x10d58
	adds r3, r1, #0	@ 00010d58 0b1c
.org 0x10d5a
	lsls r0, r5, #16	@ 00010d5a 2804
.org 0x10d5c
	movs r1, #184	@ 00010d5c b821
.org 0x10d5e
	lsls r1, r1, #16	@ 00010d5e 0904
.org 0x10d60
	subs r1, r1, r0	@ 00010d60 091a
.org 0x10d62
	lsls r0, r5, #2	@ 00010d62 a800
.org 0x10d64
	mov r7, r8	@ 00010d64 4746
.org 0x10d66
	adds r2, r7, r0	@ 00010d66 3a18
.org 0x10d68
	movs r7, #128	@ 00010d68 8027
.org 0x10d6a
	lsls r7, r7, #9	@ 00010d6a 7f02
.org 0x10d6c
	str r1, [r2, #0]	@ 00010d6c 1160
.org 0x10d6e
	adds r1, r1, r7	@ 00010d6e c919
.org 0x10d70
	subs r2, #4	@ 00010d70 043a
.org 0x10d72
	subs r5, #1	@ 00010d72 013d
.org 0x10d74
	adds r0, r3, r5	@ 00010d74 5819
.org 0x10d76
	cmp r0, #254	@ 00010d76 fe28
.org 0x10d78
	ble.n 0x10d7e	@ 00010d78 01dd
.org 0x10d7a
	cmp r5, #0	@ 00010d7a 002d
.org 0x10d7c
	bge.n 0x10d6c	@ 00010d7c f6da
.org 0x10d7e
	lsls r3, r6, #16	@ 00010d7e 3304
.org 0x10d80
	asrs r0, r3, #16	@ 00010d80 1814
.org 0x10d82
	adds r0, r0, r5	@ 00010d82 4019
.org 0x10d84
	cmp r0, #248	@ 00010d84 f828
.org 0x10d86
	ble.n 0x10da8	@ 00010d86 0fdd
.org 0x10d88
	cmp r5, #0	@ 00010d88 002d
.org 0x10d8a
	blt.n 0x10da8	@ 00010d8a 0ddb
.org 0x10d8c
	lsls r0, r5, #2	@ 00010d8c a800
.org 0x10d8e
	mov r1, r8	@ 00010d8e 4146
.org 0x10d90
	adds r2, r0, r1	@ 00010d90 4218
.org 0x10d92
	asrs r1, r3, #16	@ 00010d92 1914
.org 0x10d94
	adds r0, r3, #0	@ 00010d94 181c
.org 0x10d96
	orrs r0, r4	@ 00010d96 2043
.org 0x10d98
	str r0, [r2, #0]	@ 00010d98 1060
.org 0x10d9a
	subs r2, #4	@ 00010d9a 043a
.org 0x10d9c
	subs r5, #1	@ 00010d9c 013d
.org 0x10d9e
	adds r1, r1, r5	@ 00010d9e 4919
.org 0x10da0
	cmp r1, #248	@ 00010da0 f829
.org 0x10da2
	ble.n 0x10da8	@ 00010da2 01dd
.org 0x10da4
	cmp r5, #0	@ 00010da4 002d
.org 0x10da6
	bge.n 0x10d92	@ 00010da6 f4da
.org 0x10da8
	ldr r1, [pc, #640]	@ 00010da8 a049
.org 0x10daa
	add r1, sl	@ 00010daa 5144
.org 0x10dac
	asrs r1, r1, #18	@ 00010dac 8914
.org 0x10dae
	adds r1, #16	@ 00010dae 1031
.org 0x10db0
	lsls r1, r1, #16	@ 00010db0 0904
.org 0x10db2
	ldr r3, [sp, #0]	@ 00010db2 009b
.org 0x10db4
	ldr r2, [r3, #104]	@ 00010db4 9a6e
.org 0x10db6
	lsls r0, r2, #2	@ 00010db6 9000
.org 0x10db8
	adds r0, r0, r2	@ 00010db8 8018
.org 0x10dba
	asrs r0, r0, #3	@ 00010dba c010
.org 0x10dbc
	mov r4, r9	@ 00010dbc 4c46
.org 0x10dbe
	asrs r2, r4, #19	@ 00010dbe e214
.org 0x10dc0
	adds r0, r0, r2	@ 00010dc0 8018
.org 0x10dc2
	lsls r0, r0, #16	@ 00010dc2 0004
.org 0x10dc4
	lsrs r4, r0, #16	@ 00010dc4 040c
.org 0x10dc6
	lsrs r6, r1, #16	@ 00010dc6 0e0c
.org 0x10dc8
	asrs r3, r1, #16	@ 00010dc8 0b14
.org 0x10dca
	adds r0, r3, r5	@ 00010dca 5819
.org 0x10dcc
	cmp r0, #248	@ 00010dcc f828
.org 0x10dce
	ble.n 0x10e02	@ 00010dce 18dd
.org 0x10dd0
	cmp r5, #0	@ 00010dd0 002d
.org 0x10dd2
	blt.n 0x10e02	@ 00010dd2 16db
.org 0x10dd4
	str r4, [sp, #12]	@ 00010dd4 0394
.org 0x10dd6
	lsls r0, r5, #16	@ 00010dd6 2804
.org 0x10dd8
	movs r1, #248	@ 00010dd8 f821
.org 0x10dda
	lsls r1, r1, #16	@ 00010dda 0904
.org 0x10ddc
	subs r1, r1, r0	@ 00010ddc 091a
.org 0x10dde
	lsls r0, r5, #2	@ 00010dde a800
.org 0x10de0
	mov r7, r8	@ 00010de0 4746
.org 0x10de2
	adds r2, r0, r7	@ 00010de2 c219
.org 0x10de4
	movs r0, #128	@ 00010de4 8020
.org 0x10de6
	lsls r0, r0, #9	@ 00010de6 4002
.org 0x10de8
	mov ip, r0	@ 00010de8 8446
.org 0x10dea
	adds r0, r1, #0	@ 00010dea 081c
.org 0x10dec
	ldr r7, [sp, #12]	@ 00010dec 039f
.org 0x10dee
	orrs r0, r7	@ 00010dee 3843
.org 0x10df0
	str r0, [r2, #0]	@ 00010df0 1060
.org 0x10df2
	add r1, ip	@ 00010df2 6144
.org 0x10df4
	subs r2, #4	@ 00010df4 043a
.org 0x10df6
	subs r5, #1	@ 00010df6 013d
.org 0x10df8
	adds r0, r3, r5	@ 00010df8 5819
.org 0x10dfa
	cmp r0, #248	@ 00010dfa f828
.org 0x10dfc
	ble.n 0x10e02	@ 00010dfc 01dd
.org 0x10dfe
	cmp r5, #0	@ 00010dfe 002d
.org 0x10e00
	bge.n 0x10dea	@ 00010e00 f3da
.org 0x10e02
	lsls r3, r6, #16	@ 00010e02 3304
.org 0x10e04
	asrs r0, r3, #16	@ 00010e04 1814
.org 0x10e06
	adds r0, r0, r5	@ 00010e06 4019
.org 0x10e08
	cmp r0, #221	@ 00010e08 dd28
.org 0x10e0a
	ble.n 0x10e2c	@ 00010e0a 0fdd
.org 0x10e0c
	cmp r5, #0	@ 00010e0c 002d
.org 0x10e0e
	blt.n 0x10e2c	@ 00010e0e 0ddb
.org 0x10e10
	lsls r0, r5, #2	@ 00010e10 a800
.org 0x10e12
	mov r1, r8	@ 00010e12 4146
.org 0x10e14
	adds r2, r0, r1	@ 00010e14 4218
.org 0x10e16
	asrs r1, r3, #16	@ 00010e16 1914
.org 0x10e18
	adds r0, r3, #0	@ 00010e18 181c
.org 0x10e1a
	orrs r0, r4	@ 00010e1a 2043
.org 0x10e1c
	str r0, [r2, #0]	@ 00010e1c 1060
.org 0x10e1e
	subs r2, #4	@ 00010e1e 043a
.org 0x10e20
	subs r5, #1	@ 00010e20 013d
.org 0x10e22
	adds r1, r1, r5	@ 00010e22 4919
.org 0x10e24
	cmp r1, #221	@ 00010e24 dd29
.org 0x10e26
	ble.n 0x10e2c	@ 00010e26 01dd
.org 0x10e28
	cmp r5, #0	@ 00010e28 002d
.org 0x10e2a
	bge.n 0x10e16	@ 00010e2a f4da
.org 0x10e2c
	ldr r1, [pc, #512]	@ 00010e2c 8049
.org 0x10e2e
	add r1, sl	@ 00010e2e 5144
.org 0x10e30
	asrs r1, r1, #18	@ 00010e30 8914
.org 0x10e32
	adds r1, #16	@ 00010e32 1031
.org 0x10e34
	lsls r1, r1, #16	@ 00010e34 0904
.org 0x10e36
	ldr r2, [sp, #0]	@ 00010e36 009a
.org 0x10e38
	ldr r0, [r2, #104]	@ 00010e38 906e
.org 0x10e3a
	lsls r0, r0, #2	@ 00010e3a 8000
.org 0x10e3c
	asrs r0, r0, #3	@ 00010e3c c010
.org 0x10e3e
	mov r3, r9	@ 00010e3e 4b46
.org 0x10e40
	asrs r2, r3, #20	@ 00010e40 1a15
.org 0x10e42
	adds r0, r0, r2	@ 00010e42 8018
.org 0x10e44
	lsls r0, r0, #16	@ 00010e44 0004
.org 0x10e46
	lsrs r4, r0, #16	@ 00010e46 040c
.org 0x10e48
	lsrs r6, r1, #16	@ 00010e48 0e0c
.org 0x10e4a
	asrs r3, r1, #16	@ 00010e4a 0b14
.org 0x10e4c
	adds r0, r3, r5	@ 00010e4c 5819
.org 0x10e4e
	cmp r0, #221	@ 00010e4e dd28
.org 0x10e50
	ble.n 0x10e84	@ 00010e50 18dd
.org 0x10e52
	cmp r5, #0	@ 00010e52 002d
.org 0x10e54
	blt.n 0x10e84	@ 00010e54 16db
.org 0x10e56
	str r4, [sp, #12]	@ 00010e56 0394
.org 0x10e58
	lsls r0, r5, #16	@ 00010e58 2804
.org 0x10e5a
	movs r1, #221	@ 00010e5a dd21
.org 0x10e5c
	lsls r1, r1, #16	@ 00010e5c 0904
.org 0x10e5e
	subs r1, r1, r0	@ 00010e5e 091a
.org 0x10e60
	lsls r0, r5, #2	@ 00010e60 a800
.org 0x10e62
	mov r7, r8	@ 00010e62 4746
.org 0x10e64
	adds r2, r0, r7	@ 00010e64 c219
.org 0x10e66
	movs r0, #128	@ 00010e66 8020
.org 0x10e68
	lsls r0, r0, #9	@ 00010e68 4002
.org 0x10e6a
	mov ip, r0	@ 00010e6a 8446
.org 0x10e6c
	adds r0, r1, #0	@ 00010e6c 081c
.org 0x10e6e
	ldr r7, [sp, #12]	@ 00010e6e 039f
.org 0x10e70
	orrs r0, r7	@ 00010e70 3843
.org 0x10e72
	str r0, [r2, #0]	@ 00010e72 1060
.org 0x10e74
	add r1, ip	@ 00010e74 6144
.org 0x10e76
	subs r2, #4	@ 00010e76 043a
.org 0x10e78
	subs r5, #1	@ 00010e78 013d
.org 0x10e7a
	adds r0, r3, r5	@ 00010e7a 5819
.org 0x10e7c
	cmp r0, #221	@ 00010e7c dd28
.org 0x10e7e
	ble.n 0x10e84	@ 00010e7e 01dd
.org 0x10e80
	cmp r5, #0	@ 00010e80 002d
.org 0x10e82
	bge.n 0x10e6c	@ 00010e82 f3da
.org 0x10e84
	lsls r6, r6, #16	@ 00010e84 3604
.org 0x10e86
	asrs r0, r6, #16	@ 00010e86 3014
.org 0x10e88
	adds r0, r0, r5	@ 00010e88 4019
.org 0x10e8a
	adds r3, r6, #0	@ 00010e8a 331c
.org 0x10e8c
	cmp r0, #196	@ 00010e8c c428
.org 0x10e8e
	ble.n 0x10eb0	@ 00010e8e 0fdd
.org 0x10e90
	cmp r5, #0	@ 00010e90 002d
.org 0x10e92
	blt.n 0x10eb0	@ 00010e92 0ddb
.org 0x10e94
	lsls r0, r5, #2	@ 00010e94 a800
.org 0x10e96
	mov r1, r8	@ 00010e96 4146
.org 0x10e98
	adds r2, r0, r1	@ 00010e98 4218
.org 0x10e9a
	asrs r1, r6, #16	@ 00010e9a 3114
.org 0x10e9c
	adds r0, r6, #0	@ 00010e9c 301c
.org 0x10e9e
	orrs r0, r4	@ 00010e9e 2043
.org 0x10ea0
	str r0, [r2, #0]	@ 00010ea0 1060
.org 0x10ea2
	subs r2, #4	@ 00010ea2 043a
.org 0x10ea4
	subs r5, #1	@ 00010ea4 013d
.org 0x10ea6
	adds r1, r1, r5	@ 00010ea6 4919
.org 0x10ea8
	cmp r1, #196	@ 00010ea8 c429
.org 0x10eaa
	ble.n 0x10eb0	@ 00010eaa 01dd
.org 0x10eac
	cmp r5, #0	@ 00010eac 002d
.org 0x10eae
	bge.n 0x10e9a	@ 00010eae f4da
.org 0x10eb0
	ldr r2, [sp, #0]	@ 00010eb0 009a
.org 0x10eb2
	ldr r1, [r2, #104]	@ 00010eb2 916e
.org 0x10eb4
	lsls r0, r1, #1	@ 00010eb4 4800
.org 0x10eb6
	adds r0, r0, r1	@ 00010eb6 4018
.org 0x10eb8
	asrs r0, r0, #3	@ 00010eb8 c010
.org 0x10eba
	mov r4, r9	@ 00010eba 4c46
.org 0x10ebc
	asrs r1, r4, #21	@ 00010ebc 6115
.org 0x10ebe
	adds r0, r0, r1	@ 00010ebe 4018
.org 0x10ec0
	lsls r0, r0, #16	@ 00010ec0 0004
.org 0x10ec2
	lsrs r4, r0, #16	@ 00010ec2 040c
.org 0x10ec4
	adds r6, r3, #0	@ 00010ec4 1e1c
.org 0x10ec6
	asrs r0, r3, #16	@ 00010ec6 1814
.org 0x10ec8
	adds r0, r0, r5	@ 00010ec8 4019
.org 0x10eca
	cmp r0, #187	@ 00010eca bb28
.org 0x10ecc
	ble.n 0x10eee	@ 00010ecc 0fdd
.org 0x10ece
	cmp r5, #0	@ 00010ece 002d
.org 0x10ed0
	blt.n 0x10eee	@ 00010ed0 0ddb
.org 0x10ed2
	lsls r0, r5, #2	@ 00010ed2 a800
.org 0x10ed4
	mov r7, r8	@ 00010ed4 4746
.org 0x10ed6
	adds r2, r0, r7	@ 00010ed6 c219
.org 0x10ed8
	asrs r1, r6, #16	@ 00010ed8 3114
.org 0x10eda
	adds r0, r6, #0	@ 00010eda 301c
.org 0x10edc
	orrs r0, r4	@ 00010edc 2043
.org 0x10ede
	str r0, [r2, #0]	@ 00010ede 1060
.org 0x10ee0
	subs r2, #4	@ 00010ee0 043a
.org 0x10ee2
	subs r5, #1	@ 00010ee2 013d
.org 0x10ee4
	adds r1, r1, r5	@ 00010ee4 4919
.org 0x10ee6
	cmp r1, #187	@ 00010ee6 bb29
.org 0x10ee8
	ble.n 0x10eee	@ 00010ee8 01dd
.org 0x10eea
	cmp r5, #0	@ 00010eea 002d
.org 0x10eec
	bge.n 0x10ed8	@ 00010eec f4da
.org 0x10eee
	ldr r1, [sp, #0]	@ 00010eee 0099
.org 0x10ef0
	ldr r0, [r1, #104]	@ 00010ef0 886e
.org 0x10ef2
	lsls r0, r0, #1	@ 00010ef2 4000
.org 0x10ef4
	asrs r0, r0, #3	@ 00010ef4 c010
.org 0x10ef6
	mov r2, r9	@ 00010ef6 4a46
.org 0x10ef8
	asrs r1, r2, #22	@ 00010ef8 9115
.org 0x10efa
	adds r0, r0, r1	@ 00010efa 4018
.org 0x10efc
	lsls r0, r0, #16	@ 00010efc 0004
.org 0x10efe
	lsrs r4, r0, #16	@ 00010efe 040c
.org 0x10f00
	asrs r0, r3, #16	@ 00010f00 1814
.org 0x10f02
	adds r0, r0, r5	@ 00010f02 4019
.org 0x10f04
	cmp r0, #179	@ 00010f04 b328
.org 0x10f06
	ble.n 0x10f28	@ 00010f06 0fdd
.org 0x10f08
	cmp r5, #0	@ 00010f08 002d
.org 0x10f0a
	blt.n 0x10f28	@ 00010f0a 0ddb
.org 0x10f0c
	lsls r0, r5, #2	@ 00010f0c a800
.org 0x10f0e
	mov r7, r8	@ 00010f0e 4746
.org 0x10f10
	adds r2, r0, r7	@ 00010f10 c219
.org 0x10f12
	asrs r1, r3, #16	@ 00010f12 1914
.org 0x10f14
	adds r0, r3, #0	@ 00010f14 181c
.org 0x10f16
	orrs r0, r4	@ 00010f16 2043
.org 0x10f18
	str r0, [r2, #0]	@ 00010f18 1060
.org 0x10f1a
	subs r2, #4	@ 00010f1a 043a
.org 0x10f1c
	subs r5, #1	@ 00010f1c 013d
.org 0x10f1e
	adds r1, r1, r5	@ 00010f1e 4919
.org 0x10f20
	cmp r1, #179	@ 00010f20 b329
.org 0x10f22
	ble.n 0x10f28	@ 00010f22 01dd
.org 0x10f24
	cmp r5, #0	@ 00010f24 002d
.org 0x10f26
	bge.n 0x10f12	@ 00010f26 f4da
.org 0x10f28
	ldr r1, [pc, #264]	@ 00010f28 4249
.org 0x10f2a
	add r1, sl	@ 00010f2a 5144
.org 0x10f2c
	asrs r1, r1, #18	@ 00010f2c 8914
.org 0x10f2e
	adds r1, #16	@ 00010f2e 1031
.org 0x10f30
	lsls r1, r1, #16	@ 00010f30 0904
.org 0x10f32
	ldr r2, [sp, #0]	@ 00010f32 009a
.org 0x10f34
	ldr r0, [r2, #104]	@ 00010f34 906e
.org 0x10f36
	asrs r0, r0, #4	@ 00010f36 0011
.org 0x10f38
	mov r3, r9	@ 00010f38 4b46
.org 0x10f3a
	asrs r2, r3, #23	@ 00010f3a da15
.org 0x10f3c
	adds r0, r0, r2	@ 00010f3c 8018
.org 0x10f3e
	lsls r0, r0, #16	@ 00010f3e 0004
.org 0x10f40
	lsrs r4, r0, #16	@ 00010f40 040c
.org 0x10f42
	lsrs r6, r1, #16	@ 00010f42 0e0c
.org 0x10f44
	asrs r1, r1, #16	@ 00010f44 0914
.org 0x10f46
	adds r0, r1, r5	@ 00010f46 4819
.org 0x10f48
	cmp r0, #179	@ 00010f48 b328
.org 0x10f4a
	ble.n 0x10f76	@ 00010f4a 14dd
.org 0x10f4c
	cmp r5, #0	@ 00010f4c 002d
.org 0x10f4e
	blt.n 0x10f76	@ 00010f4e 12db
.org 0x10f50
	adds r3, r1, #0	@ 00010f50 0b1c
.org 0x10f52
	lsls r0, r5, #16	@ 00010f52 2804
.org 0x10f54
	movs r1, #180	@ 00010f54 b421
.org 0x10f56
	lsls r1, r1, #16	@ 00010f56 0904
.org 0x10f58
	subs r1, r1, r0	@ 00010f58 091a
.org 0x10f5a
	lsls r0, r5, #2	@ 00010f5a a800
.org 0x10f5c
	mov r7, r8	@ 00010f5c 4746
.org 0x10f5e
	adds r2, r0, r7	@ 00010f5e c219
.org 0x10f60
	movs r7, #128	@ 00010f60 8027
.org 0x10f62
	lsls r7, r7, #9	@ 00010f62 7f02
.org 0x10f64
	str r1, [r2, #0]	@ 00010f64 1160
.org 0x10f66
	adds r1, r1, r7	@ 00010f66 c919
.org 0x10f68
	subs r2, #4	@ 00010f68 043a
.org 0x10f6a
	subs r5, #1	@ 00010f6a 013d
.org 0x10f6c
	adds r0, r3, r5	@ 00010f6c 5819
.org 0x10f6e
	cmp r0, #179	@ 00010f6e b328
.org 0x10f70
	ble.n 0x10f76	@ 00010f70 01dd
.org 0x10f72
	cmp r5, #0	@ 00010f72 002d
.org 0x10f74
	bge.n 0x10f64	@ 00010f74 f6da
.org 0x10f76
	lsls r6, r6, #16	@ 00010f76 3604
.org 0x10f78
	asrs r0, r6, #16	@ 00010f78 3014
.org 0x10f7a
	adds r0, r0, r5	@ 00010f7a 4019
.org 0x10f7c
	adds r3, r6, #0	@ 00010f7c 331c
.org 0x10f7e
	cmp r0, #169	@ 00010f7e a928
.org 0x10f80
	ble.n 0x10fa2	@ 00010f80 0fdd
.org 0x10f82
	cmp r5, #0	@ 00010f82 002d
.org 0x10f84
	blt.n 0x10fa2	@ 00010f84 0ddb
.org 0x10f86
	lsls r0, r5, #2	@ 00010f86 a800
.org 0x10f88
	mov r1, r8	@ 00010f88 4146
.org 0x10f8a
	adds r2, r0, r1	@ 00010f8a 4218
.org 0x10f8c
	asrs r1, r6, #16	@ 00010f8c 3114
.org 0x10f8e
	adds r0, r6, #0	@ 00010f8e 301c
.org 0x10f90
	orrs r0, r4	@ 00010f90 2043
.org 0x10f92
	str r0, [r2, #0]	@ 00010f92 1060
.org 0x10f94
	subs r2, #4	@ 00010f94 043a
.org 0x10f96
	subs r5, #1	@ 00010f96 013d
.org 0x10f98
	adds r1, r1, r5	@ 00010f98 4919
.org 0x10f9a
	cmp r1, #169	@ 00010f9a a929
.org 0x10f9c
	ble.n 0x10fa2	@ 00010f9c 01dd
.org 0x10f9e
	cmp r5, #0	@ 00010f9e 002d
.org 0x10fa0
	bge.n 0x10f8c	@ 00010fa0 f4da
.org 0x10fa2
	ldr r2, [sp, #0]	@ 00010fa2 009a
.org 0x10fa4
	ldr r0, [r2, #104]	@ 00010fa4 906e
.org 0x10fa6
	lsls r0, r0, #1	@ 00010fa6 4000
.org 0x10fa8
	asrs r0, r0, #4	@ 00010fa8 0011
.org 0x10faa
	mov r4, r9	@ 00010faa 4c46
.org 0x10fac
	asrs r1, r4, #23	@ 00010fac e115
.org 0x10fae
	adds r0, r0, r1	@ 00010fae 4018
.org 0x10fb0
	lsls r0, r0, #16	@ 00010fb0 0004
.org 0x10fb2
	lsrs r4, r0, #16	@ 00010fb2 040c
.org 0x10fb4
	adds r6, r3, #0	@ 00010fb4 1e1c
.org 0x10fb6
	asrs r0, r3, #16	@ 00010fb6 1814
.org 0x10fb8
	adds r0, r0, r5	@ 00010fb8 4019
.org 0x10fba
	cmp r0, #160	@ 00010fba a028
.org 0x10fbc
	ble.n 0x10fde	@ 00010fbc 0fdd
.org 0x10fbe
	cmp r5, #0	@ 00010fbe 002d
.org 0x10fc0
	blt.n 0x10fde	@ 00010fc0 0ddb
.org 0x10fc2
	lsls r0, r5, #2	@ 00010fc2 a800
.org 0x10fc4
	mov r7, r8	@ 00010fc4 4746
.org 0x10fc6
	adds r2, r0, r7	@ 00010fc6 c219
.org 0x10fc8
	asrs r1, r6, #16	@ 00010fc8 3114
.org 0x10fca
	adds r0, r6, #0	@ 00010fca 301c
.org 0x10fcc
	orrs r0, r4	@ 00010fcc 2043
.org 0x10fce
	str r0, [r2, #0]	@ 00010fce 1060
.org 0x10fd0
	subs r2, #4	@ 00010fd0 043a
.org 0x10fd2
	subs r5, #1	@ 00010fd2 013d
.org 0x10fd4
	adds r1, r1, r5	@ 00010fd4 4919
.org 0x10fd6
	cmp r1, #160	@ 00010fd6 a029
.org 0x10fd8
	ble.n 0x10fde	@ 00010fd8 01dd
.org 0x10fda
	cmp r5, #0	@ 00010fda 002d
.org 0x10fdc
	bge.n 0x10fc8	@ 00010fdc f4da
.org 0x10fde
	ldr r1, [sp, #0]	@ 00010fde 0099
.org 0x10fe0
	ldr r0, [r1, #104]	@ 00010fe0 886e
.org 0x10fe2
	lsls r0, r0, #2	@ 00010fe2 8000
.org 0x10fe4
	asrs r0, r0, #4	@ 00010fe4 0011
.org 0x10fe6
	mov r2, r9	@ 00010fe6 4a46
.org 0x10fe8
	asrs r1, r2, #22	@ 00010fe8 9115
.org 0x10fea
	adds r0, r0, r1	@ 00010fea 4018
.org 0x10fec
	lsls r0, r0, #16	@ 00010fec 0004
.org 0x10fee
	lsrs r4, r0, #16	@ 00010fee 040c
.org 0x10ff0
	adds r6, r3, #0	@ 00010ff0 1e1c
.org 0x10ff2
	asrs r0, r3, #16	@ 00010ff2 1814
.org 0x10ff4
	adds r0, r0, r5	@ 00010ff4 4019
.org 0x10ff6
	cmp r0, #151	@ 00010ff6 9728
.org 0x10ff8
	ble.n 0x1103e	@ 00010ff8 21dd
.org 0x10ffa
	cmp r5, #0	@ 00010ffa 002d
.org 0x10ffc
	blt.n 0x1103e	@ 00010ffc 1fdb
.org 0x10ffe
	lsls r0, r5, #2	@ 00010ffe a800
.org 0x11000
	mov r7, r8	@ 00011000 4746
.org 0x11002
	adds r2, r0, r7	@ 00011002 c219
.org 0x11004
	asrs r1, r6, #16	@ 00011004 3114
.org 0x11006
	adds r0, r6, #0	@ 00011006 301c
.org 0x11008
	orrs r0, r4	@ 00011008 2043
.org 0x1100a
	str r0, [r2, #0]	@ 0001100a 1060
.org 0x1100c
	subs r2, #4	@ 0001100c 043a
.org 0x1100e
	subs r5, #1	@ 0001100e 013d
.org 0x11010
	adds r1, r1, r5	@ 00011010 4919
.org 0x11012
	cmp r1, #151	@ 00011012 9729
.org 0x11014
	b.n 0x11038	@ 00011014 10e0
.org 0x11016
	.byte 0x00	@ 00011016 data
.org 0x11017
	.byte 0x00	@ 00011017 data
.org 0x11018
	.byte 0xaf,0x01,0x00,0x00	@ 00011018 data
.org 0x1101c
	.byte 0x90,0x15,0x00,0x03	@ 0001101c data
.org 0x11020
	.byte 0x1c,0x00,0x00,0x04	@ 00011020 data
.org 0x11024
	.byte 0x01,0x00,0x60,0xa6	@ 00011024 data
.org 0x11028
	.byte 0x00,0x00,0x60,0xfd	@ 00011028 data
.org 0x1102c
	.byte 0x00,0x00,0x80,0xfd	@ 0001102c data
.org 0x11030
	.byte 0x00,0x00,0xc0,0xfd	@ 00011030 data
.org 0x11034
	.byte 0x00,0x00,0xe0,0xfd	@ 00011034 data
.org 0x11038
	ble.n 0x1103e	@ 00011038 01dd
.org 0x1103a
	cmp r5, #0	@ 0001103a 002d
.org 0x1103c
	bge.n 0x11004	@ 0001103c e2da
.org 0x1103e
	ldr r0, [sp, #0]	@ 0001103e 0098
.org 0x11040
	ldr r1, [r0, #104]	@ 00011040 816e
.org 0x11042
	lsls r0, r1, #2	@ 00011042 8800
.org 0x11044
	adds r0, r0, r1	@ 00011044 4018
.org 0x11046
	asrs r0, r0, #4	@ 00011046 0011
.org 0x11048
	mov r2, r9	@ 00011048 4a46
.org 0x1104a
	asrs r1, r2, #21	@ 0001104a 5115
.org 0x1104c
	adds r0, r0, r1	@ 0001104c 4018
.org 0x1104e
	lsls r0, r0, #16	@ 0001104e 0004
.org 0x11050
	lsrs r4, r0, #16	@ 00011050 040c
.org 0x11052
	asrs r0, r3, #16	@ 00011052 1814
.org 0x11054
	adds r0, r0, r5	@ 00011054 4019
.org 0x11056
	cmp r0, #140	@ 00011056 8c28
.org 0x11058
	ble.n 0x1107a	@ 00011058 0fdd
.org 0x1105a
	cmp r5, #0	@ 0001105a 002d
.org 0x1105c
	blt.n 0x1107a	@ 0001105c 0ddb
.org 0x1105e
	lsls r0, r5, #2	@ 0001105e a800
.org 0x11060
	mov r7, r8	@ 00011060 4746
.org 0x11062
	adds r2, r0, r7	@ 00011062 c219
.org 0x11064
	asrs r1, r3, #16	@ 00011064 1914
.org 0x11066
	adds r0, r3, #0	@ 00011066 181c
.org 0x11068
	orrs r0, r4	@ 00011068 2043
.org 0x1106a
	str r0, [r2, #0]	@ 0001106a 1060
.org 0x1106c
	subs r2, #4	@ 0001106c 043a
.org 0x1106e
	subs r5, #1	@ 0001106e 013d
.org 0x11070
	adds r1, r1, r5	@ 00011070 4919
.org 0x11072
	cmp r1, #140	@ 00011072 8c29
.org 0x11074
	ble.n 0x1107a	@ 00011074 01dd
.org 0x11076
	cmp r5, #0	@ 00011076 002d
.org 0x11078
	bge.n 0x11064	@ 00011078 f4da
.org 0x1107a
	ldr r0, [pc, #800]	@ 0001107a c848
.org 0x1107c
	add r0, sl	@ 0001107c 5044
.org 0x1107e
	asrs r0, r0, #18	@ 0001107e 8014
.org 0x11080
	adds r0, #16	@ 00011080 1030
.org 0x11082
	lsls r0, r0, #16	@ 00011082 0004
.org 0x11084
	lsrs r6, r0, #16	@ 00011084 060c
.org 0x11086
	ldr r1, [sp, #0]	@ 00011086 0099
.org 0x11088
	ldr r0, [r1, #104]	@ 00011088 886e
.org 0x1108a
	lsls r4, r0, #1	@ 0001108a 4400
.org 0x1108c
	adds r4, r4, r0	@ 0001108c 2418
.org 0x1108e
	lsls r4, r4, #1	@ 0001108e 6400
.org 0x11090
	asrs r4, r4, #4	@ 00011090 2411
.org 0x11092
	mov r2, r9	@ 00011092 4a46
.org 0x11094
	asrs r0, r2, #16	@ 00011094 1014
.org 0x11096
	movs r1, #56	@ 00011096 3821
.org 0x11098
	bl 0x128fb8	@ 00011098 17f18eff
.org 0x1109c
	adds r4, r4, r0	@ 0001109c 2418
.org 0x1109e
	lsls r4, r4, #16	@ 0001109e 2404
.org 0x110a0
	lsrs r4, r4, #16	@ 000110a0 240c
.org 0x110a2
	lsls r0, r6, #16	@ 000110a2 3004
.org 0x110a4
	asrs r1, r0, #16	@ 000110a4 0114
.org 0x110a6
	adds r0, r1, r5	@ 000110a6 4819
.org 0x110a8
	cmp r0, #140	@ 000110a8 8c28
.org 0x110aa
	ble.n 0x110d6	@ 000110aa 14dd
.org 0x110ac
	cmp r5, #0	@ 000110ac 002d
.org 0x110ae
	blt.n 0x110d6	@ 000110ae 12db
.org 0x110b0
	adds r3, r1, #0	@ 000110b0 0b1c
.org 0x110b2
	lsls r0, r5, #16	@ 000110b2 2804
.org 0x110b4
	movs r1, #141	@ 000110b4 8d21
.org 0x110b6
	lsls r1, r1, #16	@ 000110b6 0904
.org 0x110b8
	subs r1, r1, r0	@ 000110b8 091a
.org 0x110ba
	lsls r0, r5, #2	@ 000110ba a800
.org 0x110bc
	mov r7, r8	@ 000110bc 4746
.org 0x110be
	adds r2, r0, r7	@ 000110be c219
.org 0x110c0
	movs r7, #128	@ 000110c0 8027
.org 0x110c2
	lsls r7, r7, #9	@ 000110c2 7f02
.org 0x110c4
	str r1, [r2, #0]	@ 000110c4 1160
.org 0x110c6
	adds r1, r1, r7	@ 000110c6 c919
.org 0x110c8
	subs r2, #4	@ 000110c8 043a
.org 0x110ca
	subs r5, #1	@ 000110ca 013d
.org 0x110cc
	adds r0, r3, r5	@ 000110cc 5819
.org 0x110ce
	cmp r0, #140	@ 000110ce 8c28
.org 0x110d0
	ble.n 0x110d6	@ 000110d0 01dd
.org 0x110d2
	cmp r5, #0	@ 000110d2 002d
.org 0x110d4
	bge.n 0x110c4	@ 000110d4 f6da
.org 0x110d6
	lsls r3, r6, #16	@ 000110d6 3304
.org 0x110d8
	asrs r0, r3, #16	@ 000110d8 1814
.org 0x110da
	adds r0, r0, r5	@ 000110da 4019
.org 0x110dc
	cmp r0, #118	@ 000110dc 7628
.org 0x110de
	ble.n 0x11100	@ 000110de 0fdd
.org 0x110e0
	cmp r5, #0	@ 000110e0 002d
.org 0x110e2
	blt.n 0x11100	@ 000110e2 0ddb
.org 0x110e4
	lsls r0, r5, #2	@ 000110e4 a800
.org 0x110e6
	mov r1, r8	@ 000110e6 4146
.org 0x110e8
	adds r2, r0, r1	@ 000110e8 4218
.org 0x110ea
	asrs r1, r3, #16	@ 000110ea 1914
.org 0x110ec
	adds r0, r3, #0	@ 000110ec 181c
.org 0x110ee
	orrs r0, r4	@ 000110ee 2043
.org 0x110f0
	str r0, [r2, #0]	@ 000110f0 1060
.org 0x110f2
	subs r2, #4	@ 000110f2 043a
.org 0x110f4
	subs r5, #1	@ 000110f4 013d
.org 0x110f6
	adds r1, r1, r5	@ 000110f6 4919
.org 0x110f8
	cmp r1, #118	@ 000110f8 7629
.org 0x110fa
	ble.n 0x11100	@ 000110fa 01dd
.org 0x110fc
	cmp r5, #0	@ 000110fc 002d
.org 0x110fe
	bge.n 0x110ea	@ 000110fe f4da
.org 0x11100
	movs r0, #254	@ 00011100 fe20
.org 0x11102
	lsls r0, r0, #24	@ 00011102 0006
.org 0x11104
	add r0, sl	@ 00011104 5044
.org 0x11106
	asrs r0, r0, #18	@ 00011106 8014
.org 0x11108
	adds r0, #16	@ 00011108 1030
.org 0x1110a
	lsls r0, r0, #16	@ 0001110a 0004
.org 0x1110c
	lsrs r6, r0, #16	@ 0001110c 060c
.org 0x1110e
	ldr r2, [sp, #0]	@ 0001110e 009a
.org 0x11110
	ldr r0, [r2, #104]	@ 00011110 906e
.org 0x11112
	lsls r4, r0, #3	@ 00011112 c400
.org 0x11114
	subs r4, r4, r0	@ 00011114 241a
.org 0x11116
	asrs r4, r4, #4	@ 00011116 2411
.org 0x11118
	mov r3, r9	@ 00011118 4b46
.org 0x1111a
	asrs r0, r3, #16	@ 0001111a 1814
.org 0x1111c
	movs r1, #48	@ 0001111c 3021
.org 0x1111e
	bl 0x128fb8	@ 0001111e 17f14bff
.org 0x11122
	adds r4, r4, r0	@ 00011122 2418
.org 0x11124
	lsls r4, r4, #16	@ 00011124 2404
.org 0x11126
	lsrs r4, r4, #16	@ 00011126 240c
.org 0x11128
	lsls r0, r6, #16	@ 00011128 3004
.org 0x1112a
	asrs r1, r0, #16	@ 0001112a 0114
.org 0x1112c
	adds r0, r1, r5	@ 0001112c 4819
.org 0x1112e
	cmp r0, #118	@ 0001112e 7628
.org 0x11130
	ble.n 0x1115c	@ 00011130 14dd
.org 0x11132
	cmp r5, #0	@ 00011132 002d
.org 0x11134
	blt.n 0x1115c	@ 00011134 12db
.org 0x11136
	adds r3, r1, #0	@ 00011136 0b1c
.org 0x11138
	lsls r0, r5, #16	@ 00011138 2804
.org 0x1113a
	movs r1, #236	@ 0001113a ec21
.org 0x1113c
	lsls r1, r1, #15	@ 0001113c c903
.org 0x1113e
	subs r1, r1, r0	@ 0001113e 091a
.org 0x11140
	lsls r0, r5, #2	@ 00011140 a800
.org 0x11142
	mov r7, r8	@ 00011142 4746
.org 0x11144
	adds r2, r0, r7	@ 00011144 c219
.org 0x11146
	movs r7, #128	@ 00011146 8027
.org 0x11148
	lsls r7, r7, #9	@ 00011148 7f02
.org 0x1114a
	str r1, [r2, #0]	@ 0001114a 1160
.org 0x1114c
	adds r1, r1, r7	@ 0001114c c919
.org 0x1114e
	subs r2, #4	@ 0001114e 043a
.org 0x11150
	subs r5, #1	@ 00011150 013d
.org 0x11152
	adds r0, r3, r5	@ 00011152 5819
.org 0x11154
	cmp r0, #118	@ 00011154 7628
.org 0x11156
	ble.n 0x1115c	@ 00011156 01dd
.org 0x11158
	cmp r5, #0	@ 00011158 002d
.org 0x1115a
	bge.n 0x1114a	@ 0001115a f6da
.org 0x1115c
	lsls r3, r6, #16	@ 0001115c 3304
.org 0x1115e
	asrs r0, r3, #16	@ 0001115e 1814
.org 0x11160
	adds r0, r0, r5	@ 00011160 4019
.org 0x11162
	cmp r0, #93	@ 00011162 5d28
.org 0x11164
	ble.n 0x11186	@ 00011164 0fdd
.org 0x11166
	cmp r5, #0	@ 00011166 002d
.org 0x11168
	blt.n 0x11186	@ 00011168 0ddb
.org 0x1116a
	lsls r0, r5, #2	@ 0001116a a800
.org 0x1116c
	mov r1, r8	@ 0001116c 4146
.org 0x1116e
	adds r2, r0, r1	@ 0001116e 4218
.org 0x11170
	asrs r1, r3, #16	@ 00011170 1914
.org 0x11172
	adds r0, r3, #0	@ 00011172 181c
.org 0x11174
	orrs r0, r4	@ 00011174 2043
.org 0x11176
	str r0, [r2, #0]	@ 00011176 1060
.org 0x11178
	subs r2, #4	@ 00011178 043a
.org 0x1117a
	subs r5, #1	@ 0001117a 013d
.org 0x1117c
	adds r1, r1, r5	@ 0001117c 4919
.org 0x1117e
	cmp r1, #93	@ 0001117e 5d29
.org 0x11180
	ble.n 0x11186	@ 00011180 01dd
.org 0x11182
	cmp r5, #0	@ 00011182 002d
.org 0x11184
	bge.n 0x11170	@ 00011184 f4da
.org 0x11186
	ldr r0, [pc, #536]	@ 00011186 8648
.org 0x11188
	add r0, sl	@ 00011188 5044
.org 0x1118a
	asrs r0, r0, #18	@ 0001118a 8014
.org 0x1118c
	adds r0, #16	@ 0001118c 1030
.org 0x1118e
	lsls r0, r0, #16	@ 0001118e 0004
.org 0x11190
	lsrs r6, r0, #16	@ 00011190 060c
.org 0x11192
	ldr r2, [sp, #0]	@ 00011192 009a
.org 0x11194
	ldr r4, [r2, #104]	@ 00011194 946e
.org 0x11196
	lsls r4, r4, #3	@ 00011196 e400
.org 0x11198
	asrs r4, r4, #4	@ 00011198 2411
.org 0x1119a
	mov r3, r9	@ 0001119a 4b46
.org 0x1119c
	asrs r0, r3, #16	@ 0001119c 1814
.org 0x1119e
	movs r1, #40	@ 0001119e 2821
.org 0x111a0
	bl 0x128fb8	@ 000111a0 17f10aff
.org 0x111a4
	adds r4, r4, r0	@ 000111a4 2418
.org 0x111a6
	lsls r4, r4, #16	@ 000111a6 2404
.org 0x111a8
	lsrs r4, r4, #16	@ 000111a8 240c
.org 0x111aa
	lsls r0, r6, #16	@ 000111aa 3004
.org 0x111ac
	asrs r1, r0, #16	@ 000111ac 0114
.org 0x111ae
	adds r0, r1, r5	@ 000111ae 4819
.org 0x111b0
	cmp r0, #93	@ 000111b0 5d28
.org 0x111b2
	ble.n 0x111de	@ 000111b2 14dd
.org 0x111b4
	cmp r5, #0	@ 000111b4 002d
.org 0x111b6
	blt.n 0x111de	@ 000111b6 12db
.org 0x111b8
	adds r3, r1, #0	@ 000111b8 0b1c
.org 0x111ba
	lsls r0, r5, #16	@ 000111ba 2804
.org 0x111bc
	movs r1, #186	@ 000111bc ba21
.org 0x111be
	lsls r1, r1, #15	@ 000111be c903
.org 0x111c0
	subs r1, r1, r0	@ 000111c0 091a
.org 0x111c2
	lsls r0, r5, #2	@ 000111c2 a800
.org 0x111c4
	mov r7, r8	@ 000111c4 4746
.org 0x111c6
	adds r2, r0, r7	@ 000111c6 c219
.org 0x111c8
	movs r7, #128	@ 000111c8 8027
.org 0x111ca
	lsls r7, r7, #9	@ 000111ca 7f02
.org 0x111cc
	str r1, [r2, #0]	@ 000111cc 1160
.org 0x111ce
	adds r1, r1, r7	@ 000111ce c919
.org 0x111d0
	subs r2, #4	@ 000111d0 043a
.org 0x111d2
	subs r5, #1	@ 000111d2 013d
.org 0x111d4
	adds r0, r3, r5	@ 000111d4 5819
.org 0x111d6
	cmp r0, #93	@ 000111d6 5d28
.org 0x111d8
	ble.n 0x111de	@ 000111d8 01dd
.org 0x111da
	cmp r5, #0	@ 000111da 002d
.org 0x111dc
	bge.n 0x111cc	@ 000111dc f6da
.org 0x111de
	lsls r3, r6, #16	@ 000111de 3304
.org 0x111e0
	asrs r0, r3, #16	@ 000111e0 1814
.org 0x111e2
	adds r0, r0, r5	@ 000111e2 4019
.org 0x111e4
	cmp r0, #80	@ 000111e4 5028
.org 0x111e6
	ble.n 0x11208	@ 000111e6 0fdd
.org 0x111e8
	cmp r5, #0	@ 000111e8 002d
.org 0x111ea
	blt.n 0x11208	@ 000111ea 0ddb
.org 0x111ec
	lsls r0, r5, #2	@ 000111ec a800
.org 0x111ee
	mov r1, r8	@ 000111ee 4146
.org 0x111f0
	adds r2, r0, r1	@ 000111f0 4218
.org 0x111f2
	asrs r1, r3, #16	@ 000111f2 1914
.org 0x111f4
	adds r0, r3, #0	@ 000111f4 181c
.org 0x111f6
	orrs r0, r4	@ 000111f6 2043
.org 0x111f8
	str r0, [r2, #0]	@ 000111f8 1060
.org 0x111fa
	subs r2, #4	@ 000111fa 043a
.org 0x111fc
	subs r5, #1	@ 000111fc 013d
.org 0x111fe
	adds r1, r1, r5	@ 000111fe 4919
.org 0x11200
	cmp r1, #80	@ 00011200 5029
.org 0x11202
	ble.n 0x11208	@ 00011202 01dd
.org 0x11204
	cmp r5, #0	@ 00011204 002d
.org 0x11206
	bge.n 0x111f2	@ 00011206 f4da
.org 0x11208
	ldr r0, [pc, #408]	@ 00011208 6648
.org 0x1120a
	add r0, sl	@ 0001120a 5044
.org 0x1120c
	asrs r0, r0, #18	@ 0001120c 8014
.org 0x1120e
	adds r0, #16	@ 0001120e 1030
.org 0x11210
	lsls r0, r0, #16	@ 00011210 0004
.org 0x11212
	lsrs r6, r0, #16	@ 00011212 060c
.org 0x11214
	ldr r2, [sp, #0]	@ 00011214 009a
.org 0x11216
	ldr r1, [r2, #104]	@ 00011216 916e
.org 0x11218
	lsls r0, r1, #3	@ 00011218 c800
.org 0x1121a
	adds r0, r0, r1	@ 0001121a 4018
.org 0x1121c
	asrs r1, r0, #4	@ 0001121c 0111
.org 0x1121e
	mov r3, r9	@ 0001121e 4b46
.org 0x11220
	asrs r0, r3, #16	@ 00011220 1814
.org 0x11222
	cmp r0, #0	@ 00011222 0028
.org 0x11224
	bge.n 0x11228	@ 00011224 00da
.org 0x11226
	adds r0, #31	@ 00011226 1f30
.org 0x11228
	asrs r0, r0, #5	@ 00011228 4011
.org 0x1122a
	adds r0, r1, r0	@ 0001122a 0818
.org 0x1122c
	lsls r0, r0, #16	@ 0001122c 0004
.org 0x1122e
	lsrs r4, r0, #16	@ 0001122e 040c
.org 0x11230
	lsls r0, r6, #16	@ 00011230 3004
.org 0x11232
	asrs r2, r0, #16	@ 00011232 0214
.org 0x11234
	adds r1, r2, r5	@ 00011234 5119
.org 0x11236
	adds r3, r0, #0	@ 00011236 031c
.org 0x11238
	cmp r1, #80	@ 00011238 5029
.org 0x1123a
	ble.n 0x11266	@ 0001123a 14dd
.org 0x1123c
	cmp r5, #0	@ 0001123c 002d
.org 0x1123e
	blt.n 0x11266	@ 0001123e 12db
.org 0x11240
	adds r6, r2, #0	@ 00011240 161c
.org 0x11242
	lsls r0, r5, #16	@ 00011242 2804
.org 0x11244
	movs r1, #186	@ 00011244 ba21
.org 0x11246
	lsls r1, r1, #15	@ 00011246 c903
.org 0x11248
	subs r1, r1, r0	@ 00011248 091a
.org 0x1124a
	lsls r0, r5, #2	@ 0001124a a800
.org 0x1124c
	mov r7, r8	@ 0001124c 4746
.org 0x1124e
	adds r2, r0, r7	@ 0001124e c219
.org 0x11250
	movs r7, #128	@ 00011250 8027
.org 0x11252
	lsls r7, r7, #9	@ 00011252 7f02
.org 0x11254
	str r1, [r2, #0]	@ 00011254 1160
.org 0x11256
	adds r1, r1, r7	@ 00011256 c919
.org 0x11258
	subs r2, #4	@ 00011258 043a
.org 0x1125a
	subs r5, #1	@ 0001125a 013d
.org 0x1125c
	adds r0, r6, r5	@ 0001125c 7019
.org 0x1125e
	cmp r0, #80	@ 0001125e 5028
.org 0x11260
	ble.n 0x11266	@ 00011260 01dd
.org 0x11262
	cmp r5, #0	@ 00011262 002d
.org 0x11264
	bge.n 0x11254	@ 00011264 f6da
.org 0x11266
	asrs r0, r3, #16	@ 00011266 1814
.org 0x11268
	adds r0, r0, r5	@ 00011268 4019
.org 0x1126a
	cmp r0, #48	@ 0001126a 3028
.org 0x1126c
	ble.n 0x1128e	@ 0001126c 0fdd
.org 0x1126e
	cmp r5, #0	@ 0001126e 002d
.org 0x11270
	blt.n 0x1128e	@ 00011270 0ddb
.org 0x11272
	lsls r0, r5, #2	@ 00011272 a800
.org 0x11274
	mov r1, r8	@ 00011274 4146
.org 0x11276
	adds r2, r0, r1	@ 00011276 4218
.org 0x11278
	asrs r1, r3, #16	@ 00011278 1914
.org 0x1127a
	adds r0, r3, #0	@ 0001127a 181c
.org 0x1127c
	orrs r0, r4	@ 0001127c 2043
.org 0x1127e
	str r0, [r2, #0]	@ 0001127e 1060
.org 0x11280
	subs r2, #4	@ 00011280 043a
.org 0x11282
	subs r5, #1	@ 00011282 013d
.org 0x11284
	adds r1, r1, r5	@ 00011284 4919
.org 0x11286
	cmp r1, #48	@ 00011286 3029
.org 0x11288
	ble.n 0x1128e	@ 00011288 01dd
.org 0x1128a
	cmp r5, #0	@ 0001128a 002d
.org 0x1128c
	bge.n 0x11278	@ 0001128c f4da
.org 0x1128e
	ldr r0, [pc, #280]	@ 0001128e 4648
.org 0x11290
	add r0, sl	@ 00011290 5044
.org 0x11292
	asrs r0, r0, #18	@ 00011292 8014
.org 0x11294
	adds r0, #16	@ 00011294 1030
.org 0x11296
	lsls r0, r0, #16	@ 00011296 0004
.org 0x11298
	lsrs r6, r0, #16	@ 00011298 060c
.org 0x1129a
	ldr r2, [sp, #0]	@ 0001129a 009a
.org 0x1129c
	ldr r0, [r2, #104]	@ 0001129c 906e
.org 0x1129e
	lsls r4, r0, #2	@ 0001129e 8400
.org 0x112a0
	adds r4, r4, r0	@ 000112a0 2418
.org 0x112a2
	lsls r4, r4, #1	@ 000112a2 6400
.org 0x112a4
	asrs r4, r4, #4	@ 000112a4 2411
.org 0x112a6
	mov r3, r9	@ 000112a6 4b46
.org 0x112a8
	asrs r0, r3, #16	@ 000112a8 1814
.org 0x112aa
	movs r1, #24	@ 000112aa 1821
.org 0x112ac
	bl 0x128fb8	@ 000112ac 17f184fe
.org 0x112b0
	adds r4, r4, r0	@ 000112b0 2418
.org 0x112b2
	lsls r4, r4, #16	@ 000112b2 2404
.org 0x112b4
	lsrs r4, r4, #16	@ 000112b4 240c
.org 0x112b6
	lsls r0, r6, #16	@ 000112b6 3004
.org 0x112b8
	asrs r1, r0, #16	@ 000112b8 0114
.org 0x112ba
	adds r0, r1, r5	@ 000112ba 4819
.org 0x112bc
	cmp r0, #48	@ 000112bc 3028
.org 0x112be
	ble.n 0x112ea	@ 000112be 14dd
.org 0x112c0
	cmp r5, #0	@ 000112c0 002d
.org 0x112c2
	blt.n 0x112ea	@ 000112c2 12db
.org 0x112c4
	adds r3, r1, #0	@ 000112c4 0b1c
.org 0x112c6
	lsls r0, r5, #16	@ 000112c6 2804
.org 0x112c8
	movs r1, #196	@ 000112c8 c421
.org 0x112ca
	lsls r1, r1, #14	@ 000112ca 8903
.org 0x112cc
	subs r1, r1, r0	@ 000112cc 091a
.org 0x112ce
	lsls r0, r5, #2	@ 000112ce a800
.org 0x112d0
	mov r7, r8	@ 000112d0 4746
.org 0x112d2
	adds r2, r0, r7	@ 000112d2 c219
.org 0x112d4
	movs r7, #128	@ 000112d4 8027
.org 0x112d6
	lsls r7, r7, #9	@ 000112d6 7f02
.org 0x112d8
	str r1, [r2, #0]	@ 000112d8 1160
.org 0x112da
	adds r1, r1, r7	@ 000112da c919
.org 0x112dc
	subs r2, #4	@ 000112dc 043a
.org 0x112de
	subs r5, #1	@ 000112de 013d
.org 0x112e0
	adds r0, r3, r5	@ 000112e0 5819
.org 0x112e2
	cmp r0, #48	@ 000112e2 3028
.org 0x112e4
	ble.n 0x112ea	@ 000112e4 01dd
.org 0x112e6
	cmp r5, #0	@ 000112e6 002d
.org 0x112e8
	bge.n 0x112d8	@ 000112e8 f6da
.org 0x112ea
	lsls r3, r6, #16	@ 000112ea 3304
.org 0x112ec
	asrs r0, r3, #16	@ 000112ec 1814
.org 0x112ee
	adds r0, r0, r5	@ 000112ee 4019
.org 0x112f0
	cmp r0, #24	@ 000112f0 1828
.org 0x112f2
	ble.n 0x11314	@ 000112f2 0fdd
.org 0x112f4
	cmp r5, #0	@ 000112f4 002d
.org 0x112f6
	blt.n 0x11314	@ 000112f6 0ddb
.org 0x112f8
	lsls r0, r5, #2	@ 000112f8 a800
.org 0x112fa
	mov r1, r8	@ 000112fa 4146
.org 0x112fc
	adds r2, r0, r1	@ 000112fc 4218
.org 0x112fe
	asrs r1, r3, #16	@ 000112fe 1914
.org 0x11300
	adds r0, r3, #0	@ 00011300 181c
.org 0x11302
	orrs r0, r4	@ 00011302 2043
.org 0x11304
	str r0, [r2, #0]	@ 00011304 1060
.org 0x11306
	subs r2, #4	@ 00011306 043a
.org 0x11308
	subs r5, #1	@ 00011308 013d
.org 0x1130a
	adds r1, r1, r5	@ 0001130a 4919
.org 0x1130c
	cmp r1, #24	@ 0001130c 1829
.org 0x1130e
	ble.n 0x11314	@ 0001130e 01dd
.org 0x11310
	cmp r5, #0	@ 00011310 002d
.org 0x11312
	bge.n 0x112fe	@ 00011312 f4da
.org 0x11314
	ldr r0, [pc, #148]	@ 00011314 2548
.org 0x11316
	add r0, sl	@ 00011316 5044
.org 0x11318
	asrs r0, r0, #18	@ 00011318 8014
.org 0x1131a
	adds r0, #16	@ 0001131a 1030
.org 0x1131c
	lsls r0, r0, #16	@ 0001131c 0004
.org 0x1131e
	lsrs r6, r0, #16	@ 0001131e 060c
.org 0x11320
	ldr r2, [sp, #0]	@ 00011320 009a
.org 0x11322
	ldr r1, [r2, #104]	@ 00011322 916e
.org 0x11324
	movs r0, #11	@ 00011324 0b20
.org 0x11326
	muls r0, r1	@ 00011326 4843
.org 0x11328
	asrs r1, r0, #4	@ 00011328 0111
.org 0x1132a
	mov r3, r9	@ 0001132a 4b46
.org 0x1132c
	asrs r0, r3, #16	@ 0001132c 1814
.org 0x1132e
	cmp r0, #0	@ 0001132e 0028
.org 0x11330
	bge.n 0x11334	@ 00011330 00da
.org 0x11332
	adds r0, #15	@ 00011332 0f30
.org 0x11334
	asrs r0, r0, #4	@ 00011334 0011
.org 0x11336
	adds r0, r1, r0	@ 00011336 0818
.org 0x11338
	lsls r0, r0, #16	@ 00011338 0004
.org 0x1133a
	lsrs r4, r0, #16	@ 0001133a 040c
.org 0x1133c
	lsls r0, r6, #16	@ 0001133c 3004
.org 0x1133e
	asrs r2, r0, #16	@ 0001133e 0214
.org 0x11340
	adds r1, r2, r5	@ 00011340 5119
.org 0x11342
	adds r3, r0, #0	@ 00011342 031c
.org 0x11344
	cmp r1, #24	@ 00011344 1829
.org 0x11346
	ble.n 0x11372	@ 00011346 14dd
.org 0x11348
	cmp r5, #0	@ 00011348 002d
.org 0x1134a
	blt.n 0x11372	@ 0001134a 12db
.org 0x1134c
	adds r6, r2, #0	@ 0001134c 161c
.org 0x1134e
	lsls r0, r5, #16	@ 0001134e 2804
.org 0x11350
	movs r1, #200	@ 00011350 c821
.org 0x11352
	lsls r1, r1, #13	@ 00011352 4903
