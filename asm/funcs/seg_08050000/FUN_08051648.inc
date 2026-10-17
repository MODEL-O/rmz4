@ FUN_08051648  entry 0x08051648  size 152
.thumb
.org 0x51648
FUN_08051648:
	push {r4, lr}	@ 00051648 10b5
.org 0x5164a
	adds r4, r0, #0	@ 0005164a 041c
.org 0x5164c
	ldrb r0, [r4, #14]	@ 0005164c a07b
.org 0x5164e
	cmp r0, #0	@ 0005164e 0028
.org 0x51650
	bne.n 0x516ce	@ 00051650 3dd1
.org 0x51652
	adds r0, r4, #0	@ 00051652 201c
.org 0x51654
	adds r0, #116	@ 00051654 7430
.org 0x51656
	ldr r1, [pc, #80]	@ 00051656 1449
.org 0x51658
	bl 0x5784	@ 00051658 b4f794f8
.org 0x5165c
	ldr r1, [pc, #76]	@ 0005165c 1349
.org 0x5165e
	adds r0, r4, #0	@ 0005165e 201c
.org 0x51660
	bl 0x1cf00	@ 00051660 cbf74efc
.org 0x51664
	movs r3, #0	@ 00051664 0023
.org 0x51666
	ldr r0, [pc, #72]	@ 00051666 1248
.org 0x51668
	ldr r2, [r0, #0]	@ 00051668 0268
.org 0x5166a
	ldr r1, [r4, #84]	@ 0005166a 616d
.org 0x5166c
	ldr r0, [r2, #84]	@ 0005166c 506d
.org 0x5166e
	cmp r1, r0	@ 0005166e 8142
.org 0x51670
	bge.n 0x51674	@ 00051670 00da
.org 0x51672
	movs r3, #1	@ 00051672 0123
.org 0x51674
	adds r0, r4, #0	@ 00051674 201c
.org 0x51676
	adds r0, #76	@ 00051676 4c30
.org 0x51678
	strb r3, [r0, #0]	@ 00051678 0370
.org 0x5167a
	movs r3, #0	@ 0005167a 0023
.org 0x5167c
	ldr r1, [r4, #84]	@ 0005167c 616d
.org 0x5167e
	ldr r0, [r2, #84]	@ 0005167e 506d
.org 0x51680
	cmp r1, r0	@ 00051680 8142
.org 0x51682
	bge.n 0x51686	@ 00051682 00da
.org 0x51684
	movs r3, #1	@ 00051684 0123
.org 0x51686
	movs r0, #74	@ 00051686 4a20
.org 0x51688
	adds r0, r0, r4	@ 00051688 0019
.org 0x5168a
	mov ip, r0	@ 0005168a 8446
.org 0x5168c
	lsls r2, r3, #4	@ 0005168c 1a01
.org 0x5168e
	ldrb r1, [r0, #0]	@ 0005168e 0178
.org 0x51690
	movs r0, #17	@ 00051690 1120
.org 0x51692
	negs r0, r0	@ 00051692 4042
.org 0x51694
	ands r0, r1	@ 00051694 0840
.org 0x51696
	orrs r0, r2	@ 00051696 1043
.org 0x51698
	mov r1, ip	@ 00051698 6146
.org 0x5169a
	strb r0, [r1, #0]	@ 0005169a 0870
.org 0x5169c
	cmp r3, #0	@ 0005169c 002b
.org 0x5169e
	beq.n 0x516b4	@ 0005169e 09d0
.org 0x516a0
	ldrb r0, [r4, #10]	@ 000516a0 a07a
.org 0x516a2
	movs r1, #16	@ 000516a2 1021
.org 0x516a4
	orrs r0, r1	@ 000516a4 0843
.org 0x516a6
	b.n 0x516ba	@ 000516a6 08e0
.org 0x516a8
	.byte 0x54,0x7e,0x85,0x08	@ 000516a8 data
.org 0x516ac
	.byte 0x02,0xa1,0x00,0x00	@ 000516ac data
.org 0x516b0
	.byte 0xf0,0xdb,0x02,0x02	@ 000516b0 data
.org 0x516b4
	ldrb r1, [r4, #10]	@ 000516b4 a17a
.org 0x516b6
	movs r0, #239	@ 000516b6 ef20
.org 0x516b8
	ands r0, r1	@ 000516b8 0840
.org 0x516ba
	strb r0, [r4, #10]	@ 000516ba a072
.org 0x516bc
	movs r0, #228	@ 000516bc e420
.org 0x516be
	bl 0x2b5c	@ 000516be b1f74dfa
.org 0x516c2
	movs r0, #229	@ 000516c2 e520
.org 0x516c4
	bl 0x2b10	@ 000516c4 b1f724fa
.org 0x516c8
	ldrb r0, [r4, #14]	@ 000516c8 a07b
.org 0x516ca
	adds r0, #1	@ 000516ca 0130
.org 0x516cc
	strb r0, [r4, #14]	@ 000516cc a073
.org 0x516ce
	adds r0, r4, #0	@ 000516ce 201c
.org 0x516d0
	bl 0x1cff0	@ 000516d0 cbf78efc
.org 0x516d4
	adds r0, r4, #0	@ 000516d4 201c
.org 0x516d6
	adds r0, #115	@ 000516d6 7330
.org 0x516d8
	ldrb r0, [r0, #0]	@ 000516d8 0078
.org 0x516da
	cmp r0, #3	@ 000516da 0328
.org 0x516dc
	bne.n 0x516e6	@ 000516dc 03d1
.org 0x516de
	movs r1, #0	@ 000516de 0021
