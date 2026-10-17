@ FUN_080ae5a8  entry 0x080ae5a8  size 226
.thumb
.org 0xae5a8
FUN_080ae5a8:
	push {r4, r5, lr}	@ 000ae5a8 30b5
.org 0xae5aa
	adds r4, r0, #0	@ 000ae5aa 041c
.org 0xae5ac
	ldr r5, [r4, #40]	@ 000ae5ac a56a
.org 0xae5ae
	ldrb r0, [r4, #14]	@ 000ae5ae a07b
.org 0xae5b0
	cmp r0, #0	@ 000ae5b0 0028
.org 0xae5b2
	bne.n 0xae61a	@ 000ae5b2 32d1
.org 0xae5b4
	adds r0, r4, #0	@ 000ae5b4 201c
.org 0xae5b6
	bl 0x1cc9c	@ 000ae5b6 6ef771fb
.org 0xae5ba
	ldrb r1, [r4, #10]	@ 000ae5ba a17a
.org 0xae5bc
	movs r0, #1	@ 000ae5bc 0120
.org 0xae5be
	orrs r0, r1	@ 000ae5be 0843
.org 0xae5c0
	strb r0, [r4, #10]	@ 000ae5c0 a072
.org 0xae5c2
	movs r1, #162	@ 000ae5c2 a221
.org 0xae5c4
	lsls r1, r1, #8	@ 000ae5c4 0902
.org 0xae5c6
	adds r0, r4, #0	@ 000ae5c6 201c
.org 0xae5c8
	bl 0x1cf00	@ 000ae5c8 6ef79afc
.org 0xae5cc
	adds r0, r4, #0	@ 000ae5cc 201c
.org 0xae5ce
	adds r0, #116	@ 000ae5ce 7430
.org 0xae5d0
	ldr r1, [pc, #140]	@ 000ae5d0 2349
.org 0xae5d2
	bl 0x5784	@ 000ae5d2 57f7d7f8
.org 0xae5d6
	ldr r0, [r5, #84]	@ 000ae5d6 686d
.org 0xae5d8
	ldr r1, [pc, #136]	@ 000ae5d8 2249
.org 0xae5da
	adds r0, r0, r1	@ 000ae5da 4018
.org 0xae5dc
	str r0, [r4, #84]	@ 000ae5dc 6065
.org 0xae5de
	ldr r0, [r5, #88]	@ 000ae5de a86d
.org 0xae5e0
	ldr r2, [pc, #132]	@ 000ae5e0 214a
.org 0xae5e2
	adds r0, r0, r2	@ 000ae5e2 8018
.org 0xae5e4
	str r0, [r4, #88]	@ 000ae5e4 a065
.org 0xae5e6
	ldr r2, [pc, #132]	@ 000ae5e6 214a
.org 0xae5e8
	adds r3, r4, #0	@ 000ae5e8 231c
.org 0xae5ea
	adds r3, #190	@ 000ae5ea be33
.org 0xae5ec
	ldrb r0, [r3, #0]	@ 000ae5ec 1878
.org 0xae5ee
	adds r0, #64	@ 000ae5ee 4030
.org 0xae5f0
	lsls r0, r0, #24	@ 000ae5f0 0006
.org 0xae5f2
	lsrs r0, r0, #23	@ 000ae5f2 c00d
.org 0xae5f4
	adds r0, r0, r2	@ 000ae5f4 8018
.org 0xae5f6
	movs r5, #0	@ 000ae5f6 0025
.org 0xae5f8
	ldrsh r1, [r0, r5]	@ 000ae5f8 415f
.org 0xae5fa
	lsls r0, r1, #3	@ 000ae5fa c800
.org 0xae5fc
	subs r0, r0, r1	@ 000ae5fc 401a
.org 0xae5fe
	asrs r0, r0, #1	@ 000ae5fe 4010
.org 0xae600
	str r0, [r4, #92]	@ 000ae600 e065
.org 0xae602
	ldrb r0, [r3, #0]	@ 000ae602 1878
.org 0xae604
	lsls r0, r0, #1	@ 000ae604 4000
.org 0xae606
	adds r0, r0, r2	@ 000ae606 8018
.org 0xae608
	movs r2, #0	@ 000ae608 0022
.org 0xae60a
	ldrsh r1, [r0, r2]	@ 000ae60a 815e
.org 0xae60c
	lsls r0, r1, #3	@ 000ae60c c800
.org 0xae60e
	subs r0, r0, r1	@ 000ae60e 401a
.org 0xae610
	asrs r0, r0, #1	@ 000ae610 4010
.org 0xae612
	str r0, [r4, #96]	@ 000ae612 2066
.org 0xae614
	ldrb r0, [r4, #14]	@ 000ae614 a07b
.org 0xae616
	adds r0, #1	@ 000ae616 0130
.org 0xae618
	strb r0, [r4, #14]	@ 000ae618 a073
.org 0xae61a
	adds r0, r4, #0	@ 000ae61a 201c
.org 0xae61c
	bl 0x1cff0	@ 000ae61c 6ef7e8fc
.org 0xae620
	ldr r0, [r4, #84]	@ 000ae620 606d
.org 0xae622
	ldr r1, [r4, #92]	@ 000ae622 e16d
.org 0xae624
	adds r0, r0, r1	@ 000ae624 4018
.org 0xae626
	str r0, [r4, #84]	@ 000ae626 6065
.org 0xae628
	ldr r0, [r4, #88]	@ 000ae628 a06d
.org 0xae62a
	ldr r1, [r4, #96]	@ 000ae62a 216e
.org 0xae62c
	adds r0, r0, r1	@ 000ae62c 4018
.org 0xae62e
	str r0, [r4, #88]	@ 000ae62e a065
.org 0xae630
	adds r0, r4, #0	@ 000ae630 201c
.org 0xae632
	adds r0, #140	@ 000ae632 8c30
.org 0xae634
	ldr r0, [r0, #0]	@ 000ae634 0068
.org 0xae636
	movs r1, #1	@ 000ae636 0121
.org 0xae638
	ands r0, r1	@ 000ae638 0840
.org 0xae63a
	cmp r0, #0	@ 000ae63a 0028
.org 0xae63c
	beq.n 0xae670	@ 000ae63c 18d0
.org 0xae63e
	adds r0, r4, #0	@ 000ae63e 201c
.org 0xae640
	adds r0, #151	@ 000ae640 9730
.org 0xae642
	ldrb r1, [r0, #0]	@ 000ae642 0178
.org 0xae644
	movs r0, #240	@ 000ae644 f020
.org 0xae646
	ands r0, r1	@ 000ae646 0840
.org 0xae648
	cmp r0, #48	@ 000ae648 3028
.org 0xae64a
	bne.n 0xae670	@ 000ae64a 11d1
.org 0xae64c
	movs r0, #64	@ 000ae64c 4020
.org 0xae64e
	bl 0x2b10	@ 000ae64e 54f75ffa
.org 0xae652
	ldrb r0, [r4, #13]	@ 000ae652 607b
.org 0xae654
	adds r0, #1	@ 000ae654 0130
.org 0xae656
	movs r1, #0	@ 000ae656 0021
.org 0xae658
	strb r0, [r4, #13]	@ 000ae658 6073
.org 0xae65a
	strb r1, [r4, #14]	@ 000ae65a a173
.org 0xae65c
	b.n 0xae696	@ 000ae65c 1be0
.org 0xae65e
	.byte 0x00	@ 000ae65e data
.org 0xae65f
	.byte 0x00	@ 000ae65f data
.org 0xae660
	.byte 0x18,0x2f,0x86,0x08	@ 000ae660 data
.org 0xae664
	.byte 0x00,0x98,0xff,0xff	@ 000ae664 data
.org 0xae668
	.byte 0x00,0xbe,0xff,0xff	@ 000ae668 data
.org 0xae66c
	.byte 0x0c,0x93,0x12,0x08	@ 000ae66c data
.org 0xae670
	ldr r0, [r4, #84]	@ 000ae670 606d
.org 0xae672
	ldr r1, [r4, #88]	@ 000ae672 a16d
.org 0xae674
	bl 0x7020	@ 000ae674 58f7d4fc
.org 0xae678
	lsls r0, r0, #16	@ 000ae678 0004
.org 0xae67a
	cmp r0, #0	@ 000ae67a 0028
.org 0xae67c
	beq.n 0xae696	@ 000ae67c 0bd0
.org 0xae67e
	ldr r1, [pc, #28]	@ 000ae67e 0749
.org 0xae680
	ldrb r0, [r4, #9]	@ 000ae680 607a
.org 0xae682
	lsls r0, r0, #2	@ 000ae682 8000
.org 0xae684
	adds r0, r0, r1	@ 000ae684 4018
.org 0xae686
	movs r1, #2	@ 000ae686 0221
.org 0xae688
	str r1, [r4, #12]	@ 000ae688 e160
