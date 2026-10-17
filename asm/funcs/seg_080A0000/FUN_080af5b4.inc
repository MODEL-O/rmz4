@ FUN_080af5b4  entry 0x080af5b4  size 208
.thumb
.org 0xaf5b4
FUN_080af5b4:
	push {r4, r5, lr}	@ 000af5b4 30b5
.org 0xaf5b6
	adds r4, r0, #0	@ 000af5b6 041c
.org 0xaf5b8
	movs r2, #0	@ 000af5b8 0022
.org 0xaf5ba
	ldrb r0, [r4, #14]	@ 000af5ba a07b
.org 0xaf5bc
	cmp r0, #0	@ 000af5bc 0028
.org 0xaf5be
	bne.n 0xaf5ee	@ 000af5be 16d1
.org 0xaf5c0
	movs r3, #192	@ 000af5c0 c023
.org 0xaf5c2
	lsls r3, r3, #1	@ 000af5c2 5b00
.org 0xaf5c4
	str r3, [r4, #92]	@ 000af5c4 e365
.org 0xaf5c6
	strb r2, [r4, #19]	@ 000af5c6 e274
.org 0xaf5c8
	ldrb r1, [r4, #10]	@ 000af5c8 a17a
.org 0xaf5ca
	movs r0, #16	@ 000af5ca 1020
.org 0xaf5cc
	ands r0, r1	@ 000af5cc 0840
.org 0xaf5ce
	cmp r0, #0	@ 000af5ce 0028
.org 0xaf5d0
	bne.n 0xaf5dc	@ 000af5d0 04d1
.org 0xaf5d2
	lsls r0, r3, #8	@ 000af5d2 1802
.org 0xaf5d4
	negs r0, r0	@ 000af5d4 4042
.org 0xaf5d6
	adds r0, #255	@ 000af5d6 ff30
.org 0xaf5d8
	asrs r0, r0, #8	@ 000af5d8 0012
.org 0xaf5da
	str r0, [r4, #92]	@ 000af5da e065
.org 0xaf5dc
	ldr r0, [r4, #44]	@ 000af5dc e06a
.org 0xaf5de
	cmp r0, #0	@ 000af5de 0028
.org 0xaf5e0
	beq.n 0xaf5e8	@ 000af5e0 02d0
.org 0xaf5e2
	strb r2, [r0, #13]	@ 000af5e2 4273
.org 0xaf5e4
	ldr r0, [r4, #44]	@ 000af5e4 e06a
.org 0xaf5e6
	strb r2, [r0, #14]	@ 000af5e6 8273
.org 0xaf5e8
	ldrb r0, [r4, #14]	@ 000af5e8 a07b
.org 0xaf5ea
	adds r0, #1	@ 000af5ea 0130
.org 0xaf5ec
	strb r0, [r4, #14]	@ 000af5ec a073
.org 0xaf5ee
	ldrb r0, [r4, #19]	@ 000af5ee e07c
.org 0xaf5f0
	adds r5, r4, #0	@ 000af5f0 251c
.org 0xaf5f2
	adds r5, #112	@ 000af5f2 7035
.org 0xaf5f4
	cmp r0, #2	@ 000af5f4 0228
.org 0xaf5f6
	bne.n 0xaf610	@ 000af5f6 0bd1
.org 0xaf5f8
	ldrb r0, [r4, #30]	@ 000af5f8 a07f
.org 0xaf5fa
	lsls r0, r0, #8	@ 000af5fa 0002
.org 0xaf5fc
	ldrb r1, [r5, #0]	@ 000af5fc 2978
.org 0xaf5fe
	orrs r1, r0	@ 000af5fe 0143
.org 0xaf600
	adds r1, #2	@ 000af600 0231
.org 0xaf602
	lsls r1, r1, #16	@ 000af602 0904
.org 0xaf604
	lsrs r1, r1, #16	@ 000af604 090c
.org 0xaf606
	adds r0, r4, #0	@ 000af606 201c
.org 0xaf608
	bl 0x1cf00	@ 000af608 6df77afc
.org 0xaf60c
	movs r0, #0	@ 000af60c 0020
.org 0xaf60e
	strb r0, [r4, #19]	@ 000af60e e074
.org 0xaf610
	ldrb r0, [r4, #19]	@ 000af610 e07c
.org 0xaf612
	adds r0, #1	@ 000af612 0130
.org 0xaf614
	strb r0, [r4, #19]	@ 000af614 e074
.org 0xaf616
	ldrb r0, [r4, #30]	@ 000af616 a07f
.org 0xaf618
	lsls r0, r0, #8	@ 000af618 0002
.org 0xaf61a
	ldrb r1, [r5, #0]	@ 000af61a 2978
.org 0xaf61c
	orrs r0, r1	@ 000af61c 0843
.org 0xaf61e
	ldr r1, [pc, #100]	@ 000af61e 1949
.org 0xaf620
	cmp r0, r1	@ 000af620 8842
.org 0xaf622
	ble.n 0xaf634	@ 000af622 07dd
.org 0xaf624
	ldrb r1, [r4, #17]	@ 000af624 617c
.org 0xaf626
	movs r2, #163	@ 000af626 a322
.org 0xaf628
	lsls r2, r2, #8	@ 000af628 1202
.org 0xaf62a
	adds r0, r2, #0	@ 000af62a 101c
.org 0xaf62c
	orrs r1, r0	@ 000af62c 0143
.org 0xaf62e
	adds r0, r4, #0	@ 000af62e 201c
.org 0xaf630
	bl 0x1cf00	@ 000af630 6df766fc
.org 0xaf634
	ldr r2, [pc, #80]	@ 000af634 144a
.org 0xaf636
	ldrb r1, [r4, #10]	@ 000af636 a17a
.org 0xaf638
	movs r0, #16	@ 000af638 1020
.org 0xaf63a
	ands r0, r1	@ 000af63a 0840
.org 0xaf63c
	lsls r0, r0, #24	@ 000af63c 0006
.org 0xaf63e
	lsrs r0, r0, #24	@ 000af63e 000e
.org 0xaf640
	negs r0, r0	@ 000af640 4042
.org 0xaf642
	asrs r0, r0, #31	@ 000af642 c017
.org 0xaf644
	movs r1, #4	@ 000af644 0421
.org 0xaf646
	ands r0, r1	@ 000af646 0840
.org 0xaf648
	adds r0, r0, r2	@ 000af648 8018
.org 0xaf64a
	ldr r1, [r0, #0]	@ 000af64a 0168
.org 0xaf64c
	lsls r1, r1, #8	@ 000af64c 0902
.org 0xaf64e
	ldr r0, [r4, #84]	@ 000af64e 606d
.org 0xaf650
	adds r0, r0, r1	@ 000af650 4018
.org 0xaf652
	ldr r1, [r4, #88]	@ 000af652 a16d
.org 0xaf654
	bl 0x7c7c	@ 000af654 58f712fb
.org 0xaf658
	lsls r0, r0, #16	@ 000af658 0004
.org 0xaf65a
	lsrs r2, r0, #16	@ 000af65a 020c
.org 0xaf65c
	cmp r2, #0	@ 000af65c 002a
.org 0xaf65e
	beq.n 0xaf676	@ 000af65e 0ad0
.org 0xaf660
	cmp r2, #15	@ 000af660 0f2a
.org 0xaf662
	beq.n 0xaf676	@ 000af662 08d0
.org 0xaf664
	ldr r1, [pc, #36]	@ 000af664 0949
.org 0xaf666
	ldrb r0, [r4, #9]	@ 000af666 607a
.org 0xaf668
	lsls r0, r0, #2	@ 000af668 8000
.org 0xaf66a
	adds r0, r0, r1	@ 000af66a 4018
.org 0xaf66c
	movs r1, #2	@ 000af66c 0221
.org 0xaf66e
	str r1, [r4, #12]	@ 000af66e e160
.org 0xaf670
	ldr r0, [r0, #0]	@ 000af670 0068
.org 0xaf672
	ldr r0, [r0, #8]	@ 000af672 8068
.org 0xaf674
	str r0, [r4, #20]	@ 000af674 6061
.org 0xaf676
	ldr r0, [r4, #84]	@ 000af676 606d
.org 0xaf678
	ldr r1, [r4, #92]	@ 000af678 e16d
.org 0xaf67a
	adds r0, r0, r1	@ 000af67a 4018
.org 0xaf67c
	str r0, [r4, #84]	@ 000af67c 6065
.org 0xaf67e
	pop {r4, r5}	@ 000af67e 30bc
.org 0xaf680
	pop {r0}	@ 000af680 01bc
.org 0xaf682
	bx r0	@ 000af682 0047
