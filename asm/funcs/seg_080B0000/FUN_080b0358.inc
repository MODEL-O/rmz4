@ FUN_080b0358  entry 0x080b0358  size 90
.thumb
.org 0xb0358
FUN_080b0358:
	push {r4, r5, r6, lr}	@ 000b0358 70b5
.org 0xb035a
	adds r5, r0, #0	@ 000b035a 051c
.org 0xb035c
	adds r6, r2, #0	@ 000b035c 161c
.org 0xb035e
	lsls r1, r1, #24	@ 000b035e 0906
.org 0xb0360
	lsrs r4, r1, #24	@ 000b0360 0c0e
.org 0xb0362
	ldr r0, [pc, #80]	@ 000b0362 1448
.org 0xb0364
	ldr r0, [r0, #0]	@ 000b0364 0068
.org 0xb0366
	bl 0x5500	@ 000b0366 55f7cbf8
.org 0xb036a
	adds r3, r0, #0	@ 000b036a 031c
.org 0xb036c
	cmp r3, #0	@ 000b036c 002b
.org 0xb036e
	beq.n 0xb03ac	@ 000b036e 1dd0
.org 0xb0370
	adds r1, r3, #0	@ 000b0370 191c
.org 0xb0372
	adds r1, #37	@ 000b0372 2531
.org 0xb0374
	movs r2, #0	@ 000b0374 0022
.org 0xb0376
	movs r0, #24	@ 000b0376 1820
.org 0xb0378
	strb r0, [r1, #0]	@ 000b0378 0870
.org 0xb037a
	ldr r0, [pc, #60]	@ 000b037a 0f48
.org 0xb037c
	movs r1, #85	@ 000b037c 5521
.org 0xb037e
	strb r1, [r3, #9]	@ 000b037e 5972
.org 0xb0380
	adds r1, #255	@ 000b0380 ff31
.org 0xb0382
	adds r0, r0, r1	@ 000b0382 4018
.org 0xb0384
	ldr r0, [r0, #0]	@ 000b0384 0068
.org 0xb0386
	ldr r0, [r0, #0]	@ 000b0386 0068
.org 0xb0388
	str r0, [r3, #20]	@ 000b0388 5861
.org 0xb038a
	movs r0, #0	@ 000b038a 0020
.org 0xb038c
	strh r2, [r3, #32]	@ 000b038c 1a84
.org 0xb038e
	adds r1, r3, #0	@ 000b038e 191c
.org 0xb0390
	adds r1, #34	@ 000b0390 2231
.org 0xb0392
	strb r0, [r1, #0]	@ 000b0392 0870
.org 0xb0394
	ldrb r1, [r3, #11]	@ 000b0394 d97a
.org 0xb0396
	movs r0, #16	@ 000b0396 1020
.org 0xb0398
	orrs r0, r1	@ 000b0398 0843
.org 0xb039a
	strb r0, [r3, #11]	@ 000b039a d872
.org 0xb039c
	ldrb r0, [r3, #28]	@ 000b039c 187f
.org 0xb039e
	strb r0, [r3, #29]	@ 000b039e 5877
.org 0xb03a0
	ldr r0, [r5, #0]	@ 000b03a0 2868
.org 0xb03a2
	ldr r1, [r5, #4]	@ 000b03a2 6968
.org 0xb03a4
	str r0, [r3, #84]	@ 000b03a4 5865
.org 0xb03a6
	str r1, [r3, #88]	@ 000b03a6 9965
.org 0xb03a8
	strb r4, [r3, #16]	@ 000b03a8 1c74
.org 0xb03aa
	str r6, [r3, #40]	@ 000b03aa 9e62
.org 0xb03ac
	pop {r4, r5, r6}	@ 000b03ac 70bc
.org 0xb03ae
	pop {r0}	@ 000b03ae 01bc
.org 0xb03b0
	bx r0	@ 000b03b0 0047
