@ FUN_08033204  entry 0x08033204  size 92
.thumb
.org 0x33204
FUN_08033204:
	push {r4, lr}	@ 00033204 10b5
.org 0x33206
	adds r4, r0, #0	@ 00033206 041c
.org 0x33208
	ldrb r0, [r4, #15]	@ 00033208 e07b
.org 0x3320a
	cmp r0, #1	@ 0003320a 0128
.org 0x3320c
	beq.n 0x33240	@ 0003320c 18d0
.org 0x3320e
	cmp r0, #1	@ 0003320e 0128
.org 0x33210
	bgt.n 0x3325a	@ 00033210 23dc
.org 0x33212
	cmp r0, #0	@ 00033212 0028
.org 0x33214
	bne.n 0x3325a	@ 00033214 21d1
.org 0x33216
	ldrb r0, [r4, #30]	@ 00033216 a07f
.org 0x33218
	lsls r0, r0, #8	@ 00033218 0002
.org 0x3321a
	adds r1, r4, #0	@ 0003321a 211c
.org 0x3321c
	adds r1, #112	@ 0003321c 7031
.org 0x3321e
	ldrb r1, [r1, #0]	@ 0003321e 0978
.org 0x33220
	orrs r1, r0	@ 00033220 0143
.org 0x33222
	movs r2, #152	@ 00033222 9822
.org 0x33224
	lsls r2, r2, #7	@ 00033224 d201
.org 0x33226
	cmp r1, r2	@ 00033226 9142
.org 0x33228
	beq.n 0x33230	@ 00033228 02d0
.org 0x3322a
	adds r0, r4, #0	@ 0003322a 201c
.org 0x3322c
	adds r1, r2, #0	@ 0003322c 111c
.org 0x3322e
	b.n 0x33250	@ 0003322e 0fe0
.org 0x33230
	movs r1, #154	@ 00033230 9a21
.org 0x33232
	lsls r1, r1, #7	@ 00033232 c901
.org 0x33234
	adds r0, r4, #0	@ 00033234 201c
.org 0x33236
	bl 0x1cf00	@ 00033236 e9f763fe
.org 0x3323a
	movs r0, #2	@ 0003323a 0220
.org 0x3323c
	strb r0, [r4, #15]	@ 0003323c e073
.org 0x3323e
	b.n 0x33254	@ 0003323e 09e0
.org 0x33240
	adds r0, r4, #0	@ 00033240 201c
.org 0x33242
	adds r0, #115	@ 00033242 7330
.org 0x33244
	ldrb r0, [r0, #0]	@ 00033244 0078
.org 0x33246
	cmp r0, #4	@ 00033246 0428
.org 0x33248
	bne.n 0x3325a	@ 00033248 07d1
.org 0x3324a
	movs r1, #154	@ 0003324a 9a21
.org 0x3324c
	lsls r1, r1, #7	@ 0003324c c901
.org 0x3324e
	adds r0, r4, #0	@ 0003324e 201c
.org 0x33250
	bl 0x1cf00	@ 00033250 e9f756fe
.org 0x33254
	ldrb r0, [r4, #15]	@ 00033254 e07b
.org 0x33256
	adds r0, #1	@ 00033256 0130
.org 0x33258
	strb r0, [r4, #15]	@ 00033258 e073
.org 0x3325a
	pop {r4}	@ 0003325a 10bc
.org 0x3325c
	pop {r0}	@ 0003325c 01bc
.org 0x3325e
	bx r0	@ 0003325e 0047
