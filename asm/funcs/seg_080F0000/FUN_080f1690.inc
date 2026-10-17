@ FUN_080f1690  entry 0x080f1690  size 132
.thumb
.org 0xf1690
FUN_080f1690:
	push {r4, lr}	@ 000f1690 10b5
.org 0xf1692
	adds r4, r0, #0	@ 000f1692 041c
.org 0xf1694
	ldrb r1, [r4, #17]	@ 000f1694 617c
.org 0xf1696
	cmp r1, #1	@ 000f1696 0129
.org 0xf1698
	beq.n 0xf16c6	@ 000f1698 15d0
.org 0xf169a
	cmp r1, #1	@ 000f169a 0129
.org 0xf169c
	bgt.n 0xf16a4	@ 000f169c 02dc
.org 0xf169e
	cmp r1, #0	@ 000f169e 0029
.org 0xf16a0
	beq.n 0xf16ae	@ 000f16a0 05d0
.org 0xf16a2
	b.n 0xf1716	@ 000f16a2 38e0
.org 0xf16a4
	cmp r1, #2	@ 000f16a4 0229
.org 0xf16a6
	beq.n 0xf16e0	@ 000f16a6 1bd0
.org 0xf16a8
	cmp r1, #3	@ 000f16a8 0329
.org 0xf16aa
	beq.n 0xf16fc	@ 000f16aa 27d0
.org 0xf16ac
	b.n 0xf1716	@ 000f16ac 33e0
.org 0xf16ae
	ldr r1, [pc, #40]	@ 000f16ae 0a49
.org 0xf16b0
	adds r0, r4, #0	@ 000f16b0 201c
.org 0xf16b2
	bl 0x1cf00	@ 000f16b2 2bf725fc
.org 0xf16b6
	ldr r0, [r4, #84]	@ 000f16b6 606d
.org 0xf16b8
	ldr r1, [r4, #88]	@ 000f16b8 a16d
.org 0xf16ba
	bl 0x8534	@ 000f16ba 16f73bff
.org 0xf16be
	str r0, [r4, #88]	@ 000f16be a065
.org 0xf16c0
	ldrb r0, [r4, #17]	@ 000f16c0 607c
.org 0xf16c2
	adds r0, #1	@ 000f16c2 0130
.org 0xf16c4
	strb r0, [r4, #17]	@ 000f16c4 6074
.org 0xf16c6
	ldr r0, [r4, #24]	@ 000f16c6 a069
.org 0xf16c8
	ldrb r1, [r0, #9]	@ 000f16c8 417a
.org 0xf16ca
	movs r0, #1	@ 000f16ca 0120
.org 0xf16cc
	ands r0, r1	@ 000f16cc 0840
.org 0xf16ce
	cmp r0, #0	@ 000f16ce 0028
.org 0xf16d0
	beq.n 0xf1716	@ 000f16d0 21d0
.org 0xf16d2
	ldr r1, [pc, #8]	@ 000f16d2 0249
.org 0xf16d4
	b.n 0xf170a	@ 000f16d4 19e0
.org 0xf16d6
	.byte 0x00	@ 000f16d6 data
.org 0xf16d7
	.byte 0x00	@ 000f16d7 data
.org 0xf16d8
	.byte 0x28,0xa5,0x00,0x00	@ 000f16d8 data
.org 0xf16dc
	.byte 0x29,0xa5,0x00,0x00	@ 000f16dc data
.org 0xf16e0
	ldr r0, [r4, #24]	@ 000f16e0 a069
.org 0xf16e2
	ldrb r0, [r0, #9]	@ 000f16e2 407a
.org 0xf16e4
	ands r1, r0	@ 000f16e4 0140
.org 0xf16e6
	cmp r1, #0	@ 000f16e6 0029
.org 0xf16e8
	beq.n 0xf1716	@ 000f16e8 15d0
.org 0xf16ea
	ldr r1, [pc, #12]	@ 000f16ea 0349
.org 0xf16ec
	adds r0, r4, #0	@ 000f16ec 201c
.org 0xf16ee
	bl 0x1cf00	@ 000f16ee 2bf707fc
.org 0xf16f2
	movs r0, #60	@ 000f16f2 3c20
.org 0xf16f4
	strb r0, [r4, #18]	@ 000f16f4 a074
.org 0xf16f6
	b.n 0xf1710	@ 000f16f6 0be0
.org 0xf16f8
	.byte 0x29,0xa5,0x00,0x00	@ 000f16f8 data
.org 0xf16fc
	ldrb r0, [r4, #18]	@ 000f16fc a07c
.org 0xf16fe
	subs r0, #1	@ 000f16fe 0138
.org 0xf1700
	strb r0, [r4, #18]	@ 000f1700 a074
.org 0xf1702
	lsls r0, r0, #24	@ 000f1702 0006
.org 0xf1704
	cmp r0, #0	@ 000f1704 0028
.org 0xf1706
	bne.n 0xf1716	@ 000f1706 06d1
.org 0xf1708
	ldr r1, [pc, #24]	@ 000f1708 0649
.org 0xf170a
	adds r0, r4, #0	@ 000f170a 201c
.org 0xf170c
	bl 0x1cf00	@ 000f170c 2bf7f8fb
.org 0xf1710
	ldrb r0, [r4, #17]	@ 000f1710 607c
.org 0xf1712
	adds r0, #1	@ 000f1712 0130
