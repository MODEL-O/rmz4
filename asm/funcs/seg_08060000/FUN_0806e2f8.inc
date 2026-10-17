@ FUN_0806e2f8  entry 0x0806e2f8  size 178
.thumb
.org 0x6e2f8
FUN_0806e2f8:
	push {r4, lr}	@ 0006e2f8 10b5
.org 0x6e2fa
	sub sp, #8	@ 0006e2fa 82b0
.org 0x6e2fc
	adds r4, r0, #0	@ 0006e2fc 041c
.org 0x6e2fe
	ldrb r0, [r4, #15]	@ 0006e2fe e07b
.org 0x6e300
	cmp r0, #0	@ 0006e300 0028
.org 0x6e302
	bne.n 0x6e328	@ 0006e302 11d1
.org 0x6e304
	adds r0, r4, #0	@ 0006e304 201c
.org 0x6e306
	adds r0, #116	@ 0006e306 7430
.org 0x6e308
	ldr r1, [pc, #160]	@ 0006e308 2849
.org 0x6e30a
	bl 0x5784	@ 0006e30a 97f73bfa
.org 0x6e30e
	movs r0, #143	@ 0006e30e 8f20
.org 0x6e310
	lsls r0, r0, #1	@ 0006e310 4000
.org 0x6e312
	str r0, [r4, #100]	@ 0006e312 6066
.org 0x6e314
	adds r0, r4, #0	@ 0006e314 201c
.org 0x6e316
	adds r0, #193	@ 0006e316 c130
.org 0x6e318
	ldrb r1, [r0, #0]	@ 0006e318 0178
.org 0x6e31a
	lsls r1, r1, #1	@ 0006e31a 4900
.org 0x6e31c
	movs r0, #1	@ 0006e31c 0120
.org 0x6e31e
	subs r0, r0, r1	@ 0006e31e 401a
.org 0x6e320
	str r0, [r4, #104]	@ 0006e320 a066
.org 0x6e322
	ldrb r0, [r4, #15]	@ 0006e322 e07b
.org 0x6e324
	adds r0, #1	@ 0006e324 0130
.org 0x6e326
	strb r0, [r4, #15]	@ 0006e326 e073
.org 0x6e328
	ldr r0, [r4, #100]	@ 0006e328 606e
.org 0x6e32a
	movs r1, #22	@ 0006e32a 1621
.org 0x6e32c
	bl 0x129050	@ 0006e32c baf090fe
.org 0x6e330
	cmp r0, #0	@ 0006e330 0028
.org 0x6e332
	bne.n 0x6e38c	@ 0006e332 2bd1
.org 0x6e334
	ldr r0, [pc, #120]	@ 0006e334 1e48
.org 0x6e336
	bl 0x2b10	@ 0006e336 94f7ebfb
.org 0x6e33a
	ldr r1, [pc, #120]	@ 0006e33a 1e49
.org 0x6e33c
	adds r0, r4, #0	@ 0006e33c 201c
.org 0x6e33e
	bl 0x1cf00	@ 0006e33e aef7dffd
.org 0x6e342
	ldr r0, [r4, #84]	@ 0006e342 606d
.org 0x6e344
	str r0, [sp, #0]	@ 0006e344 0090
.org 0x6e346
	ldr r0, [r4, #88]	@ 0006e346 a06d
.org 0x6e348
	str r0, [sp, #4]	@ 0006e348 0190
.org 0x6e34a
	ldr r1, [r4, #100]	@ 0006e34a 616e
.org 0x6e34c
	movs r0, #143	@ 0006e34c 8f20
.org 0x6e34e
	lsls r0, r0, #1	@ 0006e34e 4000
.org 0x6e350
	subs r3, r0, r1	@ 0006e350 431a
.org 0x6e352
	adds r0, r3, #0	@ 0006e352 181c
.org 0x6e354
	movs r1, #22	@ 0006e354 1621
.org 0x6e356
	bl 0x128fb8	@ 0006e356 baf02ffe
.org 0x6e35a
	ldr r1, [r4, #104]	@ 0006e35a a16e
.org 0x6e35c
	adds r3, r0, #0	@ 0006e35c 031c
.org 0x6e35e
	muls r3, r1	@ 0006e35e 4b43
.org 0x6e360
	adds r0, r4, #0	@ 0006e360 201c
.org 0x6e362
	adds r0, #192	@ 0006e362 c030
.org 0x6e364
	lsls r3, r3, #4	@ 0006e364 1b01
.org 0x6e366
	adds r3, #128	@ 0006e366 8033
.org 0x6e368
	ldrb r0, [r0, #0]	@ 0006e368 0078
.org 0x6e36a
	adds r3, r3, r0	@ 0006e36a 1b18
.org 0x6e36c
	lsls r3, r3, #24	@ 0006e36c 1b06
.org 0x6e36e
	lsrs r3, r3, #24	@ 0006e36e 1b0e
.org 0x6e370
	adds r0, r4, #0	@ 0006e370 201c
.org 0x6e372
	mov r1, sp	@ 0006e372 6946
.org 0x6e374
	movs r2, #0	@ 0006e374 0022
.org 0x6e376
	bl 0xbd94c	@ 0006e376 4ff0e9fa
.org 0x6e37a
	ldr r0, [r4, #84]	@ 0006e37a 606d
.org 0x6e37c
	str r0, [sp, #0]	@ 0006e37c 0090
.org 0x6e37e
	ldr r0, [r4, #88]	@ 0006e37e a06d
.org 0x6e380
	str r0, [sp, #4]	@ 0006e380 0190
.org 0x6e382
	mov r0, sp	@ 0006e382 6846
.org 0x6e384
	movs r1, #1	@ 0006e384 0121
.org 0x6e386
	movs r2, #0	@ 0006e386 0022
.org 0x6e388
	bl 0xe2064	@ 0006e388 73f06cfe
.org 0x6e38c
	adds r0, r4, #0	@ 0006e38c 201c
.org 0x6e38e
	bl 0x1cff0	@ 0006e38e aef72ffe
.org 0x6e392
	ldr r0, [r4, #100]	@ 0006e392 606e
.org 0x6e394
	subs r1, r0, #1	@ 0006e394 411e
.org 0x6e396
	str r1, [r4, #100]	@ 0006e396 6166
.org 0x6e398
	cmp r1, #0	@ 0006e398 0029
.org 0x6e39a
	bne.n 0x6e3a2	@ 0006e39a 02d1
.org 0x6e39c
	movs r0, #4	@ 0006e39c 0420
.org 0x6e39e
	strb r0, [r4, #14]	@ 0006e39e a073
.org 0x6e3a0
	strb r1, [r4, #15]	@ 0006e3a0 e173
.org 0x6e3a2
	add sp, #8	@ 0006e3a2 02b0
.org 0x6e3a4
	pop {r4}	@ 0006e3a4 10bc
.org 0x6e3a6
	pop {r0}	@ 0006e3a6 01bc
.org 0x6e3a8
	bx r0	@ 0006e3a8 0047
