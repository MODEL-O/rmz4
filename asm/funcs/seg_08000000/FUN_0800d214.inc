@ FUN_0800d214  entry 0x0800d214  size 686
.thumb
.org 0xd214
FUN_0800d214:
	push {r4, r5, r6, r7, lr}	@ 0000d214 f0b5
.org 0xd216
	mov r7, sl	@ 0000d216 5746
.org 0xd218
	mov r6, r9	@ 0000d218 4e46
.org 0xd21a
	mov r5, r8	@ 0000d21a 4546
.org 0xd21c
	push {r5, r6, r7}	@ 0000d21c e0b4
.org 0xd21e
	mov sl, r0	@ 0000d21e 8246
.org 0xd220
	movs r4, #159	@ 0000d220 9f24
.org 0xd222
	movs r0, #160	@ 0000d222 a020
.org 0xd224
	lsls r0, r0, #2	@ 0000d224 8000
.org 0xd226
	bl 0xa70	@ 0000d226 f3f723fc
.org 0xd22a
	mov r9, r0	@ 0000d22a 8146
.org 0xd22c
	cmp r0, #0	@ 0000d22c 0028
.org 0xd22e
	bne.n 0xd232	@ 0000d22e 00d1
.org 0xd230
	b.n 0xd4b4	@ 0000d230 40e1
