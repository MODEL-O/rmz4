@ FUN_080b079c  entry 0x080b079c  size 158
.thumb
.org 0xb079c
FUN_080b079c:
	push {r4, r5, r6, lr}	@ 000b079c 70b5
.org 0xb079e
	adds r4, r0, #0	@ 000b079e 041c
.org 0xb07a0
	ldrb r0, [r4, #14]	@ 000b07a0 a07b
.org 0xb07a2
	cmp r0, #0	@ 000b07a2 0028
.org 0xb07a4
	bne.n 0xb07ea	@ 000b07a4 21d1
.org 0xb07a6
	ldr r0, [pc, #32]	@ 000b07a6 0848
.org 0xb07a8
	ldr r1, [pc, #32]	@ 000b07a8 0849
.org 0xb07aa
	adds r0, r0, r1	@ 000b07aa 4018
.org 0xb07ac
	ldrb r1, [r0, #0]	@ 000b07ac 0178
.org 0xb07ae
	movs r0, #15	@ 000b07ae 0f20
.org 0xb07b0
	ands r0, r1	@ 000b07b0 0840
.org 0xb07b2
	cmp r0, #0	@ 000b07b2 0028
.org 0xb07b4
	bne.n 0xb07d4	@ 000b07b4 0ed1
.org 0xb07b6
	ldr r1, [pc, #24]	@ 000b07b6 0649
.org 0xb07b8
	adds r0, r4, #0	@ 000b07b8 201c
.org 0xb07ba
	bl 0x1cf00	@ 000b07ba 6cf7a1fb
.org 0xb07be
	adds r1, r4, #0	@ 000b07be 211c
.org 0xb07c0
	adds r1, #182	@ 000b07c0 b631
.org 0xb07c2
	movs r0, #7	@ 000b07c2 0720
.org 0xb07c4
	b.n 0xb07e2	@ 000b07c4 0de0
.org 0xb07c6
	.byte 0x00	@ 000b07c6 data
.org 0xb07c7
	.byte 0x00	@ 000b07c7 data
.org 0xb07c8
	.byte 0xb0,0x0a,0x00,0x02	@ 000b07c8 data
.org 0xb07cc
	.byte 0x10,0xc0,0x02,0x00	@ 000b07cc data
.org 0xb07d0
	.byte 0x01,0xb2,0x00,0x00	@ 000b07d0 data
.org 0xb07d4
	ldr r1, [pc, #112]	@ 000b07d4 1c49
.org 0xb07d6
	adds r0, r4, #0	@ 000b07d6 201c
.org 0xb07d8
	bl 0x1cf00	@ 000b07d8 6cf792fb
.org 0xb07dc
	adds r1, r4, #0	@ 000b07dc 211c
.org 0xb07de
	adds r1, #182	@ 000b07de b631
.org 0xb07e0
	movs r0, #1	@ 000b07e0 0120
.org 0xb07e2
	strb r0, [r1, #0]	@ 000b07e2 0870
.org 0xb07e4
	ldrb r0, [r4, #14]	@ 000b07e4 a07b
.org 0xb07e6
	adds r0, #1	@ 000b07e6 0130
.org 0xb07e8
	strb r0, [r4, #14]	@ 000b07e8 a073
.org 0xb07ea
	adds r0, r4, #0	@ 000b07ea 201c
.org 0xb07ec
	adds r0, #114	@ 000b07ec 7230
.org 0xb07ee
	movs r6, #0	@ 000b07ee 0026
.org 0xb07f0
	ldrsb r6, [r0, r6]	@ 000b07f0 8657
.org 0xb07f2
	cmp r6, #1	@ 000b07f2 012e
.org 0xb07f4
	bne.n 0xb0824	@ 000b07f4 16d1
.org 0xb07f6
	adds r5, r4, #0	@ 000b07f6 251c
.org 0xb07f8
	adds r5, #113	@ 000b07f8 7135
.org 0xb07fa
	movs r0, #0	@ 000b07fa 0020
.org 0xb07fc
	ldrsb r0, [r5, r0]	@ 000b07fc 2856
.org 0xb07fe
	cmp r0, #4	@ 000b07fe 0428
.org 0xb0800
	bne.n 0xb080e	@ 000b0800 05d1
.org 0xb0802
	adds r0, r4, #0	@ 000b0802 201c
.org 0xb0804
	adds r0, #116	@ 000b0804 7430
.org 0xb0806
	ldr r1, [pc, #68]	@ 000b0806 1149
.org 0xb0808
	bl 0x5784	@ 000b0808 54f7bcff
.org 0xb080c
	strb r6, [r4, #17]	@ 000b080c 6674
.org 0xb080e
	movs r0, #0	@ 000b080e 0020
.org 0xb0810
	ldrsb r0, [r5, r0]	@ 000b0810 2856
.org 0xb0812
	cmp r0, #9	@ 000b0812 0928
.org 0xb0814
	bne.n 0xb0824	@ 000b0814 06d1
.org 0xb0816
	adds r0, r4, #0	@ 000b0816 201c
.org 0xb0818
	adds r0, #116	@ 000b0818 7430
.org 0xb081a
	ldr r1, [pc, #52]	@ 000b081a 0d49
.org 0xb081c
	bl 0x5784	@ 000b081c 54f7b2ff
.org 0xb0820
	movs r0, #0	@ 000b0820 0020
.org 0xb0822
	strb r0, [r4, #17]	@ 000b0822 6074
.org 0xb0824
	adds r0, r4, #0	@ 000b0824 201c
.org 0xb0826
	adds r0, #115	@ 000b0826 7330
.org 0xb0828
	ldrb r5, [r0, #0]	@ 000b0828 0578
.org 0xb082a
	cmp r5, #3	@ 000b082a 032d
.org 0xb082c
	bne.n 0xb0842	@ 000b082c 09d1
.org 0xb082e
	adds r0, #1	@ 000b082e 0130
.org 0xb0830
	ldr r1, [pc, #32]	@ 000b0830 0849
.org 0xb0832
	bl 0x5784	@ 000b0832 54f7a7ff
.org 0xb0836
	movs r0, #232	@ 000b0836 e820
.org 0xb0838
	bl 0x2b10	@ 000b0838 52f76af9
