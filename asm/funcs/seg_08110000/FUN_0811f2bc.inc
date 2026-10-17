@ FUN_0811f2bc  entry 0x0811f2bc  size 190
.thumb
.org 0x11f2bc
FUN_0811f2bc:
	push {r4, r5, r6, lr}	@ 0011f2bc 70b5
.org 0x11f2be
	adds r5, r0, #0	@ 0011f2be 051c
.org 0x11f2c0
	ldr r2, [pc, #32]	@ 0011f2c0 084a
.org 0x11f2c2
	ldrh r1, [r2, #4]	@ 0011f2c2 9188
.org 0x11f2c4
	movs r0, #1	@ 0011f2c4 0120
.org 0x11f2c6
	ands r0, r1	@ 0011f2c6 0840
.org 0x11f2c8
	cmp r0, #0	@ 0011f2c8 0028
.org 0x11f2ca
	beq.n 0x11f2ec	@ 0011f2ca 0fd0
.org 0x11f2cc
	movs r0, #2	@ 0011f2cc 0220
.org 0x11f2ce
	bl 0x2b10	@ 0011f2ce e3f61ffc
.org 0x11f2d2
	ldr r1, [pc, #20]	@ 0011f2d2 0549
.org 0x11f2d4
	adds r0, r5, r1	@ 0011f2d4 6818
.org 0x11f2d6
	ldrb r1, [r0, #2]	@ 0011f2d6 8178
.org 0x11f2d8
	adds r1, #1	@ 0011f2d8 0131
.org 0x11f2da
	movs r2, #0	@ 0011f2da 0022
.org 0x11f2dc
	strb r1, [r5, #2]	@ 0011f2dc a970
.org 0x11f2de
	strb r2, [r5, #3]	@ 0011f2de ea70
.org 0x11f2e0
	strb r2, [r0, #3]	@ 0011f2e0 c270
.org 0x11f2e2
	b.n 0x11f38e	@ 0011f2e2 54e0
.org 0x11f2e4
	.byte 0x60,0x07,0x00,0x02	@ 0011f2e4 data
.org 0x11f2e8
	.byte 0xcc,0x0d,0x00,0x00	@ 0011f2e8 data
.org 0x11f2ec
	ldrh r1, [r2, #6]	@ 0011f2ec d188
.org 0x11f2ee
	movs r0, #64	@ 0011f2ee 4020
.org 0x11f2f0
	ands r0, r1	@ 0011f2f0 0840
.org 0x11f2f2
	cmp r0, #0	@ 0011f2f2 0028
.org 0x11f2f4
	beq.n 0x11f314	@ 0011f2f4 0ed0
.org 0x11f2f6
	ldr r0, [pc, #24]	@ 0011f2f6 0648
.org 0x11f2f8
	adds r4, r5, r0	@ 0011f2f8 2c18
.org 0x11f2fa
	ldrb r0, [r4, #2]	@ 0011f2fa a078
.org 0x11f2fc
	adds r0, #2	@ 0011f2fc 0230
.org 0x11f2fe
	movs r1, #3	@ 0011f2fe 0321
.org 0x11f300
	bl 0x129050	@ 0011f300 09f0a6fe
.org 0x11f304
	strb r0, [r4, #2]	@ 0011f304 a070
.org 0x11f306
	movs r0, #1	@ 0011f306 0120
.org 0x11f308
	bl 0x2b10	@ 0011f308 e3f602fc
.org 0x11f30c
	b.n 0x11f332	@ 0011f30c 11e0
.org 0x11f30e
	.byte 0x00	@ 0011f30e data
.org 0x11f30f
	.byte 0x00	@ 0011f30f data
.org 0x11f310
	.byte 0xcc,0x0d,0x00,0x00	@ 0011f310 data
.org 0x11f314
	movs r0, #128	@ 0011f314 8020
.org 0x11f316
	ands r0, r1	@ 0011f316 0840
.org 0x11f318
	cmp r0, #0	@ 0011f318 0028
.org 0x11f31a
	beq.n 0x11f332	@ 0011f31a 0ad0
.org 0x11f31c
	ldr r1, [pc, #56]	@ 0011f31c 0e49
.org 0x11f31e
	adds r4, r5, r1	@ 0011f31e 6c18
.org 0x11f320
	ldrb r0, [r4, #2]	@ 0011f320 a078
.org 0x11f322
	adds r0, #1	@ 0011f322 0130
.org 0x11f324
	movs r1, #3	@ 0011f324 0321
.org 0x11f326
	bl 0x129050	@ 0011f326 09f093fe
.org 0x11f32a
	strb r0, [r4, #2]	@ 0011f32a a070
.org 0x11f32c
	movs r0, #1	@ 0011f32c 0120
.org 0x11f32e
	bl 0x2b10	@ 0011f32e e3f6effb
.org 0x11f332
	ldr r4, [pc, #40]	@ 0011f332 0a4c
.org 0x11f334
	movs r1, #170	@ 0011f334 aa21
.org 0x11f336
	lsls r1, r1, #1	@ 0011f336 4900
.org 0x11f338
	adds r0, r4, r1	@ 0011f338 6018
.org 0x11f33a
	ldrh r0, [r0, #0]	@ 0011f33a 0088
.org 0x11f33c
	ldr r6, [pc, #32]	@ 0011f33c 084e
.org 0x11f33e
	adds r0, r0, r6	@ 0011f33e 8019
.org 0x11f340
	movs r1, #17	@ 0011f340 1121
.org 0x11f342
	movs r2, #7	@ 0011f342 0722
.org 0x11f344
	bl 0x10d85c	@ 0011f344 eef78afa
.org 0x11f348
	ldr r1, [pc, #12]	@ 0011f348 0349
.org 0x11f34a
	adds r0, r5, r1	@ 0011f34a 6818
.org 0x11f34c
	ldrb r0, [r0, #2]	@ 0011f34c 8078
.org 0x11f34e
	cmp r0, #0	@ 0011f34e 0028
.org 0x11f350
	bne.n 0x11f364	@ 0011f350 08d1
.org 0x11f352
	movs r1, #174	@ 0011f352 ae21
.org 0x11f354
	lsls r1, r1, #1	@ 0011f354 4900
.org 0x11f356
	b.n 0x11f36c	@ 0011f356 09e0
.org 0x11f358
	.byte 0xcc,0x0d,0x00,0x00	@ 0011f358 data
.org 0x11f35c
	.byte 0xf8,0xcf,0x86,0x08	@ 0011f35c data
.org 0x11f360
	.byte 0x5f,0x0e,0x01,0x09	@ 0011f360 data
.org 0x11f364
	cmp r0, #1	@ 0011f364 0128
.org 0x11f366
	bne.n 0x11f37c	@ 0011f366 09d1
.org 0x11f368
	movs r1, #175	@ 0011f368 af21
.org 0x11f36a
	lsls r1, r1, #1	@ 0011f36a 4900
.org 0x11f36c
	adds r0, r4, r1	@ 0011f36c 6018
.org 0x11f36e
	ldrh r0, [r0, #0]	@ 0011f36e 0088
.org 0x11f370
	adds r0, r0, r6	@ 0011f370 8019
.org 0x11f372
	movs r1, #1	@ 0011f372 0121
.org 0x11f374
	movs r2, #18	@ 0011f374 1222
.org 0x11f376
	bl 0x10d85c	@ 0011f376 eef771fa
