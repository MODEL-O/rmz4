@ FUN_080cd334  entry 0x080cd334  size 172
.thumb
.org 0xcd334
FUN_080cd334:
	push {r4, r5, r6, lr}	@ 000cd334 70b5
.org 0xcd336
	adds r6, r0, #0	@ 000cd336 061c
.org 0xcd338
	ldrb r4, [r6, #17]	@ 000cd338 747c
.org 0xcd33a
	ldr r0, [pc, #84]	@ 000cd33a 1548
.org 0xcd33c
	bl 0x2b10	@ 000cd33c 35f7e8fb
.org 0xcd340
	ldr r1, [pc, #80]	@ 000cd340 1449
.org 0xcd342
	ldrb r0, [r6, #9]	@ 000cd342 707a
.org 0xcd344
	lsls r0, r0, #2	@ 000cd344 8000
.org 0xcd346
	adds r0, r0, r1	@ 000cd346 4018
.org 0xcd348
	movs r1, #1	@ 000cd348 0121
.org 0xcd34a
	str r1, [r6, #12]	@ 000cd34a f160
.org 0xcd34c
	ldr r0, [r0, #0]	@ 000cd34c 0068
.org 0xcd34e
	ldr r0, [r0, #4]	@ 000cd34e 4068
.org 0xcd350
	str r0, [r6, #20]	@ 000cd350 7061
.org 0xcd352
	ldrb r1, [r6, #10]	@ 000cd352 b17a
.org 0xcd354
	movs r0, #1	@ 000cd354 0120
.org 0xcd356
	movs r5, #0	@ 000cd356 0025
.org 0xcd358
	movs r2, #0	@ 000cd358 0022
.org 0xcd35a
	orrs r0, r1	@ 000cd35a 0843
.org 0xcd35c
	movs r1, #2	@ 000cd35c 0221
.org 0xcd35e
	orrs r0, r1	@ 000cd35e 0843
.org 0xcd360
	strb r0, [r6, #10]	@ 000cd360 b072
.org 0xcd362
	ldr r0, [r6, #84]	@ 000cd362 706d
.org 0xcd364
	str r0, [r6, #104]	@ 000cd364 b066
.org 0xcd366
	lsls r1, r4, #1	@ 000cd366 6100
.org 0xcd368
	subs r1, #1	@ 000cd368 0139
.org 0xcd36a
	str r1, [r6, #100]	@ 000cd36a 7166
.org 0xcd36c
	lsls r0, r1, #3	@ 000cd36c c800
.org 0xcd36e
	adds r0, r0, r1	@ 000cd36e 4018
.org 0xcd370
	lsls r0, r0, #7	@ 000cd370 c001
.org 0xcd372
	str r0, [r6, #92]	@ 000cd372 f065
.org 0xcd374
	strb r2, [r6, #18]	@ 000cd374 b274
.org 0xcd376
	adds r0, r6, #0	@ 000cd376 301c
.org 0xcd378
	bl 0x1cc9c	@ 000cd378 4ff790fc
.org 0xcd37c
	adds r0, r6, #0	@ 000cd37c 301c
.org 0xcd37e
	movs r1, #6	@ 000cd37e 0621
.org 0xcd380
	bl 0x1d3d0	@ 000cd380 50f726f8
.org 0xcd384
	cmp r4, #0	@ 000cd384 002c
.org 0xcd386
	beq.n 0xcd398	@ 000cd386 07d0
.org 0xcd388
	ldrb r0, [r6, #10]	@ 000cd388 b07a
.org 0xcd38a
	movs r1, #16	@ 000cd38a 1021
.org 0xcd38c
	orrs r0, r1	@ 000cd38c 0843
.org 0xcd38e
	b.n 0xcd39e	@ 000cd38e 06e0
.org 0xcd390
	.byte 0x91,0x01,0x00,0x00	@ 000cd390 data
.org 0xcd394
	.byte 0xf4,0x49,0x86,0x08	@ 000cd394 data
.org 0xcd398
	ldrb r1, [r6, #10]	@ 000cd398 b17a
.org 0xcd39a
	movs r0, #239	@ 000cd39a ef20
.org 0xcd39c
	ands r0, r1	@ 000cd39c 0840
.org 0xcd39e
	strb r0, [r6, #10]	@ 000cd39e b072
.org 0xcd3a0
	movs r1, #1	@ 000cd3a0 0121
.org 0xcd3a2
	ands r1, r4	@ 000cd3a2 2140
.org 0xcd3a4
	adds r0, r6, #0	@ 000cd3a4 301c
.org 0xcd3a6
	adds r0, #76	@ 000cd3a6 4c30
.org 0xcd3a8
	movs r5, #0	@ 000cd3a8 0025
.org 0xcd3aa
	strb r1, [r0, #0]	@ 000cd3aa 0170
.org 0xcd3ac
	adds r3, r6, #0	@ 000cd3ac 331c
.org 0xcd3ae
	adds r3, #74	@ 000cd3ae 4a33
.org 0xcd3b0
	lsls r1, r1, #4	@ 000cd3b0 0901
.org 0xcd3b2
	ldrb r2, [r3, #0]	@ 000cd3b2 1a78
.org 0xcd3b4
	movs r0, #17	@ 000cd3b4 1120
.org 0xcd3b6
	negs r0, r0	@ 000cd3b6 4042
.org 0xcd3b8
	ands r0, r2	@ 000cd3b8 1040
.org 0xcd3ba
	orrs r0, r1	@ 000cd3ba 0843
.org 0xcd3bc
	strb r0, [r3, #0]	@ 000cd3bc 1870
.org 0xcd3be
	ldrb r1, [r6, #10]	@ 000cd3be b17a
.org 0xcd3c0
	movs r0, #4	@ 000cd3c0 0420
.org 0xcd3c2
	orrs r0, r1	@ 000cd3c2 0843
.org 0xcd3c4
	strb r0, [r6, #10]	@ 000cd3c4 b072
.org 0xcd3c6
	adds r4, r6, #0	@ 000cd3c6 341c
.org 0xcd3c8
	adds r4, #116	@ 000cd3c8 7434
.org 0xcd3ca
	ldr r1, [pc, #28]	@ 000cd3ca 0749
.org 0xcd3cc
	adds r2, r6, #0	@ 000cd3cc 321c
.org 0xcd3ce
	adds r2, #84	@ 000cd3ce 5432
.org 0xcd3d0
	adds r0, r4, #0	@ 000cd3d0 201c
.org 0xcd3d2
	movs r3, #64	@ 000cd3d2 4023
.org 0xcd3d4
	bl 0x5760	@ 000cd3d4 38f7c4f9
.org 0xcd3d8
	str r6, [r4, #44]	@ 000cd3d8 e662
.org 0xcd3da
	str r5, [r4, #36]	@ 000cd3da 6562
.org 0xcd3dc
	adds r0, r6, #0	@ 000cd3dc 301c
.org 0xcd3de
	bl 0xcd3ec	@ 000cd3de 00f005f8
