@ FUN_080cc5a0  entry 0x080cc5a0  size 246
.thumb
.org 0xcc5a0
FUN_080cc5a0:
	push {r4, r5, lr}	@ 000cc5a0 30b5
.org 0xcc5a2
	adds r4, r0, #0	@ 000cc5a2 041c
.org 0xcc5a4
	ldr r5, [r4, #40]	@ 000cc5a4 a56a
.org 0xcc5a6
	bl 0x1cff0	@ 000cc5a6 50f723fd
.org 0xcc5aa
	ldr r0, [r4, #84]	@ 000cc5aa 606d
.org 0xcc5ac
	ldr r1, [r4, #92]	@ 000cc5ac e16d
.org 0xcc5ae
	adds r0, r0, r1	@ 000cc5ae 4018
.org 0xcc5b0
	str r0, [r4, #84]	@ 000cc5b0 6065
.org 0xcc5b2
	adds r2, r4, #0	@ 000cc5b2 221c
.org 0xcc5b4
	adds r2, #184	@ 000cc5b4 b832
.org 0xcc5b6
	ldr r1, [pc, #56]	@ 000cc5b6 0e49
.org 0xcc5b8
	ldrb r0, [r4, #18]	@ 000cc5b8 a07c
.org 0xcc5ba
	lsls r0, r0, #1	@ 000cc5ba 4000
.org 0xcc5bc
	adds r0, r0, r1	@ 000cc5bc 4018
.org 0xcc5be
	movs r1, #0	@ 000cc5be 0021
.org 0xcc5c0
	ldrsh r0, [r0, r1]	@ 000cc5c0 405e
.org 0xcc5c2
	lsls r1, r0, #1	@ 000cc5c2 4100
.org 0xcc5c4
	adds r1, r1, r0	@ 000cc5c4 0918
.org 0xcc5c6
	lsls r1, r1, #3	@ 000cc5c6 c900
.org 0xcc5c8
	ldr r0, [r2, #0]	@ 000cc5c8 1068
.org 0xcc5ca
	subs r0, r0, r1	@ 000cc5ca 401a
.org 0xcc5cc
	str r0, [r4, #88]	@ 000cc5cc a065
.org 0xcc5ce
	ldrb r0, [r4, #19]	@ 000cc5ce e07c
.org 0xcc5d0
	ldrb r1, [r4, #18]	@ 000cc5d0 a17c
.org 0xcc5d2
	adds r0, r0, r1	@ 000cc5d2 4018
.org 0xcc5d4
	strb r0, [r4, #18]	@ 000cc5d4 a074
.org 0xcc5d6
	ldrb r1, [r4, #13]	@ 000cc5d6 617b
.org 0xcc5d8
	adds r0, r1, #0	@ 000cc5d8 081c
.org 0xcc5da
	cmp r0, #0	@ 000cc5da 0028
.org 0xcc5dc
	bne.n 0xcc5f4	@ 000cc5dc 0ad1
.org 0xcc5de
	ldr r0, [r4, #100]	@ 000cc5de 606e
.org 0xcc5e0
	adds r0, #1	@ 000cc5e0 0130
.org 0xcc5e2
	str r0, [r4, #100]	@ 000cc5e2 6066
.org 0xcc5e4
	ldrb r0, [r5, #13]	@ 000cc5e4 687b
.org 0xcc5e6
	cmp r0, #11	@ 000cc5e6 0b28
.org 0xcc5e8
	beq.n 0xcc656	@ 000cc5e8 35d0
.org 0xcc5ea
	adds r0, r1, #1	@ 000cc5ea 481c
.org 0xcc5ec
	b.n 0xcc654	@ 000cc5ec 32e0
.org 0xcc5ee
	.byte 0x00	@ 000cc5ee data
.org 0xcc5ef
	.byte 0x00	@ 000cc5ef data
.org 0xcc5f0
	.byte 0x0c,0x93,0x12,0x08	@ 000cc5f0 data
.org 0xcc5f4
	cmp r0, #1	@ 000cc5f4 0128
.org 0xcc5f6
	beq.n 0xcc620	@ 000cc5f6 13d0
.org 0xcc5f8
	adds r0, r4, #0	@ 000cc5f8 201c
.org 0xcc5fa
	adds r0, #115	@ 000cc5fa 7330
.org 0xcc5fc
	ldrb r0, [r0, #0]	@ 000cc5fc 0078
.org 0xcc5fe
	cmp r0, #3	@ 000cc5fe 0328
.org 0xcc600
	bne.n 0xcc656	@ 000cc600 29d1
.org 0xcc602
	ldr r1, [pc, #24]	@ 000cc602 0649
.org 0xcc604
	ldrb r0, [r4, #9]	@ 000cc604 607a
.org 0xcc606
	lsls r0, r0, #2	@ 000cc606 8000
.org 0xcc608
	adds r0, r0, r1	@ 000cc608 4018
.org 0xcc60a
	movs r1, #2	@ 000cc60a 0221
.org 0xcc60c
	str r1, [r4, #12]	@ 000cc60c e160
.org 0xcc60e
	ldr r0, [r0, #0]	@ 000cc60e 0068
.org 0xcc610
	ldr r0, [r0, #8]	@ 000cc610 8068
.org 0xcc612
	str r0, [r4, #20]	@ 000cc612 6061
.org 0xcc614
	adds r0, r4, #0	@ 000cc614 201c
.org 0xcc616
	bl 0xcc0bc	@ 000cc616 fff751fd
.org 0xcc61a
	b.n 0xcc69a	@ 000cc61a 3ee0
.org 0xcc61c
	.byte 0xf4,0x49,0x86,0x08	@ 000cc61c data
.org 0xcc620
	ldr r0, [r4, #100]	@ 000cc620 606e
.org 0xcc622
	asrs r5, r0, #3	@ 000cc622 c510
.org 0xcc624
	subs r0, #1	@ 000cc624 0138
.org 0xcc626
	str r0, [r4, #100]	@ 000cc626 6066
.org 0xcc628
	cmp r5, #0	@ 000cc628 002d
.org 0xcc62a
	bne.n 0xcc656	@ 000cc62a 14d1
.org 0xcc62c
	ldr r1, [pc, #112]	@ 000cc62c 1c49
.org 0xcc62e
	adds r0, r4, #0	@ 000cc62e 201c
.org 0xcc630
	bl 0x1cf00	@ 000cc630 50f766fc
.org 0xcc634
	adds r0, r4, #0	@ 000cc634 201c
.org 0xcc636
	bl 0x1cff0	@ 000cc636 50f7dbfc
.org 0xcc63a
	adds r0, r4, #0	@ 000cc63a 201c
.org 0xcc63c
	adds r0, #140	@ 000cc63c 8c30
.org 0xcc63e
	str r5, [r0, #0]	@ 000cc63e 0560
.org 0xcc640
	adds r0, #4	@ 000cc640 0430
.org 0xcc642
	str r5, [r0, #0]	@ 000cc642 0560
.org 0xcc644
	adds r0, #4	@ 000cc644 0430
.org 0xcc646
	strb r5, [r0, #0]	@ 000cc646 0570
.org 0xcc648
	ldrb r1, [r4, #10]	@ 000cc648 a17a
.org 0xcc64a
	movs r0, #251	@ 000cc64a fb20
.org 0xcc64c
	ands r0, r1	@ 000cc64c 0840
.org 0xcc64e
	strb r0, [r4, #10]	@ 000cc64e a072
.org 0xcc650
	ldrb r0, [r4, #13]	@ 000cc650 607b
.org 0xcc652
	adds r0, #1	@ 000cc652 0130
.org 0xcc654
	strb r0, [r4, #13]	@ 000cc654 6073
.org 0xcc656
	ldr r0, [r4, #84]	@ 000cc656 606d
.org 0xcc658
	ldr r1, [r4, #88]	@ 000cc658 a16d
.org 0xcc65a
	bl 0x7c7c	@ 000cc65a 3bf70ffb
.org 0xcc65e
	lsls r0, r0, #16	@ 000cc65e 0004
.org 0xcc660
	cmp r0, #0	@ 000cc660 0028
.org 0xcc662
	beq.n 0xcc69a	@ 000cc662 1ad0
.org 0xcc664
	ldrb r1, [r4, #10]	@ 000cc664 a17a
.org 0xcc666
	movs r0, #254	@ 000cc666 fe20
.org 0xcc668
	ands r0, r1	@ 000cc668 0840
.org 0xcc66a
	movs r2, #0	@ 000cc66a 0022
.org 0xcc66c
	movs r1, #253	@ 000cc66c fd21
.org 0xcc66e
	ands r0, r1	@ 000cc66e 0840
.org 0xcc670
	strb r0, [r4, #10]	@ 000cc670 a072
.org 0xcc672
	adds r0, r4, #0	@ 000cc672 201c
.org 0xcc674
	adds r0, #140	@ 000cc674 8c30
.org 0xcc676
	str r2, [r0, #0]	@ 000cc676 0260
.org 0xcc678
	adds r0, #4	@ 000cc678 0430
.org 0xcc67a
	str r2, [r0, #0]	@ 000cc67a 0260
.org 0xcc67c
	adds r0, #4	@ 000cc67c 0430
.org 0xcc67e
	strb r2, [r0, #0]	@ 000cc67e 0270
.org 0xcc680
	ldrb r1, [r4, #10]	@ 000cc680 a17a
.org 0xcc682
	movs r0, #251	@ 000cc682 fb20
.org 0xcc684
	ands r0, r1	@ 000cc684 0840
.org 0xcc686
	strb r0, [r4, #10]	@ 000cc686 a072
.org 0xcc688
	ldr r1, [pc, #24]	@ 000cc688 0649
.org 0xcc68a
	ldrb r0, [r4, #9]	@ 000cc68a 607a
.org 0xcc68c
	lsls r0, r0, #2	@ 000cc68c 8000
.org 0xcc68e
	adds r0, r0, r1	@ 000cc68e 4018
.org 0xcc690
	movs r1, #3	@ 000cc690 0321
.org 0xcc692
	str r1, [r4, #12]	@ 000cc692 e160
.org 0xcc694
	ldr r0, [r0, #0]	@ 000cc694 0068
