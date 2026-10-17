@ FUN_0808856c  entry 0x0808856c  size 122
.thumb
.org 0x8856c
FUN_0808856c:
	push {r4, r5, lr}	@ 0008856c 30b5
.org 0x8856e
	adds r4, r0, #0	@ 0008856e 041c
.org 0x88570
	ldrb r5, [r4, #15]	@ 00088570 e57b
.org 0x88572
	cmp r5, #0	@ 00088572 002d
.org 0x88574
	bne.n 0x88594	@ 00088574 0ed1
.org 0x88576
	adds r0, #116	@ 00088576 7430
.org 0x88578
	ldr r1, [pc, #68]	@ 00088578 1149
.org 0x8857a
	bl 0x5784	@ 0008857a 7df703f9
.org 0x8857e
	ldr r1, [pc, #68]	@ 0008857e 1149
.org 0x88580
	adds r0, r4, #0	@ 00088580 201c
.org 0x88582
	bl 0x1cf00	@ 00088582 94f7bdfc
.org 0x88586
	str r5, [r4, #92]	@ 00088586 e565
.org 0x88588
	str r5, [r4, #96]	@ 00088588 2566
.org 0x8858a
	movs r0, #1	@ 0008858a 0120
.org 0x8858c
	strb r0, [r4, #18]	@ 0008858c a074
.org 0x8858e
	ldrb r0, [r4, #15]	@ 0008858e e07b
.org 0x88590
	adds r0, #1	@ 00088590 0130
.org 0x88592
	strb r0, [r4, #15]	@ 00088592 e073
.org 0x88594
	adds r0, r4, #0	@ 00088594 201c
.org 0x88596
	bl 0x1d1f4	@ 00088596 94f72dfe
.org 0x8859a
	ldrb r0, [r4, #18]	@ 0008859a a07c
.org 0x8859c
	cmp r0, #0	@ 0008859c 0028
.org 0x8859e
	beq.n 0x885ae	@ 0008859e 06d0
.org 0x885a0
	adds r0, r4, #0	@ 000885a0 201c
.org 0x885a2
	bl 0x88c9c	@ 000885a2 00f07bfb
.org 0x885a6
	cmp r0, #0	@ 000885a6 0028
.org 0x885a8
	beq.n 0x885ae	@ 000885a8 01d0
.org 0x885aa
	movs r0, #0	@ 000885aa 0020
.org 0x885ac
	strb r0, [r4, #18]	@ 000885ac a074
.org 0x885ae
	ldr r1, [r4, #44]	@ 000885ae e16a
.org 0x885b0
	cmp r1, #0	@ 000885b0 0029
.org 0x885b2
	bne.n 0x885e8	@ 000885b2 19d1
.org 0x885b4
	ldrb r2, [r4, #18]	@ 000885b4 a27c
.org 0x885b6
	cmp r2, #0	@ 000885b6 002a
.org 0x885b8
	beq.n 0x885c8	@ 000885b8 06d0
.org 0x885ba
	movs r0, #1	@ 000885ba 0120
.org 0x885bc
	strb r0, [r4, #14]	@ 000885bc a073
.org 0x885be
	b.n 0x885e6	@ 000885be 12e0
.org 0x885c0
	.byte 0x7c,0xf0,0x85,0x08	@ 000885c0 data
.org 0x885c4
	.byte 0x0e,0x1d,0x00,0x00	@ 000885c4 data
.org 0x885c8
	ldrb r1, [r4, #10]	@ 000885c8 a17a
.org 0x885ca
	movs r0, #32	@ 000885ca 2020
.org 0x885cc
	ands r0, r1	@ 000885cc 0840
.org 0x885ce
	lsls r0, r0, #24	@ 000885ce 0006
.org 0x885d0
	lsrs r1, r0, #24	@ 000885d0 010e
.org 0x885d2
	cmp r1, #0	@ 000885d2 0029
.org 0x885d4
	beq.n 0x885e0	@ 000885d4 04d0
.org 0x885d6
	movs r0, #7	@ 000885d6 0720
.org 0x885d8
	strb r0, [r4, #13]	@ 000885d8 6073
.org 0x885da
	strb r2, [r4, #14]	@ 000885da a273
.org 0x885dc
	strb r2, [r4, #15]	@ 000885dc e273
.org 0x885de
	b.n 0x885e8	@ 000885de 03e0
.org 0x885e0
	movs r0, #8	@ 000885e0 0820
.org 0x885e2
	strb r0, [r4, #13]	@ 000885e2 6073
.org 0x885e4
	strb r1, [r4, #14]	@ 000885e4 a173
