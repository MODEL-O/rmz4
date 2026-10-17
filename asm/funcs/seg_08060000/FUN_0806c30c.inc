@ FUN_0806c30c  entry 0x0806c30c  size 64
.thumb
.org 0x6c30c
FUN_0806c30c:
	push {r4, lr}	@ 0006c30c 10b5
.org 0x6c30e
	adds r4, r0, #0	@ 0006c30e 041c
.org 0x6c310
	ldrb r0, [r4, #14]	@ 0006c310 a07b
.org 0x6c312
	cmp r0, #0	@ 0006c312 0028
.org 0x6c314
	bne.n 0x6c324	@ 0006c314 06d1
.org 0x6c316
	ldr r1, [pc, #52]	@ 0006c316 0d49
.org 0x6c318
	adds r0, r4, #0	@ 0006c318 201c
.org 0x6c31a
	bl 0x1cf00	@ 0006c31a b0f7f1fd
.org 0x6c31e
	ldrb r0, [r4, #14]	@ 0006c31e a07b
.org 0x6c320
	adds r0, #1	@ 0006c320 0130
.org 0x6c322
	strb r0, [r4, #14]	@ 0006c322 a073
.org 0x6c324
	adds r0, r4, #0	@ 0006c324 201c
.org 0x6c326
	bl 0x1cff0	@ 0006c326 b0f763fe
.org 0x6c32a
	adds r0, r4, #0	@ 0006c32a 201c
.org 0x6c32c
	adds r0, #217	@ 0006c32c d930
.org 0x6c32e
	ldrb r0, [r0, #0]	@ 0006c32e 0078
.org 0x6c330
	cmp r0, #0	@ 0006c330 0028
.org 0x6c332
	beq.n 0x6c346	@ 0006c332 08d0
.org 0x6c334
	adds r0, r4, #0	@ 0006c334 201c
.org 0x6c336
	adds r0, #218	@ 0006c336 da30
.org 0x6c338
	ldrb r0, [r0, #0]	@ 0006c338 0078
.org 0x6c33a
	cmp r0, #0	@ 0006c33a 0028
.org 0x6c33c
	beq.n 0x6c346	@ 0006c33c 03d0
.org 0x6c33e
	movs r1, #0	@ 0006c33e 0021
.org 0x6c340
	movs r0, #3	@ 0006c340 0320
.org 0x6c342
	strb r0, [r4, #13]	@ 0006c342 6073
.org 0x6c344
	strb r1, [r4, #14]	@ 0006c344 a173
.org 0x6c346
	pop {r4}	@ 0006c346 10bc
.org 0x6c348
	pop {r0}	@ 0006c348 01bc
.org 0x6c34a
	bx r0	@ 0006c34a 0047
