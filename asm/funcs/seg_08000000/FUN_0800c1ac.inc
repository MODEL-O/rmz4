@ FUN_0800c1ac  entry 0x0800c1ac  size 796
.thumb
.org 0xc1ac
FUN_0800c1ac:
	push {r4, r5, r6, r7, lr}	@ 0000c1ac f0b5
.org 0xc1ae
	mov r7, r9	@ 0000c1ae 4f46
.org 0xc1b0
	mov r6, r8	@ 0000c1b0 4646
.org 0xc1b2
	push {r6, r7}	@ 0000c1b2 c0b4
.org 0xc1b4
	sub sp, #8	@ 0000c1b4 82b0
.org 0xc1b6
	adds r6, r0, #0	@ 0000c1b6 061c
.org 0xc1b8
	ldrb r0, [r6, #14]	@ 0000c1b8 b07b
.org 0xc1ba
	cmp r0, #0	@ 0000c1ba 0028
.org 0xc1bc
	beq.n 0xc1c0	@ 0000c1bc 00d0
.org 0xc1be
	b.n 0xc2e0	@ 0000c1be 8fe0
.org 0xc1c0
	movs r7, #36	@ 0000c1c0 2427
.org 0xc1c2
	ldr r2, [pc, #96]	@ 0000c1c2 184a
.org 0xc1c4
	ldrh r1, [r2, #0]	@ 0000c1c4 1188
.org 0xc1c6
	ldr r0, [pc, #96]	@ 0000c1c6 1848
.org 0xc1c8
	ands r0, r1	@ 0000c1c8 0840
.org 0xc1ca
	movs r1, #1	@ 0000c1ca 0121
.org 0xc1cc
	orrs r0, r1	@ 0000c1cc 0843
.org 0xc1ce
	movs r3, #144	@ 0000c1ce 9023
.org 0xc1d0
	lsls r3, r3, #6	@ 0000c1d0 9b01
.org 0xc1d2
	adds r1, r3, #0	@ 0000c1d2 191c
.org 0xc1d4
	orrs r0, r1	@ 0000c1d4 0843
.org 0xc1d6
	ldr r1, [pc, #84]	@ 0000c1d6 1549
.org 0xc1d8
	ands r0, r1	@ 0000c1d8 0840
.org 0xc1da
	strh r0, [r2, #0]	@ 0000c1da 1080
.org 0xc1dc
	adds r2, #4	@ 0000c1dc 0432
.org 0xc1de
	ldr r1, [pc, #80]	@ 0000c1de 1449
.org 0xc1e0
	adds r0, r1, #0	@ 0000c1e0 081c
.org 0xc1e2
	strh r0, [r2, #4]	@ 0000c1e2 9080
.org 0xc1e4
	movs r4, #0	@ 0000c1e4 0024
.org 0xc1e6
	movs r3, #112	@ 0000c1e6 7023
.org 0xc1e8
	adds r3, r3, r6	@ 0000c1e8 9b19
.org 0xc1ea
	mov r9, r3	@ 0000c1ea 9946
.org 0xc1ec
	ldr r0, [pc, #68]	@ 0000c1ec 1148
.org 0xc1ee
	mov r8, r0	@ 0000c1ee 8046
.org 0xc1f0
	adds r5, r2, #4	@ 0000c1f0 151d
.org 0xc1f2
	movs r0, #1	@ 0000c1f2 0120
.org 0xc1f4
	ands r0, r4	@ 0000c1f4 2040
.org 0xc1f6
	cmp r0, #0	@ 0000c1f6 0028
.org 0xc1f8
	beq.n 0xc23c	@ 0000c1f8 20d0
.org 0xc1fa
	lsls r1, r4, #4	@ 0000c1fa 2101
.org 0xc1fc
	ldr r2, [pc, #56]	@ 0000c1fc 0e4a
.org 0xc1fe
	adds r1, r1, r2	@ 0000c1fe 8918
.org 0xc200
	mov r3, r8	@ 0000c200 4346
.org 0xc202
	ldr r0, [r3, #0]	@ 0000c202 1868
.org 0xc204
	adds r0, r0, r1	@ 0000c204 4018
.org 0xc206
	ldrh r2, [r5, #0]	@ 0000c206 2a88
.org 0xc208
	movs r3, #248	@ 0000c208 f823
.org 0xc20a
	lsls r3, r3, #5	@ 0000c20a 5b01
.org 0xc20c
	adds r1, r3, #0	@ 0000c20c 191c
.org 0xc20e
	ands r1, r2	@ 0000c20e 1140
.org 0xc210
	lsls r1, r1, #3	@ 0000c210 c900
.org 0xc212
	lsls r2, r4, #5	@ 0000c212 6201
.org 0xc214
	movs r3, #192	@ 0000c214 c023
.org 0xc216
	lsls r3, r3, #19	@ 0000c216 db04
.org 0xc218
	adds r2, r2, r3	@ 0000c218 d218
.org 0xc21a
	adds r1, r1, r2	@ 0000c21a 8918
.org 0xc21c
	movs r2, #8	@ 0000c21c 0822
.org 0xc21e
	bl 0x128be0	@ 0000c21e 1cf1dffc
.org 0xc222
	b.n 0xc264	@ 0000c222 1fe0
.org 0xc224
	.byte 0x00,0x0a,0x00,0x02	@ 0000c224 data
.org 0xc228
	.byte 0xf8,0xff,0x00,0x00	@ 0000c228 data
.org 0xc22c
	.byte 0xff,0xc7,0x00,0x00	@ 0000c22c data
.org 0xc230
	.byte 0xc6,0x84,0x00,0x00	@ 0000c230 data
.org 0xc234
	.byte 0xb0,0xc0,0xb2,0x08	@ 0000c234 data
.org 0xc238
	.byte 0xa8,0xc0,0xb2,0x08	@ 0000c238 data
.org 0xc23c
	ldr r0, [pc, #288]	@ 0000c23c 4848
.org 0xc23e
	lsls r1, r4, #4	@ 0000c23e 2101
.org 0xc240
	ldr r2, [pc, #288]	@ 0000c240 484a
.org 0xc242
	adds r1, r1, r2	@ 0000c242 8918
.org 0xc244
	ldr r0, [r0, #0]	@ 0000c244 0068
.org 0xc246
	adds r0, r0, r1	@ 0000c246 4018
.org 0xc248
	ldrh r2, [r5, #0]	@ 0000c248 2a88
.org 0xc24a
	movs r3, #248	@ 0000c24a f823
.org 0xc24c
	lsls r3, r3, #5	@ 0000c24c 5b01
.org 0xc24e
	adds r1, r3, #0	@ 0000c24e 191c
.org 0xc250
	ands r1, r2	@ 0000c250 1140
.org 0xc252
	lsls r1, r1, #3	@ 0000c252 c900
.org 0xc254
	lsls r2, r4, #5	@ 0000c254 6201
.org 0xc256
	movs r3, #192	@ 0000c256 c023
.org 0xc258
	lsls r3, r3, #19	@ 0000c258 db04
.org 0xc25a
	adds r2, r2, r3	@ 0000c25a d218
.org 0xc25c
	adds r1, r1, r2	@ 0000c25c 8918
.org 0xc25e
	movs r2, #8	@ 0000c25e 0822
.org 0xc260
	bl 0x128be0	@ 0000c260 1cf1befc
.org 0xc264
	lsrs r1, r7, #4	@ 0000c264 3909
.org 0xc266
	adds r0, r4, #1	@ 0000c266 601c
.org 0xc268
	lsls r0, r0, #24	@ 0000c268 0006
.org 0xc26a
	lsrs r4, r0, #24	@ 0000c26a 040e
.org 0xc26c
	cmp r4, #35	@ 0000c26c 232c
.org 0xc26e
	bls.n 0xc1f2	@ 0000c26e c0d9
.org 0xc270
	movs r5, #0	@ 0000c270 0025
.org 0xc272
	lsls r0, r1, #16	@ 0000c272 0804
.org 0xc274
	lsrs r0, r0, #16	@ 0000c274 000c
.org 0xc276
	lsls r0, r0, #1	@ 0000c276 4000
.org 0xc278
	ldr r1, [pc, #236]	@ 0000c278 3b49
.org 0xc27a
	adds r0, r0, r1	@ 0000c27a 4018
.org 0xc27c
	ldrh r0, [r0, #0]	@ 0000c27c 0088
.org 0xc27e
	movs r1, #248	@ 0000c27e f821
.org 0xc280
	lsls r1, r1, #5	@ 0000c280 4901
.org 0xc282
	ands r1, r0	@ 0000c282 0140
.org 0xc284
	lsls r1, r1, #3	@ 0000c284 c900
.org 0xc286
	lsls r0, r4, #5	@ 0000c286 6001
.org 0xc288
	movs r2, #192	@ 0000c288 c022
.org 0xc28a
	lsls r2, r2, #19	@ 0000c28a d204
.org 0xc28c
	adds r0, r0, r2	@ 0000c28c 8018
.org 0xc28e
	adds r1, r1, r0	@ 0000c28e 0918
.org 0xc290
	str r5, [sp, #0]	@ 0000c290 0095
.org 0xc292
	ldr r2, [pc, #216]	@ 0000c292 364a
.org 0xc294
	mov r0, sp	@ 0000c294 6846
.org 0xc296
	bl 0x128be0	@ 0000c296 1cf1a3fc
.org 0xc29a
	ldr r4, [pc, #212]	@ 0000c29a 354c
.org 0xc29c
	ldr r0, [r4, #0]	@ 0000c29c 2068
.org 0xc29e
	ldr r3, [pc, #212]	@ 0000c29e 354b
.org 0xc2a0
	adds r0, r0, r3	@ 0000c2a0 c018
.org 0xc2a2
	movs r1, #128	@ 0000c2a2 8021
.org 0xc2a4
	lsls r1, r1, #7	@ 0000c2a4 c901
.org 0xc2a6
	bl 0x1ea4	@ 0000c2a6 f5f7fdfd
.org 0xc2aa
	ldr r0, [r4, #0]	@ 0000c2aa 2068
.org 0xc2ac
	ldr r1, [pc, #200]	@ 0000c2ac 3249
.org 0xc2ae
	adds r0, r0, r1	@ 0000c2ae 4018
.org 0xc2b0
	movs r1, #0	@ 0000c2b0 0021
.org 0xc2b2
	bl 0x2208	@ 0000c2b2 f5f7a9ff
.org 0xc2b6
	movs r0, #169	@ 0000c2b6 a920
.org 0xc2b8
	lsls r0, r0, #13	@ 0000c2b8 4003
.org 0xc2ba
	str r0, [r6, #104]	@ 0000c2ba b066
.org 0xc2bc
	movs r0, #172	@ 0000c2bc ac20
.org 0xc2be
	lsls r0, r0, #10	@ 0000c2be 8002
.org 0xc2c0
	str r0, [r6, #108]	@ 0000c2c0 f066
.org 0xc2c2
	movs r0, #230	@ 0000c2c2 e620
.org 0xc2c4
	lsls r0, r0, #9	@ 0000c2c4 4002
.org 0xc2c6
	str r0, [r6, #116]	@ 0000c2c6 7067
.org 0xc2c8
	movs r0, #224	@ 0000c2c8 e020
.org 0xc2ca
	lsls r0, r0, #7	@ 0000c2ca c001
.org 0xc2cc
	str r0, [r6, #120]	@ 0000c2cc b067
.org 0xc2ce
	movs r0, #240	@ 0000c2ce f020
.org 0xc2d0
	lsls r0, r0, #6	@ 0000c2d0 8001
.org 0xc2d2
	mov r2, r9	@ 0000c2d2 4a46
.org 0xc2d4
	strh r0, [r2, #0]	@ 0000c2d4 1080
.org 0xc2d6
	strh r5, [r6, #16]	@ 0000c2d6 3582
.org 0xc2d8
	strh r5, [r6, #18]	@ 0000c2d8 7582
.org 0xc2da
	ldrb r0, [r6, #14]	@ 0000c2da b07b
.org 0xc2dc
	adds r0, #1	@ 0000c2dc 0130
.org 0xc2de
	strb r0, [r6, #14]	@ 0000c2de b073
.org 0xc2e0
	ldr r3, [pc, #152]	@ 0000c2e0 264b
.org 0xc2e2
	mov ip, r3	@ 0000c2e2 9c46
.org 0xc2e4
	ldr r3, [pc, #152]	@ 0000c2e4 264b
.org 0xc2e6
	add r3, ip	@ 0000c2e6 6344
.org 0xc2e8
	ldrb r1, [r3, #0]	@ 0000c2e8 1978
.org 0xc2ea
	movs r0, #2	@ 0000c2ea 0220
.org 0xc2ec
	ands r0, r1	@ 0000c2ec 0840
.org 0xc2ee
	mov r8, ip	@ 0000c2ee e046
.org 0xc2f0
	cmp r0, #0	@ 0000c2f0 0028
.org 0xc2f2
	beq.n 0xc302	@ 0000c2f2 06d0
.org 0xc2f4
	movs r0, #253	@ 0000c2f4 fd20
.org 0xc2f6
	ands r0, r1	@ 0000c2f6 0840
.org 0xc2f8
	strb r0, [r3, #0]	@ 0000c2f8 1870
.org 0xc2fa
	ldr r1, [pc, #136]	@ 0000c2fa 2249
.org 0xc2fc
	add r1, r8	@ 0000c2fc 4144
.org 0xc2fe
	movs r0, #1	@ 0000c2fe 0120
.org 0xc300
	strh r0, [r1, #0]	@ 0000c300 0880
.org 0xc302
	ldr r0, [pc, #128]	@ 0000c302 2048
.org 0xc304
	add r0, r8	@ 0000c304 4044
.org 0xc306
	ldrh r5, [r0, #0]	@ 0000c306 0588
.org 0xc308
	cmp r5, #0	@ 0000c308 002d
.org 0xc30a
	bne.n 0xc30e	@ 0000c30a 00d1
.org 0xc30c
	b.n 0xc53e	@ 0000c30c 17e1
.org 0xc30e
	ldrh r0, [r6, #16]	@ 0000c30e 308a
.org 0xc310
	adds r3, r0, #1	@ 0000c310 431c
.org 0xc312
	movs r7, #0	@ 0000c312 0027
.org 0xc314
	adds r4, r3, #0	@ 0000c314 1c1c
.org 0xc316
	strh r3, [r6, #16]	@ 0000c316 3382
.org 0xc318
	ldrh r0, [r6, #18]	@ 0000c318 708a
.org 0xc31a
	adds r0, #1	@ 0000c31a 0130
.org 0xc31c
	adds r2, r0, #0	@ 0000c31c 021c
.org 0xc31e
	strh r0, [r6, #18]	@ 0000c31e 7082
.org 0xc320
	adds r1, r5, #0	@ 0000c320 291c
.org 0xc322
	cmp r1, #199	@ 0000c322 c729
.org 0xc324
	bhi.n 0xc390	@ 0000c324 34d8
.org 0xc326
	ldr r0, [r6, #104]	@ 0000c326 b06e
.org 0xc328
	adds r0, #56	@ 0000c328 3830
.org 0xc32a
	str r0, [r6, #104]	@ 0000c32a b066
.org 0xc32c
	ldr r0, [r6, #108]	@ 0000c32c f06e
.org 0xc32e
	subs r0, #56	@ 0000c32e 3838
.org 0xc330
	str r0, [r6, #108]	@ 0000c330 f066
.org 0xc332
	ldr r0, [r6, #116]	@ 0000c332 706f
.org 0xc334
	ldr r1, [pc, #80]	@ 0000c334 1449
.org 0xc336
	adds r0, r0, r1	@ 0000c336 4018
.org 0xc338
	str r0, [r6, #116]	@ 0000c338 7067
.org 0xc33a
	lsls r0, r3, #16	@ 0000c33a 1804
.org 0xc33c
	lsrs r0, r0, #16	@ 0000c33c 000c
.org 0xc33e
	cmp r0, #128	@ 0000c33e 8028
.org 0xc340
	bhi.n 0xc344	@ 0000c340 00d8
.org 0xc342
	b.n 0xc52e	@ 0000c342 f4e0
.org 0xc344
	adds r2, r6, #0	@ 0000c344 321c
.org 0xc346
	adds r2, #112	@ 0000c346 7032
.org 0xc348
	ldr r1, [pc, #64]	@ 0000c348 1049
.org 0xc34a
	lsls r0, r4, #24	@ 0000c34a 2006
.org 0xc34c
	lsrs r0, r0, #23	@ 0000c34c c00d
.org 0xc34e
	adds r0, r0, r1	@ 0000c34e 4018
.org 0xc350
	ldrh r0, [r0, #0]	@ 0000c350 0088
.org 0xc352
	lsls r0, r0, #16	@ 0000c352 0004
.org 0xc354
	asrs r0, r0, #22	@ 0000c354 8015
.org 0xc356
	ldrh r3, [r2, #0]	@ 0000c356 1388
.org 0xc358
	adds r0, r0, r3	@ 0000c358 c018
.org 0xc35a
	strh r0, [r2, #0]	@ 0000c35a 1080
.org 0xc35c
	b.n 0xc52e	@ 0000c35c e7e0
.org 0xc35e
	.byte 0x00	@ 0000c35e data
.org 0xc35f
	.byte 0x00	@ 0000c35f data
.org 0xc360
	.byte 0xd0,0xc0,0xb2,0x08	@ 0000c360 data
.org 0xc364
	.byte 0xd8,0xc0,0xb2,0x08	@ 0000c364 data
.org 0xc368
	.byte 0x04,0x0a,0x00,0x02	@ 0000c368 data
.org 0xc36c
	.byte 0xe0,0x02,0x00,0x01	@ 0000c36c data
.org 0xc370
	.byte 0x04,0x20,0xdf,0x08	@ 0000c370 data
.org 0xc374
	.byte 0x54,0x20,0xdf,0x08	@ 0000c374 data
.org 0xc378
	.byte 0x60,0x20,0xdf,0x08	@ 0000c378 data
.org 0xc37c
	.byte 0xb0,0x0a,0x00,0x02	@ 0000c37c data
.org 0xc380
	.byte 0x25,0xd0,0x02,0x00	@ 0000c380 data
.org 0xc384
	.byte 0x30,0xd0,0x02,0x00	@ 0000c384 data
.org 0xc388
	.byte 0x00,0xff,0xff,0xff	@ 0000c388 data
.org 0xc38c
	.byte 0x0c,0x93,0x12,0x08	@ 0000c38c data
.org 0xc390
	cmp r1, #255	@ 0000c390 ff29
.org 0xc392
	bhi.n 0xc3cc	@ 0000c392 1bd8
.org 0xc394
	ldr r0, [r6, #116]	@ 0000c394 706f
.org 0xc396
	ldr r1, [pc, #44]	@ 0000c396 0b49
.org 0xc398
	adds r0, r0, r1	@ 0000c398 4018
.org 0xc39a
	str r0, [r6, #116]	@ 0000c39a 7067
.org 0xc39c
	ldr r1, [pc, #40]	@ 0000c39c 0a49
.org 0xc39e
	lsls r0, r4, #24	@ 0000c39e 2006
.org 0xc3a0
	lsrs r0, r0, #23	@ 0000c3a0 c00d
.org 0xc3a2
	adds r0, r0, r1	@ 0000c3a2 4018
.org 0xc3a4
	ldrh r1, [r0, #0]	@ 0000c3a4 0188
.org 0xc3a6
	lsls r1, r1, #16	@ 0000c3a6 0904
.org 0xc3a8
	asrs r2, r1, #18	@ 0000c3a8 8a14
.org 0xc3aa
	ldr r0, [r6, #104]	@ 0000c3aa b06e
.org 0xc3ac
	subs r0, r0, r2	@ 0000c3ac 801a
.org 0xc3ae
	str r0, [r6, #104]	@ 0000c3ae b066
.org 0xc3b0
	ldr r0, [r6, #108]	@ 0000c3b0 f06e
.org 0xc3b2
	adds r0, r0, r2	@ 0000c3b2 8018
.org 0xc3b4
	str r0, [r6, #108]	@ 0000c3b4 f066
.org 0xc3b6
	adds r0, r6, #0	@ 0000c3b6 301c
.org 0xc3b8
	adds r0, #112	@ 0000c3b8 7030
.org 0xc3ba
	asrs r1, r1, #22	@ 0000c3ba 8915
.org 0xc3bc
	ldrh r2, [r0, #0]	@ 0000c3bc 0288
.org 0xc3be
	adds r1, r1, r2	@ 0000c3be 8918
.org 0xc3c0
	strh r1, [r0, #0]	@ 0000c3c0 0180
.org 0xc3c2
	b.n 0xc52e	@ 0000c3c2 b4e0
.org 0xc3c4
	.byte 0x00,0xff,0xff,0xff	@ 0000c3c4 data
.org 0xc3c8
	.byte 0x0c,0x93,0x12,0x08	@ 0000c3c8 data
.org 0xc3cc
	ldr r0, [pc, #60]	@ 0000c3cc 0f48
.org 0xc3ce
	cmp r1, r0	@ 0000c3ce 8142
.org 0xc3d0
	bls.n 0xc46a	@ 0000c3d0 4bd9
.org 0xc3d2
	ldr r0, [pc, #60]	@ 0000c3d2 0f48
.org 0xc3d4
	cmp r1, r0	@ 0000c3d4 8142
.org 0xc3d6
	bhi.n 0xc418	@ 0000c3d6 1fd8
.org 0xc3d8
	ldr r0, [pc, #56]	@ 0000c3d8 0e48
.org 0xc3da
	lsls r2, r4, #24	@ 0000c3da 2206
.org 0xc3dc
	lsrs r2, r2, #23	@ 0000c3dc d20d
.org 0xc3de
	adds r2, r2, r0	@ 0000c3de 1218
.org 0xc3e0
	movs r3, #0	@ 0000c3e0 0023
.org 0xc3e2
	ldrsh r0, [r2, r3]	@ 0000c3e2 d05e
.org 0xc3e4
	lsls r1, r0, #2	@ 0000c3e4 8100
.org 0xc3e6
	adds r1, r1, r0	@ 0000c3e6 0918
.org 0xc3e8
	asrs r1, r1, #2	@ 0000c3e8 8910
.org 0xc3ea
	ldr r0, [r6, #104]	@ 0000c3ea b06e
.org 0xc3ec
	adds r0, r0, r1	@ 0000c3ec 4018
.org 0xc3ee
	str r0, [r6, #104]	@ 0000c3ee b066
.org 0xc3f0
	ldr r0, [r6, #108]	@ 0000c3f0 f06e
.org 0xc3f2
	adds r0, r0, r1	@ 0000c3f2 4018
.org 0xc3f4
	str r0, [r6, #108]	@ 0000c3f4 f066
.org 0xc3f6
	adds r1, r6, #0	@ 0000c3f6 311c
.org 0xc3f8
	adds r1, #112	@ 0000c3f8 7031
.org 0xc3fa
	ldrh r0, [r2, #0]	@ 0000c3fa 1088
.org 0xc3fc
	lsls r0, r0, #16	@ 0000c3fc 0004
.org 0xc3fe
	asrs r0, r0, #17	@ 0000c3fe 4014
.org 0xc400
	ldrh r2, [r1, #0]	@ 0000c400 0a88
.org 0xc402
	adds r0, r0, r2	@ 0000c402 8018
.org 0xc404
	strh r0, [r1, #0]	@ 0000c404 0880
.org 0xc406
	strh r7, [r6, #18]	@ 0000c406 7782
.org 0xc408
	b.n 0xc52e	@ 0000c408 91e0
.org 0xc40a
	.byte 0x00	@ 0000c40a data
.org 0xc40b
	.byte 0x00	@ 0000c40b data
.org 0xc40c
	.byte 0x03,0x01,0x00,0x00	@ 0000c40c data
.org 0xc410
	.byte 0x1b,0x01,0x00,0x00	@ 0000c410 data
.org 0xc414
	.byte 0x0c,0x93,0x12,0x08	@ 0000c414 data
.org 0xc418
	ldr r0, [pc, #64]	@ 0000c418 1048
.org 0xc41a
	cmp r1, r0	@ 0000c41a 8142
.org 0xc41c
	bhi.n 0xc464	@ 0000c41c 22d8
.org 0xc41e
	ldr r1, [pc, #64]	@ 0000c41e 1049
.org 0xc420
	adds r0, r2, #0	@ 0000c420 101c
.org 0xc422
	adds r0, #64	@ 0000c422 4030
.org 0xc424
	lsls r0, r0, #24	@ 0000c424 0006
.org 0xc426
	lsrs r0, r0, #23	@ 0000c426 c00d
.org 0xc428
	adds r0, r0, r1	@ 0000c428 4018
.org 0xc42a
	movs r3, #0	@ 0000c42a 0023
.org 0xc42c
	ldrsh r0, [r0, r3]	@ 0000c42c c05e
.org 0xc42e
	lsls r1, r0, #2	@ 0000c42e 8100
.org 0xc430
	adds r1, r1, r0	@ 0000c430 0918
.org 0xc432
	asrs r2, r1, #4	@ 0000c432 0a11
.org 0xc434
	ldr r0, [r6, #104]	@ 0000c434 b06e
.org 0xc436
	adds r0, r0, r2	@ 0000c436 8018
.org 0xc438
	str r0, [r6, #104]	@ 0000c438 b066
.org 0xc43a
	ldr r0, [r6, #108]	@ 0000c43a f06e
.org 0xc43c
	adds r0, r0, r2	@ 0000c43c 8018
.org 0xc43e
	str r0, [r6, #108]	@ 0000c43e f066
.org 0xc440
	adds r0, r6, #0	@ 0000c440 301c
.org 0xc442
	adds r0, #112	@ 0000c442 7030
.org 0xc444
	asrs r1, r1, #7	@ 0000c444 c911
.org 0xc446
	ldrh r2, [r0, #0]	@ 0000c446 0288
.org 0xc448
	adds r1, r1, r2	@ 0000c448 8918
.org 0xc44a
	strh r1, [r0, #0]	@ 0000c44a 0180
.org 0xc44c
	lsls r1, r1, #16	@ 0000c44c 0904
.org 0xc44e
	lsrs r1, r1, #16	@ 0000c44e 090c
.org 0xc450
	movs r2, #128	@ 0000c450 8022
.org 0xc452
	lsls r2, r2, #7	@ 0000c452 d201
.org 0xc454
	cmp r1, r2	@ 0000c454 9142
.org 0xc456
	bls.n 0xc52e	@ 0000c456 6ad9
.org 0xc458
	strh r2, [r0, #0]	@ 0000c458 0280
.org 0xc45a
	b.n 0xc52e	@ 0000c45a 68e0
.org 0xc45c
	.byte 0x5b,0x01,0x00,0x00	@ 0000c45c data
.org 0xc460
	.byte 0x0c,0x93,0x12,0x08	@ 0000c460 data
.org 0xc464
	ldr r0, [pc, #8]	@ 0000c464 0248
.org 0xc466
	cmp r1, r0	@ 0000c466 8142
.org 0xc468
	bhi.n 0xc474	@ 0000c468 04d8
.org 0xc46a
	strh r7, [r6, #16]	@ 0000c46a 3782
.org 0xc46c
	b.n 0xc52e	@ 0000c46c 5fe0
.org 0xc46e
	.byte 0x00	@ 0000c46e data
.org 0xc46f
	.byte 0x00	@ 0000c46f data
.org 0xc470
	.byte 0x5f,0x01,0x00,0x00	@ 0000c470 data
.org 0xc474
	ldr r0, [pc, #36]	@ 0000c474 0948
.org 0xc476
	cmp r1, r0	@ 0000c476 8142
.org 0xc478
	bhi.n 0xc4a4	@ 0000c478 14d8
.org 0xc47a
	ldr r0, [pc, #36]	@ 0000c47a 0948
.org 0xc47c
	lsls r2, r4, #24	@ 0000c47c 2206
.org 0xc47e
	lsrs r2, r2, #23	@ 0000c47e d20d
.org 0xc480
	adds r2, r2, r0	@ 0000c480 1218
.org 0xc482
	movs r3, #0	@ 0000c482 0023
.org 0xc484
	ldrsh r1, [r2, r3]	@ 0000c484 d15e
.org 0xc486
	lsls r1, r1, #1	@ 0000c486 4900
.org 0xc488
	ldr r0, [r6, #104]	@ 0000c488 b06e
.org 0xc48a
	adds r0, r0, r1	@ 0000c48a 4018
.org 0xc48c
	str r0, [r6, #104]	@ 0000c48c b066
.org 0xc48e
	ldrh r1, [r2, #0]	@ 0000c48e 1188
.org 0xc490
	lsls r1, r1, #16	@ 0000c490 0904
.org 0xc492
	asrs r1, r1, #17	@ 0000c492 4914
.org 0xc494
	ldr r0, [r6, #108]	@ 0000c494 f06e
.org 0xc496
	subs r0, r0, r1	@ 0000c496 401a
.org 0xc498
	str r0, [r6, #108]	@ 0000c498 f066
.org 0xc49a
	b.n 0xc52e	@ 0000c49a 48e0
.org 0xc49c
	.byte 0x81,0x01,0x00,0x00	@ 0000c49c data
.org 0xc4a0
	.byte 0x0c,0x93,0x12,0x08	@ 0000c4a0 data
.org 0xc4a4
	ldr r0, [pc, #48]	@ 0000c4a4 0c48
.org 0xc4a6
	cmp r1, r0	@ 0000c4a6 8142
.org 0xc4a8
	bhi.n 0xc4e0	@ 0000c4a8 1ad8
.org 0xc4aa
	ldr r0, [pc, #48]	@ 0000c4aa 0c48
.org 0xc4ac
	lsls r2, r4, #24	@ 0000c4ac 2206
.org 0xc4ae
	lsrs r2, r2, #23	@ 0000c4ae d20d
.org 0xc4b0
	adds r2, r2, r0	@ 0000c4b0 1218
.org 0xc4b2
	movs r0, #0	@ 0000c4b2 0020
.org 0xc4b4
	ldrsh r1, [r2, r0]	@ 0000c4b4 115e
.org 0xc4b6
	lsls r1, r1, #1	@ 0000c4b6 4900
.org 0xc4b8
	ldr r0, [r6, #104]	@ 0000c4b8 b06e
.org 0xc4ba
	adds r0, r0, r1	@ 0000c4ba 4018
.org 0xc4bc
	str r0, [r6, #104]	@ 0000c4bc b066
.org 0xc4be
	ldrh r1, [r2, #0]	@ 0000c4be 1188
.org 0xc4c0
	lsls r1, r1, #16	@ 0000c4c0 0904
.org 0xc4c2
	asrs r1, r1, #17	@ 0000c4c2 4914
.org 0xc4c4
	ldr r0, [r6, #108]	@ 0000c4c4 f06e
.org 0xc4c6
	subs r0, r0, r1	@ 0000c4c6 401a
