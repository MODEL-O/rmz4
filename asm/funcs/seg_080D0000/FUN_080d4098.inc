@ FUN_080d4098  entry 0x080d4098  size 488
.thumb
.org 0xd4098
FUN_080d4098:
	push {r4, r5, r6, r7, lr}	@ 000d4098 f0b5
.org 0xd409a
	mov r7, r8	@ 000d409a 4746
.org 0xd409c
	push {r7}	@ 000d409c 80b4
.org 0xd409e
	sub sp, #36	@ 000d409e 89b0
.org 0xd40a0
	ldr r0, [r0, #8]	@ 000d40a0 8068
.org 0xd40a2
	mov r8, r0	@ 000d40a2 8046
.org 0xd40a4
	ldr r4, [pc, #120]	@ 000d40a4 1e4c
.org 0xd40a6
	ldr r1, [pc, #124]	@ 000d40a6 1f49
.org 0xd40a8
	mov r0, sp	@ 000d40a8 6846
.org 0xd40aa
	movs r2, #26	@ 000d40aa 1a22
.org 0xd40ac
	bl 0x129258	@ 000d40ac 55f0d4f8
.org 0xd40b0
	mov r1, r8	@ 000d40b0 4146
.org 0xd40b2
	ldrb r0, [r1, #12]	@ 000d40b2 087b
.org 0xd40b4
	cmp r0, #1	@ 000d40b4 0128
.org 0xd40b6
	bls.n 0xd40ba	@ 000d40b6 00d9
.org 0xd40b8
	b.n 0xd42a8	@ 000d40b8 f6e0
.org 0xd40ba
	ldrb r0, [r1, #15]	@ 000d40ba c87b
.org 0xd40bc
	cmp r0, #0	@ 000d40bc 0028
.org 0xd40be
	bne.n 0xd4140	@ 000d40be 3fd1
.org 0xd40c0
	ldr r4, [pc, #100]	@ 000d40c0 194c
.org 0xd40c2
	ldrh r1, [r4, #0]	@ 000d40c2 2188
.org 0xd40c4
	movs r2, #128	@ 000d40c4 8022
.org 0xd40c6
	lsls r2, r2, #1	@ 000d40c6 5200
.org 0xd40c8
	adds r0, r2, #0	@ 000d40c8 101c
.org 0xd40ca
	orrs r0, r1	@ 000d40ca 0843
.org 0xd40cc
	strh r0, [r4, #0]	@ 000d40cc 2080
.org 0xd40ce
	ldr r2, [pc, #92]	@ 000d40ce 174a
.org 0xd40d0
	ldrh r0, [r4, #4]	@ 000d40d0 a088
.org 0xd40d2
	movs r1, #248	@ 000d40d2 f821
.org 0xd40d4
	lsls r1, r1, #5	@ 000d40d4 4901
.org 0xd40d6
	ands r1, r0	@ 000d40d6 0140
.org 0xd40d8
	lsls r1, r1, #3	@ 000d40d8 c900
.org 0xd40da
	ldr r0, [pc, #84]	@ 000d40da 1548
.org 0xd40dc
	adds r1, r1, r0	@ 000d40dc 0918
.org 0xd40de
	str r2, [sp, #28]	@ 000d40de 0792
.org 0xd40e0
	add r0, sp, #28	@ 000d40e0 07a8
.org 0xd40e2
	ldr r2, [pc, #80]	@ 000d40e2 144a
.org 0xd40e4
	bl 0x128be0	@ 000d40e4 54f07cfd
.org 0xd40e8
	mov r1, r8	@ 000d40e8 4146
.org 0xd40ea
	ldrb r0, [r1, #15]	@ 000d40ea c87b
.org 0xd40ec
	adds r0, #1	@ 000d40ec 0130
.org 0xd40ee
	strb r0, [r1, #15]	@ 000d40ee c873
.org 0xd40f0
	ldrb r1, [r1, #16]	@ 000d40f0 097c
.org 0xd40f2
	lsls r0, r1, #2	@ 000d40f2 8800
.org 0xd40f4
	adds r0, r0, r1	@ 000d40f4 4018
.org 0xd40f6
	lsls r0, r0, #2	@ 000d40f6 8000
.org 0xd40f8
	ldr r2, [pc, #60]	@ 000d40f8 0f4a
.org 0xd40fa
	adds r0, r0, r2	@ 000d40fa 8018
.org 0xd40fc
	ldrh r2, [r4, #4]	@ 000d40fc a288
.org 0xd40fe
	movs r1, #12	@ 000d40fe 0c21
.org 0xd4100
	ands r1, r2	@ 000d4100 1140
.org 0xd4102
	lsls r1, r1, #12	@ 000d4102 0903
.org 0xd4104
	bl 0x1d30	@ 000d4104 2df714fe
.org 0xd4108
	mov r0, r8	@ 000d4108 4046
.org 0xd410a
	ldrb r1, [r0, #16]	@ 000d410a 017c
.org 0xd410c
	lsls r0, r1, #2	@ 000d410c 8800
.org 0xd410e
	adds r0, r0, r1	@ 000d410e 4018
.org 0xd4110
	lsls r0, r0, #2	@ 000d4110 8000
.org 0xd4112
	ldr r1, [pc, #40]	@ 000d4112 0a49
.org 0xd4114
	adds r0, r0, r1	@ 000d4114 4018
.org 0xd4116
	movs r1, #0	@ 000d4116 0021
.org 0xd4118
	bl 0x2208	@ 000d4118 2ef776f8
.org 0xd411c
	b.n 0xd4156	@ 000d411c 1be0
.org 0xd411e
	.byte 0x00	@ 000d411e data
.org 0xd411f
	.byte 0x00	@ 000d411f data
.org 0xd4120
	.byte 0x20,0xf6,0x02,0x02	@ 000d4120 data
.org 0xd4124
	.byte 0x44,0xa2,0x12,0x08	@ 000d4124 data
.org 0xd4128
	.byte 0x00,0x0a,0x00,0x02	@ 000d4128 data
.org 0xd412c
	.byte 0x00,0x12,0x00,0x12	@ 000d412c data
.org 0xd4130
	.byte 0x00,0x08,0x00,0x06	@ 000d4130 data
.org 0xd4134
	.byte 0x00,0x02,0x00,0x01	@ 000d4134 data
.org 0xd4138
	.byte 0xdc,0xc0,0xb6,0x08	@ 000d4138 data
.org 0xd413c
	.byte 0xe8,0xc0,0xb6,0x08	@ 000d413c data
.org 0xd4140
	mov r2, r8	@ 000d4140 4246
.org 0xd4142
	ldrb r0, [r2, #16]	@ 000d4142 107c
.org 0xd4144
	lsls r0, r0, #8	@ 000d4144 0002
.org 0xd4146
	ldr r1, [pc, #36]	@ 000d4146 0949
.org 0xd4148
	adds r0, r0, r1	@ 000d4148 4018
.org 0xd414a
	movs r2, #128	@ 000d414a 8022
.org 0xd414c
	lsls r2, r2, #2	@ 000d414c 9200
.org 0xd414e
	adds r1, r4, r2	@ 000d414e a118
.org 0xd4150
	movs r2, #64	@ 000d4150 4022
.org 0xd4152
	bl 0x128be0	@ 000d4152 54f045fd
.org 0xd4156
	mov r0, r8	@ 000d4156 4046
.org 0xd4158
	ldrb r4, [r0, #14]	@ 000d4158 847b
.org 0xd415a
	cmp r4, #1	@ 000d415a 012c
.org 0xd415c
	bne.n 0xd4160	@ 000d415c 00d1
.org 0xd415e
	b.n 0xd42a0	@ 000d415e 9fe0
.org 0xd4160
	cmp r4, #1	@ 000d4160 012c
.org 0xd4162
	bgt.n 0xd4170	@ 000d4162 05dc
.org 0xd4164
	cmp r4, #0	@ 000d4164 002c
.org 0xd4166
	beq.n 0xd417a	@ 000d4166 08d0
.org 0xd4168
	b.n 0xd42a0	@ 000d4168 9ae0
.org 0xd416a
	.byte 0x00	@ 000d416a data
.org 0xd416b
	.byte 0x00	@ 000d416b data
.org 0xd416c
	.byte 0x00,0x73,0x86,0x08	@ 000d416c data
.org 0xd4170
	cmp r4, #2	@ 000d4170 022c
.org 0xd4172
	beq.n 0xd41ea	@ 000d4172 3ad0
.org 0xd4174
	cmp r4, #3	@ 000d4174 032c
.org 0xd4176
	beq.n 0xd4228	@ 000d4176 57d0
.org 0xd4178
	b.n 0xd42a0	@ 000d4178 92e0
.org 0xd417a
	movs r0, #160	@ 000d417a a020
.org 0xd417c
	lsls r0, r0, #1	@ 000d417c 4000
.org 0xd417e
	bl 0xa70	@ 000d417e 2cf777fc
.org 0xd4182
	adds r7, r0, #0	@ 000d4182 071c
.org 0xd4184
	cmp r7, #0	@ 000d4184 002f
.org 0xd4186
	bne.n 0xd418a	@ 000d4186 00d1
.org 0xd4188
	b.n 0xd42a0	@ 000d4188 8ae0
.org 0xd418a
	str r4, [sp, #32]	@ 000d418a 0894
.org 0xd418c
	add r0, sp, #32	@ 000d418c 08a8
.org 0xd418e
	ldr r2, [pc, #32]	@ 000d418e 084a
.org 0xd4190
	adds r1, r7, #0	@ 000d4190 391c
.org 0xd4192
	bl 0x128be0	@ 000d4192 54f025fd
.org 0xd4196
	movs r5, #0	@ 000d4196 0025
.org 0xd4198
	adds r3, r7, #0	@ 000d4198 3b1c
.org 0xd419a
	adds r3, #128	@ 000d419a 8033
.org 0xd419c
	mov r2, sp	@ 000d419c 6a46
.org 0xd419e
	adds r1, r2, r5	@ 000d419e 5119
.org 0xd41a0
	mov r2, r8	@ 000d41a0 4246
.org 0xd41a2
	ldrb r0, [r2, #18]	@ 000d41a2 907c
.org 0xd41a4
	ldrb r2, [r1, #0]	@ 000d41a4 0a78
.org 0xd41a6
	cmp r0, r2	@ 000d41a6 9042
.org 0xd41a8
	bcs.n 0xd41b4	@ 000d41a8 04d2
.org 0xd41aa
	movs r4, #255	@ 000d41aa ff24
.org 0xd41ac
	b.n 0xd41de	@ 000d41ac 17e0
.org 0xd41ae
	.byte 0x00	@ 000d41ae data
.org 0xd41af
	.byte 0x00	@ 000d41af data
.org 0xd41b0
	.byte 0x50,0x00,0x00,0x01	@ 000d41b0 data
.org 0xd41b4
	mov r2, r8	@ 000d41b4 4246
.org 0xd41b6
	ldrb r0, [r2, #18]	@ 000d41b6 907c
.org 0xd41b8
	ldrb r2, [r1, #0]	@ 000d41b8 0a78
.org 0xd41ba
	subs r0, r0, r2	@ 000d41ba 801a
.org 0xd41bc
	lsls r1, r0, #1	@ 000d41bc 4100
.org 0xd41be
	adds r1, r1, r0	@ 000d41be 0918
.org 0xd41c0
	lsls r1, r1, #3	@ 000d41c0 c900
.org 0xd41c2
	movs r0, #255	@ 000d41c2 ff20
.org 0xd41c4
	subs r0, r0, r1	@ 000d41c4 401a
.org 0xd41c6
	lsls r0, r0, #16	@ 000d41c6 0004
.org 0xd41c8
	lsrs r4, r0, #16	@ 000d41c8 040c
.org 0xd41ca
	cmp r0, #0	@ 000d41ca 0028
.org 0xd41cc
	bge.n 0xd41d0	@ 000d41cc 00da
.org 0xd41ce
	movs r4, #0	@ 000d41ce 0024
.org 0xd41d0
	movs r0, #1	@ 000d41d0 0120
.org 0xd41d2
	ands r2, r0	@ 000d41d2 0240
.org 0xd41d4
	cmp r2, #0	@ 000d41d4 002a
.org 0xd41d6
	bne.n 0xd41de	@ 000d41d6 02d1
.org 0xd41d8
	lsls r0, r4, #16	@ 000d41d8 2004
.org 0xd41da
	negs r0, r0	@ 000d41da 4042
.org 0xd41dc
	lsrs r4, r0, #16	@ 000d41dc 040c
.org 0xd41de
	strh r4, [r3, #0]	@ 000d41de 1c80
.org 0xd41e0
	adds r3, #2	@ 000d41e0 0233
.org 0xd41e2
	adds r5, #1	@ 000d41e2 0135
.org 0xd41e4
	cmp r5, #25	@ 000d41e4 192d
.org 0xd41e6
	ble.n 0xd419c	@ 000d41e6 d9dd
.org 0xd41e8
	b.n 0xd4282	@ 000d41e8 4be0
.org 0xd41ea
	movs r0, #160	@ 000d41ea a020
.org 0xd41ec
	lsls r0, r0, #1	@ 000d41ec 4000
.org 0xd41ee
	bl 0xa70	@ 000d41ee 2cf73ffc
.org 0xd41f2
	adds r7, r0, #0	@ 000d41f2 071c
.org 0xd41f4
	cmp r7, #0	@ 000d41f4 002f
.org 0xd41f6
	beq.n 0xd42a0	@ 000d41f6 53d0
.org 0xd41f8
	movs r0, #0	@ 000d41f8 0020
.org 0xd41fa
	str r0, [sp, #32]	@ 000d41fa 0890
.org 0xd41fc
	add r0, sp, #32	@ 000d41fc 08a8
.org 0xd41fe
	ldr r2, [pc, #36]	@ 000d41fe 094a
.org 0xd4200
	adds r1, r7, #0	@ 000d4200 391c
.org 0xd4202
	bl 0x128be0	@ 000d4202 54f0edfc
.org 0xd4206
	movs r5, #0	@ 000d4206 0025
.org 0xd4208
	adds r4, r7, #0	@ 000d4208 3c1c
.org 0xd420a
	adds r4, #128	@ 000d420a 8034
.org 0xd420c
	adds r0, r5, #0	@ 000d420c 281c
.org 0xd420e
	movs r1, #3	@ 000d420e 0321
.org 0xd4210
	bl 0x128fb8	@ 000d4210 54f0d2fe
.org 0xd4214
	subs r0, #4	@ 000d4214 0438
.org 0xd4216
	strh r0, [r4, #0]	@ 000d4216 2080
.org 0xd4218
	adds r4, #2	@ 000d4218 0234
.org 0xd421a
	adds r5, #1	@ 000d421a 0135
.org 0xd421c
	cmp r5, #25	@ 000d421c 192d
.org 0xd421e
	ble.n 0xd420c	@ 000d421e f5dd
.org 0xd4220
	b.n 0xd4282	@ 000d4220 2fe0
.org 0xd4222
	.byte 0x00	@ 000d4222 data
.org 0xd4223
	.byte 0x00	@ 000d4223 data
.org 0xd4224
	.byte 0x50,0x00,0x00,0x01	@ 000d4224 data
.org 0xd4228
	movs r0, #160	@ 000d4228 a020
.org 0xd422a
	lsls r0, r0, #1	@ 000d422a 4000
.org 0xd422c
	bl 0xa70	@ 000d422c 2cf720fc
.org 0xd4230
	adds r7, r0, #0	@ 000d4230 071c
.org 0xd4232
	cmp r7, #0	@ 000d4232 002f
.org 0xd4234
	beq.n 0xd42a0	@ 000d4234 34d0
.org 0xd4236
	movs r0, #0	@ 000d4236 0020
.org 0xd4238
	str r0, [sp, #32]	@ 000d4238 0890
.org 0xd423a
	add r0, sp, #32	@ 000d423a 08a8
.org 0xd423c
	ldr r2, [pc, #116]	@ 000d423c 1d4a
.org 0xd423e
	adds r1, r7, #0	@ 000d423e 391c
.org 0xd4240
	bl 0x128be0	@ 000d4240 54f0cefc
.org 0xd4244
	movs r5, #0	@ 000d4244 0025
.org 0xd4246
	adds r6, r7, #0	@ 000d4246 3e1c
.org 0xd4248
	adds r6, #128	@ 000d4248 8036
.org 0xd424a
	mov r2, r8	@ 000d424a 4246
.org 0xd424c
	ldrb r1, [r2, #18]	@ 000d424c 917c
.org 0xd424e
	lsls r0, r1, #1	@ 000d424e 4800
.org 0xd4250
	adds r0, r0, r1	@ 000d4250 4018
.org 0xd4252
	lsls r4, r0, #2	@ 000d4252 8400
.org 0xd4254
	cmp r4, #255	@ 000d4254 ff2c
.org 0xd4256
	ble.n 0xd425a	@ 000d4256 00dd
.org 0xd4258
	movs r4, #255	@ 000d4258 ff24
.org 0xd425a
	movs r0, #1	@ 000d425a 0120
.org 0xd425c
	ands r0, r5	@ 000d425c 2840
.org 0xd425e
	cmp r0, #0	@ 000d425e 0028
.org 0xd4260
	bne.n 0xd4268	@ 000d4260 02d1
.org 0xd4262
	lsls r0, r4, #16	@ 000d4262 2004
.org 0xd4264
	negs r0, r0	@ 000d4264 4042
.org 0xd4266
	lsrs r4, r0, #16	@ 000d4266 040c
.org 0xd4268
	adds r0, r5, #0	@ 000d4268 281c
.org 0xd426a
	movs r1, #3	@ 000d426a 0321
.org 0xd426c
	bl 0x128fb8	@ 000d426c 54f0a4fe
.org 0xd4270
	lsls r1, r4, #16	@ 000d4270 2104
.org 0xd4272
	asrs r1, r1, #16	@ 000d4272 0914
.org 0xd4274
	adds r1, r1, r0	@ 000d4274 0918
.org 0xd4276
	subs r1, #4	@ 000d4276 0439
.org 0xd4278
	strh r1, [r6, #0]	@ 000d4278 3180
.org 0xd427a
	adds r6, #2	@ 000d427a 0236
.org 0xd427c
	adds r5, #1	@ 000d427c 0135
.org 0xd427e
	cmp r5, #25	@ 000d427e 192d
