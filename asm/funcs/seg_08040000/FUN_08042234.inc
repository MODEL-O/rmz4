@ FUN_08042234  entry 0x08042234  size 514
.thumb
.org 0x42234
FUN_08042234:
	push {r4, r5, r6, r7, lr}	@ 00042234 f0b5
.org 0x42236
	mov r7, r8	@ 00042236 4746
.org 0x42238
	push {r7}	@ 00042238 80b4
.org 0x4223a
	sub sp, #8	@ 0004223a 82b0
.org 0x4223c
	adds r5, r0, #0	@ 0004223c 051c
.org 0x4223e
	ldr r7, [r5, #40]	@ 0004223e af6a
.org 0x42240
	movs r1, #168	@ 00042240 a821
.org 0x42242
	lsls r1, r1, #1	@ 00042242 4900
.org 0x42244
	adds r0, r7, r1	@ 00042244 7818
.org 0x42246
	ldrb r0, [r0, #0]	@ 00042246 0078
.org 0x42248
	cmp r0, #255	@ 00042248 ff28
.org 0x4224a
	bne.n 0x42298	@ 0004224a 25d1
.org 0x4224c
	ldr r0, [pc, #64]	@ 0004224c 1048
.org 0x4224e
	adds r2, r7, r0	@ 0004224e 3a18
.org 0x42250
	ldrb r0, [r2, #0]	@ 00042250 1078
.org 0x42252
	movs r1, #64	@ 00042252 4021
.org 0x42254
	orrs r0, r1	@ 00042254 0843
.org 0x42256
	strb r0, [r2, #0]	@ 00042256 1070
.org 0x42258
	ldrb r1, [r5, #10]	@ 00042258 a97a
.org 0x4225a
	movs r0, #254	@ 0004225a fe20
.org 0x4225c
	ands r0, r1	@ 0004225c 0840
.org 0x4225e
	movs r2, #0	@ 0004225e 0022
.org 0x42260
	movs r1, #253	@ 00042260 fd21
.org 0x42262
	ands r0, r1	@ 00042262 0840
.org 0x42264
	strb r0, [r5, #10]	@ 00042264 a872
.org 0x42266
	adds r0, r5, #0	@ 00042266 281c
.org 0x42268
	adds r0, #140	@ 00042268 8c30
.org 0x4226a
	str r2, [r0, #0]	@ 0004226a 0260
.org 0x4226c
	adds r0, #4	@ 0004226c 0430
.org 0x4226e
	str r2, [r0, #0]	@ 0004226e 0260
.org 0x42270
	adds r0, #4	@ 00042270 0430
.org 0x42272
	strb r2, [r0, #0]	@ 00042272 0270
.org 0x42274
	ldrb r1, [r5, #10]	@ 00042274 a97a
.org 0x42276
	movs r0, #251	@ 00042276 fb20
.org 0x42278
	ands r0, r1	@ 00042278 0840
.org 0x4227a
	strb r0, [r5, #10]	@ 0004227a a872
.org 0x4227c
	ldr r1, [pc, #20]	@ 0004227c 0549
.org 0x4227e
	ldrb r0, [r5, #9]	@ 0004227e 687a
.org 0x42280
	lsls r0, r0, #2	@ 00042280 8000
.org 0x42282
	adds r0, r0, r1	@ 00042282 4018
.org 0x42284
	movs r1, #3	@ 00042284 0321
.org 0x42286
	str r1, [r5, #12]	@ 00042286 e960
.org 0x42288
	ldr r0, [r0, #0]	@ 00042288 0068
.org 0x4228a
	ldr r0, [r0, #12]	@ 0004228a c068
.org 0x4228c
	b.n 0x4244a	@ 0004228c dde0
.org 0x4228e
	.byte 0x00	@ 0004228e data
.org 0x4228f
	.byte 0x00	@ 0004228f data
.org 0x42290
	.byte 0x53,0x01,0x00,0x00	@ 00042290 data
.org 0x42294
	.byte 0xf8,0x39,0x85,0x08	@ 00042294 data
.org 0x42298
	adds r0, r5, #0	@ 00042298 281c
.org 0x4229a
	bl 0x1cff0	@ 0004229a daf7a9fe
.org 0x4229e
	ldrb r0, [r5, #14]	@ 0004229e a87b
.org 0x422a0
	cmp r0, #0	@ 000422a0 0028
.org 0x422a2
	bne.n 0x422de	@ 000422a2 1cd1
.org 0x422a4
	adds r0, r5, #0	@ 000422a4 281c
.org 0x422a6
	adds r0, #140	@ 000422a6 8c30
.org 0x422a8
	ldr r0, [r0, #0]	@ 000422a8 0068
.org 0x422aa
	movs r1, #4	@ 000422aa 0421
.org 0x422ac
	ands r0, r1	@ 000422ac 0840
.org 0x422ae
	cmp r0, #0	@ 000422ae 0028
.org 0x422b0
	beq.n 0x422de	@ 000422b0 15d0
.org 0x422b2
	adds r0, r7, #0	@ 000422b2 381c
.org 0x422b4
	bl 0x3aabc	@ 000422b4 f8f702fc
.org 0x422b8
	lsls r0, r0, #24	@ 000422b8 0006
.org 0x422ba
	cmp r0, #0	@ 000422ba 0028
.org 0x422bc
	beq.n 0x422d8	@ 000422bc 0cd0
.org 0x422be
	adds r1, r5, #0	@ 000422be 291c
.org 0x422c0
	adds r1, #84	@ 000422c0 5431
.org 0x422c2
	movs r0, #1	@ 000422c2 0120
.org 0x422c4
	bl 0xd0c88	@ 000422c4 8ef0e0fc
.org 0x422c8
	movs r0, #42	@ 000422c8 2a20
.org 0x422ca
	bl 0x2b10	@ 000422ca c0f721fc
.org 0x422ce
	ldr r1, [pc, #4]	@ 000422ce 0149
.org 0x422d0
	adds r2, r7, r1	@ 000422d0 7a18
.org 0x422d2
	b.n 0x42432	@ 000422d2 aee0
.org 0x422d4
	.byte 0x53,0x01,0x00,0x00	@ 000422d4 data
.org 0x422d8
	ldrb r0, [r5, #14]	@ 000422d8 a87b
.org 0x422da
	adds r0, #1	@ 000422da 0130
.org 0x422dc
	strb r0, [r5, #14]	@ 000422dc a873
.org 0x422de
	ldrb r0, [r7, #10]	@ 000422de b87a
.org 0x422e0
	lsrs r2, r0, #4	@ 000422e0 0209
.org 0x422e2
	movs r0, #1	@ 000422e2 0120
.org 0x422e4
	ands r2, r0	@ 000422e4 0240
.org 0x422e6
	cmp r2, #0	@ 000422e6 002a
.org 0x422e8
	beq.n 0x422f2	@ 000422e8 03d0
.org 0x422ea
	ldrb r1, [r5, #10]	@ 000422ea a97a
.org 0x422ec
	movs r0, #16	@ 000422ec 1020
.org 0x422ee
	orrs r0, r1	@ 000422ee 0843
.org 0x422f0
	b.n 0x422f8	@ 000422f0 02e0
.org 0x422f2
	ldrb r1, [r5, #10]	@ 000422f2 a97a
.org 0x422f4
	movs r0, #239	@ 000422f4 ef20
.org 0x422f6
	ands r0, r1	@ 000422f6 0840
.org 0x422f8
	strb r0, [r5, #10]	@ 000422f8 a872
.org 0x422fa
	adds r1, r2, #0	@ 000422fa 111c
.org 0x422fc
	adds r0, r5, #0	@ 000422fc 281c
.org 0x422fe
	adds r0, #76	@ 000422fe 4c30
.org 0x42300
	strb r1, [r0, #0]	@ 00042300 0170
.org 0x42302
	adds r3, r5, #0	@ 00042302 2b1c
.org 0x42304
	adds r3, #74	@ 00042304 4a33
.org 0x42306
	lsls r1, r1, #4	@ 00042306 0901
.org 0x42308
	ldrb r2, [r3, #0]	@ 00042308 1a78
.org 0x4230a
	movs r0, #17	@ 0004230a 1120
.org 0x4230c
	negs r0, r0	@ 0004230c 4042
.org 0x4230e
	ands r0, r2	@ 0004230e 1040
.org 0x42310
	orrs r0, r1	@ 00042310 0843
.org 0x42312
	strb r0, [r3, #0]	@ 00042312 1870
.org 0x42314
	adds r0, r7, #0	@ 00042314 381c
.org 0x42316
	adds r0, #113	@ 00042316 7130
.org 0x42318
	ldrb r0, [r0, #0]	@ 00042318 0078
.org 0x4231a
	lsls r0, r0, #24	@ 0004231a 0006
.org 0x4231c
	asrs r0, r0, #24	@ 0004231c 0016
.org 0x4231e
	movs r4, #0	@ 0004231e 0024
.org 0x42320
	cmp r0, #3	@ 00042320 0328
.org 0x42322
	bne.n 0x42326	@ 00042322 00d1
.org 0x42324
	movs r4, #1	@ 00042324 0124
.org 0x42326
	ldrb r1, [r5, #10]	@ 00042326 a97a
.org 0x42328
	movs r0, #16	@ 00042328 1020
.org 0x4232a
	ands r0, r1	@ 0004232a 0840
.org 0x4232c
	cmp r0, #0	@ 0004232c 0028
.org 0x4232e
	beq.n 0x42376	@ 0004232e 22d0
.org 0x42330
	ldr r3, [pc, #24]	@ 00042330 064b
.org 0x42332
	lsls r4, r4, #3	@ 00042332 e400
.org 0x42334
	movs r0, #168	@ 00042334 a820
.org 0x42336
	lsls r0, r0, #1	@ 00042336 4000
.org 0x42338
	adds r2, r7, r0	@ 00042338 3a18
.org 0x4233a
	ldrb r0, [r2, #0]	@ 0004233a 1078
.org 0x4233c
	lsls r0, r0, #4	@ 0004233c 0001
.org 0x4233e
	adds r0, r4, r0	@ 0004233e 2018
.org 0x42340
	adds r0, r0, r3	@ 00042340 c018
.org 0x42342
	ldr r1, [r7, #84]	@ 00042342 796d
.org 0x42344
	ldr r0, [r0, #0]	@ 00042344 0068
.org 0x42346
	subs r1, r1, r0	@ 00042346 091a
.org 0x42348
	b.n 0x4238e	@ 00042348 21e0
.org 0x4234a
	.byte 0x00	@ 0004234a data
.org 0x4234b
	.byte 0x00	@ 0004234b data
.org 0x4234c
	.byte 0x4c,0x35,0x85,0x08	@ 0004234c data
.org 0x42350
	adds r0, r7, #0	@ 00042350 381c
.org 0x42352
	adds r1, r5, #0	@ 00042352 291c
.org 0x42354
	mov r2, sp	@ 00042354 6a46
.org 0x42356
	movs r3, #0	@ 00042356 0023
.org 0x42358
	bl 0x41edc	@ 00042358 fff7c0fd
.org 0x4235c
	adds r0, r7, #0	@ 0004235c 381c
.org 0x4235e
	adds r1, r5, #0	@ 0004235e 291c
.org 0x42360
	mov r2, sp	@ 00042360 6a46
.org 0x42362
	movs r3, #1	@ 00042362 0123
.org 0x42364
	bl 0x41edc	@ 00042364 fff7bafd
.org 0x42368
	movs r0, #60	@ 00042368 3c20
.org 0x4236a
	bl 0x2b10	@ 0004236a c0f7d1fb
.org 0x4236e
	ldrb r0, [r5, #13]	@ 0004236e 687b
.org 0x42370
	adds r0, #1	@ 00042370 0130
.org 0x42372
	strb r0, [r5, #13]	@ 00042372 6873
.org 0x42374
	b.n 0x42420	@ 00042374 54e0
.org 0x42376
	ldr r3, [pc, #108]	@ 00042376 1b4b
.org 0x42378
	lsls r4, r4, #3	@ 00042378 e400
.org 0x4237a
	movs r1, #168	@ 0004237a a821
.org 0x4237c
	lsls r1, r1, #1	@ 0004237c 4900
.org 0x4237e
	adds r2, r7, r1	@ 0004237e 7a18
.org 0x42380
	ldrb r0, [r2, #0]	@ 00042380 1078
.org 0x42382
	lsls r0, r0, #4	@ 00042382 0001
.org 0x42384
	adds r0, r4, r0	@ 00042384 2018
.org 0x42386
	adds r0, r0, r3	@ 00042386 c018
.org 0x42388
	ldr r1, [r7, #84]	@ 00042388 796d
.org 0x4238a
	ldr r0, [r0, #0]	@ 0004238a 0068
.org 0x4238c
	adds r1, r1, r0	@ 0004238c 0918
.org 0x4238e
	str r1, [r5, #84]	@ 0004238e 6965
.org 0x42390
	ldrb r0, [r2, #0]	@ 00042390 1078
.org 0x42392
	lsls r0, r0, #4	@ 00042392 0001
.org 0x42394
	adds r0, r4, r0	@ 00042394 2018
.org 0x42396
	adds r1, r3, #4	@ 00042396 191d
.org 0x42398
	adds r0, r0, r1	@ 00042398 4018
.org 0x4239a
	ldr r1, [r7, #88]	@ 0004239a b96d
.org 0x4239c
	ldr r0, [r0, #0]	@ 0004239c 0068
.org 0x4239e
	adds r1, r1, r0	@ 0004239e 0918
.org 0x423a0
	str r1, [r5, #88]	@ 000423a0 a965
.org 0x423a2
	ldr r1, [pc, #68]	@ 000423a2 1149
.org 0x423a4
	ldrb r0, [r2, #0]	@ 000423a4 1078
.org 0x423a6
	adds r0, r0, r1	@ 000423a6 4018
.org 0x423a8
	ldrb r2, [r0, #0]	@ 000423a8 0278
.org 0x423aa
	adds r0, r5, #0	@ 000423aa 281c
.org 0x423ac
	adds r0, #36	@ 000423ac 2430
.org 0x423ae
	strb r2, [r0, #0]	@ 000423ae 0270
.org 0x423b0
	ldrb r0, [r5, #13]	@ 000423b0 687b
.org 0x423b2
	cmp r0, #0	@ 000423b2 0028
.org 0x423b4
	bne.n 0x42420	@ 000423b4 34d1
.org 0x423b6
	movs r4, #14	@ 000423b6 0e24
.org 0x423b8
	negs r4, r4	@ 000423b8 6442
.org 0x423ba
	adds r0, r2, #0	@ 000423ba 101c
.org 0x423bc
	adds r0, #64	@ 000423bc 4030
.org 0x423be
	lsls r2, r2, #1	@ 000423be 5200
.org 0x423c0
	mov r8, r2	@ 000423c0 9046
.org 0x423c2
	ldr r1, [pc, #40]	@ 000423c2 0a49
.org 0x423c4
	lsls r0, r0, #24	@ 000423c4 0006
.org 0x423c6
	lsrs r0, r0, #23	@ 000423c6 c00d
.org 0x423c8
	adds r6, r0, r1	@ 000423c8 4618
.org 0x423ca
	ldrb r1, [r5, #10]	@ 000423ca a97a
.org 0x423cc
	movs r0, #16	@ 000423cc 1020
.org 0x423ce
	ands r0, r1	@ 000423ce 0840
.org 0x423d0
	cmp r0, #0	@ 000423d0 0028
.org 0x423d2
	beq.n 0x423f0	@ 000423d2 0dd0
.org 0x423d4
	movs r1, #0	@ 000423d4 0021
.org 0x423d6
	ldrsh r0, [r6, r1]	@ 000423d6 705e
.org 0x423d8
	adds r1, r0, #0	@ 000423d8 011c
.org 0x423da
	muls r1, r4	@ 000423da 6143
.org 0x423dc
	ldr r0, [r5, #84]	@ 000423dc 686d
.org 0x423de
	adds r0, r0, r1	@ 000423de 4018
.org 0x423e0
	b.n 0x423fc	@ 000423e0 0ce0
.org 0x423e2
	.byte 0x00	@ 000423e2 data
.org 0x423e3
	.byte 0x00	@ 000423e3 data
.org 0x423e4
	.byte 0x4c,0x35,0x85,0x08	@ 000423e4 data
.org 0x423e8
	.byte 0xec,0x35,0x85,0x08	@ 000423e8 data
.org 0x423ec
	.byte 0x0c,0x93,0x12,0x08	@ 000423ec data
.org 0x423f0
	movs r1, #0	@ 000423f0 0021
.org 0x423f2
	ldrsh r0, [r6, r1]	@ 000423f2 705e
.org 0x423f4
	adds r1, r0, #0	@ 000423f4 011c
.org 0x423f6
	muls r1, r4	@ 000423f6 6143
.org 0x423f8
	ldr r0, [r5, #84]	@ 000423f8 686d
.org 0x423fa
	subs r0, r0, r1	@ 000423fa 401a
.org 0x423fc
	str r0, [sp, #0]	@ 000423fc 0090
.org 0x423fe
	ldr r0, [pc, #88]	@ 000423fe 1648
.org 0x42400
	add r0, r8	@ 00042400 4044
.org 0x42402
	movs r1, #0	@ 00042402 0021
.org 0x42404
	ldrsh r0, [r0, r1]	@ 00042404 405e
.org 0x42406
	muls r0, r4	@ 00042406 6043
.org 0x42408
	ldr r1, [r5, #88]	@ 00042408 a96d
.org 0x4240a
	subs r1, r1, r0	@ 0004240a 091a
.org 0x4240c
	str r1, [sp, #4]	@ 0004240c 0191
.org 0x4240e
	ldr r0, [sp, #0]	@ 0004240e 0098
.org 0x42410
	bl 0x427fc	@ 00042410 00f0f4f9
.org 0x42414
	lsls r0, r0, #16	@ 00042414 0004
.org 0x42416
	cmp r0, #0	@ 00042416 0028
.org 0x42418
	bne.n 0x42350	@ 00042418 9ad1
.org 0x4241a
	adds r4, #4	@ 0004241a 0434
.org 0x4241c
	cmp r4, #18	@ 0004241c 122c
.org 0x4241e
	ble.n 0x423ca	@ 0004241e d4dd
.org 0x42420
	ldrb r0, [r5, #18]	@ 00042420 a87c
.org 0x42422
	adds r1, r0, #1	@ 00042422 411c
.org 0x42424
	strb r1, [r5, #18]	@ 00042424 a974
.org 0x42426
	lsls r0, r0, #24	@ 00042426 0006
.org 0x42428
	lsrs r0, r0, #24	@ 00042428 000e
.org 0x4242a
	cmp r0, #16	@ 0004242a 1028
.org 0x4242c
	bls.n 0x4244c	@ 0004242c 0ed9
.org 0x4242e
	ldr r0, [pc, #44]	@ 0004242e 0b48
.org 0x42430
	adds r2, r7, r0	@ 00042430 3a18
.org 0x42432
	ldrb r0, [r2, #0]	@ 00042432 1078
.org 0x42434
	movs r1, #64	@ 00042434 4021
