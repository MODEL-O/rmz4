@ FUN_08060304  entry 0x08060304  size 150
.thumb
.org 0x60304
FUN_08060304:
	push {r4, r5, lr}	@ 00060304 30b5
.org 0x60306
	sub sp, #8	@ 00060306 82b0
.org 0x60308
	adds r5, r0, #0	@ 00060308 051c
.org 0x6030a
	ldrb r0, [r5, #14]	@ 0006030a a87b
.org 0x6030c
	cmp r0, #0	@ 0006030c 0028
.org 0x6030e
	bne.n 0x6037c	@ 0006030e 35d1
.org 0x60310
	ldr r1, [pc, #24]	@ 00060310 0649
.org 0x60312
	adds r0, r5, #0	@ 00060312 281c
.org 0x60314
	bl 0x1cf00	@ 00060314 bcf7f4fd
.org 0x60318
	ldrb r1, [r5, #10]	@ 00060318 a97a
.org 0x6031a
	movs r0, #16	@ 0006031a 1020
.org 0x6031c
	ands r0, r1	@ 0006031c 0840
.org 0x6031e
	cmp r0, #0	@ 0006031e 0028
.org 0x60320
	beq.n 0x60330	@ 00060320 06d0
.org 0x60322
	ldr r0, [r5, #84]	@ 00060322 686d
.org 0x60324
	movs r1, #240	@ 00060324 f021
.org 0x60326
	lsls r1, r1, #4	@ 00060326 0901
.org 0x60328
	b.n 0x60334	@ 00060328 04e0
.org 0x6032a
	.byte 0x00	@ 0006032a data
.org 0x6032b
	.byte 0x00	@ 0006032b data
.org 0x6032c
	.byte 0x09,0xa5,0x00,0x00	@ 0006032c data
.org 0x60330
	ldr r0, [r5, #84]	@ 00060330 686d
.org 0x60332
	ldr r1, [pc, #108]	@ 00060332 1b49
.org 0x60334
	adds r0, r0, r1	@ 00060334 4018
.org 0x60336
	str r0, [sp, #0]	@ 00060336 0090
.org 0x60338
	ldr r0, [r5, #88]	@ 00060338 a86d
.org 0x6033a
	ldr r1, [pc, #104]	@ 0006033a 1a49
.org 0x6033c
	adds r0, r0, r1	@ 0006033c 4018
.org 0x6033e
	str r0, [sp, #4]	@ 0006033e 0190
.org 0x60340
	ldrb r3, [r5, #10]	@ 00060340 ab7a
.org 0x60342
	lsrs r3, r3, #4	@ 00060342 1b09
.org 0x60344
	movs r4, #1	@ 00060344 0124
.org 0x60346
	ands r3, r4	@ 00060346 2340
.org 0x60348
	mov r0, sp	@ 00060348 6846
.org 0x6034a
	movs r1, #0	@ 0006034a 0021
.org 0x6034c
	movs r2, #0	@ 0006034c 0022
.org 0x6034e
	bl 0x99e6c	@ 0006034e 39f08dfd
.org 0x60352
	ldrb r3, [r5, #10]	@ 00060352 ab7a
.org 0x60354
	lsrs r3, r3, #4	@ 00060354 1b09
.org 0x60356
	ands r3, r4	@ 00060356 2340
.org 0x60358
	mov r0, sp	@ 00060358 6846
.org 0x6035a
	movs r1, #0	@ 0006035a 0021
.org 0x6035c
	movs r2, #1	@ 0006035c 0122
.org 0x6035e
	bl 0x99e6c	@ 0006035e 39f085fd
.org 0x60362
	ldrb r3, [r5, #10]	@ 00060362 ab7a
.org 0x60364
	lsrs r3, r3, #4	@ 00060364 1b09
.org 0x60366
	ands r3, r4	@ 00060366 2340
.org 0x60368
	mov r0, sp	@ 00060368 6846
.org 0x6036a
	movs r1, #0	@ 0006036a 0021
.org 0x6036c
	movs r2, #2	@ 0006036c 0222
.org 0x6036e
	bl 0x99e6c	@ 0006036e 39f07dfd
.org 0x60372
	movs r0, #32	@ 00060372 2020
.org 0x60374
	strb r0, [r5, #18]	@ 00060374 a874
.org 0x60376
	ldrb r0, [r5, #14]	@ 00060376 a87b
.org 0x60378
	adds r0, #1	@ 00060378 0130
.org 0x6037a
	strb r0, [r5, #14]	@ 0006037a a873
.org 0x6037c
	adds r0, r5, #0	@ 0006037c 281c
.org 0x6037e
	bl 0x1cff0	@ 0006037e bcf737fe
.org 0x60382
	ldrb r0, [r5, #18]	@ 00060382 a87c
.org 0x60384
	subs r0, #1	@ 00060384 0138
.org 0x60386
	strb r0, [r5, #18]	@ 00060386 a874
.org 0x60388
	lsls r0, r0, #24	@ 00060388 0006
.org 0x6038a
	lsrs r0, r0, #24	@ 0006038a 000e
.org 0x6038c
	cmp r0, #255	@ 0006038c ff28
.org 0x6038e
	bne.n 0x60398	@ 0006038e 03d1
.org 0x60390
	movs r0, #10	@ 00060390 0a20
.org 0x60392
	strb r0, [r5, #13]	@ 00060392 6873
.org 0x60394
	movs r0, #0	@ 00060394 0020
.org 0x60396
	strb r0, [r5, #14]	@ 00060396 a873
.org 0x60398
	add sp, #8	@ 00060398 02b0
