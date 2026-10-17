@ FUN_080883e8  entry 0x080883e8  size 118
.thumb
.org 0x883e8
FUN_080883e8:
	push {r4, lr}	@ 000883e8 10b5
.org 0x883ea
	adds r4, r0, #0	@ 000883ea 041c
.org 0x883ec
	ldrb r0, [r4, #15]	@ 000883ec e07b
.org 0x883ee
	cmp r0, #0	@ 000883ee 0028
.org 0x883f0
	bne.n 0x88448	@ 000883f0 2ad1
.org 0x883f2
	adds r0, r4, #0	@ 000883f2 201c
.org 0x883f4
	adds r0, #116	@ 000883f4 7430
.org 0x883f6
	ldr r1, [pc, #32]	@ 000883f6 0849
.org 0x883f8
	bl 0x5784	@ 000883f8 7df7c4f9
.org 0x883fc
	ldr r1, [pc, #28]	@ 000883fc 0749
.org 0x883fe
	adds r0, r4, #0	@ 000883fe 201c
.org 0x88400
	bl 0x1cf00	@ 00088400 94f77efd
.org 0x88404
	ldrb r2, [r4, #10]	@ 00088404 a27a
.org 0x88406
	lsrs r0, r2, #4	@ 00088406 1009
.org 0x88408
	movs r1, #1	@ 00088408 0121
.org 0x8840a
	bics r1, r0	@ 0008840a 8143
.org 0x8840c
	cmp r1, #0	@ 0008840c 0029
.org 0x8840e
	beq.n 0x88420	@ 0008840e 07d0
.org 0x88410
	movs r0, #16	@ 00088410 1020
.org 0x88412
	orrs r0, r2	@ 00088412 1043
.org 0x88414
	b.n 0x88424	@ 00088414 06e0
.org 0x88416
	.byte 0x00	@ 00088416 data
.org 0x88417
	.byte 0x00	@ 00088417 data
.org 0x88418
	.byte 0x34,0xf0,0x85,0x08	@ 00088418 data
.org 0x8841c
	.byte 0x0e,0x1d,0x00,0x00	@ 0008841c data
.org 0x88420
	movs r0, #239	@ 00088420 ef20
.org 0x88422
	ands r0, r2	@ 00088422 1040
.org 0x88424
	strb r0, [r4, #10]	@ 00088424 a072
.org 0x88426
	adds r0, r4, #0	@ 00088426 201c
.org 0x88428
	adds r0, #76	@ 00088428 4c30
.org 0x8842a
	strb r1, [r0, #0]	@ 0008842a 0170
.org 0x8842c
	adds r3, r4, #0	@ 0008842c 231c
.org 0x8842e
	adds r3, #74	@ 0008842e 4a33
.org 0x88430
	lsls r1, r1, #4	@ 00088430 0901
.org 0x88432
	ldrb r2, [r3, #0]	@ 00088432 1a78
.org 0x88434
	movs r0, #17	@ 00088434 1120
.org 0x88436
	negs r0, r0	@ 00088436 4042
.org 0x88438
	ands r0, r2	@ 00088438 1040
.org 0x8843a
	orrs r0, r1	@ 0008843a 0843
.org 0x8843c
	strb r0, [r3, #0]	@ 0008843c 1870
.org 0x8843e
	movs r0, #8	@ 0008843e 0820
.org 0x88440
	strb r0, [r4, #18]	@ 00088440 a074
.org 0x88442
	ldrb r0, [r4, #15]	@ 00088442 e07b
.org 0x88444
	adds r0, #1	@ 00088444 0130
.org 0x88446
	strb r0, [r4, #15]	@ 00088446 e073
.org 0x88448
	adds r0, r4, #0	@ 00088448 201c
.org 0x8844a
	bl 0x1cff0	@ 0008844a 94f7d1fd
.org 0x8844e
	ldrb r0, [r4, #18]	@ 0008844e a07c
.org 0x88450
	subs r0, #1	@ 00088450 0138
.org 0x88452
	strb r0, [r4, #18]	@ 00088452 a074
.org 0x88454
	lsls r0, r0, #24	@ 00088454 0006
.org 0x88456
	lsrs r1, r0, #24	@ 00088456 010e
.org 0x88458
	cmp r1, #0	@ 00088458 0029
.org 0x8845a
	bne.n 0x88462	@ 0008845a 02d1
.org 0x8845c
	movs r0, #2	@ 0008845c 0220
