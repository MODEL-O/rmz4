@ FUN_0802f1cc  entry 0x0802f1cc  size 686
.thumb
.org 0x2f1cc
FUN_0802f1cc:
	push {r4, r5, r6, r7, lr}	@ 0002f1cc f0b5
.org 0x2f1ce
	mov r7, sl	@ 0002f1ce 5746
.org 0x2f1d0
	mov r6, r9	@ 0002f1d0 4e46
.org 0x2f1d2
	mov r5, r8	@ 0002f1d2 4546
.org 0x2f1d4
	push {r5, r6, r7}	@ 0002f1d4 e0b4
.org 0x2f1d6
	sub sp, #20	@ 0002f1d6 85b0
.org 0x2f1d8
	adds r5, r0, #0	@ 0002f1d8 051c
.org 0x2f1da
	ldr r1, [pc, #280]	@ 0002f1da 4649
.org 0x2f1dc
	ldrb r0, [r5, #9]	@ 0002f1dc 687a
.org 0x2f1de
	lsls r0, r0, #2	@ 0002f1de 8000
.org 0x2f1e0
	adds r0, r0, r1	@ 0002f1e0 4018
.org 0x2f1e2
	movs r1, #1	@ 0002f1e2 0121
.org 0x2f1e4
	str r1, [r5, #12]	@ 0002f1e4 e960
.org 0x2f1e6
	ldr r0, [r0, #0]	@ 0002f1e6 0068
.org 0x2f1e8
	ldr r0, [r0, #4]	@ 0002f1e8 4068
.org 0x2f1ea
	str r0, [r5, #20]	@ 0002f1ea 6861
.org 0x2f1ec
	adds r0, r5, #0	@ 0002f1ec 281c
.org 0x2f1ee
	bl 0x1cc9c	@ 0002f1ee edf755fd
.org 0x2f1f2
	adds r0, r5, #0	@ 0002f1f2 281c
.org 0x2f1f4
	bl 0x1ceec	@ 0002f1f4 edf77afe
.org 0x2f1f8
	ldrb r1, [r5, #10]	@ 0002f1f8 a97a
.org 0x2f1fa
	movs r0, #1	@ 0002f1fa 0120
.org 0x2f1fc
	movs r4, #0	@ 0002f1fc 0024
.org 0x2f1fe
	movs r6, #0	@ 0002f1fe 0026
.org 0x2f200
	orrs r0, r1	@ 0002f200 0843
.org 0x2f202
	movs r1, #2	@ 0002f202 0221
.org 0x2f204
	orrs r0, r1	@ 0002f204 0843
.org 0x2f206
	strb r0, [r5, #10]	@ 0002f206 a872
.org 0x2f208
	adds r0, r5, #0	@ 0002f208 281c
.org 0x2f20a
	bl 0x2b7d8	@ 0002f20a fcf7e5fa
.org 0x2f20e
	adds r1, r0, #0	@ 0002f20e 011c
.org 0x2f210
	lsls r1, r1, #16	@ 0002f210 0904
.org 0x2f212
	lsrs r1, r1, #16	@ 0002f212 090c
.org 0x2f214
	adds r0, r5, #0	@ 0002f214 281c
.org 0x2f216
	bl 0x1cf00	@ 0002f216 edf773fe
.org 0x2f21a
	adds r0, r5, #0	@ 0002f21a 281c
.org 0x2f21c
	bl 0x1cff0	@ 0002f21c edf7e8fe
.org 0x2f220
	ldrb r0, [r5, #17]	@ 0002f220 687c
.org 0x2f222
	cmp r0, #0	@ 0002f222 0028
.org 0x2f224
	bne.n 0x2f230	@ 0002f224 04d1
.org 0x2f226
	ldr r0, [r5, #84]	@ 0002f226 686d
.org 0x2f228
	ldr r1, [r5, #88]	@ 0002f228 a96d
.org 0x2f22a
	bl 0x864c	@ 0002f22a d9f70ffa
.org 0x2f22e
	str r0, [r5, #88]	@ 0002f22e a865
.org 0x2f230
	ldrb r0, [r5, #10]	@ 0002f230 a87a
.org 0x2f232
	movs r1, #4	@ 0002f232 0421
.org 0x2f234
	orrs r0, r1	@ 0002f234 0843
.org 0x2f236
	strb r0, [r5, #10]	@ 0002f236 a872
.org 0x2f238
	adds r4, r5, #0	@ 0002f238 2c1c
.org 0x2f23a
	adds r4, #116	@ 0002f23a 7434
.org 0x2f23c
	ldr r1, [pc, #184]	@ 0002f23c 2e49
.org 0x2f23e
	adds r2, r5, #0	@ 0002f23e 2a1c
.org 0x2f240
	adds r2, #84	@ 0002f240 5432
.org 0x2f242
	adds r0, r4, #0	@ 0002f242 201c
.org 0x2f244
	movs r3, #16	@ 0002f244 1023
.org 0x2f246
	bl 0x5760	@ 0002f246 d6f78bfa
.org 0x2f24a
	str r5, [r4, #44]	@ 0002f24a e562
.org 0x2f24c
	ldr r0, [pc, #172]	@ 0002f24c 2b48
.org 0x2f24e
	str r0, [r4, #36]	@ 0002f24e 6062
.org 0x2f250
	adds r0, r5, #0	@ 0002f250 281c
.org 0x2f252
	bl 0x38b38	@ 0002f252 09f071fc
.org 0x2f256
	str r6, [r5, #92]	@ 0002f256 ee65
.org 0x2f258
	str r6, [r5, #96]	@ 0002f258 2e66
.org 0x2f25a
	str r6, [r5, #100]	@ 0002f25a 6e66
.org 0x2f25c
	str r6, [r5, #104]	@ 0002f25c ae66
.org 0x2f25e
	adds r1, r5, #0	@ 0002f25e 291c
.org 0x2f260
	adds r1, #180	@ 0002f260 b431
.org 0x2f262
	strb r6, [r5, #13]	@ 0002f262 6e73
.org 0x2f264
	adds r0, r5, #0	@ 0002f264 281c
.org 0x2f266
	adds r0, #252	@ 0002f266 fc30
.org 0x2f268
	strb r6, [r0, #0]	@ 0002f268 0670
.org 0x2f26a
	strb r6, [r5, #14]	@ 0002f26a ae73
.org 0x2f26c
	adds r0, #1	@ 0002f26c 0130
.org 0x2f26e
	strb r6, [r0, #0]	@ 0002f26e 0670
.org 0x2f270
	strb r6, [r5, #15]	@ 0002f270 ee73
.org 0x2f272
	movs r2, #128	@ 0002f272 8022
.org 0x2f274
	lsls r2, r2, #1	@ 0002f274 5200
.org 0x2f276
	adds r0, r5, r2	@ 0002f276 a818
.org 0x2f278
	strb r6, [r0, #0]	@ 0002f278 0670
.org 0x2f27a
	adds r2, #4	@ 0002f27a 0432
.org 0x2f27c
	adds r0, r5, r2	@ 0002f27c a818
.org 0x2f27e
	strb r6, [r0, #0]	@ 0002f27e 0670
.org 0x2f280
	subs r2, #3	@ 0002f280 033a
.org 0x2f282
	adds r0, r5, r2	@ 0002f282 a818
.org 0x2f284
	strb r6, [r0, #0]	@ 0002f284 0670
.org 0x2f286
	adds r2, #4	@ 0002f286 0432
.org 0x2f288
	adds r0, r5, r2	@ 0002f288 a818
.org 0x2f28a
	strb r6, [r0, #0]	@ 0002f28a 0670
.org 0x2f28c
	subs r2, #3	@ 0002f28c 033a
.org 0x2f28e
	adds r0, r5, r2	@ 0002f28e a818
.org 0x2f290
	strb r6, [r0, #0]	@ 0002f290 0670
.org 0x2f292
	adds r2, #4	@ 0002f292 0432
.org 0x2f294
	adds r0, r5, r2	@ 0002f294 a818
.org 0x2f296
	strb r6, [r0, #0]	@ 0002f296 0670
.org 0x2f298
	subs r2, #3	@ 0002f298 033a
.org 0x2f29a
	adds r0, r5, r2	@ 0002f29a a818
.org 0x2f29c
	strb r6, [r0, #0]	@ 0002f29c 0670
.org 0x2f29e
	adds r2, #4	@ 0002f29e 0432
.org 0x2f2a0
	adds r0, r5, r2	@ 0002f2a0 a818
.org 0x2f2a2
	strb r6, [r0, #0]	@ 0002f2a2 0670
.org 0x2f2a4
	movs r0, #135	@ 0002f2a4 8720
.org 0x2f2a6
	lsls r0, r0, #1	@ 0002f2a6 4000
.org 0x2f2a8
	adds r2, r5, r0	@ 0002f2a8 2a18
.org 0x2f2aa
	ldr r0, [pc, #84]	@ 0002f2aa 1548
.org 0x2f2ac
	strh r0, [r2, #0]	@ 0002f2ac 1080
.org 0x2f2ae
	ldrb r0, [r1, #19]	@ 0002f2ae c87c
.org 0x2f2b0
	adds r4, r1, #0	@ 0002f2b0 0c1c
.org 0x2f2b2
	cmp r0, #3	@ 0002f2b2 0328
.org 0x2f2b4
	bhi.n 0x2f2da	@ 0002f2b4 11d8
.org 0x2f2b6
	ldr r0, [pc, #76]	@ 0002f2b6 1348
.org 0x2f2b8
	ldrh r0, [r0, #0]	@ 0002f2b8 0088
.org 0x2f2ba
	cmp r0, #17	@ 0002f2ba 1128
.org 0x2f2bc
	bne.n 0x2f2da	@ 0002f2bc 0dd1
.org 0x2f2be
	ldrb r0, [r4, #12]	@ 0002f2be 207b
.org 0x2f2c0
	cmp r0, #2	@ 0002f2c0 0228
.org 0x2f2c2
	bls.n 0x2f2c8	@ 0002f2c2 01d9
.org 0x2f2c4
	movs r0, #2	@ 0002f2c4 0220
.org 0x2f2c6
	strb r0, [r4, #12]	@ 0002f2c6 2073
.org 0x2f2c8
	ldrb r0, [r4, #13]	@ 0002f2c8 607b
.org 0x2f2ca
	cmp r0, #2	@ 0002f2ca 0228
.org 0x2f2cc
	bls.n 0x2f2d2	@ 0002f2cc 01d9
.org 0x2f2ce
	movs r0, #2	@ 0002f2ce 0220
.org 0x2f2d0
	strb r0, [r4, #13]	@ 0002f2d0 6073
.org 0x2f2d2
	strb r6, [r4, #15]	@ 0002f2d2 e673
.org 0x2f2d4
	adds r0, r5, #0	@ 0002f2d4 281c
.org 0x2f2d6
	adds r0, #230	@ 0002f2d6 e630
.org 0x2f2d8
	strb r6, [r0, #0]	@ 0002f2d8 0670
.org 0x2f2da
	adds r0, r5, #0	@ 0002f2da 281c
.org 0x2f2dc
	adds r0, #250	@ 0002f2dc fa30
.org 0x2f2de
	movs r2, #2	@ 0002f2de 0222
.org 0x2f2e0
	strb r2, [r0, #0]	@ 0002f2e0 0270
.org 0x2f2e2
	ldrb r1, [r4, #12]	@ 0002f2e2 217b
.org 0x2f2e4
	adds r3, r0, #0	@ 0002f2e4 031c
.org 0x2f2e6
	cmp r1, #2	@ 0002f2e6 0229
.org 0x2f2e8
	bls.n 0x2f308	@ 0002f2e8 0ed9
.org 0x2f2ea
	subs r0, #2	@ 0002f2ea 0238
.org 0x2f2ec
	strb r2, [r0, #0]	@ 0002f2ec 0270
.org 0x2f2ee
	ldrb r0, [r4, #12]	@ 0002f2ee 207b
.org 0x2f2f0
	strb r0, [r3, #0]	@ 0002f2f0 1870
.org 0x2f2f2
	b.n 0x2f30e	@ 0002f2f2 0ce0
.org 0x2f2f4
	.byte 0x40,0x2e,0x85,0x08	@ 0002f2f4 data
.org 0x2f2f8
	.byte 0x9c,0x33,0x85,0x08	@ 0002f2f8 data
.org 0x2f2fc
	.byte 0xf1,0xff,0x02,0x08	@ 0002f2fc data
.org 0x2f300
	.byte 0xff,0xff,0x00,0x00	@ 0002f300 data
.org 0x2f304
	.byte 0x10,0xe9,0x02,0x02	@ 0002f304 data
.org 0x2f308
	adds r0, r5, #0	@ 0002f308 281c
.org 0x2f30a
	adds r0, #248	@ 0002f30a f830
.org 0x2f30c
	strb r1, [r0, #0]	@ 0002f30c 0170
.org 0x2f30e
	ldrb r1, [r4, #13]	@ 0002f30e 617b
.org 0x2f310
	cmp r1, #2	@ 0002f310 0229
.org 0x2f312
	bls.n 0x2f322	@ 0002f312 06d9
.org 0x2f314
	adds r1, r5, #0	@ 0002f314 291c
.org 0x2f316
	adds r1, #249	@ 0002f316 f931
.org 0x2f318
	movs r0, #2	@ 0002f318 0220
.org 0x2f31a
	strb r0, [r1, #0]	@ 0002f31a 0870
.org 0x2f31c
	ldrb r0, [r4, #13]	@ 0002f31c 607b
.org 0x2f31e
	strb r0, [r3, #0]	@ 0002f31e 1870
.org 0x2f320
	b.n 0x2f328	@ 0002f320 02e0
.org 0x2f322
	adds r0, r5, #0	@ 0002f322 281c
.org 0x2f324
	adds r0, #249	@ 0002f324 f930
.org 0x2f326
	strb r1, [r0, #0]	@ 0002f326 0170
.org 0x2f328
	movs r2, #0	@ 0002f328 0022
.org 0x2f32a
	str r2, [r4, #84]	@ 0002f32a 6265
.org 0x2f32c
	str r2, [r4, #108]	@ 0002f32c e266
.org 0x2f32e
	movs r1, #161	@ 0002f32e a121
.org 0x2f330
	lsls r1, r1, #1	@ 0002f330 4900
.org 0x2f332
	adds r3, r5, r1	@ 0002f332 6b18
.org 0x2f334
	ldrb r1, [r3, #0]	@ 0002f334 1978
.org 0x2f336
	movs r0, #17	@ 0002f336 1120
.org 0x2f338
	negs r0, r0	@ 0002f338 4042
.org 0x2f33a
	ands r0, r1	@ 0002f33a 0840
.org 0x2f33c
	strb r0, [r3, #0]	@ 0002f33c 1870
.org 0x2f33e
	str r2, [r4, #112]	@ 0002f33e 2267
.org 0x2f340
	ldr r1, [pc, #332]	@ 0002f340 5349
.org 0x2f342
	adds r0, r5, r1	@ 0002f342 6818
.org 0x2f344
	strb r2, [r0, #0]	@ 0002f344 0270
.org 0x2f346
	ldrb r1, [r3, #0]	@ 0002f346 1978
.org 0x2f348
	movs r0, #3	@ 0002f348 0320
.org 0x2f34a
	negs r0, r0	@ 0002f34a 4042
.org 0x2f34c
	ands r0, r1	@ 0002f34c 0840
.org 0x2f34e
	movs r1, #5	@ 0002f34e 0521
.org 0x2f350
	negs r1, r1	@ 0002f350 4942
.org 0x2f352
	ands r0, r1	@ 0002f352 0840
.org 0x2f354
	subs r1, #4	@ 0002f354 0439
.org 0x2f356
	ands r0, r1	@ 0002f356 0840
.org 0x2f358
	strb r0, [r3, #0]	@ 0002f358 1870
.org 0x2f35a
	movs r1, #159	@ 0002f35a 9f21
.org 0x2f35c
	lsls r1, r1, #1	@ 0002f35c 4900
.org 0x2f35e
	adds r0, r5, r1	@ 0002f35e 6818
.org 0x2f360
	strb r2, [r0, #0]	@ 0002f360 0270
.org 0x2f362
	ldrb r1, [r3, #0]	@ 0002f362 1978
.org 0x2f364
	movs r0, #65	@ 0002f364 4120
.org 0x2f366
	negs r0, r0	@ 0002f366 4042
.org 0x2f368
	ands r0, r1	@ 0002f368 0840
.org 0x2f36a
	strb r0, [r3, #0]	@ 0002f36a 1870
.org 0x2f36c
	movs r1, #160	@ 0002f36c a021
.org 0x2f36e
	lsls r1, r1, #1	@ 0002f36e 4900
.org 0x2f370
	adds r0, r5, r1	@ 0002f370 6818
.org 0x2f372
	strh r2, [r0, #0]	@ 0002f372 0280
.org 0x2f374
	adds r0, r5, #0	@ 0002f374 281c
.org 0x2f376
	bl 0x39f84	@ 0002f376 0af005fe
.org 0x2f37a
	movs r2, #0	@ 0002f37a 0022
.org 0x2f37c
	ldr r0, [pc, #276]	@ 0002f37c 4548
.org 0x2f37e
	adds r7, r5, r0	@ 0002f37e 2f18
.org 0x2f380
	movs r1, #222	@ 0002f380 de21
.org 0x2f382
	lsls r1, r1, #1	@ 0002f382 4900
.org 0x2f384
	adds r1, r1, r5	@ 0002f384 4919
.org 0x2f386
	mov r8, r1	@ 0002f386 8846
.org 0x2f388
	adds r0, #19	@ 0002f388 1330
.org 0x2f38a
	adds r0, r0, r5	@ 0002f38a 4019
.org 0x2f38c
	mov r9, r0	@ 0002f38c 8146
.org 0x2f38e
	ldr r1, [pc, #264]	@ 0002f38e 4249
.org 0x2f390
	adds r1, r1, r5	@ 0002f390 4919
.org 0x2f392
	mov sl, r1	@ 0002f392 8a46
.org 0x2f394
	ldr r0, [pc, #260]	@ 0002f394 4148
.org 0x2f396
	adds r0, r0, r5	@ 0002f396 4019
.org 0x2f398
	mov ip, r0	@ 0002f398 8446
.org 0x2f39a
	movs r1, #158	@ 0002f39a 9e21
.org 0x2f39c
	lsls r1, r1, #2	@ 0002f39c 8900
.org 0x2f39e
	adds r1, r5, r1	@ 0002f39e 6918
.org 0x2f3a0
	str r1, [sp, #8]	@ 0002f3a0 0291
.org 0x2f3a2
	ldr r0, [pc, #252]	@ 0002f3a2 3f48
.org 0x2f3a4
	adds r0, r5, r0	@ 0002f3a4 2818
.org 0x2f3a6
	str r0, [sp, #16]	@ 0002f3a6 0490
.org 0x2f3a8
	ldr r1, [pc, #248]	@ 0002f3a8 3e49
.org 0x2f3aa
	adds r1, r5, r1	@ 0002f3aa 6918
.org 0x2f3ac
	str r1, [sp, #12]	@ 0002f3ac 0391
.org 0x2f3ae
	movs r0, #187	@ 0002f3ae bb20
.org 0x2f3b0
	lsls r0, r0, #1	@ 0002f3b0 4000
.org 0x2f3b2
	adds r0, r5, r0	@ 0002f3b2 2818
.org 0x2f3b4
	str r0, [sp, #0]	@ 0002f3b4 0090
.org 0x2f3b6
	adds r6, r5, #0	@ 0002f3b6 2e1c
.org 0x2f3b8
	adds r6, #232	@ 0002f3b8 e836
.org 0x2f3ba
	adds r1, r5, #0	@ 0002f3ba 291c
.org 0x2f3bc
	adds r1, #164	@ 0002f3bc a431
.org 0x2f3be
	str r1, [sp, #4]	@ 0002f3be 0191
.org 0x2f3c0
	ldr r0, [pc, #228]	@ 0002f3c0 3948
.org 0x2f3c2
	adds r3, r0, #0	@ 0002f3c2 031c
.org 0x2f3c4
	movs r0, #204	@ 0002f3c4 cc20
.org 0x2f3c6
	lsls r0, r0, #1	@ 0002f3c6 4000
.org 0x2f3c8
	adds r1, r5, r0	@ 0002f3c8 2918
.org 0x2f3ca
	ldrh r0, [r1, #0]	@ 0002f3ca 0888
.org 0x2f3cc
	orrs r0, r3	@ 0002f3cc 1843
.org 0x2f3ce
	strh r0, [r1, #0]	@ 0002f3ce 0880
.org 0x2f3d0
	adds r1, #2	@ 0002f3d0 0231
.org 0x2f3d2
	adds r2, #1	@ 0002f3d2 0132
.org 0x2f3d4
	cmp r2, #15	@ 0002f3d4 0f2a
.org 0x2f3d6
	bls.n 0x2f3ca	@ 0002f3d6 f8d9
.org 0x2f3d8
	movs r0, #0	@ 0002f3d8 0020
.org 0x2f3da
	strb r0, [r7, #0]	@ 0002f3da 3870
.org 0x2f3dc
	mov r1, r8	@ 0002f3dc 4146
.org 0x2f3de
	str r0, [r1, #0]	@ 0002f3de 0860
.org 0x2f3e0
	mov r2, r9	@ 0002f3e0 4a46
.org 0x2f3e2
	strb r0, [r2, #0]	@ 0002f3e2 1070
.org 0x2f3e4
	mov r1, sl	@ 0002f3e4 5146
.org 0x2f3e6
	strb r0, [r1, #0]	@ 0002f3e6 0870
.org 0x2f3e8
	mov r2, ip	@ 0002f3e8 6246
.org 0x2f3ea
	strb r0, [r2, #0]	@ 0002f3ea 1070
.org 0x2f3ec
	ldr r1, [sp, #8]	@ 0002f3ec 0299
.org 0x2f3ee
	strb r0, [r1, #0]	@ 0002f3ee 0870
.org 0x2f3f0
	movs r1, #0	@ 0002f3f0 0021
.org 0x2f3f2
	ldr r2, [sp, #16]	@ 0002f3f2 049a
.org 0x2f3f4
	strh r0, [r2, #0]	@ 0002f3f4 1080
.org 0x2f3f6
	ldr r0, [sp, #12]	@ 0002f3f6 0398
.org 0x2f3f8
	strb r1, [r0, #0]	@ 0002f3f8 0170
.org 0x2f3fa
	ldr r2, [sp, #0]	@ 0002f3fa 009a
.org 0x2f3fc
	strb r1, [r2, #0]	@ 0002f3fc 1170
.org 0x2f3fe
	ldrb r0, [r6, #0]	@ 0002f3fe 3078
.org 0x2f400
	cmp r0, #0	@ 0002f400 0028
.org 0x2f402
	beq.n 0x2f414	@ 0002f402 07d0
.org 0x2f404
	adds r0, r5, #0	@ 0002f404 281c
.org 0x2f406
	bl 0x2b61c	@ 0002f406 fcf709f9
.org 0x2f40a
	ldrb r1, [r6, #0]	@ 0002f40a 3178
.org 0x2f40c
	lsls r0, r0, #24	@ 0002f40c 0006
.org 0x2f40e
	lsrs r0, r0, #24	@ 0002f40e 000e
.org 0x2f410
	cmp r1, r0	@ 0002f410 8142
.org 0x2f412
	bls.n 0x2f41c	@ 0002f412 03d9
.org 0x2f414
	adds r0, r5, #0	@ 0002f414 281c
.org 0x2f416
	bl 0x2b61c	@ 0002f416 fcf701f9
.org 0x2f41a
	strb r0, [r6, #0]	@ 0002f41a 3070
.org 0x2f41c
	ldrb r0, [r6, #0]	@ 0002f41c 3078
.org 0x2f41e
	ldr r1, [sp, #4]	@ 0002f41e 0199
.org 0x2f420
	strh r0, [r1, #0]	@ 0002f420 0880
.org 0x2f422
	adds r0, r5, #0	@ 0002f422 281c
.org 0x2f424
	movs r1, #0	@ 0002f424 0021
.org 0x2f426
	movs r2, #0	@ 0002f426 0022
.org 0x2f428
	bl 0xd1558	@ 0002f428 a2f096f8
.org 0x2f42c
	adds r1, r0, #0	@ 0002f42c 011c
.org 0x2f42e
	adds r0, r5, #0	@ 0002f42e 281c
.org 0x2f430
	movs r2, #1	@ 0002f430 0122
.org 0x2f432
	bl 0xd1558	@ 0002f432 a2f091f8
.org 0x2f436
	ldr r0, [pc, #116]	@ 0002f436 1d48
.org 0x2f438
	movs r2, #232	@ 0002f438 e822
.org 0x2f43a
	lsls r2, r2, #1	@ 0002f43a 5200
.org 0x2f43c
	adds r0, r0, r2	@ 0002f43c 8018
.org 0x2f43e
	ldrh r0, [r0, #0]	@ 0002f43e 0088
.org 0x2f440
	cmp r0, #9	@ 0002f440 0928
.org 0x2f442
	beq.n 0x2f448	@ 0002f442 01d0
.org 0x2f444
	cmp r0, #16	@ 0002f444 1028
.org 0x2f446
	bne.n 0x2f44e	@ 0002f446 02d1
.org 0x2f448
	adds r0, r5, #0	@ 0002f448 281c
.org 0x2f44a
	bl 0xdec30	@ 0002f44a aff0f1fb
.org 0x2f44e
	adds r0, r5, #0	@ 0002f44e 281c
.org 0x2f450
	bl 0x109320	@ 0002f450 d9f066ff
.org 0x2f454
	ldrb r0, [r4, #19]	@ 0002f454 e07c
.org 0x2f456
	cmp r0, #3	@ 0002f456 0328
.org 0x2f458
	bhi.n 0x2f460	@ 0002f458 02d8
.org 0x2f45a
	movs r0, #90	@ 0002f45a 5a20
.org 0x2f45c
	bl 0x6984	@ 0002f45c d7f792fa
.org 0x2f460
	adds r0, r5, #0	@ 0002f460 281c
.org 0x2f462
	bl 0x3891c	@ 0002f462 09f05bfa
.org 0x2f466
	adds r1, r0, #0	@ 0002f466 011c
.org 0x2f468
	lsls r1, r1, #24	@ 0002f468 0906
.org 0x2f46a
	lsrs r1, r1, #24	@ 0002f46a 090e
.org 0x2f46c
	adds r0, r5, #0	@ 0002f46c 281c
.org 0x2f46e
	bl 0x2b53c	@ 0002f46e fcf765f8
.org 0x2f472
	ldrb r0, [r4, #14]	@ 0002f472 a07b
.org 0x2f474
	bl 0x2ad9c	@ 0002f474 fbf792fc
.org 0x2f478
	adds r0, r5, #0	@ 0002f478 281c
