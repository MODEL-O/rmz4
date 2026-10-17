@ FUN_0810532c  entry 0x0810532c  size 144
.thumb
.org 0x10532c
FUN_0810532c:
	push {r4, lr}	@ 0010532c 10b5
.org 0x10532e
	adds r4, r0, #0	@ 0010532e 041c
.org 0x105330
	adds r0, #180	@ 00105330 b430
.org 0x105332
	ldrb r0, [r0, #0]	@ 00105332 0078
.org 0x105334
	cmp r0, #1	@ 00105334 0128
.org 0x105336
	bne.n 0x10539c	@ 00105336 31d1
.org 0x105338
	ldrb r0, [r4, #17]	@ 00105338 607c
.org 0x10533a
	cmp r0, #4	@ 0010533a 0428
.org 0x10533c
	beq.n 0x10539c	@ 0010533c 2ed0
.org 0x10533e
	ldr r1, [r4, #40]	@ 0010533e a16a
.org 0x105340
	ldr r0, [pc, #40]	@ 00105340 0a48
.org 0x105342
	adds r1, r1, r0	@ 00105342 0918
.org 0x105344
	ldr r2, [pc, #40]	@ 00105344 0a4a
.org 0x105346
	ldrb r0, [r4, #17]	@ 00105346 607c
.org 0x105348
	adds r0, r0, r2	@ 00105348 8018
.org 0x10534a
	ldrb r3, [r0, #0]	@ 0010534a 0378
.org 0x10534c
	ldr r2, [r1, #40]	@ 0010534c 8a6a
.org 0x10534e
	movs r0, #6	@ 0010534e 0620
.org 0x105350
	subs r0, r0, r2	@ 00105350 801a
.org 0x105352
	adds r2, r3, #0	@ 00105352 1a1c
.org 0x105354
	muls r2, r0	@ 00105354 4243
.org 0x105356
	ldr r0, [r1, #8]	@ 00105356 8868
.org 0x105358
	adds r0, r0, r2	@ 00105358 8018
.org 0x10535a
	str r0, [r1, #8]	@ 0010535a 8860
.org 0x10535c
	ldrb r0, [r4, #17]	@ 0010535c 607c
.org 0x10535e
	cmp r0, #1	@ 0010535e 0128
.org 0x105360
	bhi.n 0x105374	@ 00105360 08d8
.org 0x105362
	movs r0, #32	@ 00105362 2020
.org 0x105364
	bl 0x2b10	@ 00105364 fdf6d4fb
.org 0x105368
	b.n 0x105388	@ 00105368 0ee0
.org 0x10536a
	.byte 0x00	@ 0010536a data
.org 0x10536b
	.byte 0x00	@ 0010536b data
.org 0x10536c
	.byte 0xcc,0x0d,0x00,0x00	@ 0010536c data
.org 0x105370
	.byte 0x02,0xc2,0x86,0x08	@ 00105370 data
.org 0x105374
	cmp r0, #2	@ 00105374 0228
.org 0x105376
	bne.n 0x105382	@ 00105376 04d1
.org 0x105378
	movs r0, #210	@ 00105378 d220
.org 0x10537a
	lsls r0, r0, #1	@ 0010537a 4000
.org 0x10537c
	bl 0x2b10	@ 0010537c fdf6c8fb
.org 0x105380
	b.n 0x105388	@ 00105380 02e0
.org 0x105382
	movs r0, #6	@ 00105382 0620
.org 0x105384
	bl 0x2b10	@ 00105384 fdf6c4fb
.org 0x105388
	ldr r1, [r4, #40]	@ 00105388 a16a
.org 0x10538a
	ldr r0, [pc, #60]	@ 0010538a 0f48
.org 0x10538c
	adds r1, r1, r0	@ 0010538c 0918
.org 0x10538e
	movs r0, #1	@ 0010538e 0120
.org 0x105390
	str r0, [r1, #44]	@ 00105390 c862
.org 0x105392
	movs r0, #30	@ 00105392 1e20
.org 0x105394
	str r0, [r1, #48]	@ 00105394 0863
.org 0x105396
	ldr r0, [r1, #40]	@ 00105396 886a
.org 0x105398
	subs r0, #1	@ 00105398 0138
.org 0x10539a
	str r0, [r1, #40]	@ 0010539a 8862
.org 0x10539c
	ldr r2, [r4, #40]	@ 0010539c a26a
.org 0x10539e
	ldr r0, [pc, #40]	@ 0010539e 0a48
.org 0x1053a0
	adds r2, r2, r0	@ 001053a0 1218
.org 0x1053a2
	movs r1, #1	@ 001053a2 0121
.org 0x1053a4
	ldrb r0, [r4, #16]	@ 001053a4 207c
.org 0x1053a6
	lsls r1, r0	@ 001053a6 8140
.org 0x1053a8
	ldr r0, [r2, #36]	@ 001053a8 506a
.org 0x1053aa
	bics r0, r1	@ 001053aa 8843
.org 0x1053ac
	str r0, [r2, #36]	@ 001053ac 5062
.org 0x1053ae
	ldr r1, [pc, #28]	@ 001053ae 0749
.org 0x1053b0
	ldrb r0, [r4, #9]	@ 001053b0 607a
.org 0x1053b2
	lsls r0, r0, #2	@ 001053b2 8000
.org 0x1053b4
	adds r0, r0, r1	@ 001053b4 4018
.org 0x1053b6
	movs r1, #4	@ 001053b6 0421
.org 0x1053b8
	str r1, [r4, #12]	@ 001053b8 e160
.org 0x1053ba
	ldr r0, [r0, #0]	@ 001053ba 0068
