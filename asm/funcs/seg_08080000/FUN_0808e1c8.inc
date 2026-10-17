@ FUN_0808e1c8  entry 0x0808e1c8  size 488
.thumb
.org 0x8e1c8
FUN_0808e1c8:
	push {r4, r5, r6, r7, lr}	@ 0008e1c8 f0b5
.org 0x8e1ca
	mov r7, sl	@ 0008e1ca 5746
.org 0x8e1cc
	mov r6, r9	@ 0008e1cc 4e46
.org 0x8e1ce
	mov r5, r8	@ 0008e1ce 4546
.org 0x8e1d0
	push {r5, r6, r7}	@ 0008e1d0 e0b4
.org 0x8e1d2
	sub sp, #8	@ 0008e1d2 82b0
.org 0x8e1d4
	adds r7, r0, #0	@ 0008e1d4 071c
.org 0x8e1d6
	ldr r0, [r7, #40]	@ 0008e1d6 b86a
.org 0x8e1d8
	str r0, [sp, #0]	@ 0008e1d8 0090
.org 0x8e1da
	ldrb r1, [r7, #17]	@ 0008e1da 797c
.org 0x8e1dc
	str r1, [sp, #4]	@ 0008e1dc 0191
.org 0x8e1de
	ldrb r2, [r7, #13]	@ 0008e1de 7a7b
.org 0x8e1e0
	mov r9, r2	@ 0008e1e0 9146
.org 0x8e1e2
	ldrb r0, [r7, #15]	@ 0008e1e2 f87b
.org 0x8e1e4
	cmp r0, #0	@ 0008e1e4 0028
.org 0x8e1e6
	bne.n 0x8e2aa	@ 0008e1e6 60d1
.org 0x8e1e8
	adds r0, r7, #0	@ 0008e1e8 381c
.org 0x8e1ea
	adds r0, #184	@ 0008e1ea b830
.org 0x8e1ec
	ldrh r1, [r0, #0]	@ 0008e1ec 0188
.org 0x8e1ee
	adds r6, r0, #0	@ 0008e1ee 061c
.org 0x8e1f0
	lsls r5, r2, #1	@ 0008e1f0 5500
.org 0x8e1f2
	cmp r1, #176	@ 0008e1f2 b029
.org 0x8e1f4
	bne.n 0x8e210	@ 0008e1f4 0cd1
.org 0x8e1f6
	ldr r0, [pc, #88]	@ 0008e1f6 1648
.org 0x8e1f8
	adds r0, r5, r0	@ 0008e1f8 2818
.org 0x8e1fa
	ldrh r0, [r0, #0]	@ 0008e1fa 0088
.org 0x8e1fc
	cmp r0, #176	@ 0008e1fc b028
.org 0x8e1fe
	bne.n 0x8e210	@ 0008e1fe 07d1
.org 0x8e200
	ldrb r0, [r7, #18]	@ 0008e200 b87c
.org 0x8e202
	cmp r0, #0	@ 0008e202 0028
.org 0x8e204
	bne.n 0x8e210	@ 0008e204 04d1
.org 0x8e206
	ldr r0, [pc, #76]	@ 0008e206 1348
.org 0x8e208
	add r0, r9	@ 0008e208 4844
.org 0x8e20a
	ldrb r4, [r0, #0]	@ 0008e20a 0478
.org 0x8e20c
	cmp r4, #0	@ 0008e20c 002c
.org 0x8e20e
	beq.n 0x8e25c	@ 0008e20e 25d0
.org 0x8e210
	adds r0, r7, #0	@ 0008e210 381c
.org 0x8e212
	bl 0x8e95c	@ 0008e212 00f0a3fb
.org 0x8e216
	ldr r1, [pc, #64]	@ 0008e216 1049
.org 0x8e218
	adds r0, r7, #0	@ 0008e218 381c
.org 0x8e21a
	bl 0x1cf00	@ 0008e21a 8ef771fe
.org 0x8e21e
	ldr r0, [pc, #48]	@ 0008e21e 0c48
.org 0x8e220
	adds r0, r5, r0	@ 0008e220 2818
.org 0x8e222
	ldrh r0, [r0, #0]	@ 0008e222 0088
.org 0x8e224
	ldrh r1, [r6, #0]	@ 0008e224 3188
.org 0x8e226
	subs r0, r0, r1	@ 0008e226 401a
.org 0x8e228
	adds r1, r7, #0	@ 0008e228 391c
.org 0x8e22a
	adds r1, #188	@ 0008e22a bc31
.org 0x8e22c
	strh r0, [r1, #0]	@ 0008e22c 0880
.org 0x8e22e
	ldr r0, [pc, #36]	@ 0008e22e 0948
.org 0x8e230
	add r0, r9	@ 0008e230 4844
.org 0x8e232
	ldrb r1, [r0, #0]	@ 0008e232 0178
.org 0x8e234
	adds r1, #128	@ 0008e234 8031
.org 0x8e236
	lsls r1, r1, #24	@ 0008e236 0906
.org 0x8e238
	lsrs r1, r1, #24	@ 0008e238 090e
.org 0x8e23a
	ldrb r0, [r7, #18]	@ 0008e23a b87c
.org 0x8e23c
	adds r0, #128	@ 0008e23c 8030
.org 0x8e23e
	lsls r0, r0, #24	@ 0008e23e 0006
.org 0x8e240
	lsrs r0, r0, #24	@ 0008e240 000e
.org 0x8e242
	subs r1, r1, r0	@ 0008e242 091a
.org 0x8e244
	adds r0, r7, #0	@ 0008e244 381c
.org 0x8e246
	adds r0, #190	@ 0008e246 be30
.org 0x8e248
	strh r1, [r0, #0]	@ 0008e248 0180
.org 0x8e24a
	movs r0, #1	@ 0008e24a 0120
.org 0x8e24c
	strb r0, [r7, #19]	@ 0008e24c f874
.org 0x8e24e
	b.n 0x8e26c	@ 0008e24e 0de0
.org 0x8e250
	.byte 0x54,0xfb,0x85,0x08	@ 0008e250 data
.org 0x8e254
	.byte 0x66,0xfb,0x85,0x08	@ 0008e254 data
.org 0x8e258
	.byte 0x05,0x2c,0x00,0x00	@ 0008e258 data
.org 0x8e25c
	adds r0, r7, #0	@ 0008e25c 381c
.org 0x8e25e
	bl 0x8e8f4	@ 0008e25e 00f049fb
.org 0x8e262
	ldr r1, [pc, #344]	@ 0008e262 5649
.org 0x8e264
	adds r0, r7, #0	@ 0008e264 381c
.org 0x8e266
	bl 0x1cf00	@ 0008e266 8ef74bfe
.org 0x8e26a
	strb r4, [r7, #19]	@ 0008e26a fc74
.org 0x8e26c
	adds r4, r7, #0	@ 0008e26c 3c1c
.org 0x8e26e
	adds r4, #192	@ 0008e26e c034
.org 0x8e270
	ldr r2, [pc, #332]	@ 0008e270 534a
.org 0x8e272
	mov r5, r9	@ 0008e272 4d46
.org 0x8e274
	lsls r3, r5, #3	@ 0008e274 eb00
.org 0x8e276
	adds r1, r3, r2	@ 0008e276 9918
.org 0x8e278
	ldr r5, [sp, #4]	@ 0008e278 019d
.org 0x8e27a
	lsls r0, r5, #1	@ 0008e27a 6800
.org 0x8e27c
	subs r0, #1	@ 0008e27c 0138
.org 0x8e27e
	ldr r1, [r1, #0]	@ 0008e27e 0968
.org 0x8e280
	muls r0, r1	@ 0008e280 4843
.org 0x8e282
	ldr r1, [r7, #100]	@ 0008e282 796e
.org 0x8e284
	subs r0, r0, r1	@ 0008e284 401a
.org 0x8e286
	str r0, [r4, #0]	@ 0008e286 2060
.org 0x8e288
	adds r2, #4	@ 0008e288 0432
.org 0x8e28a
	adds r3, r3, r2	@ 0008e28a 9b18
.org 0x8e28c
	ldr r0, [r3, #0]	@ 0008e28c 1868
.org 0x8e28e
	ldr r1, [r7, #104]	@ 0008e28e b96e
.org 0x8e290
	subs r0, r0, r1	@ 0008e290 401a
.org 0x8e292
	str r0, [r7, #92]	@ 0008e292 f865
.org 0x8e294
	adds r1, r7, #0	@ 0008e294 391c
.org 0x8e296
	adds r1, #186	@ 0008e296 ba31
.org 0x8e298
	movs r2, #0	@ 0008e298 0022
.org 0x8e29a
	ldrsh r0, [r1, r2]	@ 0008e29a 885e
.org 0x8e29c
	cmp r0, #0	@ 0008e29c 0028
.org 0x8e29e
	bne.n 0x8e2a2	@ 0008e29e 00d1
.org 0x8e2a0
	movs r0, #1	@ 0008e2a0 0120
.org 0x8e2a2
	str r0, [r7, #96]	@ 0008e2a2 3866
.org 0x8e2a4
	ldrb r0, [r7, #15]	@ 0008e2a4 f87b
.org 0x8e2a6
	adds r0, #1	@ 0008e2a6 0130
.org 0x8e2a8
	strb r0, [r7, #15]	@ 0008e2a8 f873
.org 0x8e2aa
	adds r1, r7, #0	@ 0008e2aa 391c
.org 0x8e2ac
	adds r1, #186	@ 0008e2ac ba31
.org 0x8e2ae
	ldrh r2, [r1, #0]	@ 0008e2ae 0a88
.org 0x8e2b0
	movs r5, #0	@ 0008e2b0 0025
.org 0x8e2b2
	ldrsh r0, [r1, r5]	@ 0008e2b2 485f
.org 0x8e2b4
	cmp r0, #0	@ 0008e2b4 0028
.org 0x8e2b6
	beq.n 0x8e2bc	@ 0008e2b6 01d0
.org 0x8e2b8
	subs r0, r2, #1	@ 0008e2b8 501e
.org 0x8e2ba
	strh r0, [r1, #0]	@ 0008e2ba 0880
.org 0x8e2bc
	ldrh r1, [r1, #0]	@ 0008e2bc 0988
.org 0x8e2be
	mov sl, r1	@ 0008e2be 8a46
.org 0x8e2c0
	ldr r0, [r7, #96]	@ 0008e2c0 386e
.org 0x8e2c2
	lsls r0, r0, #16	@ 0008e2c2 0004
.org 0x8e2c4
	lsrs r0, r0, #16	@ 0008e2c4 000c
.org 0x8e2c6
	mov r8, r0	@ 0008e2c6 8046
.org 0x8e2c8
	ldr r4, [pc, #244]	@ 0008e2c8 3d4c
.org 0x8e2ca
	mov r0, r9	@ 0008e2ca 4846
.org 0x8e2cc
	lsls r6, r0, #3	@ 0008e2cc c600
.org 0x8e2ce
	adds r1, r6, r4	@ 0008e2ce 3119
.org 0x8e2d0
	ldr r2, [sp, #4]	@ 0008e2d0 019a
.org 0x8e2d2
	lsls r0, r2, #1	@ 0008e2d2 5000
.org 0x8e2d4
	subs r0, #1	@ 0008e2d4 0138
.org 0x8e2d6
	ldr r1, [r1, #0]	@ 0008e2d6 0968
.org 0x8e2d8
	muls r0, r1	@ 0008e2d8 4843
.org 0x8e2da
	ldr r3, [sp, #0]	@ 0008e2da 009b
.org 0x8e2dc
	ldr r5, [r3, #84]	@ 0008e2dc 5d6d
.org 0x8e2de
	adds r5, r5, r0	@ 0008e2de 2d18
.org 0x8e2e0
	adds r0, r7, #0	@ 0008e2e0 381c
.org 0x8e2e2
	adds r0, #192	@ 0008e2e2 c030
.org 0x8e2e4
	ldr r0, [r0, #0]	@ 0008e2e4 0068
.org 0x8e2e6
	mov r1, sl	@ 0008e2e6 5146
.org 0x8e2e8
	muls r1, r0	@ 0008e2e8 4143
.org 0x8e2ea
	adds r0, r1, #0	@ 0008e2ea 081c
.org 0x8e2ec
	mov r1, r8	@ 0008e2ec 4146
.org 0x8e2ee
	bl 0x128fb8	@ 0008e2ee 9af063fe
.org 0x8e2f2
	subs r5, r5, r0	@ 0008e2f2 2d1a
.org 0x8e2f4
	str r5, [r7, #84]	@ 0008e2f4 7d65
.org 0x8e2f6
	adds r4, #4	@ 0008e2f6 0434
.org 0x8e2f8
	adds r6, r6, r4	@ 0008e2f8 3619
.org 0x8e2fa
	ldr r2, [sp, #0]	@ 0008e2fa 009a
.org 0x8e2fc
	ldr r4, [r2, #88]	@ 0008e2fc 946d
.org 0x8e2fe
	ldr r0, [r6, #0]	@ 0008e2fe 3068
.org 0x8e300
	adds r4, r4, r0	@ 0008e300 2418
.org 0x8e302
	ldr r0, [r7, #92]	@ 0008e302 f86d
.org 0x8e304
	mov r3, sl	@ 0008e304 5346
.org 0x8e306
	muls r3, r0	@ 0008e306 4343
.org 0x8e308
	adds r0, r3, #0	@ 0008e308 181c
.org 0x8e30a
	mov r1, r8	@ 0008e30a 4146
.org 0x8e30c
	bl 0x128fb8	@ 0008e30c 9af054fe
.org 0x8e310
	subs r4, r4, r0	@ 0008e310 241a
.org 0x8e312
	str r4, [r7, #88]	@ 0008e312 bc65
.org 0x8e314
	ldr r1, [sp, #0]	@ 0008e314 0099
.org 0x8e316
	ldr r0, [r1, #84]	@ 0008e316 486d
.org 0x8e318
	subs r5, r5, r0	@ 0008e318 2d1a
.org 0x8e31a
	str r5, [r7, #100]	@ 0008e31a 7d66
.org 0x8e31c
	ldr r0, [r1, #88]	@ 0008e31c 886d
.org 0x8e31e
	subs r4, r4, r0	@ 0008e31e 241a
.org 0x8e320
	str r4, [r7, #104]	@ 0008e320 bc66
.org 0x8e322
	ldrb r0, [r7, #19]	@ 0008e322 f87c
.org 0x8e324
	cmp r0, #0	@ 0008e324 0028
.org 0x8e326
	beq.n 0x8e3a6	@ 0008e326 3ed0
.org 0x8e328
	ldr r0, [pc, #152]	@ 0008e328 2648
.org 0x8e32a
	mov r2, r9	@ 0008e32a 4a46
.org 0x8e32c
	lsls r4, r2, #1	@ 0008e32c 5400
.org 0x8e32e
	adds r4, r4, r0	@ 0008e32e 2418
.org 0x8e330
	adds r0, r7, #0	@ 0008e330 381c
.org 0x8e332
	adds r0, #188	@ 0008e332 bc30
.org 0x8e334
	movs r3, #0	@ 0008e334 0023
.org 0x8e336
	ldrsh r0, [r0, r3]	@ 0008e336 c05e
.org 0x8e338
	mov r5, sl	@ 0008e338 5546
.org 0x8e33a
	muls r5, r0	@ 0008e33a 4543
.org 0x8e33c
	adds r0, r5, #0	@ 0008e33c 281c
.org 0x8e33e
	mov r1, r8	@ 0008e33e 4146
.org 0x8e340
	bl 0x128fb8	@ 0008e340 9af03afe
.org 0x8e344
	ldrh r1, [r4, #0]	@ 0008e344 2188
.org 0x8e346
	subs r1, r1, r0	@ 0008e346 091a
.org 0x8e348
	lsls r1, r1, #16	@ 0008e348 0904
.org 0x8e34a
	lsrs r1, r1, #16	@ 0008e34a 090c
.org 0x8e34c
	adds r0, r7, #0	@ 0008e34c 381c
.org 0x8e34e
	adds r0, #80	@ 0008e34e 5030
.org 0x8e350
	strh r1, [r0, #0]	@ 0008e350 0180
.org 0x8e352
	adds r0, #2	@ 0008e352 0230
.org 0x8e354
	strh r1, [r0, #0]	@ 0008e354 0180
.org 0x8e356
	adds r5, r7, #0	@ 0008e356 3d1c
.org 0x8e358
	adds r5, #184	@ 0008e358 b835
.org 0x8e35a
	strh r1, [r5, #0]	@ 0008e35a 2980
.org 0x8e35c
	ldr r4, [pc, #104]	@ 0008e35c 1a4c
.org 0x8e35e
	add r4, r9	@ 0008e35e 4c44
.org 0x8e360
	adds r0, #108	@ 0008e360 6c30
.org 0x8e362
	movs r1, #0	@ 0008e362 0021
.org 0x8e364
	ldrsh r0, [r0, r1]	@ 0008e364 405e
.org 0x8e366
	mov r2, sl	@ 0008e366 5246
.org 0x8e368
	muls r2, r0	@ 0008e368 4243
.org 0x8e36a
	adds r0, r2, #0	@ 0008e36a 101c
.org 0x8e36c
	mov r1, r8	@ 0008e36c 4146
.org 0x8e36e
	bl 0x128fb8	@ 0008e36e 9af023fe
.org 0x8e372
	ldrb r1, [r4, #0]	@ 0008e372 2178
.org 0x8e374
	subs r1, r1, r0	@ 0008e374 091a
.org 0x8e376
	lsls r1, r1, #24	@ 0008e376 0906
.org 0x8e378
	lsrs r1, r1, #24	@ 0008e378 090e
.org 0x8e37a
	adds r0, r7, #0	@ 0008e37a 381c
.org 0x8e37c
	adds r0, #36	@ 0008e37c 2430
.org 0x8e37e
	strb r1, [r0, #0]	@ 0008e37e 0170
.org 0x8e380
	strb r1, [r7, #18]	@ 0008e380 b974
.org 0x8e382
	lsls r1, r1, #24	@ 0008e382 0906
.org 0x8e384
	ldrh r0, [r5, #0]	@ 0008e384 2888
.org 0x8e386
	cmp r0, #176	@ 0008e386 b028
.org 0x8e388
	bne.n 0x8e3a6	@ 0008e388 0dd1
.org 0x8e38a
	cmp r1, #0	@ 0008e38a 0029
.org 0x8e38c
	bne.n 0x8e3a6	@ 0008e38c 0bd1
.org 0x8e38e
	mov r3, sl	@ 0008e38e 5346
.org 0x8e390
	cmp r3, #0	@ 0008e390 002b
.org 0x8e392
	bne.n 0x8e3a6	@ 0008e392 08d1
.org 0x8e394
	adds r0, r7, #0	@ 0008e394 381c
.org 0x8e396
	bl 0x8e8f4	@ 0008e396 00f0adfa
.org 0x8e39a
	ldr r1, [pc, #32]	@ 0008e39a 0849
.org 0x8e39c
	adds r0, r7, #0	@ 0008e39c 381c
.org 0x8e39e
	bl 0x1cf00	@ 0008e39e 8ef7affd
.org 0x8e3a2
	movs r0, #0	@ 0008e3a2 0020
.org 0x8e3a4
	strb r0, [r7, #19]	@ 0008e3a4 f874
.org 0x8e3a6
	adds r0, r7, #0	@ 0008e3a6 381c
.org 0x8e3a8
	bl 0x1cff0	@ 0008e3a8 8ef722fe
.org 0x8e3ac
	add sp, #8	@ 0008e3ac 02b0
.org 0x8e3ae
	pop {r3, r4, r5}	@ 0008e3ae 38bc