.org 0xd232
	ldr r2, [pc, #656]	@ 0000d232 a44a
.org 0xd234
	movs r1, #186	@ 0000d234 ba21
.org 0xd236
	lsls r1, r1, #1	@ 0000d236 4900
.org 0xd238
	adds r0, r2, r1	@ 0000d238 5018
.org 0xd23a
	mov r5, r9	@ 0000d23a 4d46
.org 0xd23c
	str r5, [r0, #0]	@ 0000d23c 0560
.org 0xd23e
	movs r7, #188	@ 0000d23e bc27
.org 0xd240
	lsls r7, r7, #1	@ 0000d240 7f00
.org 0xd242
	adds r1, r2, r7	@ 0000d242 d119
.org 0xd244
	ldr r0, [pc, #640]	@ 0000d244 a048
.org 0xd246
	str r0, [r1, #0]	@ 0000d246 0860
.org 0xd248
	movs r0, #190	@ 0000d248 be20
.org 0xd24a
	lsls r0, r0, #1	@ 0000d24a 4000
.org 0xd24c
	adds r1, r2, r0	@ 0000d24c 1118
.org 0xd24e
	ldr r0, [pc, #636]	@ 0000d24e 9f48
.org 0xd250
	str r0, [r1, #0]	@ 0000d250 0860
.org 0xd252
	mov r1, sl	@ 0000d252 5146
.org 0xd254
	ldr r0, [r1, #56]	@ 0000d254 886b
.org 0xd256
	subs r0, #224	@ 0000d256 e038
.org 0xd258
	lsls r0, r0, #16	@ 0000d258 0004
.org 0xd25a
	lsrs r0, r0, #16	@ 0000d25a 000c
.org 0xd25c
	mov r8, r0	@ 0000d25c 8046
.org 0xd25e
	ldr r0, [r1, #52]	@ 0000d25e 486b
.org 0xd260
	lsls r0, r0, #1	@ 0000d260 4000
.org 0xd262
	movs r1, #3	@ 0000d262 0321
.org 0xd264
	bl 0x128fb8	@ 0000d264 1bf1a8fe
.org 0xd268
	lsls r0, r0, #16	@ 0000d268 0004
.org 0xd26a
	lsrs r6, r0, #16	@ 0000d26a 060c
.org 0xd26c
	mov r2, r8	@ 0000d26c 4246
.org 0xd26e
	lsls r3, r2, #16	@ 0000d26e 1304
.org 0xd270
	asrs r0, r3, #16	@ 0000d270 1814
.org 0xd272
	adds r0, #159	@ 0000d272 9f30
.org 0xd274
	movs r5, #255	@ 0000d274 ff25
.org 0xd276
	lsls r5, r5, #1	@ 0000d276 6d00
.org 0xd278
	cmp r0, r5	@ 0000d278 a842
.org 0xd27a
	ble.n 0xd2a6	@ 0000d27a 14dd
.org 0xd27c
	subs r7, #118	@ 0000d27c 763f
.org 0xd27e
	mov ip, r7	@ 0000d27e bc46
.org 0xd280
	adds r5, r6, #0	@ 0000d280 351c
.org 0xd282
	movs r2, #159	@ 0000d282 9f22
.org 0xd284
	lsls r2, r2, #2	@ 0000d284 9200
.org 0xd286
	add r2, r9	@ 0000d286 4a44
.org 0xd288
	asrs r1, r3, #16	@ 0000d288 1914
.org 0xd28a
	mov r7, ip	@ 0000d28a 6746
.org 0xd28c
	adds r0, r1, r7	@ 0000d28c c819
.org 0xd28e
	lsls r0, r0, #16	@ 0000d28e 0004
.org 0xd290
	orrs r0, r5	@ 0000d290 2843
.org 0xd292
	str r0, [r2, #0]	@ 0000d292 1060
.org 0xd294
	subs r2, #4	@ 0000d294 043a
.org 0xd296
	subs r4, #1	@ 0000d296 013c
.org 0xd298
	adds r1, r1, r4	@ 0000d298 0919
.org 0xd29a
	movs r0, #255	@ 0000d29a ff20
.org 0xd29c
	lsls r0, r0, #1	@ 0000d29c 4000
.org 0xd29e
	cmp r1, r0	@ 0000d29e 8142
.org 0xd2a0
	ble.n 0xd2a6	@ 0000d2a0 01dd
.org 0xd2a2
	cmp r4, #0	@ 0000d2a2 002c
.org 0xd2a4
	bge.n 0xd288	@ 0000d2a4 f0da
.org 0xd2a6
	mov r1, r8	@ 0000d2a6 4146
.org 0xd2a8
	lsls r3, r1, #16	@ 0000d2a8 0b04
.org 0xd2aa
	asrs r0, r3, #16	@ 0000d2aa 1814
.org 0xd2ac
	adds r0, r0, r4	@ 0000d2ac 0019
.org 0xd2ae
	adds r7, r3, #0	@ 0000d2ae 1f1c
.org 0xd2b0
	cmp r0, #160	@ 0000d2b0 a028
.org 0xd2b2
	ble.n 0xd2d6	@ 0000d2b2 10dd
.org 0xd2b4
	cmp r4, #0	@ 0000d2b4 002c
.org 0xd2b6
	blt.n 0xd2d6	@ 0000d2b6 0edb
.org 0xd2b8
	adds r5, r6, #0	@ 0000d2b8 351c
.org 0xd2ba
	lsls r0, r4, #2	@ 0000d2ba a000
.org 0xd2bc
	mov r1, r9	@ 0000d2bc 4946
.org 0xd2be
	adds r2, r0, r1	@ 0000d2be 4218
.org 0xd2c0
	asrs r1, r3, #16	@ 0000d2c0 1914
.org 0xd2c2
	adds r0, r3, #0	@ 0000d2c2 181c
.org 0xd2c4
	orrs r0, r5	@ 0000d2c4 2843
.org 0xd2c6
	str r0, [r2, #0]	@ 0000d2c6 1060
.org 0xd2c8
	subs r2, #4	@ 0000d2c8 043a
.org 0xd2ca
	subs r4, #1	@ 0000d2ca 013c
.org 0xd2cc
	adds r1, r1, r4	@ 0000d2cc 0919
.org 0xd2ce
	cmp r1, #160	@ 0000d2ce a029
.org 0xd2d0
	ble.n 0xd2d6	@ 0000d2d0 01dd
.org 0xd2d2
	cmp r4, #0	@ 0000d2d2 002c
.org 0xd2d4
	bge.n 0xd2c0	@ 0000d2d4 f4da
.org 0xd2d6
	mov r2, sl	@ 0000d2d6 5246
.org 0xd2d8
	ldr r0, [r2, #52]	@ 0000d2d8 506b
.org 0xd2da
	lsls r0, r0, #15	@ 0000d2da c003
.org 0xd2dc
	lsrs r6, r0, #16	@ 0000d2dc 060c
.org 0xd2de
	adds r3, r7, #0	@ 0000d2de 3b1c
.org 0xd2e0
	asrs r0, r3, #16	@ 0000d2e0 1814
.org 0xd2e2
	adds r0, r0, r4	@ 0000d2e2 0019
.org 0xd2e4
	cmp r0, #144	@ 0000d2e4 9028
.org 0xd2e6
	ble.n 0xd30a	@ 0000d2e6 10dd
.org 0xd2e8
	cmp r4, #0	@ 0000d2e8 002c
.org 0xd2ea
	blt.n 0xd30a	@ 0000d2ea 0edb
.org 0xd2ec
	adds r5, r6, #0	@ 0000d2ec 351c
.org 0xd2ee
	lsls r0, r4, #2	@ 0000d2ee a000
.org 0xd2f0
	mov r7, r9	@ 0000d2f0 4f46
.org 0xd2f2
	adds r2, r0, r7	@ 0000d2f2 c219
.org 0xd2f4
	asrs r1, r3, #16	@ 0000d2f4 1914
.org 0xd2f6
	adds r0, r3, #0	@ 0000d2f6 181c
.org 0xd2f8
	orrs r0, r5	@ 0000d2f8 2843
.org 0xd2fa
	str r0, [r2, #0]	@ 0000d2fa 1060
.org 0xd2fc
	subs r2, #4	@ 0000d2fc 043a
.org 0xd2fe
	subs r4, #1	@ 0000d2fe 013c
.org 0xd300
	adds r1, r1, r4	@ 0000d300 0919
.org 0xd302
	cmp r1, #144	@ 0000d302 9029
.org 0xd304
	ble.n 0xd30a	@ 0000d304 01dd
.org 0xd306
	cmp r4, #0	@ 0000d306 002c
.org 0xd308
	bge.n 0xd2f4	@ 0000d308 f4da
.org 0xd30a
	mov r1, sl	@ 0000d30a 5146
.org 0xd30c
	ldr r0, [r1, #52]	@ 0000d30c 486b
.org 0xd30e
	lsls r0, r0, #14	@ 0000d30e 8003
.org 0xd310
	lsrs r6, r0, #16	@ 0000d310 060c
.org 0xd312
	ldr r1, [r1, #56]	@ 0000d312 896b
.org 0xd314
	ldr r2, [pc, #440]	@ 0000d314 6e4a
.org 0xd316
	adds r1, r1, r2	@ 0000d316 8918
.org 0xd318
	asrs r1, r1, #4	@ 0000d318 0911
.org 0xd31a
	mov r5, r8	@ 0000d31a 4546
.org 0xd31c
	lsls r0, r5, #16	@ 0000d31c 2804
.org 0xd31e
	asrs r0, r0, #16	@ 0000d31e 0014
.org 0xd320
	subs r0, r0, r1	@ 0000d320 401a
.org 0xd322
	lsls r0, r0, #16	@ 0000d322 0004
.org 0xd324
	lsrs r7, r0, #16	@ 0000d324 070c
.org 0xd326
	mov r8, r7	@ 0000d326 b846
.org 0xd328
	asrs r1, r0, #16	@ 0000d328 0114
.org 0xd32a
	adds r0, r1, r4	@ 0000d32a 0819
.org 0xd32c
	cmp r0, #144	@ 0000d32c 9028
.org 0xd32e
	ble.n 0xd35a	@ 0000d32e 14dd
.org 0xd330
	cmp r4, #0	@ 0000d330 002c
.org 0xd332
	blt.n 0xd35a	@ 0000d332 12db
.org 0xd334
	adds r3, r1, #0	@ 0000d334 0b1c
.org 0xd336
	lsls r0, r4, #16	@ 0000d336 2004
.org 0xd338
	movs r1, #144	@ 0000d338 9021
.org 0xd33a
	lsls r1, r1, #16	@ 0000d33a 0904
.org 0xd33c
	subs r1, r1, r0	@ 0000d33c 091a
.org 0xd33e
	lsls r0, r4, #2	@ 0000d33e a000
.org 0xd340
	mov r5, r9	@ 0000d340 4d46
.org 0xd342
	adds r2, r0, r5	@ 0000d342 4219
.org 0xd344
	movs r5, #128	@ 0000d344 8025
.org 0xd346
	lsls r5, r5, #9	@ 0000d346 6d02
.org 0xd348
	str r1, [r2, #0]	@ 0000d348 1160
.org 0xd34a
	adds r1, r1, r5	@ 0000d34a 4919
.org 0xd34c
	subs r2, #4	@ 0000d34c 043a
.org 0xd34e
	subs r4, #1	@ 0000d34e 013c
.org 0xd350
	adds r0, r3, r4	@ 0000d350 1819
.org 0xd352
	cmp r0, #144	@ 0000d352 9028
.org 0xd354
	ble.n 0xd35a	@ 0000d354 01dd
.org 0xd356
	cmp r4, #0	@ 0000d356 002c
.org 0xd358
	bge.n 0xd348	@ 0000d358 f6da
.org 0xd35a
	mov r7, r8	@ 0000d35a 4746
.org 0xd35c
	lsls r3, r7, #16	@ 0000d35c 3b04
.org 0xd35e
	asrs r0, r3, #16	@ 0000d35e 1814
.org 0xd360
	adds r0, r0, r4	@ 0000d360 0019
.org 0xd362
	cmp r0, #116	@ 0000d362 7428
.org 0xd364
	ble.n 0xd388	@ 0000d364 10dd
.org 0xd366
	cmp r4, #0	@ 0000d366 002c
.org 0xd368
	blt.n 0xd388	@ 0000d368 0edb
.org 0xd36a
	adds r5, r6, #0	@ 0000d36a 351c
.org 0xd36c
	lsls r0, r4, #2	@ 0000d36c a000
.org 0xd36e
	mov r1, r9	@ 0000d36e 4946
.org 0xd370
	adds r2, r0, r1	@ 0000d370 4218
.org 0xd372
	asrs r1, r3, #16	@ 0000d372 1914
.org 0xd374
	adds r0, r3, #0	@ 0000d374 181c
.org 0xd376
	orrs r0, r5	@ 0000d376 2843
.org 0xd378
	str r0, [r2, #0]	@ 0000d378 1060
.org 0xd37a
	subs r2, #4	@ 0000d37a 043a
.org 0xd37c
	subs r4, #1	@ 0000d37c 013c
.org 0xd37e
	adds r1, r1, r4	@ 0000d37e 0919
.org 0xd380
	cmp r1, #116	@ 0000d380 7429
.org 0xd382
	ble.n 0xd388	@ 0000d382 01dd
.org 0xd384
	cmp r4, #0	@ 0000d384 002c
.org 0xd386
	bge.n 0xd372	@ 0000d386 f4da
.org 0xd388
	mov r2, sl	@ 0000d388 5246
.org 0xd38a
	ldr r0, [r2, #52]	@ 0000d38a 506b
.org 0xd38c
	lsls r0, r0, #13	@ 0000d38c 4003
.org 0xd38e
	lsrs r6, r0, #16	@ 0000d38e 060c
.org 0xd390
	ldr r1, [r2, #56]	@ 0000d390 916b
.org 0xd392
	ldr r5, [pc, #316]	@ 0000d392 4f4d
.org 0xd394
	adds r1, r1, r5	@ 0000d394 4919
.org 0xd396
	asrs r1, r1, #4	@ 0000d396 0911
.org 0xd398
	mov r7, r8	@ 0000d398 4746
.org 0xd39a
	lsls r0, r7, #16	@ 0000d39a 3804
.org 0xd39c
	asrs r0, r0, #16	@ 0000d39c 0014
.org 0xd39e
	subs r0, r0, r1	@ 0000d39e 401a
.org 0xd3a0
	lsls r0, r0, #16	@ 0000d3a0 0004
.org 0xd3a2
	lsrs r1, r0, #16	@ 0000d3a2 010c
.org 0xd3a4
	mov r8, r1	@ 0000d3a4 8846
.org 0xd3a6
	asrs r1, r0, #16	@ 0000d3a6 0114
.org 0xd3a8
	adds r0, r1, r4	@ 0000d3a8 0819
.org 0xd3aa
	cmp r0, #116	@ 0000d3aa 7428
.org 0xd3ac
	ble.n 0xd3d8	@ 0000d3ac 14dd
.org 0xd3ae
	cmp r4, #0	@ 0000d3ae 002c
.org 0xd3b0
	blt.n 0xd3d8	@ 0000d3b0 12db
.org 0xd3b2
	adds r3, r1, #0	@ 0000d3b2 0b1c
.org 0xd3b4
	lsls r0, r4, #16	@ 0000d3b4 2004
.org 0xd3b6
	movs r1, #232	@ 0000d3b6 e821
.org 0xd3b8
	lsls r1, r1, #15	@ 0000d3b8 c903
.org 0xd3ba
	subs r1, r1, r0	@ 0000d3ba 091a
.org 0xd3bc
	lsls r0, r4, #2	@ 0000d3bc a000
.org 0xd3be
	mov r5, r9	@ 0000d3be 4d46
.org 0xd3c0
	adds r2, r0, r5	@ 0000d3c0 4219
.org 0xd3c2
	movs r5, #128	@ 0000d3c2 8025
.org 0xd3c4
	lsls r5, r5, #9	@ 0000d3c4 6d02
.org 0xd3c6
	str r1, [r2, #0]	@ 0000d3c6 1160
.org 0xd3c8
	adds r1, r1, r5	@ 0000d3c8 4919
.org 0xd3ca
	subs r2, #4	@ 0000d3ca 043a
.org 0xd3cc
	subs r4, #1	@ 0000d3cc 013c
.org 0xd3ce
	adds r0, r3, r4	@ 0000d3ce 1819
.org 0xd3d0
	cmp r0, #116	@ 0000d3d0 7428
.org 0xd3d2
	ble.n 0xd3d8	@ 0000d3d2 01dd
.org 0xd3d4
	cmp r4, #0	@ 0000d3d4 002c
.org 0xd3d6
	bge.n 0xd3c6	@ 0000d3d6 f6da
.org 0xd3d8
	mov r7, r8	@ 0000d3d8 4746
.org 0xd3da
	lsls r3, r7, #16	@ 0000d3da 3b04
.org 0xd3dc
	asrs r0, r3, #16	@ 0000d3dc 1814
.org 0xd3de
	adds r0, r0, r4	@ 0000d3de 0019
.org 0xd3e0
	cmp r0, #96	@ 0000d3e0 6028
.org 0xd3e2
	ble.n 0xd406	@ 0000d3e2 10dd
.org 0xd3e4
	cmp r4, #0	@ 0000d3e4 002c
.org 0xd3e6
	blt.n 0xd406	@ 0000d3e6 0edb
.org 0xd3e8
	adds r5, r6, #0	@ 0000d3e8 351c
.org 0xd3ea
	lsls r0, r4, #2	@ 0000d3ea a000
.org 0xd3ec
	mov r1, r9	@ 0000d3ec 4946
.org 0xd3ee
	adds r2, r0, r1	@ 0000d3ee 4218
.org 0xd3f0
	asrs r1, r3, #16	@ 0000d3f0 1914
.org 0xd3f2
	adds r0, r3, #0	@ 0000d3f2 181c
.org 0xd3f4
	orrs r0, r5	@ 0000d3f4 2843
.org 0xd3f6
	str r0, [r2, #0]	@ 0000d3f6 1060
.org 0xd3f8
	subs r2, #4	@ 0000d3f8 043a
.org 0xd3fa
	subs r4, #1	@ 0000d3fa 013c
.org 0xd3fc
	adds r1, r1, r4	@ 0000d3fc 0919
.org 0xd3fe
	cmp r1, #96	@ 0000d3fe 6029
.org 0xd400
	ble.n 0xd406	@ 0000d400 01dd
.org 0xd402
	cmp r4, #0	@ 0000d402 002c
.org 0xd404
	bge.n 0xd3f0	@ 0000d404 f4da
.org 0xd406
	mov r2, sl	@ 0000d406 5246
.org 0xd408
	ldr r0, [r2, #52]	@ 0000d408 506b
.org 0xd40a
	lsls r0, r0, #12	@ 0000d40a 0003
.org 0xd40c
	lsrs r6, r0, #16	@ 0000d40c 060c
.org 0xd40e
	ldr r1, [r2, #56]	@ 0000d40e 916b
.org 0xd410
	ldr r5, [pc, #188]	@ 0000d410 2f4d
.org 0xd412
	adds r1, r1, r5	@ 0000d412 4919
.org 0xd414
	asrs r1, r1, #5	@ 0000d414 4911
.org 0xd416
	mov r7, r8	@ 0000d416 4746
.org 0xd418
	lsls r0, r7, #16	@ 0000d418 3804
.org 0xd41a
	asrs r0, r0, #16	@ 0000d41a 0014
.org 0xd41c
	adds r0, r0, r1	@ 0000d41c 4018
.org 0xd41e
	lsls r0, r0, #16	@ 0000d41e 0004
.org 0xd420
	lsrs r1, r0, #16	@ 0000d420 010c
.org 0xd422
	mov r8, r1	@ 0000d422 8846
.org 0xd424
	asrs r1, r0, #16	@ 0000d424 0114
.org 0xd426
	adds r0, r1, r4	@ 0000d426 0819
.org 0xd428
	cmp r0, #96	@ 0000d428 6028
.org 0xd42a
	ble.n 0xd456	@ 0000d42a 14dd
.org 0xd42c
	cmp r4, #0	@ 0000d42c 002c
.org 0xd42e
	blt.n 0xd456	@ 0000d42e 12db
.org 0xd430
	adds r3, r1, #0	@ 0000d430 0b1c
.org 0xd432
	lsls r0, r4, #16	@ 0000d432 2004
.org 0xd434
	movs r1, #192	@ 0000d434 c021
.org 0xd436
	lsls r1, r1, #15	@ 0000d436 c903
.org 0xd438
	subs r1, r1, r0	@ 0000d438 091a
.org 0xd43a
	lsls r0, r4, #2	@ 0000d43a a000
.org 0xd43c
	mov r5, r9	@ 0000d43c 4d46
.org 0xd43e
	adds r2, r0, r5	@ 0000d43e 4219
.org 0xd440
	movs r5, #128	@ 0000d440 8025
.org 0xd442
	lsls r5, r5, #9	@ 0000d442 6d02
.org 0xd444
	str r1, [r2, #0]	@ 0000d444 1160
.org 0xd446
	adds r1, r1, r5	@ 0000d446 4919
.org 0xd448
	subs r2, #4	@ 0000d448 043a
.org 0xd44a
	subs r4, #1	@ 0000d44a 013c
.org 0xd44c
	adds r0, r3, r4	@ 0000d44c 1819
.org 0xd44e
	cmp r0, #96	@ 0000d44e 6028
.org 0xd450
	ble.n 0xd456	@ 0000d450 01dd
.org 0xd452
	cmp r4, #0	@ 0000d452 002c
.org 0xd454
	bge.n 0xd444	@ 0000d454 f6da
.org 0xd456
	mov r7, r8	@ 0000d456 4746
.org 0xd458
	lsls r3, r7, #16	@ 0000d458 3b04
.org 0xd45a
	asrs r0, r3, #16	@ 0000d45a 1814
.org 0xd45c
	adds r0, r0, r4	@ 0000d45c 0019
.org 0xd45e
	adds r7, r3, #0	@ 0000d45e 1f1c
.org 0xd460
	cmp r0, #0	@ 0000d460 0028
.org 0xd462
	ble.n 0xd48e	@ 0000d462 14dd
.org 0xd464
	cmp r4, #0	@ 0000d464 002c
.org 0xd466
	blt.n 0xd486	@ 0000d466 0edb
.org 0xd468
	adds r5, r6, #0	@ 0000d468 351c
.org 0xd46a
	lsls r0, r4, #2	@ 0000d46a a000
.org 0xd46c
	mov r1, r9	@ 0000d46c 4946
.org 0xd46e
	adds r2, r0, r1	@ 0000d46e 4218
.org 0xd470
	asrs r1, r3, #16	@ 0000d470 1914
.org 0xd472
	adds r0, r3, #0	@ 0000d472 181c
.org 0xd474
	orrs r0, r5	@ 0000d474 2843
.org 0xd476
	str r0, [r2, #0]	@ 0000d476 1060
.org 0xd478
	subs r2, #4	@ 0000d478 043a
.org 0xd47a
	subs r4, #1	@ 0000d47a 013c
.org 0xd47c
	adds r1, r1, r4	@ 0000d47c 0919
.org 0xd47e
	cmp r1, #0	@ 0000d47e 0029
.org 0xd480
	ble.n 0xd48e	@ 0000d480 05dd
.org 0xd482
	cmp r4, #0	@ 0000d482 002c
.org 0xd484
	bge.n 0xd470	@ 0000d484 f4da
.org 0xd486
	asrs r0, r7, #16	@ 0000d486 3814
.org 0xd488
	adds r0, r0, r4	@ 0000d488 0019
.org 0xd48a
	cmp r0, #0	@ 0000d48a 0028
.org 0xd48c
	bgt.n 0xd4b4	@ 0000d48c 12dc
.org 0xd48e
	cmp r4, #0	@ 0000d48e 002c
.org 0xd490
	blt.n 0xd4b4	@ 0000d490 10db
.org 0xd492
	asrs r1, r7, #16	@ 0000d492 3914
.org 0xd494
	lsls r0, r4, #16	@ 0000d494 2004
.org 0xd496
	negs r3, r0	@ 0000d496 4342
.org 0xd498
	lsls r0, r4, #2	@ 0000d498 a000
.org 0xd49a
	mov r5, r9	@ 0000d49a 4d46
.org 0xd49c
	adds r2, r0, r5	@ 0000d49c 4219
.org 0xd49e
	movs r5, #128	@ 0000d49e 8025
.org 0xd4a0
	lsls r5, r5, #9	@ 0000d4a0 6d02
.org 0xd4a2
	str r3, [r2, #0]	@ 0000d4a2 1360
.org 0xd4a4
	adds r3, r3, r5	@ 0000d4a4 5b19
.org 0xd4a6
	subs r2, #4	@ 0000d4a6 043a
.org 0xd4a8
	subs r4, #1	@ 0000d4a8 013c
.org 0xd4aa
	adds r0, r1, r4	@ 0000d4aa 0819
.org 0xd4ac
	cmp r0, #0	@ 0000d4ac 0028
.org 0xd4ae
	bgt.n 0xd4b4	@ 0000d4ae 01dc
.org 0xd4b0
	cmp r4, #0	@ 0000d4b0 002c
.org 0xd4b2
	bge.n 0xd4a2	@ 0000d4b2 f6da
.org 0xd4b4
	pop {r3, r4, r5}	@ 0000d4b4 38bc
.org 0xd4b6
	mov r8, r3	@ 0000d4b6 9846
.org 0xd4b8
	mov r9, r4	@ 0000d4b8 a146
.org 0xd4ba
	mov sl, r5	@ 0000d4ba aa46
.org 0xd4bc
	pop {r4, r5, r6, r7}	@ 0000d4bc f0bc
.org 0xd4be
	pop {r0}	@ 0000d4be 01bc
.org 0xd4c0
	bx r0	@ 0000d4c0 0047
