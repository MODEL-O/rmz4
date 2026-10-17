@ FUN_0803b2a4  entry 0x0803b2a4  size 386
.thumb
.org 0x3b2a4
FUN_0803b2a4:
	push {r4, r5, r6, r7, lr}	@ 0003b2a4 f0b5
.org 0x3b2a6
	mov r7, r9	@ 0003b2a6 4f46
.org 0x3b2a8
	mov r6, r8	@ 0003b2a8 4646
.org 0x3b2aa
	push {r6, r7}	@ 0003b2aa c0b4
.org 0x3b2ac
	mov r9, r0	@ 0003b2ac 8146
.org 0x3b2ae
	mov r8, r1	@ 0003b2ae 8846
.org 0x3b2b0
	lsls r2, r2, #24	@ 0003b2b0 1206
.org 0x3b2b2
	lsrs r6, r2, #24	@ 0003b2b2 160e
.org 0x3b2b4
	ldr r0, [pc, #56]	@ 0003b2b4 0e48
.org 0x3b2b6
	ldr r0, [r0, #0]	@ 0003b2b6 0068
.org 0x3b2b8
	bl 0x5500	@ 0003b2b8 caf722f9
.org 0x3b2bc
	adds r4, r0, #0	@ 0003b2bc 041c
.org 0x3b2be
	cmp r4, #0	@ 0003b2be 002c
.org 0x3b2c0
	bne.n 0x3b2c4	@ 0003b2c0 00d1
.org 0x3b2c2
	b.n 0x3b43a	@ 0003b2c2 bae0
.org 0x3b2c4
	mov r0, r9	@ 0003b2c4 4846
.org 0x3b2c6
	adds r0, #248	@ 0003b2c6 f830
.org 0x3b2c8
	ldrb r1, [r0, #0]	@ 0003b2c8 0178
.org 0x3b2ca
	negs r0, r1	@ 0003b2ca 4842
.org 0x3b2cc
	orrs r0, r1	@ 0003b2cc 0843
.org 0x3b2ce
	lsrs r3, r0, #31	@ 0003b2ce c30f
.org 0x3b2d0
	cmp r6, #0	@ 0003b2d0 002e
.org 0x3b2d2
	bne.n 0x3b324	@ 0003b2d2 27d1
.org 0x3b2d4
	adds r2, r4, #0	@ 0003b2d4 221c
.org 0x3b2d6
	adds r5, r3, #0	@ 0003b2d6 1d1c
.org 0x3b2d8
	ldr r0, [pc, #24]	@ 0003b2d8 0648
.org 0x3b2da
	strb r6, [r4, #9]	@ 0003b2da 6672
.org 0x3b2dc
	ldr r0, [r0, #0]	@ 0003b2dc 0068
.org 0x3b2de
	ldr r0, [r0, #0]	@ 0003b2de 0068
.org 0x3b2e0
	str r0, [r4, #20]	@ 0003b2e0 6061
.org 0x3b2e2
	cmp r5, #1	@ 0003b2e2 012d
.org 0x3b2e4
	bgt.n 0x3b2f8	@ 0003b2e4 08dc
.org 0x3b2e6
	ldrb r1, [r4, #11]	@ 0003b2e6 e17a
.org 0x3b2e8
	movs r0, #191	@ 0003b2e8 bf20
.org 0x3b2ea
	ands r0, r1	@ 0003b2ea 0840
.org 0x3b2ec
	b.n 0x3b2fe	@ 0003b2ec 07e0
.org 0x3b2ee
	.byte 0x00	@ 0003b2ee data
.org 0x3b2ef
	.byte 0x00	@ 0003b2ef data
.org 0x3b2f0
	.byte 0x88,0xed,0x02,0x02	@ 0003b2f0 data
.org 0x3b2f4
	.byte 0xf8,0x39,0x85,0x08	@ 0003b2f4 data
.org 0x3b2f8
	ldrb r0, [r4, #11]	@ 0003b2f8 e07a
.org 0x3b2fa
	movs r1, #64	@ 0003b2fa 4021
.org 0x3b2fc
	orrs r0, r1	@ 0003b2fc 0843
.org 0x3b2fe
	strb r0, [r4, #11]	@ 0003b2fe e072
.org 0x3b300
	adds r1, r2, #0	@ 0003b300 111c
.org 0x3b302
	adds r1, #37	@ 0003b302 2531
.org 0x3b304
	movs r0, #16	@ 0003b304 1020
.org 0x3b306
	strb r0, [r1, #0]	@ 0003b306 0870
.org 0x3b308
	ldr r0, [pc, #16]	@ 0003b308 0448
.org 0x3b30a
	ldrh r0, [r0, #0]	@ 0003b30a 0088
.org 0x3b30c
	strh r0, [r2, #32]	@ 0003b30c 1084
.org 0x3b30e
	ldr r0, [pc, #16]	@ 0003b30e 0448
.org 0x3b310
	adds r0, r5, r0	@ 0003b310 2818
.org 0x3b312
	ldrb r1, [r0, #0]	@ 0003b312 0178
.org 0x3b314
	adds r0, r2, #0	@ 0003b314 101c
.org 0x3b316
	adds r0, #34	@ 0003b316 2230
.org 0x3b318
	strb r1, [r0, #0]	@ 0003b318 0170
.org 0x3b31a
	b.n 0x3b370	@ 0003b31a 29e0
.org 0x3b31c
	.byte 0xfc,0x36,0x85,0x08	@ 0003b31c data
.org 0x3b320
	.byte 0x04,0x37,0x85,0x08	@ 0003b320 data
.org 0x3b324
	adds r5, r4, #0	@ 0003b324 251c
.org 0x3b326
	adds r7, r3, #0	@ 0003b326 1f1c
.org 0x3b328
	ldr r1, [pc, #20]	@ 0003b328 0549
.org 0x3b32a
	movs r0, #0	@ 0003b32a 0020
.org 0x3b32c
	strb r0, [r4, #9]	@ 0003b32c 6072
.org 0x3b32e
	ldr r0, [r1, #0]	@ 0003b32e 0868
.org 0x3b330
	ldr r0, [r0, #0]	@ 0003b330 0068
.org 0x3b332
	str r0, [r4, #20]	@ 0003b332 6061
.org 0x3b334
	cmp r7, #1	@ 0003b334 012f
.org 0x3b336
	bgt.n 0x3b344	@ 0003b336 05dc
.org 0x3b338
	ldrb r1, [r4, #11]	@ 0003b338 e17a
.org 0x3b33a
	movs r0, #191	@ 0003b33a bf20
.org 0x3b33c
	ands r0, r1	@ 0003b33c 0840
.org 0x3b33e
	b.n 0x3b34a	@ 0003b33e 04e0
.org 0x3b340
	.byte 0xf8,0x39,0x85,0x08	@ 0003b340 data
.org 0x3b344
	ldrb r0, [r4, #11]	@ 0003b344 e07a
.org 0x3b346
	movs r1, #64	@ 0003b346 4021
.org 0x3b348
	orrs r0, r1	@ 0003b348 0843
.org 0x3b34a
	strb r0, [r4, #11]	@ 0003b34a e072
.org 0x3b34c
	adds r1, r5, #0	@ 0003b34c 291c
.org 0x3b34e
	adds r1, #37	@ 0003b34e 2531
.org 0x3b350
	movs r0, #16	@ 0003b350 1020
.org 0x3b352
	strb r0, [r1, #0]	@ 0003b352 0870
.org 0x3b354
	ldr r2, [pc, #36]	@ 0003b354 094a
.org 0x3b356
	adds r1, r7, #0	@ 0003b356 391c
.org 0x3b358
	lsls r0, r1, #1	@ 0003b358 4800
.org 0x3b35a
	adds r0, r0, r2	@ 0003b35a 8018
.org 0x3b35c
	ldrh r0, [r0, #0]	@ 0003b35c 0088
.org 0x3b35e
	strh r0, [r5, #32]	@ 0003b35e 2884
.org 0x3b360
	ldr r0, [pc, #28]	@ 0003b360 0748
.org 0x3b362
	adds r1, r1, r0	@ 0003b362 0918
.org 0x3b364
	ldrb r1, [r1, #0]	@ 0003b364 0978
.org 0x3b366
	adds r0, r5, #0	@ 0003b366 281c
.org 0x3b368
	adds r0, #34	@ 0003b368 2230
.org 0x3b36a
	strb r1, [r0, #0]	@ 0003b36a 0170
.org 0x3b36c
	cmp r6, #1	@ 0003b36c 012e
.org 0x3b36e
	bne.n 0x3b384	@ 0003b36e 09d1
.org 0x3b370
	adds r0, r3, #0	@ 0003b370 181c
.org 0x3b372
	movs r1, #0	@ 0003b372 0021
.org 0x3b374
	movs r2, #0	@ 0003b374 0022
.org 0x3b376
	bl 0x3a8d4	@ 0003b376 fff7adfa
.org 0x3b37a
	b.n 0x3b3c0	@ 0003b37a 21e0
.org 0x3b37c
	.byte 0xfc,0x36,0x85,0x08	@ 0003b37c data
.org 0x3b380
	.byte 0x04,0x37,0x85,0x08	@ 0003b380 data
.org 0x3b384
	cmp r6, #2	@ 0003b384 022e
.org 0x3b386
	bne.n 0x3b38e	@ 0003b386 02d1
.org 0x3b388
	adds r0, r3, #0	@ 0003b388 181c
.org 0x3b38a
	movs r1, #0	@ 0003b38a 0021
.org 0x3b38c
	b.n 0x3b3aa	@ 0003b38c 0de0
.org 0x3b38e
	cmp r6, #3	@ 0003b38e 032e
.org 0x3b390
	bne.n 0x3b398	@ 0003b390 02d1
.org 0x3b392
	adds r0, r3, #0	@ 0003b392 181c
.org 0x3b394
	movs r1, #0	@ 0003b394 0021
.org 0x3b396
	b.n 0x3b3aa	@ 0003b396 08e0
.org 0x3b398
	cmp r6, #4	@ 0003b398 042e
.org 0x3b39a
	bne.n 0x3b3a2	@ 0003b39a 02d1
.org 0x3b39c
	adds r0, r3, #0	@ 0003b39c 181c
.org 0x3b39e
	movs r1, #2	@ 0003b39e 0221
.org 0x3b3a0
	b.n 0x3b3aa	@ 0003b3a0 03e0
.org 0x3b3a2
	cmp r6, #5	@ 0003b3a2 052e
.org 0x3b3a4
	bne.n 0x3b3b2	@ 0003b3a4 05d1
.org 0x3b3a6
	adds r0, r3, #0	@ 0003b3a6 181c
.org 0x3b3a8
	movs r1, #3	@ 0003b3a8 0321
.org 0x3b3aa
	movs r2, #1	@ 0003b3aa 0122
.org 0x3b3ac
	bl 0x3a8d4	@ 0003b3ac fff792fa
.org 0x3b3b0
	b.n 0x3b3c0	@ 0003b3b0 06e0
.org 0x3b3b2
	cmp r6, #6	@ 0003b3b2 062e
.org 0x3b3b4
	bne.n 0x3b3c0	@ 0003b3b4 04d1
.org 0x3b3b6
	adds r0, r3, #0	@ 0003b3b6 181c
.org 0x3b3b8
	movs r1, #0	@ 0003b3b8 0021
.org 0x3b3ba
	movs r2, #1	@ 0003b3ba 0122
.org 0x3b3bc
	bl 0x3a8d4	@ 0003b3bc fff78afa
.org 0x3b3c0
	adds r2, r4, #0	@ 0003b3c0 221c
.org 0x3b3c2
	adds r2, #180	@ 0003b3c2 b432
.org 0x3b3c4
	mov r0, r9	@ 0003b3c4 4846
.org 0x3b3c6
	str r0, [r2, #0]	@ 0003b3c6 1060
.org 0x3b3c8
	mov r1, r8	@ 0003b3c8 4146
.org 0x3b3ca
	str r1, [r4, #44]	@ 0003b3ca e162
.org 0x3b3cc
	ldrb r1, [r1, #10]	@ 0003b3cc 897a
.org 0x3b3ce
	movs r0, #16	@ 0003b3ce 1020
.org 0x3b3d0
	ands r0, r1	@ 0003b3d0 0840
.org 0x3b3d2
	adds r5, r2, #0	@ 0003b3d2 151c
.org 0x3b3d4
	cmp r0, #0	@ 0003b3d4 0028
.org 0x3b3d6
	beq.n 0x3b3e2	@ 0003b3d6 04d0
.org 0x3b3d8
	mov r1, r8	@ 0003b3d8 4146
.org 0x3b3da
	ldr r0, [r1, #84]	@ 0003b3da 486d
.org 0x3b3dc
	movs r1, #192	@ 0003b3dc c021
.org 0x3b3de
	lsls r1, r1, #4	@ 0003b3de 0901
.org 0x3b3e0
	b.n 0x3b3e8	@ 0003b3e0 02e0
.org 0x3b3e2
	mov r1, r8	@ 0003b3e2 4146
.org 0x3b3e4
	ldr r0, [r1, #84]	@ 0003b3e4 486d
.org 0x3b3e6
	ldr r1, [pc, #36]	@ 0003b3e6 0949
.org 0x3b3e8
	adds r0, r0, r1	@ 0003b3e8 4018
.org 0x3b3ea
	str r0, [r4, #84]	@ 0003b3ea 6065
.org 0x3b3ec
	mov r1, r8	@ 0003b3ec 4146
.org 0x3b3ee
	ldr r0, [r1, #88]	@ 0003b3ee 886d
.org 0x3b3f0
	str r0, [r4, #88]	@ 0003b3f0 a065
.org 0x3b3f2
	movs r0, #0	@ 0003b3f2 0020
.org 0x3b3f4
	strb r6, [r4, #16]	@ 0003b3f4 2674
.org 0x3b3f6
	strb r0, [r4, #17]	@ 0003b3f6 6074
.org 0x3b3f8
	ldrb r0, [r1, #10]	@ 0003b3f8 887a
.org 0x3b3fa
	lsrs r2, r0, #4	@ 0003b3fa 0209
.org 0x3b3fc
	movs r0, #1	@ 0003b3fc 0120
.org 0x3b3fe
	ands r2, r0	@ 0003b3fe 0240
.org 0x3b400
	cmp r2, #0	@ 0003b400 002a
.org 0x3b402
	beq.n 0x3b410	@ 0003b402 05d0
.org 0x3b404
	ldrb r0, [r4, #10]	@ 0003b404 a07a
.org 0x3b406
	movs r1, #16	@ 0003b406 1021
.org 0x3b408
	orrs r0, r1	@ 0003b408 0843
.org 0x3b40a
	b.n 0x3b416	@ 0003b40a 04e0
.org 0x3b40c
	.byte 0x00,0xf4,0xff,0xff	@ 0003b40c data
.org 0x3b410
	ldrb r1, [r4, #10]	@ 0003b410 a17a
.org 0x3b412
	movs r0, #239	@ 0003b412 ef20
.org 0x3b414
	ands r0, r1	@ 0003b414 0840
.org 0x3b416
	strb r0, [r4, #10]	@ 0003b416 a072
.org 0x3b418
	adds r1, r2, #0	@ 0003b418 111c
.org 0x3b41a
	adds r0, r4, #0	@ 0003b41a 201c
.org 0x3b41c
	adds r0, #76	@ 0003b41c 4c30
.org 0x3b41e
	strb r1, [r0, #0]	@ 0003b41e 0170
.org 0x3b420
	adds r3, r4, #0	@ 0003b420 231c
.org 0x3b422
	adds r3, #74	@ 0003b422 4a33
.org 0x3b424
	lsls r1, r1, #4	@ 0003b424 0901
