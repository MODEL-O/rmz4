@ FUN_0809f12c  entry 0x0809f12c  size 184
.thumb
.org 0x9f12c
FUN_0809f12c:
	push {r4, r5, lr}	@ 0009f12c 30b5
.org 0x9f12e
	sub sp, #8	@ 0009f12e 82b0
.org 0x9f130
	adds r5, r0, #0	@ 0009f130 051c
.org 0x9f132
	adds r0, #185	@ 0009f132 b930
.org 0x9f134
	ldrb r0, [r0, #0]	@ 0009f134 0078
.org 0x9f136
	cmp r0, #0	@ 0009f136 0028
.org 0x9f138
	bne.n 0x9f17a	@ 0009f138 1fd1
.org 0x9f13a
	adds r0, r5, #0	@ 0009f13a 281c
.org 0x9f13c
	adds r0, #140	@ 0009f13c 8c30
.org 0x9f13e
	ldr r0, [r0, #0]	@ 0009f13e 0068
.org 0x9f140
	movs r1, #128	@ 0009f140 8021
.org 0x9f142
	lsls r1, r1, #9	@ 0009f142 4902
.org 0x9f144
	ands r0, r1	@ 0009f144 0840
.org 0x9f146
	cmp r0, #0	@ 0009f146 0028
.org 0x9f148
	beq.n 0x9f162	@ 0009f148 0bd0
.org 0x9f14a
	adds r4, r5, #0	@ 0009f14a 2c1c
.org 0x9f14c
	adds r4, #84	@ 0009f14c 5434
.org 0x9f14e
	ldrb r3, [r5, #10]	@ 0009f14e ab7a
.org 0x9f150
	lsrs r3, r3, #4	@ 0009f150 1b09
.org 0x9f152
	movs r0, #1	@ 0009f152 0120
.org 0x9f154
	ands r3, r0	@ 0009f154 0340
.org 0x9f156
	adds r0, r4, #0	@ 0009f156 201c
.org 0x9f158
	movs r1, #0	@ 0009f158 0021
.org 0x9f15a
	movs r2, #0	@ 0009f15a 0022
.org 0x9f15c
	bl 0xe08bc	@ 0009f15c 41f0aefb
.org 0x9f160
	b.n 0x9f190	@ 0009f160 16e0
.org 0x9f162
	adds r4, r5, #0	@ 0009f162 2c1c
.org 0x9f164
	adds r4, #84	@ 0009f164 5434
.org 0x9f166
	ldrb r3, [r5, #10]	@ 0009f166 ab7a
.org 0x9f168
	lsrs r3, r3, #4	@ 0009f168 1b09
.org 0x9f16a
	movs r0, #1	@ 0009f16a 0120
.org 0x9f16c
	ands r3, r0	@ 0009f16c 0340
.org 0x9f16e
	adds r0, r4, #0	@ 0009f16e 201c
.org 0x9f170
	movs r1, #1	@ 0009f170 0121
.org 0x9f172
	movs r2, #0	@ 0009f172 0022
.org 0x9f174
	bl 0xe08bc	@ 0009f174 41f0a2fb
.org 0x9f178
	b.n 0x9f190	@ 0009f178 0ae0
.org 0x9f17a
	adds r4, r5, #0	@ 0009f17a 2c1c
.org 0x9f17c
	adds r4, #84	@ 0009f17c 5434
.org 0x9f17e
	ldrb r3, [r5, #10]	@ 0009f17e ab7a
.org 0x9f180
	lsrs r3, r3, #4	@ 0009f180 1b09
.org 0x9f182
	movs r0, #1	@ 0009f182 0120
.org 0x9f184
	ands r3, r0	@ 0009f184 0340
.org 0x9f186
	adds r0, r4, #0	@ 0009f186 201c
.org 0x9f188
	movs r1, #2	@ 0009f188 0221
.org 0x9f18a
	movs r2, #0	@ 0009f18a 0022
.org 0x9f18c
	bl 0xe08bc	@ 0009f18c 41f096fb
.org 0x9f190
	adds r1, r4, #0	@ 0009f190 211c
.org 0x9f192
	ldrb r0, [r5, #16]	@ 0009f192 287c
.org 0x9f194
	cmp r0, #0	@ 0009f194 0028
.org 0x9f196
	bne.n 0x9f1a4	@ 0009f196 05d1
.org 0x9f198
	ldr r0, [r5, #84]	@ 0009f198 686d
.org 0x9f19a
	ldr r2, [pc, #4]	@ 0009f19a 014a
.org 0x9f19c
	b.n 0x9f1aa	@ 0009f19c 05e0
.org 0x9f19e
	.byte 0x00	@ 0009f19e data
.org 0x9f19f
	.byte 0x00	@ 0009f19f data
.org 0x9f1a0
	.byte 0x00,0xf8,0xff,0xff	@ 0009f1a0 data
.org 0x9f1a4
	ldr r0, [r5, #84]	@ 0009f1a4 686d
.org 0x9f1a6
	movs r2, #128	@ 0009f1a6 8022
.org 0x9f1a8
	lsls r2, r2, #4	@ 0009f1a8 1201
.org 0x9f1aa
	adds r0, r0, r2	@ 0009f1aa 8018
.org 0x9f1ac
	str r0, [sp, #0]	@ 0009f1ac 0090
.org 0x9f1ae
	ldr r0, [r5, #88]	@ 0009f1ae a86d
.org 0x9f1b0
	str r0, [sp, #4]	@ 0009f1b0 0190
.org 0x9f1b2
	ldr r3, [pc, #56]	@ 0009f1b2 0e4b
.org 0x9f1b4
	ldrh r2, [r3, #12]	@ 0009f1b4 9a89
.org 0x9f1b6
	ldr r0, [pc, #56]	@ 0009f1b6 0e48
.org 0x9f1b8
	cmp r2, r0	@ 0009f1b8 8242
.org 0x9f1ba
	bhi.n 0x9f1c0	@ 0009f1ba 01d8
.org 0x9f1bc
	adds r0, r2, #1	@ 0009f1bc 501c
.org 0x9f1be
	strh r0, [r3, #12]	@ 0009f1be 9881
.org 0x9f1c0
	adds r0, r5, #0	@ 0009f1c0 281c
.org 0x9f1c2
	bl 0x2abe0	@ 0009f1c2 8bf70dfd
.org 0x9f1c6
	movs r0, #2	@ 0009f1c6 0220
.org 0x9f1c8
	movs r1, #3	@ 0009f1c8 0321
.org 0x9f1ca
	mov r2, sp	@ 0009f1ca 6a46
.org 0x9f1cc
	bl 0x2ab88	@ 0009f1cc 8bf7dcfc
.org 0x9f1d0
	ldr r1, [pc, #32]	@ 0009f1d0 0849
.org 0x9f1d2
	ldrb r0, [r5, #9]	@ 0009f1d2 687a
.org 0x9f1d4
	lsls r0, r0, #2	@ 0009f1d4 8000
.org 0x9f1d6
	adds r0, r0, r1	@ 0009f1d6 4018
.org 0x9f1d8
	movs r1, #4	@ 0009f1d8 0421
.org 0x9f1da
	str r1, [r5, #12]	@ 0009f1da e960
.org 0x9f1dc
	ldr r0, [r0, #0]	@ 0009f1dc 0068
.org 0x9f1de
	ldr r0, [r0, #16]	@ 0009f1de 0069
.org 0x9f1e0
	str r0, [r5, #20]	@ 0009f1e0 6861
.org 0x9f1e2
	add sp, #8	@ 0009f1e2 02b0
