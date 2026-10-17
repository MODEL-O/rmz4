@ FUN_08067330  entry 0x08067330  size 66
.thumb
.org 0x67330
FUN_08067330:
	push {r4, r5, lr}	@ 00067330 30b5
.org 0x67332
	adds r4, r0, #0	@ 00067332 041c
.org 0x67334
	ldrb r5, [r4, #14]	@ 00067334 a57b
.org 0x67336
	cmp r5, #0	@ 00067336 002d
.org 0x67338
	bne.n 0x67356	@ 00067338 0dd1
.org 0x6733a
	ldr r1, [pc, #56]	@ 0006733a 0e49
.org 0x6733c
	bl 0x1cf00	@ 0006733c b5f7e0fd
.org 0x67340
	adds r0, r4, #0	@ 00067340 201c
.org 0x67342
	adds r0, #116	@ 00067342 7430
.org 0x67344
	ldr r1, [pc, #48]	@ 00067344 0c49
.org 0x67346
	bl 0x5784	@ 00067346 9ef71dfa
.org 0x6734a
	movs r0, #16	@ 0006734a 1020
.org 0x6734c
	strb r0, [r4, #18]	@ 0006734c a074
.org 0x6734e
	strb r5, [r4, #15]	@ 0006734e e573
.org 0x67350
	ldrb r0, [r4, #14]	@ 00067350 a07b
.org 0x67352
	adds r0, #1	@ 00067352 0130
.org 0x67354
	strb r0, [r4, #14]	@ 00067354 a073
.org 0x67356
	adds r0, r4, #0	@ 00067356 201c
.org 0x67358
	bl 0x1cff0	@ 00067358 b5f74afe
.org 0x6735c
	adds r0, r4, #0	@ 0006735c 201c
.org 0x6735e
	adds r0, #115	@ 0006735e 7330
.org 0x67360
	ldrb r1, [r0, #0]	@ 00067360 0178
.org 0x67362
	cmp r1, #3	@ 00067362 0329
.org 0x67364
	bne.n 0x6736c	@ 00067364 02d1
.org 0x67366
	movs r0, #0	@ 00067366 0020
.org 0x67368
	strb r1, [r4, #13]	@ 00067368 6173
.org 0x6736a
	strb r0, [r4, #14]	@ 0006736a a073
.org 0x6736c
	pop {r4, r5}	@ 0006736c 30bc
.org 0x6736e
	pop {r0}	@ 0006736e 01bc
.org 0x67370
	bx r0	@ 00067370 0047
