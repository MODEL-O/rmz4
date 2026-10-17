@ FUN_0805b3f8  entry 0x0805b3f8  size 120
.thumb
.org 0x5b3f8
FUN_0805b3f8:
	push {r4, lr}	@ 0005b3f8 10b5
.org 0x5b3fa
	adds r4, r0, #0	@ 0005b3fa 041c
.org 0x5b3fc
	ldrb r0, [r4, #15]	@ 0005b3fc e07b
.org 0x5b3fe
	cmp r0, #0	@ 0005b3fe 0028
.org 0x5b400
	bne.n 0x5b444	@ 0005b400 20d1
.org 0x5b402
	movs r0, #192	@ 0005b402 c020
.org 0x5b404
	bl 0x2b10	@ 0005b404 a7f784fb
.org 0x5b408
	adds r0, r4, #0	@ 0005b408 201c
.org 0x5b40a
	adds r0, #200	@ 0005b40a c830
.org 0x5b40c
	ldr r1, [r0, #0]	@ 0005b40c 0168
.org 0x5b40e
	cmp r1, #0	@ 0005b40e 0029
.org 0x5b410
	beq.n 0x5b420	@ 0005b410 06d0
.org 0x5b412
	subs r0, #9	@ 0005b412 0938
.org 0x5b414
	ldrb r0, [r0, #0]	@ 0005b414 0078
.org 0x5b416
	cmp r0, #5	@ 0005b416 0528
.org 0x5b418
	bne.n 0x5b420	@ 0005b418 02d1
.org 0x5b41a
	adds r1, #180	@ 0005b41a b431
.org 0x5b41c
	movs r0, #1	@ 0005b41c 0120
.org 0x5b41e
	strb r0, [r1, #0]	@ 0005b41e 0870
.org 0x5b420
	adds r0, r4, #0	@ 0005b420 201c
.org 0x5b422
	adds r0, #116	@ 0005b422 7430
.org 0x5b424
	ldr r1, [pc, #72]	@ 0005b424 1249
.org 0x5b426
	bl 0x5784	@ 0005b426 aaf7adf9
.org 0x5b42a
	ldr r1, [pc, #72]	@ 0005b42a 1249
.org 0x5b42c
	adds r0, r4, #0	@ 0005b42c 201c
.org 0x5b42e
	bl 0x1cf00	@ 0005b42e c1f767fd
.org 0x5b432
	adds r1, r4, #0	@ 0005b432 211c
.org 0x5b434
	adds r1, #189	@ 0005b434 bd31
.org 0x5b436
	movs r0, #1	@ 0005b436 0120
.org 0x5b438
	strb r0, [r1, #0]	@ 0005b438 0870
.org 0x5b43a
	movs r0, #48	@ 0005b43a 3020
.org 0x5b43c
	strb r0, [r4, #18]	@ 0005b43c a074
.org 0x5b43e
	ldrb r0, [r4, #15]	@ 0005b43e e07b
.org 0x5b440
	adds r0, #1	@ 0005b440 0130
.org 0x5b442
	strb r0, [r4, #15]	@ 0005b442 e073
.org 0x5b444
	adds r0, r4, #0	@ 0005b444 201c
.org 0x5b446
	bl 0x1cff0	@ 0005b446 c1f7d3fd
.org 0x5b44a
	ldrb r0, [r4, #18]	@ 0005b44a a07c
.org 0x5b44c
	cmp r0, #0	@ 0005b44c 0028
.org 0x5b44e
	beq.n 0x5b45a	@ 0005b44e 04d0
.org 0x5b450
	subs r0, #1	@ 0005b450 0138
.org 0x5b452
	strb r0, [r4, #18]	@ 0005b452 a074
.org 0x5b454
	lsls r0, r0, #24	@ 0005b454 0006
.org 0x5b456
	cmp r0, #0	@ 0005b456 0028
.org 0x5b458
	bne.n 0x5b46a	@ 0005b458 07d1
.org 0x5b45a
	adds r0, r4, #0	@ 0005b45a 201c
.org 0x5b45c
	adds r0, #115	@ 0005b45c 7330
.org 0x5b45e
	ldrb r1, [r0, #0]	@ 0005b45e 0178
.org 0x5b460
	cmp r1, #3	@ 0005b460 0329
.org 0x5b462
	bne.n 0x5b46a	@ 0005b462 02d1
.org 0x5b464
	movs r0, #0	@ 0005b464 0020
.org 0x5b466
	strb r1, [r4, #14]	@ 0005b466 a173
.org 0x5b468
	strb r0, [r4, #15]	@ 0005b468 e073
.org 0x5b46a
	pop {r4}	@ 0005b46a 10bc
.org 0x5b46c
	pop {r0}	@ 0005b46c 01bc
.org 0x5b46e
	bx r0	@ 0005b46e 0047
