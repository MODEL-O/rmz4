@ FUN_081003c8  entry 0x081003c8  size 200
.thumb
.org 0x1003c8
FUN_081003c8:
	push {r4, r5, r6, r7, lr}	@ 001003c8 f0b5
.org 0x1003ca
	adds r5, r0, #0	@ 001003ca 051c
.org 0x1003cc
	bl 0x1cc9c	@ 001003cc 1cf766fc
.org 0x1003d0
	ldrb r1, [r5, #10]	@ 001003d0 a97a
.org 0x1003d2
	movs r0, #1	@ 001003d2 0120
.org 0x1003d4
	orrs r0, r1	@ 001003d4 0843
.org 0x1003d6
	movs r1, #2	@ 001003d6 0221
.org 0x1003d8
	orrs r0, r1	@ 001003d8 0843
.org 0x1003da
	movs r4, #0	@ 001003da 0024
.org 0x1003dc
	movs r1, #239	@ 001003dc ef21
.org 0x1003de
	ands r0, r1	@ 001003de 0840
.org 0x1003e0
	movs r7, #0	@ 001003e0 0027
.org 0x1003e2
	strb r0, [r5, #10]	@ 001003e2 a872
.org 0x1003e4
	movs r2, #1	@ 001003e4 0122
.org 0x1003e6
	adds r0, r5, #0	@ 001003e6 281c
.org 0x1003e8
	adds r0, #76	@ 001003e8 4c30
.org 0x1003ea
	strb r7, [r0, #0]	@ 001003ea 0770
.org 0x1003ec
	adds r3, r5, #0	@ 001003ec 2b1c
.org 0x1003ee
	adds r3, #74	@ 001003ee 4a33
.org 0x1003f0
	ldrb r1, [r3, #0]	@ 001003f0 1978
.org 0x1003f2
	movs r0, #17	@ 001003f2 1120
.org 0x1003f4
	negs r0, r0	@ 001003f4 4042
.org 0x1003f6
	ands r0, r1	@ 001003f6 0840
.org 0x1003f8
	strb r0, [r3, #0]	@ 001003f8 1870
.org 0x1003fa
	ldr r1, [pc, #88]	@ 001003fa 1649
.org 0x1003fc
	ldrb r0, [r5, #9]	@ 001003fc 687a
.org 0x1003fe
	lsls r0, r0, #2	@ 001003fe 8000
.org 0x100400
	adds r0, r0, r1	@ 00100400 4018
.org 0x100402
	str r2, [r5, #12]	@ 00100402 ea60
.org 0x100404
	ldr r0, [r0, #0]	@ 00100404 0068
.org 0x100406
	ldr r0, [r0, #4]	@ 00100406 4068
.org 0x100408
	str r0, [r5, #20]	@ 00100408 6861
.org 0x10040a
	ldr r0, [pc, #76]	@ 0010040a 1348
.org 0x10040c
	ldr r1, [pc, #76]	@ 0010040c 1349
.org 0x10040e
	adds r0, r0, r1	@ 0010040e 4018
.org 0x100410
	ldrb r0, [r0, #0]	@ 00100410 0078
.org 0x100412
	adds r1, r5, #0	@ 00100412 291c
.org 0x100414
	adds r1, #181	@ 00100414 b531
.org 0x100416
	strb r0, [r1, #0]	@ 00100416 0870
.org 0x100418
	adds r6, r5, #0	@ 00100418 2e1c
.org 0x10041a
	adds r6, #180	@ 0010041a b436
.org 0x10041c
	strb r7, [r6, #0]	@ 0010041c 3770
.org 0x10041e
	ldrb r0, [r1, #0]	@ 0010041e 0878
.org 0x100420
	cmp r0, #0	@ 00100420 0028
.org 0x100422
	bne.n 0x100464	@ 00100422 1fd1
.org 0x100424
	strb r7, [r5, #18]	@ 00100424 af74
.org 0x100426
	ldrb r0, [r5, #10]	@ 00100426 a87a
.org 0x100428
	movs r1, #4	@ 00100428 0421
.org 0x10042a
	orrs r0, r1	@ 0010042a 0843
.org 0x10042c
	strb r0, [r5, #10]	@ 0010042c a872
.org 0x10042e
	adds r4, r5, #0	@ 0010042e 2c1c
.org 0x100430
	adds r4, #116	@ 00100430 7434
.org 0x100432
	ldrb r0, [r6, #0]	@ 00100432 3078
.org 0x100434
	lsls r1, r0, #5	@ 00100434 4101
.org 0x100436
	adds r1, r1, r0	@ 00100436 0918
.org 0x100438
	lsls r1, r1, #3	@ 00100438 c900
.org 0x10043a
	ldr r0, [pc, #36]	@ 0010043a 0948
.org 0x10043c
	adds r1, r1, r0	@ 0010043c 0918
.org 0x10043e
	adds r2, r5, #0	@ 0010043e 2a1c
.org 0x100440
	adds r2, #84	@ 00100440 5432
.org 0x100442
	adds r0, r4, #0	@ 00100442 201c
.org 0x100444
	movs r3, #255	@ 00100444 ff23
.org 0x100446
	bl 0x5760	@ 00100446 05f78bf9
.org 0x10044a
	str r5, [r4, #44]	@ 0010044a e562
.org 0x10044c
	str r7, [r4, #36]	@ 0010044c 6762
.org 0x10044e
	strb r7, [r5, #13]	@ 0010044e 6f73
.org 0x100450
	strb r7, [r5, #14]	@ 00100450 af73
.org 0x100452
	b.n 0x100494	@ 00100452 1fe0
.org 0x100454
	.byte 0xfc,0x92,0x86,0x08	@ 00100454 data
.org 0x100458
	.byte 0xb0,0x0a,0x00,0x02	@ 00100458 data
.org 0x10045c
	.byte 0x31,0xd0,0x02,0x00	@ 0010045c data
.org 0x100460
	.byte 0x10,0xb8,0x86,0x08	@ 00100460 data
.org 0x100464
	adds r0, r5, #0	@ 00100464 281c
.org 0x100466
	bl 0x100654	@ 00100466 00f0f5f8
.org 0x10046a
	ldrb r0, [r5, #10]	@ 0010046a a87a
.org 0x10046c
	movs r1, #4	@ 0010046c 0421
.org 0x10046e
	orrs r0, r1	@ 0010046e 0843
.org 0x100470
	strb r0, [r5, #10]	@ 00100470 a872
.org 0x100472
	adds r4, r5, #0	@ 00100472 2c1c
.org 0x100474
	adds r4, #116	@ 00100474 7434
.org 0x100476
	ldrb r0, [r6, #0]	@ 00100476 3078
.org 0x100478
	lsls r1, r0, #5	@ 00100478 4101
.org 0x10047a
	adds r1, r1, r0	@ 0010047a 0918
.org 0x10047c
	lsls r1, r1, #3	@ 0010047c c900
.org 0x10047e
	ldr r0, [pc, #32]	@ 0010047e 0848
.org 0x100480
	adds r1, r1, r0	@ 00100480 0918
.org 0x100482
	adds r2, r5, #0	@ 00100482 2a1c
.org 0x100484
	adds r2, #84	@ 00100484 5432
.org 0x100486
	adds r0, r4, #0	@ 00100486 201c
.org 0x100488
	movs r3, #255	@ 00100488 ff23
.org 0x10048a
	bl 0x5760	@ 0010048a 05f769f9
.org 0x10048e
	str r5, [r4, #44]	@ 0010048e e562
