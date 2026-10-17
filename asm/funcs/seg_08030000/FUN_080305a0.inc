@ FUN_080305a0  entry 0x080305a0  size 334
.thumb
.org 0x305a0
FUN_080305a0:
	push {r4, r5, r6, lr}	@ 000305a0 70b5
.org 0x305a2
	adds r4, r0, #0	@ 000305a2 041c
.org 0x305a4
	ldr r1, [pc, #20]	@ 000305a4 0549
.org 0x305a6
	adds r0, r4, r1	@ 000305a6 6018
.org 0x305a8
	ldrb r5, [r0, #0]	@ 000305a8 0578
.org 0x305aa
	cmp r5, #0	@ 000305aa 002d
.org 0x305ac
	beq.n 0x305c0	@ 000305ac 08d0
.org 0x305ae
	movs r1, #0	@ 000305ae 0021
.org 0x305b0
	movs r0, #7	@ 000305b0 0720
.org 0x305b2
	strb r0, [r4, #13]	@ 000305b2 6073
.org 0x305b4
	strb r1, [r4, #14]	@ 000305b4 a173
.org 0x305b6
	strb r1, [r4, #15]	@ 000305b6 e173
.org 0x305b8
	b.n 0x30702	@ 000305b8 a3e0
.org 0x305ba
	.byte 0x00	@ 000305ba data
.org 0x305bb
	.byte 0x00	@ 000305bb data
.org 0x305bc
	.byte 0x43,0x01,0x00,0x00	@ 000305bc data
.org 0x305c0
	movs r2, #150	@ 000305c0 9622
.org 0x305c2
	lsls r2, r2, #2	@ 000305c2 9200
.org 0x305c4
	adds r0, r4, r2	@ 000305c4 a018
.org 0x305c6
	ldr r0, [r0, #0]	@ 000305c6 0068
.org 0x305c8
	movs r6, #1	@ 000305c8 0126
.org 0x305ca
	ands r0, r6	@ 000305ca 3040
.org 0x305cc
	cmp r0, #0	@ 000305cc 0028
.org 0x305ce
	beq.n 0x305fc	@ 000305ce 15d0
.org 0x305d0
	movs r1, #186	@ 000305d0 ba21
.org 0x305d2
	lsls r1, r1, #1	@ 000305d2 4900
.org 0x305d4
	adds r0, r4, r1	@ 000305d4 6018
.org 0x305d6
	ldrb r1, [r0, #0]	@ 000305d6 0178
.org 0x305d8
	lsls r1, r1, #3	@ 000305d8 c900
.org 0x305da
	ldr r0, [pc, #28]	@ 000305da 0748
.org 0x305dc
	adds r1, r1, r0	@ 000305dc 0918
.org 0x305de
	adds r0, r4, #0	@ 000305de 201c
.org 0x305e0
	movs r2, #0	@ 000305e0 0022
.org 0x305e2
	bl 0x2b7f0	@ 000305e2 fbf705f9
.org 0x305e6
	strb r6, [r4, #13]	@ 000305e6 6673
.org 0x305e8
	strb r5, [r4, #14]	@ 000305e8 a573
.org 0x305ea
	movs r0, #3	@ 000305ea 0320
.org 0x305ec
	strb r0, [r4, #15]	@ 000305ec e073
.org 0x305ee
	adds r0, r4, #0	@ 000305ee 201c
.org 0x305f0
	bl 0x383f0	@ 000305f0 07f0fefe
.org 0x305f4
	b.n 0x30702	@ 000305f4 85e0
.org 0x305f6
	.byte 0x00	@ 000305f6 data
.org 0x305f7
	.byte 0x00	@ 000305f7 data
.org 0x305f8
	.byte 0x6c,0x33,0x85,0x08	@ 000305f8 data
.org 0x305fc
	ldr r6, [pc, #56]	@ 000305fc 0e4e
.org 0x305fe
	adds r0, r4, #0	@ 000305fe 201c
.org 0x30600
	adds r1, r6, #0	@ 00030600 311c
.org 0x30602
	movs r2, #0	@ 00030602 0022
.org 0x30604
	bl 0x2c670	@ 00030604 fcf734f8
.org 0x30608
	lsls r0, r0, #24	@ 00030608 0006
.org 0x3060a
	lsrs r5, r0, #24	@ 0003060a 050e
.org 0x3060c
	cmp r5, #0	@ 0003060c 002d
.org 0x3060e
	beq.n 0x30620	@ 0003060e 07d0
.org 0x30610
	adds r0, r4, #0	@ 00030610 201c
.org 0x30612
	adds r1, r6, #0	@ 00030612 311c
.org 0x30614
	movs r2, #0	@ 00030614 0022
.org 0x30616
	bl 0x2c62c	@ 00030616 fcf709f8
.org 0x3061a
	lsls r0, r0, #24	@ 0003061a 0006
.org 0x3061c
	cmp r0, #0	@ 0003061c 0028
.org 0x3061e
	bne.n 0x30702	@ 0003061e 70d1
.org 0x30620
	cmp r5, #1	@ 00030620 012d
.org 0x30622
	bne.n 0x3064e	@ 00030622 14d1
.org 0x30624
	ldrb r1, [r4, #10]	@ 00030624 a17a
.org 0x30626
	movs r0, #16	@ 00030626 1020
.org 0x30628
	ands r0, r1	@ 00030628 0840
.org 0x3062a
	cmp r0, #0	@ 0003062a 0028
.org 0x3062c
	beq.n 0x3063c	@ 0003062c 06d0
.org 0x3062e
	ldr r0, [r4, #84]	@ 0003062e 606d
.org 0x30630
	movs r2, #128	@ 00030630 8022
.org 0x30632
	lsls r2, r2, #4	@ 00030632 1201
.org 0x30634
	adds r0, r0, r2	@ 00030634 8018
.org 0x30636
	b.n 0x30642	@ 00030636 04e0
.org 0x30638
	.byte 0x7c,0x33,0x85,0x08	@ 00030638 data
.org 0x3063c
	ldr r0, [r4, #84]	@ 0003063c 606d
.org 0x3063e
	ldr r1, [pc, #108]	@ 0003063e 1b49
.org 0x30640
	adds r0, r0, r1	@ 00030640 4018
.org 0x30642
	str r0, [r4, #84]	@ 00030642 6065
.org 0x30644
	ldr r1, [pc, #104]	@ 00030644 1a49
.org 0x30646
	adds r0, r4, #0	@ 00030646 201c
.org 0x30648
	movs r2, #0	@ 00030648 0022
.org 0x3064a
	bl 0x2b7f0	@ 0003064a fbf7d1f8
.org 0x3064e
	ldrb r1, [r4, #30]	@ 0003064e a17f
.org 0x30650
	lsls r1, r1, #8	@ 00030650 0902
.org 0x30652
	adds r0, r4, #0	@ 00030652 201c
.org 0x30654
	adds r0, #112	@ 00030654 7030
.org 0x30656
	ldrb r0, [r0, #0]	@ 00030656 0078
.org 0x30658
	orrs r0, r1	@ 00030658 0843
.org 0x3065a
	movs r1, #160	@ 0003065a a021
.org 0x3065c
	lsls r1, r1, #3	@ 0003065c c900
.org 0x3065e
	cmp r0, r1	@ 0003065e 8842
.org 0x30660
	bne.n 0x306b4	@ 00030660 28d1
.org 0x30662
	adds r0, r4, #0	@ 00030662 201c
.org 0x30664
	adds r0, #113	@ 00030664 7130
.org 0x30666
	ldrb r0, [r0, #0]	@ 00030666 0078
.org 0x30668
	lsls r0, r0, #24	@ 00030668 0006
.org 0x3066a
	asrs r0, r0, #24	@ 0003066a 0016
.org 0x3066c
	cmp r0, #2	@ 0003066c 0228
.org 0x3066e
	ble.n 0x306f6	@ 0003066e 42dd
.org 0x30670
	ldrb r0, [r4, #10]	@ 00030670 a07a
.org 0x30672
	lsrs r0, r0, #4	@ 00030672 0009
.org 0x30674
	movs r2, #1	@ 00030674 0122
.org 0x30676
	eors r0, r2	@ 00030676 5040
.org 0x30678
	ands r0, r2	@ 00030678 1040
.org 0x3067a
	adds r1, r4, #0	@ 0003067a 211c
.org 0x3067c
	adds r1, #76	@ 0003067c 4c31
.org 0x3067e
	strb r0, [r1, #0]	@ 0003067e 0870
.org 0x30680
	ldrb r1, [r4, #10]	@ 00030680 a17a
.org 0x30682
	lsrs r1, r1, #4	@ 00030682 0909
.org 0x30684
	eors r1, r2	@ 00030684 5140
.org 0x30686
	ands r1, r2	@ 00030686 1140
.org 0x30688
	movs r2, #74	@ 00030688 4a22
.org 0x3068a
	adds r2, r2, r4	@ 0003068a 1219
.org 0x3068c
	mov ip, r2	@ 0003068c 9446
.org 0x3068e
	lsls r3, r1, #4	@ 0003068e 0b01
.org 0x30690
	ldrb r2, [r2, #0]	@ 00030690 1278
.org 0x30692
	movs r0, #17	@ 00030692 1120
.org 0x30694
	negs r0, r0	@ 00030694 4042
.org 0x30696
	ands r0, r2	@ 00030696 1040
.org 0x30698
	orrs r0, r3	@ 00030698 1843
.org 0x3069a
	mov r2, ip	@ 0003069a 6246
.org 0x3069c
	strb r0, [r2, #0]	@ 0003069c 1070
.org 0x3069e
	cmp r1, #0	@ 0003069e 0029
.org 0x306a0
	beq.n 0x306ee	@ 000306a0 25d0
.org 0x306a2
	ldrb r0, [r4, #10]	@ 000306a2 a07a
.org 0x306a4
	movs r1, #16	@ 000306a4 1021
.org 0x306a6
	orrs r0, r1	@ 000306a6 0843
.org 0x306a8
	b.n 0x306f4	@ 000306a8 24e0
.org 0x306aa
	.byte 0x00	@ 000306aa data
.org 0x306ab
	.byte 0x00	@ 000306ab data
.org 0x306ac
	.byte 0x00,0xf8,0xff,0xff	@ 000306ac data
.org 0x306b0
	.byte 0x6c,0x33,0x85,0x08	@ 000306b0 data
.org 0x306b4
	ldrb r0, [r4, #10]	@ 000306b4 a07a
.org 0x306b6
	lsrs r0, r0, #4	@ 000306b6 0009
.org 0x306b8
	movs r2, #1	@ 000306b8 0122
.org 0x306ba
	eors r0, r2	@ 000306ba 5040
.org 0x306bc
	ands r0, r2	@ 000306bc 1040
.org 0x306be
	adds r1, r4, #0	@ 000306be 211c
.org 0x306c0
	adds r1, #76	@ 000306c0 4c31
.org 0x306c2
	strb r0, [r1, #0]	@ 000306c2 0870
.org 0x306c4
	ldrb r1, [r4, #10]	@ 000306c4 a17a
.org 0x306c6
	lsrs r1, r1, #4	@ 000306c6 0909
.org 0x306c8
	eors r1, r2	@ 000306c8 5140
.org 0x306ca
	ands r1, r2	@ 000306ca 1140
.org 0x306cc
	movs r0, #74	@ 000306cc 4a20
.org 0x306ce
	adds r0, r0, r4	@ 000306ce 0019
.org 0x306d0
	mov ip, r0	@ 000306d0 8446
.org 0x306d2
	lsls r3, r1, #4	@ 000306d2 0b01
.org 0x306d4
	ldrb r2, [r0, #0]	@ 000306d4 0278
.org 0x306d6
	movs r0, #17	@ 000306d6 1120
.org 0x306d8
	negs r0, r0	@ 000306d8 4042
.org 0x306da
	ands r0, r2	@ 000306da 1040
.org 0x306dc
	orrs r0, r3	@ 000306dc 1843
.org 0x306de
	mov r2, ip	@ 000306de 6246
.org 0x306e0
	strb r0, [r2, #0]	@ 000306e0 1070
.org 0x306e2
	cmp r1, #0	@ 000306e2 0029
.org 0x306e4
	beq.n 0x306ee	@ 000306e4 03d0
.org 0x306e6
	ldrb r0, [r4, #10]	@ 000306e6 a07a
.org 0x306e8
	movs r1, #16	@ 000306e8 1021
.org 0x306ea
	orrs r0, r1	@ 000306ea 0843
.org 0x306ec
	b.n 0x306f4	@ 000306ec 02e0
