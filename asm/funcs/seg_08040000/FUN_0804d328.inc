@ FUN_0804d328  entry 0x0804d328  size 134
.thumb
.org 0x4d328
FUN_0804d328:
	push {r4, r5, lr}	@ 0004d328 30b5
.org 0x4d32a
	adds r4, r0, #0	@ 0004d32a 041c
.org 0x4d32c
	lsls r1, r1, #24	@ 0004d32c 0906
.org 0x4d32e
	lsrs r5, r1, #24	@ 0004d32e 0d0e
.org 0x4d330
	ldr r0, [pc, #64]	@ 0004d330 1048
.org 0x4d332
	ldr r0, [r0, #0]	@ 0004d332 0068
.org 0x4d334
	bl 0x5500	@ 0004d334 b8f7e4f8
.org 0x4d338
	adds r2, r0, #0	@ 0004d338 021c
.org 0x4d33a
	cmp r2, #0	@ 0004d33a 002a
.org 0x4d33c
	beq.n 0x4d3b8	@ 0004d33c 3cd0
.org 0x4d33e
	adds r0, r4, #0	@ 0004d33e 201c
.org 0x4d340
	adds r0, #248	@ 0004d340 f830
.org 0x4d342
	ldrb r0, [r0, #0]	@ 0004d342 0078
.org 0x4d344
	cmp r0, #2	@ 0004d344 0228
.org 0x4d346
	bne.n 0x4d384	@ 0004d346 1dd1
.org 0x4d348
	ldr r0, [pc, #44]	@ 0004d348 0b48
.org 0x4d34a
	movs r1, #48	@ 0004d34a 3021
.org 0x4d34c
	strb r1, [r2, #9]	@ 0004d34c 5172
.org 0x4d34e
	adds r0, #192	@ 0004d34e c030
.org 0x4d350
	ldr r0, [r0, #0]	@ 0004d350 0068
.org 0x4d352
	ldr r0, [r0, #0]	@ 0004d352 0068
.org 0x4d354
	str r0, [r2, #20]	@ 0004d354 5061
.org 0x4d356
	ldrb r1, [r2, #11]	@ 0004d356 d17a
.org 0x4d358
	movs r0, #191	@ 0004d358 bf20
.org 0x4d35a
	ands r0, r1	@ 0004d35a 0840
.org 0x4d35c
	strb r0, [r2, #11]	@ 0004d35c d072
.org 0x4d35e
	adds r1, r2, #0	@ 0004d35e 111c
.org 0x4d360
	adds r1, #37	@ 0004d360 2531
.org 0x4d362
	movs r0, #16	@ 0004d362 1020
.org 0x4d364
	strb r0, [r1, #0]	@ 0004d364 0870
.org 0x4d366
	ldr r0, [pc, #20]	@ 0004d366 0548
.org 0x4d368
	ldrh r0, [r0, #0]	@ 0004d368 0088
.org 0x4d36a
	strh r0, [r2, #32]	@ 0004d36a 1084
.org 0x4d36c
	ldr r0, [pc, #16]	@ 0004d36c 0448
.org 0x4d36e
	ldrb r0, [r0, #0]	@ 0004d36e 0078
.org 0x4d370
	b.n 0x4d3ac	@ 0004d370 1ce0
.org 0x4d372
	.byte 0x00	@ 0004d372 data
.org 0x4d373
	.byte 0x00	@ 0004d373 data
.org 0x4d374
	.byte 0x88,0xed,0x02,0x02	@ 0004d374 data
.org 0x4d378
	.byte 0xf8,0x39,0x85,0x08	@ 0004d378 data
.org 0x4d37c
	.byte 0xfc,0x36,0x85,0x08	@ 0004d37c data
.org 0x4d380
	.byte 0x04,0x37,0x85,0x08	@ 0004d380 data
.org 0x4d384
	ldr r0, [pc, #56]	@ 0004d384 0e48
.org 0x4d386
	movs r1, #48	@ 0004d386 3021
.org 0x4d388
	strb r1, [r2, #9]	@ 0004d388 5172
.org 0x4d38a
	adds r0, #192	@ 0004d38a c030
.org 0x4d38c
	ldr r0, [r0, #0]	@ 0004d38c 0068
.org 0x4d38e
	ldr r0, [r0, #0]	@ 0004d38e 0068
.org 0x4d390
	str r0, [r2, #20]	@ 0004d390 5061
.org 0x4d392
	ldrb r1, [r2, #11]	@ 0004d392 d17a
.org 0x4d394
	movs r0, #191	@ 0004d394 bf20
.org 0x4d396
	ands r0, r1	@ 0004d396 0840
.org 0x4d398
	strb r0, [r2, #11]	@ 0004d398 d072
.org 0x4d39a
	adds r1, r2, #0	@ 0004d39a 111c
.org 0x4d39c
	adds r1, #37	@ 0004d39c 2531
.org 0x4d39e
	movs r0, #16	@ 0004d39e 1020
.org 0x4d3a0
	strb r0, [r1, #0]	@ 0004d3a0 0870
.org 0x4d3a2
	ldr r0, [pc, #32]	@ 0004d3a2 0848
.org 0x4d3a4
	ldrh r0, [r0, #2]	@ 0004d3a4 4088
.org 0x4d3a6
	strh r0, [r2, #32]	@ 0004d3a6 1084
.org 0x4d3a8
	ldr r0, [pc, #28]	@ 0004d3a8 0748
.org 0x4d3aa
	ldrb r0, [r0, #1]	@ 0004d3aa 4078
.org 0x4d3ac
	subs r1, #3	@ 0004d3ac 0339
