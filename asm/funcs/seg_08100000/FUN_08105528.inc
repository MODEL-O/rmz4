@ FUN_08105528  entry 0x08105528  size 350
.thumb
.org 0x105528
FUN_08105528:
	push {r4, r5, r6, r7, lr}	@ 00105528 f0b5
.org 0x10552a
	mov r7, sl	@ 0010552a 5746
.org 0x10552c
	mov r6, r9	@ 0010552c 4e46
.org 0x10552e
	mov r5, r8	@ 0010552e 4546
.org 0x105530
	push {r5, r6, r7}	@ 00105530 e0b4
.org 0x105532
	sub sp, #16	@ 00105532 84b0
.org 0x105534
	adds r6, r0, #0	@ 00105534 061c
.org 0x105536
	adds r0, #180	@ 00105536 b430
.org 0x105538
	ldrb r0, [r0, #0]	@ 00105538 0078
.org 0x10553a
	cmp r0, #1	@ 0010553a 0128
.org 0x10553c
	beq.n 0x105540	@ 0010553c 00d0
.org 0x10553e
	b.n 0x105670	@ 0010553e 97e0
.org 0x105540
	adds r0, r6, #0	@ 00105540 301c
.org 0x105542
	adds r0, #182	@ 00105542 b630
.org 0x105544
	ldrb r1, [r0, #0]	@ 00105544 0178
.org 0x105546
	str r0, [sp, #12]	@ 00105546 0390
.org 0x105548
	cmp r1, #0	@ 00105548 0029
.org 0x10554a
	bne.n 0x10561c	@ 0010554a 67d1
.org 0x10554c
	ldr r2, [r6, #40]	@ 0010554c b26a
.org 0x10554e
	ldr r0, [pc, #312]	@ 0010554e 4e48
.org 0x105550
	adds r1, r2, r0	@ 00105550 1118
.org 0x105552
	ldr r0, [r1, #0]	@ 00105552 0868
.org 0x105554
	ldr r3, [pc, #308]	@ 00105554 4d4b
.org 0x105556
	adds r0, r0, r3	@ 00105556 c018
.org 0x105558
	str r0, [sp, #0]	@ 00105558 0090
.org 0x10555a
	ldr r0, [r1, #4]	@ 0010555a 4868
.org 0x10555c
	str r0, [sp, #4]	@ 0010555c 0190
.org 0x10555e
	movs r7, #0	@ 0010555e 0027
.org 0x105560
	adds r0, r6, #0	@ 00105560 301c
.org 0x105562
	adds r0, #181	@ 00105562 b530
.org 0x105564
	str r0, [sp, #8]	@ 00105564 0290
.org 0x105566
	ldr r1, [pc, #296]	@ 00105566 4a49
.org 0x105568
	mov sl, r1	@ 00105568 8a46
.org 0x10556a
	mov r3, sl	@ 0010556a 5346
.org 0x10556c
	ldr r1, [r3, #0]	@ 0010556c 1968
.org 0x10556e
	ldr r0, [pc, #292]	@ 0010556e 4948
.org 0x105570
	muls r0, r1	@ 00105570 4843
.org 0x105572
	ldr r1, [pc, #292]	@ 00105572 4949
.org 0x105574
	adds r0, r0, r1	@ 00105574 4018
.org 0x105576
	lsls r0, r0, #1	@ 00105576 4000
.org 0x105578
	lsrs r1, r0, #1	@ 00105578 4108
.org 0x10557a
	str r1, [r3, #0]	@ 0010557a 1960
.org 0x10557c
	lsrs r0, r0, #17	@ 0010557c 400c
.org 0x10557e
	ldr r3, [pc, #284]	@ 0010557e 474b
.org 0x105580
	adds r5, r2, r3	@ 00105580 d518
.org 0x105582
	ldr r2, [r5, #40]	@ 00105582 aa6a
.org 0x105584
	movs r1, #5	@ 00105584 0521
.org 0x105586
	subs r1, r1, r2	@ 00105586 891a
.org 0x105588
	bl 0x129198	@ 00105588 23f006fe
.org 0x10558c
	adds r0, #1	@ 0010558c 0130
.org 0x10558e
	lsls r0, r0, #24	@ 0010558e 0006
.org 0x105590
	lsrs r3, r0, #24	@ 00105590 030e
.org 0x105592
	movs r1, #0	@ 00105592 0021
.org 0x105594
	movs r4, #0	@ 00105594 0024
.org 0x105596
	adds r7, #1	@ 00105596 0137
.org 0x105598
	mov r8, r7	@ 00105598 b846
.org 0x10559a
	cmp r4, r3	@ 0010559a 9c42
.org 0x10559c
	beq.n 0x1055bc	@ 0010559c 0ed0
.org 0x10559e
	movs r7, #1	@ 0010559e 0127
.org 0x1055a0
	ldr r2, [r5, #36]	@ 001055a0 6a6a
.org 0x1055a2
	adds r0, r7, #0	@ 001055a2 381c
.org 0x1055a4
	lsls r0, r4	@ 001055a4 a040
.org 0x1055a6
	ands r0, r2	@ 001055a6 1040
.org 0x1055a8
	cmp r0, #0	@ 001055a8 0028
.org 0x1055aa
	bne.n 0x1055b2	@ 001055aa 02d1
.org 0x1055ac
	adds r0, r1, #1	@ 001055ac 481c
.org 0x1055ae
	lsls r0, r0, #24	@ 001055ae 0006
.org 0x1055b0
	lsrs r1, r0, #24	@ 001055b0 010e
.org 0x1055b2
	adds r0, r4, #1	@ 001055b2 601c
.org 0x1055b4
	lsls r0, r0, #24	@ 001055b4 0006
.org 0x1055b6
	lsrs r4, r0, #24	@ 001055b6 040e
.org 0x1055b8
	cmp r1, r3	@ 001055b8 9942
.org 0x1055ba
	bne.n 0x1055a2	@ 001055ba f2d1
.org 0x1055bc
	ldr r2, [r6, #40]	@ 001055bc b26a
.org 0x1055be
	ldr r5, [pc, #220]	@ 001055be 374d
.org 0x1055c0
	adds r3, r2, r5	@ 001055c0 5319
.org 0x1055c2
	subs r4, #1	@ 001055c2 013c
.org 0x1055c4
	movs r0, #1	@ 001055c4 0120
.org 0x1055c6
	mov r9, r0	@ 001055c6 8146
.org 0x1055c8
	mov r1, r9	@ 001055c8 4946
.org 0x1055ca
	lsls r1, r4	@ 001055ca a140
.org 0x1055cc
	ldr r0, [r3, #36]	@ 001055cc 586a
.org 0x1055ce
	orrs r0, r1	@ 001055ce 0843
.org 0x1055d0
	str r0, [r3, #36]	@ 001055d0 5862
.org 0x1055d2
	lsls r4, r4, #8	@ 001055d2 2402
.org 0x1055d4
	ldr r1, [sp, #8]	@ 001055d4 0299
.org 0x1055d6
	ldrb r0, [r1, #0]	@ 001055d6 0878
.org 0x1055d8
	lsls r1, r0, #2	@ 001055d8 8100
.org 0x1055da
	adds r1, r1, r0	@ 001055da 0918
.org 0x1055dc
	ldr r0, [r3, #40]	@ 001055dc 986a
.org 0x1055de
	adds r0, r0, r1	@ 001055de 4018
.org 0x1055e0
	ldr r3, [pc, #188]	@ 001055e0 2f4b
.org 0x1055e2
	adds r0, r0, r3	@ 001055e2 c018
.org 0x1055e4
	ldrb r1, [r0, #0]	@ 001055e4 0178
.org 0x1055e6
	orrs r1, r4	@ 001055e6 2143
.org 0x1055e8
	lsls r1, r1, #16	@ 001055e8 0904
.org 0x1055ea
	lsrs r1, r1, #16	@ 001055ea 090c
.org 0x1055ec
	mov r0, sp	@ 001055ec 6846
.org 0x1055ee
	bl 0x1050dc	@ 001055ee fff775fd
.org 0x1055f2
	ldr r0, [r6, #40]	@ 001055f2 b06a
.org 0x1055f4
	adds r0, r0, r5	@ 001055f4 4019
.org 0x1055f6
	ldr r0, [r0, #40]	@ 001055f6 806a
.org 0x1055f8
	cmp r0, #0	@ 001055f8 0028
.org 0x1055fa
	bne.n 0x105602	@ 001055fa 02d1
.org 0x1055fc
	ldr r0, [pc, #164]	@ 001055fc 2948
.org 0x1055fe
	bl 0x2b10	@ 001055fe fdf687fa
.org 0x105602
	ldr r2, [r6, #40]	@ 00105602 b26a
.org 0x105604
	adds r1, r2, r5	@ 00105604 5119
.org 0x105606
	ldr r0, [r1, #40]	@ 00105606 886a
.org 0x105608
	adds r0, #1	@ 00105608 0130
.org 0x10560a
	str r0, [r1, #40]	@ 0010560a 8862
.org 0x10560c
	mov r1, r8	@ 0010560c 4146
.org 0x10560e
	lsls r0, r1, #24	@ 0010560e 0806
.org 0x105610
	lsrs r7, r0, #24	@ 00105610 070e
.org 0x105612
	cmp r7, #4	@ 00105612 042f
.org 0x105614
	bls.n 0x10556a	@ 00105614 a9d9
.org 0x105616
	mov r0, r9	@ 00105616 4846
.org 0x105618
	ldr r3, [sp, #12]	@ 00105618 039b
.org 0x10561a
	strb r0, [r3, #0]	@ 0010561a 1870
.org 0x10561c
	ldr r0, [r6, #40]	@ 0010561c b06a
.org 0x10561e
	ldr r1, [pc, #124]	@ 0010561e 1f49
.org 0x105620
	adds r0, r0, r1	@ 00105620 4018
.org 0x105622
	ldr r5, [r0, #36]	@ 00105622 456a
.org 0x105624
	cmp r5, #0	@ 00105624 002d
.org 0x105626
	bne.n 0x105670	@ 00105626 23d1
.org 0x105628
	adds r0, r6, #0	@ 00105628 301c
.org 0x10562a
	adds r0, #180	@ 0010562a b430
.org 0x10562c
	strb r5, [r0, #0]	@ 0010562c 0570
.org 0x10562e
	ldr r3, [sp, #12]	@ 0010562e 039b
.org 0x105630
	strb r5, [r3, #0]	@ 00105630 1d70
.org 0x105632
	ldrb r1, [r6, #10]	@ 00105632 b17a
.org 0x105634
	movs r0, #4	@ 00105634 0420
.org 0x105636
	orrs r0, r1	@ 00105636 0843
.org 0x105638
	strb r0, [r6, #10]	@ 00105638 b072
.org 0x10563a
	adds r4, r6, #0	@ 0010563a 341c
.org 0x10563c
	adds r4, #116	@ 0010563c 7434
.org 0x10563e
	ldr r1, [pc, #104]	@ 0010563e 1a49
.org 0x105640
	adds r2, r6, #0	@ 00105640 321c
.org 0x105642
	adds r2, #84	@ 00105642 5432
.org 0x105644
	adds r0, r4, #0	@ 00105644 201c
.org 0x105646
	movs r3, #128	@ 00105646 8023
.org 0x105648
	bl 0x5760	@ 00105648 00f78af8
.org 0x10564c
	str r6, [r4, #44]	@ 0010564c e662
.org 0x10564e
	ldr r0, [pc, #92]	@ 0010564e 1748
.org 0x105650
	str r0, [r4, #36]	@ 00105650 6062
.org 0x105652
	movs r1, #169	@ 00105652 a921
.org 0x105654
	lsls r1, r1, #8	@ 00105654 0902
.org 0x105656
	adds r0, r6, #0	@ 00105656 301c
.org 0x105658
	bl 0x1cf00	@ 00105658 17f752fc
.org 0x10565c
	adds r1, r6, #0	@ 0010565c 311c
.org 0x10565e
	adds r1, #181	@ 0010565e b531
.org 0x105660
	ldrb r0, [r1, #0]	@ 00105660 0878
.org 0x105662
	adds r0, #1	@ 00105662 0130
.org 0x105664
	strb r0, [r1, #0]	@ 00105664 0870
.org 0x105666
	lsls r0, r0, #24	@ 00105666 0006
.org 0x105668
	lsrs r0, r0, #24	@ 00105668 000e
.org 0x10566a
	cmp r0, #3	@ 0010566a 0328
.org 0x10566c
	bls.n 0x105670	@ 0010566c 00d9
.org 0x10566e
	strb r5, [r1, #0]	@ 0010566e 0d70
.org 0x105670
	adds r0, r6, #0	@ 00105670 301c
.org 0x105672
	bl 0x1cff0	@ 00105672 17f7bdfc
.org 0x105676
	add sp, #16	@ 00105676 04b0
.org 0x105678
	pop {r3, r4, r5}	@ 00105678 38bc
.org 0x10567a
	mov r8, r3	@ 0010567a 9846
.org 0x10567c
	mov r9, r4	@ 0010567c a146
.org 0x10567e
	mov sl, r5	@ 0010567e aa46
.org 0x105680
	pop {r4, r5, r6, r7}	@ 00105680 f0bc
.org 0x105682
	pop {r0}	@ 00105682 01bc
.org 0x105684
	bx r0	@ 00105684 0047
