@ FUN_080923f0  entry 0x080923f0  size 236
.thumb
.org 0x923f0
FUN_080923f0:
	push {r4, lr}	@ 000923f0 10b5
.org 0x923f2
	adds r4, r0, #0	@ 000923f2 041c
.org 0x923f4
	ldrb r0, [r4, #14]	@ 000923f4 a07b
.org 0x923f6
	cmp r0, #1	@ 000923f6 0128
.org 0x923f8
	beq.n 0x92488	@ 000923f8 46d0
.org 0x923fa
	cmp r0, #1	@ 000923fa 0128
.org 0x923fc
	bgt.n 0x92404	@ 000923fc 02dc
.org 0x923fe
	cmp r0, #0	@ 000923fe 0028
.org 0x92400
	beq.n 0x9240e	@ 00092400 05d0
.org 0x92402
	b.n 0x924e4	@ 00092402 6fe0
.org 0x92404
	cmp r0, #2	@ 00092404 0228
.org 0x92406
	beq.n 0x924b8	@ 00092406 57d0
.org 0x92408
	cmp r0, #3	@ 00092408 0328
.org 0x9240a
	beq.n 0x924ca	@ 0009240a 5ed0
.org 0x9240c
	b.n 0x924e4	@ 0009240c 6ae0
.org 0x9240e
	adds r1, r4, #0	@ 0009240e 211c
.org 0x92410
	adds r1, #37	@ 00092410 2531
.org 0x92412
	movs r0, #25	@ 00092412 1920
.org 0x92414
	strb r0, [r1, #0]	@ 00092414 0870
.org 0x92416
	ldrb r2, [r4, #18]	@ 00092416 a27c
.org 0x92418
	cmp r2, #0	@ 00092418 002a
.org 0x9241a
	beq.n 0x92424	@ 0009241a 03d0
.org 0x9241c
	ldrb r0, [r4, #10]	@ 0009241c a07a
.org 0x9241e
	movs r1, #16	@ 0009241e 1021
.org 0x92420
	orrs r0, r1	@ 00092420 0843
.org 0x92422
	b.n 0x9242a	@ 00092422 02e0
.org 0x92424
	ldrb r1, [r4, #10]	@ 00092424 a17a
.org 0x92426
	movs r0, #239	@ 00092426 ef20
.org 0x92428
	ands r0, r1	@ 00092428 0840
.org 0x9242a
	strb r0, [r4, #10]	@ 0009242a a072
.org 0x9242c
	movs r1, #1	@ 0009242c 0121
.org 0x9242e
	ands r1, r2	@ 0009242e 1140
.org 0x92430
	adds r0, r4, #0	@ 00092430 201c
.org 0x92432
	adds r0, #76	@ 00092432 4c30
.org 0x92434
	strb r1, [r0, #0]	@ 00092434 0170
.org 0x92436
	adds r3, r4, #0	@ 00092436 231c
.org 0x92438
	adds r3, #74	@ 00092438 4a33
.org 0x9243a
	lsls r1, r1, #4	@ 0009243a 0901
.org 0x9243c
	ldrb r2, [r3, #0]	@ 0009243c 1a78
.org 0x9243e
	movs r0, #17	@ 0009243e 1120
.org 0x92440
	negs r0, r0	@ 00092440 4042
.org 0x92442
	ands r0, r2	@ 00092442 1040
.org 0x92444
	orrs r0, r1	@ 00092444 0843
.org 0x92446
	strb r0, [r3, #0]	@ 00092446 1870
.org 0x92448
	ldrb r1, [r4, #18]	@ 00092448 a17c
.org 0x9244a
	lsls r0, r1, #1	@ 0009244a 4800
.org 0x9244c
	adds r0, r0, r1	@ 0009244c 4018
.org 0x9244e
	lsls r0, r0, #8	@ 0009244e 0002
.org 0x92450
	ldr r1, [pc, #88]	@ 00092450 1649
.org 0x92452
	adds r0, r0, r1	@ 00092452 4018
.org 0x92454
	str r0, [r4, #92]	@ 00092454 e065
.org 0x92456
	movs r0, #42	@ 00092456 2a20
.org 0x92458
	strb r0, [r4, #18]	@ 00092458 a074
.org 0x9245a
	adds r0, r4, #0	@ 0009245a 201c
.org 0x9245c
	adds r0, #116	@ 0009245c 7430
.org 0x9245e
	ldr r1, [pc, #80]	@ 0009245e 1449
.org 0x92460
	bl 0x5784	@ 00092460 73f790f9
.org 0x92464
	ldr r2, [pc, #76]	@ 00092464 134a
.org 0x92466
	ldrb r1, [r4, #10]	@ 00092466 a17a
.org 0x92468
	movs r0, #16	@ 00092468 1020
.org 0x9246a
	ands r0, r1	@ 0009246a 0840
.org 0x9246c
	lsls r0, r0, #24	@ 0009246c 0006
.org 0x9246e
	lsrs r0, r0, #24	@ 0009246e 000e
.org 0x92470
	negs r0, r0	@ 00092470 4042
.org 0x92472
	asrs r0, r0, #31	@ 00092472 c017
.org 0x92474
	movs r1, #2	@ 00092474 0221
.org 0x92476
	ands r0, r1	@ 00092476 0840
.org 0x92478
	adds r0, r0, r2	@ 00092478 8018
.org 0x9247a
	ldrh r1, [r0, #0]	@ 0009247a 0188
.org 0x9247c
	adds r0, r4, #0	@ 0009247c 201c
.org 0x9247e
	bl 0x1cf00	@ 0009247e 8af73ffd
.org 0x92482
	ldrb r0, [r4, #14]	@ 00092482 a07b
.org 0x92484
	adds r0, #1	@ 00092484 0130
.org 0x92486
	strb r0, [r4, #14]	@ 00092486 a073
.org 0x92488
	ldr r0, [r4, #84]	@ 00092488 606d
.org 0x9248a
	ldr r1, [r4, #92]	@ 0009248a e16d
.org 0x9248c
	adds r0, r0, r1	@ 0009248c 4018
.org 0x9248e
	str r0, [r4, #84]	@ 0009248e 6065
.org 0x92490
	ldrb r0, [r4, #18]	@ 00092490 a07c
.org 0x92492
	subs r0, #1	@ 00092492 0138
.org 0x92494
	strb r0, [r4, #18]	@ 00092494 a074
.org 0x92496
	lsls r0, r0, #24	@ 00092496 0006
.org 0x92498
	cmp r0, #0	@ 00092498 0028
.org 0x9249a
	bne.n 0x924a2	@ 0009249a 02d1
.org 0x9249c
	ldrb r0, [r4, #14]	@ 0009249c a07b
.org 0x9249e
	adds r0, #1	@ 0009249e 0130
.org 0x924a0
	strb r0, [r4, #14]	@ 000924a0 a073
.org 0x924a2
	adds r0, r4, #0	@ 000924a2 201c
.org 0x924a4
	bl 0x1cff0	@ 000924a4 8af7a4fd
.org 0x924a8
	b.n 0x924e4	@ 000924a8 1ce0
.org 0x924aa
	.byte 0x00	@ 000924aa data
.org 0x924ab
	.byte 0x00	@ 000924ab data
.org 0x924ac
	.byte 0x80,0xfe,0xff,0xff	@ 000924ac data
.org 0x924b0
	.byte 0x58,0x04,0x86,0x08	@ 000924b0 data
.org 0x924b4
	.byte 0xae,0x04,0x86,0x08	@ 000924b4 data
.org 0x924b8
	movs r0, #16	@ 000924b8 1020
.org 0x924ba
	strb r0, [r4, #18]	@ 000924ba a074
.org 0x924bc
	adds r1, r4, #0	@ 000924bc 211c
.org 0x924be
	adds r1, #37	@ 000924be 2531
.org 0x924c0
	movs r0, #23	@ 000924c0 1720
.org 0x924c2
	strb r0, [r1, #0]	@ 000924c2 0870
.org 0x924c4
	ldrb r0, [r4, #14]	@ 000924c4 a07b
.org 0x924c6
	adds r0, #1	@ 000924c6 0130
.org 0x924c8
	strb r0, [r4, #14]	@ 000924c8 a073
.org 0x924ca
	ldrb r0, [r4, #18]	@ 000924ca a07c
.org 0x924cc
	subs r0, #1	@ 000924cc 0138
.org 0x924ce
	strb r0, [r4, #18]	@ 000924ce a074
.org 0x924d0
	lsls r0, r0, #24	@ 000924d0 0006
.org 0x924d2
	lsrs r1, r0, #24	@ 000924d2 010e
.org 0x924d4
	cmp r1, #0	@ 000924d4 0029
.org 0x924d6
	bne.n 0x924de	@ 000924d6 02d1
.org 0x924d8
	movs r0, #4	@ 000924d8 0420
.org 0x924da
	strb r0, [r4, #13]	@ 000924da 6073
