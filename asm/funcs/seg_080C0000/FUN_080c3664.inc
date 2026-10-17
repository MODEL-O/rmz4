@ FUN_080c3664  entry 0x080c3664  size 186
.thumb
.org 0xc3664
FUN_080c3664:
	push {r4, r5, r6, lr}	@ 000c3664 70b5
.org 0xc3666
	adds r6, r0, #0	@ 000c3666 061c
.org 0xc3668
	bl 0x1cc9c	@ 000c3668 59f718fb
.org 0xc366c
	ldrb r1, [r6, #10]	@ 000c366c b17a
.org 0xc366e
	movs r0, #1	@ 000c366e 0120
.org 0xc3670
	orrs r0, r1	@ 000c3670 0843
.org 0xc3672
	movs r1, #2	@ 000c3672 0221
.org 0xc3674
	orrs r0, r1	@ 000c3674 0843
.org 0xc3676
	strb r0, [r6, #10]	@ 000c3676 b072
.org 0xc3678
	ldr r1, [pc, #164]	@ 000c3678 2949
.org 0xc367a
	ldrb r0, [r6, #17]	@ 000c367a 707c
.org 0xc367c
	adds r0, r0, r1	@ 000c367c 4018
.org 0xc367e
	ldr r2, [pc, #164]	@ 000c367e 294a
.org 0xc3680
	adds r1, r2, #0	@ 000c3680 111c
.org 0xc3682
	ldrb r0, [r0, #0]	@ 000c3682 0078
.org 0xc3684
	adds r1, r1, r0	@ 000c3684 0918
.org 0xc3686
	lsls r1, r1, #16	@ 000c3686 0904
.org 0xc3688
	lsrs r1, r1, #16	@ 000c3688 090c
.org 0xc368a
	adds r0, r6, #0	@ 000c368a 301c
.org 0xc368c
	bl 0x1cf00	@ 000c368c 59f738fc
.org 0xc3690
	adds r0, r6, #0	@ 000c3690 301c
.org 0xc3692
	bl 0x1cff0	@ 000c3692 59f7adfc
.org 0xc3696
	movs r5, #0	@ 000c3696 0025
.org 0xc3698
	ldrb r1, [r6, #10]	@ 000c3698 b17a
.org 0xc369a
	movs r0, #239	@ 000c369a ef20
.org 0xc369c
	ands r0, r1	@ 000c369c 0840
.org 0xc369e
	strb r0, [r6, #10]	@ 000c369e b072
.org 0xc36a0
	adds r0, r6, #0	@ 000c36a0 301c
.org 0xc36a2
	adds r0, #76	@ 000c36a2 4c30
.org 0xc36a4
	strb r5, [r0, #0]	@ 000c36a4 0570
.org 0xc36a6
	adds r2, r6, #0	@ 000c36a6 321c
.org 0xc36a8
	adds r2, #74	@ 000c36a8 4a32
.org 0xc36aa
	ldrb r1, [r2, #0]	@ 000c36aa 1178
.org 0xc36ac
	movs r0, #17	@ 000c36ac 1120
.org 0xc36ae
	negs r0, r0	@ 000c36ae 4042
.org 0xc36b0
	ands r0, r1	@ 000c36b0 0840
.org 0xc36b2
	strb r0, [r2, #0]	@ 000c36b2 1070
.org 0xc36b4
	ldrb r1, [r6, #10]	@ 000c36b4 b17a
.org 0xc36b6
	movs r0, #4	@ 000c36b6 0420
.org 0xc36b8
	orrs r0, r1	@ 000c36b8 0843
.org 0xc36ba
	strb r0, [r6, #10]	@ 000c36ba b072
.org 0xc36bc
	adds r4, r6, #0	@ 000c36bc 341c
.org 0xc36be
	adds r4, #116	@ 000c36be 7434
.org 0xc36c0
	ldr r1, [pc, #100]	@ 000c36c0 1949
.org 0xc36c2
	adds r2, #10	@ 000c36c2 0a32
.org 0xc36c4
	adds r0, r4, #0	@ 000c36c4 201c
.org 0xc36c6
	movs r3, #8	@ 000c36c6 0823
.org 0xc36c8
	bl 0x5760	@ 000c36c8 42f74af8
.org 0xc36cc
	str r6, [r4, #44]	@ 000c36cc e662
.org 0xc36ce
	str r5, [r4, #36]	@ 000c36ce 6562
.org 0xc36d0
	adds r0, r6, #0	@ 000c36d0 301c
.org 0xc36d2
	adds r0, #180	@ 000c36d2 b430
.org 0xc36d4
	strb r5, [r0, #0]	@ 000c36d4 0570
.org 0xc36d6
	adds r0, #1	@ 000c36d6 0130
.org 0xc36d8
	strb r5, [r0, #0]	@ 000c36d8 0570
.org 0xc36da
	adds r0, #1	@ 000c36da 0130
.org 0xc36dc
	strb r5, [r0, #0]	@ 000c36dc 0570
.org 0xc36de
	ldr r1, [pc, #76]	@ 000c36de 1349
.org 0xc36e0
	ldrb r0, [r6, #17]	@ 000c36e0 707c
.org 0xc36e2
	adds r0, r0, r1	@ 000c36e2 4018
.org 0xc36e4
	ldrb r0, [r0, #0]	@ 000c36e4 0078
.org 0xc36e6
	adds r0, #8	@ 000c36e6 0830
.org 0xc36e8
	adds r1, r6, #0	@ 000c36e8 311c
.org 0xc36ea
	adds r1, #37	@ 000c36ea 2531
.org 0xc36ec
	strb r0, [r1, #0]	@ 000c36ec 0870
.org 0xc36ee
	ldrb r1, [r6, #17]	@ 000c36ee 717c
.org 0xc36f0
	cmp r1, #0	@ 000c36f0 0029
.org 0xc36f2
	beq.n 0xc3700	@ 000c36f2 05d0
.org 0xc36f4
	subs r1, #1	@ 000c36f4 0139
.org 0xc36f6
	lsls r1, r1, #24	@ 000c36f6 0906
.org 0xc36f8
	lsrs r1, r1, #24	@ 000c36f8 090e
.org 0xc36fa
	adds r0, r6, #0	@ 000c36fa 301c
.org 0xc36fc
	bl 0xc34e0	@ 000c36fc fff7f0fe
.org 0xc3700
	ldr r1, [pc, #44]	@ 000c3700 0b49
.org 0xc3702
	ldrb r0, [r6, #9]	@ 000c3702 707a
.org 0xc3704
	lsls r0, r0, #2	@ 000c3704 8000
.org 0xc3706
	adds r0, r0, r1	@ 000c3706 4018
.org 0xc3708
	movs r1, #1	@ 000c3708 0121
.org 0xc370a
	str r1, [r6, #12]	@ 000c370a f160
.org 0xc370c
	ldr r0, [r0, #0]	@ 000c370c 0068
.org 0xc370e
	ldr r0, [r0, #4]	@ 000c370e 4068
.org 0xc3710
	str r0, [r6, #20]	@ 000c3710 7061
.org 0xc3712
	adds r0, r6, #0	@ 000c3712 301c
.org 0xc3714
	bl 0xc354c	@ 000c3714 fff71aff
.org 0xc3718
	pop {r4, r5, r6}	@ 000c3718 70bc
.org 0xc371a
	pop {r0}	@ 000c371a 01bc
.org 0xc371c
	bx r0	@ 000c371c 0047
