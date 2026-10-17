@ FUN_08057610  entry 0x08057610  size 268
.thumb
.org 0x57610
FUN_08057610:
	push {r4, r5, r6, lr}	@ 00057610 70b5
.org 0x57612
	sub sp, #16	@ 00057612 84b0
.org 0x57614
	adds r4, r0, #0	@ 00057614 041c
.org 0x57616
	ldrb r0, [r4, #10]	@ 00057616 a07a
.org 0x57618
	lsrs r5, r0, #4	@ 00057618 0509
.org 0x5761a
	movs r0, #1	@ 0005761a 0120
.org 0x5761c
	ands r5, r0	@ 0005761c 0540
.org 0x5761e
	ldrb r0, [r4, #15]	@ 0005761e e07b
.org 0x57620
	cmp r0, #0	@ 00057620 0028
.org 0x57622
	bne.n 0x576b0	@ 00057622 45d1
.org 0x57624
	movs r0, #252	@ 00057624 fc20
.org 0x57626
	bl 0x2b10	@ 00057626 abf773fa
.org 0x5762a
	adds r0, r4, #0	@ 0005762a 201c
.org 0x5762c
	bl 0x5977c	@ 0005762c 02f0a6f8
.org 0x57630
	adds r6, r0, #0	@ 00057630 061c
.org 0x57632
	ldr r1, [pc, #232]	@ 00057632 3a49
.org 0x57634
	lsls r0, r6, #1	@ 00057634 7000
.org 0x57636
	adds r0, r0, r1	@ 00057636 4018
.org 0x57638
	ldrh r6, [r0, #0]	@ 00057638 0688
.org 0x5763a
	adds r0, r4, #0	@ 0005763a 201c
.org 0x5763c
	bl 0x59a9c	@ 0005763c 02f02efa
.org 0x57640
	lsls r0, r0, #24	@ 00057640 0006
.org 0x57642
	lsls r1, r5, #1	@ 00057642 6900
.org 0x57644
	subs r1, #1	@ 00057644 0139
.org 0x57646
	lsls r2, r1, #1	@ 00057646 4a00
.org 0x57648
	adds r2, r2, r1	@ 00057648 5218
.org 0x5764a
	lsls r2, r2, #10	@ 0005764a 9202
.org 0x5764c
	ldr r1, [r4, #84]	@ 0005764c 616d
.org 0x5764e
	adds r1, r1, r2	@ 0005764e 8918
.org 0x57650
	str r1, [sp, #0]	@ 00057650 0091
.org 0x57652
	ldr r1, [r4, #88]	@ 00057652 a16d
.org 0x57654
	ldr r2, [pc, #200]	@ 00057654 324a
.org 0x57656
	adds r1, r1, r2	@ 00057656 8918
.org 0x57658
	str r1, [sp, #4]	@ 00057658 0191
.org 0x5765a
	ldr r1, [pc, #200]	@ 0005765a 3249
.org 0x5765c
	lsrs r2, r0, #24	@ 0005765c 020e
.org 0x5765e
	movs r3, #128	@ 0005765e 8023
.org 0x57660
	lsls r3, r3, #23	@ 00057660 db05
.org 0x57662
	adds r0, r0, r3	@ 00057662 c018
.org 0x57664
	lsrs r0, r0, #23	@ 00057664 c00d
.org 0x57666
	adds r0, r0, r1	@ 00057666 4018
.org 0x57668
	movs r3, #0	@ 00057668 0023
.org 0x5766a
	ldrsh r0, [r0, r3]	@ 0005766a c05e
.org 0x5766c
	muls r0, r6	@ 0005766c 7043
.org 0x5766e
	cmp r0, #0	@ 0005766e 0028
.org 0x57670
	bge.n 0x57674	@ 00057670 00da
.org 0x57672
	adds r0, #255	@ 00057672 ff30
.org 0x57674
	asrs r0, r0, #8	@ 00057674 0012
.org 0x57676
	str r0, [sp, #8]	@ 00057676 0290
.org 0x57678
	lsls r0, r2, #1	@ 00057678 5000
.org 0x5767a
	adds r0, r0, r1	@ 0005767a 4018
.org 0x5767c
	movs r1, #0	@ 0005767c 0021
.org 0x5767e
	ldrsh r0, [r0, r1]	@ 0005767e 405e
.org 0x57680
	muls r0, r6	@ 00057680 7043
.org 0x57682
	cmp r0, #0	@ 00057682 0028
.org 0x57684
	bge.n 0x57688	@ 00057684 00da
.org 0x57686
	adds r0, #255	@ 00057686 ff30
.org 0x57688
	asrs r0, r0, #8	@ 00057688 0012
.org 0x5768a
	add r2, sp, #8	@ 0005768a 02aa
.org 0x5768c
	str r0, [r2, #4]	@ 0005768c 5060
.org 0x5768e
	adds r0, r4, #0	@ 0005768e 201c
.org 0x57690
	mov r1, sp	@ 00057690 6946
.org 0x57692
	movs r3, #1	@ 00057692 0123
.org 0x57694
	bl 0xc0d28	@ 00057694 69f048fb
.org 0x57698
	adds r1, r4, #0	@ 00057698 211c
.org 0x5769a
	adds r1, #216	@ 0005769a d831
.org 0x5769c
	str r0, [r1, #0]	@ 0005769c 0860
.org 0x5769e
	ldr r1, [pc, #136]	@ 0005769e 2249
.org 0x576a0
	adds r0, r4, #0	@ 000576a0 201c
.org 0x576a2
	bl 0x1cf00	@ 000576a2 c5f72dfc
.org 0x576a6
	movs r0, #24	@ 000576a6 1820
.org 0x576a8
	strb r0, [r4, #18]	@ 000576a8 a074
.org 0x576aa
	ldrb r0, [r4, #15]	@ 000576aa e07b
.org 0x576ac
	adds r0, #1	@ 000576ac 0130
.org 0x576ae
	strb r0, [r4, #15]	@ 000576ae e073
.org 0x576b0
	adds r0, r4, #0	@ 000576b0 201c
.org 0x576b2
	bl 0x1cff0	@ 000576b2 c5f79dfc
.org 0x576b6
	adds r0, r4, #0	@ 000576b6 201c
.org 0x576b8
	adds r0, #116	@ 000576b8 7430
.org 0x576ba
	ldr r3, [pc, #112]	@ 000576ba 1c4b
.org 0x576bc
	ldrb r1, [r4, #30]	@ 000576bc a17f
.org 0x576be
	lsls r1, r1, #8	@ 000576be 0902
.org 0x576c0
	adds r2, r4, #0	@ 000576c0 221c
.org 0x576c2
	adds r2, #112	@ 000576c2 7032
.org 0x576c4
	ldrb r2, [r2, #0]	@ 000576c4 1278
.org 0x576c6
	orrs r1, r2	@ 000576c6 1143
.org 0x576c8
	ldr r2, [pc, #100]	@ 000576c8 194a
.org 0x576ca
	adds r1, r1, r2	@ 000576ca 8918
.org 0x576cc
	lsls r1, r1, #2	@ 000576cc 8900
.org 0x576ce
	adds r1, r1, r3	@ 000576ce c918
.org 0x576d0
	adds r2, r4, #0	@ 000576d0 221c
.org 0x576d2
	adds r2, #113	@ 000576d2 7132
.org 0x576d4
	ldrb r2, [r2, #0]	@ 000576d4 1278
.org 0x576d6
	lsls r2, r2, #24	@ 000576d6 1206
.org 0x576d8
	asrs r2, r2, #24	@ 000576d8 1216
.org 0x576da
	ldr r1, [r1, #0]	@ 000576da 0968
.org 0x576dc
	lsls r2, r2, #2	@ 000576dc 9200
.org 0x576de
	adds r2, r2, r1	@ 000576de 5218
.org 0x576e0
	ldr r1, [r2, #0]	@ 000576e0 1168
.org 0x576e2
	ldrb r2, [r1, #0]	@ 000576e2 0a78
.org 0x576e4
	lsls r1, r2, #1	@ 000576e4 5100
.org 0x576e6
	adds r1, r1, r2	@ 000576e6 8918
.org 0x576e8
	lsls r1, r1, #3	@ 000576e8 c900
.org 0x576ea
	ldr r2, [pc, #72]	@ 000576ea 124a
.org 0x576ec
	adds r1, r1, r2	@ 000576ec 8918
.org 0x576ee
	bl 0x5784	@ 000576ee aef749f8
.org 0x576f2
	ldrb r0, [r4, #18]	@ 000576f2 a07c
.org 0x576f4
	cmp r0, #0	@ 000576f4 0028
.org 0x576f6
	beq.n 0x57702	@ 000576f6 04d0
.org 0x576f8
	subs r0, #1	@ 000576f8 0138
.org 0x576fa
	strb r0, [r4, #18]	@ 000576fa a074
.org 0x576fc
	lsls r0, r0, #24	@ 000576fc 0006
.org 0x576fe
	cmp r0, #0	@ 000576fe 0028
.org 0x57700
	bne.n 0x57714	@ 00057700 08d1
.org 0x57702
	adds r0, r4, #0	@ 00057702 201c
.org 0x57704
	adds r0, #115	@ 00057704 7330
.org 0x57706
	ldrb r0, [r0, #0]	@ 00057706 0078
.org 0x57708
	cmp r0, #3	@ 00057708 0328
.org 0x5770a
	bne.n 0x57714	@ 0005770a 03d1
.org 0x5770c
	movs r1, #0	@ 0005770c 0021
.org 0x5770e
	movs r0, #8	@ 0005770e 0820
.org 0x57710
	strb r0, [r4, #14]	@ 00057710 a073
.org 0x57712
	strb r1, [r4, #15]	@ 00057712 e173
.org 0x57714
	add sp, #16	@ 00057714 04b0
.org 0x57716
	pop {r4, r5, r6}	@ 00057716 70bc
.org 0x57718
	pop {r0}	@ 00057718 01bc
.org 0x5771a
	bx r0	@ 0005771a 0047
