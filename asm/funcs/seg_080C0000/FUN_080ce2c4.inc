@ FUN_080ce2c4  entry 0x080ce2c4  size 280
.thumb
.org 0xce2c4
FUN_080ce2c4:
	push {r4, r5, r6, lr}	@ 000ce2c4 70b5
.org 0xce2c6
	adds r4, r0, #0	@ 000ce2c6 041c
.org 0xce2c8
	adds r0, #188	@ 000ce2c8 bc30
.org 0xce2ca
	ldr r5, [r0, #0]	@ 000ce2ca 0568
.org 0xce2cc
	subs r0, #7	@ 000ce2cc 0738
.org 0xce2ce
	ldrb r6, [r0, #0]	@ 000ce2ce 0678
.org 0xce2d0
	adds r1, r4, #0	@ 000ce2d0 211c
.org 0xce2d2
	adds r1, #184	@ 000ce2d2 b831
.org 0xce2d4
	ldr r0, [r1, #0]	@ 000ce2d4 0868
.org 0xce2d6
	subs r0, #1	@ 000ce2d6 0138
.org 0xce2d8
	str r0, [r1, #0]	@ 000ce2d8 0860
.org 0xce2da
	cmp r0, #0	@ 000ce2da 0028
.org 0xce2dc
	ble.n 0xce2ee	@ 000ce2dc 07dd
.org 0xce2de
	ldr r0, [pc, #72]	@ 000ce2de 1248
.org 0xce2e0
	subs r1, #100	@ 000ce2e0 6439
.org 0xce2e2
	bl 0x1fb14	@ 000ce2e2 51f717fc
.org 0xce2e6
	movs r1, #192	@ 000ce2e6 c021
.org 0xce2e8
	lsls r1, r1, #6	@ 000ce2e8 8901
.org 0xce2ea
	cmp r0, r1	@ 000ce2ea 8842
.org 0xce2ec
	bls.n 0xce330	@ 000ce2ec 20d9
.org 0xce2ee
	ldrb r1, [r4, #10]	@ 000ce2ee a17a
.org 0xce2f0
	movs r0, #254	@ 000ce2f0 fe20
.org 0xce2f2
	ands r0, r1	@ 000ce2f2 0840
.org 0xce2f4
	movs r2, #0	@ 000ce2f4 0022
.org 0xce2f6
	movs r1, #253	@ 000ce2f6 fd21
.org 0xce2f8
	ands r0, r1	@ 000ce2f8 0840
.org 0xce2fa
	strb r0, [r4, #10]	@ 000ce2fa a072
.org 0xce2fc
	adds r0, r4, #0	@ 000ce2fc 201c
.org 0xce2fe
	adds r0, #140	@ 000ce2fe 8c30
.org 0xce300
	str r2, [r0, #0]	@ 000ce300 0260
.org 0xce302
	adds r0, #4	@ 000ce302 0430
.org 0xce304
	str r2, [r0, #0]	@ 000ce304 0260
.org 0xce306
	adds r0, #4	@ 000ce306 0430
.org 0xce308
	strb r2, [r0, #0]	@ 000ce308 0270
.org 0xce30a
	ldrb r1, [r4, #10]	@ 000ce30a a17a
.org 0xce30c
	movs r0, #251	@ 000ce30c fb20
.org 0xce30e
	ands r0, r1	@ 000ce30e 0840
.org 0xce310
	strb r0, [r4, #10]	@ 000ce310 a072
.org 0xce312
	ldr r1, [pc, #24]	@ 000ce312 0649
.org 0xce314
	ldrb r0, [r4, #9]	@ 000ce314 607a
.org 0xce316
	lsls r0, r0, #2	@ 000ce316 8000
.org 0xce318
	adds r0, r0, r1	@ 000ce318 4018
.org 0xce31a
	movs r1, #3	@ 000ce31a 0321
.org 0xce31c
	str r1, [r4, #12]	@ 000ce31c e160
.org 0xce31e
	ldr r0, [r0, #0]	@ 000ce31e 0068
.org 0xce320
	ldr r0, [r0, #12]	@ 000ce320 c068
.org 0xce322
	str r0, [r4, #20]	@ 000ce322 6061
.org 0xce324
	b.n 0xce3ec	@ 000ce324 62e0
.org 0xce326
	.byte 0x00	@ 000ce326 data
.org 0xce327
	.byte 0x00	@ 000ce327 data
.org 0xce328
	.byte 0xf8,0xe9,0x02,0x02	@ 000ce328 data
.org 0xce32c
	.byte 0xf4,0x49,0x86,0x08	@ 000ce32c data
.org 0xce330
	adds r0, r4, #0	@ 000ce330 201c
.org 0xce332
	adds r0, #140	@ 000ce332 8c30
.org 0xce334
	ldr r0, [r0, #0]	@ 000ce334 0068
.org 0xce336
	movs r1, #1	@ 000ce336 0121
.org 0xce338
	ands r0, r1	@ 000ce338 0840
.org 0xce33a
	cmp r0, #0	@ 000ce33a 0028
.org 0xce33c
	beq.n 0xce3a0	@ 000ce33c 30d0
.org 0xce33e
	adds r2, r4, #0	@ 000ce33e 221c
.org 0xce340
	adds r2, #164	@ 000ce340 a432
.org 0xce342
	movs r0, #0	@ 000ce342 0020
.org 0xce344
	ldrsh r1, [r2, r0]	@ 000ce344 115e
.org 0xce346
	movs r0, #64	@ 000ce346 4020
.org 0xce348
	subs r0, r0, r1	@ 000ce348 401a
.org 0xce34a
	cmp r0, #0	@ 000ce34a 0028
.org 0xce34c
	bge.n 0xce350	@ 000ce34c 00da
.org 0xce34e
	adds r0, #3	@ 000ce34e 0330
.org 0xce350
	asrs r3, r0, #2	@ 000ce350 8310
.org 0xce352
	cmp r3, #3	@ 000ce352 032b
.org 0xce354
	ble.n 0xce358	@ 000ce354 00dd
.org 0xce356
	movs r3, #3	@ 000ce356 0323
.org 0xce358
	cmp r6, #0	@ 000ce358 002e
.org 0xce35a
	beq.n 0xce378	@ 000ce35a 0dd0
.org 0xce35c
	ldr r0, [pc, #20]	@ 000ce35c 0548
.org 0xce35e
	lsls r1, r3, #2	@ 000ce35e 9900
.org 0xce360
	adds r1, r1, r0	@ 000ce360 0918
.org 0xce362
	ldr r0, [r1, #0]	@ 000ce362 0868
.org 0xce364
	adds r5, r5, r0	@ 000ce364 2d18
.org 0xce366
	movs r0, #128	@ 000ce366 8020
.org 0xce368
	lsls r0, r0, #2	@ 000ce368 8000
.org 0xce36a
	cmp r5, r0	@ 000ce36a 8542
.org 0xce36c
	ble.n 0xce380	@ 000ce36c 08dd
.org 0xce36e
	adds r5, r0, #0	@ 000ce36e 051c
.org 0xce370
	b.n 0xce380	@ 000ce370 06e0
.org 0xce372
	.byte 0x00	@ 000ce372 data
.org 0xce373
	.byte 0x00	@ 000ce373 data
.org 0xce374
	.byte 0xe4,0x6b,0x86,0x08	@ 000ce374 data
.org 0xce378
	ldr r1, [pc, #64]	@ 000ce378 1049
.org 0xce37a
	lsls r0, r3, #2	@ 000ce37a 9800
.org 0xce37c
	adds r0, r0, r1	@ 000ce37c 4018
.org 0xce37e
	ldr r5, [r0, #0]	@ 000ce37e 0568
.org 0xce380
	movs r6, #16	@ 000ce380 1026
.org 0xce382
	adds r0, r4, #0	@ 000ce382 201c
.org 0xce384
	adds r0, #181	@ 000ce384 b530
.org 0xce386
	strb r6, [r0, #0]	@ 000ce386 0670
.org 0xce388
	adds r0, #7	@ 000ce388 0730
.org 0xce38a
	str r5, [r0, #0]	@ 000ce38a 0560
.org 0xce38c
	movs r1, #0	@ 000ce38c 0021
.org 0xce38e
	movs r0, #64	@ 000ce38e 4020
.org 0xce390
	strh r0, [r2, #0]	@ 000ce390 1080
.org 0xce392
	ldrb r0, [r4, #13]	@ 000ce392 607b
.org 0xce394
	cmp r0, #2	@ 000ce394 0228
.org 0xce396
	beq.n 0xce3a0	@ 000ce396 03d0
.org 0xce398
	movs r0, #2	@ 000ce398 0220
.org 0xce39a
	strb r0, [r4, #13]	@ 000ce39a 6073
.org 0xce39c
	strb r1, [r4, #14]	@ 000ce39c a173
.org 0xce39e
	strb r1, [r4, #15]	@ 000ce39e e173
.org 0xce3a0
	adds r0, r4, #0	@ 000ce3a0 201c
.org 0xce3a2
	adds r0, #184	@ 000ce3a2 b830
.org 0xce3a4
	ldr r1, [r0, #0]	@ 000ce3a4 0168
.org 0xce3a6
	cmp r1, #59	@ 000ce3a6 3b29
.org 0xce3a8
	bgt.n 0xce3c0	@ 000ce3a8 0adc
.org 0xce3aa
	movs r0, #1	@ 000ce3aa 0120
.org 0xce3ac
	ands r1, r0	@ 000ce3ac 0140
.org 0xce3ae
	cmp r1, #0	@ 000ce3ae 0029
.org 0xce3b0
	beq.n 0xce3d4	@ 000ce3b0 10d0
.org 0xce3b2
	ldrb r1, [r4, #10]	@ 000ce3b2 a17a
.org 0xce3b4
	movs r0, #254	@ 000ce3b4 fe20
.org 0xce3b6
	ands r0, r1	@ 000ce3b6 0840
.org 0xce3b8
	b.n 0xce3da	@ 000ce3b8 0fe0
.org 0xce3ba
	.byte 0x00	@ 000ce3ba data
.org 0xce3bb
	.byte 0x00	@ 000ce3bb data
.org 0xce3bc
	.byte 0xe4,0x6b,0x86,0x08	@ 000ce3bc data
.org 0xce3c0
	cmp r1, #179	@ 000ce3c0 b329
.org 0xce3c2
	bgt.n 0xce3dc	@ 000ce3c2 0bdc
.org 0xce3c4
	movs r0, #3	@ 000ce3c4 0320
.org 0xce3c6
	ands r1, r0	@ 000ce3c6 0140
.org 0xce3c8
	cmp r1, #0	@ 000ce3c8 0029
.org 0xce3ca
	bne.n 0xce3d4	@ 000ce3ca 03d1
.org 0xce3cc
	ldrb r1, [r4, #10]	@ 000ce3cc a17a
.org 0xce3ce
	movs r0, #254	@ 000ce3ce fe20
.org 0xce3d0
	ands r0, r1	@ 000ce3d0 0840
.org 0xce3d2
	b.n 0xce3da	@ 000ce3d2 02e0
.org 0xce3d4
	ldrb r1, [r4, #10]	@ 000ce3d4 a17a
.org 0xce3d6
	movs r0, #1	@ 000ce3d6 0120
.org 0xce3d8
	orrs r0, r1	@ 000ce3d8 0843
.org 0xce3da
	strb r0, [r4, #10]	@ 000ce3da a072
