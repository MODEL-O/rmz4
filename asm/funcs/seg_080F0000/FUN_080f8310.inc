@ FUN_080f8310  entry 0x080f8310  size 212
.thumb
.org 0xf8310
FUN_080f8310:
	push {r4, r5, r6, r7, lr}	@ 000f8310 f0b5
.org 0xf8312
	mov r7, r8	@ 000f8312 4746
.org 0xf8314
	push {r7}	@ 000f8314 80b4
.org 0xf8316
	adds r6, r0, #0	@ 000f8316 061c
.org 0xf8318
	ldrb r0, [r6, #17]	@ 000f8318 707c
.org 0xf831a
	ldr r1, [pc, #40]	@ 000f831a 0a49
.org 0xf831c
	mov r8, r1	@ 000f831c 8846
.org 0xf831e
	cmp r0, #0	@ 000f831e 0028
.org 0xf8320
	bne.n 0xf8328	@ 000f8320 02d1
.org 0xf8322
	movs r0, #1	@ 000f8322 0120
.org 0xf8324
	negs r0, r0	@ 000f8324 4042
.org 0xf8326
	add r8, r0	@ 000f8326 8044
.org 0xf8328
	mov r1, r8	@ 000f8328 4146
.org 0xf832a
	ldrb r5, [r1, #0]	@ 000f832a 0d78
.org 0xf832c
	adds r0, r5, #0	@ 000f832c 281c
.org 0xf832e
	movs r1, #3	@ 000f832e 0321
.org 0xf8330
	bl 0x129198	@ 000f8330 30f032ff
.org 0xf8334
	lsls r0, r0, #24	@ 000f8334 0006
.org 0xf8336
	lsrs r0, r0, #24	@ 000f8336 000e
.org 0xf8338
	cmp r0, #1	@ 000f8338 0128
.org 0xf833a
	beq.n 0xf8348	@ 000f833a 05d0
.org 0xf833c
	cmp r0, #2	@ 000f833c 0228
.org 0xf833e
	beq.n 0xf8390	@ 000f833e 27d0
.org 0xf8340
	b.n 0xf83e4	@ 000f8340 50e0
.org 0xf8342
	.byte 0x00	@ 000f8342 data
.org 0xf8343
	.byte 0x00	@ 000f8343 data
.org 0xf8344
	.byte 0xf1,0xda,0x02,0x02	@ 000f8344 data
.org 0xf8348
	adds r7, r6, #0	@ 000f8348 371c
.org 0xf834a
	adds r7, #181	@ 000f834a b537
.org 0xf834c
	ldrb r0, [r7, #0]	@ 000f834c 3878
.org 0xf834e
	cmp r0, #0	@ 000f834e 0028
.org 0xf8350
	bne.n 0xf835a	@ 000f8350 03d1
.org 0xf8352
	movs r0, #117	@ 000f8352 7520
.org 0xf8354
	strb r0, [r7, #0]	@ 000f8354 3870
.org 0xf8356
	bl 0x2b10	@ 000f8356 0af7dbfb
.org 0xf835a
	ldr r4, [r6, #88]	@ 000f835a b46d
.org 0xf835c
	ldr r0, [pc, #40]	@ 000f835c 0a48
.org 0xf835e
	adds r4, r4, r0	@ 000f835e 2418
.org 0xf8360
	str r4, [r6, #88]	@ 000f8360 b465
.org 0xf8362
	adds r0, r5, #0	@ 000f8362 281c
.org 0xf8364
	movs r1, #3	@ 000f8364 0321
.org 0xf8366
	bl 0x129120	@ 000f8366 30f0dbfe
.org 0xf836a
	lsls r0, r0, #24	@ 000f836a 0006
.org 0xf836c
	lsrs r5, r0, #24	@ 000f836c 050e
.org 0xf836e
	ldr r2, [pc, #28]	@ 000f836e 074a
.org 0xf8370
	ldrb r1, [r6, #17]	@ 000f8370 717c
.org 0xf8372
	lsls r0, r1, #2	@ 000f8372 8800
.org 0xf8374
	adds r0, r0, r1	@ 000f8374 4018
.org 0xf8376
	adds r0, r0, r5	@ 000f8376 4019
.org 0xf8378
	lsls r0, r0, #3	@ 000f8378 c000
.org 0xf837a
	adds r2, #4	@ 000f837a 0432
.org 0xf837c
	adds r0, r0, r2	@ 000f837c 8018
.org 0xf837e
	ldr r0, [r0, #0]	@ 000f837e 0068
.org 0xf8380
	cmp r4, r0	@ 000f8380 8442
.org 0xf8382
	bge.n 0xf83e4	@ 000f8382 2fda
.org 0xf8384
	b.n 0xf83d0	@ 000f8384 24e0
.org 0xf8386
	.byte 0x00	@ 000f8386 data
.org 0xf8387
	.byte 0x00	@ 000f8387 data
.org 0xf8388
	.byte 0x00,0xff,0xff,0xff	@ 000f8388 data
.org 0xf838c
	.byte 0x60,0xa3,0x86,0x08	@ 000f838c data
.org 0xf8390
	adds r7, r6, #0	@ 000f8390 371c
.org 0xf8392
	adds r7, #181	@ 000f8392 b537
.org 0xf8394
	ldrb r0, [r7, #0]	@ 000f8394 3878
.org 0xf8396
	cmp r0, #0	@ 000f8396 0028
.org 0xf8398
	bne.n 0xf83a2	@ 000f8398 03d1
.org 0xf839a
	movs r0, #117	@ 000f839a 7520
.org 0xf839c
	strb r0, [r7, #0]	@ 000f839c 3870
.org 0xf839e
	bl 0x2b10	@ 000f839e 0af7b7fb
.org 0xf83a2
	ldr r4, [r6, #88]	@ 000f83a2 b46d
.org 0xf83a4
	movs r0, #128	@ 000f83a4 8020
.org 0xf83a6
	lsls r0, r0, #1	@ 000f83a6 4000
.org 0xf83a8
	adds r4, r4, r0	@ 000f83a8 2418
.org 0xf83aa
	str r4, [r6, #88]	@ 000f83aa b465
.org 0xf83ac
	adds r0, r5, #0	@ 000f83ac 281c
.org 0xf83ae
	movs r1, #3	@ 000f83ae 0321
.org 0xf83b0
	bl 0x129120	@ 000f83b0 30f0b6fe
.org 0xf83b4
	adds r0, #1	@ 000f83b4 0130
.org 0xf83b6
	lsls r0, r0, #24	@ 000f83b6 0006
.org 0xf83b8
	lsrs r5, r0, #24	@ 000f83b8 050e
.org 0xf83ba
	ldr r2, [pc, #56]	@ 000f83ba 0e4a
.org 0xf83bc
	ldrb r1, [r6, #17]	@ 000f83bc 717c
.org 0xf83be
	lsls r0, r1, #2	@ 000f83be 8800
.org 0xf83c0
	adds r0, r0, r1	@ 000f83c0 4018
.org 0xf83c2
	adds r0, r0, r5	@ 000f83c2 4019
.org 0xf83c4
	lsls r0, r0, #3	@ 000f83c4 c000
.org 0xf83c6
	adds r2, #4	@ 000f83c6 0432
.org 0xf83c8
	adds r0, r0, r2	@ 000f83c8 8018
.org 0xf83ca
	ldr r0, [r0, #0]	@ 000f83ca 0068
.org 0xf83cc
	cmp r4, r0	@ 000f83cc 8442
.org 0xf83ce
	ble.n 0xf83e4	@ 000f83ce 09dd
.org 0xf83d0
	str r0, [r6, #88]	@ 000f83d0 b065
.org 0xf83d2
	lsls r0, r5, #1	@ 000f83d2 6800
.org 0xf83d4
	adds r0, r0, r5	@ 000f83d4 4019
.org 0xf83d6
	mov r1, r8	@ 000f83d6 4146
.org 0xf83d8
	strb r0, [r1, #0]	@ 000f83d8 0870
.org 0xf83da
	ldr r0, [pc, #28]	@ 000f83da 0748
.org 0xf83dc
	bl 0x2b10	@ 000f83dc 0af798fb
.org 0xf83e0
	movs r0, #0	@ 000f83e0 0020
.org 0xf83e2
	strb r0, [r7, #0]	@ 000f83e2 3870
