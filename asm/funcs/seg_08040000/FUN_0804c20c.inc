@ FUN_0804c20c  entry 0x0804c20c  size 388
.thumb
.org 0x4c20c
FUN_0804c20c:
	push {r4, r5, r6, r7, lr}	@ 0004c20c f0b5
.org 0x4c20e
	mov r7, r8	@ 0004c20e 4746
.org 0x4c210
	push {r7}	@ 0004c210 80b4
.org 0x4c212
	adds r5, r0, #0	@ 0004c212 051c
.org 0x4c214
	ldr r7, [r5, #40]	@ 0004c214 af6a
.org 0x4c216
	ldrb r6, [r5, #13]	@ 0004c216 6e7b
.org 0x4c218
	cmp r6, #0	@ 0004c218 002e
.org 0x4c21a
	beq.n 0x4c21e	@ 0004c21a 00d0
.org 0x4c21c
	b.n 0x4c324	@ 0004c21c 82e0
.org 0x4c21e
	ldrb r0, [r5, #18]	@ 0004c21e a87c
.org 0x4c220
	subs r0, #1	@ 0004c220 0138
.org 0x4c222
	movs r1, #0	@ 0004c222 0021
.org 0x4c224
	mov r8, r1	@ 0004c224 8846
.org 0x4c226
	strb r0, [r5, #18]	@ 0004c226 a874
.org 0x4c228
	lsls r0, r0, #24	@ 0004c228 0006
.org 0x4c22a
	lsrs r0, r0, #24	@ 0004c22a 000e
.org 0x4c22c
	cmp r0, #255	@ 0004c22c ff28
.org 0x4c22e
	beq.n 0x4c232	@ 0004c22e 00d0
.org 0x4c230
	b.n 0x4c38e	@ 0004c230 ade0
.org 0x4c232
	adds r4, r5, #0	@ 0004c232 2c1c
.org 0x4c234
	adds r4, #84	@ 0004c234 5434
.org 0x4c236
	adds r0, r7, #0	@ 0004c236 381c
.org 0x4c238
	adds r1, r4, #0	@ 0004c238 211c
.org 0x4c23a
	bl 0x41318	@ 0004c23a f5f76df8
.org 0x4c23e
	lsls r0, r0, #24	@ 0004c23e 0006
.org 0x4c240
	lsrs r2, r0, #24	@ 0004c240 020e
.org 0x4c242
	mov ip, r4	@ 0004c242 a446
.org 0x4c244
	cmp r2, #0	@ 0004c244 002a
.org 0x4c246
	beq.n 0x4c280	@ 0004c246 1bd0
.org 0x4c248
	ldrb r1, [r5, #10]	@ 0004c248 a97a
.org 0x4c24a
	movs r0, #254	@ 0004c24a fe20
.org 0x4c24c
	ands r0, r1	@ 0004c24c 0840
.org 0x4c24e
	movs r1, #253	@ 0004c24e fd21
.org 0x4c250
	ands r0, r1	@ 0004c250 0840
.org 0x4c252
	strb r0, [r5, #10]	@ 0004c252 a872
.org 0x4c254
	adds r0, r5, #0	@ 0004c254 281c
.org 0x4c256
	adds r0, #140	@ 0004c256 8c30
.org 0x4c258
	str r6, [r0, #0]	@ 0004c258 0660
.org 0x4c25a
	adds r0, #4	@ 0004c25a 0430
.org 0x4c25c
	str r6, [r0, #0]	@ 0004c25c 0660
.org 0x4c25e
	adds r0, #4	@ 0004c25e 0430
.org 0x4c260
	strb r6, [r0, #0]	@ 0004c260 0670
.org 0x4c262
	ldrb r1, [r5, #10]	@ 0004c262 a97a
.org 0x4c264
	movs r0, #251	@ 0004c264 fb20
.org 0x4c266
	ands r0, r1	@ 0004c266 0840
.org 0x4c268
	strb r0, [r5, #10]	@ 0004c268 a872
.org 0x4c26a
	ldr r1, [pc, #16]	@ 0004c26a 0449
.org 0x4c26c
	ldrb r0, [r5, #9]	@ 0004c26c 687a
.org 0x4c26e
	lsls r0, r0, #2	@ 0004c26e 8000
.org 0x4c270
	adds r0, r0, r1	@ 0004c270 4018
.org 0x4c272
	movs r1, #3	@ 0004c272 0321
.org 0x4c274
	str r1, [r5, #12]	@ 0004c274 e960
.org 0x4c276
	ldr r0, [r0, #0]	@ 0004c276 0068
.org 0x4c278
	ldr r0, [r0, #12]	@ 0004c278 c068
.org 0x4c27a
	b.n 0x4c38c	@ 0004c27a 87e0
.org 0x4c27c
	.byte 0xf8,0x39,0x85,0x08	@ 0004c27c data
.org 0x4c280
	ldrb r0, [r5, #17]	@ 0004c280 687c
.org 0x4c282
	cmp r0, #0	@ 0004c282 0028
.org 0x4c284
	bne.n 0x4c2a0	@ 0004c284 0cd1
.org 0x4c286
	ldr r1, [r5, #84]	@ 0004c286 696d
.org 0x4c288
	ldr r0, [r7, #84]	@ 0004c288 786d
.org 0x4c28a
	cmp r1, r0	@ 0004c28a 8142
.org 0x4c28c
	ble.n 0x4c296	@ 0004c28c 03dd
.org 0x4c28e
	movs r0, #192	@ 0004c28e c020
.org 0x4c290
	lsls r0, r0, #1	@ 0004c290 4000
.org 0x4c292
	str r0, [r5, #92]	@ 0004c292 e865
.org 0x4c294
	b.n 0x4c2aa	@ 0004c294 09e0
.org 0x4c296
	ldr r0, [pc, #4]	@ 0004c296 0148
.org 0x4c298
	str r0, [r5, #92]	@ 0004c298 e865
.org 0x4c29a
	b.n 0x4c2ce	@ 0004c29a 18e0
.org 0x4c29c
	.byte 0x80,0xfe,0xff,0xff	@ 0004c29c data
.org 0x4c2a0
	str r2, [r5, #92]	@ 0004c2a0 ea65
.org 0x4c2a2
	ldr r1, [r5, #84]	@ 0004c2a2 696d
.org 0x4c2a4
	ldr r0, [r7, #84]	@ 0004c2a4 786d
.org 0x4c2a6
	cmp r1, r0	@ 0004c2a6 8142
.org 0x4c2a8
	ble.n 0x4c2ce	@ 0004c2a8 11dd
.org 0x4c2aa
	movs r2, #1	@ 0004c2aa 0122
.org 0x4c2ac
	ldrb r0, [r5, #10]	@ 0004c2ac a87a
.org 0x4c2ae
	movs r1, #16	@ 0004c2ae 1021
.org 0x4c2b0
	orrs r0, r1	@ 0004c2b0 0843
.org 0x4c2b2
	strb r0, [r5, #10]	@ 0004c2b2 a872
.org 0x4c2b4
	adds r0, r5, #0	@ 0004c2b4 281c
.org 0x4c2b6
	adds r0, #76	@ 0004c2b6 4c30
.org 0x4c2b8
	strb r2, [r0, #0]	@ 0004c2b8 0270
.org 0x4c2ba
	adds r3, r5, #0	@ 0004c2ba 2b1c
.org 0x4c2bc
	adds r3, #74	@ 0004c2bc 4a33
.org 0x4c2be
	movs r2, #16	@ 0004c2be 1022
.org 0x4c2c0
	ldrb r1, [r3, #0]	@ 0004c2c0 1978
.org 0x4c2c2
	movs r0, #17	@ 0004c2c2 1120
.org 0x4c2c4
	negs r0, r0	@ 0004c2c4 4042
.org 0x4c2c6
	ands r0, r1	@ 0004c2c6 0840
.org 0x4c2c8
	orrs r0, r2	@ 0004c2c8 1043
.org 0x4c2ca
	strb r0, [r3, #0]	@ 0004c2ca 1870
.org 0x4c2cc
	b.n 0x4c2ea	@ 0004c2cc 0de0
.org 0x4c2ce
	ldrb r1, [r5, #10]	@ 0004c2ce a97a
.org 0x4c2d0
	movs r0, #239	@ 0004c2d0 ef20
.org 0x4c2d2
	ands r0, r1	@ 0004c2d2 0840
.org 0x4c2d4
	strb r0, [r5, #10]	@ 0004c2d4 a872
.org 0x4c2d6
	adds r0, r5, #0	@ 0004c2d6 281c
.org 0x4c2d8
	adds r0, #76	@ 0004c2d8 4c30
.org 0x4c2da
	strb r2, [r0, #0]	@ 0004c2da 0270
.org 0x4c2dc
	adds r2, r5, #0	@ 0004c2dc 2a1c
.org 0x4c2de
	adds r2, #74	@ 0004c2de 4a32
.org 0x4c2e0
	ldrb r1, [r2, #0]	@ 0004c2e0 1178
.org 0x4c2e2
	movs r0, #17	@ 0004c2e2 1120
.org 0x4c2e4
	negs r0, r0	@ 0004c2e4 4042
.org 0x4c2e6
	ands r0, r1	@ 0004c2e6 0840
.org 0x4c2e8
	strb r0, [r2, #0]	@ 0004c2e8 1070
.org 0x4c2ea
	ldr r0, [pc, #172]	@ 0004c2ea 2b48
.org 0x4c2ec
	str r0, [r5, #96]	@ 0004c2ec 2866
.org 0x4c2ee
	ldrb r1, [r5, #10]	@ 0004c2ee a97a
.org 0x4c2f0
	movs r0, #4	@ 0004c2f0 0420
.org 0x4c2f2
	orrs r0, r1	@ 0004c2f2 0843
.org 0x4c2f4
	strb r0, [r5, #10]	@ 0004c2f4 a872
.org 0x4c2f6
	adds r4, r5, #0	@ 0004c2f6 2c1c
.org 0x4c2f8
	adds r4, #116	@ 0004c2f8 7434
.org 0x4c2fa
	ldr r1, [pc, #160]	@ 0004c2fa 2849
.org 0x4c2fc
	adds r0, r4, #0	@ 0004c2fc 201c
.org 0x4c2fe
	mov r2, ip	@ 0004c2fe 6246
.org 0x4c300
	movs r3, #8	@ 0004c300 0823
.org 0x4c302
	bl 0x5760	@ 0004c302 b9f72dfa
.org 0x4c306
	str r5, [r4, #44]	@ 0004c306 e562
.org 0x4c308
	ldr r0, [pc, #148]	@ 0004c308 2548
.org 0x4c30a
	str r0, [r4, #36]	@ 0004c30a 6062
.org 0x4c30c
	ldrb r1, [r5, #10]	@ 0004c30c a97a
.org 0x4c30e
	movs r0, #1	@ 0004c30e 0120
.org 0x4c310
	orrs r0, r1	@ 0004c310 0843
.org 0x4c312
	strb r0, [r5, #10]	@ 0004c312 a872
.org 0x4c314
	adds r0, r7, #0	@ 0004c314 381c
.org 0x4c316
	bl 0x3aa4c	@ 0004c316 eef799fb
.org 0x4c31a
	adds r1, r5, #0	@ 0004c31a 291c
.org 0x4c31c
	adds r1, #189	@ 0004c31c bd31
.org 0x4c31e
	movs r0, #1	@ 0004c31e 0120
.org 0x4c320
	strb r0, [r1, #0]	@ 0004c320 0870
.org 0x4c322
	strb r0, [r5, #13]	@ 0004c322 6873
.org 0x4c324
	ldr r0, [r5, #84]	@ 0004c324 686d
.org 0x4c326
	ldr r1, [r5, #92]	@ 0004c326 e96d
.org 0x4c328
	adds r0, r0, r1	@ 0004c328 4018
.org 0x4c32a
	str r0, [r5, #84]	@ 0004c32a 6865
.org 0x4c32c
	ldr r0, [r5, #88]	@ 0004c32c a86d
.org 0x4c32e
	ldr r1, [r5, #96]	@ 0004c32e 296e
.org 0x4c330
	adds r0, r0, r1	@ 0004c330 4018
.org 0x4c332
	str r0, [r5, #88]	@ 0004c332 a865
.org 0x4c334
	adds r1, #64	@ 0004c334 4031
.org 0x4c336
	str r1, [r5, #96]	@ 0004c336 2966
.org 0x4c338
	movs r0, #224	@ 0004c338 e020
.org 0x4c33a
	lsls r0, r0, #3	@ 0004c33a c000
.org 0x4c33c
	cmp r1, r0	@ 0004c33c 8142
.org 0x4c33e
	ble.n 0x4c342	@ 0004c33e 00dd
.org 0x4c340
	str r0, [r5, #96]	@ 0004c340 2866
.org 0x4c342
	ldr r0, [r5, #84]	@ 0004c342 686d
.org 0x4c344
	ldr r1, [r5, #88]	@ 0004c344 a96d
.org 0x4c346
	bl 0x4c564	@ 0004c346 00f00df9
.org 0x4c34a
	lsls r0, r0, #16	@ 0004c34a 0004
.org 0x4c34c
	cmp r0, #0	@ 0004c34c 0028
.org 0x4c34e
	beq.n 0x4c354	@ 0004c34e 01d0
.org 0x4c350
	movs r0, #0	@ 0004c350 0020
.org 0x4c352
	strb r0, [r5, #19]	@ 0004c352 e874
.org 0x4c354
	adds r0, r5, #0	@ 0004c354 281c
.org 0x4c356
	bl 0x1cff0	@ 0004c356 d0f74bfe
.org 0x4c35a
	ldrb r0, [r5, #19]	@ 0004c35a e87c
.org 0x4c35c
	subs r0, #1	@ 0004c35c 0138
.org 0x4c35e
	strb r0, [r5, #19]	@ 0004c35e e874
.org 0x4c360
	lsls r0, r0, #24	@ 0004c360 0006
.org 0x4c362
	lsrs r0, r0, #24	@ 0004c362 000e
.org 0x4c364
	cmp r0, #255	@ 0004c364 ff28
.org 0x4c366
	beq.n 0x4c376	@ 0004c366 06d0
.org 0x4c368
	adds r0, r5, #0	@ 0004c368 281c
.org 0x4c36a
	adds r0, #140	@ 0004c36a 8c30
.org 0x4c36c
	ldr r0, [r0, #0]	@ 0004c36c 0068
.org 0x4c36e
	ldr r1, [pc, #52]	@ 0004c36e 0d49
.org 0x4c370
	ands r0, r1	@ 0004c370 0840
.org 0x4c372
	cmp r0, #0	@ 0004c372 0028
.org 0x4c374
	beq.n 0x4c38e	@ 0004c374 0bd0
.org 0x4c376
	movs r0, #111	@ 0004c376 6f20
.org 0x4c378
	bl 0x2b10	@ 0004c378 b6f7cafb
.org 0x4c37c
	ldr r1, [pc, #40]	@ 0004c37c 0a49
.org 0x4c37e
	ldrb r0, [r5, #9]	@ 0004c37e 687a
.org 0x4c380
	lsls r0, r0, #2	@ 0004c380 8000
.org 0x4c382
	adds r0, r0, r1	@ 0004c382 4018
.org 0x4c384
	movs r1, #2	@ 0004c384 0221
.org 0x4c386
	str r1, [r5, #12]	@ 0004c386 e960
.org 0x4c388
	ldr r0, [r0, #0]	@ 0004c388 0068
.org 0x4c38a
	ldr r0, [r0, #8]	@ 0004c38a 8068
.org 0x4c38c
	str r0, [r5, #20]	@ 0004c38c 6861
.org 0x4c38e
	pop {r3}	@ 0004c38e 08bc
