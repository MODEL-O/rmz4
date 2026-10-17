@ FUN_080d91f4  entry 0x080d91f4  size 394
.thumb
.org 0xd91f4
FUN_080d91f4:
	push {r4, r5, r6, r7, lr}	@ 000d91f4 f0b5
.org 0xd91f6
	mov r7, r8	@ 000d91f6 4746
.org 0xd91f8
	push {r7}	@ 000d91f8 80b4
.org 0xd91fa
	adds r7, r0, #0	@ 000d91fa 071c
.org 0xd91fc
	ldrb r0, [r7, #18]	@ 000d91fc b87c
.org 0xd91fe
	subs r0, #1	@ 000d91fe 0138
.org 0xd9200
	strb r0, [r7, #18]	@ 000d9200 b874
.org 0xd9202
	lsls r0, r0, #24	@ 000d9202 0006
.org 0xd9204
	cmp r0, #0	@ 000d9204 0028
.org 0xd9206
	beq.n 0xd9228	@ 000d9206 0fd0
.org 0xd9208
	ldr r0, [r7, #84]	@ 000d9208 786d
.org 0xd920a
	ldr r1, [r7, #88]	@ 000d920a b96d
.org 0xd920c
	bl 0x7c7c	@ 000d920c 2ef736fd
.org 0xd9210
	lsls r0, r0, #16	@ 000d9210 0004
.org 0xd9212
	lsrs r1, r0, #16	@ 000d9212 010c
.org 0xd9214
	cmp r1, #0	@ 000d9214 0029
.org 0xd9216
	beq.n 0xd924c	@ 000d9216 19d0
.org 0xd9218
	movs r0, #128	@ 000d9218 8020
.org 0xd921a
	lsls r0, r0, #8	@ 000d921a 0002
.org 0xd921c
	ands r0, r1	@ 000d921c 0840
.org 0xd921e
	cmp r0, #0	@ 000d921e 0028
.org 0xd9220
	bne.n 0xd924c	@ 000d9220 14d1
.org 0xd9222
	ldr r0, [r7, #96]	@ 000d9222 386e
.org 0xd9224
	cmp r0, #0	@ 000d9224 0028
.org 0xd9226
	ble.n 0xd924c	@ 000d9226 11dd
.org 0xd9228
	adds r1, r7, #0	@ 000d9228 391c
.org 0xd922a
	adds r1, #84	@ 000d922a 5431
.org 0xd922c
	movs r0, #2	@ 000d922c 0220
.org 0xd922e
	bl 0xd0c88	@ 000d922e f7f72bfd
.org 0xd9232
	ldr r1, [pc, #20]	@ 000d9232 0549
.org 0xd9234
	ldrb r0, [r7, #9]	@ 000d9234 787a
.org 0xd9236
	lsls r0, r0, #2	@ 000d9236 8000
.org 0xd9238
	adds r0, r0, r1	@ 000d9238 4018
.org 0xd923a
	movs r1, #2	@ 000d923a 0221
.org 0xd923c
	str r1, [r7, #12]	@ 000d923c f960
.org 0xd923e
	ldr r0, [r0, #0]	@ 000d923e 0068
.org 0xd9240
	ldr r0, [r0, #8]	@ 000d9240 8068
.org 0xd9242
	str r0, [r7, #20]	@ 000d9242 7861
.org 0xd9244
	b.n 0xd939e	@ 000d9244 abe0
.org 0xd9246
	.byte 0x00	@ 000d9246 data
.org 0xd9247
	.byte 0x00	@ 000d9247 data
.org 0xd9248
	.byte 0x64,0x6f,0x86,0x08	@ 000d9248 data
.org 0xd924c
	ldrb r0, [r7, #14]	@ 000d924c b87b
.org 0xd924e
	cmp r0, #0	@ 000d924e 0028
.org 0xd9250
	beq.n 0xd9258	@ 000d9250 02d0
.org 0xd9252
	cmp r0, #1	@ 000d9252 0128
.org 0xd9254
	beq.n 0xd9346	@ 000d9254 77d0
.org 0xd9256
	b.n 0xd939e	@ 000d9256 a2e0
.org 0xd9258
	ldrb r0, [r7, #16]	@ 000d9258 387c
.org 0xd925a
	cmp r0, #0	@ 000d925a 0028
.org 0xd925c
	beq.n 0xd92da	@ 000d925c 3dd0
.org 0xd925e
	ldr r4, [pc, #100]	@ 000d925e 194c
.org 0xd9260
	ldr r0, [r7, #116]	@ 000d9260 786f
.org 0xd9262
	mov r8, r0	@ 000d9262 8046
.org 0xd9264
	movs r1, #3	@ 000d9264 0321
.org 0xd9266
	bl 0x129050	@ 000d9266 4ff0f3fe
.org 0xd926a
	lsls r0, r0, #2	@ 000d926a 8000
.org 0xd926c
	adds r0, r0, r4	@ 000d926c 0019
.org 0xd926e
	ldr r0, [r0, #0]	@ 000d926e 0068
.org 0xd9270
	ldr r2, [r7, #120]	@ 000d9270 ba6f
.org 0xd9272
	lsls r2, r2, #3	@ 000d9272 d200
.org 0xd9274
	adds r2, r2, r0	@ 000d9274 1218
.org 0xd9276
	ldr r1, [pc, #80]	@ 000d9276 1449
.org 0xd9278
	ldr r0, [r1, #0]	@ 000d9278 0868
.org 0xd927a
	ldr r3, [pc, #80]	@ 000d927a 144b
.org 0xd927c
	mov ip, r3	@ 000d927c 9c46
.org 0xd927e
	mov r1, ip	@ 000d927e 6146
.org 0xd9280
	muls r1, r0	@ 000d9280 4143
.org 0xd9282
	ldr r5, [pc, #76]	@ 000d9282 134d
.org 0xd9284
	adds r1, r1, r5	@ 000d9284 4919
.org 0xd9286
	lsls r1, r1, #1	@ 000d9286 4900
.org 0xd9288
	lsrs r4, r1, #1	@ 000d9288 4c08
.org 0xd928a
	ldr r0, [pc, #60]	@ 000d928a 0f48
.org 0xd928c
	str r4, [r0, #0]	@ 000d928c 0460
.org 0xd928e
	lsrs r1, r1, #17	@ 000d928e 490c
.org 0xd9290
	movs r0, #31	@ 000d9290 1f20
.org 0xd9292
	ands r1, r0	@ 000d9292 0140
.org 0xd9294
	ldr r0, [r2, #4]	@ 000d9294 5068
.org 0xd9296
	adds r0, r0, r1	@ 000d9296 4018
.org 0xd9298
	str r0, [r7, #96]	@ 000d9298 3866
.org 0xd929a
	ldr r6, [r2, #0]	@ 000d929a 1668
.org 0xd929c
	mov r0, ip	@ 000d929c 6046
.org 0xd929e
	muls r0, r4	@ 000d929e 6043
.org 0xd92a0
	adds r0, r0, r5	@ 000d92a0 4019
.org 0xd92a2
	lsls r0, r0, #1	@ 000d92a2 4000
.org 0xd92a4
	lsrs r1, r0, #1	@ 000d92a4 4108
.org 0xd92a6
	ldr r2, [pc, #32]	@ 000d92a6 084a
.org 0xd92a8
	str r1, [r2, #0]	@ 000d92a8 1160
.org 0xd92aa
	lsrs r2, r0, #17	@ 000d92aa 420c
.org 0xd92ac
	movs r0, #63	@ 000d92ac 3f20
.org 0xd92ae
	ands r2, r0	@ 000d92ae 0240
.org 0xd92b0
	ldrb r1, [r7, #10]	@ 000d92b0 b97a
.org 0xd92b2
	movs r0, #16	@ 000d92b2 1020
.org 0xd92b4
	ands r0, r1	@ 000d92b4 0840
.org 0xd92b6
	mov r1, r8	@ 000d92b6 4146
.org 0xd92b8
	cmp r0, #0	@ 000d92b8 0028
.org 0xd92ba
	bne.n 0xd92d4	@ 000d92ba 0bd1
.org 0xd92bc
	negs r0, r6	@ 000d92bc 7042
.org 0xd92be
	subs r0, r0, r2	@ 000d92be 801a
.org 0xd92c0
	b.n 0xd92d6	@ 000d92c0 09e0
.org 0xd92c2
	.byte 0x00	@ 000d92c2 data
.org 0xd92c3
	.byte 0x00	@ 000d92c3 data
.org 0xd92c4
	.byte 0x54,0x82,0x86,0x08	@ 000d92c4 data
.org 0xd92c8
	.byte 0x38,0xdc,0x02,0x02	@ 000d92c8 data
.org 0xd92cc
	.byte 0xfd,0x43,0x03,0x00	@ 000d92cc data
.org 0xd92d0
	.byte 0xc3,0x9e,0x26,0x00	@ 000d92d0 data
.org 0xd92d4
	subs r0, r6, r2	@ 000d92d4 b01a
.org 0xd92d6
	str r0, [r7, #92]	@ 000d92d6 f865
.org 0xd92d8
	b.n 0xd9332	@ 000d92d8 2be0
.org 0xd92da
	ldr r4, [pc, #132]	@ 000d92da 214c
.org 0xd92dc
	ldr r3, [r7, #116]	@ 000d92dc 7b6f
.org 0xd92de
	mov r8, r3	@ 000d92de 9846
.org 0xd92e0
	mov r0, r8	@ 000d92e0 4046
.org 0xd92e2
	movs r1, #3	@ 000d92e2 0321
.org 0xd92e4
	bl 0x129050	@ 000d92e4 4ff0b4fe
.org 0xd92e8
	lsls r0, r0, #2	@ 000d92e8 8000
.org 0xd92ea
	adds r0, r0, r4	@ 000d92ea 0019
.org 0xd92ec
	ldr r0, [r0, #0]	@ 000d92ec 0068
.org 0xd92ee
	ldr r2, [r7, #120]	@ 000d92ee ba6f
.org 0xd92f0
	lsls r2, r2, #3	@ 000d92f0 d200
.org 0xd92f2
	adds r2, r2, r0	@ 000d92f2 1218
.org 0xd92f4
	ldr r1, [pc, #108]	@ 000d92f4 1b49
.org 0xd92f6
	ldr r0, [r1, #0]	@ 000d92f6 0868
.org 0xd92f8
	ldr r3, [pc, #108]	@ 000d92f8 1b4b
.org 0xd92fa
	adds r1, r0, #0	@ 000d92fa 011c
.org 0xd92fc
	muls r1, r3	@ 000d92fc 5943
.org 0xd92fe
	ldr r5, [pc, #108]	@ 000d92fe 1b4d
.org 0xd9300
	adds r1, r1, r5	@ 000d9300 4919
.org 0xd9302
	lsls r1, r1, #1	@ 000d9302 4900
.org 0xd9304
	lsrs r4, r1, #1	@ 000d9304 4c08
.org 0xd9306
	ldr r0, [pc, #92]	@ 000d9306 1748
.org 0xd9308
	str r4, [r0, #0]	@ 000d9308 0460
.org 0xd930a
	lsrs r1, r1, #17	@ 000d930a 490c
.org 0xd930c
	movs r0, #31	@ 000d930c 1f20
.org 0xd930e
	ands r1, r0	@ 000d930e 0140
.org 0xd9310
	ldr r0, [r2, #4]	@ 000d9310 5068
.org 0xd9312
	adds r0, r0, r1	@ 000d9312 4018
.org 0xd9314
	str r0, [r7, #96]	@ 000d9314 3866
.org 0xd9316
	adds r1, r4, #0	@ 000d9316 211c
.org 0xd9318
	muls r1, r3	@ 000d9318 5943
.org 0xd931a
	adds r1, r1, r5	@ 000d931a 4919
.org 0xd931c
	lsls r1, r1, #1	@ 000d931c 4900
.org 0xd931e
	lsrs r0, r1, #1	@ 000d931e 4808
.org 0xd9320
	ldr r3, [pc, #64]	@ 000d9320 104b
.org 0xd9322
	str r0, [r3, #0]	@ 000d9322 1860
.org 0xd9324
	lsrs r1, r1, #17	@ 000d9324 490c
.org 0xd9326
	movs r0, #63	@ 000d9326 3f20
.org 0xd9328
	ands r1, r0	@ 000d9328 0140
.org 0xd932a
	ldr r0, [r2, #0]	@ 000d932a 1068
.org 0xd932c
	subs r0, r0, r1	@ 000d932c 401a
.org 0xd932e
	str r0, [r7, #92]	@ 000d932e f865
.org 0xd9330
	mov r1, r8	@ 000d9330 4146
.org 0xd9332
	lsls r1, r1, #16	@ 000d9332 0904
.org 0xd9334
	lsrs r1, r1, #16	@ 000d9334 090c
.org 0xd9336
	adds r0, r7, #0	@ 000d9336 381c
.org 0xd9338
	bl 0x1cf00	@ 000d9338 43f7e2fd
.org 0xd933c
	movs r0, #0	@ 000d933c 0020
.org 0xd933e
	strb r0, [r7, #19]	@ 000d933e f874
.org 0xd9340
	ldrb r0, [r7, #14]	@ 000d9340 b87b
.org 0xd9342
	adds r0, #1	@ 000d9342 0130
.org 0xd9344
	strb r0, [r7, #14]	@ 000d9344 b873
.org 0xd9346
	ldrb r0, [r7, #19]	@ 000d9346 f87c
.org 0xd9348
	adds r0, #1	@ 000d9348 0130
.org 0xd934a
	strb r0, [r7, #19]	@ 000d934a f874
.org 0xd934c
	movs r1, #255	@ 000d934c ff21
.org 0xd934e
	ands r0, r1	@ 000d934e 0840
.org 0xd9350
	movs r1, #1	@ 000d9350 0121
.org 0xd9352
	ands r0, r1	@ 000d9352 0840
.org 0xd9354
	cmp r0, #0	@ 000d9354 0028
.org 0xd9356
	beq.n 0xd9370	@ 000d9356 0bd0
.org 0xd9358
	ldrb r0, [r7, #10]	@ 000d9358 b87a
.org 0xd935a
	orrs r0, r1	@ 000d935a 0843
.org 0xd935c
	b.n 0xd9376	@ 000d935c 0be0
.org 0xd935e
	.byte 0x00	@ 000d935e data
.org 0xd935f
	.byte 0x00	@ 000d935f data
.org 0xd9360
	.byte 0xe8,0x81,0x86,0x08	@ 000d9360 data
.org 0xd9364
	.byte 0x38,0xdc,0x02,0x02	@ 000d9364 data
.org 0xd9368
	.byte 0xfd,0x43,0x03,0x00	@ 000d9368 data
.org 0xd936c
	.byte 0xc3,0x9e,0x26,0x00	@ 000d936c data
.org 0xd9370
	ldrb r1, [r7, #10]	@ 000d9370 b97a
.org 0xd9372
	movs r0, #254	@ 000d9372 fe20
.org 0xd9374
	ands r0, r1	@ 000d9374 0840
.org 0xd9376
	strb r0, [r7, #10]	@ 000d9376 b872
.org 0xd9378
	ldr r0, [r7, #96]	@ 000d9378 386e
.org 0xd937a
	adds r0, #32	@ 000d937a 2030
.org 0xd937c
	str r0, [r7, #96]	@ 000d937c 3866
