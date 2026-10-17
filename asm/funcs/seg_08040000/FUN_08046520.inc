@ FUN_08046520  entry 0x08046520  size 628
.thumb
.org 0x46520
FUN_08046520:
	push {r4, r5, r6, r7, lr}	@ 00046520 f0b5
.org 0x46522
	adds r4, r0, #0	@ 00046522 041c
.org 0x46524
	bl 0x1cff0	@ 00046524 d6f764fd
.org 0x46528
	adds r1, r4, #0	@ 00046528 211c
.org 0x4652a
	adds r1, #188	@ 0004652a bc31
.org 0x4652c
	adds r3, r4, #0	@ 0004652c 231c
.org 0x4652e
	adds r3, #180	@ 0004652e b433
.org 0x46530
	ldr r0, [r3, #0]	@ 00046530 1868
.org 0x46532
	str r0, [r1, #0]	@ 00046532 0860
.org 0x46534
	adds r1, #4	@ 00046534 0431
.org 0x46536
	adds r2, r4, #0	@ 00046536 221c
.org 0x46538
	adds r2, #184	@ 00046538 b832
.org 0x4653a
	ldr r0, [r2, #0]	@ 0004653a 1068
.org 0x4653c
	str r0, [r1, #0]	@ 0004653c 0860
.org 0x4653e
	ldr r0, [r4, #84]	@ 0004653e 606d
.org 0x46540
	str r0, [r3, #0]	@ 00046540 1860
.org 0x46542
	ldr r0, [r4, #88]	@ 00046542 a06d
.org 0x46544
	str r0, [r2, #0]	@ 00046544 1060
.org 0x46546
	ldr r0, [r4, #84]	@ 00046546 606d
.org 0x46548
	ldr r1, [r4, #92]	@ 00046548 e16d
.org 0x4654a
	adds r0, r0, r1	@ 0004654a 4018
.org 0x4654c
	str r0, [r4, #84]	@ 0004654c 6065
.org 0x4654e
	ldr r1, [r4, #88]	@ 0004654e a16d
.org 0x46550
	ldr r2, [r4, #96]	@ 00046550 226e
.org 0x46552
	adds r1, r1, r2	@ 00046552 8918
.org 0x46554
	str r1, [r4, #88]	@ 00046554 a165
.org 0x46556
	bl 0x7c7c	@ 00046556 c1f791fb
.org 0x4655a
	lsls r0, r0, #16	@ 0004655a 0004
.org 0x4655c
	lsrs r5, r0, #16	@ 0004655c 050c
.org 0x4655e
	cmp r5, #0	@ 0004655e 002d
.org 0x46560
	bne.n 0x46564	@ 00046560 00d1
.org 0x46562
	b.n 0x46714	@ 00046562 d7e0
.org 0x46564
	ldr r0, [r4, #84]	@ 00046564 606d
.org 0x46566
	ldr r1, [r4, #92]	@ 00046566 e16d
.org 0x46568
	subs r0, r0, r1	@ 00046568 401a
.org 0x4656a
	ldr r1, [r4, #88]	@ 0004656a a16d
.org 0x4656c
	ldr r2, [r4, #96]	@ 0004656c 226e
.org 0x4656e
	subs r1, r1, r2	@ 0004656e 891a
.org 0x46570
	bl 0x7020	@ 00046570 c0f756fd
.org 0x46574
	lsls r0, r0, #16	@ 00046574 0004
.org 0x46576
	cmp r0, #0	@ 00046576 0028
.org 0x46578
	beq.n 0x4658e	@ 00046578 09d0
.org 0x4657a
	ldr r0, [r4, #84]	@ 0004657a 606d
.org 0x4657c
	ldr r1, [r4, #92]	@ 0004657c e16d
.org 0x4657e
	subs r0, r0, r1	@ 0004657e 401a
.org 0x46580
	ldr r1, [r4, #88]	@ 00046580 a16d
.org 0x46582
	ldr r2, [r4, #96]	@ 00046582 226e
.org 0x46584
	subs r1, r1, r2	@ 00046584 891a
.org 0x46586
	bl 0x7020	@ 00046586 c0f74bfd
.org 0x4658a
	lsls r0, r0, #16	@ 0004658a 0004
.org 0x4658c
	lsrs r5, r0, #16	@ 0004658c 050c
.org 0x4658e
	movs r1, #15	@ 0004658e 0f21
.org 0x46590
	adds r0, r5, #0	@ 00046590 281c
.org 0x46592
	ands r0, r1	@ 00046592 0840
.org 0x46594
	cmp r0, #15	@ 00046594 0f28
.org 0x46596
	bne.n 0x4659a	@ 00046596 00d1
.org 0x46598
	movs r5, #0	@ 00046598 0025
.org 0x4659a
	ands r5, r1	@ 0004659a 0d40
.org 0x4659c
	cmp r5, #13	@ 0004659c 0d2d
.org 0x4659e
	bls.n 0x465a2	@ 0004659e 00d9
.org 0x465a0
	movs r5, #1	@ 000465a0 0125
.org 0x465a2
	cmp r5, #0	@ 000465a2 002d
.org 0x465a4
	bne.n 0x465a8	@ 000465a4 00d1
.org 0x465a6
	b.n 0x46714	@ 000465a6 b5e0
.org 0x465a8
	ldrb r0, [r4, #19]	@ 000465a8 e07c
.org 0x465aa
	cmp r0, #0	@ 000465aa 0028
.org 0x465ac
	beq.n 0x465d8	@ 000465ac 14d0
.org 0x465ae
	ldr r1, [pc, #36]	@ 000465ae 0949
.org 0x465b0
	ldrb r0, [r4, #9]	@ 000465b0 607a
.org 0x465b2
	lsls r0, r0, #2	@ 000465b2 8000
.org 0x465b4
	adds r0, r0, r1	@ 000465b4 4018
.org 0x465b6
	movs r1, #2	@ 000465b6 0221
.org 0x465b8
	str r1, [r4, #12]	@ 000465b8 e160
.org 0x465ba
	ldr r0, [r0, #0]	@ 000465ba 0068
.org 0x465bc
	ldr r0, [r0, #8]	@ 000465bc 8068
.org 0x465be
	str r0, [r4, #20]	@ 000465be 6061
.org 0x465c0
	ldr r0, [r4, #84]	@ 000465c0 606d
.org 0x465c2
	ldr r1, [r4, #92]	@ 000465c2 e16d
.org 0x465c4
	subs r0, r0, r1	@ 000465c4 401a
.org 0x465c6
	str r0, [r4, #84]	@ 000465c6 6065
.org 0x465c8
	ldr r0, [r4, #88]	@ 000465c8 a06d
.org 0x465ca
	ldr r1, [r4, #96]	@ 000465ca 216e
.org 0x465cc
	subs r0, r0, r1	@ 000465cc 401a
.org 0x465ce
	str r0, [r4, #88]	@ 000465ce a065
.org 0x465d0
	b.n 0x4679e	@ 000465d0 e5e0
.org 0x465d2
	.byte 0x00	@ 000465d2 data
.org 0x465d3
	.byte 0x00	@ 000465d3 data
.org 0x465d4
	.byte 0xf8,0x39,0x85,0x08	@ 000465d4 data
.org 0x465d8
	ldr r0, [r4, #92]	@ 000465d8 e06d
.org 0x465da
	cmp r0, #0	@ 000465da 0028
.org 0x465dc
	ble.n 0x465ee	@ 000465dc 07dd
.org 0x465de
	ldr r0, [r4, #84]	@ 000465de 606d
.org 0x465e0
	ldr r1, [r4, #88]	@ 000465e0 a16d
.org 0x465e2
	bl 0x816c	@ 000465e2 c1f7c3fd
.org 0x465e6
	adds r6, r0, #0	@ 000465e6 061c
.org 0x465e8
	cmp r6, #1	@ 000465e8 012e
.org 0x465ea
	bne.n 0x46602	@ 000465ea 0ad1
.org 0x465ec
	b.n 0x46600	@ 000465ec 08e0
.org 0x465ee
	ldr r0, [r4, #84]	@ 000465ee 606d
.org 0x465f0
	ldr r1, [r4, #88]	@ 000465f0 a16d
.org 0x465f2
	bl 0x834c	@ 000465f2 c1f7abfe
.org 0x465f6
	adds r6, r0, #0	@ 000465f6 061c
.org 0x465f8
	movs r0, #1	@ 000465f8 0120
.org 0x465fa
	negs r0, r0	@ 000465fa 4042
.org 0x465fc
	cmp r6, r0	@ 000465fc 8642
.org 0x465fe
	bne.n 0x46602	@ 000465fe 00d1
.org 0x46600
	movs r6, #0	@ 00046600 0026
.org 0x46602
	ldr r0, [r4, #96]	@ 00046602 206e
.org 0x46604
	cmp r0, #0	@ 00046604 0028
.org 0x46606
	ble.n 0x46618	@ 00046606 07dd
.org 0x46608
	ldr r0, [r4, #84]	@ 00046608 606d
.org 0x4660a
	ldr r1, [r4, #88]	@ 0004660a a16d
.org 0x4660c
	bl 0x7db4	@ 0004660c c1f7d2fb
.org 0x46610
	adds r3, r0, #0	@ 00046610 031c
.org 0x46612
	cmp r3, #1	@ 00046612 012b
.org 0x46614
	bne.n 0x4662c	@ 00046614 0ad1
.org 0x46616
	b.n 0x4662a	@ 00046616 08e0
.org 0x46618
	ldr r0, [r4, #84]	@ 00046618 606d
.org 0x4661a
	ldr r1, [r4, #88]	@ 0004661a a16d
.org 0x4661c
	bl 0x7f8c	@ 0004661c c1f7b6fc
.org 0x46620
	adds r3, r0, #0	@ 00046620 031c
.org 0x46622
	movs r0, #1	@ 00046622 0120
.org 0x46624
	negs r0, r0	@ 00046624 4042
.org 0x46626
	cmp r3, r0	@ 00046626 8342
.org 0x46628
	bne.n 0x4662c	@ 00046628 00d1
.org 0x4662a
	movs r3, #0	@ 0004662a 0023
.org 0x4662c
	adds r0, r3, #0	@ 0004662c 181c
.org 0x4662e
	cmp r3, #0	@ 0004662e 002b
.org 0x46630
	bge.n 0x46634	@ 00046630 00da
.org 0x46632
	negs r0, r3	@ 00046632 5842
.org 0x46634
	cmp r0, #1	@ 00046634 0128
.org 0x46636
	bne.n 0x4663a	@ 00046636 00d1
.org 0x46638
	movs r3, #0	@ 00046638 0023
.org 0x4663a
	cmp r6, #0	@ 0004663a 002e
.org 0x4663c
	beq.n 0x4665c	@ 0004663c 0ed0
.org 0x4663e
	cmp r3, #0	@ 0004663e 002b
.org 0x46640
	beq.n 0x4665c	@ 00046640 0cd0
.org 0x46642
	adds r1, r6, #0	@ 00046642 311c
.org 0x46644
	cmp r6, #0	@ 00046644 002e
.org 0x46646
	bge.n 0x4664a	@ 00046646 00da
.org 0x46648
	negs r1, r6	@ 00046648 7142
.org 0x4664a
	adds r0, r3, #0	@ 0004664a 181c
.org 0x4664c
	cmp r3, #0	@ 0004664c 002b
.org 0x4664e
	bge.n 0x46652	@ 0004664e 00da
.org 0x46650
	negs r0, r3	@ 00046650 5842
.org 0x46652
	cmp r1, r0	@ 00046652 8142
.org 0x46654
	ble.n 0x4665a	@ 00046654 01dd
.org 0x46656
	movs r6, #0	@ 00046656 0026
.org 0x46658
	b.n 0x4665c	@ 00046658 00e0
.org 0x4665a
	movs r3, #0	@ 0004665a 0023
.org 0x4665c
	ldrb r0, [r4, #18]	@ 0004665c a07c
.org 0x4665e
	cmp r0, #128	@ 0004665e 8028
.org 0x46660
	bls.n 0x46678	@ 00046660 0ad9
.org 0x46662
	cmp r3, #0	@ 00046662 002b
.org 0x46664
	beq.n 0x46674	@ 00046664 06d0
.org 0x46666
	ldr r1, [r4, #92]	@ 00046666 e16d
.org 0x46668
	cmp r1, #0	@ 00046668 0029
.org 0x4666a
	bge.n 0x46670	@ 0004666a 01da
.org 0x4666c
	movs r0, #108	@ 0004666c 6c20
.org 0x4666e
	b.n 0x466b0	@ 0004666e 1fe0
.org 0x46670
	movs r0, #20	@ 00046670 1420
.org 0x46672
	b.n 0x466b0	@ 00046672 1de0
.org 0x46674
	ldr r1, [r4, #92]	@ 00046674 e16d
.org 0x46676
	b.n 0x466b8	@ 00046676 1fe0
.org 0x46678
	ldr r1, [r4, #92]	@ 00046678 e16d
.org 0x4667a
	cmp r1, #0	@ 0004667a 0029
.org 0x4667c
	bge.n 0x46696	@ 0004667c 0bda
.org 0x4667e
	cmp r5, #9	@ 0004667e 092d
.org 0x46680
	bls.n 0x46686	@ 00046680 01d9
.org 0x46682
	movs r0, #156	@ 00046682 9c20
.org 0x46684
	b.n 0x466b0	@ 00046684 14e0
.org 0x46686
	cmp r5, #7	@ 00046686 072d
.org 0x46688
	bls.n 0x4668e	@ 00046688 01d9
.org 0x4668a
	movs r0, #165	@ 0004668a a520
.org 0x4668c
	b.n 0x466b0	@ 0004668c 10e0
.org 0x4668e
	cmp r3, #0	@ 0004668e 002b
.org 0x46690
	beq.n 0x466b8	@ 00046690 12d0
.org 0x46692
	movs r0, #148	@ 00046692 9420
.org 0x46694
	b.n 0x466b0	@ 00046694 0ce0
.org 0x46696
	cmp r5, #7	@ 00046696 072d
.org 0x46698
	bhi.n 0x4669e	@ 00046698 01d8
.org 0x4669a
	cmp r5, #1	@ 0004669a 012d
.org 0x4669c
	bne.n 0x466a6	@ 0004669c 03d1
.org 0x4669e
	cmp r3, #0	@ 0004669e 002b
.org 0x466a0
	beq.n 0x466b8	@ 000466a0 0ad0
.org 0x466a2
	movs r0, #236	@ 000466a2 ec20
.org 0x466a4
	b.n 0x466b0	@ 000466a4 04e0
.org 0x466a6
	cmp r5, #3	@ 000466a6 032d
.org 0x466a8
	bls.n 0x466ae	@ 000466a8 01d9
.org 0x466aa
	movs r0, #228	@ 000466aa e420
.org 0x466ac
	b.n 0x466b0	@ 000466ac 00e0
.org 0x466ae
	movs r0, #219	@ 000466ae db20
.org 0x466b0
	strb r0, [r4, #18]	@ 000466b0 a074
.org 0x466b2
	movs r0, #0	@ 000466b2 0020
.org 0x466b4
	cmp r0, #0	@ 000466b4 0028
.org 0x466b6
	beq.n 0x466d8	@ 000466b6 0fd0
.org 0x466b8
	cmp r1, #0	@ 000466b8 0029
.org 0x466ba
	bge.n 0x466ca	@ 000466ba 06da
.org 0x466bc
	ldr r0, [r4, #96]	@ 000466bc 206e
.org 0x466be
	cmp r0, #0	@ 000466be 0028
.org 0x466c0
	bge.n 0x466c6	@ 000466c0 01da
.org 0x466c2
	movs r0, #212	@ 000466c2 d420
.org 0x466c4
	b.n 0x466d6	@ 000466c4 07e0
.org 0x466c6
	movs r0, #44	@ 000466c6 2c20
.org 0x466c8
	b.n 0x466d6	@ 000466c8 05e0
.org 0x466ca
	ldr r0, [r4, #96]	@ 000466ca 206e
.org 0x466cc
	cmp r0, #0	@ 000466cc 0028
.org 0x466ce
	bge.n 0x466d4	@ 000466ce 01da
.org 0x466d0
	movs r0, #172	@ 000466d0 ac20
.org 0x466d2
	b.n 0x466d6	@ 000466d2 00e0
.org 0x466d4
	movs r0, #84	@ 000466d4 5420
.org 0x466d6
	strb r0, [r4, #18]	@ 000466d6 a074
.org 0x466d8
	ldr r2, [pc, #116]	@ 000466d8 1d4a
.org 0x466da
	ldrb r0, [r4, #18]	@ 000466da a07c
.org 0x466dc
	adds r0, #64	@ 000466dc 4030
.org 0x466de
	lsls r0, r0, #24	@ 000466de 0006
.org 0x466e0
	lsrs r0, r0, #23	@ 000466e0 c00d
.org 0x466e2
	adds r0, r0, r2	@ 000466e2 8018
.org 0x466e4
	movs r5, #0	@ 000466e4 0025
.org 0x466e6
	ldrsh r1, [r0, r5]	@ 000466e6 415f
.org 0x466e8
	lsls r0, r1, #1	@ 000466e8 4800
.org 0x466ea
	adds r0, r0, r1	@ 000466ea 4018
.org 0x466ec
	lsls r0, r0, #1	@ 000466ec 4000
.org 0x466ee
	str r0, [r4, #92]	@ 000466ee e065
.org 0x466f0
	ldrb r0, [r4, #18]	@ 000466f0 a07c
.org 0x466f2
	lsls r0, r0, #1	@ 000466f2 4000
.org 0x466f4
	adds r0, r0, r2	@ 000466f4 8018
.org 0x466f6
	movs r2, #0	@ 000466f6 0022
.org 0x466f8
	ldrsh r1, [r0, r2]	@ 000466f8 815e
.org 0x466fa
	lsls r0, r1, #1	@ 000466fa 4800
.org 0x466fc
	adds r0, r0, r1	@ 000466fc 4018
.org 0x466fe
	lsls r0, r0, #1	@ 000466fe 4000
.org 0x46700
	str r0, [r4, #96]	@ 00046700 2066
.org 0x46702
	ldr r0, [r4, #84]	@ 00046702 606d
.org 0x46704
	adds r0, r0, r6	@ 00046704 8019
.org 0x46706
	str r0, [r4, #84]	@ 00046706 6065
.org 0x46708
	ldr r0, [r4, #88]	@ 00046708 a06d
.org 0x4670a
	adds r0, r0, r3	@ 0004670a c018
.org 0x4670c
	str r0, [r4, #88]	@ 0004670c a065
.org 0x4670e
	ldrb r0, [r4, #19]	@ 0004670e e07c
.org 0x46710
	adds r0, #1	@ 00046710 0130
.org 0x46712
	strb r0, [r4, #19]	@ 00046712 e074
.org 0x46714
	adds r6, r4, #0	@ 00046714 261c
.org 0x46716
	adds r6, #140	@ 00046716 8c36
.org 0x46718
	ldr r5, [r6, #0]	@ 00046718 3568
.org 0x4671a
	movs r0, #4	@ 0004671a 0420
.org 0x4671c
	ands r5, r0	@ 0004671c 0540
.org 0x4671e
	cmp r5, #0	@ 0004671e 002d
.org 0x46720
	bne.n 0x46736	@ 00046720 09d1
.org 0x46722
	ldr r0, [pc, #48]	@ 00046722 0c48
.org 0x46724
	adds r7, r4, #0	@ 00046724 271c
.org 0x46726
	adds r7, #84	@ 00046726 5437
.org 0x46728
	adds r1, r7, #0	@ 00046728 391c
.org 0x4672a
	bl 0x1fb14	@ 0004672a d9f7f3f9
.org 0x4672e
	movs r1, #128	@ 0004672e 8021
.org 0x46730
	lsls r1, r1, #7	@ 00046730 c901
.org 0x46732
	cmp r0, r1	@ 00046732 8842
.org 0x46734
	bls.n 0x46758	@ 00046734 10d9
.org 0x46736
	movs r1, #0	@ 00046736 0021
.org 0x46738
	str r1, [r6, #0]	@ 00046738 3160
.org 0x4673a
	adds r0, r4, #0	@ 0004673a 201c
.org 0x4673c
	adds r0, #144	@ 0004673c 9030
.org 0x4673e
	str r1, [r0, #0]	@ 0004673e 0160
.org 0x46740
	adds r0, #4	@ 00046740 0430
.org 0x46742
	strb r1, [r0, #0]	@ 00046742 0170
.org 0x46744
	ldrb r1, [r4, #10]	@ 00046744 a17a
.org 0x46746
	movs r0, #251	@ 00046746 fb20
.org 0x46748
	ands r0, r1	@ 00046748 0840
.org 0x4674a
	strb r0, [r4, #10]	@ 0004674a a072
.org 0x4674c
	b.n 0x4678c	@ 0004674c 1ee0
.org 0x4674e
	.byte 0x00	@ 0004674e data
.org 0x4674f
	.byte 0x00	@ 0004674f data
.org 0x46750
	.byte 0x0c,0x93,0x12,0x08	@ 00046750 data
.org 0x46754
	.byte 0xf8,0xe9,0x02,0x02	@ 00046754 data
.org 0x46758
	ldr r0, [r6, #0]	@ 00046758 3068
.org 0x4675a
	movs r1, #128	@ 0004675a 8021
.org 0x4675c
	lsls r1, r1, #5	@ 0004675c 4901
.org 0x4675e
	ands r0, r1	@ 0004675e 0840
.org 0x46760
	cmp r0, #0	@ 00046760 0028
.org 0x46762
	beq.n 0x4679e	@ 00046762 1cd0
.org 0x46764
	str r5, [r6, #0]	@ 00046764 3560
.org 0x46766
	adds r0, r4, #0	@ 00046766 201c
.org 0x46768
	adds r0, #144	@ 00046768 9030
.org 0x4676a
	str r5, [r0, #0]	@ 0004676a 0560
.org 0x4676c
	adds r0, #4	@ 0004676c 0430
.org 0x4676e
	strb r5, [r0, #0]	@ 0004676e 0570
.org 0x46770
	ldrb r0, [r4, #10]	@ 00046770 a07a
.org 0x46772
	movs r2, #251	@ 00046772 fb22
.org 0x46774
	ands r2, r0	@ 00046774 0240
.org 0x46776
	strb r2, [r4, #10]	@ 00046776 a272
.org 0x46778
	lsrs r2, r2, #4	@ 00046778 1209
.org 0x4677a
	movs r0, #1	@ 0004677a 0120
.org 0x4677c
	ands r2, r0	@ 0004677c 0240
.org 0x4677e
	adds r0, r7, #0	@ 0004677e 381c
.org 0x46780
	movs r1, #6	@ 00046780 0621
.org 0x46782
	bl 0xd1bcc	@ 00046782 8bf023fa
.org 0x46786
	movs r0, #43	@ 00046786 2b20
.org 0x46788
	bl 0x2b10	@ 00046788 bcf7c2f9
.org 0x4678c
	ldr r1, [pc, #20]	@ 0004678c 0549
.org 0x4678e
	ldrb r0, [r4, #9]	@ 0004678e 607a
.org 0x46790
	lsls r0, r0, #2	@ 00046790 8000
.org 0x46792
	adds r0, r0, r1	@ 00046792 4018
