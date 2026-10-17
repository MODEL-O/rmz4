@ FUN_080d8638  entry 0x080d8638  size 202
.thumb
.org 0xd8638
FUN_080d8638:
	push {r4, r5, r6, lr}	@ 000d8638 70b5
.org 0xd863a
	adds r4, r0, #0	@ 000d863a 041c
.org 0xd863c
	ldrb r0, [r4, #17]	@ 000d863c 607c
.org 0xd863e
	movs r1, #1	@ 000d863e 0121
.org 0xd8640
	movs r3, #1	@ 000d8640 0123
.org 0xd8642
	adds r5, r3, #0	@ 000d8642 1d1c
.org 0xd8644
	ands r5, r0	@ 000d8644 0540
.org 0xd8646
	lsrs r6, r0, #1	@ 000d8646 4608
.org 0xd8648
	ands r6, r1	@ 000d8648 0e40
.org 0xd864a
	ldr r2, [pc, #40]	@ 000d864a 0a4a
.org 0xd864c
	ldrb r0, [r4, #9]	@ 000d864c 607a
.org 0xd864e
	lsls r0, r0, #2	@ 000d864e 8000
.org 0xd8650
	adds r0, r0, r2	@ 000d8650 8018
.org 0xd8652
	str r3, [r4, #12]	@ 000d8652 e360
.org 0xd8654
	ldr r0, [r0, #0]	@ 000d8654 0068
.org 0xd8656
	ldr r0, [r0, #4]	@ 000d8656 4068
.org 0xd8658
	str r0, [r4, #20]	@ 000d8658 6061
.org 0xd865a
	ldrb r0, [r4, #10]	@ 000d865a a07a
.org 0xd865c
	orrs r1, r0	@ 000d865c 0143
.org 0xd865e
	movs r0, #2	@ 000d865e 0220
.org 0xd8660
	orrs r1, r0	@ 000d8660 0143
.org 0xd8662
	strb r1, [r4, #10]	@ 000d8662 a172
.org 0xd8664
	cmp r6, #0	@ 000d8664 002e
.org 0xd8666
	beq.n 0xd8678	@ 000d8666 07d0
.org 0xd8668
	lsls r0, r5, #1	@ 000d8668 6800
.org 0xd866a
	subs r0, r3, r0	@ 000d866a 181a
.org 0xd866c
	lsls r0, r0, #6	@ 000d866c 8001
.org 0xd866e
	str r0, [r4, #92]	@ 000d866e e065
.org 0xd8670
	movs r0, #0	@ 000d8670 0020
.org 0xd8672
	b.n 0xd8682	@ 000d8672 06e0
.org 0xd8674
	.byte 0x64,0x6f,0x86,0x08	@ 000d8674 data
.org 0xd8678
	lsls r0, r5, #1	@ 000d8678 6800
.org 0xd867a
	subs r0, r3, r0	@ 000d867a 181a
.org 0xd867c
	lsls r0, r0, #6	@ 000d867c 8001
.org 0xd867e
	str r0, [r4, #92]	@ 000d867e e065
.org 0xd8680
	ldr r0, [pc, #40]	@ 000d8680 0a48
.org 0xd8682
	str r0, [r4, #96]	@ 000d8682 2066
.org 0xd8684
	movs r0, #255	@ 000d8684 ff20
.org 0xd8686
	strb r0, [r4, #18]	@ 000d8686 a074
.org 0xd8688
	adds r0, r4, #0	@ 000d8688 201c
.org 0xd868a
	adds r0, #116	@ 000d868a 7430
.org 0xd868c
	strb r5, [r0, #0]	@ 000d868c 0570
.org 0xd868e
	adds r0, r4, #0	@ 000d868e 201c
.org 0xd8690
	bl 0x1cc9c	@ 000d8690 44f704fb
.org 0xd8694
	ldr r1, [pc, #24]	@ 000d8694 0649
.org 0xd8696
	adds r0, r4, #0	@ 000d8696 201c
.org 0xd8698
	bl 0x1cf00	@ 000d8698 44f732fc
.org 0xd869c
	adds r2, r5, #0	@ 000d869c 2a1c
.org 0xd869e
	cmp r2, #0	@ 000d869e 002a
.org 0xd86a0
	beq.n 0xd86b4	@ 000d86a0 08d0
.org 0xd86a2
	ldrb r0, [r4, #10]	@ 000d86a2 a07a
.org 0xd86a4
	movs r1, #16	@ 000d86a4 1021
.org 0xd86a6
	orrs r0, r1	@ 000d86a6 0843
.org 0xd86a8
	b.n 0xd86ba	@ 000d86a8 07e0
.org 0xd86aa
	.byte 0x00	@ 000d86aa data
.org 0xd86ab
	.byte 0x00	@ 000d86ab data
.org 0xd86ac
	.byte 0xc0,0xfe,0xff,0xff	@ 000d86ac data
.org 0xd86b0
	.byte 0x13,0x1d,0x00,0x00	@ 000d86b0 data
.org 0xd86b4
	ldrb r1, [r4, #10]	@ 000d86b4 a17a
.org 0xd86b6
	movs r0, #239	@ 000d86b6 ef20
.org 0xd86b8
	ands r0, r1	@ 000d86b8 0840
.org 0xd86ba
	strb r0, [r4, #10]	@ 000d86ba a072
.org 0xd86bc
	adds r1, r2, #0	@ 000d86bc 111c
.org 0xd86be
	adds r0, r4, #0	@ 000d86be 201c
.org 0xd86c0
	adds r0, #76	@ 000d86c0 4c30
.org 0xd86c2
	strb r1, [r0, #0]	@ 000d86c2 0170
.org 0xd86c4
	adds r2, r4, #0	@ 000d86c4 221c
.org 0xd86c6
	adds r2, #74	@ 000d86c6 4a32
.org 0xd86c8
	lsls r1, r1, #4	@ 000d86c8 0901
.org 0xd86ca
	ldrb r3, [r2, #0]	@ 000d86ca 1378
.org 0xd86cc
	movs r0, #17	@ 000d86cc 1120
.org 0xd86ce
	negs r0, r0	@ 000d86ce 4042
.org 0xd86d0
	ands r0, r3	@ 000d86d0 1840
.org 0xd86d2
	orrs r0, r1	@ 000d86d2 0843
.org 0xd86d4
	strb r0, [r2, #0]	@ 000d86d4 1070
.org 0xd86d6
	adds r3, r6, #0	@ 000d86d6 331c
.org 0xd86d8
	adds r5, r2, #0	@ 000d86d8 151c
.org 0xd86da
	cmp r3, #0	@ 000d86da 002b
.org 0xd86dc
	beq.n 0xd86e6	@ 000d86dc 03d0
.org 0xd86de
	ldrb r0, [r4, #10]	@ 000d86de a07a
.org 0xd86e0
	movs r1, #32	@ 000d86e0 2021
.org 0xd86e2
	orrs r0, r1	@ 000d86e2 0843
.org 0xd86e4
	b.n 0xd86ec	@ 000d86e4 02e0
.org 0xd86e6
	ldrb r1, [r4, #10]	@ 000d86e6 a17a
.org 0xd86e8
	movs r0, #223	@ 000d86e8 df20
.org 0xd86ea
	ands r0, r1	@ 000d86ea 0840
.org 0xd86ec
	strb r0, [r4, #10]	@ 000d86ec a072
.org 0xd86ee
	adds r0, r3, #0	@ 000d86ee 181c
.org 0xd86f0
	adds r2, r4, #0	@ 000d86f0 221c
.org 0xd86f2
	adds r2, #77	@ 000d86f2 4d32
.org 0xd86f4
	strb r0, [r2, #0]	@ 000d86f4 1070
.org 0xd86f6
	lsls r0, r0, #5	@ 000d86f6 4001
.org 0xd86f8
	ldrb r2, [r5, #0]	@ 000d86f8 2a78
.org 0xd86fa
	movs r1, #33	@ 000d86fa 2121
.org 0xd86fc
	negs r1, r1	@ 000d86fc 4942
.org 0xd86fe
	ands r1, r2	@ 000d86fe 1140
.org 0xd8700
	orrs r1, r0	@ 000d8700 0143
