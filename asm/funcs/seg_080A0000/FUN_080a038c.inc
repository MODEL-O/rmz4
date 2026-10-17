@ FUN_080a038c  entry 0x080a038c  size 200
.thumb
.org 0xa038c
FUN_080a038c:
	push {r4, r5, lr}	@ 000a038c 30b5
.org 0xa038e
	adds r4, r0, #0	@ 000a038e 041c
.org 0xa0390
	ldrb r5, [r4, #15]	@ 000a0390 e57b
.org 0xa0392
	cmp r5, #0	@ 000a0392 002d
.org 0xa0394
	bne.n 0xa03b6	@ 000a0394 0fd1
.org 0xa0396
	adds r1, r4, #0	@ 000a0396 211c
.org 0xa0398
	adds r1, #37	@ 000a0398 2531
.org 0xa039a
	movs r0, #24	@ 000a039a 1820
.org 0xa039c
	strb r0, [r1, #0]	@ 000a039c 0870
.org 0xa039e
	ldr r1, [pc, #52]	@ 000a039e 0d49
.org 0xa03a0
	adds r0, r4, #0	@ 000a03a0 201c
.org 0xa03a2
	bl 0x1cf00	@ 000a03a2 7cf7adfd
.org 0xa03a6
	movs r0, #72	@ 000a03a6 4820
.org 0xa03a8
	str r0, [r4, #100]	@ 000a03a8 6066
.org 0xa03aa
	movs r0, #1	@ 000a03aa 0120
.org 0xa03ac
	strb r0, [r4, #18]	@ 000a03ac a074
.org 0xa03ae
	strb r5, [r4, #19]	@ 000a03ae e574
.org 0xa03b0
	ldrb r0, [r4, #15]	@ 000a03b0 e07b
.org 0xa03b2
	adds r0, #1	@ 000a03b2 0130
.org 0xa03b4
	strb r0, [r4, #15]	@ 000a03b4 e073
.org 0xa03b6
	ldrb r0, [r4, #19]	@ 000a03b6 e07c
.org 0xa03b8
	adds r1, r0, #1	@ 000a03b8 411c
.org 0xa03ba
	movs r2, #0	@ 000a03ba 0022
.org 0xa03bc
	strb r1, [r4, #19]	@ 000a03bc e174
.org 0xa03be
	ldr r0, [r4, #100]	@ 000a03be 606e
.org 0xa03c0
	cmp r0, #23	@ 000a03c0 1728
.org 0xa03c2
	bgt.n 0xa03d8	@ 000a03c2 09dc
.org 0xa03c4
	movs r0, #1	@ 000a03c4 0120
.org 0xa03c6
	ands r1, r0	@ 000a03c6 0140
.org 0xa03c8
	cmp r1, #0	@ 000a03c8 0029
.org 0xa03ca
	beq.n 0xa03ec	@ 000a03ca 0fd0
.org 0xa03cc
	ldrb r0, [r4, #10]	@ 000a03cc a07a
.org 0xa03ce
	movs r1, #1	@ 000a03ce 0121
.org 0xa03d0
	orrs r0, r1	@ 000a03d0 0843
.org 0xa03d2
	b.n 0xa03f2	@ 000a03d2 0ee0
.org 0xa03d4
	.byte 0x0b,0x82,0x00,0x00	@ 000a03d4 data
.org 0xa03d8
	cmp r0, #47	@ 000a03d8 2f28
.org 0xa03da
	bgt.n 0xa03f4	@ 000a03da 0bdc
.org 0xa03dc
	movs r0, #3	@ 000a03dc 0320
.org 0xa03de
	ands r1, r0	@ 000a03de 0140
.org 0xa03e0
	cmp r1, #0	@ 000a03e0 0029
.org 0xa03e2
	beq.n 0xa03ec	@ 000a03e2 03d0
.org 0xa03e4
	ldrb r0, [r4, #10]	@ 000a03e4 a07a
.org 0xa03e6
	movs r1, #1	@ 000a03e6 0121
.org 0xa03e8
	orrs r0, r1	@ 000a03e8 0843
.org 0xa03ea
	b.n 0xa03f2	@ 000a03ea 02e0
.org 0xa03ec
	ldrb r1, [r4, #10]	@ 000a03ec a17a
.org 0xa03ee
	movs r0, #254	@ 000a03ee fe20
.org 0xa03f0
	ands r0, r1	@ 000a03f0 0840
.org 0xa03f2
	strb r0, [r4, #10]	@ 000a03f2 a072
.org 0xa03f4
	ldr r5, [r4, #44]	@ 000a03f4 e56a
.org 0xa03f6
	cmp r5, #0	@ 000a03f6 002d
.org 0xa03f8
	beq.n 0xa041c	@ 000a03f8 10d0
.org 0xa03fa
	adds r0, r4, #0	@ 000a03fa 201c
.org 0xa03fc
	adds r0, #116	@ 000a03fc 7430
.org 0xa03fe
	ldr r1, [pc, #24]	@ 000a03fe 0649
.org 0xa0400
	bl 0x5784	@ 000a0400 65f7c0f9
.org 0xa0404
	ldrb r0, [r4, #18]	@ 000a0404 a07c
.org 0xa0406
	cmp r0, #0	@ 000a0406 0028
.org 0xa0408
	beq.n 0xa0458	@ 000a0408 26d0
.org 0xa040a
	adds r0, r4, #0	@ 000a040a 201c
.org 0xa040c
	bl 0x1cff0	@ 000a040c 7cf7f0fd
.org 0xa0410
	movs r0, #0	@ 000a0410 0020
.org 0xa0412
	strb r0, [r4, #18]	@ 000a0412 a074
.org 0xa0414
	b.n 0xa0458	@ 000a0414 20e0
.org 0xa0416
	.byte 0x00	@ 000a0416 data
.org 0xa0417
	.byte 0x00	@ 000a0417 data
.org 0xa0418
	.byte 0x6c,0x19,0x86,0x08	@ 000a0418 data
.org 0xa041c
	adds r0, r4, #0	@ 000a041c 201c
.org 0xa041e
	bl 0x1cff0	@ 000a041e 7cf7e7fd
.org 0xa0422
	strb r5, [r4, #18]	@ 000a0422 a574
.org 0xa0424
	adds r0, r4, #0	@ 000a0424 201c
.org 0xa0426
	adds r0, #116	@ 000a0426 7430
.org 0xa0428
	ldr r1, [pc, #52]	@ 000a0428 0d49
.org 0xa042a
	bl 0x5784	@ 000a042a 65f7abf9
.org 0xa042e
	ldr r0, [r4, #100]	@ 000a042e 606e
.org 0xa0430
	subs r2, r0, #1	@ 000a0430 421e
.org 0xa0432
	str r2, [r4, #100]	@ 000a0432 6266
.org 0xa0434
	cmp r2, #0	@ 000a0434 002a
.org 0xa0436
	bne.n 0xa0458	@ 000a0436 0fd1
.org 0xa0438
	ldr r1, [pc, #40]	@ 000a0438 0a49
.org 0xa043a
	ldrb r0, [r4, #9]	@ 000a043a 607a
.org 0xa043c
	lsls r0, r0, #2	@ 000a043c 8000
.org 0xa043e
	adds r0, r0, r1	@ 000a043e 4018
.org 0xa0440
	movs r1, #2	@ 000a0440 0221
.org 0xa0442
	str r1, [r4, #12]	@ 000a0442 e160
.org 0xa0444
	ldr r0, [r0, #0]	@ 000a0444 0068
.org 0xa0446
	ldr r0, [r0, #8]	@ 000a0446 8068
.org 0xa0448
	str r0, [r4, #20]	@ 000a0448 6061
.org 0xa044a
	movs r0, #3	@ 000a044a 0320
.org 0xa044c
	strb r0, [r4, #13]	@ 000a044c 6073
.org 0xa044e
	strb r2, [r4, #14]	@ 000a044e a273
.org 0xa0450
	strb r2, [r4, #15]	@ 000a0450 e273
.org 0xa0452
	adds r0, r4, #0	@ 000a0452 201c
