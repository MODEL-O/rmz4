@ FUN_080891f4  entry 0x080891f4  size 144
.thumb
.org 0x891f4
FUN_080891f4:
	push {r4, lr}	@ 000891f4 10b5
.org 0x891f6
	adds r4, r0, #0	@ 000891f6 041c
.org 0x891f8
	adds r2, r4, #0	@ 000891f8 221c
.org 0x891fa
	adds r2, #140	@ 000891fa 8c32
.org 0x891fc
	ldr r0, [r2, #0]	@ 000891fc 1068
.org 0x891fe
	movs r1, #128	@ 000891fe 8021
.org 0x89200
	lsls r1, r1, #2	@ 00089200 8900
.org 0x89202
	ands r0, r1	@ 00089202 0840
.org 0x89204
	cmp r0, #0	@ 00089204 0028
.org 0x89206
	beq.n 0x89246	@ 00089206 1ed0
.org 0x89208
	ldr r1, [pc, #44]	@ 00089208 0b49
.org 0x8920a
	ldrb r0, [r4, #9]	@ 0008920a 607a
.org 0x8920c
	lsls r0, r0, #2	@ 0008920c 8000
.org 0x8920e
	adds r0, r0, r1	@ 0008920e 4018
.org 0x89210
	movs r1, #2	@ 00089210 0221
.org 0x89212
	str r1, [r4, #12]	@ 00089212 e160
.org 0x89214
	ldr r0, [r0, #0]	@ 00089214 0068
.org 0x89216
	ldr r0, [r0, #8]	@ 00089216 8068
.org 0x89218
	str r0, [r4, #20]	@ 00089218 6061
.org 0x8921a
	adds r0, r4, #0	@ 0008921a 201c
.org 0x8921c
	adds r0, #193	@ 0008921c c130
.org 0x8921e
	ldrb r0, [r0, #0]	@ 0008921e 0078
.org 0x89220
	cmp r0, #0	@ 00089220 0028
.org 0x89222
	bne.n 0x8923c	@ 00089222 0bd1
.org 0x89224
	ldr r1, [r2, #0]	@ 00089224 1168
.org 0x89226
	movs r0, #128	@ 00089226 8020
.org 0x89228
	lsls r0, r0, #9	@ 00089228 4002
.org 0x8922a
	ands r1, r0	@ 0008922a 0140
.org 0x8922c
	cmp r1, #0	@ 0008922c 0029
.org 0x8922e
	beq.n 0x8923c	@ 0008922e 05d0
.org 0x89230
	movs r0, #1	@ 00089230 0120
.org 0x89232
	strb r0, [r4, #13]	@ 00089232 6073
.org 0x89234
	b.n 0x8923e	@ 00089234 03e0
.org 0x89236
	.byte 0x00	@ 00089236 data
.org 0x89237
	.byte 0x00	@ 00089237 data
.org 0x89238
	.byte 0x40,0xdb,0x85,0x08	@ 00089238 data
.org 0x8923c
	strb r1, [r4, #13]	@ 0008923c 6173
.org 0x8923e
	adds r0, r4, #0	@ 0008923e 201c
.org 0x89240
	bl 0x89294	@ 00089240 00f028f8
.org 0x89244
	b.n 0x89284	@ 00089244 1ee0
.org 0x89246
	adds r0, r4, #0	@ 00089246 201c
.org 0x89248
	bl 0x7f90c	@ 00089248 f6f760fb
.org 0x8924c
	cmp r0, #0	@ 0008924c 0028
.org 0x8924e
	beq.n 0x8925e	@ 0008924e 06d0
.org 0x89250
	adds r0, r4, #0	@ 00089250 201c
.org 0x89252
	adds r0, #188	@ 00089252 bc30
.org 0x89254
	ldr r0, [r0, #0]	@ 00089254 0068
.org 0x89256
	cmp r0, #0	@ 00089256 0028
.org 0x89258
	bne.n 0x8925e	@ 00089258 01d1
.org 0x8925a
	strb r0, [r4, #13]	@ 0008925a 6073
.org 0x8925c
	strb r0, [r4, #14]	@ 0008925c a073
.org 0x8925e
	ldr r1, [pc, #44]	@ 0008925e 0b49
.org 0x89260
	ldrb r0, [r4, #13]	@ 00089260 607b
.org 0x89262
	lsls r0, r0, #2	@ 00089262 8000
.org 0x89264
	adds r0, r0, r1	@ 00089264 4018
.org 0x89266
	ldr r1, [r0, #0]	@ 00089266 0168
.org 0x89268
	adds r0, r4, #0	@ 00089268 201c
.org 0x8926a
	bl 0x128f80	@ 0008926a 9ff089fe
.org 0x8926e
	adds r0, r4, #0	@ 0008926e 201c
.org 0x89270
	bl 0x89e58	@ 00089270 00f0f2fd
.org 0x89274
	ldr r1, [pc, #24]	@ 00089274 0649
.org 0x89276
	ldrb r0, [r4, #13]	@ 00089276 607b
.org 0x89278
	lsls r0, r0, #2	@ 00089278 8000
.org 0x8927a
	adds r0, r0, r1	@ 0008927a 4018
.org 0x8927c
	ldr r1, [r0, #0]	@ 0008927c 0168
.org 0x8927e
	adds r0, r4, #0	@ 0008927e 201c
.org 0x89280
	bl 0x128f80	@ 00089280 9ff07efe
