@ FUN_080ba65c  entry 0x080ba65c  size 176
.thumb
.org 0xba65c
FUN_080ba65c:
	push {r4, r5, r6, r7, lr}	@ 000ba65c f0b5
.org 0xba65e
	adds r7, r0, #0	@ 000ba65e 071c
.org 0xba660
	movs r5, #0	@ 000ba660 0025
.org 0xba662
	ldr r1, [pc, #168]	@ 000ba662 2a49
.org 0xba664
	ldrb r0, [r7, #9]	@ 000ba664 787a
.org 0xba666
	lsls r0, r0, #2	@ 000ba666 8000
.org 0xba668
	adds r0, r0, r1	@ 000ba668 4018
.org 0xba66a
	movs r6, #1	@ 000ba66a 0126
.org 0xba66c
	str r6, [r7, #12]	@ 000ba66c fe60
.org 0xba66e
	ldr r0, [r0, #0]	@ 000ba66e 0068
.org 0xba670
	ldr r0, [r0, #4]	@ 000ba670 4068
.org 0xba672
	str r0, [r7, #20]	@ 000ba672 7861
.org 0xba674
	strb r5, [r7, #13]	@ 000ba674 7d73
.org 0xba676
	strb r5, [r7, #14]	@ 000ba676 bd73
.org 0xba678
	strb r5, [r7, #15]	@ 000ba678 fd73
.org 0xba67a
	ldrb r0, [r7, #10]	@ 000ba67a b87a
.org 0xba67c
	movs r1, #1	@ 000ba67c 0121
.org 0xba67e
	orrs r0, r1	@ 000ba67e 0843
.org 0xba680
	movs r1, #2	@ 000ba680 0221
.org 0xba682
	orrs r0, r1	@ 000ba682 0843
.org 0xba684
	strb r0, [r7, #10]	@ 000ba684 b872
.org 0xba686
	ldr r0, [pc, #136]	@ 000ba686 2248
.org 0xba688
	ldr r1, [pc, #136]	@ 000ba688 2249
.org 0xba68a
	movs r4, #182	@ 000ba68a b624
.org 0xba68c
	lsls r4, r4, #1	@ 000ba68c 6400
.org 0xba68e
	adds r1, r1, r4	@ 000ba68e 0919
.org 0xba690
	ldrh r1, [r1, #0]	@ 000ba690 0988
.org 0xba692
	ldrh r2, [r0, #6]	@ 000ba692 c288
.org 0xba694
	lsrs r2, r2, #6	@ 000ba694 9209
.org 0xba696
	subs r1, r1, r2	@ 000ba696 891a
.org 0xba698
	lsls r1, r1, #5	@ 000ba698 4901
.org 0xba69a
	movs r2, #128	@ 000ba69a 8022
.org 0xba69c
	lsls r2, r2, #9	@ 000ba69c 5202
.org 0xba69e
	adds r1, r1, r2	@ 000ba69e 8918
.org 0xba6a0
	bl 0x1d30	@ 000ba6a0 47f746fb
.org 0xba6a4
	ldr r0, [pc, #112]	@ 000ba6a4 1c48
.org 0xba6a6
	ldr r1, [pc, #116]	@ 000ba6a6 1d49
.org 0xba6a8
	adds r1, r1, r4	@ 000ba6a8 0919
.org 0xba6aa
	ldrh r1, [r1, #0]	@ 000ba6aa 0988
.org 0xba6ac
	ldrb r2, [r0, #7]	@ 000ba6ac c279
.org 0xba6ae
	subs r1, r1, r2	@ 000ba6ae 891a
.org 0xba6b0
	lsls r1, r1, #5	@ 000ba6b0 4901
.org 0xba6b2
	movs r2, #128	@ 000ba6b2 8022
.org 0xba6b4
	lsls r2, r2, #2	@ 000ba6b4 9200
.org 0xba6b6
	adds r1, r1, r2	@ 000ba6b6 8918
.org 0xba6b8
	bl 0x2208	@ 000ba6b8 47f7a6fd
.org 0xba6bc
	adds r0, r7, #0	@ 000ba6bc 381c
.org 0xba6be
	bl 0x1cc9c	@ 000ba6be 62f7edfa
.org 0xba6c2
	adds r0, r7, #0	@ 000ba6c2 381c
.org 0xba6c4
	adds r0, #37	@ 000ba6c4 2530
.org 0xba6c6
	strb r6, [r0, #0]	@ 000ba6c6 0670
.org 0xba6c8
	ldrb r1, [r7, #10]	@ 000ba6c8 b97a
.org 0xba6ca
	movs r0, #239	@ 000ba6ca ef20
.org 0xba6cc
	ands r0, r1	@ 000ba6cc 0840
.org 0xba6ce
	strb r0, [r7, #10]	@ 000ba6ce b872
.org 0xba6d0
	adds r0, r7, #0	@ 000ba6d0 381c
.org 0xba6d2
	adds r0, #76	@ 000ba6d2 4c30
.org 0xba6d4
	strb r5, [r0, #0]	@ 000ba6d4 0570
.org 0xba6d6
	adds r2, r7, #0	@ 000ba6d6 3a1c
.org 0xba6d8
	adds r2, #74	@ 000ba6d8 4a32
.org 0xba6da
	ldrb r1, [r2, #0]	@ 000ba6da 1178
.org 0xba6dc
	movs r0, #17	@ 000ba6dc 1120
.org 0xba6de
	negs r0, r0	@ 000ba6de 4042
.org 0xba6e0
	ands r0, r1	@ 000ba6e0 0840
.org 0xba6e2
	strb r0, [r2, #0]	@ 000ba6e2 1070
.org 0xba6e4
	ldrb r1, [r7, #10]	@ 000ba6e4 b97a
.org 0xba6e6
	movs r0, #4	@ 000ba6e6 0420
.org 0xba6e8
	orrs r0, r1	@ 000ba6e8 0843
.org 0xba6ea
	strb r0, [r7, #10]	@ 000ba6ea b872
.org 0xba6ec
	adds r4, r7, #0	@ 000ba6ec 3c1c
.org 0xba6ee
	adds r4, #116	@ 000ba6ee 7434
.org 0xba6f0
	ldr r1, [pc, #44]	@ 000ba6f0 0b49
.org 0xba6f2
	adds r2, #10	@ 000ba6f2 0a32
.org 0xba6f4
	adds r0, r4, #0	@ 000ba6f4 201c
.org 0xba6f6
	movs r3, #64	@ 000ba6f6 4023
.org 0xba6f8
	bl 0x5760	@ 000ba6f8 4bf732f8
.org 0xba6fc
	str r7, [r4, #44]	@ 000ba6fc e762
.org 0xba6fe
	str r5, [r4, #36]	@ 000ba6fe 6562
.org 0xba700
	adds r0, r7, #0	@ 000ba700 381c
.org 0xba702
	bl 0xba724	@ 000ba702 00f00ff8
.org 0xba706
	pop {r4, r5, r6, r7}	@ 000ba706 f0bc
.org 0xba708
	pop {r0}	@ 000ba708 01bc
.org 0xba70a
	bx r0	@ 000ba70a 0047
