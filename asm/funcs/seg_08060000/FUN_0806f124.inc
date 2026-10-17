@ FUN_0806f124  entry 0x0806f124  size 156
.thumb
.org 0x6f124
FUN_0806f124:
	push {r4, r5, r6, r7, lr}	@ 0006f124 f0b5
.org 0x6f126
	sub sp, #8	@ 0006f126 82b0
.org 0x6f128
	adds r5, r0, #0	@ 0006f128 051c
.org 0x6f12a
	ldr r1, [pc, #52]	@ 0006f12a 0d49
.org 0x6f12c
	mov r0, sp	@ 0006f12c 6846
.org 0x6f12e
	movs r2, #3	@ 0006f12e 0322
.org 0x6f130
	bl 0x129258	@ 0006f130 baf092f8
.org 0x6f134
	add r4, sp, #4	@ 0006f134 01ac
.org 0x6f136
	ldr r1, [pc, #44]	@ 0006f136 0b49
.org 0x6f138
	adds r0, r4, #0	@ 0006f138 201c
.org 0x6f13a
	movs r2, #3	@ 0006f13a 0322
.org 0x6f13c
	bl 0x129258	@ 0006f13c baf08cf8
.org 0x6f140
	ldr r0, [pc, #36]	@ 0006f140 0948
.org 0x6f142
	ldrh r1, [r0, #8]	@ 0006f142 0189
.org 0x6f144
	movs r0, #8	@ 0006f144 0820
.org 0x6f146
	ands r0, r1	@ 0006f146 0840
.org 0x6f148
	lsls r0, r0, #16	@ 0006f148 0004
.org 0x6f14a
	lsrs r3, r0, #16	@ 0006f14a 030c
.org 0x6f14c
	adds r7, r4, #0	@ 0006f14c 271c
.org 0x6f14e
	cmp r3, #0	@ 0006f14e 002b
.org 0x6f150
	beq.n 0x6f16c	@ 0006f150 0cd0
.org 0x6f152
	movs r1, #0	@ 0006f152 0021
.org 0x6f154
	movs r0, #9	@ 0006f154 0920
.org 0x6f156
	strb r0, [r5, #13]	@ 0006f156 6873
.org 0x6f158
	strb r1, [r5, #14]	@ 0006f158 a973
.org 0x6f15a
	strb r1, [r5, #15]	@ 0006f15a e973
.org 0x6f15c
	b.n 0x6f1ce	@ 0006f15c 37e0
.org 0x6f15e
	.byte 0x00	@ 0006f15e data
.org 0x6f15f
	.byte 0x00	@ 0006f15f data
.org 0x6f160
	.byte 0x08,0x99,0x12,0x08	@ 0006f160 data
.org 0x6f164
	.byte 0x0b,0x99,0x12,0x08	@ 0006f164 data
.org 0x6f168
	.byte 0x10,0xe9,0x02,0x02	@ 0006f168 data
.org 0x6f16c
	adds r0, r5, #0	@ 0006f16c 281c
.org 0x6f16e
	adds r0, #181	@ 0006f16e b530
.org 0x6f170
	ldrb r1, [r0, #0]	@ 0006f170 0178
.org 0x6f172
	adds r6, r0, #0	@ 0006f172 061c
.org 0x6f174
	adds r4, r5, #0	@ 0006f174 2c1c
.org 0x6f176
	adds r4, #180	@ 0006f176 b434
.org 0x6f178
	cmp r1, #1	@ 0006f178 0129
.org 0x6f17a
	bls.n 0x6f182	@ 0006f17a 02d9
.org 0x6f17c
	ldrb r2, [r4, #0]	@ 0006f17c 2278
.org 0x6f17e
	adds r0, r7, r2	@ 0006f17e b818
.org 0x6f180
	strb r3, [r0, #0]	@ 0006f180 0370
.org 0x6f182
	ldr r0, [pc, #60]	@ 0006f182 0f48
.org 0x6f184
	ldr r0, [r0, #0]	@ 0006f184 0068
.org 0x6f186
	ldrb r0, [r0, #1]	@ 0006f186 4078
.org 0x6f188
	cmp r0, #4	@ 0006f188 0428
.org 0x6f18a
	bls.n 0x6f198	@ 0006f18a 05d9
.org 0x6f18c
	ldr r0, [pc, #52]	@ 0006f18c 0d48
.org 0x6f18e
	ldrb r1, [r0, #4]	@ 0006f18e 0179
.org 0x6f190
	movs r0, #4	@ 0006f190 0420
.org 0x6f192
	ands r0, r1	@ 0006f192 0840
.org 0x6f194
	cmp r0, #0	@ 0006f194 0028
.org 0x6f196
	beq.n 0x6f19a	@ 0006f196 00d0
.org 0x6f198
	strb r3, [r7, #2]	@ 0006f198 bb70
.org 0x6f19a
	adds r0, r7, #0	@ 0006f19a 381c
.org 0x6f19c
	movs r1, #3	@ 0006f19c 0321
.org 0x6f19e
	bl 0x6f304	@ 0006f19e 00f0b1f8
.org 0x6f1a2
	adds r2, r0, #0	@ 0006f1a2 021c
.org 0x6f1a4
	mov r1, sp	@ 0006f1a4 6946
.org 0x6f1a6
	adds r0, r1, r2	@ 0006f1a6 8818
.org 0x6f1a8
	ldrb r0, [r0, #0]	@ 0006f1a8 0078
.org 0x6f1aa
	movs r1, #0	@ 0006f1aa 0021
.org 0x6f1ac
	strb r0, [r5, #13]	@ 0006f1ac 6873
.org 0x6f1ae
	strb r1, [r5, #14]	@ 0006f1ae a973
.org 0x6f1b0
	strb r1, [r5, #15]	@ 0006f1b0 e973
.org 0x6f1b2
	ldrb r0, [r4, #0]	@ 0006f1b2 2078
.org 0x6f1b4
	cmp r2, r0	@ 0006f1b4 8242
.org 0x6f1b6
	bne.n 0x6f1c8	@ 0006f1b6 07d1
.org 0x6f1b8
	ldrb r0, [r6, #0]	@ 0006f1b8 3078
.org 0x6f1ba
	adds r0, #1	@ 0006f1ba 0130
.org 0x6f1bc
	strb r0, [r6, #0]	@ 0006f1bc 3070
.org 0x6f1be
	b.n 0x6f1ce	@ 0006f1be 06e0
