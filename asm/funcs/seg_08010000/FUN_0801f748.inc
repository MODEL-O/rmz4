@ FUN_0801f748  entry 0x0801f748  size 162
.thumb
.org 0x1f748
FUN_0801f748:
	push {r4, r5, r6, lr}	@ 0001f748 70b5
.org 0x1f74a
	adds r4, r0, #0	@ 0001f74a 041c
.org 0x1f74c
	ldr r2, [r4, #32]	@ 0001f74c 226a
.org 0x1f74e
	ldr r6, [pc, #136]	@ 0001f74e 224e
.org 0x1f750
	cmp r2, #0	@ 0001f750 002a
.org 0x1f752
	beq.n 0x1f780	@ 0001f752 15d0
.org 0x1f754
	adds r0, r2, #0	@ 0001f754 101c
.org 0x1f756
	adds r0, #140	@ 0001f756 8c30
.org 0x1f758
	ldr r0, [r0, #0]	@ 0001f758 0068
.org 0x1f75a
	movs r1, #128	@ 0001f75a 8021
.org 0x1f75c
	lsls r1, r1, #2	@ 0001f75c 8900
.org 0x1f75e
	ands r0, r1	@ 0001f75e 0840
.org 0x1f760
	cmp r0, #0	@ 0001f760 0028
.org 0x1f762
	bne.n 0x1f770	@ 0001f762 05d1
.org 0x1f764
	adds r0, r2, #0	@ 0001f764 101c
.org 0x1f766
	adds r0, #164	@ 0001f766 a430
.org 0x1f768
	movs r1, #0	@ 0001f768 0021
.org 0x1f76a
	ldrsh r0, [r0, r1]	@ 0001f76a 405e
.org 0x1f76c
	cmp r0, #0	@ 0001f76c 0028
.org 0x1f76e
	bne.n 0x1f780	@ 0001f76e 07d1
.org 0x1f770
	ldr r2, [pc, #100]	@ 0001f770 194a
.org 0x1f772
	ldrh r1, [r2, #8]	@ 0001f772 1189
.org 0x1f774
	ldr r0, [pc, #100]	@ 0001f774 1948
.org 0x1f776
	ands r0, r1	@ 0001f776 0840
.org 0x1f778
	movs r1, #8	@ 0001f778 0821
.org 0x1f77a
	orrs r0, r1	@ 0001f77a 0843
.org 0x1f77c
	strh r0, [r2, #8]	@ 0001f77c 1081
.org 0x1f77e
	adds r6, r2, #0	@ 0001f77e 161c
.org 0x1f780
	ldrh r1, [r6, #8]	@ 0001f780 3189
.org 0x1f782
	movs r5, #1	@ 0001f782 0125
.org 0x1f784
	adds r3, r5, #0	@ 0001f784 2b1c
.org 0x1f786
	ands r3, r1	@ 0001f786 0b40
.org 0x1f788
	cmp r3, #0	@ 0001f788 002b
.org 0x1f78a
	bne.n 0x1f804	@ 0001f78a 3bd1
.org 0x1f78c
	movs r0, #8	@ 0001f78c 0820
.org 0x1f78e
	ands r0, r1	@ 0001f78e 0840
.org 0x1f790
	cmp r0, #0	@ 0001f790 0028
.org 0x1f792
	beq.n 0x1f804	@ 0001f792 37d0
.org 0x1f794
	ldr r2, [pc, #72]	@ 0001f794 124a
.org 0x1f796
	ldrb r1, [r2, #0]	@ 0001f796 1178
.org 0x1f798
	movs r0, #128	@ 0001f798 8020
.org 0x1f79a
	orrs r0, r1	@ 0001f79a 0843
.org 0x1f79c
	strb r0, [r2, #0]	@ 0001f79c 1070
.org 0x1f79e
	ldr r0, [pc, #68]	@ 0001f79e 1148
.org 0x1f7a0
	str r3, [r0, #16]	@ 0001f7a0 0361
.org 0x1f7a2
	ldr r2, [r4, #24]	@ 0001f7a2 a269
.org 0x1f7a4
	ldr r3, [pc, #64]	@ 0001f7a4 104b
.org 0x1f7a6
	cmp r2, r3	@ 0001f7a6 9a42
.org 0x1f7a8
	beq.n 0x1f7fc	@ 0001f7a8 28d0
.org 0x1f7aa
	ldr r1, [pc, #64]	@ 0001f7aa 1049
.org 0x1f7ac
	cmp r2, r1	@ 0001f7ac 8a42
.org 0x1f7ae
	beq.n 0x1f7fc	@ 0001f7ae 25d0
.org 0x1f7b0
	ldr r0, [pc, #60]	@ 0001f7b0 0f48
.org 0x1f7b2
	ldr r0, [r0, #64]	@ 0001f7b2 006c
.org 0x1f7b4
	ldr r0, [r0, #120]	@ 0001f7b4 806f
.org 0x1f7b6
	cmp r2, r0	@ 0001f7b6 8242
.org 0x1f7b8
	beq.n 0x1f7fc	@ 0001f7b8 20d0
.org 0x1f7ba
	movs r2, #170	@ 0001f7ba aa22
.org 0x1f7bc
	lsls r2, r2, #1	@ 0001f7bc 5200
.org 0x1f7be
	adds r0, r6, r2	@ 0001f7be b018
.org 0x1f7c0
	ldr r0, [r0, #0]	@ 0001f7c0 0068
.org 0x1f7c2
	cmp r0, #0	@ 0001f7c2 0028
.org 0x1f7c4
	beq.n 0x1f7f4	@ 0001f7c4 16d0
.org 0x1f7c6
	ands r0, r5	@ 0001f7c6 2840
.org 0x1f7c8
	cmp r0, #0	@ 0001f7c8 0028
.org 0x1f7ca
	bne.n 0x1f7f4	@ 0001f7ca 13d1
.org 0x1f7cc
	adds r0, r6, #0	@ 0001f7cc 301c
.org 0x1f7ce
	adds r0, #16	@ 0001f7ce 1030
.org 0x1f7d0
	bl 0x275f0	@ 0001f7d0 07f00eff
.org 0x1f7d4
	b.n 0x1f7fc	@ 0001f7d4 12e0
.org 0x1f7d6
	.byte 0x00	@ 0001f7d6 data
.org 0x1f7d7
	.byte 0x00	@ 0001f7d7 data
.org 0x1f7d8
	.byte 0x10,0xe9,0x02,0x02	@ 0001f7d8 data
.org 0x1f7dc
	.byte 0xfe,0xff,0x00,0x00	@ 0001f7dc data
.org 0x1f7e0
	.byte 0xe0,0x32,0x00,0x03	@ 0001f7e0 data
.org 0x1f7e4
	.byte 0x60,0xf3,0x02,0x02	@ 0001f7e4 data
.org 0x1f7e8
	.byte 0x44,0x2d,0x84,0x08	@ 0001f7e8 data
