@ FUN_080e4098  entry 0x080e4098  size 280
.thumb
.org 0xe4098
FUN_080e4098:
	push {r4, r5, lr}	@ 000e4098 30b5
.org 0xe409a
	adds r4, r0, #0	@ 000e409a 041c
.org 0xe409c
	ldr r5, [r4, #124]	@ 000e409c e56f
.org 0xe409e
	bl 0x1cff0	@ 000e409e 38f7a7ff
.org 0xe40a2
	ldrb r1, [r5, #3]	@ 000e40a2 e978
.org 0xe40a4
	movs r0, #64	@ 000e40a4 4020
.org 0xe40a6
	ands r0, r1	@ 000e40a6 0840
.org 0xe40a8
	cmp r0, #0	@ 000e40a8 0028
.org 0xe40aa
	beq.n 0xe40ce	@ 000e40aa 10d0
.org 0xe40ac
	ldrb r0, [r4, #19]	@ 000e40ac e07c
.org 0xe40ae
	ldrb r1, [r4, #18]	@ 000e40ae a17c
.org 0xe40b0
	lsrs r0, r0, #1	@ 000e40b0 4008
.org 0xe40b2
	cmp r0, r1	@ 000e40b2 8842
.org 0xe40b4
	bls.n 0xe40ce	@ 000e40b4 0bd9
.org 0xe40b6
	movs r0, #1	@ 000e40b6 0120
.org 0xe40b8
	ands r0, r1	@ 000e40b8 0840
.org 0xe40ba
	cmp r0, #0	@ 000e40ba 0028
.org 0xe40bc
	beq.n 0xe40c6	@ 000e40bc 03d0
.org 0xe40be
	ldrb r1, [r4, #10]	@ 000e40be a17a
.org 0xe40c0
	movs r0, #1	@ 000e40c0 0120
.org 0xe40c2
	orrs r0, r1	@ 000e40c2 0843
.org 0xe40c4
	b.n 0xe40cc	@ 000e40c4 02e0
.org 0xe40c6
	ldrb r1, [r4, #10]	@ 000e40c6 a17a
.org 0xe40c8
	movs r0, #254	@ 000e40c8 fe20
.org 0xe40ca
	ands r0, r1	@ 000e40ca 0840
.org 0xe40cc
	strb r0, [r4, #10]	@ 000e40cc a072
.org 0xe40ce
	ldrb r1, [r5, #3]	@ 000e40ce e978
.org 0xe40d0
	movs r0, #16	@ 000e40d0 1020
.org 0xe40d2
	ands r0, r1	@ 000e40d2 0840
.org 0xe40d4
	cmp r0, #0	@ 000e40d4 0028
.org 0xe40d6
	beq.n 0xe40f2	@ 000e40d6 0cd0
.org 0xe40d8
	ldrb r1, [r4, #18]	@ 000e40d8 a17c
.org 0xe40da
	movs r0, #1	@ 000e40da 0120
.org 0xe40dc
	ands r0, r1	@ 000e40dc 0840
.org 0xe40de
	cmp r0, #0	@ 000e40de 0028
.org 0xe40e0
	beq.n 0xe40ea	@ 000e40e0 03d0
.org 0xe40e2
	ldrb r1, [r4, #10]	@ 000e40e2 a17a
.org 0xe40e4
	movs r0, #1	@ 000e40e4 0120
.org 0xe40e6
	orrs r0, r1	@ 000e40e6 0843
.org 0xe40e8
	b.n 0xe40f0	@ 000e40e8 02e0
.org 0xe40ea
	ldrb r1, [r4, #10]	@ 000e40ea a17a
.org 0xe40ec
	movs r0, #254	@ 000e40ec fe20
.org 0xe40ee
	ands r0, r1	@ 000e40ee 0840
.org 0xe40f0
	strb r0, [r4, #10]	@ 000e40f0 a072
.org 0xe40f2
	ldr r1, [r4, #96]	@ 000e40f2 216e
.org 0xe40f4
	ldr r0, [r4, #104]	@ 000e40f4 a06e
.org 0xe40f6
	adds r2, r1, r0	@ 000e40f6 0a18
.org 0xe40f8
	str r2, [r4, #96]	@ 000e40f8 2266
.org 0xe40fa
	ldr r0, [r4, #88]	@ 000e40fa a06d
.org 0xe40fc
	adds r3, r0, r2	@ 000e40fc 8318
.org 0xe40fe
	str r3, [r4, #88]	@ 000e40fe a365
.org 0xe4100
	ldrb r1, [r5, #3]	@ 000e4100 e978
.org 0xe4102
	movs r0, #32	@ 000e4102 2020
.org 0xe4104
	ands r0, r1	@ 000e4104 0840
.org 0xe4106
	lsls r0, r0, #24	@ 000e4106 0006
.org 0xe4108
	lsrs r5, r0, #24	@ 000e4108 050e
.org 0xe410a
	cmp r5, #0	@ 000e410a 002d
.org 0xe410c
	bne.n 0xe4176	@ 000e410c 33d1
.org 0xe410e
	adds r1, r3, #0	@ 000e410e 191c
.org 0xe4110
	cmp r2, #0	@ 000e4110 002a
.org 0xe4112
	ble.n 0xe4120	@ 000e4112 05dd
.org 0xe4114
	adds r0, r4, #0	@ 000e4114 201c
.org 0xe4116
	adds r0, #118	@ 000e4116 7630
.org 0xe4118
	movs r2, #0	@ 000e4118 0022
.org 0xe411a
	ldrsh r0, [r0, r2]	@ 000e411a 805e
.org 0xe411c
	adds r1, r1, r0	@ 000e411c 0918
.org 0xe411e
	b.n 0xe412a	@ 000e411e 04e0
.org 0xe4120
	adds r0, r4, #0	@ 000e4120 201c
.org 0xe4122
	adds r0, #118	@ 000e4122 7630
.org 0xe4124
	movs r1, #0	@ 000e4124 0021
.org 0xe4126
	ldrsh r0, [r0, r1]	@ 000e4126 405e
.org 0xe4128
	subs r1, r3, r0	@ 000e4128 191a
.org 0xe412a
	ldr r0, [r4, #84]	@ 000e412a 606d
.org 0xe412c
	bl 0x7c7c	@ 000e412c 23f7a6fd
.org 0xe4130
	lsls r0, r0, #16	@ 000e4130 0004
.org 0xe4132
	cmp r0, #0	@ 000e4132 0028
.org 0xe4134
	beq.n 0xe4138	@ 000e4134 00d0
.org 0xe4136
	strb r5, [r4, #18]	@ 000e4136 a574
.org 0xe4138
	ldr r0, [r4, #92]	@ 000e4138 e06d
.org 0xe413a
	ldr r1, [r4, #100]	@ 000e413a 616e
.org 0xe413c
	adds r0, r0, r1	@ 000e413c 4018
.org 0xe413e
	str r0, [r4, #92]	@ 000e413e e065
.org 0xe4140
	ldr r1, [r4, #84]	@ 000e4140 616d
.org 0xe4142
	adds r1, r1, r0	@ 000e4142 0918
.org 0xe4144
	str r1, [r4, #84]	@ 000e4144 6165
.org 0xe4146
	adds r2, r1, #0	@ 000e4146 0a1c
.org 0xe4148
	cmp r0, #0	@ 000e4148 0028
.org 0xe414a
	ble.n 0xe4158	@ 000e414a 05dd
.org 0xe414c
	adds r0, r4, #0	@ 000e414c 201c
.org 0xe414e
	adds r0, #116	@ 000e414e 7430
.org 0xe4150
	movs r1, #0	@ 000e4150 0021
.org 0xe4152
	ldrsh r0, [r0, r1]	@ 000e4152 405e
.org 0xe4154
	adds r2, r2, r0	@ 000e4154 1218
.org 0xe4156
	b.n 0xe4162	@ 000e4156 04e0
.org 0xe4158
	adds r0, r4, #0	@ 000e4158 201c
.org 0xe415a
	adds r0, #116	@ 000e415a 7430
.org 0xe415c
	movs r2, #0	@ 000e415c 0022
.org 0xe415e
	ldrsh r0, [r0, r2]	@ 000e415e 805e
.org 0xe4160
	subs r2, r1, r0	@ 000e4160 0a1a
.org 0xe4162
	ldr r1, [r4, #88]	@ 000e4162 a16d
.org 0xe4164
	adds r0, r2, #0	@ 000e4164 101c
.org 0xe4166
	bl 0x7c7c	@ 000e4166 23f789fd
.org 0xe416a
	lsls r0, r0, #16	@ 000e416a 0004
.org 0xe416c
	cmp r0, #0	@ 000e416c 0028
.org 0xe416e
	beq.n 0xe4184	@ 000e416e 09d0
.org 0xe4170
	movs r0, #0	@ 000e4170 0020
.org 0xe4172
	strb r0, [r4, #18]	@ 000e4172 a074
.org 0xe4174
	b.n 0xe4184	@ 000e4174 06e0
.org 0xe4176
	ldr r0, [r4, #92]	@ 000e4176 e06d
.org 0xe4178
	ldr r1, [r4, #100]	@ 000e4178 616e
.org 0xe417a
	adds r0, r0, r1	@ 000e417a 4018
.org 0xe417c
	str r0, [r4, #92]	@ 000e417c e065
.org 0xe417e
	ldr r1, [r4, #84]	@ 000e417e 616d
.org 0xe4180
	adds r1, r1, r0	@ 000e4180 0918
.org 0xe4182
	str r1, [r4, #84]	@ 000e4182 6165
.org 0xe4184
	ldrb r0, [r4, #18]	@ 000e4184 a07c
.org 0xe4186
	subs r0, #1	@ 000e4186 0138
.org 0xe4188
	strb r0, [r4, #18]	@ 000e4188 a074
.org 0xe418a
	lsls r0, r0, #24	@ 000e418a 0006
.org 0xe418c
	lsrs r0, r0, #24	@ 000e418c 000e
.org 0xe418e
	cmp r0, #255	@ 000e418e ff28
.org 0xe4190
	bne.n 0xe41aa	@ 000e4190 0bd1
.org 0xe4192
	ldr r1, [pc, #28]	@ 000e4192 0749
.org 0xe4194
	ldrb r0, [r4, #9]	@ 000e4194 607a
.org 0xe4196
	lsls r0, r0, #2	@ 000e4196 8000
.org 0xe4198
	adds r0, r0, r1	@ 000e4198 4018
.org 0xe419a
	movs r1, #2	@ 000e419a 0221
.org 0xe419c
	str r1, [r4, #12]	@ 000e419c e160
.org 0xe419e
	ldr r0, [r0, #0]	@ 000e419e 0068
.org 0xe41a0
	ldr r0, [r0, #8]	@ 000e41a0 8068
.org 0xe41a2
	str r0, [r4, #20]	@ 000e41a2 6061
.org 0xe41a4
	adds r0, r4, #0	@ 000e41a4 201c
.org 0xe41a6
	bl 0xe3fdc	@ 000e41a6 fff719ff
.org 0xe41aa
	pop {r4, r5}	@ 000e41aa 30bc
.org 0xe41ac
	pop {r0}	@ 000e41ac 01bc
.org 0xe41ae
	bx r0	@ 000e41ae 0047
