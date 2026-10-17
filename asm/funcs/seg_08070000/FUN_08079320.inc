@ FUN_08079320  entry 0x08079320  size 172
.thumb
.org 0x79320
FUN_08079320:
	push {r4, r5, lr}	@ 00079320 30b5
.org 0x79322
	adds r5, r0, #0	@ 00079322 051c
.org 0x79324
	bl 0x1cc9c	@ 00079324 a3f7bafc
.org 0x79328
	ldrb r1, [r5, #10]	@ 00079328 a97a
.org 0x7932a
	movs r0, #2	@ 0007932a 0220
.org 0x7932c
	movs r4, #0	@ 0007932c 0024
.org 0x7932e
	orrs r0, r1	@ 0007932e 0843
.org 0x79330
	movs r1, #1	@ 00079330 0121
.org 0x79332
	orrs r0, r1	@ 00079332 0843
.org 0x79334
	strb r0, [r5, #10]	@ 00079334 a872
.org 0x79336
	adds r0, r5, #0	@ 00079336 281c
.org 0x79338
	bl 0x1ceec	@ 00079338 a3f7d8fd
.org 0x7933c
	adds r0, r5, #0	@ 0007933c 281c
.org 0x7933e
	adds r0, #76	@ 0007933e 4c30
.org 0x79340
	strb r4, [r0, #0]	@ 00079340 0470
.org 0x79342
	adds r2, r5, #0	@ 00079342 2a1c
.org 0x79344
	adds r2, #74	@ 00079344 4a32
.org 0x79346
	ldrb r1, [r2, #0]	@ 00079346 1178
.org 0x79348
	movs r0, #17	@ 00079348 1120
.org 0x7934a
	negs r0, r0	@ 0007934a 4042
.org 0x7934c
	ands r0, r1	@ 0007934c 0840
.org 0x7934e
	strb r0, [r2, #0]	@ 0007934e 1070
.org 0x79350
	ldrb r1, [r5, #10]	@ 00079350 a97a
.org 0x79352
	movs r0, #239	@ 00079352 ef20
.org 0x79354
	ands r0, r1	@ 00079354 0840
.org 0x79356
	strb r0, [r5, #10]	@ 00079356 a872
.org 0x79358
	ldr r1, [pc, #100]	@ 00079358 1949
.org 0x7935a
	adds r0, r5, #0	@ 0007935a 281c
.org 0x7935c
	movs r2, #96	@ 0007935c 6022
.org 0x7935e
	bl 0x503cc	@ 0007935e d7f735f8
.org 0x79362
	ldr r1, [pc, #96]	@ 00079362 1849
.org 0x79364
	adds r0, r5, #0	@ 00079364 281c
.org 0x79366
	adds r0, #116	@ 00079366 7430
.org 0x79368
	str r1, [r0, #36]	@ 00079368 4162
.org 0x7936a
	ldr r0, [pc, #92]	@ 0007936a 1748
.org 0x7936c
	ldr r1, [r0, #56]	@ 0007936c 816b
.org 0x7936e
	movs r2, #134	@ 0007936e 8622
.org 0x79370
	lsls r2, r2, #7	@ 00079370 d201
.org 0x79372
	adds r1, r1, r2	@ 00079372 8918
.org 0x79374
	str r1, [r5, #84]	@ 00079374 6965
.org 0x79376
	ldr r0, [r0, #60]	@ 00079376 c06b
.org 0x79378
	ldr r2, [pc, #80]	@ 00079378 144a
.org 0x7937a
	adds r0, r0, r2	@ 0007937a 8018
.org 0x7937c
	str r0, [r5, #88]	@ 0007937c a865
.org 0x7937e
	adds r2, r5, #0	@ 0007937e 2a1c
.org 0x79380
	adds r2, #180	@ 00079380 b432
.org 0x79382
	str r1, [r2, #0]	@ 00079382 1160
.org 0x79384
	ldr r0, [r5, #88]	@ 00079384 a86d
.org 0x79386
	str r0, [r2, #4]	@ 00079386 5060
.org 0x79388
	adds r0, r5, #0	@ 00079388 281c
.org 0x7938a
	adds r0, #213	@ 0007938a d530
.org 0x7938c
	strb r4, [r0, #0]	@ 0007938c 0470
.org 0x7938e
	adds r0, #2	@ 0007938e 0230
.org 0x79390
	strb r4, [r0, #0]	@ 00079390 0470
.org 0x79392
	adds r0, #2	@ 00079392 0230
.org 0x79394
	strb r4, [r0, #0]	@ 00079394 0470
.org 0x79396
	subs r0, #3	@ 00079396 0338
.org 0x79398
	strb r4, [r0, #0]	@ 00079398 0470
.org 0x7939a
	adds r0, #5	@ 0007939a 0530
.org 0x7939c
	strb r4, [r0, #0]	@ 0007939c 0470
.org 0x7939e
	str r4, [r2, #20]	@ 0007939e 5461
.org 0x793a0
	str r4, [r2, #24]	@ 000793a0 9461
.org 0x793a2
	ldr r1, [pc, #44]	@ 000793a2 0b49
.org 0x793a4
	ldrb r0, [r5, #9]	@ 000793a4 687a
.org 0x793a6
	lsls r0, r0, #2	@ 000793a6 8000
.org 0x793a8
	adds r0, r0, r1	@ 000793a8 4018
.org 0x793aa
	movs r1, #1	@ 000793aa 0121
.org 0x793ac
	str r1, [r5, #12]	@ 000793ac e960
.org 0x793ae
	ldr r0, [r0, #0]	@ 000793ae 0068
.org 0x793b0
	ldr r0, [r0, #4]	@ 000793b0 4068
.org 0x793b2
	str r0, [r5, #20]	@ 000793b2 6861
.org 0x793b4
	ldrb r0, [r5, #16]	@ 000793b4 287c
.org 0x793b6
	cmp r0, #0	@ 000793b6 0028
.org 0x793b8
	bne.n 0x793d4	@ 000793b8 0cd1
.org 0x793ba
	strb r0, [r5, #13]	@ 000793ba 6873
.org 0x793bc
	b.n 0x793d6	@ 000793bc 0be0
.org 0x793be
	.byte 0x00	@ 000793be data
.org 0x793bf
	.byte 0x00	@ 000793bf data
.org 0x793c0
	.byte 0xd4,0xd3,0x85,0x08	@ 000793c0 data
.org 0x793c4
	.byte 0x31,0xb4,0x07,0x08	@ 000793c4 data
.org 0x793c8
	.byte 0xf8,0xe9,0x02,0x02	@ 000793c8 data
