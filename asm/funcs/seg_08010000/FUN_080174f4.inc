@ FUN_080174f4  entry 0x080174f4  size 1110
.thumb
.org 0x174f4
FUN_080174f4:
	push {r4, r5, r6, r7, lr}	@ 000174f4 f0b5
.org 0x174f6
	mov r7, sl	@ 000174f6 5746
.org 0x174f8
	mov r6, r9	@ 000174f8 4e46
.org 0x174fa
	mov r5, r8	@ 000174fa 4546
.org 0x174fc
	push {r5, r6, r7}	@ 000174fc e0b4
.org 0x174fe
	sub sp, #24	@ 000174fe 86b0
.org 0x17500
	mov r9, r0	@ 00017500 8146
.org 0x17502
	movs r7, #159	@ 00017502 9f27
.org 0x17504
	ldr r0, [r0, #92]	@ 00017504 c06d
.org 0x17506
	lsls r5, r0, #16	@ 00017506 0504
.org 0x17508
	ldr r0, [pc, #144]	@ 00017508 2448
.org 0x1750a
	ldr r1, [pc, #148]	@ 0001750a 2549
.org 0x1750c
	adds r0, r0, r1	@ 0001750c 4018
.org 0x1750e
	ldrh r0, [r0, #0]	@ 0001750e 0088
.org 0x17510
	cmp r0, #0	@ 00017510 0028
.org 0x17512
	beq.n 0x1755c	@ 00017512 23d0
.org 0x17514
	ldr r0, [pc, #140]	@ 00017514 2348
.org 0x17516
	ldr r0, [r0, #0]	@ 00017516 0068
.org 0x17518
	ldr r2, [pc, #140]	@ 00017518 234a
.org 0x1751a
	adds r0, r0, r2	@ 0001751a 8018
.org 0x1751c
	lsrs r5, r5, #20	@ 0001751c 2d0d
.org 0x1751e
	lsls r5, r5, #1	@ 0001751e 6d00
.org 0x17520
	ldr r1, [pc, #136]	@ 00017520 2249
.org 0x17522
	adds r5, r5, r1	@ 00017522 6d18
.org 0x17524
	ldrh r2, [r5, #0]	@ 00017524 2a88
.org 0x17526
	movs r4, #248	@ 00017526 f824
.org 0x17528
	lsls r4, r4, #5	@ 00017528 6401
.org 0x1752a
	adds r1, r4, #0	@ 0001752a 211c
.org 0x1752c
	ands r1, r2	@ 0001752c 1140
.org 0x1752e
	lsls r1, r1, #3	@ 0001752e c900
.org 0x17530
	movs r2, #192	@ 00017530 c022
.org 0x17532
	lsls r2, r2, #19	@ 00017532 d204
.org 0x17534
	adds r1, r1, r2	@ 00017534 8918
.org 0x17536
	movs r6, #128	@ 00017536 8026
.org 0x17538
	lsls r6, r6, #2	@ 00017538 b600
.org 0x1753a
	adds r2, r6, #0	@ 0001753a 321c
.org 0x1753c
	bl 0x128be0	@ 0001753c 11f150fb
.org 0x17540
	movs r1, #0	@ 00017540 0021
.org 0x17542
	ldrh r0, [r5, #0]	@ 00017542 2888
.org 0x17544
	ands r4, r0	@ 00017544 0440
.org 0x17546
	lsls r4, r4, #3	@ 00017546 e400
.org 0x17548
	ldr r0, [pc, #100]	@ 00017548 1948
.org 0x1754a
	adds r4, r4, r0	@ 0001754a 2418
.org 0x1754c
	str r1, [sp, #0]	@ 0001754c 0091
.org 0x1754e
	movs r2, #128	@ 0001754e 8022
.org 0x17550
	lsls r2, r2, #17	@ 00017550 5204
.org 0x17552
	orrs r2, r6	@ 00017552 3243
.org 0x17554
	mov r0, sp	@ 00017554 6846
.org 0x17556
	adds r1, r4, #0	@ 00017556 211c
.org 0x17558
	bl 0x128be0	@ 00017558 11f142fb
.org 0x1755c
	movs r0, #160	@ 0001755c a020
.org 0x1755e
	lsls r0, r0, #2	@ 0001755e 8000
.org 0x17560
	bl 0xa70	@ 00017560 e9f786fa
.org 0x17564
	adds r6, r0, #0	@ 00017564 061c
.org 0x17566
	cmp r6, #0	@ 00017566 002e
.org 0x17568
	bne.n 0x1756c	@ 00017568 00d1
.org 0x1756a
	b.n 0x1796c	@ 0001756a ffe1
.org 0x1756c
	ldr r2, [pc, #68]	@ 0001756c 114a
.org 0x1756e
	movs r1, #186	@ 0001756e ba21
.org 0x17570
	lsls r1, r1, #1	@ 00017570 4900
.org 0x17572
	adds r0, r2, r1	@ 00017572 5018
.org 0x17574
	str r6, [r0, #0]	@ 00017574 0660
.org 0x17576
	movs r4, #188	@ 00017576 bc24
.org 0x17578
	lsls r4, r4, #1	@ 00017578 6400
.org 0x1757a
	adds r1, r2, r4	@ 0001757a 1119
.org 0x1757c
	ldr r0, [pc, #56]	@ 0001757c 0e48
.org 0x1757e
	str r0, [r1, #0]	@ 0001757e 0860
.org 0x17580
	movs r0, #190	@ 00017580 be20
.org 0x17582
	lsls r0, r0, #1	@ 00017582 4000
.org 0x17584
	adds r1, r2, r0	@ 00017584 1118
.org 0x17586
	ldr r0, [pc, #52]	@ 00017586 0d48
.org 0x17588
	str r0, [r1, #0]	@ 00017588 0860
.org 0x1758a
	mov r2, r9	@ 0001758a 4a46
.org 0x1758c
	ldr r1, [r2, #56]	@ 0001758c 916b
.org 0x1758e
	ldr r0, [pc, #48]	@ 0001758e 0c48
.org 0x17590
	cmp r1, r0	@ 00017590 8142
.org 0x17592
	bgt.n 0x175c8	@ 00017592 19dc
.org 0x17594
	ldr r4, [pc, #44]	@ 00017594 0b4c
.org 0x17596
	adds r0, r1, r4	@ 00017596 0819
.org 0x17598
	b.n 0x175cc	@ 00017598 18e0
.org 0x1759a
	.byte 0x00	@ 0001759a data
.org 0x1759b
	.byte 0x00	@ 0001759b data
.org 0x1759c
	.byte 0xb0,0x0a,0x00,0x02	@ 0001759c data
.org 0x175a0
	.byte 0x02,0xc0,0x02,0x00	@ 000175a0 data
.org 0x175a4
	.byte 0xe0,0xc0,0xb2,0x08	@ 000175a4 data
.org 0x175a8
	.byte 0xe8,0xc0,0xb2,0x08	@ 000175a8 data
.org 0x175ac
	.byte 0x04,0x0a,0x00,0x02	@ 000175ac data
.org 0x175b0
	.byte 0x00,0x08,0x00,0x06	@ 000175b0 data
.org 0x175b4
	.byte 0x90,0x15,0x00,0x03	@ 000175b4 data
.org 0x175b8
	.byte 0x18,0x00,0x00,0x04	@ 000175b8 data
.org 0x175bc
	.byte 0x01,0x00,0x60,0xa6	@ 000175bc data
.org 0x175c0
	.byte 0x7f,0x02,0x00,0x00	@ 000175c0 data
.org 0x175c4
	.byte 0x88,0xfe,0xff,0xff	@ 000175c4 data
.org 0x175c8
	ldr r2, [pc, #804]	@ 000175c8 c94a
.org 0x175ca
	adds r0, r1, r2	@ 000175ca 8818
.org 0x175cc
	lsls r0, r0, #16	@ 000175cc 0004
.org 0x175ce
	lsrs r0, r0, #16	@ 000175ce 000c
.org 0x175d0
	mov r8, r0	@ 000175d0 8046
.org 0x175d2
	mov r4, r9	@ 000175d2 4c46
.org 0x175d4
	ldrh r4, [r4, #52]	@ 000175d4 a48e
.org 0x175d6
	mov ip, r4	@ 000175d6 a446
.org 0x175d8
	mov r0, r8	@ 000175d8 4046
.org 0x175da
	lsls r3, r0, #16	@ 000175da 0304
.org 0x175dc
	asrs r0, r3, #16	@ 000175dc 1814
.org 0x175de
	adds r0, r0, r7	@ 000175de c019
.org 0x175e0
	adds r5, r3, #0	@ 000175e0 1d1c
.org 0x175e2
	movs r1, #104	@ 000175e2 6821
.org 0x175e4
	add r1, r9	@ 000175e4 4944
.org 0x175e6
	mov sl, r1	@ 000175e6 8a46
.org 0x175e8
	mov r2, r9	@ 000175e8 4a46
.org 0x175ea
	adds r2, #106	@ 000175ea 6a32
.org 0x175ec
	str r2, [sp, #8]	@ 000175ec 0292
.org 0x175ee
	mov r4, r9	@ 000175ee 4c46
.org 0x175f0
	adds r4, #108	@ 000175f0 6c34
.org 0x175f2
	str r4, [sp, #12]	@ 000175f2 0394
.org 0x175f4
	mov r1, r9	@ 000175f4 4946
.org 0x175f6
	adds r1, #110	@ 000175f6 6e31
.org 0x175f8
	str r1, [sp, #16]	@ 000175f8 0491
.org 0x175fa
	cmp r0, #215	@ 000175fa d728
.org 0x175fc
	ble.n 0x1761e	@ 000175fc 0fdd
.org 0x175fe
	cmp r7, #0	@ 000175fe 002f
.org 0x17600
	blt.n 0x1761e	@ 00017600 0ddb
.org 0x17602
	mov r4, ip	@ 00017602 6446
.org 0x17604
	lsls r0, r7, #2	@ 00017604 b800
.org 0x17606
	adds r2, r0, r6	@ 00017606 8219
.org 0x17608
	asrs r1, r3, #16	@ 00017608 1914
.org 0x1760a
	adds r0, r3, #0	@ 0001760a 181c
.org 0x1760c
	orrs r0, r4	@ 0001760c 2043
.org 0x1760e
	str r0, [r2, #0]	@ 0001760e 1060
.org 0x17610
	subs r2, #4	@ 00017610 043a
.org 0x17612
	subs r7, #1	@ 00017612 013f
.org 0x17614
	adds r1, r1, r7	@ 00017614 c919
.org 0x17616
	cmp r1, #215	@ 00017616 d729
.org 0x17618
	ble.n 0x1761e	@ 00017618 01dd
.org 0x1761a
	cmp r7, #0	@ 0001761a 002f
.org 0x1761c
	bge.n 0x17608	@ 0001761c f4da
.org 0x1761e
	mov r2, r9	@ 0001761e 4a46
.org 0x17620
	ldr r0, [r2, #52]	@ 00017620 506b
.org 0x17622
	lsls r1, r0, #3	@ 00017622 c100
.org 0x17624
	subs r1, r1, r0	@ 00017624 091a
.org 0x17626
	lsls r1, r1, #13	@ 00017626 4903
.org 0x17628
	lsrs r1, r1, #16	@ 00017628 090c
.org 0x1762a
	mov ip, r1	@ 0001762a 8c46
.org 0x1762c
	adds r3, r5, #0	@ 0001762c 2b1c
.org 0x1762e
	asrs r0, r5, #16	@ 0001762e 2814
.org 0x17630
	adds r0, r0, r7	@ 00017630 c019
.org 0x17632
	cmp r0, #119	@ 00017632 7728
.org 0x17634
	ble.n 0x17656	@ 00017634 0fdd
.org 0x17636
	cmp r7, #0	@ 00017636 002f
.org 0x17638
	blt.n 0x17656	@ 00017638 0ddb
.org 0x1763a
	mov r4, ip	@ 0001763a 6446
.org 0x1763c
	lsls r0, r7, #2	@ 0001763c b800
.org 0x1763e
	adds r2, r0, r6	@ 0001763e 8219
.org 0x17640
	asrs r1, r3, #16	@ 00017640 1914
.org 0x17642
	adds r0, r3, #0	@ 00017642 181c
.org 0x17644
	orrs r0, r4	@ 00017644 2043
.org 0x17646
	str r0, [r2, #0]	@ 00017646 1060
.org 0x17648
	subs r2, #4	@ 00017648 043a
.org 0x1764a
	subs r7, #1	@ 0001764a 013f
.org 0x1764c
	adds r1, r1, r7	@ 0001764c c919
.org 0x1764e
	cmp r1, #119	@ 0001764e 7729
.org 0x17650
	ble.n 0x17656	@ 00017650 01dd
.org 0x17652
	cmp r7, #0	@ 00017652 002f
.org 0x17654
	bge.n 0x17640	@ 00017654 f4da
.org 0x17656
	asrs r1, r5, #16	@ 00017656 2914
.org 0x17658
	adds r0, r1, r7	@ 00017658 c819
.org 0x1765a
	cmp r0, #87	@ 0001765a 5728
.org 0x1765c
	ble.n 0x17686	@ 0001765c 13dd
.org 0x1765e
	cmp r7, #0	@ 0001765e 002f
.org 0x17660
	blt.n 0x17686	@ 00017660 11db
.org 0x17662
	adds r3, r1, #0	@ 00017662 0b1c
.org 0x17664
	lsls r0, r7, #16	@ 00017664 3804
.org 0x17666
	movs r1, #240	@ 00017666 f021
.org 0x17668
	lsls r1, r1, #15	@ 00017668 c903
.org 0x1766a
	subs r1, r1, r0	@ 0001766a 091a
.org 0x1766c
	lsls r0, r7, #2	@ 0001766c b800
.org 0x1766e
	adds r2, r0, r6	@ 0001766e 8219
.org 0x17670
	movs r4, #128	@ 00017670 8024
.org 0x17672
	lsls r4, r4, #9	@ 00017672 6402
.org 0x17674
	str r1, [r2, #0]	@ 00017674 1160
.org 0x17676
	adds r1, r1, r4	@ 00017676 0919
.org 0x17678
	subs r2, #4	@ 00017678 043a
.org 0x1767a
	subs r7, #1	@ 0001767a 013f
.org 0x1767c
	adds r0, r3, r7	@ 0001767c d819
.org 0x1767e
	cmp r0, #87	@ 0001767e 5728
.org 0x17680
	ble.n 0x17686	@ 00017680 01dd
.org 0x17682
	cmp r7, #0	@ 00017682 002f
.org 0x17684
	bge.n 0x17674	@ 00017684 f6da
.org 0x17686
	adds r3, r5, #0	@ 00017686 2b1c
.org 0x17688
	asrs r0, r5, #16	@ 00017688 2814
.org 0x1768a
	adds r0, r0, r7	@ 0001768a c019
.org 0x1768c
	cmp r0, #55	@ 0001768c 3728
.org 0x1768e
	ble.n 0x176b8	@ 0001768e 13dd
.org 0x17690
	cmp r7, #0	@ 00017690 002f
.org 0x17692
	blt.n 0x176b8	@ 00017692 11db
.org 0x17694
	mov r4, ip	@ 00017694 6446
.org 0x17696
	str r4, [sp, #20]	@ 00017696 0594
.org 0x17698
	lsls r0, r7, #2	@ 00017698 b800
.org 0x1769a
	adds r2, r0, r6	@ 0001769a 8219
.org 0x1769c
	asrs r1, r3, #16	@ 0001769c 1914
.org 0x1769e
	movs r4, #128	@ 0001769e 8024
.org 0x176a0
	lsls r4, r4, #14	@ 000176a0 a403
.org 0x176a2
	adds r0, r3, r4	@ 000176a2 1819
.org 0x176a4
	ldr r4, [sp, #20]	@ 000176a4 059c
.org 0x176a6
	orrs r0, r4	@ 000176a6 2043
.org 0x176a8
	str r0, [r2, #0]	@ 000176a8 1060
.org 0x176aa
	subs r2, #4	@ 000176aa 043a
.org 0x176ac
	subs r7, #1	@ 000176ac 013f
.org 0x176ae
	adds r1, r1, r7	@ 000176ae c919
.org 0x176b0
	cmp r1, #55	@ 000176b0 3729
.org 0x176b2
	ble.n 0x176b8	@ 000176b2 01dd
.org 0x176b4
	cmp r7, #0	@ 000176b4 002f
.org 0x176b6
	bge.n 0x1769c	@ 000176b6 f1da
.org 0x176b8
	asrs r1, r5, #16	@ 000176b8 2914
.org 0x176ba
	adds r0, r1, r7	@ 000176ba c819
.org 0x176bc
	cmp r0, #7	@ 000176bc 0728
.org 0x176be
	ble.n 0x176e8	@ 000176be 13dd
.org 0x176c0
	cmp r7, #0	@ 000176c0 002f
.org 0x176c2
	blt.n 0x176e8	@ 000176c2 11db
.org 0x176c4
	adds r3, r1, #0	@ 000176c4 0b1c
.org 0x176c6
	lsls r0, r7, #16	@ 000176c6 3804
.org 0x176c8
	movs r1, #176	@ 000176c8 b021
.org 0x176ca
	lsls r1, r1, #15	@ 000176ca c903
.org 0x176cc
	subs r1, r1, r0	@ 000176cc 091a
.org 0x176ce
	lsls r0, r7, #2	@ 000176ce b800
.org 0x176d0
	adds r2, r0, r6	@ 000176d0 8219
.org 0x176d2
	movs r4, #128	@ 000176d2 8024
.org 0x176d4
	lsls r4, r4, #9	@ 000176d4 6402
.org 0x176d6
	str r1, [r2, #0]	@ 000176d6 1160
.org 0x176d8
	adds r1, r1, r4	@ 000176d8 0919
.org 0x176da
	subs r2, #4	@ 000176da 043a
.org 0x176dc
	subs r7, #1	@ 000176dc 013f
.org 0x176de
	adds r0, r3, r7	@ 000176de d819
.org 0x176e0
	cmp r0, #7	@ 000176e0 0728
.org 0x176e2
	ble.n 0x176e8	@ 000176e2 01dd
.org 0x176e4
	cmp r7, #0	@ 000176e4 002f
.org 0x176e6
	bge.n 0x176d6	@ 000176e6 f6da
.org 0x176e8
	adds r3, r5, #0	@ 000176e8 2b1c
.org 0x176ea
	asrs r0, r3, #16	@ 000176ea 1814
.org 0x176ec
	adds r0, r0, r7	@ 000176ec c019
.org 0x176ee
	movs r5, #8	@ 000176ee 0825
.org 0x176f0
	negs r5, r5	@ 000176f0 6d42
.org 0x176f2
	cmp r0, r5	@ 000176f2 a842
.org 0x176f4
	blt.n 0x1771a	@ 000176f4 11db
.org 0x176f6
	cmp r7, #0	@ 000176f6 002f
.org 0x176f8
	blt.n 0x1771a	@ 000176f8 0fdb
.org 0x176fa
	lsls r0, r7, #2	@ 000176fa b800
.org 0x176fc
	adds r2, r0, r6	@ 000176fc 8219
.org 0x176fe
	asrs r1, r3, #16	@ 000176fe 1914
.org 0x17700
	movs r4, #160	@ 00017700 a024
.org 0x17702
	lsls r4, r4, #15	@ 00017702 e403
.org 0x17704
	adds r0, r3, r4	@ 00017704 1819
.org 0x17706
	mov r4, ip	@ 00017706 6446
.org 0x17708
	orrs r0, r4	@ 00017708 2043
.org 0x1770a
	str r0, [r2, #0]	@ 0001770a 1060
.org 0x1770c
	subs r2, #4	@ 0001770c 043a
.org 0x1770e
	subs r7, #1	@ 0001770e 013f
.org 0x17710
	adds r1, r1, r7	@ 00017710 c919
.org 0x17712
	cmp r1, r5	@ 00017712 a942
.org 0x17714
	blt.n 0x1771a	@ 00017714 01db
.org 0x17716
	cmp r7, #0	@ 00017716 002f
.org 0x17718
	bge.n 0x176fe	@ 00017718 f1da
.org 0x1771a
	mov r0, sl	@ 0001771a 5046
.org 0x1771c
	ldrh r1, [r0, #0]	@ 0001771c 0188
.org 0x1771e
	lsrs r1, r1, #4	@ 0001771e 0909
.org 0x17720
	mov r4, r9	@ 00017720 4c46
.org 0x17722
	ldr r2, [r4, #52]	@ 00017722 626b
.org 0x17724
	movs r0, #11	@ 00017724 0b20
.org 0x17726
	muls r0, r2	@ 00017726 5043
.org 0x17728
	asrs r0, r0, #4	@ 00017728 0011
.org 0x1772a
	adds r1, r1, r0	@ 0001772a 0918
.org 0x1772c
	lsls r1, r1, #16	@ 0001772c 0904
.org 0x1772e
	lsrs r1, r1, #16	@ 0001772e 090c
.org 0x17730
	mov ip, r1	@ 00017730 8c46
.org 0x17732
	mov r1, r8	@ 00017732 4146
.org 0x17734
	lsls r0, r1, #16	@ 00017734 0804
.org 0x17736
	movs r2, #128	@ 00017736 8022
.org 0x17738
	lsls r2, r2, #12	@ 00017738 1203
.org 0x1773a
	adds r0, r0, r2	@ 0001773a 8018
.org 0x1773c
	lsrs r4, r0, #16	@ 0001773c 040c
.org 0x1773e
	mov r8, r4	@ 0001773e a046
.org 0x17740
	asrs r1, r0, #16	@ 00017740 0114
.org 0x17742
	adds r0, r1, r7	@ 00017742 c819
.org 0x17744
	movs r4, #8	@ 00017744 0824
.org 0x17746
	negs r4, r4	@ 00017746 6442
.org 0x17748
	cmp r0, r4	@ 00017748 a042
.org 0x1774a
	blt.n 0x17770	@ 0001774a 11db
.org 0x1774c
	cmp r7, #0	@ 0001774c 002f
.org 0x1774e
	blt.n 0x17770	@ 0001774e 0fdb
.org 0x17750
	adds r3, r1, #0	@ 00017750 0b1c
.org 0x17752
	lsls r0, r7, #16	@ 00017752 3804
.org 0x17754
	negs r2, r0	@ 00017754 4242
.org 0x17756
	lsls r0, r7, #2	@ 00017756 b800
.org 0x17758
	adds r1, r0, r6	@ 00017758 8119
.org 0x1775a
	movs r5, #128	@ 0001775a 8025
.org 0x1775c
	lsls r5, r5, #9	@ 0001775c 6d02
.org 0x1775e
	str r2, [r1, #0]	@ 0001775e 0a60
.org 0x17760
	adds r2, r2, r5	@ 00017760 5219
.org 0x17762
	subs r1, #4	@ 00017762 0439
.org 0x17764
	subs r7, #1	@ 00017764 013f
.org 0x17766
	adds r0, r3, r7	@ 00017766 d819
.org 0x17768
	cmp r0, r4	@ 00017768 a042
.org 0x1776a
	blt.n 0x17770	@ 0001776a 01db
.org 0x1776c
	cmp r7, #0	@ 0001776c 002f
.org 0x1776e
	bge.n 0x1775e	@ 0001776e f6da
.org 0x17770
	mov r0, r8	@ 00017770 4046
.org 0x17772
	lsls r3, r0, #16	@ 00017772 0304
.org 0x17774
	asrs r0, r3, #16	@ 00017774 1814
.org 0x17776
	adds r0, r0, r7	@ 00017776 c019
.org 0x17778
	movs r5, #16	@ 00017778 1025
.org 0x1777a
	negs r5, r5	@ 0001777a 6d42
.org 0x1777c
	cmp r0, r5	@ 0001777c a842
.org 0x1777e
	blt.n 0x177a6	@ 0001777e 12db
.org 0x17780
	cmp r7, #0	@ 00017780 002f
.org 0x17782
	blt.n 0x177a6	@ 00017782 10db
.org 0x17784
	mov sl, ip	@ 00017784 e246
.org 0x17786
	lsls r0, r7, #2	@ 00017786 b800
.org 0x17788
	adds r2, r0, r6	@ 00017788 8219
.org 0x1778a
	asrs r1, r3, #16	@ 0001778a 1914
.org 0x1778c
	movs r4, #160	@ 0001778c a024
.org 0x1778e
	lsls r4, r4, #15	@ 0001778e e403
.org 0x17790
	adds r0, r3, r4	@ 00017790 1819
.org 0x17792
	mov r4, sl	@ 00017792 5446
.org 0x17794
	orrs r0, r4	@ 00017794 2043
.org 0x17796
	str r0, [r2, #0]	@ 00017796 1060
.org 0x17798
	subs r2, #4	@ 00017798 043a
.org 0x1779a
	subs r7, #1	@ 0001779a 013f
.org 0x1779c
	adds r1, r1, r7	@ 0001779c c919
.org 0x1779e
	cmp r1, r5	@ 0001779e a942
.org 0x177a0
	blt.n 0x177a6	@ 000177a0 01db
.org 0x177a2
	cmp r7, #0	@ 000177a2 002f
.org 0x177a4
	bge.n 0x1778a	@ 000177a4 f1da
.org 0x177a6
	ldr r0, [sp, #8]	@ 000177a6 0298
.org 0x177a8
	ldrh r1, [r0, #0]	@ 000177a8 0188
.org 0x177aa
	lsrs r1, r1, #4	@ 000177aa 0909
.org 0x177ac
	mov r4, r9	@ 000177ac 4c46
.org 0x177ae
	ldr r2, [r4, #52]	@ 000177ae 626b
.org 0x177b0
	movs r0, #180	@ 000177b0 b420
.org 0x177b2
	muls r0, r2	@ 000177b2 5043
.org 0x177b4
	asrs r0, r0, #8	@ 000177b4 0012
.org 0x177b6
	adds r1, r1, r0	@ 000177b6 0918
.org 0x177b8
	lsls r1, r1, #16	@ 000177b8 0904
.org 0x177ba
	lsrs r1, r1, #16	@ 000177ba 090c
.org 0x177bc
	mov ip, r1	@ 000177bc 8c46
.org 0x177be
	mov r1, r8	@ 000177be 4146
.org 0x177c0
	lsls r0, r1, #16	@ 000177c0 0804
.org 0x177c2
	movs r2, #192	@ 000177c2 c022
.org 0x177c4
	lsls r2, r2, #12	@ 000177c4 1203
.org 0x177c6
	adds r0, r0, r2	@ 000177c6 8018
.org 0x177c8
	lsrs r4, r0, #16	@ 000177c8 040c
.org 0x177ca
	mov r8, r4	@ 000177ca a046
.org 0x177cc
	asrs r1, r0, #16	@ 000177cc 0114
.org 0x177ce
	adds r0, r1, r7	@ 000177ce c819
.org 0x177d0
	movs r4, #16	@ 000177d0 1024
.org 0x177d2
	negs r4, r4	@ 000177d2 6442
.org 0x177d4
	cmp r0, r4	@ 000177d4 a042
.org 0x177d6
	blt.n 0x177fc	@ 000177d6 11db
.org 0x177d8
	cmp r7, #0	@ 000177d8 002f
.org 0x177da
	blt.n 0x177fc	@ 000177da 0fdb
.org 0x177dc
	adds r3, r1, #0	@ 000177dc 0b1c
.org 0x177de
	lsls r0, r7, #16	@ 000177de 3804
.org 0x177e0
	negs r2, r0	@ 000177e0 4242
.org 0x177e2
	lsls r0, r7, #2	@ 000177e2 b800
.org 0x177e4
	adds r1, r0, r6	@ 000177e4 8119
.org 0x177e6
	movs r5, #128	@ 000177e6 8025
.org 0x177e8
	lsls r5, r5, #9	@ 000177e8 6d02
.org 0x177ea
	str r2, [r1, #0]	@ 000177ea 0a60
.org 0x177ec
	adds r2, r2, r5	@ 000177ec 5219
.org 0x177ee
	subs r1, #4	@ 000177ee 0439
.org 0x177f0
	subs r7, #1	@ 000177f0 013f
.org 0x177f2
	adds r0, r3, r7	@ 000177f2 d819
.org 0x177f4
	cmp r0, r4	@ 000177f4 a042
.org 0x177f6
	blt.n 0x177fc	@ 000177f6 01db
.org 0x177f8
	cmp r7, #0	@ 000177f8 002f
.org 0x177fa
	bge.n 0x177ea	@ 000177fa f6da
.org 0x177fc
	mov r0, r8	@ 000177fc 4046
.org 0x177fe
	lsls r3, r0, #16	@ 000177fe 0304
.org 0x17800
	asrs r0, r3, #16	@ 00017800 1814
.org 0x17802
	adds r0, r0, r7	@ 00017802 c019
.org 0x17804
	movs r5, #24	@ 00017804 1825
.org 0x17806
	negs r5, r5	@ 00017806 6d42
.org 0x17808
	cmp r0, r5	@ 00017808 a842
.org 0x1780a
	blt.n 0x17832	@ 0001780a 12db
.org 0x1780c
	cmp r7, #0	@ 0001780c 002f
.org 0x1780e
	blt.n 0x17832	@ 0001780e 10db
.org 0x17810
	mov sl, ip	@ 00017810 e246
.org 0x17812
	lsls r0, r7, #2	@ 00017812 b800
.org 0x17814
	adds r2, r0, r6	@ 00017814 8219
.org 0x17816
	asrs r1, r3, #16	@ 00017816 1914
.org 0x17818
	movs r4, #160	@ 00017818 a024
.org 0x1781a
	lsls r4, r4, #15	@ 0001781a e403
.org 0x1781c
	adds r0, r3, r4	@ 0001781c 1819
.org 0x1781e
	mov r4, sl	@ 0001781e 5446
.org 0x17820
	orrs r0, r4	@ 00017820 2043
.org 0x17822
	str r0, [r2, #0]	@ 00017822 1060
.org 0x17824
	subs r2, #4	@ 00017824 043a
.org 0x17826
	subs r7, #1	@ 00017826 013f
.org 0x17828
	adds r1, r1, r7	@ 00017828 c919
.org 0x1782a
	cmp r1, r5	@ 0001782a a942
.org 0x1782c
	blt.n 0x17832	@ 0001782c 01db
.org 0x1782e
	cmp r7, #0	@ 0001782e 002f
.org 0x17830
	bge.n 0x17816	@ 00017830 f1da
.org 0x17832
	ldr r0, [sp, #12]	@ 00017832 0398
.org 0x17834
	ldrh r1, [r0, #0]	@ 00017834 0188
.org 0x17836
	lsrs r1, r1, #4	@ 00017836 0909
.org 0x17838
	mov r4, r9	@ 00017838 4c46
.org 0x1783a
	ldr r2, [r4, #52]	@ 0001783a 626b
.org 0x1783c
	movs r0, #184	@ 0001783c b820
.org 0x1783e
	muls r0, r2	@ 0001783e 5043
.org 0x17840
	asrs r0, r0, #8	@ 00017840 0012
.org 0x17842
	adds r1, r1, r0	@ 00017842 0918
.org 0x17844
	lsls r1, r1, #16	@ 00017844 0904
.org 0x17846
	lsrs r1, r1, #16	@ 00017846 090c
.org 0x17848
	mov ip, r1	@ 00017848 8c46
.org 0x1784a
	mov r1, r8	@ 0001784a 4146
.org 0x1784c
	lsls r0, r1, #16	@ 0001784c 0804
.org 0x1784e
	movs r2, #128	@ 0001784e 8022
.org 0x17850
	lsls r2, r2, #11	@ 00017850 d202
.org 0x17852
	adds r0, r0, r2	@ 00017852 8018
.org 0x17854
	lsrs r4, r0, #16	@ 00017854 040c
.org 0x17856
	mov r8, r4	@ 00017856 a046
.org 0x17858
	asrs r1, r0, #16	@ 00017858 0114
.org 0x1785a
	adds r0, r1, r7	@ 0001785a c819
.org 0x1785c
	movs r4, #24	@ 0001785c 1824
.org 0x1785e
	negs r4, r4	@ 0001785e 6442
.org 0x17860
	cmp r0, r4	@ 00017860 a042
.org 0x17862
	blt.n 0x17888	@ 00017862 11db
.org 0x17864
	cmp r7, #0	@ 00017864 002f
.org 0x17866
	blt.n 0x17888	@ 00017866 0fdb
.org 0x17868
	adds r3, r1, #0	@ 00017868 0b1c
.org 0x1786a
	lsls r0, r7, #16	@ 0001786a 3804
.org 0x1786c
	negs r2, r0	@ 0001786c 4242
.org 0x1786e
	lsls r0, r7, #2	@ 0001786e b800
.org 0x17870
	adds r1, r0, r6	@ 00017870 8119
.org 0x17872
	movs r5, #128	@ 00017872 8025
.org 0x17874
	lsls r5, r5, #9	@ 00017874 6d02
.org 0x17876
	str r2, [r1, #0]	@ 00017876 0a60
.org 0x17878
	adds r2, r2, r5	@ 00017878 5219
.org 0x1787a
	subs r1, #4	@ 0001787a 0439
.org 0x1787c
	subs r7, #1	@ 0001787c 013f
.org 0x1787e
	adds r0, r3, r7	@ 0001787e d819
.org 0x17880
	cmp r0, r4	@ 00017880 a042
.org 0x17882
	blt.n 0x17888	@ 00017882 01db
.org 0x17884
	cmp r7, #0	@ 00017884 002f
.org 0x17886
	bge.n 0x17876	@ 00017886 f6da
.org 0x17888
	mov r0, r8	@ 00017888 4046
.org 0x1788a
	lsls r3, r0, #16	@ 0001788a 0304
.org 0x1788c
	asrs r0, r3, #16	@ 0001788c 1814
.org 0x1788e
	adds r0, r0, r7	@ 0001788e c019
.org 0x17890
	movs r5, #48	@ 00017890 3025
.org 0x17892
	negs r5, r5	@ 00017892 6d42
.org 0x17894
	cmp r0, r5	@ 00017894 a842
.org 0x17896
	blt.n 0x178be	@ 00017896 12db
.org 0x17898
	cmp r7, #0	@ 00017898 002f
.org 0x1789a
	blt.n 0x178be	@ 0001789a 10db
.org 0x1789c
	mov sl, ip	@ 0001789c e246
.org 0x1789e
	lsls r0, r7, #2	@ 0001789e b800
.org 0x178a0
	adds r2, r0, r6	@ 000178a0 8219
.org 0x178a2
	asrs r1, r3, #16	@ 000178a2 1914
.org 0x178a4
	movs r4, #160	@ 000178a4 a024
.org 0x178a6
	lsls r4, r4, #15	@ 000178a6 e403
.org 0x178a8
	adds r0, r3, r4	@ 000178a8 1819
.org 0x178aa
	mov r4, sl	@ 000178aa 5446
.org 0x178ac
	orrs r0, r4	@ 000178ac 2043
.org 0x178ae
	str r0, [r2, #0]	@ 000178ae 1060
.org 0x178b0
	subs r2, #4	@ 000178b0 043a
.org 0x178b2
	subs r7, #1	@ 000178b2 013f
.org 0x178b4
	adds r1, r1, r7	@ 000178b4 c919
.org 0x178b6
	cmp r1, r5	@ 000178b6 a942
.org 0x178b8
	blt.n 0x178be	@ 000178b8 01db
.org 0x178ba
	cmp r7, #0	@ 000178ba 002f
.org 0x178bc
	bge.n 0x178a2	@ 000178bc f1da
.org 0x178be
	ldr r0, [sp, #16]	@ 000178be 0498
.org 0x178c0
	ldrh r1, [r0, #0]	@ 000178c0 0188
.org 0x178c2
	lsrs r1, r1, #4	@ 000178c2 0909
.org 0x178c4
	mov r4, r9	@ 000178c4 4c46
.org 0x178c6
	ldr r2, [r4, #52]	@ 000178c6 626b
.org 0x178c8
	movs r0, #188	@ 000178c8 bc20
.org 0x178ca
	muls r0, r2	@ 000178ca 5043
.org 0x178cc
	asrs r0, r0, #8	@ 000178cc 0012
.org 0x178ce
	adds r1, r1, r0	@ 000178ce 0918
.org 0x178d0
	lsls r1, r1, #16	@ 000178d0 0904
.org 0x178d2
	lsrs r1, r1, #16	@ 000178d2 090c
.org 0x178d4
	mov ip, r1	@ 000178d4 8c46
.org 0x178d6
	mov r1, r8	@ 000178d6 4146
.org 0x178d8
	lsls r0, r1, #16	@ 000178d8 0804
.org 0x178da
	movs r2, #128	@ 000178da 8022
.org 0x178dc
	lsls r2, r2, #13	@ 000178dc 5203
.org 0x178de
	adds r0, r0, r2	@ 000178de 8018
.org 0x178e0
	lsrs r4, r0, #16	@ 000178e0 040c
.org 0x178e2
	mov r8, r4	@ 000178e2 a046
.org 0x178e4
	asrs r1, r0, #16	@ 000178e4 0114
.org 0x178e6
	adds r0, r1, r7	@ 000178e6 c819
.org 0x178e8
	movs r4, #48	@ 000178e8 3024
.org 0x178ea
	negs r4, r4	@ 000178ea 6442
.org 0x178ec
	cmp r0, r4	@ 000178ec a042
.org 0x178ee
	b.n 0x178f4	@ 000178ee 01e0
.org 0x178f0
	.byte 0x08,0xfc,0xff,0xff	@ 000178f0 data
.org 0x178f4
	blt.n 0x1791a	@ 000178f4 11db
.org 0x178f6
	cmp r7, #0	@ 000178f6 002f
.org 0x178f8
	blt.n 0x1791a	@ 000178f8 0fdb
.org 0x178fa
	adds r3, r1, #0	@ 000178fa 0b1c
.org 0x178fc
	lsls r0, r7, #16	@ 000178fc 3804
.org 0x178fe
	negs r2, r0	@ 000178fe 4242
.org 0x17900
	lsls r0, r7, #2	@ 00017900 b800
.org 0x17902
	adds r1, r0, r6	@ 00017902 8119
.org 0x17904
	movs r5, #128	@ 00017904 8025
.org 0x17906
	lsls r5, r5, #9	@ 00017906 6d02
.org 0x17908
	str r2, [r1, #0]	@ 00017908 0a60
.org 0x1790a
	adds r2, r2, r5	@ 0001790a 5219
.org 0x1790c
	subs r1, #4	@ 0001790c 0439
.org 0x1790e
	subs r7, #1	@ 0001790e 013f
.org 0x17910
	adds r0, r3, r7	@ 00017910 d819
.org 0x17912
	cmp r0, r4	@ 00017912 a042
.org 0x17914
	blt.n 0x1791a	@ 00017914 01db
.org 0x17916
	cmp r7, #0	@ 00017916 002f
.org 0x17918
	bge.n 0x17908	@ 00017918 f6da
.org 0x1791a
	mov r0, r8	@ 0001791a 4046
.org 0x1791c
	lsls r3, r0, #16	@ 0001791c 0304
.org 0x1791e
	asrs r0, r3, #16	@ 0001791e 1814
.org 0x17920
	adds r0, r0, r7	@ 00017920 c019
.org 0x17922
	movs r5, #80	@ 00017922 5025
.org 0x17924
	negs r5, r5	@ 00017924 6d42
.org 0x17926
	cmp r0, r5	@ 00017926 a842
.org 0x17928
	blt.n 0x17950	@ 00017928 12db
.org 0x1792a
	cmp r7, #0	@ 0001792a 002f
.org 0x1792c
	blt.n 0x1796c	@ 0001792c 1edb
.org 0x1792e
	mov r8, ip	@ 0001792e e046
.org 0x17930
	lsls r0, r7, #2	@ 00017930 b800
.org 0x17932
	adds r2, r0, r6	@ 00017932 8219
.org 0x17934
	asrs r1, r3, #16	@ 00017934 1914
.org 0x17936
	movs r4, #160	@ 00017936 a024
.org 0x17938
	lsls r4, r4, #15	@ 00017938 e403
.org 0x1793a
	adds r0, r3, r4	@ 0001793a 1819
.org 0x1793c
	mov r4, r8	@ 0001793c 4446
.org 0x1793e
	orrs r0, r4	@ 0001793e 2043
.org 0x17940
	str r0, [r2, #0]	@ 00017940 1060
.org 0x17942
	subs r2, #4	@ 00017942 043a
.org 0x17944
	subs r7, #1	@ 00017944 013f
.org 0x17946
	adds r1, r1, r7	@ 00017946 c919
.org 0x17948
	cmp r1, r5	@ 00017948 a942
