@ FUN_080394fc  entry 0x080394fc  size 398
.thumb
.org 0x394fc
FUN_080394fc:
	push {r4, r5, r6, r7, lr}	@ 000394fc f0b5
.org 0x394fe
	mov r7, r9	@ 000394fe 4f46
.org 0x39500
	mov r6, r8	@ 00039500 4646
.org 0x39502
	push {r6, r7}	@ 00039502 c0b4
.org 0x39504
	adds r4, r0, #0	@ 00039504 041c
.org 0x39506
	ldr r0, [pc, #64]	@ 00039506 1048
.org 0x39508
	adds r3, r4, r0	@ 00039508 2318
.org 0x3950a
	ldrb r0, [r3, #0]	@ 0003950a 1878
.org 0x3950c
	cmp r0, #0	@ 0003950c 0028
.org 0x3950e
	beq.n 0x39554	@ 0003950e 21d0
.org 0x39510
	subs r0, #1	@ 00039510 0138
.org 0x39512
	strb r0, [r3, #0]	@ 00039512 1870
.org 0x39514
	movs r1, #232	@ 00039514 e821
.org 0x39516
	lsls r1, r1, #1	@ 00039516 4900
.org 0x39518
	adds r2, r4, r1	@ 00039518 6218
.org 0x3951a
	ldrh r1, [r2, #0]	@ 0003951a 1188
.org 0x3951c
	movs r5, #128	@ 0003951c 8025
.org 0x3951e
	lsls r5, r5, #5	@ 0003951e 6d01
.org 0x39520
	adds r0, r5, #0	@ 00039520 281c
.org 0x39522
	movs r5, #0	@ 00039522 0025
.org 0x39524
	orrs r0, r1	@ 00039524 0843
.org 0x39526
	strh r0, [r2, #0]	@ 00039526 1080
.org 0x39528
	ldr r1, [pc, #32]	@ 00039528 0849
.org 0x3952a
	adds r0, r4, r1	@ 0003952a 6018
.org 0x3952c
	ldrh r1, [r0, #0]	@ 0003952c 0188
.org 0x3952e
	movs r0, #48	@ 0003952e 3020
.org 0x39530
	ands r0, r1	@ 00039530 0840
.org 0x39532
	cmp r0, #0	@ 00039532 0028
.org 0x39534
	beq.n 0x39550	@ 00039534 0cd0
.org 0x39536
	movs r2, #150	@ 00039536 9622
.org 0x39538
	lsls r2, r2, #2	@ 00039538 9200
.org 0x3953a
	adds r0, r4, r2	@ 0003953a a018
.org 0x3953c
	ldr r1, [r0, #0]	@ 0003953c 0168
.org 0x3953e
	movs r2, #8	@ 0003953e 0822
.org 0x39540
	orrs r1, r2	@ 00039540 1143
.org 0x39542
	str r1, [r0, #0]	@ 00039542 0160
.org 0x39544
	b.n 0x3969a	@ 00039544 a9e0
.org 0x39546
	.byte 0x00	@ 00039546 data
.org 0x39547
	.byte 0x00	@ 00039547 data
.org 0x39548
	.byte 0x77,0x02,0x00,0x00	@ 00039548 data
.org 0x3954c
	.byte 0x52,0x02,0x00,0x00	@ 0003954c data
.org 0x39550
	strb r5, [r3, #0]	@ 00039550 1d70
.org 0x39552
	b.n 0x3969a	@ 00039552 a2e0
.org 0x39554
	movs r5, #148	@ 00039554 9425
.org 0x39556
	lsls r5, r5, #2	@ 00039556 ad00
.org 0x39558
	adds r0, r4, r5	@ 00039558 6019
.org 0x3955a
	ldrh r1, [r0, #0]	@ 0003955a 0188
.org 0x3955c
	movs r0, #16	@ 0003955c 1020
.org 0x3955e
	ands r0, r1	@ 0003955e 0840
.org 0x39560
	cmp r0, #0	@ 00039560 0028
.org 0x39562
	beq.n 0x395f4	@ 00039562 47d0
.org 0x39564
	movs r2, #1	@ 00039564 0122
.org 0x39566
	movs r0, #232	@ 00039566 e820
.org 0x39568
	lsls r0, r0, #1	@ 00039568 4000
.org 0x3956a
	adds r5, r4, r0	@ 0003956a 2518
.org 0x3956c
	adds r7, r5, #0	@ 0003956c 2f1c
.org 0x3956e
	movs r1, #128	@ 0003956e 8021
.org 0x39570
	lsls r1, r1, #5	@ 00039570 4901
.org 0x39572
	mov r8, r1	@ 00039572 8846
.org 0x39574
	adds r3, r1, #0	@ 00039574 0b1c
.org 0x39576
	movs r0, #16	@ 00039576 1020
.org 0x39578
	mov ip, r0	@ 00039578 8446
.org 0x3957a
	lsls r0, r2, #1	@ 0003957a 5000
.org 0x3957c
	adds r0, r7, r0	@ 0003957c 3818
.org 0x3957e
	ldrh r1, [r0, #0]	@ 0003957e 0188
.org 0x39580
	adds r0, r3, #0	@ 00039580 181c
.org 0x39582
	ands r0, r1	@ 00039582 0840
.org 0x39584
	cmp r0, #0	@ 00039584 0028
.org 0x39586
	beq.n 0x3958a	@ 00039586 00d0
.org 0x39588
	b.n 0x3969a	@ 00039588 87e0
.org 0x3958a
	movs r0, #32	@ 0003958a 2020
.org 0x3958c
	ands r0, r1	@ 0003958c 0840
.org 0x3958e
	cmp r0, #0	@ 0003958e 0028
.org 0x39590
	beq.n 0x39594	@ 00039590 00d0
.org 0x39592
	b.n 0x3969a	@ 00039592 82e0
.org 0x39594
	mov r0, ip	@ 00039594 6046
.org 0x39596
	ands r0, r1	@ 00039596 0840
.org 0x39598
	lsls r0, r0, #16	@ 00039598 0004
.org 0x3959a
	lsrs r1, r0, #16	@ 0003959a 010c
.org 0x3959c
	cmp r1, #0	@ 0003959c 0029
.org 0x3959e
	beq.n 0x395e8	@ 0003959e 23d0
.org 0x395a0
	adds r3, r2, #0	@ 000395a0 131c
.org 0x395a2
	adds r6, r3, #0	@ 000395a2 1e1c
.org 0x395a4
	adds r6, #10	@ 000395a4 0a36
.org 0x395a6
	cmp r3, r6	@ 000395a6 b342
.org 0x395a8
	bge.n 0x3969a	@ 000395a8 77da
.org 0x395aa
	movs r1, #150	@ 000395aa 9621
.org 0x395ac
	lsls r1, r1, #2	@ 000395ac 8900
.org 0x395ae
	adds r2, r4, r1	@ 000395ae 6218
.org 0x395b0
	ldr r0, [pc, #48]	@ 000395b0 0c48
.org 0x395b2
	adds r4, r4, r0	@ 000395b2 2418
.org 0x395b4
	lsls r0, r3, #1	@ 000395b4 5800
.org 0x395b6
	adds r0, r7, r0	@ 000395b6 3818
.org 0x395b8
	ldrh r1, [r0, #0]	@ 000395b8 0188
.org 0x395ba
	mov r0, ip	@ 000395ba 6046
.org 0x395bc
	ands r0, r1	@ 000395bc 0840
.org 0x395be
	cmp r0, #0	@ 000395be 0028
.org 0x395c0
	bne.n 0x395d6	@ 000395c0 09d1
.org 0x395c2
	ldrh r0, [r5, #0]	@ 000395c2 2888
.org 0x395c4
	mov r1, r8	@ 000395c4 4146
.org 0x395c6
	orrs r0, r1	@ 000395c6 0843
.org 0x395c8
	strh r0, [r5, #0]	@ 000395c8 2880
.org 0x395ca
	ldr r0, [r2, #0]	@ 000395ca 1068
.org 0x395cc
	movs r1, #4	@ 000395cc 0421
.org 0x395ce
	orrs r0, r1	@ 000395ce 0843
.org 0x395d0
	str r0, [r2, #0]	@ 000395d0 1060
.org 0x395d2
	movs r0, #28	@ 000395d2 1c20
.org 0x395d4
	strb r0, [r4, #0]	@ 000395d4 2070
.org 0x395d6
	adds r0, r3, #1	@ 000395d6 581c
.org 0x395d8
	lsls r0, r0, #24	@ 000395d8 0006
.org 0x395da
	lsrs r3, r0, #24	@ 000395da 030e
.org 0x395dc
	cmp r3, r6	@ 000395dc b342
.org 0x395de
	blt.n 0x395b4	@ 000395de e9db
.org 0x395e0
	b.n 0x3969a	@ 000395e0 5be0
.org 0x395e2
	.byte 0x00	@ 000395e2 data
.org 0x395e3
	.byte 0x00	@ 000395e3 data
.org 0x395e4
	.byte 0x77,0x02,0x00,0x00	@ 000395e4 data
.org 0x395e8
	adds r0, r2, #1	@ 000395e8 501c
.org 0x395ea
	lsls r0, r0, #24	@ 000395ea 0006
.org 0x395ec
	lsrs r2, r0, #24	@ 000395ec 020e
.org 0x395ee
	cmp r2, #9	@ 000395ee 092a
.org 0x395f0
	bls.n 0x3957a	@ 000395f0 c3d9
.org 0x395f2
	b.n 0x3968a	@ 000395f2 4ae0
.org 0x395f4
	movs r0, #32	@ 000395f4 2020
.org 0x395f6
	ands r0, r1	@ 000395f6 0840
.org 0x395f8
	lsls r0, r0, #16	@ 000395f8 0004
.org 0x395fa
	lsrs r0, r0, #16	@ 000395fa 000c
.org 0x395fc
	cmp r0, #0	@ 000395fc 0028
.org 0x395fe
	beq.n 0x39698	@ 000395fe 4bd0
.org 0x39600
	movs r2, #1	@ 00039600 0122
.org 0x39602
	movs r0, #232	@ 00039602 e820
.org 0x39604
	lsls r0, r0, #1	@ 00039604 4000
.org 0x39606
	adds r5, r4, r0	@ 00039606 2518
.org 0x39608
	adds r7, r5, #0	@ 00039608 2f1c
.org 0x3960a
	movs r1, #128	@ 0003960a 8021
.org 0x3960c
	lsls r1, r1, #5	@ 0003960c 4901
.org 0x3960e
	mov r8, r1	@ 0003960e 8846
.org 0x39610
	adds r3, r1, #0	@ 00039610 0b1c
.org 0x39612
	movs r0, #32	@ 00039612 2020
.org 0x39614
	mov ip, r0	@ 00039614 8446
.org 0x39616
	lsls r0, r2, #1	@ 00039616 5000
.org 0x39618
	adds r0, r7, r0	@ 00039618 3818
.org 0x3961a
	ldrh r1, [r0, #0]	@ 0003961a 0188
.org 0x3961c
	adds r0, r3, #0	@ 0003961c 181c
.org 0x3961e
	ands r0, r1	@ 0003961e 0840
.org 0x39620
	cmp r0, #0	@ 00039620 0028
.org 0x39622
	bne.n 0x3969a	@ 00039622 3ad1
.org 0x39624
	movs r0, #16	@ 00039624 1020
.org 0x39626
	ands r0, r1	@ 00039626 0840
.org 0x39628
	cmp r0, #0	@ 00039628 0028
.org 0x3962a
	bne.n 0x3969a	@ 0003962a 36d1
.org 0x3962c
	mov r0, ip	@ 0003962c 6046
.org 0x3962e
	ands r0, r1	@ 0003962e 0840
.org 0x39630
	lsls r0, r0, #16	@ 00039630 0004
.org 0x39632
	lsrs r1, r0, #16	@ 00039632 010c
.org 0x39634
	cmp r1, #0	@ 00039634 0029
.org 0x39636
	beq.n 0x39680	@ 00039636 23d0
.org 0x39638
	adds r3, r2, #0	@ 00039638 131c
.org 0x3963a
	adds r6, r3, #0	@ 0003963a 1e1c
.org 0x3963c
	adds r6, #11	@ 0003963c 0b36
.org 0x3963e
	cmp r3, r6	@ 0003963e b342
.org 0x39640
	bge.n 0x3969a	@ 00039640 2bda
.org 0x39642
	movs r1, #150	@ 00039642 9621
.org 0x39644
	lsls r1, r1, #2	@ 00039644 8900
.org 0x39646
	adds r2, r4, r1	@ 00039646 6218
.org 0x39648
	ldr r0, [pc, #48]	@ 00039648 0c48
.org 0x3964a
	adds r4, r4, r0	@ 0003964a 2418
.org 0x3964c
	lsls r0, r3, #1	@ 0003964c 5800
.org 0x3964e
	adds r0, r7, r0	@ 0003964e 3818
.org 0x39650
	ldrh r1, [r0, #0]	@ 00039650 0188
.org 0x39652
	mov r0, ip	@ 00039652 6046
.org 0x39654
	ands r0, r1	@ 00039654 0840
.org 0x39656
	cmp r0, #0	@ 00039656 0028
.org 0x39658
	bne.n 0x3966e	@ 00039658 09d1
.org 0x3965a
	ldrh r0, [r5, #0]	@ 0003965a 2888
.org 0x3965c
	mov r1, r8	@ 0003965c 4146
.org 0x3965e
	orrs r0, r1	@ 0003965e 0843
.org 0x39660
	strh r0, [r5, #0]	@ 00039660 2880
.org 0x39662
	ldr r0, [r2, #0]	@ 00039662 1068
.org 0x39664
	movs r1, #4	@ 00039664 0421
.org 0x39666
	orrs r0, r1	@ 00039666 0843
.org 0x39668
	str r0, [r2, #0]	@ 00039668 1060
.org 0x3966a
	movs r0, #28	@ 0003966a 1c20
.org 0x3966c
	strb r0, [r4, #0]	@ 0003966c 2070
.org 0x3966e
	adds r0, r3, #1	@ 0003966e 581c
.org 0x39670
	lsls r0, r0, #24	@ 00039670 0006
.org 0x39672
	lsrs r3, r0, #24	@ 00039672 030e
.org 0x39674
	cmp r3, r6	@ 00039674 b342
.org 0x39676
	blt.n 0x3964c	@ 00039676 e9db
.org 0x39678
	b.n 0x3969a	@ 00039678 0fe0
.org 0x3967a
	.byte 0x00	@ 0003967a data
.org 0x3967b
	.byte 0x00	@ 0003967b data
.org 0x3967c
	.byte 0x77,0x02,0x00,0x00	@ 0003967c data
.org 0x39680
	adds r0, r2, #1	@ 00039680 501c
.org 0x39682
	lsls r0, r0, #24	@ 00039682 0006
.org 0x39684
	lsrs r2, r0, #24	@ 00039684 020e
.org 0x39686
	cmp r2, #10	@ 00039686 0a2a
.org 0x39688
	bls.n 0x39616	@ 00039688 c5d9
