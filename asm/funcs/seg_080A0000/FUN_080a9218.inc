@ FUN_080a9218  entry 0x080a9218  size 456
.thumb
.org 0xa9218
FUN_080a9218:
	push {r4, r5, r6, r7, lr}	@ 000a9218 f0b5
.org 0xa921a
	mov r7, sl	@ 000a921a 5746
.org 0xa921c
	mov r6, r9	@ 000a921c 4e46
.org 0xa921e
	mov r5, r8	@ 000a921e 4546
.org 0xa9220
	push {r5, r6, r7}	@ 000a9220 e0b4
.org 0xa9222
	sub sp, #8	@ 000a9222 82b0
.org 0xa9224
	adds r7, r0, #0	@ 000a9224 071c
.org 0xa9226
	ldr r0, [r7, #40]	@ 000a9226 b86a
.org 0xa9228
	str r0, [sp, #0]	@ 000a9228 0090
.org 0xa922a
	ldrb r0, [r7, #14]	@ 000a922a b87b
.org 0xa922c
	cmp r0, #0	@ 000a922c 0028
.org 0xa922e
	beq.n 0xa9232	@ 000a922e 00d0
.org 0xa9230
	b.n 0xa93e4	@ 000a9230 d8e0
.org 0xa9232
	ldrb r0, [r7, #30]	@ 000a9232 b87f
.org 0xa9234
	lsls r0, r0, #8	@ 000a9234 0002
.org 0xa9236
	adds r1, r7, #0	@ 000a9236 391c
.org 0xa9238
	adds r1, #112	@ 000a9238 7031
.org 0xa923a
	ldrb r1, [r1, #0]	@ 000a923a 0978
.org 0xa923c
	orrs r0, r1	@ 000a923c 0843
.org 0xa923e
	ldr r1, [pc, #144]	@ 000a923e 2449
.org 0xa9240
	cmp r0, r1	@ 000a9240 8842
.org 0xa9242
	bne.n 0xa92e4	@ 000a9242 4fd1
.org 0xa9244
	adds r6, r7, #0	@ 000a9244 3e1c
.org 0xa9246
	adds r6, #84	@ 000a9246 5436
.org 0xa9248
	ldr r4, [pc, #136]	@ 000a9248 224c
.org 0xa924a
	ldr r0, [r4, #0]	@ 000a924a 2068
.org 0xa924c
	ldr r1, [pc, #136]	@ 000a924c 2249
.org 0xa924e
	adds r3, r0, #0	@ 000a924e 031c
.org 0xa9250
	muls r3, r1	@ 000a9250 4b43
.org 0xa9252
	ldr r2, [pc, #136]	@ 000a9252 224a
.org 0xa9254
	mov r9, r2	@ 000a9254 9146
.org 0xa9256
	add r3, r9	@ 000a9256 4b44
.org 0xa9258
	lsls r3, r3, #1	@ 000a9258 5b00
.org 0xa925a
	lsrs r0, r3, #1	@ 000a925a 5808
.org 0xa925c
	str r0, [r4, #0]	@ 000a925c 2060
.org 0xa925e
	lsrs r3, r3, #17	@ 000a925e 5b0c
.org 0xa9260
	movs r0, #1	@ 000a9260 0120
.org 0xa9262
	mov r8, r0	@ 000a9262 8046
.org 0xa9264
	mov r1, r8	@ 000a9264 4146
.org 0xa9266
	ands r3, r1	@ 000a9266 0b40
.org 0xa9268
	lsls r3, r3, #4	@ 000a9268 1b01
.org 0xa926a
	adds r5, r7, #0	@ 000a926a 3d1c
.org 0xa926c
	adds r5, #188	@ 000a926c bc35
.org 0xa926e
	ldrb r0, [r5, #0]	@ 000a926e 2878
.org 0xa9270
	orrs r3, r0	@ 000a9270 0343
.org 0xa9272
	adds r0, r6, #0	@ 000a9272 301c
.org 0xa9274
	ldr r1, [pc, #104]	@ 000a9274 1a49
.org 0xa9276
	movs r2, #0	@ 000a9276 0022
.org 0xa9278
	bl 0xd4c8c	@ 000a9278 2bf008fd
.org 0xa927c
	ldr r1, [pc, #96]	@ 000a927c 1849
.org 0xa927e
	adds r1, #28	@ 000a927e 1c31
.org 0xa9280
	ldr r0, [r4, #0]	@ 000a9280 2068
.org 0xa9282
	ldr r2, [pc, #84]	@ 000a9282 154a
.org 0xa9284
	adds r3, r0, #0	@ 000a9284 031c
.org 0xa9286
	muls r3, r2	@ 000a9286 5343
.org 0xa9288
	add r3, r9	@ 000a9288 4b44
.org 0xa928a
	lsls r3, r3, #1	@ 000a928a 5b00
.org 0xa928c
	lsrs r0, r3, #1	@ 000a928c 5808
.org 0xa928e
	str r0, [r4, #0]	@ 000a928e 2060
.org 0xa9290
	lsrs r3, r3, #17	@ 000a9290 5b0c
.org 0xa9292
	mov r0, r8	@ 000a9292 4046
.org 0xa9294
	ands r3, r0	@ 000a9294 0340
.org 0xa9296
	lsls r3, r3, #4	@ 000a9296 1b01
.org 0xa9298
	ldrb r0, [r5, #0]	@ 000a9298 2878
.org 0xa929a
	orrs r3, r0	@ 000a929a 0343
.org 0xa929c
	adds r0, r6, #0	@ 000a929c 301c
.org 0xa929e
	movs r2, #0	@ 000a929e 0022
.org 0xa92a0
	bl 0xd4c8c	@ 000a92a0 2bf0f4fc
.org 0xa92a4
	ldr r1, [pc, #56]	@ 000a92a4 0e49
.org 0xa92a6
	adds r1, #56	@ 000a92a6 3831
.org 0xa92a8
	ldr r0, [r4, #0]	@ 000a92a8 2068
.org 0xa92aa
	ldr r2, [pc, #44]	@ 000a92aa 0b4a
.org 0xa92ac
	adds r3, r0, #0	@ 000a92ac 031c
.org 0xa92ae
	muls r3, r2	@ 000a92ae 5343
.org 0xa92b0
	add r3, r9	@ 000a92b0 4b44
.org 0xa92b2
	lsls r3, r3, #1	@ 000a92b2 5b00
.org 0xa92b4
	lsrs r0, r3, #1	@ 000a92b4 5808
.org 0xa92b6
	str r0, [r4, #0]	@ 000a92b6 2060
.org 0xa92b8
	lsrs r3, r3, #17	@ 000a92b8 5b0c
.org 0xa92ba
	mov r0, r8	@ 000a92ba 4046
.org 0xa92bc
	ands r3, r0	@ 000a92bc 0340
.org 0xa92be
	lsls r3, r3, #4	@ 000a92be 1b01
.org 0xa92c0
	ldrb r0, [r5, #0]	@ 000a92c0 2878
.org 0xa92c2
	orrs r3, r0	@ 000a92c2 0343
.org 0xa92c4
	adds r0, r6, #0	@ 000a92c4 301c
.org 0xa92c6
	movs r2, #0	@ 000a92c6 0022
.org 0xa92c8
	bl 0xd4c8c	@ 000a92c8 2bf0e0fc
.org 0xa92cc
	adds r4, r6, #0	@ 000a92cc 341c
.org 0xa92ce
	b.n 0xa937a	@ 000a92ce 54e0
.org 0xa92d0
	.byte 0x09,0x93,0x00,0x00	@ 000a92d0 data
.org 0xa92d4
	.byte 0x38,0xdc,0x02,0x02	@ 000a92d4 data
.org 0xa92d8
	.byte 0xfd,0x43,0x03,0x00	@ 000a92d8 data
.org 0xa92dc
	.byte 0xc3,0x9e,0x26,0x00	@ 000a92dc data
.org 0xa92e0
	.byte 0x40,0x28,0x86,0x08	@ 000a92e0 data
.org 0xa92e4
	movs r1, #84	@ 000a92e4 5421
.org 0xa92e6
	adds r1, r1, r7	@ 000a92e6 c919
.org 0xa92e8
	mov sl, r1	@ 000a92e8 8a46
.org 0xa92ea
	ldr r5, [pc, #180]	@ 000a92ea 2d4d
.org 0xa92ec
	ldr r4, [pc, #180]	@ 000a92ec 2d4c
.org 0xa92ee
	ldr r0, [r4, #0]	@ 000a92ee 2068
.org 0xa92f0
	ldr r2, [pc, #180]	@ 000a92f0 2d4a
.org 0xa92f2
	adds r3, r0, #0	@ 000a92f2 031c
.org 0xa92f4
	muls r3, r2	@ 000a92f4 5343
.org 0xa92f6
	ldr r0, [pc, #180]	@ 000a92f6 2d48
.org 0xa92f8
	mov r9, r0	@ 000a92f8 8146
.org 0xa92fa
	add r3, r9	@ 000a92fa 4b44
.org 0xa92fc
	lsls r3, r3, #1	@ 000a92fc 5b00
.org 0xa92fe
	lsrs r0, r3, #1	@ 000a92fe 5808
.org 0xa9300
	str r0, [r4, #0]	@ 000a9300 2060
.org 0xa9302
	lsrs r3, r3, #17	@ 000a9302 5b0c
.org 0xa9304
	movs r1, #1	@ 000a9304 0121
.org 0xa9306
	mov r8, r1	@ 000a9306 8846
.org 0xa9308
	mov r2, r8	@ 000a9308 4246
.org 0xa930a
	ands r3, r2	@ 000a930a 1340
.org 0xa930c
	lsls r3, r3, #4	@ 000a930c 1b01
.org 0xa930e
	adds r0, r7, #0	@ 000a930e 381c
.org 0xa9310
	adds r0, #188	@ 000a9310 bc30
.org 0xa9312
	str r0, [sp, #4]	@ 000a9312 0190
.org 0xa9314
	ldrb r0, [r0, #0]	@ 000a9314 0078
.org 0xa9316
	orrs r3, r0	@ 000a9316 0343
.org 0xa9318
	mov r0, sl	@ 000a9318 5046
.org 0xa931a
	adds r1, r5, #0	@ 000a931a 291c
.org 0xa931c
	movs r2, #0	@ 000a931c 0022
.org 0xa931e
	bl 0xd4c8c	@ 000a931e 2bf0b5fc
.org 0xa9322
	adds r1, r5, #0	@ 000a9322 291c
.org 0xa9324
	adds r1, #28	@ 000a9324 1c31
.org 0xa9326
	ldr r0, [r4, #0]	@ 000a9326 2068
.org 0xa9328
	ldr r2, [pc, #124]	@ 000a9328 1f4a
.org 0xa932a
	adds r3, r0, #0	@ 000a932a 031c
.org 0xa932c
	muls r3, r2	@ 000a932c 5343
.org 0xa932e
	add r3, r9	@ 000a932e 4b44
.org 0xa9330
	lsls r3, r3, #1	@ 000a9330 5b00
.org 0xa9332
	lsrs r0, r3, #1	@ 000a9332 5808
.org 0xa9334
	str r0, [r4, #0]	@ 000a9334 2060
.org 0xa9336
	lsrs r3, r3, #17	@ 000a9336 5b0c
.org 0xa9338
	mov r0, r8	@ 000a9338 4046
.org 0xa933a
	ands r3, r0	@ 000a933a 0340
.org 0xa933c
	lsls r3, r3, #4	@ 000a933c 1b01
.org 0xa933e
	ldr r2, [sp, #4]	@ 000a933e 019a
.org 0xa9340
	ldrb r0, [r2, #0]	@ 000a9340 1078
.org 0xa9342
	orrs r3, r0	@ 000a9342 0343
.org 0xa9344
	mov r0, sl	@ 000a9344 5046
.org 0xa9346
	movs r2, #0	@ 000a9346 0022
.org 0xa9348
	bl 0xd4c8c	@ 000a9348 2bf0a0fc
.org 0xa934c
	adds r5, #56	@ 000a934c 3835
.org 0xa934e
	ldr r0, [r4, #0]	@ 000a934e 2068
.org 0xa9350
	ldr r1, [pc, #84]	@ 000a9350 1549
.org 0xa9352
	adds r3, r0, #0	@ 000a9352 031c
.org 0xa9354
	muls r3, r1	@ 000a9354 4b43
.org 0xa9356
	add r3, r9	@ 000a9356 4b44
.org 0xa9358
	lsls r3, r3, #1	@ 000a9358 5b00
.org 0xa935a
	lsrs r0, r3, #1	@ 000a935a 5808
.org 0xa935c
	str r0, [r4, #0]	@ 000a935c 2060
.org 0xa935e
	lsrs r3, r3, #17	@ 000a935e 5b0c
.org 0xa9360
	mov r2, r8	@ 000a9360 4246
.org 0xa9362
	ands r3, r2	@ 000a9362 1340
.org 0xa9364
	lsls r3, r3, #4	@ 000a9364 1b01
.org 0xa9366
	ldr r1, [sp, #4]	@ 000a9366 0199
.org 0xa9368
	ldrb r0, [r1, #0]	@ 000a9368 0878
.org 0xa936a
	orrs r3, r0	@ 000a936a 0343
.org 0xa936c
	mov r0, sl	@ 000a936c 5046
.org 0xa936e
	adds r1, r5, #0	@ 000a936e 291c
.org 0xa9370
	movs r2, #0	@ 000a9370 0022
.org 0xa9372
	bl 0xd4c8c	@ 000a9372 2bf08bfc
.org 0xa9376
	mov r4, sl	@ 000a9376 5446
.org 0xa9378
	ldr r5, [sp, #4]	@ 000a9378 019d
.org 0xa937a
	adds r1, r7, #0	@ 000a937a 391c
.org 0xa937c
	adds r1, #140	@ 000a937c 8c31
.org 0xa937e
	ldr r2, [r1, #0]	@ 000a937e 0a68
.org 0xa9380
	movs r0, #128	@ 000a9380 8020
.org 0xa9382
	lsls r0, r0, #9	@ 000a9382 4002
.org 0xa9384
	ands r2, r0	@ 000a9384 0240
.org 0xa9386
	adds r6, r1, #0	@ 000a9386 0e1c
.org 0xa9388
	cmp r2, #0	@ 000a9388 002a
.org 0xa938a
	beq.n 0xa93b0	@ 000a938a 11d0
.org 0xa938c
	movs r2, #128	@ 000a938c 8022
.org 0xa938e
	lsls r2, r2, #2	@ 000a938e 9200
.org 0xa9390
	ldrb r3, [r5, #0]	@ 000a9390 2b78
.org 0xa9392
	movs r0, #0	@ 000a9392 0020
.org 0xa9394
	adds r1, r4, #0	@ 000a9394 211c
.org 0xa9396
	bl 0xd0dc4	@ 000a9396 27f015fd
.org 0xa939a
	movs r0, #1	@ 000a939a 0120
.org 0xa939c
	strb r0, [r7, #13]	@ 000a939c 7873
.org 0xa939e
	b.n 0xa93b2	@ 000a939e 08e0
.org 0xa93a0
	.byte 0x94,0x28,0x86,0x08	@ 000a93a0 data
.org 0xa93a4
	.byte 0x38,0xdc,0x02,0x02	@ 000a93a4 data
.org 0xa93a8
	.byte 0xfd,0x43,0x03,0x00	@ 000a93a8 data
.org 0xa93ac
	.byte 0xc3,0x9e,0x26,0x00	@ 000a93ac data
.org 0xa93b0
	strb r2, [r7, #13]	@ 000a93b0 7a73
.org 0xa93b2
	ldr r1, [sp, #0]	@ 000a93b2 0099
.org 0xa93b4
	adds r1, #227	@ 000a93b4 e331
.org 0xa93b6
	ldrb r0, [r1, #0]	@ 000a93b6 0878
.org 0xa93b8
	subs r0, #1	@ 000a93b8 0138
.org 0xa93ba
	movs r2, #0	@ 000a93ba 0022
.org 0xa93bc
	strb r0, [r1, #0]	@ 000a93bc 0870
.org 0xa93be
	ldr r0, [sp, #0]	@ 000a93be 0098
.org 0xa93c0
	adds r0, #204	@ 000a93c0 cc30
.org 0xa93c2
	ldrb r1, [r7, #16]	@ 000a93c2 397c
.org 0xa93c4
	adds r0, r0, r1	@ 000a93c4 4018
.org 0xa93c6
	movs r1, #1	@ 000a93c6 0121
.org 0xa93c8
	strb r1, [r0, #0]	@ 000a93c8 0170
.org 0xa93ca
	str r2, [r6, #0]	@ 000a93ca 3260
.org 0xa93cc
	adds r0, r7, #0	@ 000a93cc 381c
.org 0xa93ce
	adds r0, #144	@ 000a93ce 9030
.org 0xa93d0
	str r2, [r0, #0]	@ 000a93d0 0260
.org 0xa93d2
	adds r0, #4	@ 000a93d2 0430
.org 0xa93d4
	strb r2, [r0, #0]	@ 000a93d4 0270
.org 0xa93d6
	ldrb r1, [r7, #10]	@ 000a93d6 b97a
.org 0xa93d8
	movs r0, #251	@ 000a93d8 fb20
.org 0xa93da
	ands r0, r1	@ 000a93da 0840
.org 0xa93dc
	strb r0, [r7, #10]	@ 000a93dc b872
.org 0xa93de
	ldrb r0, [r7, #14]	@ 000a93de b87b
