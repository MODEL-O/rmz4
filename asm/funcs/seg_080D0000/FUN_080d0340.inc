@ FUN_080d0340  entry 0x080d0340  size 112
.thumb
.org 0xd0340
FUN_080d0340:
	push {r4, r5, lr}	@ 000d0340 30b5
.org 0xd0342
	adds r4, r0, #0	@ 000d0342 041c
.org 0xd0344
	ldr r5, [r4, #40]	@ 000d0344 a56a
.org 0xd0346
	ldrb r1, [r4, #15]	@ 000d0346 e17b
.org 0xd0348
	cmp r1, #0	@ 000d0348 0029
.org 0xd034a
	bne.n 0xd036e	@ 000d034a 10d1
.org 0xd034c
	adds r0, #140	@ 000d034c 8c30
.org 0xd034e
	str r1, [r0, #0]	@ 000d034e 0160
.org 0xd0350
	adds r0, #4	@ 000d0350 0430
.org 0xd0352
	str r1, [r0, #0]	@ 000d0352 0160
.org 0xd0354
	adds r0, #4	@ 000d0354 0430
.org 0xd0356
	strb r1, [r0, #0]	@ 000d0356 0170
.org 0xd0358
	ldrb r1, [r4, #10]	@ 000d0358 a17a
.org 0xd035a
	movs r0, #251	@ 000d035a fb20
.org 0xd035c
	ands r0, r1	@ 000d035c 0840
.org 0xd035e
	strb r0, [r4, #10]	@ 000d035e a072
.org 0xd0360
	ldr r1, [pc, #76]	@ 000d0360 1349
.org 0xd0362
	adds r0, r4, #0	@ 000d0362 201c
.org 0xd0364
	bl 0x1cf00	@ 000d0364 4cf7ccfd
.org 0xd0368
	ldrb r0, [r4, #15]	@ 000d0368 e07b
.org 0xd036a
	adds r0, #1	@ 000d036a 0130
.org 0xd036c
	strb r0, [r4, #15]	@ 000d036c e073
.org 0xd036e
	adds r0, r4, #0	@ 000d036e 201c
.org 0xd0370
	bl 0x1cff0	@ 000d0370 4cf73efe
.org 0xd0374
	adds r0, r4, #0	@ 000d0374 201c
.org 0xd0376
	adds r0, #115	@ 000d0376 7330
.org 0xd0378
	ldrb r0, [r0, #0]	@ 000d0378 0078
.org 0xd037a
	cmp r0, #3	@ 000d037a 0328
.org 0xd037c
	bne.n 0xd03aa	@ 000d037c 15d1
.org 0xd037e
	adds r1, r5, #0	@ 000d037e 291c
.org 0xd0380
	adds r1, #204	@ 000d0380 cc31
.org 0xd0382
	ldrh r2, [r1, #0]	@ 000d0382 0a88
.org 0xd0384
	movs r3, #0	@ 000d0384 0023
.org 0xd0386
	ldrsh r0, [r1, r3]	@ 000d0386 c85e
.org 0xd0388
	cmp r0, #0	@ 000d0388 0028
.org 0xd038a
	beq.n 0xd0390	@ 000d038a 01d0
.org 0xd038c
	subs r0, r2, #1	@ 000d038c 501e
.org 0xd038e
	strh r0, [r1, #0]	@ 000d038e 0880
.org 0xd0390
	ldrb r1, [r4, #10]	@ 000d0390 a17a
.org 0xd0392
	movs r0, #254	@ 000d0392 fe20
.org 0xd0394
	ands r0, r1	@ 000d0394 0840
.org 0xd0396
	strb r0, [r4, #10]	@ 000d0396 a072
.org 0xd0398
	ldr r1, [pc, #24]	@ 000d0398 0649
.org 0xd039a
	ldrb r0, [r4, #9]	@ 000d039a 607a
.org 0xd039c
	lsls r0, r0, #2	@ 000d039c 8000
.org 0xd039e
	adds r0, r0, r1	@ 000d039e 4018
.org 0xd03a0
	movs r1, #4	@ 000d03a0 0421
.org 0xd03a2
	str r1, [r4, #12]	@ 000d03a2 e160
.org 0xd03a4
	ldr r0, [r0, #0]	@ 000d03a4 0068
.org 0xd03a6
	ldr r0, [r0, #16]	@ 000d03a6 0069
.org 0xd03a8
	str r0, [r4, #20]	@ 000d03a8 6061
.org 0xd03aa
	pop {r4, r5}	@ 000d03aa 30bc
.org 0xd03ac
	pop {r0}	@ 000d03ac 01bc
.org 0xd03ae
	bx r0	@ 000d03ae 0047
