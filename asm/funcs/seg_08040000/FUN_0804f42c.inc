@ FUN_0804f42c  entry 0x0804f42c  size 106
.thumb
.org 0x4f42c
FUN_0804f42c:
	push {r4, r5, r6, lr}	@ 0004f42c 70b5
.org 0x4f42e
	adds r4, r0, #0	@ 0004f42e 041c
.org 0x4f430
	bl 0x1cc9c	@ 0004f430 cdf734fc
.org 0x4f434
	adds r0, r4, #0	@ 0004f434 201c
.org 0x4f436
	bl 0x1ceec	@ 0004f436 cdf759fd
.org 0x4f43a
	ldrb r1, [r4, #10]	@ 0004f43a a17a
.org 0x4f43c
	movs r0, #1	@ 0004f43c 0120
.org 0x4f43e
	movs r6, #0	@ 0004f43e 0026
.org 0x4f440
	orrs r0, r1	@ 0004f440 0843
.org 0x4f442
	movs r1, #2	@ 0004f442 0221
.org 0x4f444
	orrs r0, r1	@ 0004f444 0843
.org 0x4f446
	strb r0, [r4, #10]	@ 0004f446 a072
.org 0x4f448
	ldr r1, [pc, #76]	@ 0004f448 1349
.org 0x4f44a
	adds r0, r4, #0	@ 0004f44a 201c
.org 0x4f44c
	bl 0x1cf00	@ 0004f44c cdf758fd
.org 0x4f450
	ldrb r1, [r4, #10]	@ 0004f450 a17a
.org 0x4f452
	movs r0, #4	@ 0004f452 0420
.org 0x4f454
	orrs r0, r1	@ 0004f454 0843
.org 0x4f456
	strb r0, [r4, #10]	@ 0004f456 a072
.org 0x4f458
	adds r5, r4, #0	@ 0004f458 251c
.org 0x4f45a
	adds r5, #116	@ 0004f45a 7435
.org 0x4f45c
	ldr r1, [pc, #60]	@ 0004f45c 0f49
.org 0x4f45e
	adds r2, r4, #0	@ 0004f45e 221c
.org 0x4f460
	adds r2, #84	@ 0004f460 5432
.org 0x4f462
	adds r0, r5, #0	@ 0004f462 281c
.org 0x4f464
	movs r3, #8	@ 0004f464 0823
.org 0x4f466
	bl 0x5760	@ 0004f466 b6f77bf9
.org 0x4f46a
	str r4, [r5, #44]	@ 0004f46a ec62
.org 0x4f46c
	ldr r0, [pc, #48]	@ 0004f46c 0c48
.org 0x4f46e
	str r0, [r5, #36]	@ 0004f46e 6862
.org 0x4f470
	strb r6, [r4, #18]	@ 0004f470 a674
.org 0x4f472
	movs r0, #69	@ 0004f472 4520
.org 0x4f474
	bl 0x2b10	@ 0004f474 b3f74cfb
.org 0x4f478
	ldr r1, [pc, #40]	@ 0004f478 0a49
.org 0x4f47a
	ldrb r0, [r4, #9]	@ 0004f47a 607a
.org 0x4f47c
	lsls r0, r0, #2	@ 0004f47c 8000
.org 0x4f47e
	adds r0, r0, r1	@ 0004f47e 4018
.org 0x4f480
	movs r1, #1	@ 0004f480 0121
.org 0x4f482
	str r1, [r4, #12]	@ 0004f482 e160
.org 0x4f484
	ldr r0, [r0, #0]	@ 0004f484 0068
.org 0x4f486
	ldr r0, [r0, #4]	@ 0004f486 4068
.org 0x4f488
	str r0, [r4, #20]	@ 0004f488 6061
.org 0x4f48a
	adds r0, r4, #0	@ 0004f48a 201c
.org 0x4f48c
	bl 0x4f4a8	@ 0004f48c 00f00cf8
.org 0x4f490
	pop {r4, r5, r6}	@ 0004f490 70bc
.org 0x4f492
	pop {r0}	@ 0004f492 01bc
.org 0x4f494
	bx r0	@ 0004f494 0047
