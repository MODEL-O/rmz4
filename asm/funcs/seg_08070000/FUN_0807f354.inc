@ FUN_0807f354  entry 0x0807f354  size 74
.thumb
.org 0x7f354
FUN_0807f354:
	push {r4, lr}	@ 0007f354 10b5
.org 0x7f356
	adds r4, r0, #0	@ 0007f356 041c
.org 0x7f358
	ldrb r0, [r4, #14]	@ 0007f358 a07b
.org 0x7f35a
	cmp r0, #0	@ 0007f35a 0028
.org 0x7f35c
	bne.n 0x7f37c	@ 0007f35c 0ed1
.org 0x7f35e
	movs r1, #200	@ 0007f35e c821
.org 0x7f360
	lsls r1, r1, #8	@ 0007f360 0902
.org 0x7f362
	adds r0, r4, #0	@ 0007f362 201c
.org 0x7f364
	bl 0x1cf00	@ 0007f364 9df7ccfd
.org 0x7f368
	adds r0, r4, #0	@ 0007f368 201c
.org 0x7f36a
	adds r0, #116	@ 0007f36a 7430
.org 0x7f36c
	ldr r1, [pc, #48]	@ 0007f36c 0c49
.org 0x7f36e
	bl 0x5784	@ 0007f36e 86f709fa
.org 0x7f372
	movs r0, #16	@ 0007f372 1020
.org 0x7f374
	strb r0, [r4, #18]	@ 0007f374 a074
.org 0x7f376
	ldrb r0, [r4, #14]	@ 0007f376 a07b
.org 0x7f378
	adds r0, #1	@ 0007f378 0130
.org 0x7f37a
	strb r0, [r4, #14]	@ 0007f37a a073
.org 0x7f37c
	adds r0, r4, #0	@ 0007f37c 201c
.org 0x7f37e
	bl 0x1cff0	@ 0007f37e 9df737fe
.org 0x7f382
	ldrb r0, [r4, #18]	@ 0007f382 a07c
.org 0x7f384
	subs r0, #1	@ 0007f384 0138
.org 0x7f386
	strb r0, [r4, #18]	@ 0007f386 a074
.org 0x7f388
	lsls r0, r0, #24	@ 0007f388 0006
.org 0x7f38a
	lsrs r0, r0, #24	@ 0007f38a 000e
.org 0x7f38c
	cmp r0, #255	@ 0007f38c ff28
.org 0x7f38e
	bne.n 0x7f398	@ 0007f38e 03d1
.org 0x7f390
	movs r0, #2	@ 0007f390 0220
.org 0x7f392
	strb r0, [r4, #13]	@ 0007f392 6073
.org 0x7f394
	movs r0, #0	@ 0007f394 0020
.org 0x7f396
	strb r0, [r4, #14]	@ 0007f396 a073
.org 0x7f398
	pop {r4}	@ 0007f398 10bc
.org 0x7f39a
	pop {r0}	@ 0007f39a 01bc
.org 0x7f39c
	bx r0	@ 0007f39c 0047
