@ FUN_080e75e8  entry 0x080e75e8  size 194
.thumb
.org 0xe75e8
FUN_080e75e8:
	push {r4, r5, r6, r7, lr}	@ 000e75e8 f0b5
.org 0xe75ea
	adds r4, r0, #0	@ 000e75ea 041c
.org 0xe75ec
	ldr r0, [r4, #84]	@ 000e75ec 606d
.org 0xe75ee
	ldr r1, [r4, #88]	@ 000e75ee a16d
.org 0xe75f0
	bl 0x8534	@ 000e75f0 20f7a0ff
.org 0xe75f4
	str r0, [r4, #88]	@ 000e75f4 a065
.org 0xe75f6
	ldrb r0, [r4, #17]	@ 000e75f6 607c
.org 0xe75f8
	cmp r0, #0	@ 000e75f8 0028
.org 0xe75fa
	beq.n 0xe76b0	@ 000e75fa 59d0
.org 0xe75fc
	cmp r0, #3	@ 000e75fc 0328
.org 0xe75fe
	bhi.n 0xe7618	@ 000e75fe 0bd8
.org 0xe7600
	ldr r0, [pc, #16]	@ 000e7600 0448
.org 0xe7602
	ldrb r1, [r4, #17]	@ 000e7602 617c
.org 0xe7604
	subs r1, #1	@ 000e7604 0139
.org 0xe7606
	lsls r1, r1, #1	@ 000e7606 4900
.org 0xe7608
	adds r1, r1, r0	@ 000e7608 0918
.org 0xe760a
	ldrh r1, [r1, #0]	@ 000e760a 0988
.org 0xe760c
	adds r0, r4, #0	@ 000e760c 201c
.org 0xe760e
	bl 0x1cf00	@ 000e760e 35f777fc
.org 0xe7612
	b.n 0xe762a	@ 000e7612 0ae0
.org 0xe7614
	.byte 0xb4,0x90,0x86,0x08	@ 000e7614 data
.org 0xe7618
	ldr r0, [pc, #128]	@ 000e7618 2048
.org 0xe761a
	ldrb r1, [r4, #17]	@ 000e761a 617c
.org 0xe761c
	subs r1, #4	@ 000e761c 0439
.org 0xe761e
	lsls r1, r1, #1	@ 000e761e 4900
.org 0xe7620
	adds r1, r1, r0	@ 000e7620 0918
.org 0xe7622
	ldrh r1, [r1, #0]	@ 000e7622 0988
.org 0xe7624
	adds r0, r4, #0	@ 000e7624 201c
.org 0xe7626
	bl 0x1cf00	@ 000e7626 35f76bfc
.org 0xe762a
	ldr r0, [pc, #116]	@ 000e762a 1d48
.org 0xe762c
	ldrb r1, [r4, #17]	@ 000e762c 617c
.org 0xe762e
	subs r1, #1	@ 000e762e 0139
.org 0xe7630
	lsls r1, r1, #2	@ 000e7630 8900
.org 0xe7632
	adds r1, r1, r0	@ 000e7632 0918
.org 0xe7634
	ldr r3, [pc, #108]	@ 000e7634 1b4b
.org 0xe7636
	ldr r0, [r3, #0]	@ 000e7636 1868
.org 0xe7638
	ldr r7, [pc, #108]	@ 000e7638 1b4f
.org 0xe763a
	muls r0, r7	@ 000e763a 7843
.org 0xe763c
	ldr r6, [pc, #108]	@ 000e763c 1b4e
.org 0xe763e
	adds r0, r0, r6	@ 000e763e 8019
.org 0xe7640
	lsls r0, r0, #1	@ 000e7640 4000
.org 0xe7642
	lsrs r2, r0, #1	@ 000e7642 4208
.org 0xe7644
	str r2, [r3, #0]	@ 000e7644 1a60
.org 0xe7646
	lsls r0, r0, #6	@ 000e7646 8001
.org 0xe7648
	lsrs r0, r0, #23	@ 000e7648 c00d
.org 0xe764a
	adds r0, #128	@ 000e764a 8030
.org 0xe764c
	ldr r1, [r1, #0]	@ 000e764c 0968
.org 0xe764e
	muls r0, r1	@ 000e764e 4843
.org 0xe7650
	cmp r0, #0	@ 000e7650 0028
.org 0xe7652
	bge.n 0xe7656	@ 000e7652 00da
.org 0xe7654
	adds r0, #255	@ 000e7654 ff30
.org 0xe7656
	asrs r5, r0, #8	@ 000e7656 0512
.org 0xe7658
	str r5, [r4, #92]	@ 000e7658 e565
.org 0xe765a
	adds r0, r2, #0	@ 000e765a 101c
.org 0xe765c
	muls r0, r7	@ 000e765c 7843
.org 0xe765e
	adds r0, r0, r6	@ 000e765e 8019
.org 0xe7660
	lsls r0, r0, #1	@ 000e7660 4000
.org 0xe7662
	lsrs r1, r0, #1	@ 000e7662 4108
.org 0xe7664
	str r1, [r3, #0]	@ 000e7664 1960
.org 0xe7666
	lsrs r0, r0, #17	@ 000e7666 400c
.org 0xe7668
	movs r1, #255	@ 000e7668 ff21
.org 0xe766a
	ands r0, r1	@ 000e766a 0840
.org 0xe766c
	movs r1, #128	@ 000e766c 8021
.org 0xe766e
	lsls r1, r1, #3	@ 000e766e c900
.org 0xe7670
	adds r0, r0, r1	@ 000e7670 4018
.org 0xe7672
	lsls r0, r0, #8	@ 000e7672 0002
.org 0xe7674
	negs r0, r0	@ 000e7674 4042
.org 0xe7676
	cmp r0, #0	@ 000e7676 0028
.org 0xe7678
	bge.n 0xe767c	@ 000e7678 00da
.org 0xe767a
	adds r0, #255	@ 000e767a ff30
.org 0xe767c
	asrs r0, r0, #8	@ 000e767c 0012
.org 0xe767e
	str r0, [r4, #96]	@ 000e767e 2066
.org 0xe7680
	ldrb r1, [r4, #10]	@ 000e7680 a17a
.org 0xe7682
	movs r0, #16	@ 000e7682 1020
.org 0xe7684
	ands r0, r1	@ 000e7684 0840
.org 0xe7686
	cmp r0, #0	@ 000e7686 0028
.org 0xe7688
	beq.n 0xe7698	@ 000e7688 06d0
.org 0xe768a
	lsls r0, r5, #8	@ 000e768a 2802
.org 0xe768c
	negs r0, r0	@ 000e768c 4042
.org 0xe768e
	cmp r0, #0	@ 000e768e 0028
.org 0xe7690
	bge.n 0xe7694	@ 000e7690 00da
.org 0xe7692
	adds r0, #255	@ 000e7692 ff30
.org 0xe7694
	asrs r0, r0, #8	@ 000e7694 0012
.org 0xe7696
	str r0, [r4, #92]	@ 000e7696 e065
.org 0xe7698
	movs r0, #1	@ 000e7698 0120
.org 0xe769a
	b.n 0xe76ba	@ 000e769a 0ee0
.org 0xe769c
	.byte 0xb4,0x90,0x86,0x08	@ 000e769c data
.org 0xe76a0
	.byte 0xbc,0x90,0x86,0x08	@ 000e76a0 data
.org 0xe76a4
	.byte 0x38,0xdc,0x02,0x02	@ 000e76a4 data
.org 0xe76a8
	.byte 0xfd,0x43,0x03,0x00	@ 000e76a8 data
