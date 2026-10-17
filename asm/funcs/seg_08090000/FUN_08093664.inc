@ FUN_08093664  entry 0x08093664  size 138
.thumb
.org 0x93664
FUN_08093664:
	push {r4, r5, lr}	@ 00093664 30b5
.org 0x93666
	adds r4, r0, #0	@ 00093666 041c
.org 0x93668
	ldrb r0, [r4, #10]	@ 00093668 a07a
.org 0x9366a
	lsrs r5, r0, #4	@ 0009366a 0509
.org 0x9366c
	movs r0, #1	@ 0009366c 0120
.org 0x9366e
	ands r5, r0	@ 0009366e 0540
.org 0x93670
	ldrb r0, [r4, #15]	@ 00093670 e07b
.org 0x93672
	cmp r0, #0	@ 00093672 0028
.org 0x93674
	bne.n 0x936cc	@ 00093674 2ad1
.org 0x93676
	adds r0, r4, #0	@ 00093676 201c
.org 0x93678
	adds r0, #116	@ 00093678 7430
.org 0x9367a
	ldr r1, [pc, #32]	@ 0009367a 0849
.org 0x9367c
	bl 0x5784	@ 0009367c 72f782f8
.org 0x93680
	movs r1, #128	@ 00093680 8021
.org 0x93682
	lsls r1, r1, #7	@ 00093682 c901
.org 0x93684
	adds r0, r4, #0	@ 00093684 201c
.org 0x93686
	bl 0x1cf00	@ 00093686 89f73bfc
.org 0x9368a
	adds r2, r5, #1	@ 0009368a 6a1c
.org 0x9368c
	movs r0, #1	@ 0009368c 0120
.org 0x9368e
	ands r2, r0	@ 0009368e 0240
.org 0x93690
	cmp r2, #0	@ 00093690 002a
.org 0x93692
	beq.n 0x936a0	@ 00093692 05d0
.org 0x93694
	ldrb r1, [r4, #10]	@ 00093694 a17a
.org 0x93696
	movs r0, #16	@ 00093696 1020
.org 0x93698
	orrs r0, r1	@ 00093698 0843
.org 0x9369a
	b.n 0x936a6	@ 0009369a 04e0
.org 0x9369c
	.byte 0x94,0x05,0x86,0x08	@ 0009369c data
.org 0x936a0
	ldrb r1, [r4, #10]	@ 000936a0 a17a
.org 0x936a2
	movs r0, #239	@ 000936a2 ef20
.org 0x936a4
	ands r0, r1	@ 000936a4 0840
.org 0x936a6
	strb r0, [r4, #10]	@ 000936a6 a072
.org 0x936a8
	adds r1, r2, #0	@ 000936a8 111c
.org 0x936aa
	adds r0, r4, #0	@ 000936aa 201c
.org 0x936ac
	adds r0, #76	@ 000936ac 4c30
.org 0x936ae
	strb r1, [r0, #0]	@ 000936ae 0170
.org 0x936b0
	adds r3, r4, #0	@ 000936b0 231c
.org 0x936b2
	adds r3, #74	@ 000936b2 4a33
.org 0x936b4
	lsls r1, r1, #4	@ 000936b4 0901
.org 0x936b6
	ldrb r2, [r3, #0]	@ 000936b6 1a78
.org 0x936b8
	movs r0, #17	@ 000936b8 1120
.org 0x936ba
	negs r0, r0	@ 000936ba 4042
.org 0x936bc
	ands r0, r2	@ 000936bc 1040
.org 0x936be
	orrs r0, r1	@ 000936be 0843
.org 0x936c0
	strb r0, [r3, #0]	@ 000936c0 1870
.org 0x936c2
	movs r0, #8	@ 000936c2 0820
.org 0x936c4
	strb r0, [r4, #18]	@ 000936c4 a074
.org 0x936c6
	ldrb r0, [r4, #15]	@ 000936c6 e07b
.org 0x936c8
	adds r0, #1	@ 000936c8 0130
.org 0x936ca
	strb r0, [r4, #15]	@ 000936ca e073
.org 0x936cc
	adds r0, r4, #0	@ 000936cc 201c
.org 0x936ce
	bl 0x1cff0	@ 000936ce 89f78ffc
.org 0x936d2
	adds r0, r4, #0	@ 000936d2 201c
.org 0x936d4
	bl 0x94a38	@ 000936d4 01f0b0f9
.org 0x936d8
	ldrb r0, [r4, #18]	@ 000936d8 a07c
.org 0x936da
	subs r0, #1	@ 000936da 0138
.org 0x936dc
	strb r0, [r4, #18]	@ 000936dc a074
.org 0x936de
	lsls r0, r0, #24	@ 000936de 0006
.org 0x936e0
	lsrs r0, r0, #24	@ 000936e0 000e
.org 0x936e2
	cmp r0, #0	@ 000936e2 0028
.org 0x936e4
	bne.n 0x936ec	@ 000936e4 02d1
.org 0x936e6
	strb r0, [r4, #13]	@ 000936e6 6073
.org 0x936e8
	strb r0, [r4, #14]	@ 000936e8 a073
.org 0x936ea
	strb r0, [r4, #15]	@ 000936ea e073
.org 0x936ec
	pop {r4, r5}	@ 000936ec 30bc
