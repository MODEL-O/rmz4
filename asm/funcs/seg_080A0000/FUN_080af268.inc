@ FUN_080af268  entry 0x080af268  size 270
.thumb
.org 0xaf268
FUN_080af268:
	push {r4, r5, r6, lr}	@ 000af268 70b5
.org 0xaf26a
	adds r6, r0, #0	@ 000af26a 061c
.org 0xaf26c
	bl 0x1cc9c	@ 000af26c 6df716fd
.org 0xaf270
	ldrb r1, [r6, #10]	@ 000af270 b17a
.org 0xaf272
	movs r0, #1	@ 000af272 0120
.org 0xaf274
	movs r2, #0	@ 000af274 0022
.org 0xaf276
	orrs r1, r0	@ 000af276 0143
.org 0xaf278
	movs r0, #2	@ 000af278 0220
.org 0xaf27a
	orrs r1, r0	@ 000af27a 0143
.org 0xaf27c
	orrs r1, r2	@ 000af27c 1143
.org 0xaf27e
	strb r1, [r6, #10]	@ 000af27e b172
.org 0xaf280
	ldrb r4, [r6, #16]	@ 000af280 347c
.org 0xaf282
	cmp r4, #0	@ 000af282 002c
.org 0xaf284
	beq.n 0xaf28c	@ 000af284 02d0
.org 0xaf286
	movs r0, #16	@ 000af286 1020
.org 0xaf288
	orrs r1, r0	@ 000af288 0143
.org 0xaf28a
	b.n 0xaf290	@ 000af28a 01e0
.org 0xaf28c
	movs r0, #239	@ 000af28c ef20
.org 0xaf28e
	ands r1, r0	@ 000af28e 0140
.org 0xaf290
	strb r1, [r6, #10]	@ 000af290 b172
.org 0xaf292
	movs r3, #1	@ 000af292 0123
.org 0xaf294
	adds r1, r3, #0	@ 000af294 191c
.org 0xaf296
	ands r1, r4	@ 000af296 2140
.org 0xaf298
	adds r0, r6, #0	@ 000af298 301c
.org 0xaf29a
	adds r0, #76	@ 000af29a 4c30
.org 0xaf29c
	movs r5, #0	@ 000af29c 0025
.org 0xaf29e
	strb r1, [r0, #0]	@ 000af29e 0170
.org 0xaf2a0
	adds r4, r6, #0	@ 000af2a0 341c
.org 0xaf2a2
	adds r4, #74	@ 000af2a2 4a34
.org 0xaf2a4
	lsls r1, r1, #4	@ 000af2a4 0901
.org 0xaf2a6
	ldrb r2, [r4, #0]	@ 000af2a6 2278
.org 0xaf2a8
	movs r0, #17	@ 000af2a8 1120
.org 0xaf2aa
	negs r0, r0	@ 000af2aa 4042
.org 0xaf2ac
	ands r0, r2	@ 000af2ac 1040
.org 0xaf2ae
	orrs r0, r1	@ 000af2ae 0843
.org 0xaf2b0
	strb r0, [r4, #0]	@ 000af2b0 2070
.org 0xaf2b2
	ldr r1, [pc, #68]	@ 000af2b2 1149
.org 0xaf2b4
	ldrb r0, [r6, #9]	@ 000af2b4 707a
.org 0xaf2b6
	lsls r0, r0, #2	@ 000af2b6 8000
.org 0xaf2b8
	adds r0, r0, r1	@ 000af2b8 4018
.org 0xaf2ba
	str r3, [r6, #12]	@ 000af2ba f360
.org 0xaf2bc
	ldr r0, [r0, #0]	@ 000af2bc 0068
.org 0xaf2be
	ldr r0, [r0, #4]	@ 000af2be 4068
.org 0xaf2c0
	str r0, [r6, #20]	@ 000af2c0 7061
.org 0xaf2c2
	str r5, [r6, #44]	@ 000af2c2 f562
.org 0xaf2c4
	ldrb r0, [r6, #17]	@ 000af2c4 707c
.org 0xaf2c6
	cmp r0, #0	@ 000af2c6 0028
.org 0xaf2c8
	bne.n 0xaf304	@ 000af2c8 1cd1
.org 0xaf2ca
	adds r5, r6, #0	@ 000af2ca 351c
.org 0xaf2cc
	adds r5, #84	@ 000af2cc 5435
.org 0xaf2ce
	ldrb r1, [r6, #16]	@ 000af2ce 317c
.org 0xaf2d0
	adds r0, r5, #0	@ 000af2d0 281c
.org 0xaf2d2
	movs r2, #1	@ 000af2d2 0122
.org 0xaf2d4
	bl 0xaf200	@ 000af2d4 fff794ff
.org 0xaf2d8
	str r0, [r6, #44]	@ 000af2d8 f062
.org 0xaf2da
	ldrb r0, [r6, #10]	@ 000af2da b07a
.org 0xaf2dc
	movs r1, #4	@ 000af2dc 0421
.org 0xaf2de
	orrs r0, r1	@ 000af2de 0843
.org 0xaf2e0
	strb r0, [r6, #10]	@ 000af2e0 b072
.org 0xaf2e2
	adds r4, #42	@ 000af2e2 2a34
.org 0xaf2e4
	ldr r1, [pc, #20]	@ 000af2e4 0549
.org 0xaf2e6
	adds r0, r4, #0	@ 000af2e6 201c
.org 0xaf2e8
	adds r2, r5, #0	@ 000af2e8 2a1c
.org 0xaf2ea
	movs r3, #6	@ 000af2ea 0623
.org 0xaf2ec
	bl 0x5760	@ 000af2ec 56f738fa
.org 0xaf2f0
	str r6, [r4, #44]	@ 000af2f0 e662
.org 0xaf2f2
	ldr r0, [pc, #12]	@ 000af2f2 0348
.org 0xaf2f4
	str r0, [r4, #36]	@ 000af2f4 6062
.org 0xaf2f6
	b.n 0xaf326	@ 000af2f6 16e0
.org 0xaf2f8
	.byte 0x40,0xdb,0x85,0x08	@ 000af2f8 data
.org 0xaf2fc
	.byte 0x4c,0x31,0x86,0x08	@ 000af2fc data
.org 0xaf300
	.byte 0x55,0xf5,0x0a,0x08	@ 000af300 data
.org 0xaf304
	adds r2, r6, #0	@ 000af304 321c
.org 0xaf306
	adds r2, #73	@ 000af306 4932
.org 0xaf308
	ldrb r0, [r2, #0]	@ 000af308 1078
.org 0xaf30a
	movs r1, #12	@ 000af30a 0c21
.org 0xaf30c
	orrs r0, r1	@ 000af30c 0843
.org 0xaf30e
	strb r0, [r2, #0]	@ 000af30e 1070
.org 0xaf310
	adds r0, r6, #0	@ 000af310 301c
.org 0xaf312
	adds r0, #140	@ 000af312 8c30
.org 0xaf314
	str r5, [r0, #0]	@ 000af314 0560
.org 0xaf316
	adds r0, #4	@ 000af316 0430
.org 0xaf318
	str r5, [r0, #0]	@ 000af318 0560
.org 0xaf31a
	adds r0, #4	@ 000af31a 0430
.org 0xaf31c
	strb r5, [r0, #0]	@ 000af31c 0570
.org 0xaf31e
	ldrb r1, [r6, #10]	@ 000af31e b17a
.org 0xaf320
	movs r0, #251	@ 000af320 fb20
.org 0xaf322
	ands r0, r1	@ 000af322 0840
.org 0xaf324
	strb r0, [r6, #10]	@ 000af324 b072
.org 0xaf326
	movs r1, #0	@ 000af326 0021
.org 0xaf328
	str r1, [r6, #92]	@ 000af328 f165
.org 0xaf32a
	movs r0, #24	@ 000af32a 1820
.org 0xaf32c
	str r0, [r6, #100]	@ 000af32c 7066
.org 0xaf32e
	adds r0, r6, #0	@ 000af32e 301c
.org 0xaf330
	adds r0, #180	@ 000af330 b430
.org 0xaf332
	strb r1, [r0, #0]	@ 000af332 0170
.org 0xaf334
	strb r1, [r6, #18]	@ 000af334 b174
.org 0xaf336
	movs r0, #1	@ 000af336 0120
.org 0xaf338
	strb r0, [r6, #13]	@ 000af338 7073
.org 0xaf33a
	strb r1, [r6, #14]	@ 000af33a b173
.org 0xaf33c
	adds r0, r6, #0	@ 000af33c 301c
.org 0xaf33e
	adds r0, #192	@ 000af33e c030
.org 0xaf340
	str r1, [r0, #0]	@ 000af340 0160
.org 0xaf342
	subs r0, #10	@ 000af342 0a38
.org 0xaf344
	strb r1, [r0, #0]	@ 000af344 0170
.org 0xaf346
	ldrb r1, [r6, #17]	@ 000af346 717c
.org 0xaf348
	movs r2, #163	@ 000af348 a322
.org 0xaf34a
	lsls r2, r2, #8	@ 000af34a 1202
.org 0xaf34c
	adds r0, r2, #0	@ 000af34c 101c
.org 0xaf34e
	orrs r1, r0	@ 000af34e 0143
.org 0xaf350
	adds r0, r6, #0	@ 000af350 301c
.org 0xaf352
	bl 0x1cf00	@ 000af352 6df7d5fd
.org 0xaf356
	adds r0, r6, #0	@ 000af356 301c
.org 0xaf358
	bl 0xaf864	@ 000af358 00f084fa
.org 0xaf35c
	ldrb r1, [r6, #10]	@ 000af35c b17a
.org 0xaf35e
	movs r0, #16	@ 000af35e 1020
.org 0xaf360
	ands r0, r1	@ 000af360 0840
.org 0xaf362
	cmp r0, #0	@ 000af362 0028
.org 0xaf364
	bne.n 0xaf376	@ 000af364 07d1
.org 0xaf366
	ldr r0, [r6, #100]	@ 000af366 706e
.org 0xaf368
	lsls r0, r0, #8	@ 000af368 0002
.org 0xaf36a
	negs r0, r0	@ 000af36a 4042
.org 0xaf36c
	cmp r0, #0	@ 000af36c 0028
.org 0xaf36e
	bge.n 0xaf372	@ 000af36e 00da
.org 0xaf370
	adds r0, #255	@ 000af370 ff30
.org 0xaf372
	asrs r0, r0, #8	@ 000af372 0012
.org 0xaf374
	str r0, [r6, #100]	@ 000af374 7066
