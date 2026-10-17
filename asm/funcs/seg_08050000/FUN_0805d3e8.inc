@ FUN_0805d3e8  entry 0x0805d3e8  size 334
.thumb
.org 0x5d3e8
FUN_0805d3e8:
	push {r4, r5, r6, r7, lr}	@ 0005d3e8 f0b5
.org 0x5d3ea
	mov r7, r9	@ 0005d3ea 4f46
.org 0x5d3ec
	mov r6, r8	@ 0005d3ec 4646
.org 0x5d3ee
	push {r6, r7}	@ 0005d3ee c0b4
.org 0x5d3f0
	sub sp, #16	@ 0005d3f0 84b0
.org 0x5d3f2
	adds r5, r0, #0	@ 0005d3f2 051c
.org 0x5d3f4
	ldr r1, [pc, #256]	@ 0005d3f4 4049
.org 0x5d3f6
	mov r0, sp	@ 0005d3f6 6846
.org 0x5d3f8
	movs r2, #6	@ 0005d3f8 0622
.org 0x5d3fa
	bl 0x129258	@ 0005d3fa cbf02dff
.org 0x5d3fe
	ldr r0, [pc, #252]	@ 0005d3fe 3f48
.org 0x5d400
	ldr r1, [r0, #0]	@ 0005d400 0168
.org 0x5d402
	ldr r2, [r0, #4]	@ 0005d402 4268
.org 0x5d404
	str r1, [sp, #8]	@ 0005d404 0291
.org 0x5d406
	str r2, [sp, #12]	@ 0005d406 0392
.org 0x5d408
	ldrb r1, [r5, #16]	@ 0005d408 297c
.org 0x5d40a
	ldrb r0, [r5, #10]	@ 0005d40a a87a
.org 0x5d40c
	lsrs r7, r0, #4	@ 0005d40c 0709
.org 0x5d40e
	movs r2, #1	@ 0005d40e 0122
.org 0x5d410
	mov r9, r2	@ 0005d410 9146
.org 0x5d412
	ands r7, r2	@ 0005d412 1740
.org 0x5d414
	ldr r0, [pc, #232]	@ 0005d414 3a48
.org 0x5d416
	ldr r6, [r0, #0]	@ 0005d416 0668
.org 0x5d418
	ldrb r0, [r5, #15]	@ 0005d418 e87b
.org 0x5d41a
	cmp r0, #0	@ 0005d41a 0028
.org 0x5d41c
	bne.n 0x5d436	@ 0005d41c 0bd1
.org 0x5d41e
	lsls r0, r1, #1	@ 0005d41e 4800
.org 0x5d420
	add r0, sp	@ 0005d420 6844
.org 0x5d422
	ldrb r1, [r0, #0]	@ 0005d422 0178
.org 0x5d424
	adds r0, r5, #0	@ 0005d424 281c
.org 0x5d426
	bl 0x5ee6c	@ 0005d426 01f021fd
.org 0x5d42a
	movs r0, #192	@ 0005d42a c020
.org 0x5d42c
	lsls r0, r0, #3	@ 0005d42c c000
.org 0x5d42e
	str r0, [r5, #96]	@ 0005d42e 2866
.org 0x5d430
	ldrb r0, [r5, #15]	@ 0005d430 e87b
.org 0x5d432
	adds r0, #1	@ 0005d432 0130
.org 0x5d434
	strb r0, [r5, #15]	@ 0005d434 e873
.org 0x5d436
	adds r0, r5, #0	@ 0005d436 281c
.org 0x5d438
	bl 0x1cff0	@ 0005d438 bff7dafd
.org 0x5d43c
	adds r0, r5, #0	@ 0005d43c 281c
.org 0x5d43e
	adds r0, #116	@ 0005d43e 7430
.org 0x5d440
	ldr r4, [pc, #192]	@ 0005d440 304c
.org 0x5d442
	ldr r3, [pc, #196]	@ 0005d442 314b
.org 0x5d444
	adds r1, r5, #0	@ 0005d444 291c
.org 0x5d446
	adds r1, #184	@ 0005d446 b831
.org 0x5d448
	ldrb r2, [r1, #0]	@ 0005d448 0a78
.org 0x5d44a
	lsls r1, r2, #1	@ 0005d44a 5100
.org 0x5d44c
	adds r1, r1, r3	@ 0005d44c c918
.org 0x5d44e
	ldrh r1, [r1, #0]	@ 0005d44e 0988
.org 0x5d450
	lsls r1, r1, #2	@ 0005d450 8900
.org 0x5d452
	adds r1, r1, r4	@ 0005d452 0919
.org 0x5d454
	adds r3, r5, #0	@ 0005d454 2b1c
.org 0x5d456
	adds r3, #113	@ 0005d456 7133
.org 0x5d458
	movs r4, #0	@ 0005d458 0024
.org 0x5d45a
	ldrsb r4, [r3, r4]	@ 0005d45a 1c57
.org 0x5d45c
	ldr r1, [r1, #0]	@ 0005d45c 0968
.org 0x5d45e
	lsls r3, r4, #2	@ 0005d45e a300
.org 0x5d460
	adds r3, r3, r1	@ 0005d460 5b18
.org 0x5d462
	ldr r1, [pc, #168]	@ 0005d462 2a49
.org 0x5d464
	lsls r2, r2, #2	@ 0005d464 9200
.org 0x5d466
	adds r2, r2, r1	@ 0005d466 5218
.org 0x5d468
	ldr r1, [r2, #0]	@ 0005d468 1168
.org 0x5d46a
	adds r1, r1, r4	@ 0005d46a 0919
.org 0x5d46c
	ldrb r1, [r1, #0]	@ 0005d46c 0978
.org 0x5d46e
	lsls r2, r1, #1	@ 0005d46e 4a00
.org 0x5d470
	adds r2, r2, r1	@ 0005d470 5218
.org 0x5d472
	lsls r2, r2, #3	@ 0005d472 d200
.org 0x5d474
	ldr r1, [r3, #0]	@ 0005d474 1968
.org 0x5d476
	adds r1, r1, r2	@ 0005d476 8918
.org 0x5d478
	bl 0x5784	@ 0005d478 a8f784f9
.org 0x5d47c
	ldr r0, [r5, #88]	@ 0005d47c a86d
.org 0x5d47e
	ldr r1, [r5, #96]	@ 0005d47e 296e
.org 0x5d480
	adds r0, r0, r1	@ 0005d480 4018
.org 0x5d482
	str r0, [r5, #88]	@ 0005d482 a865
.org 0x5d484
	cmp r6, #0	@ 0005d484 002e
.org 0x5d486
	beq.n 0x5d540	@ 0005d486 5bd0
.org 0x5d488
	adds r0, r5, #0	@ 0005d488 281c
.org 0x5d48a
	adds r0, #140	@ 0005d48a 8c30
.org 0x5d48c
	ldr r0, [r0, #0]	@ 0005d48c 0068
.org 0x5d48e
	movs r1, #128	@ 0005d48e 8021
.org 0x5d490
	lsls r1, r1, #4	@ 0005d490 0901
.org 0x5d492
	ands r0, r1	@ 0005d492 0840
.org 0x5d494
	cmp r0, #0	@ 0005d494 0028
.org 0x5d496
	beq.n 0x5d540	@ 0005d496 53d0
.org 0x5d498
	ldr r1, [pc, #116]	@ 0005d498 1d49
.org 0x5d49a
	adds r0, r6, r1	@ 0005d49a 7018
.org 0x5d49c
	movs r2, #0	@ 0005d49c 0022
.org 0x5d49e
	mov r8, r2	@ 0005d49e 9046
.org 0x5d4a0
	mov r1, r9	@ 0005d4a0 4946
.org 0x5d4a2
	strb r1, [r0, #0]	@ 0005d4a2 0170
.org 0x5d4a4
	movs r2, #185	@ 0005d4a4 b922
.org 0x5d4a6
	lsls r2, r2, #1	@ 0005d4a6 5200
.org 0x5d4a8
	adds r0, r6, r2	@ 0005d4a8 b018
.org 0x5d4aa
	mov r1, r8	@ 0005d4aa 4146
.org 0x5d4ac
	strb r1, [r0, #0]	@ 0005d4ac 0170
.org 0x5d4ae
	mov r2, r8	@ 0005d4ae 4246
.org 0x5d4b0
	str r2, [r6, #96]	@ 0005d4b0 3266
.org 0x5d4b2
	adds r0, r5, #0	@ 0005d4b2 281c
.org 0x5d4b4
	adds r0, #192	@ 0005d4b4 c030
.org 0x5d4b6
	ldr r1, [r5, #84]	@ 0005d4b6 696d
.org 0x5d4b8
	ldr r0, [r0, #0]	@ 0005d4b8 0068
.org 0x5d4ba
	adds r1, r1, r0	@ 0005d4ba 0918
.org 0x5d4bc
	lsls r0, r7, #1	@ 0005d4bc 7800
.org 0x5d4be
	subs r0, #1	@ 0005d4be 0138
.org 0x5d4c0
	ldr r2, [sp, #8]	@ 0005d4c0 029a
.org 0x5d4c2
	muls r0, r2	@ 0005d4c2 5043
.org 0x5d4c4
	adds r1, r1, r0	@ 0005d4c4 0918
.org 0x5d4c6
	str r1, [r6, #84]	@ 0005d4c6 7165
.org 0x5d4c8
	adds r1, r5, #0	@ 0005d4c8 291c
.org 0x5d4ca
	adds r1, #196	@ 0005d4ca c431
.org 0x5d4cc
	ldr r0, [r5, #88]	@ 0005d4cc a86d
.org 0x5d4ce
	ldr r1, [r1, #0]	@ 0005d4ce 0968
.org 0x5d4d0
	adds r0, r0, r1	@ 0005d4d0 4018
.org 0x5d4d2
	ldr r1, [sp, #12]	@ 0005d4d2 0399
.org 0x5d4d4
	adds r0, r0, r1	@ 0005d4d4 4018
.org 0x5d4d6
	str r0, [r6, #88]	@ 0005d4d6 b065
.org 0x5d4d8
	adds r4, r5, #0	@ 0005d4d8 2c1c
.org 0x5d4da
	adds r4, #180	@ 0005d4da b434
.org 0x5d4dc
	ldr r1, [r4, #0]	@ 0005d4dc 2168
.org 0x5d4de
	cmp r0, r1	@ 0005d4de 8842
.org 0x5d4e0
	blt.n 0x5d514	@ 0005d4e0 18db
.org 0x5d4e2
	adds r0, r5, #0	@ 0005d4e2 281c
.org 0x5d4e4
	movs r1, #0	@ 0005d4e4 0021
.org 0x5d4e6
	movs r2, #1	@ 0005d4e6 0122
.org 0x5d4e8
	bl 0x98314	@ 0005d4e8 3af014ff
.org 0x5d4ec
	ldr r0, [r6, #88]	@ 0005d4ec b06d
.org 0x5d4ee
	ldr r1, [r4, #0]	@ 0005d4ee 2168
.org 0x5d4f0
	str r1, [r6, #88]	@ 0005d4f0 b165
.org 0x5d4f2
	subs r1, r1, r0	@ 0005d4f2 091a
.org 0x5d4f4
	ldr r0, [r5, #88]	@ 0005d4f4 a86d
.org 0x5d4f6
	b.n 0x5d52e	@ 0005d4f6 1ae0
.org 0x5d4f8
	.byte 0xa4,0x97,0x12,0x08	@ 0005d4f8 data
.org 0x5d4fc
	.byte 0x9c,0x97,0x12,0x08	@ 0005d4fc data
.org 0x5d500
	.byte 0xf0,0xdb,0x02,0x02	@ 0005d500 data
.org 0x5d504
	.byte 0xa8,0xa7,0x85,0x08	@ 0005d504 data
.org 0x5d508
	.byte 0x10,0xa9,0x85,0x08	@ 0005d508 data
.org 0x5d50c
	.byte 0x44,0xa8,0x85,0x08	@ 0005d50c data
.org 0x5d510
	.byte 0x71,0x01,0x00,0x00	@ 0005d510 data
.org 0x5d514
	ldr r0, [r5, #88]	@ 0005d514 a86d
.org 0x5d516
	movs r2, #144	@ 0005d516 9022
.org 0x5d518
	lsls r2, r2, #6	@ 0005d518 9201
.org 0x5d51a
	adds r0, r0, r2	@ 0005d51a 8018
.org 0x5d51c
	cmp r0, r1	@ 0005d51c 8842
.org 0x5d51e
	blt.n 0x5d548	@ 0005d51e 13db
.org 0x5d520
	adds r0, r5, #0	@ 0005d520 281c
.org 0x5d522
	movs r1, #0	@ 0005d522 0021
.org 0x5d524
	movs r2, #1	@ 0005d524 0122
.org 0x5d526
	bl 0x98314	@ 0005d526 3af0f5fe
.org 0x5d52a
	ldr r0, [r4, #0]	@ 0005d52a 2068
.org 0x5d52c
	ldr r1, [pc, #12]	@ 0005d52c 0349
.org 0x5d52e
	adds r0, r0, r1	@ 0005d52e 4018
.org 0x5d530
	str r0, [r5, #88]	@ 0005d530 a865
.org 0x5d532
	movs r0, #5	@ 0005d532 0520
.org 0x5d534
	strb r0, [r5, #14]	@ 0005d534 a873
