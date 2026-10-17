@ FUN_08081598  entry 0x08081598  size 242
.thumb
.org 0x81598
FUN_08081598:
	push {r4, r5, r6, r7, lr}	@ 00081598 f0b5
.org 0x8159a
	sub sp, #32	@ 0008159a 88b0
.org 0x8159c
	adds r6, r0, #0	@ 0008159c 061c
.org 0x8159e
	ldrb r0, [r6, #15]	@ 0008159e f07b
.org 0x815a0
	cmp r0, #0	@ 000815a0 0028
.org 0x815a2
	bne.n 0x81626	@ 000815a2 40d1
.org 0x815a4
	mov r1, sp	@ 000815a4 6946
.org 0x815a6
	ldr r0, [pc, #72]	@ 000815a6 1248
.org 0x815a8
	ldmia r0!, {r2, r3, r4}	@ 000815a8 1cc8
.org 0x815aa
	stmia r1!, {r2, r3, r4}	@ 000815aa 1cc1
.org 0x815ac
	ldr r0, [r0, #0]	@ 000815ac 0068
.org 0x815ae
	str r0, [r1, #0]	@ 000815ae 0860
.org 0x815b0
	add r4, sp, #16	@ 000815b0 04ac
.org 0x815b2
	adds r1, r4, #0	@ 000815b2 211c
.org 0x815b4
	ldr r0, [pc, #60]	@ 000815b4 0f48
.org 0x815b6
	ldmia r0!, {r2, r3, r5}	@ 000815b6 2cc8
.org 0x815b8
	stmia r1!, {r2, r3, r5}	@ 000815b8 2cc1
.org 0x815ba
	ldr r0, [r0, #0]	@ 000815ba 0068
.org 0x815bc
	str r0, [r1, #0]	@ 000815bc 0860
.org 0x815be
	ldrb r1, [r6, #10]	@ 000815be b17a
.org 0x815c0
	movs r0, #1	@ 000815c0 0120
.org 0x815c2
	movs r7, #0	@ 000815c2 0027
.org 0x815c4
	orrs r0, r1	@ 000815c4 0843
.org 0x815c6
	strb r0, [r6, #10]	@ 000815c6 b072
.org 0x815c8
	adds r5, r6, #0	@ 000815c8 351c
.org 0x815ca
	adds r5, #180	@ 000815ca b435
.org 0x815cc
	ldrb r0, [r5, #0]	@ 000815cc 2878
.org 0x815ce
	lsls r0, r0, #2	@ 000815ce 8000
.org 0x815d0
	add r0, sp	@ 000815d0 6844
.org 0x815d2
	ldrh r1, [r0, #0]	@ 000815d2 0188
.org 0x815d4
	adds r0, r6, #0	@ 000815d4 301c
.org 0x815d6
	bl 0x1cf00	@ 000815d6 9bf793fc
.org 0x815da
	ldrb r0, [r5, #0]	@ 000815da 2878
.org 0x815dc
	lsls r0, r0, #2	@ 000815dc 8000
.org 0x815de
	adds r4, r4, r0	@ 000815de 2418
.org 0x815e0
	ldrb r2, [r4, #0]	@ 000815e0 2278
.org 0x815e2
	cmp r2, #0	@ 000815e2 002a
.org 0x815e4
	beq.n 0x815f8	@ 000815e4 08d0
.org 0x815e6
	ldrb r0, [r6, #10]	@ 000815e6 b07a
.org 0x815e8
	movs r1, #16	@ 000815e8 1021
.org 0x815ea
	orrs r0, r1	@ 000815ea 0843
.org 0x815ec
	b.n 0x815fe	@ 000815ec 07e0
.org 0x815ee
	.byte 0x00	@ 000815ee data
.org 0x815ef
	.byte 0x00	@ 000815ef data
.org 0x815f0
	.byte 0x84,0x9a,0x12,0x08	@ 000815f0 data
.org 0x815f4
	.byte 0x94,0x9a,0x12,0x08	@ 000815f4 data
.org 0x815f8
	ldrb r1, [r6, #10]	@ 000815f8 b17a
.org 0x815fa
	movs r0, #239	@ 000815fa ef20
.org 0x815fc
	ands r0, r1	@ 000815fc 0840
.org 0x815fe
	strb r0, [r6, #10]	@ 000815fe b072
.org 0x81600
	movs r1, #1	@ 00081600 0121
.org 0x81602
	ands r1, r2	@ 00081602 1140
.org 0x81604
	adds r0, r6, #0	@ 00081604 301c
.org 0x81606
	adds r0, #76	@ 00081606 4c30
.org 0x81608
	strb r1, [r0, #0]	@ 00081608 0170
.org 0x8160a
	adds r3, r6, #0	@ 0008160a 331c
.org 0x8160c
	adds r3, #74	@ 0008160c 4a33
.org 0x8160e
	lsls r1, r1, #4	@ 0008160e 0901
.org 0x81610
	ldrb r2, [r3, #0]	@ 00081610 1a78
.org 0x81612
	movs r0, #17	@ 00081612 1120
.org 0x81614
	negs r0, r0	@ 00081614 4042
.org 0x81616
	ands r0, r2	@ 00081616 1040
.org 0x81618
	orrs r0, r1	@ 00081618 0843
.org 0x8161a
	strb r0, [r3, #0]	@ 0008161a 1870
.org 0x8161c
	movs r0, #32	@ 0008161c 2020
.org 0x8161e
	strb r0, [r6, #18]	@ 0008161e b074
.org 0x81620
	ldrb r0, [r6, #15]	@ 00081620 f07b
.org 0x81622
	adds r0, #1	@ 00081622 0130
.org 0x81624
	strb r0, [r6, #15]	@ 00081624 f073
.org 0x81626
	adds r0, r6, #0	@ 00081626 301c
.org 0x81628
	bl 0x1cff0	@ 00081628 9bf7e2fc
.org 0x8162c
	ldrb r0, [r6, #13]	@ 0008162c 707b
.org 0x8162e
	cmp r0, #0	@ 0008162e 0028
.org 0x81630
	beq.n 0x81678	@ 00081630 22d0
.org 0x81632
	adds r0, r6, #0	@ 00081632 301c
.org 0x81634
	adds r0, #116	@ 00081634 7430
.org 0x81636
	ldr r4, [pc, #56]	@ 00081636 0e4c
.org 0x81638
	adds r1, r6, #0	@ 00081638 311c
.org 0x8163a
	adds r1, #181	@ 0008163a b531
.org 0x8163c
	ldrb r3, [r1, #0]	@ 0008163c 0b78
.org 0x8163e
	lsls r3, r3, #2	@ 0008163e 9b00
.org 0x81640
	ldrb r1, [r6, #30]	@ 00081640 b17f
.org 0x81642
	lsls r1, r1, #8	@ 00081642 0902
.org 0x81644
	adds r2, r6, #0	@ 00081644 321c
.org 0x81646
	adds r2, #112	@ 00081646 7032
.org 0x81648
	ldrb r2, [r2, #0]	@ 00081648 1278
.org 0x8164a
	orrs r1, r2	@ 0008164a 1143
.org 0x8164c
	ldr r5, [pc, #36]	@ 0008164c 094d
.org 0x8164e
	adds r1, r1, r5	@ 0008164e 4919
.org 0x81650
	lsls r1, r1, #3	@ 00081650 c900
.org 0x81652
	adds r3, r3, r1	@ 00081652 5b18
.org 0x81654
	adds r3, r3, r4	@ 00081654 1b19
.org 0x81656
	adds r1, r6, #0	@ 00081656 311c
.org 0x81658
	adds r1, #113	@ 00081658 7131
.org 0x8165a
	ldrb r1, [r1, #0]	@ 0008165a 0978
.org 0x8165c
	lsls r1, r1, #24	@ 0008165c 0906
.org 0x8165e
	asrs r1, r1, #24	@ 0008165e 0916
.org 0x81660
	ldr r2, [r3, #0]	@ 00081660 1a68
.org 0x81662
	lsls r1, r1, #2	@ 00081662 8900
.org 0x81664
	adds r1, r1, r2	@ 00081664 8918
.org 0x81666
	ldr r1, [r1, #0]	@ 00081666 0968
.org 0x81668
	bl 0x5784	@ 00081668 84f78cf8
.org 0x8166c
	b.n 0x81682	@ 0008166c 09e0
.org 0x8166e
	.byte 0x00	@ 0008166e data
.org 0x8166f
	.byte 0x00	@ 0008166f data
.org 0x81670
	.byte 0x1c,0xe7,0x85,0x08	@ 00081670 data
.org 0x81674
	.byte 0x00,0xe9,0xff,0xff	@ 00081674 data
.org 0x81678
	adds r0, r6, #0	@ 00081678 301c
.org 0x8167a
	adds r0, #116	@ 0008167a 7430
.org 0x8167c
	ldr r1, [pc, #32]	@ 0008167c 0849
.org 0x8167e
	bl 0x5784	@ 0008167e 84f781f8
.org 0x81682
	ldrb r0, [r6, #18]	@ 00081682 b07c
.org 0x81684
	subs r0, #1	@ 00081684 0138
.org 0x81686
	strb r0, [r6, #18]	@ 00081686 b074
.org 0x81688
	lsls r0, r0, #24	@ 00081688 0006
