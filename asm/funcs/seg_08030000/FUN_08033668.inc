@ FUN_08033668  entry 0x08033668  size 140
.thumb
.org 0x33668
FUN_08033668:
	push {r4, lr}	@ 00033668 10b5
.org 0x3366a
	adds r4, r0, #0	@ 0003366a 041c
.org 0x3366c
	adds r0, #252	@ 0003366c fc30
.org 0x3366e
	ldrb r0, [r0, #0]	@ 0003366e 0078
.org 0x33670
	cmp r0, #1	@ 00033670 0128
.org 0x33672
	bne.n 0x33684	@ 00033672 07d1
.org 0x33674
	ldr r1, [pc, #8]	@ 00033674 0249
.org 0x33676
	adds r0, r4, #0	@ 00033676 201c
.org 0x33678
	bl 0x1cf00	@ 00033678 e9f742fc
.org 0x3367c
	b.n 0x336a2	@ 0003367c 11e0
.org 0x3367e
	.byte 0x00	@ 0003367e data
.org 0x3367f
	.byte 0x00	@ 0003367f data
.org 0x33680
	.byte 0x05,0x0b,0x00,0x00	@ 00033680 data
.org 0x33684
	ldrb r1, [r4, #30]	@ 00033684 a17f
.org 0x33686
	lsls r1, r1, #8	@ 00033686 0902
.org 0x33688
	adds r0, r4, #0	@ 00033688 201c
.org 0x3368a
	adds r0, #112	@ 0003368a 7030
.org 0x3368c
	ldrb r0, [r0, #0]	@ 0003368c 0078
.org 0x3368e
	orrs r0, r1	@ 0003368e 0843
.org 0x33690
	ldr r1, [pc, #104]	@ 00033690 1a49
.org 0x33692
	cmp r0, r1	@ 00033692 8842
.org 0x33694
	beq.n 0x336a2	@ 00033694 05d0
.org 0x33696
	ldr r1, [pc, #104]	@ 00033696 1a49
.org 0x33698
	adds r0, r4, #0	@ 00033698 201c
.org 0x3369a
	movs r2, #2	@ 0003369a 0222
.org 0x3369c
	movs r3, #4	@ 0003369c 0423
.org 0x3369e
	bl 0x1cfc8	@ 0003369e e9f793fc
.org 0x336a2
	movs r1, #170	@ 000336a2 aa21
.org 0x336a4
	lsls r1, r1, #1	@ 000336a4 4900
.org 0x336a6
	adds r0, r4, r1	@ 000336a6 6018
.org 0x336a8
	ldrb r0, [r0, #0]	@ 000336a8 0078
.org 0x336aa
	cmp r0, #4	@ 000336aa 0428
.org 0x336ac
	bne.n 0x336ca	@ 000336ac 0dd1
.org 0x336ae
	movs r0, #128	@ 000336ae 8020
.org 0x336b0
	lsls r0, r0, #1	@ 000336b0 4000
.org 0x336b2
	adds r1, r4, r0	@ 000336b2 2118
.org 0x336b4
	movs r0, #0	@ 000336b4 0020
.org 0x336b6
	strb r0, [r1, #0]	@ 000336b6 0870
.org 0x336b8
	adds r0, r4, #0	@ 000336b8 201c
.org 0x336ba
	bl 0x2b7d8	@ 000336ba f8f78df8
.org 0x336be
	adds r1, r0, #0	@ 000336be 011c
.org 0x336c0
	lsls r1, r1, #16	@ 000336c0 0904
.org 0x336c2
	lsrs r1, r1, #16	@ 000336c2 090c
.org 0x336c4
	adds r0, r4, #0	@ 000336c4 201c
.org 0x336c6
	bl 0x1cf00	@ 000336c6 e9f71bfc
.org 0x336ca
	movs r0, #162	@ 000336ca a220
.org 0x336cc
	lsls r0, r0, #1	@ 000336cc 4000
.org 0x336ce
	adds r1, r4, r0	@ 000336ce 2118
.org 0x336d0
	adds r0, r4, #0	@ 000336d0 201c
.org 0x336d2
	bl 0x39fd8	@ 000336d2 06f081fc
.org 0x336d6
	lsls r0, r0, #24	@ 000336d6 0006
.org 0x336d8
	cmp r0, #0	@ 000336d8 0028
.org 0x336da
	beq.n 0x336f4	@ 000336da 0bd0
.org 0x336dc
	movs r1, #128	@ 000336dc 8021
.org 0x336de
	lsls r1, r1, #1	@ 000336de 4900
.org 0x336e0
	adds r0, r4, r1	@ 000336e0 6018
.org 0x336e2
	movs r2, #0	@ 000336e2 0022
.org 0x336e4
	movs r1, #3	@ 000336e4 0321
.org 0x336e6
	strb r1, [r0, #0]	@ 000336e6 0170
.org 0x336e8
	adds r1, #254	@ 000336e8 fe31
.org 0x336ea
	adds r0, r4, r1	@ 000336ea 6018
.org 0x336ec
	strb r2, [r0, #0]	@ 000336ec 0270
.org 0x336ee
	adds r0, r4, #0	@ 000336ee 201c
.org 0x336f0
	bl 0x334dc	@ 000336f0 fff7f4fe
