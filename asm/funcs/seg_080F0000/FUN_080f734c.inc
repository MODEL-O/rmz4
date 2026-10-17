@ FUN_080f734c  entry 0x080f734c  size 100
.thumb
.org 0xf734c
FUN_080f734c:
	push {r4, r5, lr}	@ 000f734c 30b5
.org 0xf734e
	adds r4, r0, #0	@ 000f734e 041c
.org 0xf7350
	ldr r5, [r4, #40]	@ 000f7350 a56a
.org 0xf7352
	ldrb r0, [r4, #15]	@ 000f7352 e07b
.org 0xf7354
	cmp r0, #0	@ 000f7354 0028
.org 0xf7356
	bne.n 0xf7374	@ 000f7356 0dd1
.org 0xf7358
	adds r0, r4, #0	@ 000f7358 201c
.org 0xf735a
	bl 0xf7508	@ 000f735a 00f0d5f8
.org 0xf735e
	adds r1, r4, #0	@ 000f735e 211c
.org 0xf7360
	adds r1, #181	@ 000f7360 b531
.org 0xf7362
	movs r0, #1	@ 000f7362 0120
.org 0xf7364
	strb r0, [r1, #0]	@ 000f7364 0870
.org 0xf7366
	ldr r1, [pc, #60]	@ 000f7366 0f49
.org 0xf7368
	adds r0, r4, #0	@ 000f7368 201c
.org 0xf736a
	bl 0x1cf00	@ 000f736a 25f7c9fd
.org 0xf736e
	ldrb r0, [r4, #15]	@ 000f736e e07b
.org 0xf7370
	adds r0, #1	@ 000f7370 0130
.org 0xf7372
	strb r0, [r4, #15]	@ 000f7372 e073
.org 0xf7374
	adds r0, r4, #0	@ 000f7374 201c
.org 0xf7376
	bl 0x1cff0	@ 000f7376 25f73bfe
.org 0xf737a
	adds r0, r4, #0	@ 000f737a 201c
.org 0xf737c
	adds r0, #115	@ 000f737c 7330
.org 0xf737e
	ldrb r1, [r0, #0]	@ 000f737e 0178
.org 0xf7380
	cmp r1, #3	@ 000f7380 0329
.org 0xf7382
	bne.n 0xf73b4	@ 000f7382 17d1
.org 0xf7384
	cmp r5, #0	@ 000f7384 002d
.org 0xf7386
	bne.n 0xf73ac	@ 000f7386 11d1
.org 0xf7388
	ldr r1, [pc, #28]	@ 000f7388 0749
.org 0xf738a
	ldrb r0, [r4, #9]	@ 000f738a 607a
.org 0xf738c
	lsls r0, r0, #2	@ 000f738c 8000
.org 0xf738e
	adds r0, r0, r1	@ 000f738e 4018
.org 0xf7390
	movs r1, #2	@ 000f7390 0221
.org 0xf7392
	str r1, [r4, #12]	@ 000f7392 e160
.org 0xf7394
	ldr r0, [r0, #0]	@ 000f7394 0068
.org 0xf7396
	ldr r0, [r0, #8]	@ 000f7396 8068
.org 0xf7398
	str r0, [r4, #20]	@ 000f7398 6061
.org 0xf739a
	adds r0, r4, #0	@ 000f739a 201c
.org 0xf739c
	bl 0xf7408	@ 000f739c 00f034f8
.org 0xf73a0
	b.n 0xf73b4	@ 000f73a0 08e0
.org 0xf73a2
	.byte 0x00	@ 000f73a2 data
.org 0xf73a3
	.byte 0x00	@ 000f73a3 data
.org 0xf73a4
	.byte 0x03,0x64,0x00,0x00	@ 000f73a4 data
.org 0xf73a8
	.byte 0xfc,0x92,0x86,0x08	@ 000f73a8 data
.org 0xf73ac
	movs r0, #0	@ 000f73ac 0020
.org 0xf73ae
	strb r1, [r4, #13]	@ 000f73ae 6173
