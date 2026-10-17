@ FUN_080cf564  entry 0x080cf564  size 306
.thumb
.org 0xcf564
FUN_080cf564:
	push {r4, r5, r6, r7, lr}	@ 000cf564 f0b5
.org 0xcf566
	mov r7, r9	@ 000cf566 4f46
.org 0xcf568
	mov r6, r8	@ 000cf568 4646
.org 0xcf56a
	push {r6, r7}	@ 000cf56a c0b4
.org 0xcf56c
	adds r6, r0, #0	@ 000cf56c 061c
.org 0xcf56e
	ldr r0, [r6, #40]	@ 000cf56e b06a
.org 0xcf570
	mov r8, r0	@ 000cf570 8046
.org 0xcf572
	ldrb r1, [r6, #17]	@ 000cf572 717c
.org 0xcf574
	mov r9, r1	@ 000cf574 8946
.org 0xcf576
	ldrb r0, [r6, #15]	@ 000cf576 f07b
.org 0xcf578
	cmp r0, #0	@ 000cf578 0028
.org 0xcf57a
	bne.n 0xcf5ec	@ 000cf57a 37d1
.org 0xcf57c
	movs r0, #153	@ 000cf57c 9920
.org 0xcf57e
	lsls r0, r0, #1	@ 000cf57e 4000
.org 0xcf580
	bl 0x2b10	@ 000cf580 33f7c6fa
.org 0xcf584
	mov r0, r8	@ 000cf584 4046
.org 0xcf586
	mov r1, r9	@ 000cf586 4946
.org 0xcf588
	bl 0x7e980	@ 000cf588 aff7faf9
.org 0xcf58c
	str r0, [r6, #100]	@ 000cf58c 7066
.org 0xcf58e
	mov r1, r8	@ 000cf58e 4146
.org 0xcf590
	adds r1, #184	@ 000cf590 b831
.org 0xcf592
	ldr r2, [r1, #0]	@ 000cf592 0a68
.org 0xcf594
	ldr r1, [pc, #256]	@ 000cf594 4049
.org 0xcf596
	adds r2, r2, r1	@ 000cf596 5218
.org 0xcf598
	str r2, [r6, #104]	@ 000cf598 b266
.org 0xcf59a
	ldr r1, [r6, #84]	@ 000cf59a 716d
.org 0xcf59c
	subs r7, r0, r1	@ 000cf59c 471a
.org 0xcf59e
	ldr r0, [r6, #88]	@ 000cf59e b06d
.org 0xcf5a0
	subs r5, r2, r0	@ 000cf5a0 151a
.org 0xcf5a2
	str r7, [r6, #92]	@ 000cf5a2 f765
.org 0xcf5a4
	str r5, [r6, #96]	@ 000cf5a4 3566
.org 0xcf5a6
	adds r0, r7, #0	@ 000cf5a6 381c
.org 0xcf5a8
	muls r0, r7	@ 000cf5a8 7843
.org 0xcf5aa
	adds r1, r5, #0	@ 000cf5aa 291c
.org 0xcf5ac
	muls r1, r5	@ 000cf5ac 6943
.org 0xcf5ae
	adds r0, r0, r1	@ 000cf5ae 4018
.org 0xcf5b0
	bl 0x128bf4	@ 000cf5b0 59f020fb
.org 0xcf5b4
	lsls r0, r0, #16	@ 000cf5b4 0004
.org 0xcf5b6
	lsrs r7, r0, #16	@ 000cf5b6 070c
.org 0xcf5b8
	movs r4, #208	@ 000cf5b8 d024
.org 0xcf5ba
	lsls r4, r4, #2	@ 000cf5ba a400
.org 0xcf5bc
	adds r0, r7, #0	@ 000cf5bc 381c
.org 0xcf5be
	adds r1, r4, #0	@ 000cf5be 211c
.org 0xcf5c0
	bl 0x128fb8	@ 000cf5c0 59f0fafc
.org 0xcf5c4
	adds r5, r0, #0	@ 000cf5c4 051c
.org 0xcf5c6
	adds r0, r7, #0	@ 000cf5c6 381c
.org 0xcf5c8
	adds r1, r4, #0	@ 000cf5c8 211c
.org 0xcf5ca
	bl 0x129050	@ 000cf5ca 59f041fd
.org 0xcf5ce
	cmp r0, #0	@ 000cf5ce 0028
.org 0xcf5d0
	beq.n 0xcf5d4	@ 000cf5d0 00d0
.org 0xcf5d2
	adds r5, #1	@ 000cf5d2 0135
.org 0xcf5d4
	cmp r5, #0	@ 000cf5d4 002d
.org 0xcf5d6
	bgt.n 0xcf5da	@ 000cf5d6 00dc
.org 0xcf5d8
	movs r5, #1	@ 000cf5d8 0125
.org 0xcf5da
	adds r1, r6, #0	@ 000cf5da 311c
.org 0xcf5dc
	adds r1, #180	@ 000cf5dc b431
.org 0xcf5de
	adds r0, r6, #0	@ 000cf5de 301c
.org 0xcf5e0
	adds r0, #184	@ 000cf5e0 b830
.org 0xcf5e2
	str r5, [r0, #0]	@ 000cf5e2 0560
.org 0xcf5e4
	str r5, [r1, #0]	@ 000cf5e4 0d60
.org 0xcf5e6
	ldrb r0, [r6, #15]	@ 000cf5e6 f07b
.org 0xcf5e8
	adds r0, #1	@ 000cf5e8 0130
.org 0xcf5ea
	strb r0, [r6, #15]	@ 000cf5ea f073
.org 0xcf5ec
	adds r0, r6, #0	@ 000cf5ec 301c
.org 0xcf5ee
	bl 0x1cff0	@ 000cf5ee 4df7fffc
.org 0xcf5f2
	adds r5, r6, #0	@ 000cf5f2 351c
.org 0xcf5f4
	adds r5, #180	@ 000cf5f4 b435
.org 0xcf5f6
	ldr r0, [r5, #0]	@ 000cf5f6 2868
.org 0xcf5f8
	subs r0, #1	@ 000cf5f8 0138
.org 0xcf5fa
	str r0, [r5, #0]	@ 000cf5fa 2860
.org 0xcf5fc
	ldr r1, [r6, #92]	@ 000cf5fc f16d
.org 0xcf5fe
	muls r0, r1	@ 000cf5fe 4843
.org 0xcf600
	adds r4, r6, #0	@ 000cf600 341c
.org 0xcf602
	adds r4, #184	@ 000cf602 b834
.org 0xcf604
	ldr r1, [r4, #0]	@ 000cf604 2168
.org 0xcf606
	bl 0x128fb8	@ 000cf606 59f0d7fc
.org 0xcf60a
	ldr r1, [r6, #100]	@ 000cf60a 716e
.org 0xcf60c
	subs r1, r1, r0	@ 000cf60c 091a
.org 0xcf60e
	str r1, [r6, #84]	@ 000cf60e 7165
.org 0xcf610
	ldr r1, [r6, #96]	@ 000cf610 316e
.org 0xcf612
	ldr r0, [r5, #0]	@ 000cf612 2868
.org 0xcf614
	muls r0, r1	@ 000cf614 4843
.org 0xcf616
	ldr r1, [r4, #0]	@ 000cf616 2168
.org 0xcf618
	bl 0x128fb8	@ 000cf618 59f0cefc
.org 0xcf61c
	ldr r1, [r6, #104]	@ 000cf61c b16e
.org 0xcf61e
	subs r1, r1, r0	@ 000cf61e 091a
.org 0xcf620
	str r1, [r6, #88]	@ 000cf620 b165
.org 0xcf622
	mov r0, r8	@ 000cf622 4046
.org 0xcf624
	adds r0, #206	@ 000cf624 ce30
.org 0xcf626
	ldrb r0, [r0, #0]	@ 000cf626 0078
.org 0xcf628
	mov r1, r9	@ 000cf628 4946
.org 0xcf62a
	asrs r0, r1	@ 000cf62a 0841
.org 0xcf62c
	movs r1, #1	@ 000cf62c 0121
.org 0xcf62e
	ands r0, r1	@ 000cf62e 0840
.org 0xcf630
	cmp r0, #0	@ 000cf630 0028
.org 0xcf632
	beq.n 0xcf642	@ 000cf632 06d0
.org 0xcf634
	ldr r1, [r5, #0]	@ 000cf634 2968
.org 0xcf636
	cmp r1, #0	@ 000cf636 0029
.org 0xcf638
	bne.n 0xcf642	@ 000cf638 03d1
.org 0xcf63a
	movs r0, #3	@ 000cf63a 0320
.org 0xcf63c
	strb r0, [r6, #13]	@ 000cf63c 7073
.org 0xcf63e
	strb r1, [r6, #14]	@ 000cf63e b173
.org 0xcf640
	strb r1, [r6, #15]	@ 000cf640 f173
.org 0xcf642
	ldr r0, [pc, #88]	@ 000cf642 1648
.org 0xcf644
	adds r1, r6, #0	@ 000cf644 311c
.org 0xcf646
	adds r1, #84	@ 000cf646 5431
.org 0xcf648
	bl 0x1fb14	@ 000cf648 50f764fa
.org 0xcf64c
	movs r1, #128	@ 000cf64c 8021
.org 0xcf64e
	lsls r1, r1, #5	@ 000cf64e 4901
.org 0xcf650
	cmp r0, r1	@ 000cf650 8842
.org 0xcf652
	bls.n 0xcf68a	@ 000cf652 1ad9
.org 0xcf654
	ldrb r1, [r6, #10]	@ 000cf654 b17a
.org 0xcf656
	movs r0, #254	@ 000cf656 fe20
.org 0xcf658
	ands r0, r1	@ 000cf658 0840
.org 0xcf65a
	movs r2, #0	@ 000cf65a 0022
.org 0xcf65c
	movs r1, #253	@ 000cf65c fd21
.org 0xcf65e
	ands r0, r1	@ 000cf65e 0840
.org 0xcf660
	strb r0, [r6, #10]	@ 000cf660 b072
.org 0xcf662
	adds r0, r6, #0	@ 000cf662 301c
.org 0xcf664
	adds r0, #140	@ 000cf664 8c30
.org 0xcf666
	str r2, [r0, #0]	@ 000cf666 0260
.org 0xcf668
	adds r0, #4	@ 000cf668 0430
.org 0xcf66a
	str r2, [r0, #0]	@ 000cf66a 0260
.org 0xcf66c
	adds r0, #4	@ 000cf66c 0430
.org 0xcf66e
	strb r2, [r0, #0]	@ 000cf66e 0270
.org 0xcf670
	ldrb r1, [r6, #10]	@ 000cf670 b17a
.org 0xcf672
	movs r0, #251	@ 000cf672 fb20
.org 0xcf674
	ands r0, r1	@ 000cf674 0840
.org 0xcf676
	strb r0, [r6, #10]	@ 000cf676 b072
.org 0xcf678
	ldr r1, [pc, #36]	@ 000cf678 0949
.org 0xcf67a
	ldrb r0, [r6, #9]	@ 000cf67a 707a
.org 0xcf67c
	lsls r0, r0, #2	@ 000cf67c 8000
.org 0xcf67e
	adds r0, r0, r1	@ 000cf67e 4018
.org 0xcf680
	movs r1, #3	@ 000cf680 0321
.org 0xcf682
	str r1, [r6, #12]	@ 000cf682 f160
.org 0xcf684
	ldr r0, [r0, #0]	@ 000cf684 0068
.org 0xcf686
	ldr r0, [r0, #12]	@ 000cf686 c068
.org 0xcf688
	str r0, [r6, #20]	@ 000cf688 7061
.org 0xcf68a
	pop {r3, r4}	@ 000cf68a 18bc
.org 0xcf68c
	mov r8, r3	@ 000cf68c 9846
.org 0xcf68e
	mov r9, r4	@ 000cf68e a146
.org 0xcf690
	pop {r4, r5, r6, r7}	@ 000cf690 f0bc
.org 0xcf692
	pop {r0}	@ 000cf692 01bc
.org 0xcf694
	bx r0	@ 000cf694 0047
