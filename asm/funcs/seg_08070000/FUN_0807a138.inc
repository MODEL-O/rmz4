@ FUN_0807a138  entry 0x0807a138  size 192
.thumb
.org 0x7a138
FUN_0807a138:
	push {r4, r5, lr}	@ 0007a138 30b5
.org 0x7a13a
	adds r4, r0, #0	@ 0007a13a 041c
.org 0x7a13c
	ldrb r5, [r4, #14]	@ 0007a13c a57b
.org 0x7a13e
	cmp r5, #0	@ 0007a13e 002d
.org 0x7a140
	bne.n 0x7a15c	@ 0007a140 0cd1
.org 0x7a142
	ldr r1, [pc, #48]	@ 0007a142 0c49
.org 0x7a144
	bl 0x1cf00	@ 0007a144 a2f7dcfe
.org 0x7a148
	movs r0, #168	@ 0007a148 a820
.org 0x7a14a
	lsls r0, r0, #1	@ 0007a14a 4000
.org 0x7a14c
	bl 0x2b10	@ 0007a14c 88f7e0fc
.org 0x7a150
	ldrb r0, [r4, #14]	@ 0007a150 a07b
.org 0x7a152
	adds r0, #1	@ 0007a152 0130
.org 0x7a154
	strb r0, [r4, #14]	@ 0007a154 a073
.org 0x7a156
	strb r5, [r4, #15]	@ 0007a156 e573
.org 0x7a158
	movs r0, #16	@ 0007a158 1020
.org 0x7a15a
	strb r0, [r4, #18]	@ 0007a15a a074
.org 0x7a15c
	adds r0, r4, #0	@ 0007a15c 201c
.org 0x7a15e
	bl 0x1cff0	@ 0007a15e a2f747ff
.org 0x7a162
	ldrb r0, [r4, #15]	@ 0007a162 e07b
.org 0x7a164
	cmp r0, #1	@ 0007a164 0128
.org 0x7a166
	beq.n 0x7a1a8	@ 0007a166 1fd0
.org 0x7a168
	cmp r0, #1	@ 0007a168 0128
.org 0x7a16a
	bgt.n 0x7a178	@ 0007a16a 05dc
.org 0x7a16c
	cmp r0, #0	@ 0007a16c 0028
.org 0x7a16e
	beq.n 0x7a17e	@ 0007a16e 06d0
.org 0x7a170
	b.n 0x7a202	@ 0007a170 47e0
.org 0x7a172
	.byte 0x00	@ 0007a172 data
.org 0x7a173
	.byte 0x00	@ 0007a173 data
.org 0x7a174
	.byte 0x02,0xb1,0x00,0x00	@ 0007a174 data
.org 0x7a178
	cmp r0, #2	@ 0007a178 0228
.org 0x7a17a
	beq.n 0x7a1ec	@ 0007a17a 37d0
.org 0x7a17c
	b.n 0x7a202	@ 0007a17c 41e0
.org 0x7a17e
	adds r0, r4, #0	@ 0007a17e 201c
.org 0x7a180
	adds r0, #115	@ 0007a180 7330
.org 0x7a182
	ldrb r0, [r0, #0]	@ 0007a182 0078
.org 0x7a184
	cmp r0, #3	@ 0007a184 0328
.org 0x7a186
	bne.n 0x7a202	@ 0007a186 3cd1
.org 0x7a188
	ldr r1, [pc, #24]	@ 0007a188 0649
.org 0x7a18a
	adds r0, r4, #0	@ 0007a18a 201c
.org 0x7a18c
	bl 0x1cf00	@ 0007a18c a2f7b8fe
.org 0x7a190
	adds r0, r4, #0	@ 0007a190 201c
.org 0x7a192
	bl 0x1cff0	@ 0007a192 a2f72dff
.org 0x7a196
	adds r0, r4, #0	@ 0007a196 201c
.org 0x7a198
	movs r1, #0	@ 0007a198 0021
.org 0x7a19a
	movs r2, #0	@ 0007a19a 0022
.org 0x7a19c
	bl 0xae098	@ 0007a19c 33f07cff
.org 0x7a1a0
	str r0, [r4, #44]	@ 0007a1a0 e062
.org 0x7a1a2
	b.n 0x7a1de	@ 0007a1a2 1ce0
.org 0x7a1a4
	.byte 0x03,0xb1,0x00,0x00	@ 0007a1a4 data
.org 0x7a1a8
	ldrb r0, [r4, #30]	@ 0007a1a8 a07f
.org 0x7a1aa
	lsls r0, r0, #8	@ 0007a1aa 0002
.org 0x7a1ac
	adds r1, r4, #0	@ 0007a1ac 211c
.org 0x7a1ae
	adds r1, #112	@ 0007a1ae 7031
.org 0x7a1b0
	ldrb r1, [r1, #0]	@ 0007a1b0 0978
.org 0x7a1b2
	orrs r0, r1	@ 0007a1b2 0843
.org 0x7a1b4
	ldr r1, [pc, #48]	@ 0007a1b4 0c49
.org 0x7a1b6
	cmp r0, r1	@ 0007a1b6 8842
.org 0x7a1b8
	bne.n 0x7a1d2	@ 0007a1b8 0bd1
.org 0x7a1ba
	adds r0, r4, #0	@ 0007a1ba 201c
.org 0x7a1bc
	adds r0, #115	@ 0007a1bc 7330
.org 0x7a1be
	ldrb r0, [r0, #0]	@ 0007a1be 0078
.org 0x7a1c0
	cmp r0, #3	@ 0007a1c0 0328
.org 0x7a1c2
	bne.n 0x7a1d2	@ 0007a1c2 06d1
.org 0x7a1c4
	subs r1, #2	@ 0007a1c4 0239
.org 0x7a1c6
	adds r0, r4, #0	@ 0007a1c6 201c
.org 0x7a1c8
	bl 0x1cf00	@ 0007a1c8 a2f79afe
.org 0x7a1cc
	adds r0, r4, #0	@ 0007a1cc 201c
.org 0x7a1ce
	bl 0x1cff0	@ 0007a1ce a2f70fff
.org 0x7a1d2
	ldr r0, [r4, #44]	@ 0007a1d2 e06a
.org 0x7a1d4
	ldrb r0, [r0, #12]	@ 0007a1d4 007b
.org 0x7a1d6
	cmp r0, #1	@ 0007a1d6 0128
.org 0x7a1d8
	bls.n 0x7a202	@ 0007a1d8 13d9
.org 0x7a1da
	movs r0, #8	@ 0007a1da 0820
.org 0x7a1dc
	strb r0, [r4, #18]	@ 0007a1dc a074
.org 0x7a1de
	ldrb r0, [r4, #15]	@ 0007a1de e07b
.org 0x7a1e0
	adds r0, #1	@ 0007a1e0 0130
.org 0x7a1e2
	strb r0, [r4, #15]	@ 0007a1e2 e073
.org 0x7a1e4
	b.n 0x7a202	@ 0007a1e4 0de0
.org 0x7a1e6
	.byte 0x00	@ 0007a1e6 data
.org 0x7a1e7
	.byte 0x00	@ 0007a1e7 data
.org 0x7a1e8
	.byte 0x03,0xb1,0x00,0x00	@ 0007a1e8 data
.org 0x7a1ec
	ldrb r0, [r4, #18]	@ 0007a1ec a07c
.org 0x7a1ee
	subs r0, #1	@ 0007a1ee 0138
.org 0x7a1f0
	strb r0, [r4, #18]	@ 0007a1f0 a074
.org 0x7a1f2
	lsls r0, r0, #24	@ 0007a1f2 0006
.org 0x7a1f4
	lsrs r0, r0, #24	@ 0007a1f4 000e
.org 0x7a1f6
	cmp r0, #255	@ 0007a1f6 ff28
