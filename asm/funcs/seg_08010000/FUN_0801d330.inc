@ FUN_0801d330  entry 0x0801d330  size 84
.thumb
.org 0x1d330
FUN_0801d330:
	push {r4, lr}	@ 0001d330 10b5
.org 0x1d332
	adds r3, r0, #0	@ 0001d332 031c
.org 0x1d334
	ldrb r1, [r3, #11]	@ 0001d334 d97a
.org 0x1d336
	movs r0, #4	@ 0001d336 0420
.org 0x1d338
	ands r0, r1	@ 0001d338 0840
.org 0x1d33a
	cmp r0, #0	@ 0001d33a 0028
.org 0x1d33c
	beq.n 0x1d34c	@ 0001d33c 06d0
.org 0x1d33e
	adds r2, r3, #0	@ 0001d33e 1a1c
.org 0x1d340
	adds r2, #34	@ 0001d340 2232
.org 0x1d342
	ldr r0, [pc, #4]	@ 0001d342 0148
.org 0x1d344
	b.n 0x1d352	@ 0001d344 05e0
.org 0x1d346
	.byte 0x00	@ 0001d346 data
.org 0x1d347
	.byte 0x00	@ 0001d347 data
.org 0x1d348
	.byte 0x40,0xdc,0x02,0x02	@ 0001d348 data
.org 0x1d34c
	adds r2, r3, #0	@ 0001d34c 1a1c
.org 0x1d34e
	adds r2, #34	@ 0001d34e 2232
.org 0x1d350
	ldr r0, [pc, #56]	@ 0001d350 0e48
.org 0x1d352
	ldrb r1, [r3, #30]	@ 0001d352 997f
.org 0x1d354
	lsls r1, r1, #1	@ 0001d354 4900
.org 0x1d356
	adds r1, r1, r0	@ 0001d356 0918
.org 0x1d358
	ldrh r0, [r1, #0]	@ 0001d358 0888
.org 0x1d35a
	ldrb r2, [r2, #0]	@ 0001d35a 1278
.org 0x1d35c
	adds r0, r0, r2	@ 0001d35c 8018
.org 0x1d35e
	lsls r0, r0, #16	@ 0001d35e 0004
.org 0x1d360
	lsrs r4, r0, #16	@ 0001d360 040c
.org 0x1d362
	movs r0, #73	@ 0001d362 4920
.org 0x1d364
	adds r0, r0, r3	@ 0001d364 c018
.org 0x1d366
	mov ip, r0	@ 0001d366 8446
.org 0x1d368
	lsls r2, r4, #4	@ 0001d368 2201
.org 0x1d36a
	ldrb r1, [r0, #0]	@ 0001d36a 0178
.org 0x1d36c
	movs r0, #15	@ 0001d36c 0f20
.org 0x1d36e
	ands r0, r1	@ 0001d36e 0840
.org 0x1d370
	orrs r0, r2	@ 0001d370 1043
.org 0x1d372
	mov r1, ip	@ 0001d372 6146
.org 0x1d374
	strb r0, [r1, #0]	@ 0001d374 0870
.org 0x1d376
	adds r0, r3, #0	@ 0001d376 181c
.org 0x1d378
	adds r0, #35	@ 0001d378 2330
.org 0x1d37a
	strb r4, [r0, #0]	@ 0001d37a 0470
.org 0x1d37c
	ldrb r1, [r3, #11]	@ 0001d37c d97a
.org 0x1d37e
	movs r0, #223	@ 0001d37e df20
.org 0x1d380
	ands r0, r1	@ 0001d380 0840
.org 0x1d382
	strb r0, [r3, #11]	@ 0001d382 d872
