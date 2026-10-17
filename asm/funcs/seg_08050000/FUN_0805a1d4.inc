@ FUN_0805a1d4  entry 0x0805a1d4  size 246
.thumb
.org 0x5a1d4
FUN_0805a1d4:
	push {r4, r5, r6, lr}	@ 0005a1d4 70b5
.org 0x5a1d6
	adds r5, r0, #0	@ 0005a1d6 051c
.org 0x5a1d8
	ldrb r0, [r5, #10]	@ 0005a1d8 a87a
.org 0x5a1da
	lsrs r4, r0, #4	@ 0005a1da 0409
.org 0x5a1dc
	movs r6, #1	@ 0005a1dc 0126
.org 0x5a1de
	ands r4, r6	@ 0005a1de 3440
.org 0x5a1e0
	ldrb r0, [r5, #15]	@ 0005a1e0 e87b
.org 0x5a1e2
	cmp r0, #0	@ 0005a1e2 0028
.org 0x5a1e4
	bne.n 0x5a274	@ 0005a1e4 46d1
.org 0x5a1e6
	adds r0, r5, #0	@ 0005a1e6 281c
.org 0x5a1e8
	adds r0, #116	@ 0005a1e8 7430
.org 0x5a1ea
	ldr r1, [pc, #52]	@ 0005a1ea 0d49
.org 0x5a1ec
	bl 0x5784	@ 0005a1ec abf7cafa
.org 0x5a1f0
	ldrb r0, [r5, #30]	@ 0005a1f0 a87f
.org 0x5a1f2
	lsls r0, r0, #8	@ 0005a1f2 0002
.org 0x5a1f4
	adds r1, r5, #0	@ 0005a1f4 291c
.org 0x5a1f6
	adds r1, #112	@ 0005a1f6 7031
.org 0x5a1f8
	ldrb r1, [r1, #0]	@ 0005a1f8 0978
.org 0x5a1fa
	orrs r0, r1	@ 0005a1fa 0843
.org 0x5a1fc
	ldr r1, [pc, #36]	@ 0005a1fc 0949
.org 0x5a1fe
	cmp r0, r1	@ 0005a1fe 8842
.org 0x5a200
	beq.n 0x5a20e	@ 0005a200 05d0
.org 0x5a202
	adds r0, r5, #0	@ 0005a202 281c
.org 0x5a204
	bl 0x1cf00	@ 0005a204 c2f77cfe
.org 0x5a208
	adds r0, r5, #0	@ 0005a208 281c
.org 0x5a20a
	adds r0, #189	@ 0005a20a bd30
.org 0x5a20c
	strb r6, [r0, #0]	@ 0005a20c 0670
.org 0x5a20e
	cmp r4, #0	@ 0005a20e 002c
.org 0x5a210
	bne.n 0x5a228	@ 0005a210 0ad1
.org 0x5a212
	adds r0, r5, #0	@ 0005a212 281c
.org 0x5a214
	bl 0x5c3a8	@ 0005a214 02f0c8f8
.org 0x5a218
	movs r1, #128	@ 0005a218 8021
.org 0x5a21a
	lsls r1, r1, #6	@ 0005a21a 8901
.org 0x5a21c
	b.n 0x5a232	@ 0005a21c 09e0
.org 0x5a21e
	.byte 0x00	@ 0005a21e data
.org 0x5a21f
	.byte 0x00	@ 0005a21f data
.org 0x5a220
	.byte 0xe4,0x88,0x85,0x08	@ 0005a220 data
.org 0x5a224
	.byte 0x01,0xa3,0x00,0x00	@ 0005a224 data
.org 0x5a228
	adds r0, r5, #0	@ 0005a228 281c
.org 0x5a22a
	bl 0x5c3a8	@ 0005a22a 02f0bdf8
.org 0x5a22e
	movs r1, #208	@ 0005a22e d021
.org 0x5a230
	lsls r1, r1, #8	@ 0005a230 0902
.org 0x5a232
	adds r0, r0, r1	@ 0005a232 4018
.org 0x5a234
	str r0, [r5, #100]	@ 0005a234 6866
.org 0x5a236
	adds r0, r5, #0	@ 0005a236 281c
.org 0x5a238
	adds r0, #180	@ 0005a238 b430
.org 0x5a23a
	ldr r0, [r0, #0]	@ 0005a23a 0068
.org 0x5a23c
	ldr r1, [pc, #148]	@ 0005a23c 2549
.org 0x5a23e
	adds r0, r0, r1	@ 0005a23e 4018
.org 0x5a240
	str r0, [r5, #104]	@ 0005a240 a866
.org 0x5a242
	ldr r0, [r5, #100]	@ 0005a242 686e
.org 0x5a244
	ldr r1, [r5, #84]	@ 0005a244 696d
.org 0x5a246
	subs r0, r0, r1	@ 0005a246 401a
.org 0x5a248
	str r0, [r5, #92]	@ 0005a248 e865
.org 0x5a24a
	lsls r0, r0, #8	@ 0005a24a 0002
.org 0x5a24c
	lsls r2, r4, #1	@ 0005a24c 6200
.org 0x5a24e
	subs r2, #1	@ 0005a24e 013a
.org 0x5a250
	lsls r1, r2, #3	@ 0005a250 d100
.org 0x5a252
	adds r1, r1, r2	@ 0005a252 8918
.org 0x5a254
	lsls r1, r1, #6	@ 0005a254 8901
.org 0x5a256
	bl 0x128fb8	@ 0005a256 cef0affe
.org 0x5a25a
	str r0, [r5, #96]	@ 0005a25a 2866
.org 0x5a25c
	cmp r0, #0	@ 0005a25c 0028
.org 0x5a25e
	bne.n 0x5a264	@ 0005a25e 01d1
.org 0x5a260
	movs r0, #1	@ 0005a260 0120
.org 0x5a262
	str r0, [r5, #96]	@ 0005a262 2866
.org 0x5a264
	adds r0, r5, #0	@ 0005a264 281c
.org 0x5a266
	adds r0, #192	@ 0005a266 c030
.org 0x5a268
	ldr r1, [r5, #96]	@ 0005a268 296e
.org 0x5a26a
	asrs r1, r1, #8	@ 0005a26a 0912
.org 0x5a26c
	str r1, [r0, #0]	@ 0005a26c 0160
.org 0x5a26e
	ldrb r0, [r5, #15]	@ 0005a26e e87b
.org 0x5a270
	adds r0, #1	@ 0005a270 0130
.org 0x5a272
	strb r0, [r5, #15]	@ 0005a272 e873
.org 0x5a274
	adds r0, r5, #0	@ 0005a274 281c
.org 0x5a276
	bl 0x1cff0	@ 0005a276 c2f7bbfe
.org 0x5a27a
	adds r6, r5, #0	@ 0005a27a 2e1c
.org 0x5a27c
	adds r6, #192	@ 0005a27c c036
.org 0x5a27e
	ldr r0, [r6, #0]	@ 0005a27e 3068
.org 0x5a280
	cmp r0, #0	@ 0005a280 0028
.org 0x5a282
	beq.n 0x5a288	@ 0005a282 01d0
.org 0x5a284
	subs r0, #1	@ 0005a284 0138
.org 0x5a286
	str r0, [r6, #0]	@ 0005a286 3060
.org 0x5a288
	ldr r1, [r5, #92]	@ 0005a288 e96d
.org 0x5a28a
	ldr r0, [r6, #0]	@ 0005a28a 3068
.org 0x5a28c
	muls r0, r1	@ 0005a28c 4843
.org 0x5a28e
	lsls r0, r0, #8	@ 0005a28e 0002
.org 0x5a290
	ldr r4, [r5, #96]	@ 0005a290 2c6e
.org 0x5a292
	adds r1, r4, #0	@ 0005a292 211c
.org 0x5a294
	bl 0x128fb8	@ 0005a294 cef090fe
.org 0x5a298
	ldr r1, [r5, #100]	@ 0005a298 696e
.org 0x5a29a
	subs r1, r1, r0	@ 0005a29a 091a
.org 0x5a29c
	str r1, [r5, #84]	@ 0005a29c 6965
.org 0x5a29e
	ldr r0, [r6, #0]	@ 0005a29e 3068
.org 0x5a2a0
	lsls r0, r0, #17	@ 0005a2a0 4004
.org 0x5a2a2
	adds r1, r4, #0	@ 0005a2a2 211c
.org 0x5a2a4
	bl 0x128fb8	@ 0005a2a4 cef088fe
.org 0x5a2a8
	ldr r1, [pc, #44]	@ 0005a2a8 0b49
.org 0x5a2aa
	lsls r0, r0, #24	@ 0005a2aa 0006
.org 0x5a2ac
	lsrs r0, r0, #23	@ 0005a2ac c00d
.org 0x5a2ae
	adds r0, r0, r1	@ 0005a2ae 4018
.org 0x5a2b0
	movs r1, #0	@ 0005a2b0 0021
.org 0x5a2b2
	ldrsh r0, [r0, r1]	@ 0005a2b2 405e
.org 0x5a2b4
	lsls r1, r0, #1	@ 0005a2b4 4100
.org 0x5a2b6
	adds r1, r1, r0	@ 0005a2b6 0918
.org 0x5a2b8
	lsls r1, r1, #2	@ 0005a2b8 8900
.org 0x5a2ba
	ldr r0, [r5, #104]	@ 0005a2ba a86e
.org 0x5a2bc
	adds r0, r0, r1	@ 0005a2bc 4018
.org 0x5a2be
	str r0, [r5, #88]	@ 0005a2be a865
.org 0x5a2c0
	ldr r1, [r6, #0]	@ 0005a2c0 3168
.org 0x5a2c2
	cmp r1, #0	@ 0005a2c2 0029
.org 0x5a2c4
	bne.n 0x5a2ce	@ 0005a2c4 03d1
.org 0x5a2c6
	movs r0, #3	@ 0005a2c6 0320
.org 0x5a2c8
	strb r0, [r5, #13]	@ 0005a2c8 6873
